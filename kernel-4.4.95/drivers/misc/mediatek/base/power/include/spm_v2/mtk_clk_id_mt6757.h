
#ifndef __MT_CLK_ID_MT6757_H__
#define __MT_CLK_ID_MT6757_H__

/* The following is CODA name */
enum mt_cg_clk_id {
	MT_CG_INFRA0_MD2MD_CCIF_CG3_STA			=   0,
	MT_CG_INFRA0_SPI_CG_STA					=   1,
	MT_CG_INFRA0_MSDC0_CG_STA				=   2,
	MT_CG_INFRA0_MD2MD_CCIF_CG4_STA			=   3,
	MT_CG_INFRA0_MSDC1_CG_STA				=   4,
	MT_CG_INFRA0_MSDC2_CG_STA				=   5,
	MT_CG_INFRA0_MSDC3_CG_STA				=   6,
	MT_CG_INFRA0_MD2MD_CCIF_CG5_STA			=   7,
	MT_CG_INFRA0_GCPU_CG_STA				=   8,
	MT_CG_INFRA0_AUXADC_CG_STA				=  10,
	MT_CG_INFRA0_CPUM_CG_STA				=  11,
	MT_CG_INFRA0_NFI_CG_STA					=  16,
	MT_CG_INFRA0_NFI_ECC_cg_STA				=  17,
	MT_CG_INFRA0_AP_DMA_CG_STA				=  18,
	MT_CG_INFRA0_XIU_CG_sta					=  19,
	MT_CG_INFRA0_DEVICE_APC_CG_STA			=  20,
	MT_CG_INFRA0_XIU2AHB_CG_STA				=  21,
	MT_CG_INFRA0_I2C_SRAM_CG_STA			=  22,
	MT_CG_INFRA0_CCIF_AP_CG_STA				=  23,
	MT_CG_INFRA0_DEBUGSYS_CG_STA			=  24,
	MT_CG_INFRA0_AUDIO_CG_STA				=  25,
	MT_CG_INFRA0_CCIF_MD_CG_STA				=  26,
	MT_CG_INFRA0_DRAMC_F26M_CG_STA			=  31,

	MT_CG_INFRA1_PMIC_CG_TMR_STA			=  32 +  0,
	MT_CG_INFRA1_PMIC_CG_AP_STA				=  32 +  1,
	MT_CG_INFRA1_PMIC_CG_MD_STA				=  32 +  2,
	MT_CG_INFRA1_PMIC_CG_CONN_STA			=  32 +  3,
	MT_CG_INFRA1_SCPSYS_CG_STA				=  32 +  4,
	MT_CG_INFRA1_SEJ_CG_STA					=  32 +  5,
	MT_CG_INFRA1_APXGPT_CG_STA				=  32 +  6,
	MT_CG_INFRA1_ICUSB_CG_STA				=  32 +  8,
	MT_CG_INFRA1_GCE_CG_STA					=  32 +  9,
	MT_CG_INFRA1_THERM_CG_STA				=  32 + 10,
	MT_CG_INFRA1_I2C0_CG_STA				=  32 + 11,
	MT_CG_INFRA1_I2C1_CG_STA				=  32 + 12,
	MT_CG_INFRA1_I2C2_CG_STA				=  32 + 13,
	MT_CG_INFRA1_I2C3_CG_STA				=  32 + 14,
	MT_CG_INFRA1_PWM_HCLK_CG_STA			=  32 + 15,
	MT_CG_INFRA1_PWM1_CG_STA				=  32 + 16,
	MT_CG_INFRA1_PWM2_CG_STA				=  32 + 17,
	MT_CG_INFRA1_PWM3_CG_STA				=  32 + 18,
	MT_CG_INFRA1_PWM4_CG_STA				=  32 + 19,
	MT_CG_INFRA1_PWM_CG_STA					=  32 + 21,
	MT_CG_INFRA1_UART0_CG_STA				=  32 + 22,
	MT_CG_INFRA1_UART1_CG_STA				=  32 + 23,
	MT_CG_INFRA1_UART2_CG_STA				=  32 + 24,
	MT_CG_INFRA1_UART3_CG_STA				=  32 + 25,
	MT_CG_INFRA1_MD2MD_CCIF_CG0_STA			=  32 + 27,
	MT_CG_INFRA1_MD2MD_CCIF_CG1_STA			=  32 + 28,
	MT_CG_INFRA1_MD2MD_CCIF_CG2_STA			=  32 + 29,
	MT_CG_INFRA1_FHCTL_CG_STA				=  32 + 30,
	MT_CG_INFRA1_BTIF_CG_STA				=  32 + 31,

