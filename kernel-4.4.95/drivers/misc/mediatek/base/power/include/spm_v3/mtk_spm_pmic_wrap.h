

#ifndef __MTK_SPM_PMIC_WRAP_H__
#define __MTK_SPM_PMIC_WRAP_H__


#if defined(CONFIG_MACH_MT6799)          /* PMIC MT6335 */
#define VOLT_TO_PMIC_VAL(volt)  (((volt) - 40000 + 625 - 1) / 625)
#define PMIC_VAL_TO_VOLT(pmic)  (((pmic) * 625) + 40000)
#elif defined(CONFIG_MACH_MT6763)        /* PMIC MT6356 */
#define VOLT_TO_PMIC_VAL(volt)  (((volt) - 50000 + 625 - 1) / 625)
#define PMIC_VAL_TO_VOLT(pmic)  (((pmic) * 625) + 50000)
#elif defined(CONFIG_MACH_MT6759) \
	|| defined(CONFIG_MACH_MT6758) \
	|| defined(CONFIG_MACH_MT6775) /* PMIC MT6355 */
#define VOLT_TO_PMIC_VAL(volt)  (((volt) - 40625 + 625 - 1) / 625)
#define PMIC_VAL_TO_VOLT(pmic)  (((pmic) * 625) + 40625)
#endif


enum pmic_wrap_phase_id {
	PMIC_WRAP_PHASE_ALLINONE,
	NR_PMIC_WRAP_PHASE,
};

/* IDX mapping */
#if defined(CONFIG_MACH_MT6759)
enum {
	IDX_ALL_VSRAM_PWR_ON,          /* 0 *//* PMIC_WRAP_PHASE_ALLINONE */
	IDX_ALL_VSRAM_SHUTDOWN,        /* 1 */
	IDX_ALL_VSRAM_NORMAL,          /* 2 */
	IDX_ALL_VSRAM_SLEEP,           /* 3 */
	IDX_ALL_DPIDLE_LEAVE,            /* 4 */
	IDX_ALL_DPIDLE_ENTER,            /* 5 */
	IDX_ALL_RESERVE_6,               /* 6 */
	IDX_ALL_VCORE_SUSPEND,           /* 7 */
	IDX_ALL_VPROCL2_PWR_ON,        /* 8 */
	IDX_ALL_VPROCL2_SHUTDOWN,      /* 9 */
	IDX_ALL_VCORE_LEVEL2,            /* A */
	IDX_ALL_VCORE_LEVEL3,            /* B */
	IDX_ALL_VPROC_PWR_ON,          /* C */
	IDX_ALL_VPROC_SHUTDOWN,        /* D */
	IDX_ALL_VPROC_NORMAL,          /* E */
	IDX_ALL_VPROC_SLEEP,           /* F */
	NR_IDX_ALL,
};
#elif defined(CONFIG_MACH_MT6758) || defined(CONFIG_MACH_MT6775)
enum {
	CMD_0,        /* 0 *//* PMIC_WRAP_PHASE_ALLINONE */
	CMD_1,        /* 1 */
	CMD_2,        /* 2 */
	CMD_3,        /* 3 */
	CMD_4,        /* 4 */
	CMD_5,        /* 5 */
	CMD_6,        /* 6 */
	CMD_7,        /* 7 */
	CMD_8,        /* 8 */
	CMD_9,        /* 9 */
	CMD_10,       /* A */
	CMD_11,       /* B */
	CMD_12,       /* C */
	CMD_13,       /* D */
	CMD_14,       /* E */
	CMD_15,       /* F */
	NR_IDX_ALL,
};
#else
enum {
	IDX_ALL_1_VSRAM_PWR_ON,          /* 0 *//* PMIC_WRAP_PHASE_ALLINONE */
	IDX_ALL_1_VSRAM_SHUTDOWN,        /* 1 */
	IDX_ALL_1_VSRAM_NORMAL,          /* 2 */
	IDX_ALL_1_VSRAM_SLEEP,           /* 3 */
	IDX_ALL_DPIDLE_LEAVE,            /* 4 */
	IDX_ALL_DPIDLE_ENTER,            /* 5 */
	IDX_ALL_RESERVE_6,               /* 6 */
	IDX_ALL_VCORE_SUSPEND,           /* 7 */
	IDX_ALL_VCORE_LEVEL0,            /* 8 */
	IDX_ALL_VCORE_LEVEL1,            /* 9 */
	IDX_ALL_VCORE_LEVEL2,            /* A */
	IDX_ALL_VCORE_LEVEL3,            /* B */
	IDX_ALL_2_VSRAM_PWR_ON,          /* C */
	IDX_ALL_2_VSRAM_SHUTDOWN,        /* D */
	IDX_ALL_2_VSRAM_NORMAL,          /* E */
	IDX_ALL_2_VSRAM_SLEEP,           /* F */
	NR_IDX_ALL,
};
#endif

/* APIs */
extern int mt_spm_pmic_wrap_init(void);
extern void mt_spm_pmic_wrap_set_phase(enum pmic_wrap_phase_id phase);
extern void mt_spm_pmic_wrap_set_cmd(enum pmic_wrap_phase_id phase, int idx,
				     unsigned int cmd_wdata);
#if 1
extern void mt_spm_pmic_wrap_get_cmd_full(enum pmic_wrap_phase_id phase, int idx,
					  unsigned int *p_cmd_addr, unsigned int *p_cmd_wdata);
extern void mt_spm_pmic_wrap_set_cmd_full(enum pmic_wrap_phase_id phase, int idx,
					  unsigned int cmd_addr, unsigned int cmd_wdata);
#endif

#endif /* __MTK_SPM_PMIC_WRAP_H__ */
