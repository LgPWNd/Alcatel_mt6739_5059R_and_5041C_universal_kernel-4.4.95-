
#ifndef _DT_BINDINGS_CLK_MT6757_H
#define _DT_BINDINGS_CLK_MT6757_H

/* TOPCKGEN */
#define TOP_MUX_AXI 1
#define TOP_MUX_MM 2
#define TOP_MUX_VDEC 3
#define TOP_MUX_VENC 4
#define TOP_MUX_MFG 5
#define TOP_MUX_CAMTG 6
#define TOP_MUX_UART 7
#define TOP_MUX_SPI 8
#define TOP_MUX_IMG 9
#define TOP_MUX_MSDC50_0_HCLK 10
#define TOP_MUX_MSDC50_0 11
#define TOP_MUX_MSDC30_1 12
#define TOP_MUX_MSDC30_2 13
#define TOP_MUX_MSDC30_3 14
#define TOP_MUX_AUDIO 15
#define TOP_MUX_AUD_INTBUS 16
#define TOP_MUX_PMICSPI 17
#define TOP_MUX_ATB 18
#define TOP_MUX_DPI0 19
#define TOP_MUX_SCAM 20
#define TOP_MUX_AUD_1 21
#define TOP_MUX_AUD_2 22
#define TOP_MUX_DISP_PWM 23
#define TOP_MUX_SSUSB_TOP_SYS 24
#define TOP_MUX_SSUSB_TOP_XHCI 25
#define TOP_MUX_USB_TOP 26
#define TOP_MUX_SPM 27
#define TOP_MUX_BSI_SPI 28
#define TOP_MUX_I2C 29
#define TOP_MUX_DVFSP 30
#define TOP_MUX_F52M_MFG 31
#define TOP_AD_ARMPLL_L_CK_VRPOC_L 32
#define TOP_AD_ARMPLL_LL_CK_VRPOC_LL 33
#define TOP_AD_CCIPLL_CK_VRPOC_CCI 34
#define TOP_SYSPLL_CK 35
#define TOP_SYSPLL_D2 36
#define TOP_SYSPLL1_D2 37
#define TOP_SYSPLL1_D4 38
#define TOP_SYSPLL1_D8 39
#define TOP_SYSPLL1_D16 40
#define TOP_SYSPLL_D3 41
#define TOP_SYSPLL2_D2 42
#define TOP_SYSPLL2_D4 43
#define TOP_SYSPLL2_D8 44
#define TOP_SYSPLL_D3_D3 45
#define TOP_SYSPLL_D5 46
#define TOP_SYSPLL3_D2 47
#define TOP_SYSPLL3_D4 48
#define TOP_SYSPLL_D7 49
#define TOP_SYSPLL4_D2 50
#define TOP_SYSPLL4_D4 51
#define TOP_UNIVPLL_CK 52
#define TOP_UNIVPLL_D2 53
#define TOP_UNIVPLL1_D2 54
#define TOP_UNIVPLL1_D4 55
#define TOP_UNIVPLL1_D8 56
#define TOP_UNIVPLL_D3 57
#define TOP_UNIVPLL2_D2 58
#define TOP_UNIVPLL2_D4 59
#define TOP_UNIVPLL2_D8 60
#define TOP_UNIVPLL_D5 61
#define TOP_UNIVPLL3_D2 62
#define TOP_UNIVPLL3_D4 63
#define TOP_UNIVPLL3_D8 64
#define TOP_UNIVPLL_D7 65
#define TOP_UNIV_192M_CK 66
#define TOP_UNIVPLL_192M_D2 67
#define TOP_UNIVPLL_192M_D4 68
#define TOP_APLL1_CK 69
#define TOP_APLL2_CK 70
#define TOP_TVDPLL_CK 71
#define TOP_TVDPLL_D2 72
#define TOP_TVDPLL_D4 73
#define TOP_TVDPLL_D8 74
#define TOP_TVDPLL_D16 75
#define TOP_MSDCPLL_CK 76
#define TOP_MSDCPLL_D2 77
#define TOP_MSDCPLL_D4 78
#define TOP_MSDCPLL_D8 79
#define TOP_MSDCPLL_D16 80
#define TOP_AD_OSC_CK 81
#define TOP_OSC_D2 82
#define TOP_OSC_D4 83
#define TOP_OSC_D8 84
#define TOP_VENCPLL_CK 85
#define TOP_MMPLL_CK 87
#define TOP_NR_CLK 88

/* APMIXED */
#define APMIXED_ARMPLL_LL 1
#define APMIXED_ARMPLL_L 2
#define APMIXED_CCIPLL 3
#define APMIXED_MAINPLL 4
#define APMIXED_UNIVPLL 5
#define APMIXED_MSDCPLL 6
#define APMIXED_VENCPLL 7
#define APMIXED_MMPLL 8
#define APMIXED_TVDPLL 9
#define APMIXED_APLL1 10
#define APMIXED_APLL2 11
#define SCP_OSCPLL 12
#define APMIXED_NR_CLK 13

