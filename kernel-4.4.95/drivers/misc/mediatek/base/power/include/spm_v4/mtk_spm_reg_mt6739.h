

#ifndef _MT_SPM_REG_
#define _MT_SPM_REG_

#include "sleep_def_mt6739.h"
#include "pcm_def_mt6739.h"


#define POWERON_CONFIG_EN              (SPM_BASE + 0x000)
#define SPM_POWER_ON_VAL0              (SPM_BASE + 0x004)
#define SPM_POWER_ON_VAL1              (SPM_BASE + 0x008)
#define SPM_CLK_CON                    (SPM_BASE + 0x00C)
#define SPM_CLK_SETTLE                 (SPM_BASE + 0x010)
#define SPM_AP_STANDBY_CON             (SPM_BASE + 0x014)
#define PCM_CON0                       (SPM_BASE + 0x018)
#define PCM_CON1                       (SPM_BASE + 0x01C)
#define PCM_IM_PTR                     (SPM_BASE + 0x020)
#define PCM_IM_LEN                     (SPM_BASE + 0x024)
#define PCM_REG_DATA_INI               (SPM_BASE + 0x028)
#define PCM_PWR_IO_EN                  (SPM_BASE + 0x02C)
#define PCM_TIMER_VAL                  (SPM_BASE + 0x030)
#define PCM_WDT_VAL                    (SPM_BASE + 0x034)
#define PCM_IM_HOST_RW_PTR             (SPM_BASE + 0x038)
#define PCM_IM_HOST_RW_DAT             (SPM_BASE + 0x03C)
#define PCM_EVENT_VECTOR0              (SPM_BASE + 0x040)
#define PCM_EVENT_VECTOR1              (SPM_BASE + 0x044)
#define PCM_EVENT_VECTOR2              (SPM_BASE + 0x048)
#define PCM_EVENT_VECTOR3              (SPM_BASE + 0x04C)
#define PCM_EVENT_VECTOR4              (SPM_BASE + 0x050)
#define PCM_EVENT_VECTOR5              (SPM_BASE + 0x054)
#define PCM_EVENT_VECTOR6              (SPM_BASE + 0x058)
#define PCM_EVENT_VECTOR7              (SPM_BASE + 0x05C)
#define PCM_EVENT_VECTOR8              (SPM_BASE + 0x060)
#define PCM_EVENT_VECTOR9              (SPM_BASE + 0x064)
#define PCM_EVENT_VECTOR10             (SPM_BASE + 0x068)
#define PCM_EVENT_VECTOR11             (SPM_BASE + 0x06C)
#define PCM_EVENT_VECTOR12             (SPM_BASE + 0x070)
#define PCM_EVENT_VECTOR13             (SPM_BASE + 0x074)
#define PCM_EVENT_VECTOR14             (SPM_BASE + 0x078)
#define PCM_EVENT_VECTOR15             (SPM_BASE + 0x07C)
#define PCM_EVENT_VECTOR_EN            (SPM_BASE + 0x080)
#define SPM_SRAM_RSV_CON               (SPM_BASE + 0x088)
#define SPM_SWINT                      (SPM_BASE + 0x08C)
#define SPM_SWINT_SET                  (SPM_BASE + 0x090)
#define SPM_SWINT_CLR                  (SPM_BASE + 0x094)
#define SPM_SCP_MAILBOX                (SPM_BASE + 0x098)
#define SPM_SCP_IRQ                    (SPM_BASE + 0x09C)
#define SPM_TWAM_CON                   (SPM_BASE + 0x0A0)
#define SPM_TWAM_WINDOW_LEN            (SPM_BASE + 0x0A4)
#define SPM_TWAM_IDLE_SEL              (SPM_BASE + 0x0A8)
#define SPM_CPU_WAKEUP_EVENT           (SPM_BASE + 0x0B0)
#define SPM_IRQ_MASK                   (SPM_BASE + 0x0B4)
#define SPM_SRC_REQ                    (SPM_BASE + 0x0B8)
#define SPM_SRC_MASK                   (SPM_BASE + 0x0BC)
#define SPM_SRC2_MASK                  (SPM_BASE + 0x0C0)
#define SPM_WAKEUP_EVENT_MASK          (SPM_BASE + 0x0C4)
#define SPM_WAKEUP_EVENT_EXT_MASK      (SPM_BASE + 0x0C8)
#define SPM_TWAM_EVENT_CLEAR           (SPM_BASE + 0x0CC)
#define SCP_CLK_CON                    (SPM_BASE + 0x0D0)
#define PCM_DEBUG_CON                  (SPM_BASE + 0x0D4)
#define DDR_EN_DBC_LEN                 (SPM_BASE + 0x0D8)
#define AHB_BUS_CON                    (SPM_BASE + 0x0DC)
#define SPM_SRC3_MASK                  (SPM_BASE + 0x0E0)
#define DDR_EN_EMI_DBC_CON             (SPM_BASE + 0x0E4)
#define MCU_DDREN_REQ_DBC_LEN          (SPM_BASE + 0x0E8)
#define PCM_REG0_DATA                  (SPM_BASE + 0x100)
#define PCM_REG1_DATA                  (SPM_BASE + 0x104)
#define PCM_REG2_DATA                  (SPM_BASE + 0x108)
#define PCM_REG3_DATA                  (SPM_BASE + 0x10C)
#define PCM_REG4_DATA                  (SPM_BASE + 0x110)
#define PCM_REG5_DATA                  (SPM_BASE + 0x114)
#define PCM_REG6_DATA                  (SPM_BASE + 0x118)
#define PCM_REG7_DATA                  (SPM_BASE + 0x11C)
#define PCM_REG8_DATA                  (SPM_BASE + 0x120)
#define PCM_REG9_DATA                  (SPM_BASE + 0x124)
#define PCM_REG10_DATA                 (SPM_BASE + 0x128)
#define PCM_REG11_DATA                 (SPM_BASE + 0x12C)
#define PCM_REG12_DATA                 (SPM_BASE + 0x130)
#define PCM_REG13_DATA                 (SPM_BASE + 0x134)
#define PCM_REG14_DATA                 (SPM_BASE + 0x138)
#define PCM_REG15_DATA                 (SPM_BASE + 0x13C)
#define PCM_REG12_MASK_B_STA           (SPM_BASE + 0x140)
#define PCM_REG12_EXT_DATA             (SPM_BASE + 0x144)
#define PCM_REG12_EXT_MASK_B_STA       (SPM_BASE + 0x148)
#define PCM_EVENT_REG_STA              (SPM_BASE + 0x14C)
#define PCM_TIMER_OUT                  (SPM_BASE + 0x150)
#define PCM_WDT_OUT                    (SPM_BASE + 0x154)
#define SPM_IRQ_STA                    (SPM_BASE + 0x158)
#define SPM_WAKEUP_STA                 (SPM_BASE + 0x15C)
#define SPM_WAKEUP_EXT_STA             (SPM_BASE + 0x160)
#define SPM_WAKEUP_MISC                (SPM_BASE + 0x164)
#define BUS_PROTECT_RDY                (SPM_BASE + 0x168)
#define BUS_PROTECT2_RDY               (SPM_BASE + 0x16C)
#define SUBSYS_IDLE_STA                (SPM_BASE + 0x170)
#define CPU_IDLE_STA                   (SPM_BASE + 0x174)
#define PCM_FSM_STA                    (SPM_BASE + 0x178)
#define SRC_REQ_STA                    (SPM_BASE + 0x17C)
#define PWR_STATUS                     (SPM_BASE + 0x180)
#define PWR_STATUS_2ND                 (SPM_BASE + 0x184)
#define CPU_PWR_STATUS                 (SPM_BASE + 0x188)
#define CPU_PWR_STATUS_2ND             (SPM_BASE + 0x18C)
#define MISC_STA                       (SPM_BASE + 0x190)
#define SPM_SRC_RDY_STA                (SPM_BASE + 0x194)
#define DRAMC_DBG_LATCH                (SPM_BASE + 0x19C)
#define SPM_TWAM_LAST_STA0             (SPM_BASE + 0x1A0)
#define SPM_TWAM_LAST_STA1             (SPM_BASE + 0x1A4)
#define SPM_TWAM_LAST_STA2             (SPM_BASE + 0x1A8)
#define SPM_TWAM_LAST_STA3             (SPM_BASE + 0x1AC)
#define SPM_TWAM_CURR_STA0             (SPM_BASE + 0x1B0)
#define SPM_TWAM_CURR_STA1             (SPM_BASE + 0x1B4)
#define SPM_TWAM_CURR_STA2             (SPM_BASE + 0x1B8)
#define SPM_TWAM_CURR_STA3             (SPM_BASE + 0x1BC)
#define SPM_TWAM_TIMER_OUT             (SPM_BASE + 0x1C0)
#define SPM_DVFS_STA                   (SPM_BASE + 0x1C8)
#define SPM2NFI_DVFS_LEVEL             (SPM_BASE + 0x1CC)
#define SPM2NFI_DVFS_REQ               (SPM_BASE + 0x1D0)
#define NFI2SPM_DVFS_READY             (SPM_BASE + 0x1D4)
#define SRC_DDREN_STA                  (SPM_BASE + 0x1E0)
#define MCU_PWR_CON                    (SPM_BASE + 0x200)
#define MP0_CPUTOP_PWR_CON             (SPM_BASE + 0x204)
#define MP0_CPU0_PWR_CON               (SPM_BASE + 0x208)
#define MP0_CPU1_PWR_CON               (SPM_BASE + 0x20C)
#define MP0_CPU2_PWR_CON               (SPM_BASE + 0x210)
#define MP0_CPU3_PWR_CON               (SPM_BASE + 0x214)
#define MP0_CPUTOP_L2_PDN              (SPM_BASE + 0x240)
#define MP0_CPUTOP_L2_SLEEP_B          (SPM_BASE + 0x244)
#define MP0_CPU0_L1_PDN                (SPM_BASE + 0x248)
#define MP0_CPU1_L1_PDN                (SPM_BASE + 0x24C)
#define MP0_CPU2_L1_PDN                (SPM_BASE + 0x250)
#define MP0_CPU3_L1_PDN                (SPM_BASE + 0x254)
#define CPU_EXT_BUCK_ISO               (SPM_BASE + 0x290)
#define DUMMY1_PWR_CON                 (SPM_BASE + 0x2B0)
#define ARMPLL_CLK_CON                 (SPM_BASE + 0x2BC)
#define VCODEC_PWR_CON                 (SPM_BASE + 0x300)
#define ISP_PWR_CON                    (SPM_BASE + 0x308)
#define DIS_PWR_CON                    (SPM_BASE + 0x30C)
#define MJC_PWR_CON                    (SPM_BASE + 0x310)
#define IFR_PWR_CON                    (SPM_BASE + 0x318)
#define DPY_PWR_CON                    (SPM_BASE + 0x31C)
#define MD1_PWR_CON                    (SPM_BASE + 0x320)
#define MD2_PWR_CON                    (SPM_BASE + 0x324)
#define CONN_PWR_CON                   (SPM_BASE + 0x32C)
#define VCOREPDN_PWR_CON               (SPM_BASE + 0x330)
#define MFG_PWR_CON                    (SPM_BASE + 0x338)
#define MFG_CORE0_PWR_CON              (SPM_BASE + 0x33C)
#define SYSRAM_CON                     (SPM_BASE + 0x350)
#define SYSROM_CON                     (SPM_BASE + 0x354)
#define SSPM_SRAM_CON                  (SPM_BASE + 0x358)
#define MCUPM_SRAM_CON                 (SPM_BASE + 0x35C)
#define PCCIF0_SRAM_CON                (SPM_BASE + 0x378)
#define PCCIF1_SRAM_CON                (SPM_BASE + 0x37C)
#define DUMMY_SRAM_CON                 (SPM_BASE + 0x380)
#define MD_EXT_BUCK_ISO_CON            (SPM_BASE + 0x390)
#define MD_SRAM_ISO_CON                (SPM_BASE + 0x394)
#define MD_EXTRA_PWR_CON               (SPM_BASE + 0x398)
#define EXT_BUCK_CON                   (SPM_BASE + 0x3A0)
#define DUMMY2_PWR_CON                 (SPM_BASE + 0x3B0)
#define MBIST_EFUSE_REPAIR_ACK_STA     (SPM_BASE + 0x3D0)
#define SPM_DVFS_CON                   (SPM_BASE + 0x400)
#define SPM_MDBSI_CON                  (SPM_BASE + 0x404)
#define SPM_MAS_PAUSE_MASK_B           (SPM_BASE + 0x408)
#define SPM_MAS_PAUSE2_MASK_B          (SPM_BASE + 0x40C)
#define SPM_BSI_GEN                    (SPM_BASE + 0x410)
#define SPM_BSI_EN_SR                  (SPM_BASE + 0x414)
#define SPM_BSI_CLK_SR                 (SPM_BASE + 0x418)
#define SPM_BSI_D0_SR                  (SPM_BASE + 0x41C)
#define SPM_BSI_D1_SR                  (SPM_BASE + 0x420)
#define SPM_BSI_D2_SR                  (SPM_BASE + 0x424)
#define SPM_AP_SEMA                    (SPM_BASE + 0x428)
#define SPM_SPM_SEMA                   (SPM_BASE + 0x42C)
#define AP_MDSRC_REQ                   (SPM_BASE + 0x430)
#define SPM2MD_DVFS_CON                (SPM_BASE + 0x438)
#define MD2SPM_DVFS_CON                (SPM_BASE + 0x43C)
#define DRAMC_DVFS_CON_RSV             (SPM_BASE + 0x440)
#define DVFSRC_LATENCY                 (SPM_BASE + 0x444)
#define CPU_DVFS_REQ                   (SPM_BASE + 0x448)
#define SPM_PLL_CON                    (SPM_BASE + 0x44C)
#define SPM_EMI_BW_MODE                (SPM_BASE + 0x450)
#define AP2MD_PEER_WAKEUP              (SPM_BASE + 0x454)
#define ULPOSC_CON                     (SPM_BASE + 0x458)
#define SPM2MM_CON                     (SPM_BASE + 0x45C)
#define DRAMC_PHY_CLK_SW_CON_SEL       (SPM_BASE + 0x460)
#define DRAMC_DPY_CLK_SW_CON           (SPM_BASE + 0x464)
#define SPM_S1_MODE_CH                 (SPM_BASE + 0x468)
#define EMI_SELF_REFRESH_CH_STA        (SPM_BASE + 0x46C)
#define SW_DR_SHU_EN_CON               (SPM_BASE + 0x470)
#define SPM_SEMA_M0                    (SPM_BASE + 0x480)
#define SPM_SEMA_M1                    (SPM_BASE + 0x484)
#define SPM_SEMA_M2                    (SPM_BASE + 0x488)
#define SPM_SEMA_M3                    (SPM_BASE + 0x48C)
#define SPM_SEMA_M4                    (SPM_BASE + 0x490)
#define SPM_SEMA_M5                    (SPM_BASE + 0x494)
#define SPM_SEMA_M6                    (SPM_BASE + 0x498)
#define SPM_SEMA_M7                    (SPM_BASE + 0x49C)
#define SPM_SEMA_M8                    (SPM_BASE + 0x4A0)
#define SPM_SEMA_M9                    (SPM_BASE + 0x4A4)
#define MCUPM_MCUSYS_REQ_CON           (SPM_BASE + 0x4A8)
#define SRAM_DREQ_ACK                  (SPM_BASE + 0x4AC)
#define SRAM_DREQ_CON                  (SPM_BASE + 0x4B0)
#define SRAM_DREQ_CON_SET              (SPM_BASE + 0x4B4)
#define SRAM_DREQ_CON_CLR              (SPM_BASE + 0x4B8)
#define SPM2EMI_ENTER_ULPM             (SPM_BASE + 0x4BC)
#define SPM_SSPM_IRQ                   (SPM_BASE + 0x4C0)
#define SPM2SSPM_INT                   (SPM_BASE + 0x4C4)
#define SPM2SSPM_INT_SET               (SPM_BASE + 0x4C8)
#define SPM2SSPM_INT_CLR               (SPM_BASE + 0x4CC)
#define SPM2SSPM_MAILBOX_0             (SPM_BASE + 0x4D0)
#define SPM2SSPM_MAILBOX_1             (SPM_BASE + 0x4D4)
#define SPM2SSPM_MAILBOX_2             (SPM_BASE + 0x4D8)
#define SPM2SSPM_MAILBOX_3             (SPM_BASE + 0x4DC)
#define SSPM2SPM_INT                   (SPM_BASE + 0x4E0)
#define SSPM2SPM_INT_SET               (SPM_BASE + 0x4E4)
#define SSPM2SPM_INT_CLR               (SPM_BASE + 0x4E8)
#define SSPM2SPM_MAILBOX_0             (SPM_BASE + 0x4EC)
#define SSPM2SPM_MAILBOX_1             (SPM_BASE + 0x4F0)
#define SSPM2SPM_MAILBOX_2             (SPM_BASE + 0x4F4)
#define SSPM2SPM_MAILBOX_3             (SPM_BASE + 0x4F8)
#define SSPM2SPM_CFG                   (SPM_BASE + 0x4FC)
#define MP0_CPU0_IRQ_MASK              (SPM_BASE + 0x500)
#define MP0_CPU1_IRQ_MASK              (SPM_BASE + 0x504)
#define MP0_CPU2_IRQ_MASK              (SPM_BASE + 0x508)
#define MP0_CPU3_IRQ_MASK              (SPM_BASE + 0x50C)
#define MP0_CPU0_WFI_EN                (SPM_BASE + 0x530)
#define MP0_CPU1_WFI_EN                (SPM_BASE + 0x534)
#define MP0_CPU2_WFI_EN                (SPM_BASE + 0x538)
#define MP0_CPU3_WFI_EN                (SPM_BASE + 0x53C)
#define MP0_L2CFLUSH                   (SPM_BASE + 0x554)
#define CPU_PTPOD2_CON                 (SPM_BASE + 0x560)
#define ROOT_CPUTOP_ADDR               (SPM_BASE + 0x570)
#define ROOT_CORE_ADDR                 (SPM_BASE + 0x574)
#define CPU_SPARE_CON                  (SPM_BASE + 0x580)
#define CPU_SPARE_CON_SET              (SPM_BASE + 0x584)
#define CPU_SPARE_CON_CLR              (SPM_BASE + 0x588)
#define SPM2SW_MAILBOX_0               (SPM_BASE + 0x5D0)
#define SPM2SW_MAILBOX_1               (SPM_BASE + 0x5D4)
#define SPM2SW_MAILBOX_2               (SPM_BASE + 0x5D8)
#define SPM2SW_MAILBOX_3               (SPM_BASE + 0x5DC)
#define SW2SPM_INT                     (SPM_BASE + 0x5E0)
#define SW2SPM_INT_SET                 (SPM_BASE + 0x5E4)
#define SW2SPM_INT_CLR                 (SPM_BASE + 0x5E8)
#define SW2SPM_MAILBOX_0               (SPM_BASE + 0x5EC)
#define SW2SPM_MAILBOX_1               (SPM_BASE + 0x5F0)
#define SW2SPM_MAILBOX_2               (SPM_BASE + 0x5F4)
#define SW2SPM_MAILBOX_3               (SPM_BASE + 0x5F8)
#define SW2SPM_CFG                     (SPM_BASE + 0x5FC)
#define SPM_SW_FLAG                    (SPM_BASE + 0x600)
#define SPM_SW_DEBUG                   (SPM_BASE + 0x604)
#define SPM_SW_RSV_0                   (SPM_BASE + 0x608)
#define SPM_SW_RSV_1                   (SPM_BASE + 0x60C)
#define SPM_SW_RSV_2                   (SPM_BASE + 0x610)
#define SPM_SW_RSV_3                   (SPM_BASE + 0x614)
#define SPM_SW_RSV_4                   (SPM_BASE + 0x618)
#define SPM_SW_RSV_5                   (SPM_BASE + 0x61C)
#define SPM_RSV_CON                    (SPM_BASE + 0x620)
#define SPM_RSV_STA                    (SPM_BASE + 0x624)
#define SPM_RSV_CON1                   (SPM_BASE + 0x628)
#define SPM_RSV_STA1                   (SPM_BASE + 0x62C)
#define SPM_PASR_DPD_0                 (SPM_BASE + 0x630)
#define SPM_PASR_DPD_1                 (SPM_BASE + 0x634)
#define SPM_PASR_DPD_2                 (SPM_BASE + 0x638)
#define SPM_PASR_DPD_3                 (SPM_BASE + 0x63C)
#define SPM_SPARE_CON                  (SPM_BASE + 0x640)
#define SPM_SPARE_CON_SET              (SPM_BASE + 0x644)
#define SPM_SPARE_CON_CLR              (SPM_BASE + 0x648)
#define SPM_SW_RSV_6                   (SPM_BASE + 0x64C)
#define SPM_SW_RSV_7                   (SPM_BASE + 0x650)
#define SPM_SW_RSV_8                   (SPM_BASE + 0x654)
#define SPM_SW_RSV_9                   (SPM_BASE + 0x658)
#define SPM_SW_RSV_10                  (SPM_BASE + 0x65C)
#define SPM_SW_RSV_11                  (SPM_BASE + 0x660)
#define SPM_SW_RSV_12                  (SPM_BASE + 0x664)
#define SPM_SW_RSV_13                  (SPM_BASE + 0x668)
#define SPM_SW_RSV_14                  (SPM_BASE + 0x66C)
#define SPM_SW_RSV_15                  (SPM_BASE + 0x670)
#define SPM_SW_RSV_16                  (SPM_BASE + 0x674)
#define SPM_SW_RSV_17                  (SPM_BASE + 0x678)
#define SPM_SW_RSV_18                  (SPM_BASE + 0x67C)
#define SPM_SW_RSV_19                  (SPM_BASE + 0x680)
#define DVFSRC_EVENT_MASK_CON          (SPM_BASE + 0x690)
#define DVFSRC_EVENT_FORCE_ON          (SPM_BASE + 0x694)
#define DVFSRC_EVENT_SEL               (SPM_BASE + 0x698)
#define SPM_DVFS_EVENT_STA             (SPM_BASE + 0x69C)
#define SPM_DVFS_EVENT_STA1            (SPM_BASE + 0x6A0)
#define SPM_DVFS_LEVEL                 (SPM_BASE + 0x6A4)
#define DVFS_ABORT_STA                 (SPM_BASE + 0x6A8)
#define DVFS_ABORT_OTHERS_MASK         (SPM_BASE + 0x6AC)
#define SPM_DFS_LEVEL                  (SPM_BASE + 0x6B0)
#define SPM_DVS_LEVEL                  (SPM_BASE + 0x6B4)
#define SPARE_SRC_REQ_MASK             (SPM_BASE + 0x6C0)
#define SPARE_ACK_STA                  (SPM_BASE + 0x6F0)
#define SPARE_ACK_MASK                 (SPM_BASE + 0x6F4)
#define SPM_DVFS_CON1                  (SPM_BASE + 0x700)
#define SPM_DVFS_CON1_STA              (SPM_BASE + 0x704)
#define SPM_DVFS_CMD0                  (SPM_BASE + 0x710)
#define SPM_DVFS_CMD1                  (SPM_BASE + 0x714)
#define SPM_DVFS_CMD2                  (SPM_BASE + 0x718)
#define SPM_DVFS_CMD3                  (SPM_BASE + 0x71C)
#define SPM_DVFS_CMD4                  (SPM_BASE + 0x720)
#define SPM_DVFS_CMD5                  (SPM_BASE + 0x724)
#define SPM_DVFS_CMD6                  (SPM_BASE + 0x728)
#define SPM_DVFS_CMD7                  (SPM_BASE + 0x72C)
#define SPM_DVFS_CMD8                  (SPM_BASE + 0x730)
#define SPM_DVFS_CMD9                  (SPM_BASE + 0x734)
#define SPM_DVFS_CMD10                 (SPM_BASE + 0x738)
#define SPM_DVFS_CMD11                 (SPM_BASE + 0x73C)
#define SPM_DVFS_CMD12                 (SPM_BASE + 0x740)
#define SPM_DVFS_CMD13                 (SPM_BASE + 0x744)
#define SPM_DVFS_CMD14                 (SPM_BASE + 0x748)
#define SPM_DVFS_CMD15                 (SPM_BASE + 0x74C)
#define WDT_LATCH_SPARE0_FIX           (SPM_BASE + 0x780)
#define WDT_LATCH_SPARE1_FIX           (SPM_BASE + 0x784)
#define WDT_LATCH_SPARE2_FIX           (SPM_BASE + 0x788)
#define WDT_LATCH_SPARE3_FIX           (SPM_BASE + 0x78C)
#define SPARE_ACK_IN_FIX               (SPM_BASE + 0x790)
#define DCHA_LATCH_RSV0_FIX            (SPM_BASE + 0x794)
#define PCM_WDT_LATCH_0                (SPM_BASE + 0x800)
#define PCM_WDT_LATCH_1                (SPM_BASE + 0x804)
#define PCM_WDT_LATCH_2                (SPM_BASE + 0x808)
#define PCM_WDT_LATCH_3                (SPM_BASE + 0x80C)
#define PCM_WDT_LATCH_4                (SPM_BASE + 0x810)
#define PCM_WDT_LATCH_5                (SPM_BASE + 0x814)
#define PCM_WDT_LATCH_6                (SPM_BASE + 0x818)
#define PCM_WDT_LATCH_7                (SPM_BASE + 0x81C)
#define PCM_WDT_LATCH_8                (SPM_BASE + 0x820)
#define PCM_WDT_LATCH_9                (SPM_BASE + 0x824)
#define WDT_LATCH_SPARE0               (SPM_BASE + 0x828)
#define WDT_LATCH_SPARE1               (SPM_BASE + 0x82C)
#define WDT_LATCH_SPARE2               (SPM_BASE + 0x830)
#define WDT_LATCH_SPARE3               (SPM_BASE + 0x834)
#define PCM_WDT_LATCH_10               (SPM_BASE + 0x838)
#define PCM_WDT_LATCH_11               (SPM_BASE + 0x83C)
#define DCHA_GATING_LATCH_0            (SPM_BASE + 0x840)
#define DCHA_GATING_LATCH_1            (SPM_BASE + 0x844)
#define DCHA_GATING_LATCH_2            (SPM_BASE + 0x848)
#define DCHA_GATING_LATCH_3            (SPM_BASE + 0x84C)
#define DCHA_GATING_LATCH_4            (SPM_BASE + 0x850)
#define DCHA_GATING_LATCH_5            (SPM_BASE + 0x854)
#define DCHA_GATING_LATCH_6            (SPM_BASE + 0x858)
#define DCHA_GATING_LATCH_7            (SPM_BASE + 0x85C)
#define DCHA_LATCH_RSV0                (SPM_BASE + 0x880)
#define SPM_PC_TRACE_CON               (SPM_BASE + 0x8C0)
#define SPM_PC_TRACE_G0                (SPM_BASE + 0x8C4)
#define SPM_PC_TRACE_G1                (SPM_BASE + 0x8C8)
#define SPM_PC_TRACE_G2                (SPM_BASE + 0x8CC)
#define SPM_PC_TRACE_G3                (SPM_BASE + 0x8D0)
#define SPM_PC_TRACE_G4                (SPM_BASE + 0x8D4)
#define SPM_PC_TRACE_G5                (SPM_BASE + 0x8D8)
#define SPM_PC_TRACE_G6                (SPM_BASE + 0x8DC)
#define SPM_PC_TRACE_G7                (SPM_BASE + 0x8E0)
#define SPM_ACK_CHK_CON                (SPM_BASE + 0x900)
#define SPM_ACK_CHK_PC                 (SPM_BASE + 0x904)
#define SPM_ACK_CHK_SEL                (SPM_BASE + 0x908)
#define SPM_ACK_CHK_TIMER              (SPM_BASE + 0x90C)
#define SPM_ACK_CHK_STA                (SPM_BASE + 0x910)
#define SPM_ACK_CHK_LATCH              (SPM_BASE + 0x914)
#define SPM_ACK_CHK_CON2               (SPM_BASE + 0x920)
#define SPM_ACK_CHK_PC2                (SPM_BASE + 0x924)
#define SPM_ACK_CHK_SEL2               (SPM_BASE + 0x928)
#define SPM_ACK_CHK_TIMER2             (SPM_BASE + 0x92C)
#define SPM_ACK_CHK_STA2               (SPM_BASE + 0x930)
#define SPM_ACK_CHK_LATCH2             (SPM_BASE + 0x934)
#define SPM_ACK_CHK_CON3               (SPM_BASE + 0x940)
#define SPM_ACK_CHK_PC3                (SPM_BASE + 0x944)
#define SPM_ACK_CHK_SEL3               (SPM_BASE + 0x948)
#define SPM_ACK_CHK_TIMER3             (SPM_BASE + 0x94C)
#define SPM_ACK_CHK_STA3               (SPM_BASE + 0x950)
#define SPM_ACK_CHK_LATCH3             (SPM_BASE + 0x954)
#define SPM_ACK_CHK_CON4               (SPM_BASE + 0x960)
#define SPM_ACK_CHK_PC4                (SPM_BASE + 0x964)
#define SPM_ACK_CHK_SEL4               (SPM_BASE + 0x968)
#define SPM_ACK_CHK_TIMER4             (SPM_BASE + 0x96C)
#define SPM_ACK_CHK_STA4               (SPM_BASE + 0x970)
#define SPM_ACK_CHK_LATCH4             (SPM_BASE + 0x974)

