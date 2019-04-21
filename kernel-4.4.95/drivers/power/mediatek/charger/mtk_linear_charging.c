
#include <linux/init.h>		/* For init/exit macros */
#include <linux/module.h>	/* For MODULE_ marcros  */
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/interrupt.h>
#include <linux/spinlock.h>
#include <linux/platform_device.h>
#include <linux/device.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/delay.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/wait.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/poll.h>
#include <linux/power_supply.h>
#include <linux/wakelock.h>
#include <linux/time.h>
#include <linux/mutex.h>
#include <linux/kthread.h>
#include <linux/proc_fs.h>
#include <linux/platform_device.h>
#include <linux/seq_file.h>
#include <linux/scatterlist.h>
#include <linux/suspend.h>

#include <mt-plat/mtk_boot.h>
#include <musb_core.h>
#include "mtk_charger_intf.h"
#include "mtk_linear_charging.h"

//Begin added by shiqiang.chen.hz on 20180104, for hold state of charging .
#define CHARGING_HOLD_STATE 1

#if CHARGING_HOLD_STATE
void check_charging_hold_state(struct charger_manager *info);
extern bool charging_hold_state;
extern bool charging_hold_debug;
#endif
//End added by shiqiang.chen.hz on 20180104, for hold state of charging .

extern int AP_temperature;/*Added by rongxiao.deng for task 5860212 on 2018.01.08*/

static void _disable_all_charging(struct charger_manager *info)
{
	charger_dev_enable(info->chg1_dev, false);
}

static void linear_chg_select_charging_current_limit(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	struct charger_data *pdata;
	u32 ichg1_min = 0;
	int ret = 0;

	int current_AP_temperature;//Modified by rongxiao.deng for task 5474091 on 2017/11/03
    	current_AP_temperature = AP_temperature;

	pdata = &info->chg1_data;
	mutex_lock(&algo_data->ichg_access_mutex);

	if (pdata->force_charging_current > 0) {
		pdata->charging_current_limit = pdata->force_charging_current;
		goto done;
	}

	if (info->usb_unlimited && (info->chr_type == STANDARD_HOST || info->chr_type == CHARGING_HOST)) {
		pdata->charging_current_limit = info->data.ac_charger_current;
		goto done;
	}

	if (info->chr_type == STANDARD_HOST) {
		if (IS_ENABLED(CONFIG_USBIF_COMPLIANCE)) {
			if (info->usb_state == USB_SUSPEND)
				pdata->charging_current_limit = info->data.usb_charger_current_suspend;
			else if (info->usb_state == USB_UNCONFIGURED)
				pdata->charging_current_limit = info->data.usb_charger_current_unconfigured;
			else if (info->usb_state == USB_CONFIGURED)
				pdata->charging_current_limit = info->data.usb_charger_current_configured;
			else
				pdata->charging_current_limit = info->data.usb_charger_current_unconfigured;
		} else {
			pdata->charging_current_limit = info->data.usb_charger_current;	/* it can be larger */
		}
	} else if (info->chr_type == NONSTANDARD_CHARGER) {
		pdata->charging_current_limit = info->data.non_std_ac_charger_current;
	} else if (info->chr_type == STANDARD_CHARGER) {
		pdata->charging_current_limit = info->data.ac_charger_current;
		/*Begin Added by rongxiao.deng for task 5860212 on 2018.01.08*/
		if(current_AP_temperature <= 40){
			pr_info("%s, current_AP_temperature:%d, recover normal ac charging current 1000ma. \n", __func__,current_AP_temperature);	//added by shiqiang.chen.hz on 20180125, add charging_current_limit log
            		pdata->charging_current_limit = info->data.ac_charger_current;
        	}
        	else if(current_AP_temperature > 46){
			pr_info("%s, current_AP_temperature:%d, limit ac charging current 700ma. \n", __func__,current_AP_temperature);	//added by shiqiang.chen.hz on 20180125, add charging_current_limit log
       			//pdata->charging_current_limit = info->data.usb_charger_current;
			pdata->charging_current_limit = 700000; //modified by shiqiang.chen.hz for defect 5873566 on 2018.02.06, increase max_charging_time for monkey hanging camera module test.
        	}
		/*End Added by rongxiao.deng for task 5860212 on 2018.01.08*/
	} else if (info->chr_type == CHARGING_HOST) {
		pdata->charging_current_limit = info->data.charging_host_charger_current;
	} else if (info->chr_type == APPLE_1_0A_CHARGER) {
		pdata->charging_current_limit = info->data.apple_1_0a_charger_current;
	} else if (info->chr_type == APPLE_2_1A_CHARGER) {
		pdata->charging_current_limit = info->data.apple_2_1a_charger_current;
	}

	if (info->enable_sw_jeita) {
		if (IS_ENABLED(CONFIG_USBIF_COMPLIANCE) && info->chr_type == STANDARD_HOST)
			pr_debug("USBIF & STAND_HOST skip current check\n");
		else {
			if (info->sw_jeita.sm == TEMP_T0_TO_T1)
				pdata->charging_current_limit = 350000; /* TODO: 200mA? */
		}
	}

	if (pdata->thermal_charging_current_limit != -1)
		if (pdata->thermal_charging_current_limit < pdata->charging_current_limit)
			pdata->charging_current_limit = pdata->thermal_charging_current_limit;

//Begin added by shiqiang.chen.hz for defect 6208777 on 20180418, limit charging current at 1000ma.
	if(pdata->charging_current_limit > 1000000)
		pdata->charging_current_limit = 1000000;
//End added by shiqiang.chen.hz for defect 6208777 on 20180418, limit charging current at 1000ma.

done:
	ret = charger_dev_get_min_charging_current(info->chg1_dev, &ichg1_min);
	if (ret != -ENOTSUPP && pdata->charging_current_limit < ichg1_min)
		pdata->charging_current_limit = 0;

	chr_err("force:%d thermal:%d setting:%d type:%d usb_unlimited:%d usbif:%d usbsm:%d\n",
		pdata->force_charging_current,
		pdata->thermal_charging_current_limit,
		pdata->charging_current_limit,
		info->chr_type, info->usb_unlimited,
		IS_ENABLED(CONFIG_USBIF_COMPLIANCE), info->usb_state);

	charger_dev_set_charging_current(info->chg1_dev, pdata->charging_current_limit);

	if (pdata->charging_current_limit > 0 && info->can_charging)
		charger_dev_enable(info->chg1_dev, true);

	mutex_unlock(&algo_data->ichg_access_mutex);
}

