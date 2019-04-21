
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

#include "inc/mt6370_pmu.h"

#ifdef CONFIG_RT_REGMAP
RT_REG_DECL(MT6370_PMU_REG_DEVINFO, 1, RT_WBITS_WR_ONCE, {0x00});
RT_REG_DECL(MT6370_PMU_REG_CORECTRL1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_CORECTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RSTPASCODE1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RSTPASCODE2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_HIDDENPASCODE1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_HIDDENPASCODE2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_HIDDENPASCODE3, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_HIDDENPASCODE4, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_IRQIND, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_IRQMASK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_IRQSET, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_SHDNCTRL1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_SHDNCTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_OSCCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL3, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL4, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL5, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL6, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL7, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL8, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL9, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL10, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL11, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL12, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL13, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL14, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL15, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL16, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGADC, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_DEVICETYPE, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_QCCTRL1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_QCCTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_QC3P0CTRL1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_QC3P0CTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_USBSTATUS1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_QCSTATUS1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_QCSTATUS2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGPUMP, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL17, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL18, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGDIRCHG1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGDIRCHG2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGDIRCHG3, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGHIDDENCTRL0, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGHIDDENCTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_LG_CONTROL, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGHIDDENCTRL6, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGHIDDENCTRL7, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGHIDDENCTRL8, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGHIDDENCTRL9, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGHIDDENCTRL15, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGNTC, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCDATAH, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCDATAL, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCDATATUNEH, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCDATATUNEL, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCDATAORGH, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCDATAORGL, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCBATDATAH, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_ADCBATDATAL, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGCTRL19, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_OVPCTRL, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDCFG, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLED1CTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDSTRBCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLED1STRBCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLED1TORCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLED2CTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLED2STRBCTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLED2TORCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDVMIDTRKCTRL1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDVMIDRTM, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDVMIDTRKCTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDEN, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_LDOCFG, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_LDOVOUT, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB1DIM, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB2DIM, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB3DIM, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBEN, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB1ISINK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB2ISINK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB3ISINK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB1TR, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB1TF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB1TONTOFF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB2TR, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB2TF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB2TONTOFF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB3TR, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB3TF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGB3TONTOFF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBCHRINDDIM, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBCHRINDCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBCHRINDTR, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBCHRINDTF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBCHRINDTONTOFF, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBOPENSHORTEN, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_RESERVED1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLEN, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLBSTCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLPWM, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLDIM2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLDIM1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLAFH, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLFL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLFLTO, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLTORCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLSTRBCTRL, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_BLAVG, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_DBCTRL1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_DBCTRL2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_DBVBST, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_DBVPOS, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_DBVNEG, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGIRQ1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGIRQ2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGIRQ3, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGIRQ4, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGIRQ5, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGIRQ6, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_QCIRQ, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_DICHGIRQ7, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_OVPCTRLIRQ, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDIRQ1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDIRQ2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_BASEIRQ, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_LDOIRQ, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBIRQ, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_BLIRQ, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_DBIRQ, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGSTAT1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGSTAT2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGSTAT3, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGSTAT4, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGSTAT5, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_CHGSTAT6, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_QCSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_DICHGSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_OVPCTRLSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDSTAT1, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_FLEDSTAT2, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_BASESTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_LDOSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_RGBSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_BLSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_REG_DBSTAT, 1, RT_VOLATILE, {});
RT_REG_DECL(MT6370_PMU_CHGMASK1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_CHGMASK2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_CHGMASK3, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_CHGMASK4, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_CHGMASK5, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_CHGMASK6, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_DPDMMASK1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_DICHGMASK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_OVPCTRLMASK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_FLEDMASK1, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_FLEDMASK2, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_BASEMASK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_LDOMASK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_RGBMASK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_BLMASK, 1, RT_NORMAL_WR_ONCE, {});
RT_REG_DECL(MT6370_PMU_DBMASK, 1, RT_NORMAL_WR_ONCE, {});