/* CAMSYS */
#define CAMSYS_LARB2_CGPDN 1
#define CAMSYS_CAMSYS_CGPDN 2
#define CAMSYS_CAMTG_CGPDN 3
#define CAMSYS_SENINF_CGPDN 4
#define CAMSYS_CAMSV0_CGPDN 5
#define CAMSYS_CAMSV1_CGPDN 6
#define CAMSYS_CAMSV2_CGPDN 7
#define CAMSYS_TSF_CGPDN 8
#define CAMSYS_NR_CLK 9
/* INFRACFG_AO */
#define INFRACFG_AO_PMIC_CG_TMR 1
#define INFRACFG_AO_PMIC_CG_AP 2
#define INFRACFG_AO_PMIC_CG_MD 3
#define INFRACFG_AO_PMIC_CG_CONN 4
#define INFRACFG_AO_SEJ_CG 6
#define INFRACFG_AO_APXGPT_CG 7
#define INFRACFG_AO_ICUSB_CG 8
#define INFRACFG_AO_GCE_CG 9
#define INFRACFG_AO_THERM_CG 10
#define INFRACFG_AO_I2C0_CG 11
#define INFRACFG_AO_I2C1_CG 12
#define INFRACFG_AO_I2C2_CG 13
#define INFRACFG_AO_I2C3_CG 14
#define INFRACFG_AO_PWM_HCLK_CG 15
#define INFRACFG_AO_PWM1_CG 16
#define INFRACFG_AO_PWM2_CG 17
#define INFRACFG_AO_PWM3_CG 18
#define INFRACFG_AO_PWM4_CG 19
#define INFRACFG_AO_PWM_CG 20
#define INFRACFG_AO_UART0_CG 21
#define INFRACFG_AO_UART1_CG 22
#define INFRACFG_AO_UART2_CG 23
#define INFRACFG_AO_UART3_CG 24
#define INFRACFG_AO_MD2MD_CCIF_CG0 25
#define INFRACFG_AO_MD2MD_CCIF_CG1 26
#define INFRACFG_AO_MD2MD_CCIF_CG2 27
#define INFRACFG_AO_BTIF_CG 28
#define INFRACFG_AO_MD2MD_CCIF_CG3 29
#define INFRACFG_AO_SPI0_CG 30
#define INFRACFG_AO_MSDC0_CG 31
#define INFRACFG_AO_MD2MD_CCIF_CG4 32
#define INFRACFG_AO_MSDC1_CG 33
#define INFRACFG_AO_MSDC2_CG 34
#define INFRACFG_AO_MSDC3_CG 35
#define INFRACFG_AO_MD2MD_CCIF_CG5 36
#define INFRACFG_AO_GCPU_CG 37
#define INFRACFG_AO_TRNG_CG 38
#define INFRACFG_AO_AUXADC_CG 39
#define INFRACFG_AO_CPUM_CG 40
#define INFRACFG_AO_CCIF1_AP_CG 41
#define INFRACFG_AO_CCIF1_MD_CG 42
#define INFRACFG_AO_AP_DMA_CG 43
#define INFRACFG_AO_XIU_CG 44
#define INFRACFG_AO_DEVICE_APC_CG 45
#define INFRACFG_AO_XIU2AHB_CG 46
#define INFRACFG_AO_CCIF_AP_CG 47
#define INFRACFG_AO_DEBUGSYS_CG 48
#define INFRACFG_AO_AUDIO_CG 49
#define INFRACFG_AO_CCIF_MD_CG 50
#define INFRACFG_AO_DRAMC_F26M_CG 51
#define INFRACFG_AO_IRTX_CG 52
#define INFRACFG_AO_SSUSB_TOP_CG 53
#define INFRACFG_AO_DISP_PWM_CG 54
#define INFRACFG_AO_CLDMA_BCLK_CK 55
#define INFRACFG_AO_AUDIO_26M_BCLK_CK 56
#define INFRACFG_AO_SPI1_CG 57
#define INFRACFG_AO_I2C4_CG 58
#define INFRACFG_AO_MODEM_TEMP_SHARE_CG 59
#define INFRACFG_AO_SPI2_CG 60
#define INFRACFG_AO_SPI3_CG 61
#define INFRACFG_AO_I2C5_CG 62
#define INFRACFG_AO_I2C5_ARBITER_CG 63
#define INFRACFG_AO_I2C5_IMM_CG 64
#define INFRACFG_AO_I2C1_ARBITER_CG 65
#define INFRACFG_AO_I2C1_IMM_CG 66
#define INFRACFG_AO_I2C2_ARBITER_CG 67
#define INFRACFG_AO_I2C2_IMM_CG 68
#define INFRACFG_AO_SPI4_CG 69
#define INFRACFG_AO_SPI5_CG 70
#define INFRACFG_AO_CLK_13M 71
#define INFRACFG_AO_NR_CLK 72
/* MFGCFG */
#define MFGCFG_BG3D 1
#define MFGCFG_NR_CLK 2
/* IMG */
#define	IMG_RSC	1
#define	IMG_GEPF	2
#define	IMG_FDVT	3
#define	IMG_DPE	4
#define	IMG_DIP	5
#define	IMG_DFP_VAD	6
#define	IMG_LARB5	7
#define IMG_CLK 8
/* MMSYS_CONFIG */
#define	MMSYS_SMI_COMMON	1
#define	MMSYS_SMI_LARB0	2
#define	MMSYS_SMI_LARB4	3
#define	MMSYS_CAM_MDP	4
#define	MMSYS_MDP_RDMA0	5
#define	MMSYS_MDP_RDMA1	6
#define	MMSYS_MDP_RSZ0	7
#define	MMSYS_MDP_RSZ1	8
#define	MMSYS_MDP_RSZ2	9
#define	MMSYS_MDP_TDSHP	10
#define	MMSYS_MDP_COLOR	11
#define	MMSYS_MDP_WDMA	12
#define	MMSYS_MDP_WROT0	13
#define	MMSYS_MDP_WROT1	14
#define	MMSYS_DISP_OVL0	15
#define	MMSYS_DISP_OVL1	16
#define	MMSYS_DISP_OVL0_2L	17
#define	MMSYS_DISP_OVL1_2L	18
#define	MMSYS_DISP_RDMA0	19
#define	MMSYS_DISP_RDMA1	20
#define	MMSYS_DISP_RDMA2	21
#define	MMSYS_DISP_WDMA0	22
#define	MMSYS_DISP_WDMA1	23
#define	MMSYS_DISP_COLOR0	24
#define	MMSYS_DISP_COLOR1	25
#define	MMSYS_DISP_CCORR0	26
#define	MMSYS_DISP_CCORR1	27
#define	MMSYS_DISP_AAL0	28
#define	MMSYS_DISP_AAL1	29
#define	MMSYS_DISP_GAMMA0	30
#define	MMSYS_DISP_GAMMA1	31
#define	MMSYS_DISP_OD	32
#define	MMSYS_DISP_DITHER0	33
#define	MMSYS_DISP_DITHER1	34
#define	MMSYS_DISP_UFOE	35
#define	MMSYS_DISP_DSC	36
#define	MMSYS_DISP_SPLIT	37
#define	MMSYS_DSI0_MM_CLOCK	38
#define	MMSYS_DSI0_INTERFACE_CLOCK	39
#define	MMSYS_DSI1_MM_CLOCK	40
#define	MMSYS_DSI1_INTERFACE_CLOCK	41
#define	MMSYS_DPI_MM_CLOCK	42
#define	MMSYS_DPI_INTERFACE_CLOCK	43
#define	MMSYS_DISP_OVL0_MOUT_CLOCK	44
#define MMSYS_CONFIG_NR_CLK 45

