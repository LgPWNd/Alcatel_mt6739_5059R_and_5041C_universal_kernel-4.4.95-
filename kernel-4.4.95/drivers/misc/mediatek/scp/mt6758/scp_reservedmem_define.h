
#ifndef __SCP_RESERVEDMEM_DEFINE_H__
#define __SCP_RESERVEDMEM_DEFINE_H__

static struct scp_reserve_mblock scp_reserve_mblock[] = {
	{
		.num = VOW_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x1A000,/*104KB*/
	},
	{
		.num = SENS_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x800000,/*8MB*/
	},
#ifdef CONFIG_MTK_AUDIO_TUNNELING_SUPPORT
	{
		.num = MP3_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x400000,/*4MB*/
	},
#endif
	{
		.num = FLP_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x1000,/*4KB*/
	},
	{
		.num = RTOS_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x100000,/*1MB*/
	},
	{
		.num = SENS_MEM_DIRECT_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x2000,/*8KB*/
	},
	{
		.num = SCP_A_LOGGER_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x200000,/*2MB*/
	},
	{
		.num = AUDIO_IPI_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x200000,/*2MB*/
	},
#ifdef CONFIG_MTK_AUDIO_SCP_SPKPROTECT_SUPPORT
	{
		.num = SPK_PROTECT_MEM_ID,
		.start_phys = 0x0,
		.start_virt = 0x0,
		.size = 0x30000,/*192KB*/
	},
#endif
};


#endif