static void linear_chg_select_cv(struct charger_manager *info)
{
	u32 constant_voltage;

	if (info->enable_sw_jeita)
		if (info->sw_jeita.cv != 0) {
			charger_dev_set_constant_voltage(info->chg1_dev, info->sw_jeita.cv);
			return;
		}

	/* dynamic cv */
	constant_voltage = info->data.battery_cv;
	mtk_get_dynamic_cv(info, &constant_voltage);

	charger_dev_set_constant_voltage(info->chg1_dev, constant_voltage);
}

static void linear_chg_turn_on_charging(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	bool charging_enable = true;

	if (algo_data->state == CHR_ERROR) {
		charging_enable = false;
		chr_err("[charger]Charger Error, turn OFF charging !\n");
	} else if ((get_boot_mode() == META_BOOT) || ((get_boot_mode() == ADVMETA_BOOT))) {
		charging_enable = false;
		chr_err("[charger]In meta or advanced meta mode, disable charging\n");
	} else {
		linear_chg_select_charging_current_limit(info);
		if (info->chg1_data.charging_current_limit == 0) {
			charging_enable = false;
			chr_err("[charger]charging current is set 0mA, turn off charging\n");
		} else {
			linear_chg_select_cv(info);
		}
	}

	charger_dev_enable(info->chg1_dev, charging_enable);
}

static int mtk_linear_charging_plug_in(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;

	algo_data->state = CHR_CC;
	info->polling_interval = CHARGING_INTERVAL;
	algo_data->disable_charging = false;
	get_monotonic_boottime(&algo_data->charging_begin_time);
	charger_manager_notifier(info, CHARGER_NOTIFY_START_CHARGING);

	return 0;
}

static int mtk_linear_charging_plug_out(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;

	algo_data->total_charging_time = 0;
	algo_data->cc_charging_time = 0;
	algo_data->topoff_charging_time = 0;
	charger_manager_notifier(info, CHARGER_NOTIFY_STOP_CHARGING);
	return 0;
}