/* VDEC_GCON */
#define	VDEC_VDEC	1
#define	VDEC_LARB1	2
#define VDEC_GCON_NR_CLK 3

/* VENC_GCON */
#define VENC_GCON_SET0_LARB 1
#define VENC_GCON_SET1_VENC 2
#define VENC_GCON_SET2_JPGENC 3
#define VENC_GCON_SET3_JPGDEC 4
#define VENC_GCON_NR_CLK 5

/* AUDIO */
#define	AUDIO_TML	1
#define	AUDIO_DAC_PREDIS	2
#define	AUDIO_DAC	3
#define	AUDIO_ADC	4
#define	AUDIO_APLL_TUNER	5
#define	AUDIO_APLL2_TUNER	6
#define	AUDIO_24M	7
#define	AUDIO_22M	8
#define	AUDIO_I2S	9
#define	AUDIO_AFE	10
#define AUDIO_NR_CLK 11

/* SCP_SYS */
#define SCP_SYS_MD1  1
#define SCP_SYS_CONN  2
#define SCP_SYS_DIS  3
#define SCP_SYS_MFG  4
#define SCP_SYS_ISP  5
#define SCP_SYS_VDE  6
#define SCP_SYS_VEN  7
#define SCP_SYS_MFG_ASYNC  8
#define SCP_SYS_AUDIO  9
#define SCP_SYS_CAM  10
#define SCP_SYS_C2K  11
#define SCP_SYS_MDSYS_INTF_INFRA  12
#define SCP_SYS_MFG_CORE1  13
#define SCP_SYS_MFG_CORE0  14
#define SCP_NR_SYSS  15

#endif				/* _DT_BINDINGS_CLK_MT6757_H */
