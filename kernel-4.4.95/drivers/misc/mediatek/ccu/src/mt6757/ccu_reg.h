
#ifndef _MT6799_CCU_REG_H_
#define _MT6799_CCU_REG_H_

#include <sync_write.h>

#include "CCU_A_c_header.h"

#if defined(linux) || defined(__linux) || defined(__arm__)
#define ccu_read_reg(base, regName)       (((PCCU_A_REGS)base)->regName.Raw)
#define ccu_write_reg(base, regName, val)  (((PCCU_A_REGS)base)->regName.Raw = val)

#define ccu_read_reg_bit(base, regName, fieldNmae)       (((PCCU_A_REGS)base)->regName.Bits.fieldNmae)
#define ccu_write_reg_bit(base, regName, fieldNmae, val)  (((PCCU_A_REGS)base)->regName.Bits.fieldNmae = val)


/*#define ISP_WR32(addr, data)    mt_reg_sync_writel(data, addr)*/  /* For 89     Only.*/   /* NEED_TUNING_BY_PROJECT */
/*#define ISP_RD32(addr)          ioread32((void *)addr)*/
#define CCU_SET_BIT(reg, bit)   ((*(volatile unsigned int *)(reg)) |= (unsigned int)(1 << (bit)))
#define CCU_CLR_BIT(reg, bit)   ((*(volatile unsigned int *)(reg)) &= ~((unsigned int)(1 << (bit))))

#elif defined(_MSC_VER)
#define ccu_read_reg(base, regName)       (((PCCU_A_REGS)base)->##regName##.Raw)
#define ccu_write_reg(base, regName, val)  (((PCCU_A_REGS)base)->##regName##.Raw = val)

#define ccu_read_reg_bit(base, regName, fieldNmae)       (((PCCU_A_REGS)base)->##regName##.Bits.##fieldNmae)
#define ccu_write_reg_bit(base, regName, fieldNmae, val)  (((PCCU_A_REGS)base)->##regName##.Bits.##fieldNmae = val)
#endif

/*REG size for each module is 0x1000*/
#define CCU_REG_RANGE           (PAGE_SIZE)
#define REG_SIZE        (CCU_REG_RANGE)
#define CCU_BASE_RANGE  (REG_SIZE)

extern uint64_t ccu_base;

#endif