static int mtk_linear_charging_do_charging(struct charger_manager *info, bool en)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;

	pr_info("%s en:%d %s\n", __func__, en, info->algorithm_name);
	if (en) {
		algo_data->disable_charging = false;
		algo_data->state = CHR_CC;
		get_monotonic_boottime(&algo_data->charging_begin_time);
		charger_manager_notifier(info, CHARGER_NOTIFY_NORMAL);
	} else {
		algo_data->disable_charging = true;
		algo_data->state = CHR_ERROR;
		charger_manager_notifier(info, CHARGER_NOTIFY_ERROR);

		_disable_all_charging(info);
	}

	return 0;
}

static bool charging_full_check(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	static u32 full_check_count;
	bool chg_full_status = false;
	int chg_current = pmic_get_charging_current() * 1000; /* uA */

	if (chg_current > algo_data->chg_full_current)
		full_check_count = 0;
	else {
		full_check_count++;
		if (full_check_count >= 6) {
			full_check_count = 0;
			chg_full_status = true;
			charger_dev_do_event(info->chg1_dev, EVENT_EOC, 0);
			pr_notice("battery full on ichg = %d uA\n",
				chg_current);
		}
	}

	return chg_full_status;
}

/* return false if total charging time exceeds max_charging_time */
static bool mtk_linear_check_charging_time(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	struct timespec time_now;

	if (info->enable_sw_safety_timer) {
		get_monotonic_boottime(&time_now);
		chr_debug("%s: begin: %ld, now: %ld\n", __func__,
			algo_data->charging_begin_time.tv_sec, time_now.tv_sec);

		if (algo_data->total_charging_time >= info->data.max_charging_time) {
			chr_err("%s: SW safety timeout: %d sec > %d sec\n",
				__func__, algo_data->total_charging_time,
				info->data.max_charging_time);
			charger_dev_notify(info->chg1_dev, CHARGER_DEV_NOTIFY_SAFETY_TIMEOUT);
			return false;
		}
	}

	return true;
}

static int mtk_linear_chr_cc(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	struct timespec time_now, charging_time;
	u32 vbat;

	/* check bif */
	if (IS_ENABLED(CONFIG_MTK_BIF_SUPPORT)) {
		if (pmic_is_bif_exist() != 1) {
			chr_err("CONFIG_MTK_BIF_SUPPORT but no bif , stop charging\n");
			algo_data->state = CHR_ERROR;
			charger_manager_notifier(info, CHARGER_NOTIFY_ERROR);
		}
	}

	get_monotonic_boottime(&time_now);
	charging_time = timespec_sub(time_now, algo_data->charging_begin_time);

	algo_data->cc_charging_time = charging_time.tv_sec;
	algo_data->topoff_charging_time = 0;
	algo_data->total_charging_time = charging_time.tv_sec;

	/* discharge for 1 second and charge for 9 seconds */
	charger_dev_enable(info->chg1_dev, false);
	msleep(1000);

	vbat = battery_get_bat_voltage() * 1000; /* uV */
	if (vbat > algo_data->topoff_voltage) {
		algo_data->state = CHR_TOPOFF;
		get_monotonic_boottime(&algo_data->topoff_begin_time);
		pr_notice("enter TOPOFF mode on vbat = %d uV\n", vbat);
	}

	linear_chg_turn_on_charging(info);

	return 0;
}

