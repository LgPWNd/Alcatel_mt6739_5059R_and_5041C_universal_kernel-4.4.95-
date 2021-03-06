
#ifndef _MTK_DMA
#define _MTK_DMA

#include <linux/interrupt.h>


extern irqreturn_t mtk_pcie_dma_irq(int irq, void *__res);
extern irqreturn_t pdma_irq(int irq, void *__res);
extern void mtk_pcie_config_dma(int burst, int type, int pcie_addr, int bus_addr, int length);
extern void mtk_pcie_free_rdma(void);
extern void mtk_pcie_free_wdma(void);
extern struct pci_dev		*dev;
extern struct device		*pdev;

#define RDMA_IO_READ		(0x0000)
#define WDMA_IO_WRITE		(0x0001)
#define RDMA_MEM_READ		(0x0002)
#define WDMA_MEM_WRITE		(0x0003)
#define RDMA_CONFIG_READ	(0x0004)
#define WDMA_CONFIG_WRITE	(0x0005)
#define RDMA_MEM_READ_BURST	(0x0006)
#define WDMA_MEM_WRITE_BURST	(0x0007)
#define MAX_DMA_LENGTH		(0x1000)

#endif
