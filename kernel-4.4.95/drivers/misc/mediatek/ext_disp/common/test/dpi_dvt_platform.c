
#include "dpi_dvt_test.h"

#if defined(RDMA_DPI_PATH_SUPPORT) || defined(DPI_DVT_TEST_SUPPORT)

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/mm.h>
#include <linux/string.h>
#include <linux/time.h>
#include <linux/uaccess.h>
#include <linux/delay.h>
#include <linux/vmalloc.h>
#include <linux/err.h>
#include <linux/switch.h>


#include <linux/interrupt.h>
#include <linux/wait.h>
#include <linux/spinlock.h>
#include <linux/kthread.h>
#include <linux/timer.h>
/*#include <mach/mt_irq.h>*/
#include <linux/types.h>
#ifdef CONFIG_MTK_CLKMGR
#include <mach/mt_clkmgr.h>
#endif
#include "m4u.h"
#include "ddp_log.h"
#include "cmdq_record.h"
#include "dpi_dvt_platform.h"

#include "ddp_clkmgr.h"
#include "ddp_reg.h"
#include "dpi_dvt_test.h"
#include "disp_helper.h"

#undef kal_uint32
#define kal_uint32 unsigned int

/*static bool top_power_on;*/
#define SOF_DPI0 0xC3
#define SOF_DSI1 0x82

#if 0
unsigned int long_path0_module[LONG_PATH0_MODULE_NUM] = {
	DISP_MODULE_OVL0,
	DISP_MODULE_OVL0_2L,
	DISP_MODULE_COLOR0,
	DISP_MODULE_CCORR0,
	DISP_MODULE_AAL0,
	DISP_MODULE_GAMMA0,
	DISP_MODULE_DITHER0,
	DISP_MODULE_RDMA0,
	DISP_MODULE_DSC,
	DISP_MODULE_DPI
};
#endif
unsigned int long_path1_module[LONG_PATH1_MODULE_NUM] = {
	DISP_MODULE_OVL1_2L,
	DISP_MODULE_RDMA1,
	DISP_MODULE_DPI
};

unsigned int short_path_module[SHORT_PATH_MODULE_NUM] = {
	DISP_MODULE_RDMA1,
	DISP_MODULE_DPI
};

#if 0
unsigned int wdma_path_module[WDMA_PATH_MODULE_NUM] = {
	DISP_MODULE_OVL1,
	DISP_MODULE_OVL1_2L,
	DISP_MODULE_WDMA1,
};

unsigned int rdma2_path_module[RDMA2_PATH_MODULE_NUM] = {
	DISP_MODULE_RDMA2,
	DISP_MODULE_DPI
};

unsigned int long_dsi1_path1_module[LONG_PATH1_MODULE_NUM] = {
	DISP_MODULE_OVL1,
	DISP_MODULE_OVL1_2L,
	DISP_MODULE_COLOR1,
	DISP_MODULE_CCORR1,
	DISP_MODULE_AAL1,
	DISP_MODULE_GAMMA1,
	DISP_MODULE_DITHER1,
	DISP_MODULE_RDMA1,
	DISP_MODULE_DSC,
	DISP_MODULE_DSI1
};
#endif

int init_cmdq_slots(cmdqBackupSlotHandle *pSlot, int count, int init_val)
{
	int i;

	cmdqBackupAllocateSlot(pSlot, count);
	for (i = 0; i < count; i++)
		cmdqBackupWriteSlot(*pSlot, i, init_val);
	return 0;
}
#if 0
int rdma2_dvt_connect_path(void *handle)
{
	kal_uint32 value = 0;
	/*RDMA2_SOUT to DPI0_SEL*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA2_SOUT_SEL_IN, value);

	/*DPI0_SEL from RDMA2_SOUT*/
	value = 0x4;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);

	return 0;
}

int rdma2_dvt_disconnect_path(void *handle)
{
	kal_uint32 value = 0;
	/*RDMA2_SOUT to DPI0_SEL*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA2_SOUT_SEL_IN, value);
	/*DPI0_SEL from RDMA2_SOUT*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);

	return 0;
}
#endif

int dvt_connect_path(void *handle)
{
	kal_uint32 value = 0;

	/*RDMA1_SOUT to DPI0_SEL*/
	value = 0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN, value);

	/*DPI0_SEL from RDMA1_SOUT*/
	value = 2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);

	return 0;
}