//Begin added by shiqiang.chen.hz on 20180104, for hold state of charging .
#if CHARGING_HOLD_STATE
int mtk_linear_chr_hold(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	int temperature = info->battery_temperature; //add by shiqiang.chen for defect 5960055 on 2018.02.07,add control 80%_charging_hold in 46-54C battery temp. 

	algo_data->total_charging_time = 0;
	algo_data->topoff_charging_time = 0;
	algo_data->cc_charging_time = 0; //add by shiqiang.chen for defect 5960055 on 2018.02.07

//Begin added by shiqiang.chen.hz for MiniSw on 20180104, for hold state of charging 
#ifdef TARGET_BUILD_MMITEST
	if(battery_get_bat_uisoc() <= 65 && (get_boot_mode() == KERNEL_POWER_OFF_CHARGING_BOOT
		|| get_boot_mode() == LOW_POWER_OFF_CHARGING_BOOT))
	{
		algo_data->state = CHR_CC;
		charger_manager_notifier(info, CHARGER_NOTIFY_START_CHARGING);	//notify to battery ,then notify to user via netlink
		get_monotonic_boottime(&algo_data->charging_begin_time); //modified charging_begin_time for exit_hold state.
		printk("[BATTERY] exit hold, soc:%d, boot mode:%d", battery_get_bat_uisoc(), get_boot_mode());
	}
#endif
//End added by shiqiang.chen.hz for MiniSw on 20180104, for hold state of charging 
	if(charging_hold_debug){
		if(!charging_hold_state) {
			algo_data->state = CHR_CC;
			charger_manager_notifier(info, CHARGER_NOTIFY_START_CHARGING);	//notify to battery ,then notify to user via netlink
			get_monotonic_boottime(&algo_data->charging_begin_time); //modified charging_begin_time for exit_hold state.
			printk("[BATTERY] exit hold, soc:%d, boot mode:%d", battery_get_bat_uisoc(), get_boot_mode());
		}
	}
//Begin add by shiqiang.chen for defect 5960055 on 2018.02.07,add control 80%_charging_hold in 46-54C battery temp.
	if(temperature <= 45 || battery_get_bat_uisoc() <= 75){
		algo_data->state = CHR_CC;
		charger_manager_notifier(info, CHARGER_NOTIFY_START_CHARGING);	//notify to battery ,then notify to user via netlink
		get_monotonic_boottime(&algo_data->charging_begin_time);	//modified charging_begin_time for exit_hold state.
		printk("[BATTERY] exit hold, temperature:%d, soc:%d, boot mode:%d", temperature, battery_get_bat_uisoc(), get_boot_mode());	
	}
//End add by shiqiang.chen for defect 5960055 on 2018.02.07,add control 80%_charging_hold in 46-54C battery temp.
	
	_disable_all_charging(info);

	return 0;
}

void check_charging_hold_state(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	int temperature = info->battery_temperature; //add by shiqiang.chen for defect 5960055 on 2018.02.07,add control 80%_charging_hold in 46-54C battery temp. 

	if(algo_data->state == CHR_HOLD || algo_data->state == CHR_ERROR)
		return;

//Begin added by shiqiang.chen.hz for MiniSw on 20171224, for hold state of charging 
#ifdef TARGET_BUILD_MMITEST
	if(battery_get_bat_uisoc() >= 70 && (get_boot_mode() == KERNEL_POWER_OFF_CHARGING_BOOT
		|| get_boot_mode() == LOW_POWER_OFF_CHARGING_BOOT))
	{
		algo_data->state = CHR_HOLD;
		charger_manager_notifier(info, CHARGER_NOTIFY_STOP_CHARGING);	//notifier to battery ,then to user space
	}
#endif
//End added by shiqiang.chen.hz for MiniSw on 20171224, for hold state of charging
	if(charging_hold_debug){
		if(charging_hold_state) {
			algo_data->state = CHR_HOLD;
			charger_manager_notifier(info, CHARGER_NOTIFY_STOP_CHARGING);	//notifier to battery ,then to user space
		}
	}
//Begin add by shiqiang.chen for defect 5960055 on 2018.02.07,add control 80%_charging_hold in 46-54C battery temp. 
	if(temperature >= 46 && battery_get_bat_uisoc() >= 80){
		algo_data->state = CHR_HOLD;
		charger_manager_notifier(info, CHARGER_NOTIFY_STOP_CHARGING);	//notifier to battery ,then to user space
		printk("battery temp:%d , soc:%d , stop charging,entry hold state .\n", temperature, battery_get_bat_uisoc());	
	}
//End add by shiqiang.chen for defect 5960055 on 2018.02.07,add control 80%_charging_hold in 46-54C battery temp. 

}
#endif
//End added by shiqiang.chen.hz on 20180104, for hold state of charging .