static const rt_register_map_t mt6370_pmu_regmap[] = {
	RT_REG(MT6370_PMU_REG_DEVINFO),
	RT_REG(MT6370_PMU_REG_CORECTRL1),
	RT_REG(MT6370_PMU_REG_CORECTRL2),
	RT_REG(MT6370_PMU_REG_RSTPASCODE1),
	RT_REG(MT6370_PMU_REG_RSTPASCODE2),
	RT_REG(MT6370_PMU_REG_HIDDENPASCODE1),
	RT_REG(MT6370_PMU_REG_HIDDENPASCODE2),
	RT_REG(MT6370_PMU_REG_HIDDENPASCODE3),
	RT_REG(MT6370_PMU_REG_HIDDENPASCODE4),
	RT_REG(MT6370_PMU_REG_IRQIND),
	RT_REG(MT6370_PMU_REG_IRQMASK),
	RT_REG(MT6370_PMU_REG_IRQSET),
	RT_REG(MT6370_PMU_REG_SHDNCTRL1),
	RT_REG(MT6370_PMU_REG_SHDNCTRL2),
	RT_REG(MT6370_PMU_REG_OSCCTRL),
	RT_REG(MT6370_PMU_REG_CHGCTRL1),
	RT_REG(MT6370_PMU_REG_CHGCTRL2),
	RT_REG(MT6370_PMU_REG_CHGCTRL3),
	RT_REG(MT6370_PMU_REG_CHGCTRL4),
	RT_REG(MT6370_PMU_REG_CHGCTRL5),
	RT_REG(MT6370_PMU_REG_CHGCTRL6),
	RT_REG(MT6370_PMU_REG_CHGCTRL7),
	RT_REG(MT6370_PMU_REG_CHGCTRL8),
	RT_REG(MT6370_PMU_REG_CHGCTRL9),
	RT_REG(MT6370_PMU_REG_CHGCTRL10),
	RT_REG(MT6370_PMU_REG_CHGCTRL11),
	RT_REG(MT6370_PMU_REG_CHGCTRL12),
	RT_REG(MT6370_PMU_REG_CHGCTRL13),
	RT_REG(MT6370_PMU_REG_CHGCTRL14),
	RT_REG(MT6370_PMU_REG_CHGCTRL15),
	RT_REG(MT6370_PMU_REG_CHGCTRL16),
	RT_REG(MT6370_PMU_REG_CHGADC),
	RT_REG(MT6370_PMU_REG_DEVICETYPE),
	RT_REG(MT6370_PMU_REG_QCCTRL1),
	RT_REG(MT6370_PMU_REG_QCCTRL2),
	RT_REG(MT6370_PMU_REG_QC3P0CTRL1),
	RT_REG(MT6370_PMU_REG_QC3P0CTRL2),
	RT_REG(MT6370_PMU_REG_USBSTATUS1),
	RT_REG(MT6370_PMU_REG_QCSTATUS1),
	RT_REG(MT6370_PMU_REG_QCSTATUS2),
	RT_REG(MT6370_PMU_REG_CHGPUMP),
	RT_REG(MT6370_PMU_REG_CHGCTRL17),
	RT_REG(MT6370_PMU_REG_CHGCTRL18),
	RT_REG(MT6370_PMU_REG_CHGDIRCHG1),
	RT_REG(MT6370_PMU_REG_CHGDIRCHG2),
	RT_REG(MT6370_PMU_REG_CHGDIRCHG3),
	RT_REG(MT6370_PMU_REG_CHGHIDDENCTRL0),
	RT_REG(MT6370_PMU_REG_CHGHIDDENCTRL1),
	RT_REG(MT6370_PMU_REG_LG_CONTROL),
	RT_REG(MT6370_PMU_REG_CHGHIDDENCTRL6),
	RT_REG(MT6370_PMU_REG_CHGHIDDENCTRL7),
	RT_REG(MT6370_PMU_REG_CHGHIDDENCTRL8),
	RT_REG(MT6370_PMU_REG_CHGHIDDENCTRL9),
	RT_REG(MT6370_PMU_REG_CHGHIDDENCTRL15),
	RT_REG(MT6370_PMU_REG_CHGSTAT),
	RT_REG(MT6370_PMU_REG_CHGNTC),
	RT_REG(MT6370_PMU_REG_ADCDATAH),
	RT_REG(MT6370_PMU_REG_ADCDATAL),
	RT_REG(MT6370_PMU_REG_ADCDATATUNEH),
	RT_REG(MT6370_PMU_REG_ADCDATATUNEL),
	RT_REG(MT6370_PMU_REG_ADCDATAORGH),
	RT_REG(MT6370_PMU_REG_ADCDATAORGL),
	RT_REG(MT6370_PMU_REG_ADCBATDATAH),
	RT_REG(MT6370_PMU_REG_ADCBATDATAL),
	RT_REG(MT6370_PMU_REG_CHGCTRL19),
	RT_REG(MT6370_PMU_REG_OVPCTRL),
	RT_REG(MT6370_PMU_REG_FLEDCFG),
	RT_REG(MT6370_PMU_REG_FLED1CTRL),
	RT_REG(MT6370_PMU_REG_FLEDSTRBCTRL),
	RT_REG(MT6370_PMU_REG_FLED1STRBCTRL),
	RT_REG(MT6370_PMU_REG_FLED1TORCTRL),
	RT_REG(MT6370_PMU_REG_FLED2CTRL),
	RT_REG(MT6370_PMU_REG_FLED2STRBCTRL2),
	RT_REG(MT6370_PMU_REG_FLED2TORCTRL),
	RT_REG(MT6370_PMU_REG_FLEDVMIDTRKCTRL1),
	RT_REG(MT6370_PMU_REG_FLEDVMIDRTM),
	RT_REG(MT6370_PMU_REG_FLEDVMIDTRKCTRL2),
	RT_REG(MT6370_PMU_REG_FLEDEN),
	RT_REG(MT6370_PMU_REG_LDOCFG),
	RT_REG(MT6370_PMU_REG_LDOVOUT),
	RT_REG(MT6370_PMU_REG_RGB1DIM),
	RT_REG(MT6370_PMU_REG_RGB2DIM),
	RT_REG(MT6370_PMU_REG_RGB3DIM),
	RT_REG(MT6370_PMU_REG_RGBEN),
	RT_REG(MT6370_PMU_REG_RGB1ISINK),
	RT_REG(MT6370_PMU_REG_RGB2ISINK),
	RT_REG(MT6370_PMU_REG_RGB3ISINK),
	RT_REG(MT6370_PMU_REG_RGB1TR),
	RT_REG(MT6370_PMU_REG_RGB1TF),
	RT_REG(MT6370_PMU_REG_RGB1TONTOFF),
	RT_REG(MT6370_PMU_REG_RGB2TR),
	RT_REG(MT6370_PMU_REG_RGB2TF),
	RT_REG(MT6370_PMU_REG_RGB2TONTOFF),
	RT_REG(MT6370_PMU_REG_RGB3TR),
	RT_REG(MT6370_PMU_REG_RGB3TF),
	RT_REG(MT6370_PMU_REG_RGB3TONTOFF),
	RT_REG(MT6370_PMU_REG_RGBCHRINDDIM),
	RT_REG(MT6370_PMU_REG_RGBCHRINDCTRL),
	RT_REG(MT6370_PMU_REG_RGBCHRINDTR),
	RT_REG(MT6370_PMU_REG_RGBCHRINDTF),
	RT_REG(MT6370_PMU_REG_RGBCHRINDTONTOFF),
	RT_REG(MT6370_PMU_REG_RGBOPENSHORTEN),
	RT_REG(MT6370_PMU_REG_RESERVED1),
	RT_REG(MT6370_PMU_REG_BLEN),
	RT_REG(MT6370_PMU_REG_BLBSTCTRL),
	RT_REG(MT6370_PMU_REG_BLPWM),
	RT_REG(MT6370_PMU_REG_BLCTRL),
	RT_REG(MT6370_PMU_REG_BLDIM2),
	RT_REG(MT6370_PMU_REG_BLDIM1),
	RT_REG(MT6370_PMU_REG_BLAFH),
	RT_REG(MT6370_PMU_REG_BLFL),
	RT_REG(MT6370_PMU_REG_BLFLTO),
	RT_REG(MT6370_PMU_REG_BLTORCTRL),
	RT_REG(MT6370_PMU_REG_BLSTRBCTRL),
	RT_REG(MT6370_PMU_REG_BLAVG),
	RT_REG(MT6370_PMU_REG_DBCTRL1),
	RT_REG(MT6370_PMU_REG_DBCTRL2),
	RT_REG(MT6370_PMU_REG_DBVBST),
	RT_REG(MT6370_PMU_REG_DBVPOS),
	RT_REG(MT6370_PMU_REG_DBVNEG),
	RT_REG(MT6370_PMU_REG_CHGIRQ1),
	RT_REG(MT6370_PMU_REG_CHGIRQ2),
	RT_REG(MT6370_PMU_REG_CHGIRQ3),
	RT_REG(MT6370_PMU_REG_CHGIRQ4),
	RT_REG(MT6370_PMU_REG_CHGIRQ5),
	RT_REG(MT6370_PMU_REG_CHGIRQ6),
	RT_REG(MT6370_PMU_REG_QCIRQ),
	RT_REG(MT6370_PMU_REG_DICHGIRQ7),
	RT_REG(MT6370_PMU_REG_OVPCTRLIRQ),
	RT_REG(MT6370_PMU_REG_FLEDIRQ1),
	RT_REG(MT6370_PMU_REG_FLEDIRQ2),
	RT_REG(MT6370_PMU_REG_BASEIRQ),
	RT_REG(MT6370_PMU_REG_LDOIRQ),
	RT_REG(MT6370_PMU_REG_RGBIRQ),
	RT_REG(MT6370_PMU_REG_BLIRQ),
	RT_REG(MT6370_PMU_REG_DBIRQ),
	RT_REG(MT6370_PMU_REG_CHGSTAT1),
	RT_REG(MT6370_PMU_REG_CHGSTAT2),
	RT_REG(MT6370_PMU_REG_CHGSTAT3),
	RT_REG(MT6370_PMU_REG_CHGSTAT4),
	RT_REG(MT6370_PMU_REG_CHGSTAT5),
	RT_REG(MT6370_PMU_REG_CHGSTAT6),
	RT_REG(MT6370_PMU_REG_QCSTAT),
	RT_REG(MT6370_PMU_REG_DICHGSTAT),
	RT_REG(MT6370_PMU_REG_OVPCTRLSTAT),
	RT_REG(MT6370_PMU_REG_FLEDSTAT1),
	RT_REG(MT6370_PMU_REG_FLEDSTAT2),
	RT_REG(MT6370_PMU_REG_BASESTAT),
	RT_REG(MT6370_PMU_REG_LDOSTAT),
	RT_REG(MT6370_PMU_REG_RGBSTAT),
	RT_REG(MT6370_PMU_REG_BLSTAT),
	RT_REG(MT6370_PMU_REG_DBSTAT),
	RT_REG(MT6370_PMU_CHGMASK1),
	RT_REG(MT6370_PMU_CHGMASK2),
	RT_REG(MT6370_PMU_CHGMASK3),
	RT_REG(MT6370_PMU_CHGMASK4),
	RT_REG(MT6370_PMU_CHGMASK5),
	RT_REG(MT6370_PMU_CHGMASK6),
	RT_REG(MT6370_PMU_DPDMMASK1),
	RT_REG(MT6370_PMU_DICHGMASK),
	RT_REG(MT6370_PMU_OVPCTRLMASK),
	RT_REG(MT6370_PMU_FLEDMASK1),
	RT_REG(MT6370_PMU_FLEDMASK2),
	RT_REG(MT6370_PMU_BASEMASK),
	RT_REG(MT6370_PMU_LDOMASK),
	RT_REG(MT6370_PMU_RGBMASK),
	RT_REG(MT6370_PMU_BLMASK),
	RT_REG(MT6370_PMU_DBMASK),
};

