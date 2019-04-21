
#ifndef __MTK_CLKID_MT6739_H__
#define __MTK_CLKID_MT6739_H__

enum mt_cg_clk_id {
	/* INFRA0 */
	MTK_CG_PMIC_CG_TMR          0 + 0,
	MTK_CG_PMIC_CG_AP           0 + 1,
	MTK_CG_PMIC_CG_MD           0 + 2,
	MTK_CG_PMIC_CG_CONN         0 + 3,
	MTK_CG_SEJ_CG               0 + 5,
	MTK_CG_APXGPT_CG            0 + 6,
	MTK_CG_ICUSB_CG             0 + 8,
	MTK_CG_GCE_CG               0 + 9,
	MTK_CG_THERM_CG             0 + 10,
	MTK_CG_I2C0_CG              0 + 11,
	MTK_CG_I2C1_CG              0 + 12,
	MTK_CG_I2C2_CG              0 + 13,
	MTK_CG_I2C3_CG              0 + 14,
	MTK_CG_PWM_HCLK_CG          0 + 15,
	MTK_CG_PWM1_CG              0 + 16,
	MTK_CG_PWM2_CG              0 + 17,
	MTK_CG_PWM3_CG              0 + 18,
	MTK_CG_PWM4_CG              0 + 19,
	MTK_CG_PWM5_CG              0 + 20,
	MTK_CG_PWM_CG               0 + 21,
	MTK_CG_UART0_CG             0 + 22,
	MTK_CG_UART1_CG             0 + 23,
	MTK_CG_UART2_CG             0 + 24,
	MTK_CG_UART3_CG             0 + 25,
	MTK_CG_GCE_26M              0 + 27,
	MTK_CG_CQ_DMA_FPC           0 + 28,
	MTK_CG_BTIF_CG              0 + 31,
	/* INFRA1 */
	MTK_CG_SPI0_CG              32 + 1,
	MTK_CG_MSDC0_CG             32 + 2,
	MTK_CG_MSDC1_CG             32 + 4,
	MTK_CG_NFIECC_312M_CG       32 + 6,
	MTK_CG_DVFSRC_CG            32 + 7,
	MTK_CG_GCPU_CG              32 + 8,
	MTK_CG_TRNG_CG              32 + 9,
	MTK_CG_AUXADC_CG            32 + 10,
	MTK_CG_CPUM_CG              32 + 11,
	MTK_CG_CCIF1_AP_CG          32 + 12,
	MTK_CG_CCIF1_MD_CG          32 + 13,
	MTK_CG_AUXADC_MD_CG         32 + 14,
	MTK_CG_NFI_CG               32 + 16,
	MTK_CG_NFI_1X_CG            32 + 17,
	MTK_CG_AP_DMA_CG            32 + 18,
	MTK_CG_XIU_CG               32 + 19,
	MTK_CG_DEVICE_APC_CG        32 + 20,
	MTK_CG_CCIF_AP_CG           32 + 23,
	MTK_CG_DEBUGSYS_CG          32 + 24,
	MTK_CG_AUDIO_CG             32 + 25,
	MTK_CG_CCIF_MD_CG           32 + 26,
	MTK_CG_DXCC_SEC_CORE_CG     32 + 27,
	MTK_CG_DXCC_AO_CG           32 + 28,
	MTK_CG_DRAMC_F26M_CG        32 + 31,
	/* INFRA2 */
	MTK_CG_RG_PWM_FBCLK6_CK_CG  64 + 0,
	MTK_CG_DISP_PWM_CG          64 + 2,
	MTK_CG_CLDMA_BCLK_CK        64 + 3,
	MTK_CG_AUDIO_26M_BCLK_CK    64 + 4,
	MTK_CG_SPI1_CG              64 + 6,
	MTK_CG_I2C4_CG              64 + 7,
	MTK_CG_MODEM_TEMP_SHARE_CG  64 + 8,
	MTK_CG_SPI2_CG              64 + 9,
	MTK_CG_SPI3_CG              64 + 10,
	MTK_CG_I2C5_CG              64 + 18,
	MTK_CG_I2C5_ARBITER_CG      64 + 19,
	MTK_CG_I2C5_IMM_CG          64 + 20,
	MTK_CG_I2C1_ARBITER_CG      64 + 21,
	MTK_CG_I2C1_IMM_CG          64 + 22,
	MTK_CG_I2C2_ARBITER_CG      64 + 23,
	MTK_CG_I2C2_IMM_CG          64 + 24,
	MTK_CG_SPI4_CG              64 + 25,
	MTK_CG_SPI5_CG              64 + 26,
	MTK_CG_CQ_DMA_CG            64 + 27,
	/* MMSYS0 */
	MTK_CG_SMI_COMMON           96 + 0,
	MTK_CG_SMI_LARB0            96 + 1,
	MTK_CG_GALS_COMM0           96 + 2,
	MTK_CG_GALS_COMM1           96 + 3,
	MTK_CG_ISP_DL               96 + 4,
	MTK_CG_MDP_RDMA0            96 + 5,
	MTK_CG_MDP_RSZ0             96 + 6,
	MTK_CG_MDP_RSZ1             96 + 7,
	MTK_CG_MDP_TDSHP            96 + 8,
	MTK_CG_MDP_WROT0            96 + 9,
	MTK_CG_MDP_WDMA0            96 + 10,
	MTK_CG_FAKE_ENG             96 + 11,
	MTK_CG_DISP_OVL0            96 + 12,
	MTK_CG_DISP_RDMA0           96 + 13,
	MTK_CG_DISP_WDMA0           96 + 14,
	MTK_CG_DISP_COLOR0          96 + 15,
	MTK_CG_DISP_CCORR0          96 + 16,
	MTK_CG_DISP_AAL0            96 + 17,
	MTK_CG_DISP_GAMMA0          96 + 18,
	MTK_CG_DISP_DITHER0         96 + 19,
	MTK_CG_DSI0_MM_CK           96 + 20,
	MTK_CG_DSI0_IF_CK           96 + 21,
	MTK_CG_DBI0_MM_CK           96 + 22,
	MTK_CG_DBI0_IF_CK           96 + 23,
	MTK_CG_F26M_HRT clock       96 + 24,
	/* IMAGE */
	MTK_CG_ISP_PWR_RST_B        128 + 0,
	MTK_CG_ISP_PWR_ISO          128 + 1,
	MTK_CG_ISP_PWR_ON           128 + 2,
	MTK_CG_ISP_PWR_ON_2ND       128 + 3,
	MTK_CG_ISP_PWR_CLK_DIS      128 + 4,
	MTK_CG_ISP_SRAM_PDN         128 + 5,
	MTK_CG_ISP_SRAM_PDN_ACK     128 + 6,
	/* MFG */
	MTK_CG_MFG_PWR_RST_B        160 + 0,
	MTK_CG_MFG_PWR_ISO          160 + 1,
	MTK_CG_MFG_PWR_ON           160 + 2,
	MTK_CG_MFG_PWR_ON_2ND       160 + 3,
	MTK_CG_MFG_PWR_CLK_DIS      160 + 4,
	MTK_CG_MFG_SRAM_PDN         160 + 5,
	MTK_CG_MFG_SRAM_PDN_ACK     160 + 6,
	/* VCODEC */
	MTK_CG_VCODEC_PWR_RST_B     192 + 0,
	MTK_CG_VCODEC_PWR_ISO       192 + 1,
	MTK_CG_VCODEC_PWR_ON        192 + 2,
	MTK_CG_VCODEC_PWR_ON_2ND    192 + 3,
	MTK_CG_VCODEC_PWR_CLK_DIS   192 + 4,
	MTK_CG_VCODEC_SRAM_PDN      192 + 5,
	MTK_CG_VCODEC_SRAM_PDN_ACK  192 + 6,

};

#endif /* __MTK_CLKID_MT6739_H__ */

