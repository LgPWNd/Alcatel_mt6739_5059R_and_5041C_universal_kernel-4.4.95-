
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <linux/semaphore.h>
#include <linux/platform_device.h>
#include <linux/device.h>
#include <mt-plat/mtk_io.h>
#include <mt-plat/sync_write.h>

#include <mt_emi.h>
#include <bwl_platform.h>
#include "bwl_v1.h"

#ifdef DECS_ON_SSPM
#include <dramc.h>
#endif

DEFINE_SEMAPHORE(bwl_sem);

static void __iomem *CEN_EMI_BASE;
static void __iomem *CHN_EMI_BASE[MAX_CH];

#ifdef DECS_ON_SSPM
static void __iomem *LAST_EMI_BASE;
static unsigned int init_status;
#endif

/* reg table and pointer*/
static struct scn_reg_t (*env_cen_reg)[BWL_CEN_MAX];
static struct scn_reg_t cen_reg[BWL_ENV_MAX][BWL_SCN_MAX][BWL_CEN_MAX] = {
#define SET_BWL_CEN_REG(ENV, SCN, OFFSET, VAL) \
	[ENV][SCN][BWL_CEN_##OFFSET].offset = OFFSET, \
	[ENV][SCN][BWL_CEN_##OFFSET].value = VAL,
#define SET_BWL_CHN_REG(ENV, SCN, OFFSET, VAL)
#include <bwl_scenario.h>
#undef SET_BWL_CEN_REG
#undef SET_BWL_CHN_REG
};
static struct scn_reg_t (*env_chn_reg)[BWL_CHN_MAX];
static struct scn_reg_t chn_reg[BWL_ENV_MAX][BWL_SCN_MAX][BWL_CHN_MAX] = {
#define SET_BWL_CEN_REG(ENV, SCN, OFFSET, VAL)
#define SET_BWL_CHN_REG(ENV, SCN, OFFSET, VAL) \
	[ENV][SCN][BWL_CHN_##OFFSET].offset = OFFSET, \
	[ENV][SCN][BWL_CHN_##OFFSET].value = VAL,
#include <bwl_scenario.h>
#undef SET_BWL_CEN_REG
#undef SET_BWL_CHN_REG
};

/* BWL control table */
static unsigned int ctrl_table[BWL_SCN_MAX];
static unsigned int cur_scn = 0xFFFFFFFF;
static struct scn_name_t scn_name[BWL_SCN_MAX] = {
#define SET_BWL_CEN_REG(ENV, SCN, OFFSET, VAL) \
	[SCN].name = #SCN,
#define SET_BWL_CHN_REG(ENV, SCN, OFFSET, VAL)
#include <bwl_scenario.h>
#undef SET_BWL_CEN_REG
#undef SET_BWL_CHN_REG
};

void set_emi_reg(unsigned int scn)
{
	int i, j;
	unsigned int value, offset;

	for (i = 0; i < BWL_CEN_MAX; i++) {
		value = env_cen_reg[scn][i].value;
		offset = env_cen_reg[scn][i].offset;

		mt_reg_sync_writel(value, IOMEM(CEN_EMI_BASE + offset));
	}
	for (i = 0; i < BWL_CHN_MAX; i++) {
		value = env_chn_reg[scn][i].value;
		offset = env_chn_reg[scn][i].offset;

		for (j = 0; j < MAX_CH; j++) {
			mt_reg_sync_writel(value,
				IOMEM(CHN_EMI_BASE[j] + offset));
		}
	}

}

/* op: 0 for disable, 1 for enable */
int bwl_ctrl(unsigned int scn, unsigned int op)
{
	int i;
	int highest;

	if (scn >= BWL_SCN_MAX)
		return -1;

	if (op > 1)
		return -1;

	if (in_interrupt())
		return -1;

	down(&bwl_sem);
#ifdef DECS_ON_SSPM
	if (init_status) {
		if (acquire_bwl_ctrl(LAST_EMI_BASE)) {
			up(&bwl_sem);
			return -1;
		}
	}
#endif

	if (op == 1)
		ctrl_table[scn]++;
	else if (op == 0) {
		if (ctrl_table[scn] != 0)
			ctrl_table[scn]--;
	}

	/* find the scenario with the highest priority */
	highest = -1;
	for (i = 0; i < BWL_SCN_MAX; i++) {
		if (ctrl_table[i] != 0) {
			highest = i;
			break;
		}
	}
	if (highest == -1)
		highest = SCN_DEFAULT;

	/* set new EMI bandwidth limiter value */
	if (highest != cur_scn) {
		set_emi_reg(highest);
		cur_scn = highest;
	}

#ifdef DECS_ON_SSPM
	if (init_status)
		release_bwl_ctrl(LAST_EMI_BASE);
	init_status = 1;
#endif
	up(&bwl_sem);

	return 0;
}

static ssize_t scn_show(struct device_driver *driver, char *buf)
{
	ssize_t ret = 0;
	unsigned int offset;
	int i, j;

	if (cur_scn >= BWL_SCN_MAX)
		return sprintf(buf, "none\n");

	ret += snprintf(buf, 64, "current scenario: %s\n", scn_name[cur_scn].name);
	ret += snprintf(buf + ret, 32, "%s\n", scn_name[cur_scn].name);

	for (i = 0; i < BWL_CEN_MAX; i++) {
		if (ret >= PAGE_SIZE)
			return strlen(buf);

		offset = env_cen_reg[cur_scn][i].offset;

		ret += snprintf(buf + ret, PAGE_SIZE - ret, "CEN 0x%x: 0x%x\n",
			offset, readl(IOMEM(CEN_EMI_BASE + offset)));
	}

	for (i = 0; i < BWL_CHN_MAX; i++) {
		offset = env_chn_reg[cur_scn][i].offset;

		for (j = 0; j < MAX_CH; j++) {
			if (ret >= PAGE_SIZE)
				return strlen(buf);

			ret += snprintf(buf + ret, PAGE_SIZE - ret,
				"CH%d 0x%x:0x%x\n", j, offset,
				readl(IOMEM(CHN_EMI_BASE[j] + offset)));
		}
	}

	for (i = 0; i < BWL_SCN_MAX; i++) {
		if (ret >= PAGE_SIZE)
			return strlen(buf);

		ret += snprintf(buf + ret, PAGE_SIZE - ret, "%s = 0x%x\n",
			scn_name[i].name, ctrl_table[i]);
	}

	return strlen(buf);
}

static ssize_t scn_store(struct device_driver *driver,
	const char *buf, size_t count)
{
	int i;
	char *name;

	for (i = 0; i < BWL_SCN_MAX; i++) {
		name = scn_name[i].name;

		if (strncmp(buf, name, strlen(name)))
			continue;

		if (!strncmp(buf + strlen(name) + 1,
			"ON", strlen("ON"))) {

			bwl_ctrl(i, 1);
			/* pr_info("[BWL] %s ON\n", name); */
			break;
		} else if (!strncmp(buf + strlen(name) + 1,
			"OFF", strlen("OFF"))) {

			bwl_ctrl(i, 0);
			/* pr_info("[BWL] %s OFF\n", name); */
			break;
		}
	}

	return count;
}

DRIVER_ATTR(concurrency_scenario, 0644, scn_show, scn_store);

void bwl_init(struct platform_driver *emi_ctrl)
{
	int i;
	int ret;
	unsigned int env;

	CEN_EMI_BASE = mt_cen_emi_base_get();
	for (i = 0; i < MAX_CH; i++)
		CHN_EMI_BASE[i] = mt_chn_emi_base_get(i);

#ifdef DECS_ON_SSPM
	LAST_EMI_BASE = get_dbg_info_base(0xE31C);
#endif

	env = decode_bwl_env(get_dram_type(), get_ch_num(), get_rk_num());
	env_cen_reg = cen_reg[env];
	env_chn_reg = chn_reg[env];

	bwl_ctrl(SCN_DEFAULT, 1);

	ret = driver_create_file(&emi_ctrl->driver, &driver_attr_concurrency_scenario);
	if (ret)
		pr_err("[BWL] fail to create concurrency_scenario\n");
}
