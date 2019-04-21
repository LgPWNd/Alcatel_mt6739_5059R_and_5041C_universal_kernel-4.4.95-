
#include "mtk_unified_power_internal.h"
#include "mtk_upower.h"

/* PTP will update volt in init2 isr handler */
void upower_update_volt_by_eem(enum upower_bank bank, unsigned int *volt, unsigned int opp_num)
{
	int i, j;
	int index = opp_num;

	upower_debug("upower_update_volt_by_eem: bank = %d, opp_num = %d\n", bank, opp_num);

	/* UPOWER_BANK_B +3 = UPOWER_BANK_CLS_B */
	if (bank >= NR_UPOWER_BANK) {
		upower_error("(%s) No this bank in UPOWER\n", __func__);
	} else if (bank == UPOWER_BANK_CCI) {
		for (j = 0; j < opp_num; j++) {
			index = opp_num - j - 1; /* reorder index of volt */
			upower_tbl_ref[bank].row[index].volt = volt[j];
			upower_debug("[sram]volt = %u, [eem]volt = %u\n",
						upower_tbl_ref[bank].row[index].volt, volt[j]);
		}
	} else {
		for (i = bank; i < UPOWER_BANK_CCI; i = i+3) {
			for (j = 0; j < opp_num; j++) {
				index = opp_num - j - 1; /* reorder index of volt */
				upower_tbl_ref[i].row[index].volt = volt[j];
				upower_debug("[sram]volt = %u, [eem]volt = %u\n",
						upower_tbl_ref[i].row[index].volt, volt[j]);
			} /* for */
		} /* for */
	}
}
EXPORT_SYMBOL(upower_update_volt_by_eem);

/* PTP will update volt in eem_set_eem_volt */
void upower_update_degree_by_eem(enum upower_bank bank, int deg)
{
	int idx = -1;
	int i;
	int upper;

	/* calculate upper bound first, then decide idx of degree */
	for (i = NR_UPOWER_DEGREE - 1; i > 0; i--) {
		upper = (degree_set[i] + degree_set[i-1] + 1) / 2;
		if (deg <= upper) {
			idx = i;
			break;
		}
	}
	if (idx == -1)
		idx = 0;

	/* UPOWER_BANK_B +3 = UPOWER_BANK_CLS_B */
	if (bank >= NR_UPOWER_BANK) {
		upower_error("upower_update_volt_by_eem: no this bank\n");
	} else if (bank == UPOWER_BANK_CCI) {
		upower_debug("--------Bank(%d) (deg %d) eem update deg idx--------\n",
					bank, deg);
		upower_tbl_ref[bank].lkg_idx = idx;
		upower_debug("[sram]lkg_idx = %d\n", upower_tbl_ref[bank].lkg_idx);
	} else {
		for (i = bank; i < UPOWER_BANK_CCI; i = i+3) {
			upower_debug("--------Bank(%d) (deg %d) eem update deg idx--------\n",
						i, deg);
			upower_tbl_ref[i].lkg_idx = idx;
			upower_debug("[sram]lkg_idx = %d\n", upower_tbl_ref[i].lkg_idx);
		} /* for */
	}
}
EXPORT_SYMBOL(upower_update_degree_by_eem);
/* for EAS to get pointer of tbl */
struct upower_tbl_info **upower_get_tbl(void)
{
#if 0
	struct upower_tbl_info *ptr;
	#ifdef UPOWER_PROFILE_API_TIME
	upower_get_start_time_us(GET_TBL_PTR);
	#endif

	#ifdef UPOWER_RCU_LOCK
	upower_read_lock();
	ptr = rcu_dereference(p_upower_tbl_infos);
	upower_read_unlock();
	#else
	ptr = p_upower_tbl_infos;
	#endif

	#ifdef UPOWER_PROFILE_API_TIME
	upower_get_diff_time_us(GET_TBL_PTR);
	print_diff_results(GET_TBL_PTR);
	#endif

	return ptr;
#endif
	return &p_upower_tbl_infos;

}
EXPORT_SYMBOL(upower_get_tbl);

/* for EAS to get pointer of core's tbl */
struct upower_tbl *upower_get_core_tbl(unsigned int cpu)
{
	struct upower_tbl *ptr_tbl;
	struct upower_tbl_info *ptr_tbl_info;
	enum upower_bank bank = UPOWER_BANK_LL;

	if (!upower_enable)
		return NULL;

	if (cpu < 4) /* cpu 0-3 */
		bank = UPOWER_BANK_LL;
	else if (cpu < 8) /* cpu 4-7 */
		bank = UPOWER_BANK_LL + 1;
	else if (cpu < 10) /* cpu 8-9 */
		bank = UPOWER_BANK_LL + 2;

#ifdef UPOWER_L_PLUS
	if (cpu == UPOWER_L_PLUS_CORE)
		bank = UPOWER_BANK_L_PLUS;
#endif

	ptr_tbl_info = p_upower_tbl_infos;
	ptr_tbl = ptr_tbl_info[bank].p_upower_tbl;

	return ptr_tbl;
}
EXPORT_SYMBOL(upower_get_core_tbl);

/* for PPM to get lkg or dyn power*/
unsigned int upower_get_power(enum upower_bank bank, unsigned int opp, enum
upower_dtype type)
{
	unsigned int ret = 0;
	unsigned int idx = 0; /* lkg_idx */
	unsigned int volt_idx = UPOWER_OPP_NUM - opp - 1;
	struct upower_tbl *ptr_tbl;
	struct upower_tbl_info *ptr_tbl_info;

	#ifdef UPOWER_PROFILE_API_TIME
	upower_get_start_time_us(GET_PWR);
	#endif

	if ((opp >= UPOWER_OPP_NUM) || (type >= NR_UPOWER_DTYPE))
		return ret;

	#ifdef UPOWER_RCU_LOCK
	upower_read_lock();
	ptr_tbl_info = rcu_dereference(p_upower_tbl_infos);
	ptr_tbl = ptr_tbl_info[bank].p_upower_tbl;
	idx = ptr_tbl->lkg_idx;
	ret = (type == UPOWER_DYN) ? ptr_tbl->row[volt_idx].dyn_pwr :
			(type == UPOWER_LKG) ? ptr_tbl->row[volt_idx].lkg_pwr[idx] :
			ptr_tbl->row[volt_idx].cap;
	upower_read_unlock();
	#else
	ptr_tbl_info = p_upower_tbl_infos;
	ptr_tbl = ptr_tbl_info[bank].p_upower_tbl;
	idx = ptr_tbl->lkg_idx;
	ret = (type == UPOWER_DYN) ? ptr_tbl->row[volt_idx].dyn_pwr :
			(type == UPOWER_LKG) ? ptr_tbl->row[volt_idx].lkg_pwr[idx] :
			ptr_tbl->row[volt_idx].cap;
	#endif

	#ifdef UPOWER_PROFILE_API_TIME
	upower_get_diff_time_us(GET_PWR);
	print_diff_results(GET_PWR);
	#endif
	return ret;
}
EXPORT_SYMBOL(upower_get_power);