	MT_CG_INFRA2_INTX_CG_STA				=  64 +  0,
	MT_CG_INFRA2_SSUSB_TOP_CG_STA			=  64 +  1,
	MT_CG_INFRA2_DISP_PWM_CG_STA			=  64 +  2,
	MT_CG_INFRA2_CLDMA_BCLK_CG_STA			=  64 +  3,
	MT_CG_INFRA2_AUDIO_26M_BCLK_CG_STA		=  64 +  4,
	MT_CG_INFRA2_MODEM_TEMP_26M_BCLK_CG_STA	=  64 +  5,
	MT_CG_INFRA2_SPI1_CG_STA				=  64 +  6,
	MT_CG_INFRA2_I2C4_CG_STA				=  64 +  7,
	MT_CG_INFRA2_MODEM_TEMP_SHARE_CG_STA	=  64 +  8,

	MT_CG_ID_DISP0_SMI_COMMON				=  96 +  0,
	MT_CG_ID_DISP0_SMI_LARB0				=  96 +  1,
	MT_CG_ID_DISP0_SMI_LARB4				=  96 +  2,
	MT_CG_ID_DISP0_CAM_DL_RELAY				=  96 +  3,
	MT_CG_ID_DISP0_MDP_RDMA0				=  96 +  4,
	MT_CG_ID_DISP0_MDP_RDMA1				=  96 +  5,
	MT_CG_ID_DISP0_MDP_RSZ0					=  96 +  6,
	MT_CG_ID_DISP0_MDP_RSZ1					=  96 +  7,
	MT_CG_ID_DISP0_MDP_RSZ2					=  96 +  8,
	MT_CG_ID_DISP0_MDP_TDSHP				=  96 +  9,
	MT_CG_ID_DISP0_MDP_COLOR				=  96 + 10,
	MT_CG_ID_DISP0_MDP_WDMA					=  96 + 11,
	MT_CG_ID_DISP0_MDP_WROT0				=  96 + 12,
	MT_CG_ID_DISP0_MDP_WROT1				=  96 + 13,
	MT_CG_ID_DISP0_FAKE_ENG					=  96 + 14,
	MT_CG_ID_DISP0_DISP_OVL0				=  96 + 15,
	MT_CG_ID_DISP0_DISP_OVL1				=  96 + 16,
	MT_CG_ID_DISP0_DISP_OVL0_2L				=  96 + 17,
	MT_CG_ID_DISP0_DISP_OVL1_2L				=  96 + 18,
	MT_CG_ID_DISP0_DISP_RDMA0				=  96 + 19,
	MT_CG_ID_DISP0_DISP_RDMA1				=  96 + 20,
	MT_CG_ID_DISP0_DISP_RDMA2				=  96 + 21,
	MT_CG_ID_DISP0_DISP_WDMA0				=  96 + 22,
	MT_CG_ID_DISP0_DISP_WDMA1				=  96 + 23,
	MT_CG_ID_DISP0_DISP_COLOR0				=  96 + 24,
	MT_CG_ID_DISP0_DISP_COLOR1				=  96 + 25,
	MT_CG_ID_DISP0_DISP_CCORR0				=  96 + 26,
	MT_CG_ID_DISP0_DISP_CCORR1				=  96 + 27,
	MT_CG_ID_DISP0_DISP_AAL0				=  96 + 28,
	MT_CG_ID_DISP0_DISP_AAL1				=  96 + 29,
	MT_CG_ID_DISP0_DISP_GAMMA0				=  96 + 30,
	MT_CG_ID_DISP0_DISP_GAMMA1				=  96 + 31,

	MT_CG_ID_DISP1_DISP_OD					= 128 +  0,
	MT_CG_ID_DISP1_DISP_DITHER0				= 128 +  1,
	MT_CG_ID_DISP1_DISP_DITHER1				= 128 +  2,
	MT_CG_ID_DISP1_DISP_UFOE				= 128 +  3,
	MT_CG_ID_DISP1_DISP_DSC					= 128 +  4,
	MT_CG_ID_DISP1_DISP_SPLIT				= 128 +  5,
	MT_CG_ID_DISP1_DSI0_MM					= 128 +  6,
	MT_CG_ID_DISP1_DSI0_INTERFACE			= 128 +  7,
	MT_CG_ID_DISP1_DSI1_MM					= 128 +  8,
	MT_CG_ID_DISP1_DSI1_INTERFACE			= 128 +  9,
	MT_CG_ID_DISP1_DPI_MM					= 128 +  10,
	MT_CG_ID_DISP1_DPI_INTERFACE			= 128 +  11,
	MT_CG_ID_DISP1_LARB6_AXI_ASIF_MM		= 128 +  12,
	MT_CG_ID_DISP1_LARB6_AXI_ASIF_MJC		= 128 +  13,
	MT_CG_ID_DISP1_DISP_OVL0_MOUT			= 128 +  14,
	MT_CG_ID_DISP1_FAKE_ENG2				= 128 +  15,
	MT_CG_ID_DISP1_DFP_CK					= 128 +  16,
	MT_CG_ID_DISP1_DFP_CK_52M				= 128 +  17,