static int mtk_linear_chr_topoff(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	struct timespec time_now, charging_time, topoff_time;

	/* check bif */
	if (IS_ENABLED(CONFIG_MTK_BIF_SUPPORT)) {
		if (pmic_is_bif_exist() != 1) {
			chr_err("CONFIG_MTK_BIF_SUPPORT but no bif , stop charging\n");
			algo_data->state = CHR_ERROR;
			charger_manager_notifier(info, CHARGER_NOTIFY_ERROR);
		}
	}

	get_monotonic_boottime(&time_now);
	charging_time = timespec_sub(time_now, algo_data->charging_begin_time);
	topoff_time = timespec_sub(time_now, algo_data->topoff_begin_time);

	algo_data->cc_charging_time = 0;
	algo_data->topoff_charging_time = topoff_time.tv_sec;
	algo_data->total_charging_time = charging_time.tv_sec;

	linear_chg_turn_on_charging(info);

	if (algo_data->topoff_charging_time >= MAX_TOPOFF_CHARGING_TIME
	    || charging_full_check(info) == true) {
		algo_data->state = CHR_BATFULL;

		/* Disable charging */
		charger_dev_enable(info->chg1_dev, false);
		pr_notice("%s: disable charging\n", __func__);
	}

	return 0;
}

static int mtk_linear_chr_err(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;

	if (info->enable_sw_jeita) {
		if ((info->sw_jeita.sm == TEMP_BELOW_T0) || (info->sw_jeita.sm == TEMP_ABOVE_T4))
			info->sw_jeita.error_recovery_flag = false;

		if ((info->sw_jeita.error_recovery_flag == false) &&
			(info->sw_jeita.sm != TEMP_BELOW_T0) && (info->sw_jeita.sm != TEMP_ABOVE_T4)) {
			info->sw_jeita.error_recovery_flag = true;
			algo_data->state = CHR_CC;
			get_monotonic_boottime(&algo_data->charging_begin_time);
		}
	}

	algo_data->total_charging_time = 0;
	algo_data->cc_charging_time = 0;
	algo_data->topoff_charging_time = 0;

	_disable_all_charging(info);
	return 0;
}

static int mtk_linear_chr_full(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	u32 vbat;
	bool is_recharging = false;

	algo_data->total_charging_time = 0;
	algo_data->cc_charging_time = 0;
	algo_data->topoff_charging_time = 0;

	/*
	 * If CV is set to lower value by JEITA,
	 * Reset CV to normal value if temperture is in normal zone
	 */
	linear_chg_select_cv(info);
	info->polling_interval = CHARGING_FULL_INTERVAL;

	vbat = battery_get_bat_voltage() * 1000; /* uV */
	if (info->enable_sw_jeita && info->sw_jeita.cv != 0) {
		if (vbat < (info->sw_jeita.cv - algo_data->recharge_offset))
			is_recharging = true;
	} else {
		if (vbat < (info->data.battery_cv - algo_data->recharge_offset))
			is_recharging = true;
	}

	if (is_recharging) {
		algo_data->state = CHR_CC;
		charger_dev_do_event(info->chg1_dev, EVENT_RECHARGE, 0);
		info->enable_dynamic_cv = true;
		get_monotonic_boottime(&algo_data->charging_begin_time);
		pr_notice("battery recharging on vbat = %d uV\n", vbat);
		info->polling_interval = CHARGING_INTERVAL;
	}

	return 0;
}

static int mtk_linear_charging_current(struct charger_manager *info)
{
	linear_chg_select_charging_current_limit(info);
	return 0;
}

static int mtk_linear_charging_run(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	int ret = 0;

	pr_info("%s [%d], timer=%d %d %d\n", __func__, algo_data->state,
		algo_data->cc_charging_time, algo_data->topoff_charging_time,
		algo_data->total_charging_time);

	charger_dev_kick_wdt(info->chg1_dev);

	switch (algo_data->state) {
	case CHR_CC:
		ret = mtk_linear_chr_cc(info);
		break;

	case CHR_TOPOFF:
		ret = mtk_linear_chr_topoff(info);
		break;

	case CHR_BATFULL:
		ret = mtk_linear_chr_full(info);
		break;

//Begin added by shiqiang.chen.hz on 20180104, for hold state of charging .
#if CHARGING_HOLD_STATE
	case CHR_HOLD:
		ret = mtk_linear_chr_hold(info);
		break;
#endif
//End added by shiqiang.chen.hz on 20180104, for hold state of charging .

	case CHR_ERROR:
		ret = mtk_linear_chr_err(info);
		break;
	}

//Begin added by shiqiang.chen.hz on 20180104, for hold state of charging .
#if CHARGING_HOLD_STATE
	check_charging_hold_state(info);
#endif
//End added by shiqiang.chen.hz on 20180104, for hold state of charging .

	mtk_linear_check_charging_time(info);

	charger_dev_dump_registers(info->chg1_dev);
	return 0;
}

