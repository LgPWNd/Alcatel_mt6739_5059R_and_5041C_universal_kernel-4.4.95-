
#include "audio_dma_buf_control.h"

#include <scp_helper.h>
#include <scp_ipi.h>

#include "audio_log.h"
#include "audio_assert.h"
#include "audio_ipi_platform.h"

static struct audio_resv_dram_t resv_dram;


void init_reserved_dram(void)
{
	resv_dram.phy_addr = (char *)scp_get_reserve_mem_phys(AUDIO_IPI_MEM_ID);
	resv_dram.vir_addr = (char *)scp_get_reserve_mem_virt(AUDIO_IPI_MEM_ID);
	resv_dram.size     = (uint32_t)scp_get_reserve_mem_size(AUDIO_IPI_MEM_ID);

	AUD_LOG_D("resv_dram: pa %p, va %p, sz 0x%x\n",
		  resv_dram.phy_addr, resv_dram.vir_addr, resv_dram.size);

	if (audio_ipi_check_scp_status()) {
		AUD_ASSERT(resv_dram.phy_addr != NULL);
		AUD_ASSERT(resv_dram.vir_addr != NULL);
		AUD_ASSERT(resv_dram.size > 0);
	}
}


struct audio_resv_dram_t *get_reserved_dram(void)
{
	return &resv_dram;
}

char *get_resv_dram_vir_addr(char *resv_dram_phy_addr)
{
	uint32_t offset = 0;

	offset = resv_dram_phy_addr - resv_dram.phy_addr;
	return resv_dram.vir_addr + offset;
}

