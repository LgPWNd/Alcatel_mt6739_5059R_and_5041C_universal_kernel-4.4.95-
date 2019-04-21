
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/kernel.h>
#include <linux/types.h>

#include "mtk_ppm_platform.h"
#include "mtk_ppm_internal.h"


/*==============================================================*/
/* Power data auto-generated by script				*/
/* Note: DO NOT modify it manually!!				*/
/*==============================================================*/
#include "mtk_ppm_power_data.h"
/*==============================================================*/
/* Power Table auto-generated by script	end			*/
/*==============================================================*/


/* default use FY table, may change to SB/MB if needed */
#define PWR_IDX_REF_TABLE(name)	\
static struct ppm_pwr_idx_ref_tbl_data pwr_idx_ref_tbl_##name = {	\
	.pwr_idx_ref_tbl = cpu_pwr_idx_ref_tbl_##name,		\
	.nr_pwr_idx_ref_tbl = ARRAY_SIZE(cpu_pwr_idx_ref_tbl_##name),	\
}

#ifdef PPM_TURBO_CORE_SUPPORT
PWR_IDX_REF_TABLE(FY_v2);
PWR_IDX_REF_TABLE(FY_v3);
PWR_IDX_REF_TABLE(SB_v2);
PWR_IDX_REF_TABLE(SB_v3);
#else
PWR_IDX_REF_TABLE(FY);
PWR_IDX_REF_TABLE(SB);
#endif

struct ppm_pwr_idx_ref_tbl_data ppm_get_pwr_idx_ref_tbl(void)
{
#ifdef PPM_TURBO_CORE_SUPPORT
	if (ppm_main_info.is_turbo_core)
		return (ppm_main_info.dvfs_tbl_type == DVFS_TABLE_TYPE_SB)
			? pwr_idx_ref_tbl_SB_v3 : pwr_idx_ref_tbl_FY_v3;
	else
		return (ppm_main_info.dvfs_tbl_type == DVFS_TABLE_TYPE_SB)
			? pwr_idx_ref_tbl_SB_v2 : pwr_idx_ref_tbl_FY_v2;
#else
	return (ppm_main_info.dvfs_tbl_type == DVFS_TABLE_TYPE_SB)
		? pwr_idx_ref_tbl_SB : pwr_idx_ref_tbl_FY;
#endif
}

int *ppm_get_perf_idx_ref_tbl(enum ppm_cluster cluster)
{
	if (cluster >= NR_PPM_CLUSTERS)
		return NULL;

#ifdef PPM_TURBO_CORE_SUPPORT
	if (ppm_main_info.is_turbo_core)
		return (ppm_main_info.dvfs_tbl_type == DVFS_TABLE_TYPE_SB)
			? cpu_perf_idx_ref_tbl_SB_v3[cluster] : cpu_perf_idx_ref_tbl_FY_v3[cluster];
	else
		return (ppm_main_info.dvfs_tbl_type == DVFS_TABLE_TYPE_SB)
			? cpu_perf_idx_ref_tbl_SB_v2[cluster] : cpu_perf_idx_ref_tbl_FY_v2[cluster];
#else
	return (ppm_main_info.dvfs_tbl_type == DVFS_TABLE_TYPE_SB)
		? cpu_perf_idx_ref_tbl_SB[cluster] : cpu_perf_idx_ref_tbl_FY[cluster];
#endif
}

static int __init ppm_power_data_init(void)
{
	int i, j;
	struct ppm_pwr_idx_ref_tbl_data ref_tbl = ppm_get_pwr_idx_ref_tbl();

	/* calibrate pwr_idx ref table */
	ppm_info("PPM pwr_idx ref table:\n");
	for_each_ppm_clusters(i) {
		for (j = 0; j < DVFS_OPP_NUM; j++) {
			/* TODO: HOW to interpolate power_idx? */
#if 1
			ref_tbl.pwr_idx_ref_tbl[i].core_dynamic_power[j] =
				ref_tbl.pwr_idx_ref_tbl[i].core_dynamic_power_TT[j];
			ref_tbl.pwr_idx_ref_tbl[i].core_total_power[j] =
				ref_tbl.pwr_idx_ref_tbl[i].core_total_power_TT[j];
			ref_tbl.pwr_idx_ref_tbl[i].l2_power[j] =
				ref_tbl.pwr_idx_ref_tbl[i].l2_power_TT[j];
#else
			/* calculate actual dynamic power */
			p_FF = ref_tbl.pwr_idx_ref_tbl[i].core_dynamic_power_FF[j];
			p_TT = ref_tbl.pwr_idx_ref_tbl[i].core_dynamic_power_TT[j];
			ref_tbl.pwr_idx_ref_tbl[i].core_dynamic_power[j] = (big_lkg_efuse >= BIG_LKG_EFUSE_TT)
				? p_TT - (abs(p_FF - p_TT) * lkg_ratio + (100 - 1)) / 100
				: p_TT + (abs(p_FF - p_TT) * lkg_ratio + (100 - 1)) / 100;


			/* calculate actual total power */
			p_FF = ref_tbl.pwr_idx_ref_tbl[i].core_total_power_FF[j];
			p_TT = ref_tbl.pwr_idx_ref_tbl[i].core_total_power_TT[j];
			ref_tbl.pwr_idx_ref_tbl[i].core_total_power[j] = (big_lkg_efuse >= BIG_LKG_EFUSE_TT)
				? p_TT + (abs(p_FF - p_TT) * lkg_ratio + (100 - 1)) / 100
				: p_TT - (abs(p_FF - p_TT) * lkg_ratio + (100 - 1)) / 100;

			/* calculate actual L2 power */
			p_FF = ref_tbl.pwr_idx_ref_tbl[i].l2_power_FF[j];
			p_TT = ref_tbl.pwr_idx_ref_tbl[i].l2_power_TT[j];
			ref_tbl.pwr_idx_ref_tbl[i].l2_power[j] = (big_lkg_efuse >= BIG_LKG_EFUSE_TT)
				? p_TT + (abs(p_FF - p_TT) * lkg_ratio + (100 - 1)) / 100
				: p_TT - (abs(p_FF - p_TT) * lkg_ratio + (100 - 1)) / 100;
#endif
			ppm_info("cluster %d(%d): (%d, %d, %d)\n", i, j,
				ref_tbl.pwr_idx_ref_tbl[i].core_dynamic_power[j],
				ref_tbl.pwr_idx_ref_tbl[i].core_total_power[j],
				ref_tbl.pwr_idx_ref_tbl[i].l2_power[j]
				);
		}
	}

	ppm_cobra_init();

	ppm_info("power data init done!\n");

	return 0;
}
late_initcall(ppm_power_data_init);