int dvt_disconnect_path(void *handle)
{
	kal_uint32 value = 0;

	/*RDMA1_SOUT to DPI0_SEL*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN, value);

	/*DPI0_SEL from RDMA1_SOUT*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);

	return 0;
}

int dvt_acquire_mutex(void)
{
	return HW_MUTEX;
}

int dvt_ddp_path_top_clock_on(void)
{
	ddp_path_top_clock_on();

	return 0;
}

int dvt_ddp_path_top_clock_off(void)
{
	ddp_path_top_clock_off();

	return 0;
}

#if 0
void dvt_mutex_dump_reg(void)
{

	DPI_DVT_LOG_W("==DISP MUTEX REGS==\n");
	DPI_DVT_LOG_W("MUTEX:0x000=0x%08x,0x004=0x%08x,0x020=0x%08x,0x028=0x%08x\n",
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX_INTEN),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX_INTSTA),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX0_EN),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX0_RST));

	DPI_DVT_LOG_W("MUTEX:0x030=0x%08x,0x034=0x%08x,0x02c=0x%08x,0x040=0x%08x,0x048=0x%08x\n",
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX0_MOD0),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX0_MOD1),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX0_SOF),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX1_EN),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX1_RST));

	DPI_DVT_LOG_W("MUTEX:0x050=0x%08x,0x054=0x%08x,0x04c=0x%08x,0x060=0x%08x,0x068=0x%08x\n",
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX1_MOD0),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX1_MOD1),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX1_SOF),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX2_EN),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX2_RST));

	DPI_DVT_LOG_W("MUTEX:0x070=0x%08x,0x074=0x%08x,0x06c=0x%08x,0x080=0x%08x,0x088=0x%08x\n",
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX2_MOD0),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX2_MOD1),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX2_SOF),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX3_EN),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX3_RST));

	DPI_DVT_LOG_W("MUTEX:0x090=0x%08x,0x094=0x%08x,0x08c=0x%08x,0x0a0=0x%08x,0x0a8=0x%08x\n",
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX3_MOD0),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX3_MOD1),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX3_SOF),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX4_EN),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX4_RST));

	DPI_DVT_LOG_W("MUTEX:0x0b0=0x%08x,0x0b4=0x%08x,0x0ac=0x%08x,0x0c0=0x%08x,0x0c8=0x%08x\n",
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX4_MOD0),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX4_MOD1),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX4_SOF),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX5_EN),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX5_RST));
	DPI_DVT_LOG_W("MUTEX:0x0d0=0x%08x,0x0d4=0x%08x,0x0cc=0x%08x,0x200=0x%08x\n",
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX5_MOD0),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX5_MOD1),
		      DISP_REG_GET(DISP_REG_CONFIG_MUTEX5_SOF),
		      DISP_REG_GET(DISP_REG_CONFIG_DEBUG_OUT_SEL));

}
#endif
static char *dvt_ddp_get_mutex_sof_name(unsigned int regval)
{
	if (regval == SOF_VAL_MUTEX0_SOF_SINGLE_MODE)
		return "single";
	else if (regval == SOF_VAL_MUTEX0_SOF_FROM_DSI0)
		return "dsi0";
	else if (regval == SOF_VAL_MUTEX0_SOF_FROM_DPI)
		return "dpi";

	DDPDUMP("%s, unknown reg=%d\n", __func__, regval);
	return "unknown";
}

static int dvt_mutex_enable_l(void *handle, unsigned int hwmutex_id)
{
	DPI_DVT_LOG_W("mutex %d enable\n", hwmutex_id);
	DISP_REG_SET(handle, DISP_REG_CONFIG_MUTEX_EN(hwmutex_id), 1);
	return 0;
}

int dvt_mutex_enable(void *handle, unsigned int hwmutex_id)
{
	return dvt_mutex_enable_l(handle, hwmutex_id);
}

int dvt_mutex_disenable(void *handle, unsigned int hwmutex_id)
{
	DPI_DVT_LOG_W("mutex %d disable\n", hwmutex_id);
	DISP_REG_SET(handle, DISP_REG_CONFIG_MUTEX_EN(hwmutex_id), 0);
	return 0;
}

int dvt_mutex_reset(void *handle, unsigned int hwmutex_id)
{
	DPI_DVT_LOG_W("mutex %d reset\n", hwmutex_id);
	DISP_REG_SET(handle, DISP_REG_CONFIG_MUTEX_RST(hwmutex_id), 1);
	DISP_REG_SET(handle, DISP_REG_CONFIG_MUTEX_RST(hwmutex_id), 0);

	return 0;
}

static int dvt_mutex_mod(void *handle, unsigned int hwmutex_id, int mode, unsigned int num)
{
	if (num == 0)
		DISP_REG_SET(handle, DISP_REG_CONFIG_MUTEX_MOD0(hwmutex_id), mode);
	return 0;
}

static int dvt_mutex_sof(void *handle, unsigned int hwmutex_id, int sof)
{
	DISP_REG_SET(handle, DISP_REG_CONFIG_MUTEX_SOF(hwmutex_id), sof);
	return 0;
}

/*{DISP_MODULE_RDMA_SHORT    , 15}*/
int dvt_mutex_set(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	/* int sof = SOF_DPI0; */

	int sof = 0x82;

	mode |= 1 << RDMA_MOD_FOR_MUTEX_SHORT;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);
	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s, sof=%x\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof), sof);

	return 0;
}
#if 0
int rdma2_dvt_mutex_set(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	int sof = SOF_DPI0;

	mode |= 1 << RDMA2_MOD_FOR_MUTEX;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);
	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s, sof=%x\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof), sof);

	return 0;
}
#endif

