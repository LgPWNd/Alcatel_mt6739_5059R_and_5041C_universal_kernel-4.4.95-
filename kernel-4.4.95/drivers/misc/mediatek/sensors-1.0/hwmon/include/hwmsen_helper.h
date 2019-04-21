

#include <linux/types.h>
#include <linux/i2c.h>
#include "hwmsensor.h"
#ifndef __HWMSEN_HELPER_H__
#define __HWMSEN_HELPER_H__
#define C_I2C_FIFO_SIZE         8	/*according i2c_mt6516.c */
#define HWM_TAG					"<HWMSEN> "
#define HWM_FUN(f)				printk(HWM_TAG"%s\n", __func__)
#define HWM_ERR(fmt, args...)	printk(HWM_TAG"%s %d : "fmt, __func__, __LINE__, ##args)
#define HWM_LOG(fmt, args...)	printk(HWM_TAG fmt, ##args)
#define HWM_VER(fmt, args...)   printk(HWM_TAG"%s: "fmt, __func__, ##args)	/* ((void)0) */
struct hwmsen_reg {
	const char *name;
	u16 addr;
	u16 mode;
	u16 mask;
	u16 len;
};
/*----------------------------------------------------------------------------*/
#define HWMSEN_DUMMY_REG(X) {NULL, X, REG_NA, 0x00, 0}
/*----------------------------------------------------------------------------*/
struct hwmsen_reg_test_multi {
	u8 addr;
	u8 len;
	u8 mode;
	u8 _align;
};
/*----------------------------------------------------------------------------*/
enum {
	REG_NA = 0x0000,
	REG_RO = 0x0001,
	REG_WO = 0x0002,
	REG_LK = 0x0004,	/*lcoked, register test will by-pass this register */
	REG_RW = REG_RO | REG_WO,
};
/*----------------------------------------------------------------------------*/
struct hwmsen_convert {
	s8 sign[C_MAX_HWMSEN_EVENT_NUM];
	u8 map[C_MAX_HWMSEN_EVENT_NUM];
};
/*----------------------------------------------------------------------------*/
struct hwmsen_conf {
	s32 sensitivity[C_MAX_HWMSEN_EVENT_NUM];	/*output sensitivity of sensor data */
	int num;
};
/*----------------------------------------------------------------------------*/
typedef struct hwmsen_reg *(*find_reg_t) (int reg_idx);
/*----------------------------------------------------------------------------*/
extern int hwmsen_set_bits(struct i2c_client *client, u8 addr, u8 bits);
extern int hwmsen_clr_bits(struct i2c_client *client, u8 addr, u8 bits);
extern int hwmsen_read_byte(struct i2c_client *client, u8 addr, u8 *data);
extern int hwmsen_write_byte(struct i2c_client *client, u8 addr, u8 data);
extern int hwmsen_read_block(struct i2c_client *client, u8 addr, u8 *data, u8 len);
extern int hwmsen_write_block(struct i2c_client *client, u8 addr, u8 *data, u8 len);
extern void hwmsen_single_rw(struct i2c_client *client, struct hwmsen_reg *regs, int num);
extern void hwmsen_multi_rw(struct i2c_client *client, find_reg_t findreg,
			    struct hwmsen_reg_test_multi *items, int inum);
extern ssize_t hwmsen_show_dump(struct i2c_client *client, u8 startAddr, u8 *regtbl, u32 regnum,
				find_reg_t findreg, char *buf, u32 buflen);
extern ssize_t hwmsen_read_all_regs(struct i2c_client *client, struct hwmsen_reg *regs, u32 num,
				    char *buf, u32 buflen);
extern ssize_t hwmsen_show_reg(struct i2c_client *client, u8 addr, char *buf, u32 buflen);
extern ssize_t hwmsen_store_reg(struct i2c_client *client, u8 addr, const char *buf, size_t count);
extern ssize_t hwmsen_show_byte(struct device *dev, struct device_attribute *attr, char *buf,
				u32 buflen);
extern ssize_t hwmsen_store_byte(struct device *dev, struct device_attribute *attr, const char *buf,
				 size_t count);
extern ssize_t hwmsen_show_word(struct device *dev, struct device_attribute *attr, char *buf,
				u32 buflen);
extern ssize_t hwmsen_store_word(struct device *dev, struct device_attribute *attr, const char *buf,
				 size_t count);
extern int hwmsen_get_convert(int direction, struct hwmsen_convert *cvt);
/*----------------------------------------------------------------------------*/
#endif