/* POWERON_CONFIG_EN (0x10006000+0x000) */
#define BCLK_CG_EN_LSB                      (1U << 0)       /* 1b */
#define MD_BCLK_CG_EN_LSB                   (1U << 1)       /* 1b */
#define PROJECT_CODE_LSB                    (1U << 16)      /* 16b */
/* SPM_POWER_ON_VAL0 (0x10006000+0x004) */
#define POWER_ON_VAL0_LSB                   (1U << 0)       /* 32b */
/* SPM_POWER_ON_VAL1 (0x10006000+0x008) */
#define POWER_ON_VAL1_LSB                   (1U << 0)       /* 32b */
/* SPM_CLK_CON (0x10006000+0x00C) */
#define SYSCLK0_EN_CTRL_LSB                 (1U << 0)       /* 2b */
#define SYSCLK1_EN_CTRL_LSB                 (1U << 2)       /* 2b */
#define SYS_SETTLE_SEL_LSB                  (1U << 4)       /* 1b */
#define SPM_LOCK_INFRA_DCM_LSB              (1U << 5)       /* 1b */
#define EXT_SRCCLKEN_MASK_LSB               (1U << 6)       /* 3b */
#define CXO32K_REMOVE_EN_MD1_LSB            (1U << 9)       /* 1b */
#define CXO32K_REMOVE_EN_MD2_LSB            (1U << 10)      /* 1b */
#define CLKSQ0_SEL_CTRL_LSB                 (1U << 11)      /* 1b */
#define CLKSQ1_SEL_CTRL_LSB                 (1U << 12)      /* 1b */
#define SRCLKEN0_EN_LSB                     (1U << 13)      /* 1b */
#define SRCLKEN1_EN_LSB                     (1U << 14)      /* 1b */
#define SCP_DCM_EN_LSB                      (1U << 15)      /* 1b */
#define SYSCLK0_SRC_MASK_B_LSB              (1U << 16)      /* 7b */
#define SYSCLK1_SRC_MASK_B_LSB              (1U << 23)      /* 7b */
/* SPM_CLK_SETTLE (0x10006000+0x010) */
#define SYSCLK_SETTLE_LSB                   (1U << 0)       /* 28b */
/* SPM_AP_STANDBY_CON (0x10006000+0x014) */
#define WFI_OP_LSB                          (1U << 0)       /* 1b */
#define MP0_CPUTOP_IDLE_MASK_LSB            (1U << 1)       /* 1b */
#define MCUSYS_IDLE_MASK_LSB                (1U << 4)       /* 1b */
#define MCU_DDREN_REQ_DBC_EN_LSB            (1U << 5)       /* 1b */
#define MCU_APSRC_SEL_LSB                   (1U << 6)       /* 1b */
#define MM_MASK_B_LSB                       (1U << 16)      /* 2b */
#define MD_DDR_EN_0_DBC_EN_LSB              (1U << 18)      /* 1b */
#define MD_DDR_EN_1_DBC_EN_LSB              (1U << 19)      /* 1b */
#define MD_MASK_B_LSB                       (1U << 20)      /* 2b */
#define LTE_MASK_B_LSB                      (1U << 23)      /* 1b */
#define SRCCLKENI_MASK_B_LSB                (1U << 24)      /* 1b */
#define MD_APSRC_1_SEL_LSB                  (1U << 25)      /* 1b */
#define MD_APSRC_0_SEL_LSB                  (1U << 26)      /* 1b */
#define CONN_DDR_EN_DBC_EN_LSB              (1U << 27)      /* 1b */
#define CONN_MASK_B_LSB                     (1U << 28)      /* 1b */
#define CONN_APSRC_SEL_LSB                  (1U << 29)      /* 1b */
#define CONN_SRCCLKENA_SEL_MASK_LSB         (1U << 30)      /* 2b */
/* PCM_CON0 (0x10006000+0x018) */
#define PCM_KICK_L_LSB                      (1U << 0)       /* 1b */
#define IM_KICK_L_LSB                       (1U << 1)       /* 1b */
#define PCM_CK_EN_LSB                       (1U << 2)       /* 1b */
#define EN_IM_SLEEP_DVS_LSB                 (1U << 3)       /* 1b */
#define IM_AUTO_PDN_EN_LSB                  (1U << 4)       /* 1b */
#define PCM_SW_RESET_LSB                    (1U << 15)      /* 1b */
#define PCM_CON0_PROJECT_CODE_LSB           (1U << 16)      /* 16b */
/* PCM_CON1 (0x10006000+0x01C) */
#define IM_SLAVE_LSB                        (1U << 0)       /* 1b */
#define IM_SLEEP_LSB                        (1U << 1)       /* 1b */
#define MIF_APBEN_LSB                       (1U << 3)       /* 1b */
#define IM_PDN_LSB                          (1U << 4)       /* 1b */
#define PCM_TIMER_EN_LSB                    (1U << 5)       /* 1b */
#define IM_NONRP_EN_LSB                     (1U << 6)       /* 1b */
#define DIS_MIF_PROT_LSB                    (1U << 7)       /* 1b */
#define PCM_WDT_EN_LSB                      (1U << 8)       /* 1b */
#define PCM_WDT_WAKE_MODE_LSB               (1U << 9)       /* 1b */
#define SPM_SRAM_SLEEP_B_LSB                (1U << 10)      /* 1b */
#define SPM_SRAM_ISOINT_B_LSB               (1U << 11)      /* 1b */
#define EVENT_LOCK_EN_LSB                   (1U << 12)      /* 1b */
#define SRCCLKEN_FAST_RESP_LSB              (1U << 13)      /* 1b */
#define SCP_APB_INTERNAL_EN_LSB             (1U << 14)      /* 1b */
#define PCM_CON1_PROJECT_CODE_LSB           (1U << 16)      /* 16b */
/* PCM_IM_PTR (0x10006000+0x020) */
#define PCM_IM_PTR_LSB                      (1U << 0)       /* 32b */
/* PCM_IM_LEN (0x10006000+0x024) */
#define PCM_IM_LEN_LSB                      (1U << 0)       /* 12b */
/* PCM_REG_DATA_INI (0x10006000+0x028) */
#define PCM_REG_DATA_INI_LSB                (1U << 0)       /* 32b */
/* PCM_PWR_IO_EN (0x10006000+0x02C) */
#define PCM_PWR_IO_EN_LSB                   (1U << 0)       /* 8b */
#define PCM_RF_SYNC_EN_LSB                  (1U << 16)      /* 8b */
/* PCM_TIMER_VAL (0x10006000+0x030) */
#define PCM_TIMER_VAL_LSB                   (1U << 0)       /* 32b */
/* PCM_WDT_VAL (0x10006000+0x034) */
#define PCM_WDT_VAL_LSB                     (1U << 0)       /* 32b */
/* PCM_IM_HOST_RW_PTR (0x10006000+0x038) */
#define PCM_IM_HOST_RW_PTR_LSB              (1U << 0)       /* 11b */
#define PCM_IM_HOST_W_EN_LSB                (1U << 30)      /* 1b */
#define PCM_IM_HOST_EN_LSB                  (1U << 31)      /* 1b */
/* PCM_IM_HOST_RW_DAT (0x10006000+0x03C) */
#define PCM_IM_HOST_RW_DAT_LSB              (1U << 0)       /* 32b */
/* PCM_EVENT_VECTOR0 (0x10006000+0x040) */
#define PCM_EVENT_VECTOR_0_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_0_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_0_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_0_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR1 (0x10006000+0x044) */
#define PCM_EVENT_VECTOR_1_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_1_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_1_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_1_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR2 (0x10006000+0x048) */
#define PCM_EVENT_VECTOR_2_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_2_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_2_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_2_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR3 (0x10006000+0x04C) */
#define PCM_EVENT_VECTOR_3_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_3_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_3_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_3_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR4 (0x10006000+0x050) */
#define PCM_EVENT_VECTOR_4_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_4_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_4_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_4_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR5 (0x10006000+0x054) */
#define PCM_EVENT_VECTOR_5_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_5_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_5_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_5_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR6 (0x10006000+0x058) */
#define PCM_EVENT_VECTOR_6_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_6_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_6_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_6_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR7 (0x10006000+0x05C) */
#define PCM_EVENT_VECTOR_7_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_7_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_7_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_7_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR8 (0x10006000+0x060) */
#define PCM_EVENT_VECTOR_8_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_8_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_8_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_8_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR9 (0x10006000+0x064) */
#define PCM_EVENT_VECTOR_9_LSB              (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_9_LSB              (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_9_LSB             (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_9_LSB              (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR10 (0x10006000+0x068) */
#define PCM_EVENT_VECTOR_10_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_10_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_10_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_10_LSB             (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR11 (0x10006000+0x06C) */
#define PCM_EVENT_VECTOR_11_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_11_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_11_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_11_LSB             (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR12 (0x10006000+0x070) */
#define PCM_EVENT_VECTOR_12_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_12_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_12_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_12_LSB             (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR13 (0x10006000+0x074) */
#define PCM_EVENT_VECTOR_13_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_13_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_13_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_13_LSB             (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR14 (0x10006000+0x078) */
#define PCM_EVENT_VECTOR_14_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_14_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_14_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_14_LSB             (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR15 (0x10006000+0x07C) */
#define PCM_EVENT_VECTOR_15_LSB             (1U << 0)       /* 6b */
#define PCM_EVENT_RESUME_15_LSB             (1U << 6)       /* 1b */
#define PCM_EVENT_IMMEDIA_15_LSB            (1U << 7)       /* 1b */
#define PCM_EVENT_VECTPC_15_LSB             (1U << 16)      /* 10b */
/* PCM_EVENT_VECTOR_EN (0x10006000+0x080) */
#define PCM_EVENT_VECTOR_EN_LSB             (1U << 0)       /* 16b */
/* SPM_SRAM_RSV_CON (0x10006000+0x088) */
#define SPM_SRAM_SLEEP_B_ECO_EN_LSB         (1U << 0)       /* 1b */
/* SPM_SWINT (0x10006000+0x08C) */
#define SPM_SWINT_LSB                       (1U << 0)       /* 10b */
/* SPM_SWINT_SET (0x10006000+0x090) */
#define SPM_SWINT_SET_LSB                   (1U << 0)       /* 10b */
/* SPM_SWINT_CLR (0x10006000+0x094) */
#define SPM_SWINT_CLR_LSB                   (1U << 0)       /* 10b */
/* SPM_SCP_MAILBOX (0x10006000+0x098) */
#define SPM_SCP_MAILBOX_LSB                 (1U << 0)       /* 32b */
/* SPM_SCP_IRQ (0x10006000+0x09C) */
#define SPM_SCP_IRQ_LSB                     (1U << 0)       /* 1b */
#define SPM_SCP_IRQ_SEL_LSB                 (1U << 4)       /* 1b */
/* SPM_TWAM_CON (0x10006000+0x0A0) */
#define TWAM_ENABLE_LSB                     (1U << 0)       /* 1b */
#define TWAM_SPEED_MODE_ENABLE_LSB          (1U << 1)       /* 1b */
#define TWAM_SW_RST_LSB                     (1U << 2)       /* 1b */
#define TWAM_MON_TYPE0_LSB                  (1U << 4)       /* 2b */
#define TWAM_MON_TYPE1_LSB                  (1U << 6)       /* 2b */
#define TWAM_MON_TYPE2_LSB                  (1U << 8)       /* 2b */
#define TWAM_MON_TYPE3_LSB                  (1U << 10)      /* 2b */
#define TWAM_SIGNAL_SEL0_LSB                (1U << 12)      /* 5b */
#define TWAM_SIGNAL_SEL1_LSB                (1U << 17)      /* 5b */
#define TWAM_SIGNAL_SEL2_LSB                (1U << 22)      /* 5b */
#define TWAM_SIGNAL_SEL3_LSB                (1U << 27)      /* 5b */
/* SPM_TWAM_WINDOW_LEN (0x10006000+0x0A4) */
#define TWAM_WINDOW_LEN_LSB                 (1U << 0)       /* 32b */
/* SPM_TWAM_IDLE_SEL (0x10006000+0x0A8) */
#define TWAM_IDLE_SEL_LSB                   (1U << 0)       /* 5b */
/* SPM_CPU_WAKEUP_EVENT (0x10006000+0x0B0) */
#define SPM_CPU_WAKEUP_EVENT_LSB            (1U << 0)       /* 1b */
/* SPM_IRQ_MASK (0x10006000+0x0B4) */
#define SPM_TWAM_IRQ_MASK_LSB               (1U << 2)       /* 1b */
#define PCM_IRQ_ROOT_MASK_LSB               (1U << 3)       /* 1b */
#define SPM_IRQ_MASK_LSB                    (1U << 8)       /* 10b */
/* SPM_SRC_REQ (0x10006000+0x0B8) */
#define SPM_APSRC_REQ_LSB                   (1U << 0)       /* 1b */
#define SPM_F26M_REQ_LSB                    (1U << 1)       /* 1b */
#define SPM_LTE_REQ_LSB                     (1U << 2)       /* 1b */
#define SPM_INFRA_REQ_LSB                   (1U << 3)       /* 1b */
#define SPM_VRF18_REQ_LSB                   (1U << 4)       /* 1b */
#define SPM_DVFS_REQ_LSB                    (1U << 5)       /* 1b */
#define SPM_DVFS_FORCE_DOWN_LSB             (1U << 6)       /* 1b */
#define SPM_DDREN_REQ_LSB                   (1U << 7)       /* 1b */
#define SPM_RSV_SRC_REQ_LSB                 (1U << 8)       /* 3b */
#define SPM_DDREN_2_REQ_LSB                 (1U << 11)      /* 1b */
#define CPU_MD_DVFS_SOP_FORCE_ON_LSB        (1U << 16)      /* 1b */
/* SPM_SRC_MASK (0x10006000+0x0BC) */
#define CSYSPWREQ_MASK_LSB                  (1U << 0)       /* 1b */
#define CCIF0_MD_EVENT_MASK_B_LSB           (1U << 1)       /* 1b */
#define CCIF0_AP_EVENT_MASK_B_LSB           (1U << 2)       /* 1b */
#define CCIF1_MD_EVENT_MASK_B_LSB           (1U << 3)       /* 1b */
#define CCIF1_AP_EVENT_MASK_B_LSB           (1U << 4)       /* 1b */
#define CCIFMD_MD1_EVENT_MASK_B_LSB         (1U << 5)       /* 1b */
#define CCIFMD_MD2_EVENT_MASK_B_LSB         (1U << 6)       /* 1b */
#define DSI0_VSYNC_MASK_B_LSB               (1U << 7)       /* 1b */
#define DSI1_VSYNC_MASK_B_LSB               (1U << 8)       /* 1b */
#define DPI_VSYNC_MASK_B_LSB                (1U << 9)       /* 1b */
#define ISP0_VSYNC_MASK_B_LSB               (1U << 10)      /* 1b */
#define ISP1_VSYNC_MASK_B_LSB               (1U << 11)      /* 1b */
#define MD_SRCCLKENA_0_INFRA_MASK_B_LSB     (1U << 12)      /* 1b */
#define MD_SRCCLKENA_1_INFRA_MASK_B_LSB     (1U << 13)      /* 1b */
#define CONN_SRCCLKENA_INFRA_MASK_B_LSB     (1U << 14)      /* 1b */
#define SSPM_SRCCLKENA_INFRA_MASK_B_LSB     (1U << 15)      /* 1b */
#define SRCCLKENI_INFRA_MASK_B_LSB          (1U << 16)      /* 1b */
#define MD_APSRC_REQ_0_INFRA_MASK_B_LSB     (1U << 17)      /* 1b */
#define MD_APSRC_REQ_1_INFRA_MASK_B_LSB     (1U << 18)      /* 1b */
#define CONN_APSRCREQ_INFRA_MASK_B_LSB      (1U << 19)      /* 1b */
#define MCU_APSRCREQ_INFRA_MASK_B_LSB       (1U << 20)      /* 1b */
#define MD_DDR_EN_0_MASK_B_LSB              (1U << 21)      /* 1b */
#define MD_DDR_EN_1_MASK_B_LSB              (1U << 22)      /* 1b */
#define MD_VRF18_REQ_0_MASK_B_LSB           (1U << 23)      /* 1b */
#define MD_VRF18_REQ_1_MASK_B_LSB           (1U << 24)      /* 1b */
#define MD1_DVFS_REQ_MASK_LSB               (1U << 25)      /* 2b */
#define CPU_DVFS_REQ_MASK_LSB               (1U << 27)      /* 1b */
#define EMI_BW_DVFS_REQ_MASK_LSB            (1U << 28)      /* 1b */
#define MD_SRCCLKENA_0_DVFS_REQ_MASK_B_LSB  (1U << 29)      /* 1b */
#define MD_SRCCLKENA_1_DVFS_REQ_MASK_B_LSB  (1U << 30)      /* 1b */
#define CONN_SRCCLKENA_DVFS_REQ_MASK_B_LSB  (1U << 31)      /* 1b */
/* SPM_SRC2_MASK (0x10006000+0x0C0) */
#define DVFS_HALT_MASK_B_LSB                (1U << 0)       /* 5b */
#define VDEC_REQ_MASK_B_LSB                 (1U << 6)       /* 1b */
#define GCE_REQ_MASK_B_LSB                  (1U << 7)       /* 1b */
#define CPU_MD_DVFS_REQ_MERGE_MASK_B_LSB    (1U << 8)       /* 1b */
#define MD_DDR_EN_DVFS_HALT_MASK_B_LSB      (1U << 9)       /* 2b */
#define DSI0_VSYNC_DVFS_HALT_MASK_B_LSB     (1U << 11)      /* 1b */
#define DSI1_VSYNC_DVFS_HALT_MASK_B_LSB     (1U << 12)      /* 1b */
#define DPI_VSYNC_DVFS_HALT_MASK_B_LSB      (1U << 13)      /* 1b */
#define ISP0_VSYNC_DVFS_HALT_MASK_B_LSB     (1U << 14)      /* 1b */
#define ISP1_VSYNC_DVFS_HALT_MASK_B_LSB     (1U << 15)      /* 1b */
#define CONN_DDR_EN_MASK_B_LSB              (1U << 16)      /* 1b */
#define DISP_REQ_MASK_B_LSB                 (1U << 17)      /* 1b */
#define DISP1_REQ_MASK_B_LSB                (1U << 18)      /* 1b */
#define MFG_REQ_MASK_B_LSB                  (1U << 19)      /* 1b */
#define MCU_DDREN_REQ_MASK_B_LSB            (1U << 20)      /* 1b */
#define MCU_APSRC_REQ_MASK_B_LSB            (1U << 21)      /* 1b */
#define PS_C2K_RCCIF_WAKE_MASK_B_LSB        (1U << 22)      /* 1b */
#define L1_C2K_RCCIF_WAKE_MASK_B_LSB        (1U << 23)      /* 1b */
#define SDIO_ON_DVFS_REQ_MASK_B_LSB         (1U << 24)      /* 1b */
#define EMI_BOOST_DVFS_REQ_MASK_B_LSB       (1U << 25)      /* 1b */
#define CPU_MD_EMI_DVFS_REQ_PROT_DIS_LSB    (1U << 26)      /* 1b */
#define DRAMC_SPCMD_APSRC_REQ_MASK_B_LSB    (1U << 27)      /* 1b */
#define EMI_BOOST_DVFS_REQ_2_MASK_B_LSB     (1U << 28)      /* 1b */
#define EMI_BW_DVFS_REQ_2_MASK_LSB          (1U << 29)      /* 1b */
#define GCE_VRF18_REQ_MASK_B_LSB            (1U << 30)      /* 1b */
/* SPM_WAKEUP_EVENT_MASK (0x10006000+0x0C4) */
#define SPM_WAKEUP_EVENT_MASK_LSB           (1U << 0)       /* 32b */
/* SPM_WAKEUP_EVENT_EXT_MASK (0x10006000+0x0C8) */
#define SPM_WAKEUP_EVENT_EXT_MASK_LSB       (1U << 0)       /* 32b */
/* SPM_TWAM_EVENT_CLEAR (0x10006000+0x0CC) */
#define SPM_TWAM_EVENT_CLEAR_LSB            (1U << 0)       /* 1b */
/* SCP_CLK_CON (0x10006000+0x0D0) */
#define SCP_26M_CK_SEL_LSB                  (1U << 0)       /* 1b */
/* PCM_DEBUG_CON (0x10006000+0x0D4) */
#define PCM_DEBUG_OUT_ENABLE_LSB            (1U << 0)       /* 1b */
/* DDR_EN_DBC_LEN (0x10006000+0x0D8) */
#define MD_DDR_EN_0_DBC_LEN_LSB             (1U << 0)       /* 10b */
#define MD_DDR_EN_1_DBC_LEN_LSB             (1U << 10)      /* 10b */
#define CONN_DDR_EN_DBC_LEN_LSB             (1U << 20)      /* 10b */
/* AHB_BUS_CON (0x10006000+0x0DC) */
#define AHB_HADDR_EXT_LSB                   (1U << 0)       /* 2b */
#define REG_AHB_LOCK_LSB                    (1U << 8)       /* 1b */
/* SPM_SRC3_MASK (0x10006000+0x0E0) */
#define MD_DDR_EN_2_0_MASK_B_LSB            (1U << 0)       /* 1b */
#define MD_DDR_EN_2_1_MASK_B_LSB            (1U << 1)       /* 1b */
#define CONN_DDR_EN_2_MASK_B_LSB            (1U << 2)       /* 1b */
#define DRAMC_SPCMD_APSRC_REQ_2_MASK_B_LSB  (1U << 3)       /* 1b */
#define SPARE1_DDREN_2_MASK_B_LSB           (1U << 4)       /* 1b */
#define SPARE2_DDREN_2_MASK_B_LSB           (1U << 5)       /* 1b */
#define DDREN_EMI_SELF_REFRESH_CH0_MASK_B_LSB (1U << 6)       /* 1b */
#define DDREN_EMI_SELF_REFRESH_CH1_MASK_B_LSB (1U << 7)       /* 1b */
#define DDREN_MM_STATE_MASK_B_LSB           (1U << 8)       /* 1b */
#define DDREN_SSPM_APSRC_REQ_MASK_B_LSB     (1U << 9)       /* 1b */
#define DDREN_DQSSOC_REQ_MASK_B_LSB         (1U << 10)      /* 1b */
#define DDREN2_EMI_SELF_REFRESH_CH0_MASK_B_LSB (1U << 16)      /* 1b */
#define DDREN2_EMI_SELF_REFRESH_CH1_MASK_B_LSB (1U << 17)      /* 1b */
#define DDREN2_MM_STATE_MASK_B_LSB          (1U << 18)      /* 1b */
#define DDREN2_SSPM_APSRC_REQ_MASK_B_LSB    (1U << 19)      /* 1b */
#define DDREN2_DQSSOC_REQ_MASK_B_LSB        (1U << 20)      /* 1b */
/* DDR_EN_EMI_DBC_CON (0x10006000+0x0E4) */
#define EMI_SELF_REFRESH_CH0_DBC_LEN_LSB    (1U << 0)       /* 10b */
#define EMI_SELF_REFRESH_CH0_DBC_EN_LSB     (1U << 10)      /* 1b */
/* MCU_DDREN_REQ_DBC_LEN (0x10006000+0xE8) */
#define MCU_DDREN_REQ_DBC_LEN_LSB           (1U << 0)       /* 10b */
/* PCM_REG0_DATA (0x10006000+0x100) */
#define PCM_REG0_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG1_DATA (0x10006000+0x104) */
#define PCM_REG1_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG2_DATA (0x10006000+0x108) */
#define PCM_REG2_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG3_DATA (0x10006000+0x10C) */
#define PCM_REG3_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG4_DATA (0x10006000+0x110) */
#define PCM_REG4_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG5_DATA (0x10006000+0x114) */
#define PCM_REG5_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG6_DATA (0x10006000+0x118) */
#define PCM_REG6_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG7_DATA (0x10006000+0x11C) */
#define PCM_REG7_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG8_DATA (0x10006000+0x120) */
#define PCM_REG8_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG9_DATA (0x10006000+0x124) */
#define PCM_REG9_DATA_LSB                   (1U << 0)       /* 32b */
/* PCM_REG10_DATA (0x10006000+0x128) */
#define PCM_REG10_DATA_LSB                  (1U << 0)       /* 32b */
/* PCM_REG11_DATA (0x10006000+0x12C) */
#define PCM_REG11_DATA_LSB                  (1U << 0)       /* 32b */
/* PCM_REG12_DATA (0x10006000+0x130) */
#define PCM_REG12_DATA_LSB                  (1U << 0)       /* 32b */
/* PCM_REG13_DATA (0x10006000+0x134) */
#define PCM_REG13_DATA_LSB                  (1U << 0)       /* 32b */
/* PCM_REG14_DATA (0x10006000+0x138) */
#define PCM_REG14_DATA_LSB                  (1U << 0)       /* 32b */
/* PCM_REG15_DATA (0x10006000+0x13C) */
#define PCM_REG15_DATA_LSB                  (1U << 0)       /* 32b */
/* PCM_REG12_MASK_B_STA (0x10006000+0x140) */
#define PCM_REG12_MASK_B_STA_LSB            (1U << 0)       /* 32b */
/* PCM_REG12_EXT_DATA (0x10006000+0x144) */
#define PCM_REG12_EXT_DATA_LSB              (1U << 0)       /* 32b */
/* PCM_REG12_EXT_MASK_B_STA (0x10006000+0x148) */
#define PCM_REG12_EXT_MASK_B_STA_LSB        (1U << 0)       /* 32b */
/* PCM_EVENT_REG_STA (0x10006000+0x14C) */
#define PCM_EVENT_REG_STA_LSB               (1U << 0)       /* 32b */
/* PCM_TIMER_OUT (0x10006000+0x150) */
#define PCM_TIMER_OUT_LSB                   (1U << 0)       /* 32b */
/* PCM_WDT_OUT (0x10006000+0x154) */
#define PCM_WDT_OUT_LSB                     (1U << 0)       /* 32b */
/* SPM_IRQ_STA (0x10006000+0x158) */
#define SPM_ACK_CHK_WAKEUP_LSB              (1U << 1)       /* 1b */
#define TWAM_IRQ_LSB                        (1U << 2)       /* 1b */
#define PCM_IRQ_LSB                         (1U << 3)       /* 1b */
#define SPM_IRQ_STA_SPM_SWINT_LSB           (1U << 4)       /* 10b */
/* SPM_WAKEUP_STA (0x10006000+0x15C) */
#define SPM_WAKEUP_EVENT_STA_LSB            (1U << 0)       /* 32b */
/* SPM_WAKEUP_EXT_STA (0x10006000+0x160) */
#define SPM_WAKEUP_EVENT_EXT_STA_LSB        (1U << 0)       /* 32b */
/* SPM_WAKEUP_MISC (0x10006000+0x164) */
#define SPM_WAKEUP_EVENT_MISC_LSB           (1U << 0)       /* 30b */
#define SPM_PWRAP_IRQ_ACK_LSB               (1U << 30)      /* 1b */
#define SPM_PWRAP_IRQ_LSB                   (1U << 31)      /* 1b */
/* BUS_PROTECT_RDY (0x10006000+0x168) */
#define BUS_PROTECT_RDY_LSB                 (1U << 0)       /* 32b */
/* BUS_PROTECT2_RDY (0x10006000+0x16C) */
#define BUS_PROTECT2_RDY_LSB                (1U << 0)       /* 32b */
/* SUBSYS_IDLE_STA (0x10006000+0x170) */
#define SUBSYS_IDLE_STA_LSB                 (1U << 0)       /* 32b */
/* CPU_IDLE_STA (0x10006000+0x174) */
#define MP0_CPU0_STANDBYWFI_AFTER_SEL_LSB   (1U << 0)       /* 1b */
#define MP0_CPU1_STANDBYWFI_AFTER_SEL_LSB   (1U << 1)       /* 1b */
#define MP0_CPU2_STANDBYWFI_AFTER_SEL_LSB   (1U << 2)       /* 1b */
#define MP0_CPU3_STANDBYWFI_AFTER_SEL_LSB   (1U << 3)       /* 1b */
#define MP0_CPU0_STANDBYWFI_LSB             (1U << 10)      /* 1b */
#define MP0_CPU1_STANDBYWFI_LSB             (1U << 11)      /* 1b */
#define MP0_CPU2_STANDBYWFI_LSB             (1U << 12)      /* 1b */
#define MP0_CPU3_STANDBYWFI_LSB             (1U << 13)      /* 1b */
#define MP0_CPUTOP_IDLE_LSB                 (1U << 20)      /* 1b */
#define MCU_BIU_IDLE_LSB                    (1U << 22)      /* 1b */
#define MCUSYS_IDLE_LSB                     (1U << 23)      /* 1b */
/* PCM_FSM_STA (0x10006000+0x178) */
#define EXEC_INST_OP_LSB                    (1U << 0)       /* 4b */
#define PC_STATE_LSB                        (1U << 4)       /* 3b */
#define IM_STATE_LSB                        (1U << 7)       /* 3b */
#define MASTER_STATE_LSB                    (1U << 10)      /* 5b */
#define EVENT_FSM_LSB                       (1U << 15)      /* 3b */
#define PCM_CLK_SEL_STA_LSB                 (1U << 18)      /* 3b */
#define PCM_KICK_LSB                        (1U << 21)      /* 1b */
#define IM_KICK_LSB                         (1U << 22)      /* 1b */
#define EXT_SRCCLKEN_STA_LSB                (1U << 23)      /* 2b */
#define EXT_SRCVOLTEN_STA_LSB               (1U << 25)      /* 1b */
/* SRC_REQ_STA (0x10006000+0x17C) */
#define SRC_REQ_STA_LSB                     (1U << 0)       /* 32b */
/* PWR_STATUS (0x10006000+0x180) */
#define PWR_STATUS_MD                       (1U << 0)       /* 1b */
#define PWR_STATUS_CONN                     (1U << 1)       /* 1b */
#define PWR_STATUS_DDRPHY                   (1U << 2)       /* 1b */
#define PWR_STATUS_DISP                     (1U << 3)       /* 1b */
#define PWR_STATUS_MFG                      (1U << 4)       /* 1b */
#define PWR_STATUS_ISP                      (1U << 5)       /* 1b */
#define PWR_STATUS_INFRA                    (1U << 6)       /* 1b */
#define PWR_STATUS_VCODEC                   (1U << 7)       /* 1b */
#define PWR_STATUS_MP0_CPUTOP               (1U << 8)       /* 1b */
#define PWR_STATUS_MP0_CPU0                 (1U << 9)       /* 1b */
#define PWR_STATUS_MP0_CPU1                 (1U << 10)      /* 1b */
#define PWR_STATUS_MP0_CPU2                 (1U << 11)      /* 1b */
#define PWR_STATUS_MP0_CPU3                 (1U << 12)      /* 1b */
#define PWR_STATUS_MCUSYS                   (1U << 14)      /* 1b */
#define PWR_STATUS_MD_INFRA                 (1U << 29)      /* 1b */
#define PWR_STATUS_MFG_CORE0                (1U << 31)      /* 1b */
/* PWR_STATUS_2ND (0x10006000+0x184) */
#define PWR_STATUS_2ND_LSB                  (1U << 0)       /* 32b */
/* CPU_PWR_STATUS (0x10006000+0x188) */
#define CPU_PWR_STATUS_LSB                  (1U << 0)       /* 32b */
/* CPU_PWR_STATUS_2ND (0x10006000+0x18C) */
#define CPU_PWR_STATUS_2ND_LSB              (1U << 0)       /* 32b */
/* MISC_STA (0x10006000+0x190) */
#define MM_DVFS_HALT_AF_MASK_LSB            (1U << 0)       /* 5b */
/* SPM_SRC_RDY_STA (0x10006000+0x194) */
#define SPM_INFRA_SRC_ACK_LSB               (1U << 0)       /* 1b */
#define SPM_VRF18_SRC_ACK_LSB               (1U << 1)       /* 1b */
/* DRAMC_DBG_LATCH (0x10006000+0x19C) */
#define DRAMC_DEBUG_LATCH_STATUS_LSB        (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA0 (0x10006000+0x1A0) */
#define SPM_TWAM_LAST_STA0_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA1 (0x10006000+0x1A4) */
#define SPM_TWAM_LAST_STA1_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA2 (0x10006000+0x1A8) */
#define SPM_TWAM_LAST_STA2_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_LAST_STA3 (0x10006000+0x1AC) */
#define SPM_TWAM_LAST_STA3_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA0 (0x10006000+0x1B0) */
#define SPM_TWAM_CURR_STA0_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA1 (0x10006000+0x1B4) */
#define SPM_TWAM_CURR_STA1_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA2 (0x10006000+0x1B8) */
#define SPM_TWAM_CURR_STA2_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_CURR_STA3 (0x10006000+0x1BC) */
#define SPM_TWAM_CURR_STA3_LSB              (1U << 0)       /* 32b */
/* SPM_TWAM_TIMER_OUT (0x10006000+0x1C0) */
#define SPM_TWAM_TIMER_OUT_LSB              (1U << 0)       /* 32b */
/* SPM_DVFS_STA (0x10006000+0x1C8) */
#define EMI_BOOST_AF_MASK_LSB               (1U << 0)       /* 1b */
#define EMI_BOOST_2_AF_MASK_LSB             (1U << 1)       /* 1b */
#define EMI_BW_DVFS_REQ_AF_MASK_LSB         (1U << 2)       /* 1b */
#define EMI_BW_DVFS_REQ_2_AF_MASK_LSB       (1U << 3)       /* 1b */
#define CPU_MD_DVFS_REQ_MERGE_PROT_LSB      (1U << 4)       /* 1b */
#define CPU_MD_EMI_DVFS_REQ_MERGE_AF_MASK_LSB (1U << 5)       /* 1b */
#define MD_CONN_SRCCLKENA_DVFS_AF_MASK_LSB  (1U << 6)       /* 1b */
#define SDIO_ON_AF_MASK_LSB                 (1U << 7)       /* 1b */
#define DVFS_HALT_LSB                       (1U << 8)       /* 1b */
#define MD_DVFS_ERROR_STATUS_LSB            (1U << 9)       /* 1b */
/* SPM2NFI_DVFS_LEVEL (0x10006000+0x1CC) */
#define SPM2NFI_DVFS_LEVEL_LSB              (1U << 0)       /* 3b */
/* SPM2NFI_DVFS_REQ (0x10006000+0x1D0) */
#define SPM2NFI_DVFS_REQ_LSB                (1U << 0)       /* 1b */
/* NFI2SPM_DVFS_READY (0x10006000+0x1D4) */
#define NFI2SPM_DVFS_READY_LSB              (1U << 0)       /* 1b */
/* SRC_DDREN_STA (0x10006000+0x1E0) */
#define SRC_DDREN_STA_LSB                   (1U << 0)       /* 32b */
/* MCU_PWR_CON (0x10006000+0x200) */
#define MCU_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define MCU_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define MCU_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define MCU_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define MCU_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define MCU_SRAM_CKISO_LSB                  (1U << 5)       /* 1b */
#define MCU_SRAM_ISOINT_B_LSB               (1U << 6)       /* 1b */
#define MCU_SRAM_PD_SLPB_CLAMP_LSB          (1U << 7)       /* 1b */
#define MCU_SRAM_PDN_LSB                    (1U << 8)       /* 1b */
#define MCU_SRAM_SLEEP_B_LSB                (1U << 12)      /* 1b */
#define SC_MCU_SRAM_PDN_ACK_LSB             (1U << 24)      /* 1b */
#define SC_MCU_SRAM_SLEEP_B_ACK_LSB         (1U << 28)      /* 1b */
/* MP0_CPUTOP_PWR_CON (0x10006000+0x204) */
#define MP0_CPUTOP_PWR_RST_B_LSB            (1U << 0)       /* 1b */
#define MP0_CPUTOP_PWR_ISO_LSB              (1U << 1)       /* 1b */
#define MP0_CPUTOP_PWR_ON_LSB               (1U << 2)       /* 1b */
#define MP0_CPUTOP_PWR_ON_2ND_LSB           (1U << 3)       /* 1b */
#define MP0_CPUTOP_PWR_CLK_DIS_LSB          (1U << 4)       /* 1b */
#define MP0_CPUTOP_SRAM_CKISO_LSB           (1U << 5)       /* 1b */
#define MP0_CPUTOP_SRAM_ISOINT_B_LSB        (1U << 6)       /* 1b */
#define MP0_CPUTOP_SRAM_PD_SLPB_CLAMP_LSB   (1U << 7)       /* 1b */
#define MP0_CPUTOP_SRAM_PDN_LSB             (1U << 8)       /* 1b */
#define MP0_CPUTOP_SRAM_SLEEP_B_LSB         (1U << 12)      /* 1b */
#define SC_MP0_CPUTOP_SRAM_PDN_ACK_LSB      (1U << 24)      /* 1b */
#define SC_MP0_CPUTOP_SRAM_SLEEP_B_ACK_LSB  (1U << 28)      /* 1b */
/* MP0_CPU0_PWR_CON (0x10006000+0x208) */
#define MP0_CPU0_PWR_RST_B_LSB              (1U << 0)       /* 1b */
#define MP0_CPU0_PWR_ISO_LSB                (1U << 1)       /* 1b */
#define MP0_CPU0_PWR_ON_LSB                 (1U << 2)       /* 1b */
#define MP0_CPU0_PWR_ON_2ND_LSB             (1U << 3)       /* 1b */
#define MP0_CPU0_PWR_CLK_DIS_LSB            (1U << 4)       /* 1b */
#define MP0_CPU0_SRAM_CKISO_LSB             (1U << 5)       /* 1b */
#define MP0_CPU0_SRAM_ISOINT_B_LSB          (1U << 6)       /* 1b */
#define MP0_CPU0_SRAM_PD_SLPB_CLAMP_LSB     (1U << 7)       /* 1b */
#define MP0_CPU0_SRAM_PDN_LSB               (1U << 8)       /* 1b */
#define MP0_CPU0_SRAM_SLEEP_B_LSB           (1U << 12)      /* 1b */
#define SC_MP0_CPU0_SRAM_PDN_ACK_LSB        (1U << 24)      /* 1b */
#define SC_MP0_CPU0_SRAM_SLEEP_B_ACK_LSB    (1U << 28)      /* 1b */
/* MP0_CPU1_PWR_CON (0x10006000+0x20C) */
#define MP0_CPU1_PWR_RST_B_LSB              (1U << 0)       /* 1b */
#define MP0_CPU1_PWR_ISO_LSB                (1U << 1)       /* 1b */
#define MP0_CPU1_PWR_ON_LSB                 (1U << 2)       /* 1b */
#define MP0_CPU1_PWR_ON_2ND_LSB             (1U << 3)       /* 1b */
#define MP0_CPU1_PWR_CLK_DIS_LSB            (1U << 4)       /* 1b */
#define MP0_CPU1_SRAM_CKISO_LSB             (1U << 5)       /* 1b */
#define MP0_CPU1_SRAM_ISOINT_B_LSB          (1U << 6)       /* 1b */
#define MP0_CPU1_SRAM_PD_SLPB_CLAMP_LSB     (1U << 7)       /* 1b */
#define MP0_CPU1_SRAM_PDN_LSB               (1U << 8)       /* 1b */
#define MP0_CPU1_SRAM_SLEEP_B_LSB           (1U << 12)      /* 1b */
#define SC_MP0_CPU1_SRAM_PDN_ACK_LSB        (1U << 24)      /* 1b */
#define SC_MP0_CPU1_SRAM_SLEEP_B_ACK_LSB    (1U << 28)      /* 1b */
/* MP0_CPU2_PWR_CON (0x10006000+0x210) */
#define MP0_CPU2_PWR_RST_B_LSB              (1U << 0)       /* 1b */
#define MP0_CPU2_PWR_ISO_LSB                (1U << 1)       /* 1b */
#define MP0_CPU2_PWR_ON_LSB                 (1U << 2)       /* 1b */
#define MP0_CPU2_PWR_ON_2ND_LSB             (1U << 3)       /* 1b */
#define MP0_CPU2_PWR_CLK_DIS_LSB            (1U << 4)       /* 1b */
#define MP0_CPU2_SRAM_CKISO_LSB             (1U << 5)       /* 1b */
#define MP0_CPU2_SRAM_ISOINT_B_LSB          (1U << 6)       /* 1b */
#define MP0_CPU2_SRAM_PD_SLPB_CLAMP_LSB     (1U << 7)       /* 1b */
#define MP0_CPU2_SRAM_PDN_LSB               (1U << 8)       /* 1b */
#define MP0_CPU2_SRAM_SLEEP_B_LSB           (1U << 12)      /* 1b */
#define SC_MP0_CPU2_SRAM_PDN_ACK_LSB        (1U << 24)      /* 1b */
#define SC_MP0_CPU2_SRAM_SLEEP_B_ACK_LSB    (1U << 28)      /* 1b */
/* MP0_CPU3_PWR_CON (0x10006000+0x214) */
#define MP0_CPU3_PWR_RST_B_LSB              (1U << 0)       /* 1b */
#define MP0_CPU3_PWR_ISO_LSB                (1U << 1)       /* 1b */
#define MP0_CPU3_PWR_ON_LSB                 (1U << 2)       /* 1b */
#define MP0_CPU3_PWR_ON_2ND_LSB             (1U << 3)       /* 1b */
#define MP0_CPU3_PWR_CLK_DIS_LSB            (1U << 4)       /* 1b */
#define MP0_CPU3_SRAM_CKISO_LSB             (1U << 5)       /* 1b */
#define MP0_CPU3_SRAM_ISOINT_B_LSB          (1U << 6)       /* 1b */
#define MP0_CPU3_SRAM_PD_SLPB_CLAMP_LSB     (1U << 7)       /* 1b */
#define MP0_CPU3_SRAM_PDN_LSB               (1U << 8)       /* 1b */
#define MP0_CPU3_SRAM_SLEEP_B_LSB           (1U << 12)      /* 1b */
#define SC_MP0_CPU3_SRAM_PDN_ACK_LSB        (1U << 24)      /* 1b */
#define SC_MP0_CPU3_SRAM_SLEEP_B_ACK_LSB    (1U << 28)      /* 1b */
/* MP0_CPUTOP_L2_PDN (0x10006000+0x240) */
#define MP0_CPUTOP_L2_SRAM_PDN_LSB          (1U << 0)       /* 1b */
#define MP0_CPUTOP_L2_SRAM_PDN_ACK_LSB      (1U << 8)       /* 1b */
/* MP0_CPUTOP_L2_SLEEP_B (0x10006000+0x244) */
#define MP0_CPUTOP_L2_SRAM_SLEEP_B_LSB      (1U << 0)       /* 1b */
#define MP0_CPUTOP_L2_SRAM_SLEEP_B_ACK_LSB  (1U << 8)       /* 1b */
/* MP0_CPU0_L1_PDN (0x10006000+0x248) */
#define MP0_CPU0_L1_PDN_LSB                 (1U << 0)       /* 1b */
#define MP0_CPU0_L1_PDN_ACK_LSB             (1U << 8)       /* 1b */
/* MP0_CPU1_L1_PDN (0x10006000+0x24C) */
#define MP0_CPU1_L1_PDN_LSB                 (1U << 0)       /* 1b */
#define MP0_CPU1_L1_PDN_ACK_LSB             (1U << 8)       /* 1b */
/* MP0_CPU2_L1_PDN (0x10006000+0x250) */
#define MP0_CPU2_L1_PDN_LSB                 (1U << 0)       /* 1b */
#define MP0_CPU2_L1_PDN_ACK_LSB             (1U << 8)       /* 1b */
/* MP0_CPU3_L1_PDN (0x10006000+0x254) */
#define MP0_CPU3_L1_PDN_LSB                 (1U << 0)       /* 1b */
#define MP0_CPU3_L1_PDN_ACK_LSB             (1U << 8)       /* 1b */
/* CPU_EXT_BUCK_ISO (0x10006000+0x290) */
#define MP0_EXT_BUCK_ISO_LSB                (1U << 0)       /* 1b */
/* DUMMY1_PWR_CON (0x10006000+0x2B0) */
#define DUMMY1_PWR_RST_B_LSB                (1U << 0)       /* 1b */
#define DUMMY1_PWR_ISO_LSB                  (1U << 1)       /* 1b */
#define DUMMY1_PWR_ON_LSB                   (1U << 2)       /* 1b */
#define DUMMY1_PWR_ON_2ND_LSB               (1U << 3)       /* 1b */
#define DUMMY1_PWR_CLK_DIS_LSB              (1U << 4)       /* 1b */
/* ARMPLL_CLK_CON (0x10006000+0x2BC) */
#define MUXSEL_SC_CCIPLL_LSB                (1U << 0)       /* 1b */
#define MUXSEL_SC_ARMPLL1_LSB               (1U << 1)       /* 1b */
#define MUXSEL_SC_ARMPLL2_LSB               (1U << 2)       /* 1b */
#define REG_SC_ARM_CLK_OFF_LSB              (1U << 8)       /* 4b */
#define REG_SC_ARMPLL_OFF_LSB               (1U << 12)      /* 4b */
#define REG_SC_ARMPLLOUT_OFF_LSB            (1U << 16)      /* 4b */
#define REG_SC_FHC_PAUSE_LSB                (1U << 20)      /* 4b */
#define REG_SC_ARMPLL_S_OFF_LSB             (1U << 24)      /* 4b */
/* VCODEC_PWR_CON (0x10006000+0x300) */
#define VCODEC_PWR_RST_B_LSB                (1U << 0)       /* 1b */
#define VCODEC_PWR_ISO_LSB                  (1U << 1)       /* 1b */
#define VCODEC_PWR_ON_LSB                   (1U << 2)       /* 1b */
#define VCODEC_PWR_ON_2ND_LSB               (1U << 3)       /* 1b */
#define VCODEC_PWR_CLK_DIS_LSB              (1U << 4)       /* 1b */
#define VCODEC_SRAM_PDN_LSB                 (1U << 5)       /* 1b */
#define VCODEC_SRAM_PDN_ACK_LSB             (1U << 6)       /* 1b */
/* ISP_PWR_CON (0x10006000+0x308) */
#define ISP_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define ISP_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define ISP_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define ISP_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define ISP_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define ISP_SRAM_PDN_LSB                    (1U << 5)       /* 1b */
#define ISP_SRAM_PDN_ACK_LSB                (1U << 6)       /* 1b */
/* DIS_PWR_CON (0x10006000+0x30C) */
#define DIS_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define DIS_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define DIS_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define DIS_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define DIS_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define DIS_SRAM_PDN_LSB                    (1U << 5)       /* 1b */
#define DIS_SRAM_PDN_ACK_LSB                (1U << 6)       /* 1b */
/* MJC_PWR_CON (0x10006000+0x310) */
#define MJC_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define MJC_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define MJC_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define MJC_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define MJC_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define MJC_SRAM_PDN_LSB                    (1U << 5)       /* 1b */
#define MJC_SRAM_PDN_ACK_LSB                (1U << 6)       /* 1b */
/* IFR_PWR_CON (0x10006000+0x318) */
#define IFR_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define IFR_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define IFR_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define IFR_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define IFR_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define IFR_SRAM_PDN_LSB                    (1U << 5)       /* 1b */
#define IFR_SRAM_PDN_ACK_LSB                (1U << 6)       /* 1b */
/* DPY_PWR_CON (0x10006000+0x31C) */
#define DPY_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define DPY_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define DPY_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define DPY_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define DPY_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define DPY_SRAM_PDN_LSB                    (1U << 5)       /* 1b */
#define DPY_SRAM_PDN_ACK_LSB                (1U << 6)       /* 1b */
/* MD1_PWR_CON (0x10006000+0x320) */
#define MD1_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define MD1_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define MD1_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define MD1_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define MD1_PWR_CLK_DIS_LSB                 (1U << 5)       /* 1b */
#define MD1_SRAM_PDN_LSB                    (1U << 6)       /* 1b */
/* MD2_PWR_CON (0x10006000+0x324) */
#define MD2_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define MD2_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define MD2_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define MD2_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define MD2_PWR_CLK_DIS_LSB                 (1U << 5)       /* 1b */
#define MD2_SRAM_PDN_LSB                    (1U << 6)       /* 1b */
/* CONN_PWR_CON (0x10006000+0x32C) */
#define CONN_PWR_RST_B_LSB                  (1U << 0)       /* 1b */
#define CONN_PWR_ISO_LSB                    (1U << 1)       /* 1b */
#define CONN_PWR_ON_LSB                     (1U << 2)       /* 1b */
#define CONN_PWR_ON_2ND_LSB                 (1U << 3)       /* 1b */
#define CONN_PWR_CLK_DIS_LSB                (1U << 4)       /* 1b */
#define CONN_SRAM_PDN_LSB                   (1U << 5)       /* 1b */
#define CONN_SRAM_PDN_ACK_LSB               (1U << 6)       /* 1b */
/* VCOREPDN_PWR_CON (0x10006000+0x330) */
#define VCOREPDN_PWR_RST_B_LSB              (1U << 0)       /* 1b */
#define VCOREPDN_PWR_ISO_LSB                (1U << 1)       /* 1b */
#define VCOREPDN_PWR_ON_LSB                 (1U << 2)       /* 1b */
#define VCOREPDN_PWR_ON_2ND_LSB             (1U << 3)       /* 1b */
#define VCOREPDN_PWR_CLK_DIS_LSB            (1U << 4)       /* 1b */
/* MFG_PWR_CON (0x10006000+0x338) */
#define MFG_PWR_RST_B_LSB                   (1U << 0)       /* 1b */
#define MFG_PWR_ISO_LSB                     (1U << 1)       /* 1b */
#define MFG_PWR_ON_LSB                      (1U << 2)       /* 1b */
#define MFG_PWR_ON_2ND_LSB                  (1U << 3)       /* 1b */
#define MFG_PWR_CLK_DIS_LSB                 (1U << 4)       /* 1b */
#define MFG_SRAM_PDN_LSB                    (1U << 5)       /* 1b */
#define MFG_SRAM_PDN_ACK_LSB                (1U << 6)       /* 1b */
/* MFG_CORE0_PWR_CON (0x10006000+0x33C) */
#define MFG_CORE0_PWR_RST_B_LSB             (1U << 0)       /* 1b */
#define MFG_CORE0_PWR_ISO_LSB               (1U << 1)       /* 1b */
#define MFG_CORE0_PWR_ON_LSB                (1U << 2)       /* 1b */
#define MFG_CORE0_ON_2ND_LSB                (1U << 3)       /* 1b */
#define MFG_CORE0_CLK_DIS_LSB               (1U << 4)       /* 1b */
#define MFG_CORE0_SRAM_PDN_LSB              (1U << 5)       /* 1b */
#define MFG_CORE0_SRAM_PDN_ACK_LSB          (1U << 6)       /* 1b */
/* SYSRAM_CON (0x10006000+0x350) */
#define IFR_SRAMROM_SRAM_PDN_LSB            (1U << 0)       /* 8b */
#define IFR_SRAMROM_SRAM_CKISO_LSB          (1U << 8)       /* 8b */
#define IFR_SRAMROM_SRAM_SLEEP_B_LSB        (1U << 16)      /* 8b */
#define IFR_SRAMROM_SRAM_ISOINT_B_LSB       (1U << 24)      /* 8b */
/* SYSROM_CON (0x10006000+0x354) */
#define IFR_SRAMROM_ROM_PDN_LSB             (1U << 0)       /* 6b */
/* SSPM_SRAM_CON (0x10006000+0x358) */
#define SSPM_SRAM_CKISO_LSB                 (1U << 0)       /* 1b */
#define SSPM_SRAM_ISOINT_B_LSB              (1U << 1)       /* 1b */
#define SSPM_SRAM_SLEEP_B_LSB               (1U << 4)       /* 1b */
#define SSPM_SRAM_PDN_LSB                   (1U << 12)      /* 1b */
/* MCUPM_SRAM_CON (0x10006000+0x35C) */
#define MCUPM_SRAM_CKISO_LSB                (1U << 0)       /* 1b */
#define MCUPM_SRAM_ISOINT_B_LSB             (1U << 1)       /* 1b */
#define MCUPM_SRAM_SLEEP_B_LSB              (1U << 4)       /* 1b */
#define MCUPM_SRAM_PDN_LSB                  (1U << 12)      /* 1b */
/* PCCIF0_SRAM_CON (0x10006000+0x378) */
#define PCCIF0_SRAM_PDN_LSB                 (1U << 0)       /* 1b */
#define PCCIF0_SRAM_DSLP_LSB                (1U << 1)       /* 1b */
#define PCCIF0_SRAM_SLEEP_B_LSB             (1U << 2)       /* 1b */
#define PCCIF0_SRAM_ISOINT_B_LSB            (1U << 3)       /* 1b */
#define PCCIF0_SRAM_ISO_EN_LSB              (1U << 4)       /* 1b */
/* PCCIF1_SRAM_CON (0x10006000+0x37C) */
#define PCCIF1_SRAM_PDN_LSB                 (1U << 0)       /* 1b */
#define PCCIF1_SRAM_DSLP_LSB                (1U << 1)       /* 1b */
#define PCCIF1_SRAM_SLEEP_B_LSB             (1U << 2)       /* 1b */
#define PCCIF1_SRAM_ISOINT_B_LSB            (1U << 3)       /* 1b */
#define PCCIF1_SRAM_ISO_EN_LSB              (1U << 4)       /* 1b */
/* DUMMY_SRAM_CON (0x10006000+0x380) */
#define DUMMY_SRAM_PDN_LSB                  (1U << 0)       /* 8b */
#define DUMMY_SRAM_SLEEP_B_LSB              (1U << 8)       /* 8b */
#define DUMMY_SRAM_ISOINT_B_LSB             (1U << 16)      /* 8b */
#define DUMMY_SRAM_CKISO_LSB                (1U << 24)      /* 8b */
/* MD_EXT_BUCK_ISO_CON (0x10006000+0x390) */
#define VMODEM_BUCK_ELS_EN_LSB              (1U << 0)       /* 1b */
#define VMD_BUCK_ELS_EN_LSB                 (1U << 1)       /* 1b */
/* MD_SRAM_ISO_CON (0x10006000+0x394) */
#define MD1_SRAM_ISOINT_B_LSB               (1U << 0)       /* 1b */
#define MD2_SRAM_ISOINT_B_LSB               (1U << 1)       /* 1b */
/* MD_EXTRA_PWR_CON (0x10006000+0x398) */
#define MD1_PWR_PROT_REQ_STA_LSB            (1U << 0)       /* 1b */
#define MD2_PWR_PROT_REQ_STA_LSB            (1U << 1)       /* 1b */
/* EXT_BUCK_CON (0x10006000+0x3A0) */
#define RG_VA09_ON_LSB                      (1U << 0)       /* 1b */
/* DUMMY2_PWR_CON (0x10006000+0x3B0) */
#define DUMMY2_PWR_RST_B_LSB                (1U << 0)       /* 1b */
#define DUMMY2_PWR_ISO_LSB                  (1U << 1)       /* 1b */
#define DUMMY2_PWR_ON_LSB                   (1U << 2)       /* 1b */
#define DUMMY2_PWR_ON_2ND_LSB               (1U << 3)       /* 1b */
#define DUMMY2_PWR_CLK_DIS_LSB              (1U << 4)       /* 1b */
#define DUMMY2_SRAM_PDN_LSB                 (1U << 5)       /* 1b */
#define DUMMY2_SRAM_PDN_ACK_LSB             (1U << 6)       /* 1b */
/* MBIST_EFUSE_REPAIR_ACK_STA (0x10006000+0x3D0) */
#define MBIST_EFUSE_REPAIR_ACK_STA_LSB      (1U << 0)       /* 32b */
/* SPM_DVFS_CON (0x10006000+0x400) */
#define SPM_DVFS_CON_LSB                    (1U << 0)       /* 4b */
#define SPM_DVFS_ACK_LSB                    (1U << 30)      /* 2b */
/* SPM_MDBSI_CON (0x10006000+0x404) */
#define SPM_MDBSI_CON_LSB                   (1U << 0)       /* 3b */
/* SPM_MAS_PAUSE_MASK_B (0x10006000+0x408) */
#define SPM_MAS_PAUSE_MASK_B_LSB            (1U << 0)       /* 32b */
/* SPM_MAS_PAUSE2_MASK_B (0x10006000+0x40C) */
#define SPM_MAS_PAUSE2_MASK_B_LSB           (1U << 0)       /* 32b */
/* SPM_BSI_GEN (0x10006000+0x410) */
#define SPM_BSI_START_LSB                   (1U << 0)       /* 1b */
/* SPM_BSI_EN_SR (0x10006000+0x414) */
#define SPM_BSI_EN_SR_LSB                   (1U << 0)       /* 32b */
/* SPM_BSI_CLK_SR (0x10006000+0x418) */
#define SPM_BSI_CLK_SR_LSB                  (1U << 0)       /* 32b */
/* SPM_BSI_D0_SR (0x10006000+0x41C) */
#define SPM_BSI_D0_SR_LSB                   (1U << 0)       /* 32b */
/* SPM_BSI_D1_SR (0x10006000+0x420) */
#define SPM_BSI_D1_SR_LSB                   (1U << 0)       /* 32b */
/* SPM_BSI_D2_SR (0x10006000+0x424) */
#define SPM_BSI_D2_SR_LSB                   (1U << 0)       /* 32b */
/* SPM_AP_SEMA (0x10006000+0x428) */
#define SPM_AP_SEMA_LSB                     (1U << 0)       /* 1b */
/* SPM_SPM_SEMA (0x10006000+0x42C) */
#define SPM_SPM_SEMA_LSB                    (1U << 0)       /* 1b */
/* AP_MDSRC_REQ (0x10006000+0x430) */
#define AP_MDSMSRC_REQ_LSB                  (1U << 0)       /* 1b */
#define AP_L1SMSRC_REQ_LSB                  (1U << 1)       /* 1b */
#define AP_MD2SRC_REQ_LSB                   (1U << 2)       /* 1b */
#define AP_MDSMSRC_ACK_LSB                  (1U << 4)       /* 1b */
#define AP_L1SMSRC_ACK_LSB                  (1U << 5)       /* 1b */
#define AP_MD2SRC_ACK_LSB                   (1U << 6)       /* 1b */
/* SPM2MD_DVFS_CON (0x10006000+0x438) */
#define SPM2MD_DVFS_CON_LSB                 (1U << 0)       /* 32b */
/* MD2SPM_DVFS_CON (0x10006000+0x43C) */
#define MD2SPM_DVFS_CON_LSB                 (1U << 0)       /* 32b */
/* DRAMC_DVFS_CON_RSV (0x10006000+0x440) */
#define DRAMC_DVFS_CON_RSV_LSB              (1U << 0)       /* 32b */
/* DVFSRC_LATENCY (0x10006000+0x444) */
#define DVFSRC_LATENCY_INT_LSB              (1U << 0)       /* 1b */
#define DVFSRC_TIMEOUT_INT_LSB              (1U << 1)       /* 1b */
/* CPU_DVFS_REQ (0x10006000+0x448) */
#define CPU_DVFS_REQ_LSB                    (1U << 0)       /* 32b */
/* SPM_PLL_CON (0x10006000+0x44C) */
#define SC_MPLLOUT_OFF_LSB                  (1U << 0)       /* 1b */
#define SC_UNIPLLOUT_OFF_LSB                (1U << 1)       /* 1b */
#define SC_MPLL_OFF_LSB                     (1U << 4)       /* 1b */
#define SC_UNIPLL_OFF_LSB                   (1U << 5)       /* 1b */
#define SC_MPLL_S_OFF_LSB                   (1U << 8)       /* 1b */
#define SC_UNIPLL_S_OFF_LSB                 (1U << 9)       /* 1b */
#define SC_SMI_CK_OFF_LSB                   (1U << 16)      /* 1b */
#define SC_MD32K_CK_OFF_LSB                 (1U << 17)      /* 1b */
/* SPM_EMI_BW_MODE (0x10006000+0x450) */
#define EMI_BW_MODE_LSB                     (1U << 0)       /* 1b */
#define EMI_BOOST_MODE_LSB                  (1U << 1)       /* 1b */
#define EMI_BW_MODE_2_LSB                   (1U << 2)       /* 1b */
#define EMI_BOOST_MODE_2_LSB                (1U << 3)       /* 1b */
/* AP2MD_PEER_WAKEUP (0x10006000+0x454) */
#define AP2MD_PEER_WAKEUP_LSB               (1U << 0)       /* 1b */
/* ULPOSC_CON (0x10006000+0x458) */
#define ULPOSC_EN_LSB                       (1U << 0)       /* 1b */
#define ULPOSC_RST_LSB                      (1U << 1)       /* 1b */
#define ULPOSC_CG_EN_LSB                    (1U << 2)       /* 1b */
/* SPM2MM_CON (0x10006000+0x45C) */
#define SPM2MM_FORCE_ULTRA_LSB              (1U << 0)       /* 1b */
#define SPM2MM_DBL_OSTD_ACT_LSB             (1U << 1)       /* 1b */
#define SPM2MM_ULTRAREQ_LSB                 (1U << 2)       /* 1b */
#define SPM2MD_ULTRAREQ_LSB                 (1U << 3)       /* 1b */
#define SPM2ISP_ULTRAREQ_LSB                (1U << 4)       /* 1b */
#define MM2SPM_FORCE_ULTRA_ACK_LSB          (1U << 16)      /* 1b */
#define MM2SPM_DBL_OSTD_ACT_ACK_LSB         (1U << 17)      /* 1b */
#define SPM2ISP_ULTRAACK_D2T_LSB            (1U << 18)      /* 1b */
#define SPM2MM_ULTRAACK_D2T_LSB             (1U << 19)      /* 1b */
#define SPM2MD_ULTRAACK_D2T_LSB             (1U << 20)      /* 1b */
/* DRAMC_PHY_CLK_SW_CON_SEL (0x10006000+0x460) */
#define SW_EMI_CLK_OFF_SEL_LSB              (1U << 0)       /* 1b */
#define SW_MEM_CK_OFF_SEL_LSB               (1U << 1)       /* 1b */
#define SW_M_CK_O_OFF_SEL_LSB               (1U << 2)       /* 1b */
#define SW_EMI_CLK_OFF_ACK_SEL_LSB          (1U << 3)       /* 1b */
/* DRAMC_DPY_CLK_SW_CON (0x10006000+0x464) */
#define SW_EMI_CLK_OFF_LSB                  (1U << 0)       /* 1b */
#define SW_MEM_CK_OFF_LSB                   (1U << 1)       /* 1b */
#define SW_M_CK_O_OFF_LSB                   (1U << 2)       /* 1b */
#define EMI_CLK_OFF_ACK_LSB                 (1U << 3)       /* 1b */
/* SPM_S1_MODE_CH (0x10006000+0x468) */
#define SPM_S1_MODE_CH_LSB                  (1U << 0)       /* 1b */
/* EMI_SELF_REFRESH_CH_STA (0x10006000+0x46C) */
#define EMI_SELF_REFRESH_CH_LSB             (1U << 0)       /* 1b */
/* SW_DR_SHU_EN_CON (0x10006000+0x470) */
#define SW_DR_SHU_EN_LSB                    (1U << 0)       /* 1b */
#define SW_DR_SHU_EN_SEL_LSB                (1U << 1)       /* 1b */
/* SPM_SEMA_M0 (0x10006000+0x480) */
#define SPM_SEMA_M0_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M1 (0x10006000+0x484) */
#define SPM_SEMA_M1_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M2 (0x10006000+0x488) */
#define SPM_SEMA_M2_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M3 (0x10006000+0x48C) */
#define SPM_SEMA_M3_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M4 (0x10006000+0x490) */
#define SPM_SEMA_M4_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M5 (0x10006000+0x494) */
#define SPM_SEMA_M5_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M6 (0x10006000+0x498) */
#define SPM_SEMA_M6_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M7 (0x10006000+0x49C) */
#define SPM_SEMA_M7_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M8 (0x10006000+0x4A0) */
#define SPM_SEMA_M8_LSB                     (1U << 0)       /* 8b */
/* SPM_SEMA_M9 (0x10006000+0x4A4) */
#define SPM_SEMA_M9_LSB                     (1U << 0)       /* 8b */
/* MCUPM_MCUSYS_REQ_CON (0x10006000+0x4A8) */
#define MCUPM_MCUSYS_REQ_LSB                (1U << 0)       /* 1b */
#define MCUPM_MCUSYS_REQ_SEL_LSB            (1U << 1)       /* 1b */
#define MCUPM_MCUSYS_ACK_MASK_LSB           (1U << 2)       /* 1b */
#define MCUPM_MCUSYS_ACK_LSB                (1U << 3)       /* 1b */
/* SRAM_DREQ_ACK (0x10006000+0x4AC) */
#define SRAM_DREQ_ACK_LSB                   (1U << 0)       /* 16b */
/* SRAM_DREQ_CON (0x10006000+0x4B0) */
#define SRAM_DREQ_CON_LSB                   (1U << 0)       /* 16b */
/* SRAM_DREQ_CON_SET (0x10006000+0x4B4) */
#define SRAM_DREQ_CON_SET_LSB               (1U << 0)       /* 16b */
/* SRAM_DREQ_CON_CLR (0x10006000+0x4B8) */
#define SRAM_DREQ_CON_CLR_LSB               (1U << 0)       /* 16b */
/* SPM2EMI_ENTER_ULPM (0x10006000+0x4BC) */
#define SPM2EMI_ENTER_ULPM_LSB              (1U << 0)       /* 1b */
/* SPM_SSPM_IRQ (0x10006000+0x4C0) */
#define SPM_SSPM_IRQ_LSB                    (1U << 0)       /* 1b */
#define SPM_SSPM_IRQ_SEL_LSB                (1U << 4)       /* 1b */
/* SPM2SSPM_INT (0x10006000+0x4C4) */
#define SPM2SSPM_INT_LSB                    (1U << 0)       /* 4b */
/* SPM2SSPM_INT_SET (0x10006000+0x4C8) */
#define SPM2SSPM_INT_SET_LSB                (1U << 0)       /* 4b */
/* SPM2SSPM_INT_CLR (0x10006000+0x4CC) */
#define SPM2SSPM_INT_CLR_LSB                (1U << 0)       /* 4b */
/* SPM2SSPM_MAILBOX_0 (0x10006000+0x4D0) */
#define SPM2SSPM_MAILBOX_0_LSB              (1U << 0)       /* 32b */
/* SPM2SSPM_MAILBOX_1 (0x10006000+0x4D4) */
#define SPM2SSPM_MAILBOX_1_LSB              (1U << 0)       /* 32b */
/* SPM2SSPM_MAILBOX_2 (0x10006000+0x4D8) */
#define SPM2SSPM_MAILBOX_2_LSB              (1U << 0)       /* 32b */
/* SPM2SSPM_MAILBOX_3 (0x10006000+0x4DC) */
#define SPM2SSPM_MAILBOX_3_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_INT (0x10006000+0x4E0) */
#define SSPM2SPM_INT_LSB                    (1U << 0)       /* 4b */
/* SSPM2SPM_INT_SET (0x10006000+0x4E4) */
#define SSPM2SPM_INT_SET_LSB                (1U << 0)       /* 4b */
/* SSPM2SPM_INT_CLR (0x10006000+0x4E8) */
#define SSPM2SPM_INT_CLR_LSB                (1U << 0)       /* 4b */
/* SSPM2SPM_MAILBOX_0 (0x10006000+0x4EC) */
#define SSPM2SPM_MAILBOX_0_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_MAILBOX_1 (0x10006000+0x4F0) */
#define SSPM2SPM_MAILBOX_1_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_MAILBOX_2 (0x10006000+0x4F4) */
#define SSPM2SPM_MAILBOX_2_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_MAILBOX_3 (0x10006000+0x4F8) */
#define SSPM2SPM_MAILBOX_3_LSB              (1U << 0)       /* 32b */
/* SSPM2SPM_CFG (0x10006000+0x4FC) */
#define SSPM2SPM_INT_MASK_B_LSB             (1U << 0)       /* 4b */
#define SPM_SSPM_MAILBOX_REQ_LSB            (1U << 8)       /* 1b */
/* MP0_CPU0_IRQ_MASK (0x10006000+0x500) */
#define MP0_CPU0_IRQ_MASK_LSB               (1U << 0)       /* 1b */
#define MP0_CPU0_AUX_LSB                    (1U << 8)       /* 11b */
/* MP0_CPU1_IRQ_MASK (0x10006000+0x504) */
#define MP0_CPU1_IRQ_MASK_LSB               (1U << 0)       /* 1b */
#define MP0_CPU1_AUX_LSB                    (1U << 8)       /* 11b */
/* MP0_CPU2_IRQ_MASK (0x10006000+0x508) */
#define MP0_CPU2_IRQ_MASK_LSB               (1U << 0)       /* 1b */
#define MP0_CPU2_AUX_LSB                    (1U << 8)       /* 11b */
/* MP0_CPU3_IRQ_MASK (0x10006000+0x50C) */
#define MP0_CPU3_IRQ_MASK_LSB               (1U << 0)       /* 1b */
#define MP0_CPU3_AUX_LSB                    (1U << 8)       /* 11b */
/* MP0_CPU0_WFI_EN (0x10006000+0x530) */
#define MP0_CPU0_WFI_EN_LSB                 (1U << 0)       /* 1b */
/* MP0_CPU1_WFI_EN (0x10006000+0x534) */
#define MP0_CPU1_WFI_EN_LSB                 (1U << 0)       /* 1b */
/* MP0_CPU2_WFI_EN (0x10006000+0x538) */
#define MP0_CPU2_WFI_EN_LSB                 (1U << 0)       /* 1b */
/* MP0_CPU3_WFI_EN (0x10006000+0x53C) */
#define MP0_CPU3_WFI_EN_LSB                 (1U << 0)       /* 1b */
/* MP0_L2CFLUSH (0x10006000+0x554) */
#define MP0_L2CFLUSH_REQ_LSB                (1U << 0)       /* 1b */
#define MP0_L2CFLUSH_DONE_LSB               (1U << 4)       /* 1b */
/* CPU_PTPOD2_CON (0x10006000+0x560) */
#define MP0_PTPOD2_FBB_EN_LSB               (1U << 0)       /* 1b */
#define MP1_PTPOD2_FBB_EN_LSB               (1U << 1)       /* 1b */
#define MP0_PTPOD2_SPARK_EN_LSB             (1U << 2)       /* 1b */
#define MP1_PTPOD2_SPARK_EN_LSB             (1U << 3)       /* 1b */
#define MP0_PTPOD2_FBB_ACK_LSB              (1U << 4)       /* 1b */
#define MP1_PTPOD2_FBB_ACK_LSB              (1U << 5)       /* 1b */
/* ROOT_CPUTOP_ADDR (0x10006000+0x570) */
#define ROOT_CPUTOP_ADDR_LSB                (1U << 0)       /* 32b */
/* ROOT_CORE_ADDR (0x10006000+0x574) */
#define ROOT_CORE_ADDR_LSB                  (1U << 0)       /* 32b */
/* CPU_SPARE_CON (0x10006000+0x580) */
#define CPU_SPARE_CON_LSB                   (1U << 0)       /* 32b */
/* CPU_SPARE_CON_SET (0x10006000+0x584) */
#define CPU_SPARE_CON_SET_LSB               (1U << 0)       /* 32b */
/* CPU_SPARE_CON_CLR (0x10006000+0x588) */
#define CPU_SPARE_CON_CLR_LSB               (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_0 (0x10006000+0x5D0) */
#define SPM2SW_MAILBOX_0_LSB                (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_1 (0x10006000+0x5D4) */
#define SPM2SW_MAILBOX_1_LSB                (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_2 (0x10006000+0x5D8) */
#define SPM2SW_MAILBOX_2_LSB                (1U << 0)       /* 32b */
/* SPM2SW_MAILBOX_3 (0x10006000+0x5DC) */
#define SPM2SW_MAILBOX_3_LSB                (1U << 0)       /* 32b */
/* SW2SPM_INT (0x10006000+0x5E0) */
#define SW2SPM_INT_LSB                      (1U << 0)       /* 4b */
/* SW2SPM_INT_SET (0x10006000+0x5E4) */
#define SW2SPM_INT_SET_LSB                  (1U << 0)       /* 4b */
/* SW2SPM_INT_CLR (0x10006000+0x5E8) */
#define SW2SPM_INT_CLR_LSB                  (1U << 0)       /* 4b */
/* SW2SPM_MAILBOX_0 (0x10006000+0x5EC) */
#define SW2SPM_MAILBOX_0_LSB                (1U << 0)       /* 32b */
/* SW2SPM_MAILBOX_1 (0x10006000+0x5F0) */
#define SW2SPM_MAILBOX_1_LSB                (1U << 0)       /* 32b */
/* SW2SPM_MAILBOX_2 (0x10006000+0x5F4) */
#define SW2SPM_MAILBOX_2_LSB                (1U << 0)       /* 32b */
/* SW2SPM_MAILBOX_3 (0x10006000+0x5F8) */
#define SW2SPM_MAILBOX_3_LSB                (1U << 0)       /* 32b */
/* SW2SPM_CFG (0x10006000+0x5FC) */
#define SWU2SPM_INT_MASK_B_LSB              (1U << 0)       /* 4b */
#define SPM_SW_MAILBOX_REQ_LSB              (1U << 8)       /* 1b */
/* SPM_SW_FLAG (0x10006000+0x600) */
#define SPM_SW_FLAG_LSB                     (1U << 0)       /* 32b */
/* SPM_SW_DEBUG (0x10006000+0x604) */
#define SPM_SW_DEBUG_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_0 (0x10006000+0x608) */
#define SPM_SW_RSV_0_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_1 (0x10006000+0x60C) */
#define SPM_SW_RSV_1_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_2 (0x10006000+0x610) */
#define SPM_SW_RSV_2_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_3 (0x10006000+0x614) */
#define SPM_SW_RSV_3_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_4 (0x10006000+0x618) */
#define SPM_SW_RSV_4_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_5 (0x10006000+0x61C) */
#define SPM_SW_RSV_5_LSB                    (1U << 0)       /* 32b */
/* SPM_RSV_CON (0x10006000+0x620) */
#define SPM_RSV_CON_LSB                     (1U << 0)       /* 16b */
/* SPM_RSV_STA (0x10006000+0x624) */
#define SPM_RSV_STA_LSB                     (1U << 0)       /* 16b */
/* SPM_RSV_CON1 (0x10006000+0x628) */
#define SPM_RSV_CON1_LSB                    (1U << 0)       /* 16b */
/* SPM_RSV_STA1 (0x10006000+0x62C) */
#define SPM_RSV_STA1_LSB                    (1U << 0)       /* 16b */
/* SPM_PASR_DPD_0 (0x10006000+0x630) */
#define SPM_PASR_DPD_0_LSB                  (1U << 0)       /* 32b */
/* SPM_PASR_DPD_1 (0x10006000+0x634) */
#define SPM_PASR_DPD_1_LSB                  (1U << 0)       /* 32b */
/* SPM_PASR_DPD_2 (0x10006000+0x638) */
#define SPM_PASR_DPD_2_LSB                  (1U << 0)       /* 32b */
/* SPM_PASR_DPD_3 (0x10006000+0x63C) */
#define SPM_PASR_DPD_3_LSB                  (1U << 0)       /* 32b */
/* SPM_SPARE_CON (0x10006000+0x640) */
#define SPM_SPARE_CON_LSB                   (1U << 0)       /* 32b */
/* SPM_SPARE_CON_SET (0x10006000+0x644) */
#define SPM_SPARE_CON_SET_LSB               (1U << 0)       /* 32b */
/* SPM_SPARE_CON_CLR (0x10006000+0x648) */
#define SPM_SPARE_CON_CLR_LSB               (1U << 0)       /* 32b */
/* SPM_SW_RSV_6 (0x10006000+0x64C) */
#define SPM_SW_RSV_6_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_7 (0x10006000+0x650) */
#define SPM_SW_RSV_7_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_8 (0x10006000+0x654) */
#define SPM_SW_RSV_8_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_9 (0x10006000+0x658) */
#define SPM_SW_RSV_9_LSB                    (1U << 0)       /* 32b */
/* SPM_SW_RSV_10 (0x10006000+0x65C) */
#define SPM_SW_RSV_10_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_11 (0x10006000+0x660) */
#define SPM_SW_RSV_11_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_12 (0x10006000+0x664) */
#define SPM_SW_RSV_12_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_13 (0x10006000+0x668) */
#define SPM_SW_RSV_13_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_14 (0x10006000+0x66C) */
#define SPM_SW_RSV_14_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_15 (0x10006000+0x670) */
#define SPM_SW_RSV_15_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_16 (0x10006000+0x674) */
#define SPM_SW_RSV_16_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_17 (0x10006000+0x678) */
#define SPM_SW_RSV_17_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_18 (0x10006000+0x67C) */
#define SPM_SW_RSV_18_LSB                   (1U << 0)       /* 32b */
/* SPM_SW_RSV_19 (0x10006000+0x680) */
#define SPM_SW_RSV_19_LSB                   (1U << 0)       /* 32b */
/* DVFSRC_EVENT_MASK_CON (0x10006000+0x690) */
#define DVFSRC_EVENT_MASK_B_LSB             (1U << 0)       /* 16b */
#define DVFSRC_EVENT_TRIGGER_MASK_B_LSB     (1U << 16)      /* 1b */
/* DVFSRC_EVENT_FORCE_ON (0x10006000+0x694) */
#define DVFSRC_EVENT_FORCE_ON_LSB           (1U << 0)       /* 16b */
#define DVFSRC_EVENT_TRIGGER_FORCE_ON_LSB   (1U << 16)      /* 1b */
/* DVFSRC_EVENT_SEL (0x10006000+0x698) */
#define DVFSRC_EVENT_SEL_LSB                (1U << 0)       /* 16b */
/* SPM_DVFS_EVENT_STA (0x10006000+0x69C) */
#define SPM_DVFS_EVENT_STA_LSB              (1U << 0)       /* 32b */
/* SPM_DVFS_EVENT_STA1 (0x10006000+0x6A0) */
#define SPM_DVFS_EVENT_STA1_LSB             (1U << 0)       /* 32b */
/* SPM_DVFS_LEVEL (0x10006000+0x6A4) */
#define SPM_DVFS_LEVEL_LSB                  (1U << 0)       /* 16b */
/* DVFS_ABORT_STA (0x10006000+0x6A8) */
#define RC2SPM_EVENT_ABORT_D2T_LSB          (1U << 0)       /* 16b */
#define RC2SPM_EVENT_ABORT_MASK_OR_LSB      (1U << 16)      /* 1b */
/* DVFS_ABORT_OTHERS_MASK (0x10006000+0x6AC) */
#define DVFS_ABORT_OTHERS_MASK_B_LSB        (1U << 0)       /* 16b */
/* SPM_DFS_LEVEL (0x10006000+0x6B0) */
#define SPM_DFS_LEVEL_LSB                   (1U << 0)       /* 4b */
/* SPM_DVS_LEVEL (0x10006000+0x6B4) */
#define SPM_VCORE_LEVEL_LSB                 (1U << 0)       /* 8b */
#define SPM_VSRAM_LEVEL_LSB                 (1U << 8)       /* 8b */
#define SPM_VMODEM_LEVEL_LSB                (1U << 16)      /* 8b */
/* SPARE_SRC_REQ_MASK (0x10006000+0x6C0) */
#define SPARE1_DDREN_MASK_B_LSB             (1U << 0)       /* 1b */
#define SPARE1_APSRC_REQ_MASK_B_LSB         (1U << 1)       /* 1b */
#define SPARE1_VRF18_REQ_MASK_B_LSB         (1U << 2)       /* 1b */
#define SPARE1_INFRA_REQ_MASK_B_LSB         (1U << 3)       /* 1b */
#define SPARE1_SRCCLKENA_MASK_B_LSB         (1U << 4)       /* 1b */
#define SPARE2_DDREN_MASK_B_LSB             (1U << 8)       /* 1b */
#define SPARE2_APSRC_REQ_MASK_B_LSB         (1U << 9)       /* 1b */
#define SPARE2_VRF18_REQ_MASK_B_LSB         (1U << 10)      /* 1b */
#define SPARE2_INFRA_REQ_MASK_B_LSB         (1U << 11)      /* 1b */
#define SPARE2_SRCCLKENA_MASK_B_LSB         (1U << 12)      /* 1b */
/* SPARE_ACK_STA (0x10006000+0x6F0) */
#define SPARE_ACK_SYNC_LSB                  (1U << 0)       /* 32b */
/* SPARE_ACK_MASK (0x10006000+0x6F4) */
#define SPARE_ACK_MASK_B_LSB                (1U << 0)       /* 32b */
/* SPM_DVFS_CON1 (0x10006000+0x700) */
#define SPM_DVFS_CON1_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CON1_STA (0x10006000+0x704) */
#define SPM_DVFS_CON1_STA_LSB               (1U << 0)       /* 32b */
/* SPM_DVFS_CMD0 (0x10006000+0x710) */
#define SPM_DVFS_CMD0_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD1 (0x10006000+0x714) */
#define SPM_DVFS_CMD1_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD2 (0x10006000+0x718) */
#define SPM_DVFS_CMD2_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD3 (0x10006000+0x71C) */
#define SPM_DVFS_CMD3_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD4 (0x10006000+0x720) */
#define SPM_DVFS_CMD4_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD5 (0x10006000+0x724) */
#define SPM_DVFS_CMD5_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD6 (0x10006000+0x728) */
#define SPM_DVFS_CMD6_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD7 (0x10006000+0x72C) */
#define SPM_DVFS_CMD7_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD8 (0x10006000+0x730) */
#define SPM_DVFS_CMD8_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD9 (0x10006000+0x734) */
#define SPM_DVFS_CMD9_LSB                   (1U << 0)       /* 32b */
/* SPM_DVFS_CMD10 (0x10006000+0x738) */
#define SPM_DVFS_CMD10_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD11 (0x10006000+0x73C) */
#define SPM_DVFS_CMD11_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD12 (0x10006000+0x740) */
#define SPM_DVFS_CMD12_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD13 (0x10006000+0x744) */
#define SPM_DVFS_CMD13_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD14 (0x10006000+0x748) */
#define SPM_DVFS_CMD14_LSB                  (1U << 0)       /* 32b */
/* SPM_DVFS_CMD15 (0x10006000+0x74C) */
#define SPM_DVFS_CMD15_LSB                  (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE0_FIX (0x10006000+0x780) */
#define WDT_LATCH_SPARE0_FIX_LSB            (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE1_FIX (0x10006000+0x784) */
#define WDT_LATCH_SPARE1_FIX_LSB            (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE2_FIX (0x10006000+0x788) */
#define WDT_LATCH_SPARE2_FIX_LSB            (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE3_FIX (0x10006000+0x78C) */
#define WDT_LATCH_SPARE3_FIX_LSB            (1U << 0)       /* 32b */
/* SPARE_ACK_IN_FIX (0x10006000+0x790) */
#define SPARE_ACK_IN_FIX_LSB                (1U << 0)       /* 32b */
/* DCHA_LATCH_RSV0_FIX (0x10006000+0x794) */
#define DCHA_LATCH_RSV0_FIX_LSB             (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_0 (0x10006000+0x800) */
#define PCM_WDT_LATCH_0_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_1 (0x10006000+0x804) */
#define PCM_WDT_LATCH_1_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_2 (0x10006000+0x808) */
#define PCM_WDT_LATCH_2_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_3 (0x10006000+0x80C) */
#define PCM_WDT_LATCH_3_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_4 (0x10006000+0x810) */
#define PCM_WDT_LATCH_4_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_5 (0x10006000+0x814) */
#define PCM_WDT_LATCH_5_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_6 (0x10006000+0x818) */
#define PCM_WDT_LATCH_6_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_7 (0x10006000+0x81C) */
#define PCM_WDT_LATCH_7_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_8 (0x10006000+0x820) */
#define PCM_WDT_LATCH_8_LSB                 (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_9 (0x10006000+0x824) */
#define PCM_WDT_LATCH_9_LSB                 (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE0 (0x10006000+0x828) */
#define WDT_LATCH_SPARE0_LSB                (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE1 (0x10006000+0x82C) */
#define WDT_LATCH_SPARE1_LSB                (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE2 (0x10006000+0x830) */
#define WDT_LATCH_SPARE2_LSB                (1U << 0)       /* 32b */
/* WDT_LATCH_SPARE3 (0x10006000+0x834) */
#define WDT_LATCH_SPARE3_LSB                (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_10 (0x10006000+0x838) */
#define PCM_WDT_LATCH_10_LSB                (1U << 0)       /* 32b */
/* PCM_WDT_LATCH_11 (0x10006000+0x83C) */
#define PCM_WDT_LATCH_11_LSB                (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_0 (0x10006000+0x840) */
#define DCHA_GATING_LATCH_0_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_1 (0x10006000+0x844) */
#define DCHA_GATING_LATCH_1_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_2 (0x10006000+0x848) */
#define DCHA_GATING_LATCH_2_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_3 (0x10006000+0x84C) */
#define DCHA_GATING_LATCH_3_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_4 (0x10006000+0x850) */
#define DCHA_GATING_LATCH_4_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_5 (0x10006000+0x854) */
#define DCHA_GATING_LATCH_5_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_6 (0x10006000+0x858) */
#define DCHA_GATING_LATCH_6_LSB             (1U << 0)       /* 32b */
/* DCHA_GATING_LATCH_7 (0x10006000+0x85C) */
#define DCHA_GATING_LATCH_7_LSB             (1U << 0)       /* 32b */
/* DCHA_LATCH_RSV0 (0x10006000+0x880) */
#define DCHA_LATCH_RSV0_LSB                 (1U << 0)       /* 32b */
/* SPM_PC_TRACE_CON (0x10006000+0x8C0) */
#define SPM_PC_TRACE_OFFSET_LSB             (1U << 0)       /* 12b */
#define SPM_PC_TRACE_HW_EN_LSB              (1U << 16)      /* 1b */
#define SPM_PC_TRACE_SW_LSB                 (1U << 17)      /* 1b */
/* SPM_PC_TRACE_G0 (0x10006000+0x8C4) */
#define SPM_PC_TRACE0_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE1_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G1 (0x10006000+0x8C8) */
#define SPM_PC_TRACE2_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE3_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G2 (0x10006000+0x8CC) */
#define SPM_PC_TRACE4_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE5_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G3 (0x10006000+0x8D0) */
#define SPM_PC_TRACE6_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE7_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G4 (0x10006000+0x8D4) */
#define SPM_PC_TRACE8_LSB                   (1U << 0)       /* 12b */
#define SPM_PC_TRACE9_LSB                   (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G5 (0x10006000+0x8D8) */
#define SPM_PC_TRACE10_LSB                  (1U << 0)       /* 12b */
#define SPM_PC_TRACE11_LSB                  (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G6 (0x10006000+0x8DC) */
#define SPM_PC_TRACE12_LSB                  (1U << 0)       /* 12b */
#define SPM_PC_TRACE13_LSB                  (1U << 16)      /* 12b */
/* SPM_PC_TRACE_G7 (0x10006000+0x8E0) */
#define SPM_PC_TRACE14_LSB                  (1U << 0)       /* 12b */
#define SPM_PC_TRACE15_LSB                  (1U << 16)      /* 12b */
/* SPM_ACK_CHK_CON (0x10006000+0x900) */
#define SPM_ACK_CHK_SW_EN_LSB               (1U << 0)       /* 1b */
#define SPM_ACK_CHK_CLR_ALL_LSB             (1U << 1)       /* 1b */
#define SPM_ACK_CHK_CLR_TIMER_LSB           (1U << 2)       /* 1b */
#define SPM_ACK_CHK_CLR_IRQ_LSB             (1U << 3)       /* 1b */
#define SPM_ACK_CHK_STA_EN_LSB              (1U << 4)       /* 1b */
#define SPM_ACK_CHK_WAKEUP_EN_LSB           (1U << 5)       /* 1b */
#define SPM_ACK_CHK_WDT_EN_LSB              (1U << 6)       /* 1b */
#define SPM_ACK_CHK_LOCK_PC_TRACE_EN_LSB    (1U << 7)       /* 1b */
#define SPM_ACK_CHK_HW_EN_LSB               (1U << 8)       /* 1b */
#define SPM_ACK_CHK_HW_MODE_LSB             (1U << 9)       /* 3b */
#define SPM_ACK_CHK_FAIL_LSB                (1U << 15)      /* 1b */
#define SPM_ACK_CHK_SWINT_EN_LSB            (1U << 16)      /* 16b */
/* SPM_ACK_CHK_PC (0x10006000+0x904) */
#define SPM_ACK_CHK_HW_TRIG_PC_VAL_LSB      (1U << 0)       /* 16b */
#define SPM_ACK_CHK_HW_TARG_PC_VAL_LSB      (1U << 16)      /* 16b */
/* SPM_ACK_CHK_SEL (0x10006000+0x908) */
#define SPM_ACK_CHK_HW_TRIG_SIGNAL_SEL_LSB  (1U << 0)       /* 5b */
#define SPM_ACK_CHK_HW_TRIG_GROUP_SEL_LSB   (1U << 5)       /* 3b */
#define SPM_ACK_CHK_HW_TARG_SIGNAL_SEL_LSB  (1U << 16)      /* 5b */
#define SPM_ACK_CHK_HW_TARG_GROUP_SEL_LSB   (1U << 21)      /* 3b */
/* SPM_ACK_CHK_TIMER (0x10006000+0x90C) */
#define SPM_ACK_CHK_TIMER_VAL_LSB           (1U << 0)       /* 16b */
#define SPM_ACK_CHK_TIMER_LSB               (1U << 16)      /* 16b */
/* SPM_ACK_CHK_STA (0x10006000+0x910) */
#define SPM_ACK_CHK_STA_LSB                 (1U << 0)       /* 32b */
/* SPM_ACK_CHK_LATCH (0x10006000+0x914) */
#define SPM_ACK_CHK_LATCH_LSB               (1U << 0)       /* 32b */
/* SPM_ACK_CHK_CON2 (0x10006000+0x920) */
#define SPM_ACK_CHK_SW_EN2_LSB              (1U << 0)       /* 1b */
#define SPM_ACK_CHK_CLR_ALL2_LSB            (1U << 1)       /* 1b */
#define SPM_ACK_CHK_CLR_TIMER2_LSB          (1U << 2)       /* 1b */
#define SPM_ACK_CHK_CLR_IRQ2_LSB            (1U << 3)       /* 1b */
#define SPM_ACK_CHK_STA_EN2_LSB             (1U << 4)       /* 1b */
#define SPM_ACK_CHK_WAKEUP_EN2_LSB          (1U << 5)       /* 1b */
#define SPM_ACK_CHK_WDT_EN2_LSB             (1U << 6)       /* 1b */
#define SPM_ACK_CHK_LOCK_PC_TRACE_EN2_LSB   (1U << 7)       /* 1b */
#define SPM_ACK_CHK_HW_EN2_LSB              (1U << 8)       /* 1b */
#define SPM_ACK_CHK_HW_MODE2_LSB            (1U << 9)       /* 3b */
#define SPM_ACK_CHK_FAIL2_LSB               (1U << 15)      /* 1b */
#define SPM_ACK_CHK_SWINT_EN2_LSB           (1U << 16)      /* 16b */
/* SPM_ACK_CHK_PC2 (0x10006000+0x924) */
#define SPM_ACK_CHK_HW_TRIG_PC_VAL2_LSB     (1U << 0)       /* 16b */
#define SPM_ACK_CHK_HW_TARG_PC_VAL2_LSB     (1U << 16)      /* 16b */
/* SPM_ACK_CHK_SEL2 (0x10006000+0x928) */
#define SPM_ACK_CHK_HW_TRIG_SIGNAL_SEL2_LSB (1U << 0)       /* 5b */
#define SPM_ACK_CHK_HW_TRIG_GROUP_SEL2_LSB  (1U << 5)       /* 3b */
#define SPM_ACK_CHK_HW_TARG_SIGNAL_SEL2_LSB (1U << 16)      /* 5b */
#define SPM_ACK_CHK_HW_TARG_GROUP_SEL2_LSB  (1U << 21)      /* 3b */
/* SPM_ACK_CHK_TIMER2 (0x10006000+0x92C) */
#define SPM_ACK_CHK_TIMER_VAL2_LSB          (1U << 0)       /* 16b */
#define SPM_ACK_CHK_TIMER2_LSB              (1U << 16)      /* 16b */
/* SPM_ACK_CHK_STA2 (0x10006000+0x930) */
#define SPM_ACK_CHK_STA2_LSB                (1U << 0)       /* 32b */
/* SPM_ACK_CHK_LATCH2 (0x10006000+0x934) */
#define SPM_ACK_CHK_LATCH2_LSB              (1U << 0)       /* 32b */
/* SPM_ACK_CHK_CON3 (0x10006000+0x940) */
#define SPM_ACK_CHK_SW_EN3_LSB              (1U << 0)       /* 1b */
#define SPM_ACK_CHK_CLR_ALL3_LSB            (1U << 1)       /* 1b */
#define SPM_ACK_CHK_CLR_TIMER3_LSB          (1U << 2)       /* 1b */
#define SPM_ACK_CHK_CLR_IRQ3_LSB            (1U << 3)       /* 1b */
#define SPM_ACK_CHK_STA_EN3_LSB             (1U << 4)       /* 1b */
#define SPM_ACK_CHK_WAKEUP_EN3_LSB          (1U << 5)       /* 1b */
#define SPM_ACK_CHK_WDT_EN3_LSB             (1U << 6)       /* 1b */
#define SPM_ACK_CHK_LOCK_PC_TRACE_EN3_LSB   (1U << 7)       /* 1b */
#define SPM_ACK_CHK_HW_EN3_LSB              (1U << 8)       /* 1b */
#define SPM_ACK_CHK_HW_MODE3_LSB            (1U << 9)       /* 3b */
#define SPM_ACK_CHK_FAIL3_LSB               (1U << 15)      /* 1b */
#define SPM_ACK_CHK_SWINT_EN3_LSB           (1U << 16)      /* 16b */
/* SPM_ACK_CHK_PC3 (0x10006000+0x944) */
#define SPM_ACK_CHK_HW_TRIG_PC_VAL3_LSB     (1U << 0)       /* 16b */
#define SPM_ACK_CHK_HW_TARG_PC_VAL3_LSB     (1U << 16)      /* 16b */
/* SPM_ACK_CHK_SEL3 (0x10006000+0x948) */
#define SPM_ACK_CHK_HW_TRIG_SIGNAL_SEL3_LSB (1U << 0)       /* 5b */
#define SPM_ACK_CHK_HW_TRIG_GROUP_SEL3_LSB  (1U << 5)       /* 3b */
#define SPM_ACK_CHK_HW_TARG_SIGNAL_SEL3_LSB (1U << 16)      /* 5b */
#define SPM_ACK_CHK_HW_TARG_GROUP_SEL3_LSB  (1U << 21)      /* 3b */
/* SPM_ACK_CHK_TIMER3 (0x10006000+0x94C) */
#define SPM_ACK_CHK_TIMER_VAL3_LSB          (1U << 0)       /* 16b */
#define SPM_ACK_CHK_TIMER3_LSB              (1U << 16)      /* 16b */
/* SPM_ACK_CHK_STA3 (0x10006000+0x950) */
#define SPM_ACK_CHK_STA3_LSB                (1U << 0)       /* 32b */
/* SPM_ACK_CHK_LATCH3 (0x10006000+0x954) */
#define SPM_ACK_CHK_LATCH3_LSB              (1U << 0)       /* 32b */
/* SPM_ACK_CHK_CON4 (0x10006000+0x960) */
#define SPM_ACK_CHK_SW_EN4_LSB              (1U << 0)       /* 1b */
#define SPM_ACK_CHK_CLR_ALL4_LSB            (1U << 1)       /* 1b */
#define SPM_ACK_CHK_CLR_TIMER4_LSB          (1U << 2)       /* 1b */
#define SPM_ACK_CHK_CLR_IRQ4_LSB            (1U << 3)       /* 1b */
#define SPM_ACK_CHK_STA_EN4_LSB             (1U << 4)       /* 1b */
#define SPM_ACK_CHK_WAKEUP_EN4_LSB          (1U << 5)       /* 1b */
#define SPM_ACK_CHK_WDT_EN4_LSB             (1U << 6)       /* 1b */
#define SPM_ACK_CHK_LOCK_PC_TRACE_EN4_LSB   (1U << 7)       /* 1b */
#define SPM_ACK_CHK_HW_EN4_LSB              (1U << 8)       /* 1b */
#define SPM_ACK_CHK_HW_MODE4_LSB            (1U << 9)       /* 3b */
#define SPM_ACK_CHK_FAIL4_LSB               (1U << 15)      /* 1b */
#define SPM_ACK_CHK_SWINT_EN4_LSB           (1U << 16)      /* 16b */
/* SPM_ACK_CHK_PC4 (0x10006000+0x964) */
#define SPM_ACK_CHK_HW_TRIG_PC_VAL4_LSB     (1U << 0)       /* 16b */
#define SPM_ACK_CHK_HW_TARG_PC_VAL4_LSB     (1U << 16)      /* 16b */
/* SPM_ACK_CHK_SEL4 (0x10006000+0x968) */
#define SPM_ACK_CHK_HW_TRIG_SIGNAL_SEL4_LSB (1U << 0)       /* 5b */
#define SPM_ACK_CHK_HW_TRIG_GROUP_SEL4_LSB  (1U << 5)       /* 3b */
#define SPM_ACK_CHK_HW_TARG_SIGNAL_SEL4_LSB (1U << 16)      /* 5b */
#define SPM_ACK_CHK_HW_TARG_GROUP_SEL4_LSB  (1U << 21)      /* 3b */
/* SPM_ACK_CHK_TIMER4 (0x10006000+0x96C) */
#define SPM_ACK_CHK_TIMER_VAL4_LSB          (1U << 0)       /* 16b */
#define SPM_ACK_CHK_TIMER4_LSB              (1U << 16)      /* 16b */
/* SPM_ACK_CHK_STA4 (0x10006000+0x970) */
#define SPM_ACK_CHK_STA4_LSB                (1U << 0)       /* 32b */
/* SPM_ACK_CHK_LATCH4 (0x10006000+0x974) */
#define SPM_ACK_CHK_LATCH4_LSB              (1U << 0)       /* 32b */

#define SPM_PROJECT_CODE	0xb16
#define SPM_REGWR_CFG_KEY	(SPM_PROJECT_CODE << 16)

#define spm_read(addr)			__raw_readl((void __force __iomem *)(addr))
#define spm_write(addr, val)		mt_reg_sync_writel(val, addr)

#endif