#ifdef DPI_DVT_TEST_SUPPORT
/**********************************K2 LONG PATH Start***************************************/
/*OVL0 -> OVL0_MOUT -> COLOR0_SEL -> COLOR0 -> CCORRO -> AAL0 -> GAMMA0 -> DITHER0 -> DITHER0_MUT*/
/*DISP_RDMA0 -> RDMA0_SOUT -> DPI_SEL -> DPI */
#if 0
int dvt_connect_ovl0_dpi(void *handle)
{
	kal_uint32 value = 0;

	/*OVL0_MOUT to OVL0_2L_SEL */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_MOUT_EN, value);

	/*OVL0_2L_SEL from OVL0_MOUT */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_2L_SEL_IN, value);

	/*OVL0_2L_INT_SOUT to OVL0_2L */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_2L_INT_SOUT_SEL_IN, value);

	/*OVL0_SOUT to OVL0_SEL */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_SOUT_SEL_IN, value);

	/*OVL0_SEL from OVL0_SOUT */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_SEL_IN, value);

	/*OVL0_PQ_MOUT to COLOR0_SEL */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_PQ_MOUT_EN, value);

	/*COLOR0_SEL from OVL0_PQ_MOUT */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_COLOR0_SEL_IN, value);

	/*CCORR0_SOUT to AAL0_SEL */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_CCORR0_SOUT_SEL_IN, value);

	/*AAL1_SEL from CCORR1_SOUT*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_AAL0_SEL_IN, value);

	/*DITHER1_MOUT to RDMA1*/
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DITHER0_MOUT_EN, value);

	/*RDMA1_SOUT to PATH1_SEL*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA0_SOUT_SEL_IN, value);

	/*PATH0_SEL from RDMA1_SOUT*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH0_SEL_IN, value);

	/*PATH0_SOUT to DSC_SEL*/
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH0_SOUT_SEL_IN, value);

	/*DSC_SEL from PATH0_SOUT*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_SEL_IN, value);

	/*DSC_MOUT to DPI0_SEL*/
	value = 0x4;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_MOUT_EN, value);

	/*DPI0_SEL from DSC_MOUT*/
	value = 0x2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);


	return 0;
}