	MT_CG_IMAGE_ISP_PWR_RST_B				= 160 +  0,
	MT_CG_IMAGE_ISP_PWR_ISO					= 160 +  1,
	MT_CG_IMAGE_ISP_PWR_ON					= 160 +  2,
	MT_CG_IMAGE_ISP_PWR_ON_2ND				= 160 +  3,
	MT_CG_IMAGE_ISP_PWR_CLK_DIS				= 160 +  4,
	MT_CG_IMAGE_ISP_SRAM_PDN0				= 160 +  8,
	MT_CG_IMAGE_ISP_SRAM_PDN1				= 160 +  9,
	MT_CG_IMAGE_ISP_SRAM_PDN2				= 160 + 10,
	MT_CG_IMAGE_ISP_SRAM_PDN3				= 160 + 11,

	MT_CG_MFG_PWR_RST_B						= 192 +  0,
	MT_CG_MFG_PWR_ISO						= 192 +  1,
	MT_CG_MFG_PWR_ON						= 192 +  2,
	MT_CG_MFG_PWR_ON_2ND					= 192 +  3,
	MT_CG_MFG_PWR_CLK_DIS					= 192 +  4,
	MT_CG_MFG_SRAM_PDN0						= 192 +  8,
	MT_CG_MFG_SRAM_PDN1						= 192 +  9,
	MT_CG_MFG_SRAM_PDN2						= 192 + 10,
	MT_CG_MFG_SRAM_PDN3						= 192 + 11,
	MT_CG_MFG_SRAM_PDN4						= 192 + 12,
	MT_CG_MFG_SRAM_PDN5						= 192 + 13,

	MT_CG_VDE_PWR_RST_B						= 224 +  0,
	MT_CG_VDE_PWR_ISO						= 224 +  1,
	MT_CG_VDE_PWR_ON						= 224 +  2,
	MT_CG_VDE_PWR_ON_2ND					= 224 +  3,
	MT_CG_VDE_PWR_CLK_DIS					= 224 +  4,
	MT_CG_VDE_SRAM_PDN0						= 224 +  8,
	MT_CG_VDE_SRAM_PDN1						= 224 +  9,
	MT_CG_VDE_SRAM_PDN2						= 224 + 10,
	MT_CG_VDE_SRAM_PDN3						= 224 + 11,

	MT_CG_VEN_PWR_RST_B						= 256 +  0,
	MT_CG_VEN_PWR_ISO						= 256 +  1,
	MT_CG_VEN_PWR_ON						= 256 +  2,
	MT_CG_VEN_PWR_ON_2ND					= 256 +  3,
	MT_CG_VEN_PWR_CLK_DIS					= 256 +  4,
	MT_CG_VEN_SRAM_PDN0						= 256 +  8,
	MT_CG_VEN_SRAM_PDN1						= 256 +  9,
	MT_CG_VEN_SRAM_PDN2						= 256 + 10,
	MT_CG_VEN_SRAM_PDN3						= 256 + 11,

	MT_CG_ID_AUDIO_AFE						= 288 +  2,      /* PDN_AFE         */
	MT_CG_ID_AUDIO_I2S						= 288 +  6,      /* PDN_I2S         */
	MT_CG_ID_AUDIO_22M						= 288 +  8,      /* PDN_22M         */
	MT_CG_ID_AUDIO_24M						= 288 +  9,      /* PDN_24M         */
	MT_CG_ID_AUDIO_APLL2_TUNER				= 288 + 18,      /* PDN_APLL2_TUNER */
	MT_CG_ID_AUDIO_APLL_TUNER				= 288 + 19,      /* PDN_APLL_TUNER  */
	MT_CG_ID_AUDIO_ADC						= 288 + 24,
	MT_CG_ID_AUDIO_DAC						= 288 + 25,
	MT_CG_ID_AUDIO_DAC_PREDIS				= 288 + 26,
	MT_CG_ID_AUDIO_TML						= 288 + 27
};

#endif /* __MT_CLK_ID_MT6757_H__ */

