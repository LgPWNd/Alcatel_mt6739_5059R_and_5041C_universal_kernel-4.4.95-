
#include "disp_dts_gpio.h"
#include "disp_helper.h"
#include <linux/kernel.h> /* printk */
#include <linux/pinctrl/consumer.h>
#include "disp_drv_log.h"

static struct pinctrl *this_pctrl; /* static pinctrl instance */

/* DTS state mapping name */
static const char *this_state_name[DTS_GPIO_STATE_MAX] = {
	"mode_te_gpio",
	"mode_te_te",
	"mode_te1_te",
	"lcm_rst_out0_gpio",
	"lcm_rst_out1_gpio",
	"lcm1_rst_out0_gpio",
	"lcm1_rst_out1_gpio",
	"lcd_bias_enp0_gpio",
	"lcd_bias_enp1_gpio"
};

/* pinctrl implementation */
static long _set_state(const char *name)
{
	long ret = 0;
	struct pinctrl_state *pState = 0;

	if (!this_pctrl) {
		DISPERR("this pctrl is null\n");
		return -1;
	}

	pState = pinctrl_lookup_state(this_pctrl, name);
	if (IS_ERR(pState)) {
		DISPERR("lookup state '%s' failed\n", name);
		ret = PTR_ERR(pState);
		goto exit;
	}

	/* select state! */
	pinctrl_select_state(this_pctrl, pState);

exit:
	return ret; /* Good! */
}

long disp_dts_gpio_init(struct platform_device *pdev)
{
	long ret = 0;
	struct pinctrl *pctrl;

	/* retrieve */
	pctrl = devm_pinctrl_get(&pdev->dev);
	if (IS_ERR(pctrl)) {
		DISPERR("Cannot find disp pinctrl!");
		ret = PTR_ERR(pctrl);
		goto exit;
	}

	this_pctrl = pctrl;

exit:
	return ret;
}

long disp_dts_gpio_select_state(enum DTS_GPIO_STATE s)
{
	if (!((unsigned int)(s) < (unsigned int)(DTS_GPIO_STATE_MAX))) {
		DISPERR("GPIO STATE is invalid,state=%d\n", (unsigned int)s);
		return -1;
	}
	return _set_state(this_state_name[s]);
}