int dvt_disconnect_ovl0_dpi(void *handle)
{
	kal_uint32 value = 0;

	/*OVL0_MOUT to OVL0_2L_SEL */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_MOUT_EN, value);
	/*OVL0_2L_SEL from OVL0_MOUT */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_2L_SEL_IN, value);
	/*OVL0_2L_INT_SOUT to OVL0_2L */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_2L_INT_SOUT_SEL_IN, value);
	/*OVL0_SOUT to OVL0_SEL */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_SOUT_SEL_IN, value);
	/*OVL0_SEL from OVL0_SOUT */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_SEL_IN, value);
	/*OVL0_PQ_MOUT to COLOR0_SEL */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL0_PQ_MOUT_EN, value);
	/*COLOR0_SEL from OVL0_PQ_MOUT */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_COLOR0_SEL_IN, value);
	/*CCORR0_SOUT to AAL0_SEL */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_CCORR0_SOUT_SEL_IN, value);
	/*AAL1_SEL from CCORR1_SOUT*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_AAL0_SEL_IN, value);
	/*DITHER1_MOUT to RDMA1*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DITHER0_MOUT_EN, value);
	/*RDMA1_SOUT to PATH1_SEL*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA0_SOUT_SEL_IN, value);
	/*PATH0_SEL from RDMA1_SOUT*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH0_SEL_IN, value);
	/*PATH0_SOUT to DSC_SEL*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH0_SOUT_SEL_IN, value);
	/*DSC_SEL from PATH0_SOUT*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_SEL_IN, value);
	/*DSC_MOUT to DPI0_SEL*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_MOUT_EN, value);
	/*DPI0_SEL from DSC_MOUT*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);

	return 0;
}

int dvt_mutex_set_ovl0_dpi(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	int sof = SOF_DPI0;

	/*OVL0 -> OVL0_MOUT -> COLOR0_SEL -> COLOR0 -> CCORRO -> AAL0 -> GAMMA0 -> DITHER0 -> DITHER0_MUT */
	/*DISP_RDMA0 -> RDMA0_SOUT -> DPI_SEL -> DPI */

	mode |= 1 << OVL0_MOD_FOR_MUTEX;
	mode |= 1 << OVL0_2L_MOD_FOR_MUTEX;
	mode |= 1 << COLOR_MOD_FOR_MUTEX;
	mode |= 1 << CCORR_MOD_FOR_MUTEX;
	mode |= 1 << AAL_MOD_FOR_MUTEX;
	mode |= 1 << GAMMA_MOD_FOR_MUTEX;
	mode |= 1 << DITHER_MOD_FOR_MUTEX;
	mode |= 1 << RDMA0_MOD_FOR_MUTEX;
	mode |= 1 << DISP_DSC_MOD_FOR_MUTEX;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);
	mode = 0;
	dvt_mutex_mod(handle, mutex_id, mode, 1);
	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof));

	return 0;
}

int dvt_connect_ovl1_wdma(void *handle)
{
	kal_uint32 value = 0;
	/*OVL1_MOUT to OVL1_2L_SEL */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_MOUT_EN, value);

	/*OVL1_MOUT to OVL1_2L_SEL */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_SEL_IN, value);

	/*OVL1_2L_INT_SOUT to OVL1_2L */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_INT_SOUT_SEL_IN, value);

	/*OVL1_PQ_MOUT to WDMA1 */
	value = 0x2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_PQ_MOUT_EN, value);

	/* WDMA1_SEL FROM OVL1_PQ_MOUT*/
	value = 0x0;
	DISP_REG_SET(NULL, DISP_REG_CONFIG_DISP_WDMA1_SEL_IN, value);
	return 0;
}

int dvt_disconnect_ovl1_wdma(void *handle)
{
	kal_uint32 value = 0;
	/*OVL1_MOUT to OVL1_2L_SEL */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_MOUT_EN, value);
	/*OVL1_MOUT to OVL1_2L_SEL */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_SEL_IN, value);
	/*OVL1_2L_INT_SOUT to OVL1_2L */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_INT_SOUT_SEL_IN, value);
	/*OVL1_PQ_MOUT to WDMA1 */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_PQ_MOUT_EN, value);
	/* WDMA1_SEL FROM OVL1_PQ_MOUT*/
	DISP_REG_SET(NULL, DISP_REG_CONFIG_DISP_WDMA1_SEL_IN, value);

	return 0;
}