static struct rt_regmap_properties mt6370_pmu_regmap_props = {
	.name = "mt6370_pmu",
	.register_num = ARRAY_SIZE(mt6370_pmu_regmap),
	.rm = mt6370_pmu_regmap,
	.rt_regmap_mode = RT_DBG_SPECIAL,
	.aliases = "mt6370_pmu",
};
#endif /* #ifdef CONFIG_RT_REGMAP */

int mt6370_pmu_regmap_register(struct mt6370_pmu_chip *chip,
			       struct rt_regmap_fops *regmap_ops)
{
#ifdef CONFIG_RT_REGMAP
	chip->rd = rt_regmap_device_register(&mt6370_pmu_regmap_props,
			regmap_ops, chip->dev, chip->i2c, chip);
	if (!chip->rd)
		return -EINVAL;
#endif /* #ifdef CONFIG_RT_REGMAP */
	return 0;
}
EXPORT_SYMBOL(mt6370_pmu_regmap_register);

void mt6370_pmu_regmap_unregister(struct mt6370_pmu_chip *chip)
{
#ifdef CONFIG_RT_REGMAP
	rt_regmap_device_unregister(chip->rd);
#endif /* #ifdef CONFIG_RT_REGMAP */
}
EXPORT_SYMBOL(mt6370_pmu_regmap_unregister);