static int linear_charger_dev_event(struct notifier_block *nb, unsigned long event, void *v)
{
	struct charger_manager *info = container_of(nb, struct charger_manager, chg1_nb);
	struct chgdev_notify *data = v;

	chr_debug("%s %ld", __func__, event);

	switch (event) {
	case CHARGER_DEV_NOTIFY_EOC:
		charger_manager_notifier(info, CHARGER_NOTIFY_EOC);
		pr_info("%s: end of charge\n", __func__);
		break;
	case CHARGER_DEV_NOTIFY_RECHG:
		charger_manager_notifier(info, CHARGER_NOTIFY_START_CHARGING);
		pr_info("%s: recharge\n", __func__);
		break;
	case CHARGER_DEV_NOTIFY_SAFETY_TIMEOUT:
		info->safety_timeout = true;
		pr_info("%s: safety timer timeout\n", __func__);
		break;
	case CHARGER_DEV_NOTIFY_VBUS_OVP:
		info->vbusov_stat = data->vbusov_stat;
		pr_info("%s: vbus ovp = %d\n", __func__, info->vbusov_stat);
		break;
	default:
		return NOTIFY_DONE;
	}

	if (info->chg1_dev->is_polling_mode == false)
		_wake_up_charger(info);

	return NOTIFY_DONE;
}

static int mtk_linear_charger_parse_dt(struct charger_manager *info)
{
	int ret = 0;
	struct linear_charging_alg_data *algo_data = info->algorithm_data;
	struct device *dev = &(info->pdev->dev);
	struct device_node *np = dev->of_node;
	unsigned int boot_mode = get_boot_mode(); //added by shiqiang.chen.hz on 20171130,for poweroff_charging chg_full_current
	u32 val;

	if (of_property_read_u32(np, "recharge_offset", &val) >= 0) {
		algo_data->recharge_offset = val;
	} else {
		chr_err("use default RECHARGE_OFFSET: %d\n", RECHARGE_OFFSET);
		algo_data->recharge_offset = RECHARGE_OFFSET;
	}

	if (of_property_read_u32(np, "topoff_voltage", &val) >= 0) {
		algo_data->topoff_voltage = val;
	} else {
		chr_err("use default TOPOFF_VOLTAGE: %d\n", TOPOFF_VOLTAGE);
		algo_data->topoff_voltage = TOPOFF_VOLTAGE;
	}

	if (of_property_read_u32(np, "chg_full_current", &val) >= 0) {
		algo_data->chg_full_current = val;
//Begin added by shiqiang.chen.hz on 20171130,for poweroff_charging chg_full_current
		if(boot_mode == KERNEL_POWER_OFF_CHARGING_BOOT || boot_mode == LOW_POWER_OFF_CHARGING_BOOT)
			algo_data->chg_full_current = 150000;
//End added by shiqiang.chen.hz on 20171130,for poweroff_charging chg_full_current
	} else {
		chr_err("use default CHG_FULL_CURRENT: %d\n", CHG_FULL_CURRENT);
		algo_data->chg_full_current = CHG_FULL_CURRENT;
	}

	return ret;
}

int mtk_linear_charging_init(struct charger_manager *info)
{
	struct linear_charging_alg_data *algo_data;

	algo_data = devm_kzalloc(&info->pdev->dev, sizeof(struct linear_charging_alg_data), GFP_KERNEL);
	if (!algo_data)
		return -ENOMEM;

	info->chg1_dev = get_charger_by_name("primary_chg");
	if (info->chg1_dev)
		chr_err("Found primary charger [%s]\n", info->chg1_dev->props.alias_name);
	else
		chr_err("*** Error : can't find primary charger [%s]***\n", "primary_chg");

	info->algorithm_data = algo_data;
	mtk_linear_charger_parse_dt(info);

	mutex_init(&algo_data->ichg_access_mutex);

	info->do_algorithm = mtk_linear_charging_run;
	info->plug_in = mtk_linear_charging_plug_in;
	info->plug_out = mtk_linear_charging_plug_out;
	info->do_charging = mtk_linear_charging_do_charging;
	info->do_event = linear_charger_dev_event;
	info->change_current_setting = mtk_linear_charging_current;

	return 0;
}