int dvt_mutex_set_ovl1_wdma(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	int sof = 0;

	/*OVL0 -> OVL0_MOUT -> OVL0_SOUT -> OVL0_SEL -> OVL0_PQ_MOUT -> COLOR0_SEL*/
	/*	-> COLOR0 -> CCORRO -> AAL0 -> GAMMA0 -> DITHER0 -> DITHER0_MUT */
	/*DISP_RDMA0 -> RDMA0_SOUT -> DPI_SEL -> DPI */

	mode |= 1 << OVL1_MOD_FOR_MUTEX;
	mode |= 1 << OVL1_2L_MOD_FOR_MUTEX;
	mode |= 1 << WDMA1_MOD_FOR_MUTEX;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);
	mode = 0;
	dvt_mutex_mod(handle, mutex_id, mode, 1);
	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof));

	return 0;
}
#endif

/*OVL1 -> OVL1_MOUT -> OVL1_2L_SEL -> OVL1_2L -> OVL1_PQ_MOUT ->*/
/*	COLOR1_SEL -> DITHER1_MOUT*/
/*	-> DISP_RDMA1 -> RDMA1_SOUT -> DPI_SEL -> DPI*/
/*ovl1 out, rdma1 sel, dpi sel*/
int dvt_connect_ovl1_dpi(void *handle)
{
	kal_uint32 value = 0;

	/*OVL1_2L_MOUT to RDMA1 */
	value = 0x10;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_MOUT_EN, value);

	/*RDMA1_SOUT to DPI0_SEL*/
	value = 0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN, value);

	/*DPI0_SEL from RDMA1_SOUT*/
	value = 2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);


	return 0;
}

int dvt_disconnect_ovl1_dpi(void *handle)
{
	kal_uint32 value = 0;

	/*OVL1_2L_MOUT to RDMA1 */
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_MOUT_EN, value);

	/*RDMA1_SOUT to DPI0_SEL*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN, value);

	/*DPI0_SEL from RDMA1_SOUT*/
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DPI0_SEL_IN, value);


	return 0;
}

/*OVL1 -> OVL1_MOUT -> DISP_RDMA1 -> RDMA1_SOUT -> DPI_SEL -> DPI*/
int dvt_mutex_set_ovl1_dpi(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	int sof = 0x82;

	mode |= 1 << OVL1_2L_MOD_FOR_MUTEX;
	mode |= 1 << RDMA_MOD_FOR_MUTEX_SHORT;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);
	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof));

	return 0;
}
#if 0
int dsi_dsc_dvt_connect_path(void *handle)
{
	kal_uint32 value = 0;
	/*RDMA1_SOUT to PATH1_SEL*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN, value);

	/*PATH1_SEL from RDMA1_SOUT*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH1_SEL_IN, value);

	/*PATH1_SOUT to DSC_SEL*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH1_SOUT_SEL_IN, value);

	/*DSC_SEL from PATH1_SOUT*/
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_SEL_IN, value);

	/*DSC_MOUT to DPI0_SEL*/
	value = 0x2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_MOUT_EN, value);

	/*DSI1_SEL from DSC_MOUT*/
	value = 0x2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSI1_SEL_IN, value);

	return 0;
}
int ovl_dsi_dsc_dvt_connect_path(void *handle)
{
	kal_uint32 value = 0;

	/*OVL1_MOUT to OVL1_2L_SEL */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_MOUT_EN, value);

	/*OVL1_MOUT to OVL1_2L_SEL */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_SEL_IN, value);

	/*OVL1_2L_INT_SOUT to OVL1_2L */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_2L_INT_SOUT_SEL_IN, value);

	/*OVL1_PQ_MOUT to COLOR1_SEL */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_OVL1_PQ_MOUT_EN, value);

	/*COLOR1_SEL from OVL1_PQ_MOUT */
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_COLOR1_SEL_IN, value);

	/*CCORR1_SOUT to AAL1_SEL */
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_CCORR1_SOUT_SEL_IN, value);

	/*AAL1_SEL from CCORR1_SOUT*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_AAL1_SEL_IN, value);

	/*DITHER1_MOUT to RDMA1*/
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DITHER1_MOUT_EN, value);

	/*RDMA1_SOUT to PATH1_SEL*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN, value);

	/*PATH1_SEL from RDMA1_SOUT*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH1_SEL_IN, value);

	/*PATH1_SOUT to DSC_SEL*/
	value = 0x0;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_PATH1_SOUT_SEL_IN, value);

	/*DSC_SEL from PATH1_SOUT*/
	value = 0x1;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_SEL_IN, value);

	/*DSC_MOUT to DSI1_SEL*/
	value = 0x2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSC_MOUT_EN, value);

	/*DSI1_SEL from DSC_MOUT*/
	value = 0x2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSI1_SEL_IN, value);

	return 0;
}

int dsi_dsc_dvt_mutex_set(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	int sof = SOF_DSI1;

	mode |= 1 << RDMA_MOD_FOR_MUTEX_SHORT;
	mode |= 1 << DISP_DSC_MOD_FOR_MUTEX;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);

	mode = 0;
	mode |= 1 << DSI1_MOD_FOR_MUTEX;
	dvt_mutex_mod(handle, mutex_id, mode, 1);

	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s, sof=%x\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof), sof);

	return 0;
}
int ovl_dsi_dsc_dvt_mutex_set(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	int sof = SOF_DSI1;

	mode |= 1 << OVL1_MOD_FOR_MUTEX;
	mode |= 1 << OVL1_2L_MOD_FOR_MUTEX;
	mode |= 1 << COLOR1_MOD_FOR_MUTEX;
	mode |= 1 << CCORR1_MOD_FOR_MUTEX;
	mode |= 1 << AAL1_MOD_FOR_MUTEX;
	mode |= 1 << GAMMA1_MOD_FOR_MUTEX;
	mode |= 1 << DITHER1_MOD_FOR_MUTEX;
	mode |= 1 << RDMA_MOD_FOR_MUTEX_SHORT;
	mode |= 1 << DISP_DSC_MOD_FOR_MUTEX;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);

	mode = 0;
	mode |= 1 << DSI1_MOD_FOR_MUTEX;
	dvt_mutex_mod(handle, mutex_id, mode, 1);

	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof));

	return 0;
}

int dsi_dvt_connect_path(void *handle)
{
	kal_uint32 value = 0;
	/*RDMA1_SOUT to PATH1_SEL*/
	value = 0x2;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_RDMA1_SOUT_SEL_IN, value);

	/*PATH1_SEL from RDMA1_SOUT*/
	value = 0x4;
	DISP_REG_SET(handle, DISP_REG_CONFIG_DISP_DSI1_SEL_IN, value);

	return 0;
}

int dsi_dvt_mutex_set(unsigned int mutex_id, void *handle)
{
	kal_uint32 mode = 0;
	int sof = SOF_DSI1;

	mode |= 1 << RDMA_MOD_FOR_MUTEX_SHORT;

	if (mutex_id < DISP_MUTEX_DDP_FIRST || mutex_id > DISP_MUTEX_DDP_LAST) {
		DDPERR("exceed mutex max (0 ~ %d)\n", DISP_MUTEX_DDP_LAST);
		return -1;
	}

	dvt_mutex_mod(handle, mutex_id, mode, 0);

	mode = 0;
	mode |= 1 << DSI1_MOD_FOR_MUTEX;
	dvt_mutex_mod(handle, mutex_id, mode, 1);

	dvt_mutex_sof(handle, mutex_id, sof);
	DPI_DVT_LOG_W("dvt_mutex_set %d mode=0x%x, sof=%s, sof=%x\n", mutex_id, mode,
		      dvt_ddp_get_mutex_sof_name(sof), sof);

	return 0;
}
#endif

#endif				/*DPI_DVT_TEST_SUPPORT */
#endif				/*#if defined(RDMA_DPI_PATH_SUPPORT) || defined(DPI_DVT_TEST_SUPPORT) */
