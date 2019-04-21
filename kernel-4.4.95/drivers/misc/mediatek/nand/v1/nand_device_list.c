
#include "mtk_nand_device_feature.h"

const struct flashdev_info_t gen_FlashTable[] = {
#ifdef SUPPORT_SANDISK_DEVICE
	{{0x45, 0xDE, 0x94, 0x93, 0x76, 0x57}, 6, 5, IO_8BIT, 0x800000, 4096, 16384, 1280,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_SANDISK, 1024, "SDTNQGAMA008G ", 0,
		{SANDISK_16K, {0xEF, 0xEE, 0xFF, 16, 0x11, 0, 1, RTYPE_SANDISK_19NM, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC, {FALSE, FALSE, FALSE, FALSE, 0xFF, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
	{{0x45, 0xDE, 0xA8, 0x92, 0x76, 0x00}, 5, 5, IO_8BIT, 0x83C580, 4128, 16384, 1952,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_SANDISK, 1024, "SDTNRCAMAOO8G", 0,
		{PPTBL_NONE, {0xEF, 0xEE, 0x5D, 39, 0x11, 0, 0, RTYPE_SANDISK_TLC_1YNM, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_TLC, {TRUE, TRUE, TRUE, TRUE, 0xA2, 0xFF, TRUE, 68, 9, 8}, FALSE,
		{20, 3000, 2, 5} },
	{{0x45, 0xDE, 0x94, 0x93, 0x76, 0x00}, 5, 5, IO_8BIT, 0x800000, 4096, 16384, 1280,
		0x10804222, 0x60000, 0x33418010, 0x01010100, 100, VEND_SANDISK, 1024, "SDTNRGAMA008GK ", 0,
		{SANDISK_16K, {0xEF, 0xEE, 0x5D, 36, 0x11, 0, 0, RTYPE_SANDISK, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC_HYBER, {FALSE, FALSE, FALSE, FALSE, 0xA2, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
	{{0x45, 0xD7, 0x84, 0x93, 0x72, 0x00}, 5, 5, IO_8BIT, 0x400000, 4096, 16384, 1280,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_SANDISK, 1024, "SDTNRGAMA004GK ", 0,
		{SANDISK_16K, {0xEF, 0xEE, 0x5D, 36, 0x11, 0, 0, RTYPE_SANDISK, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC_HYBER, {FALSE, FALSE, FALSE, FALSE, 0xA2, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
#endif
#ifdef SUPPORT_MICRON_DEVICE
	{{0x2C, 0x44, 0x44, 0x4B, 0xA9, 0x00}, 5, 5, IO_8BIT, 0x400000, 2048, 8192, 640,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_MICRON, 1024, "MT29F32G08CBADB ", 0,
		{MICRON_8K, {0xEF, 0xEE, 0xFF, 7, 0x89, 0, 1, RTYPE_MICRON, {0x1, 0x14}, {0x1, 0x5} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC, {FALSE, FALSE, FALSE, FALSE, 0xFF, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
	{{0x2C, 0x64, 0x44, 0x4B, 0xA9, 0x00}, 5, 5, IO_8BIT, 0x800000, 2048, 8192, 640,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_MICRON, 1024, "MT29F128G08CFABA ", 0,
		{MICRON_8K, {0xEF, 0xEE, 0xFF, 7, 0x89, 0, 1, RTYPE_MICRON, {0x1, 0x14}, {0x1, 0x5} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC, {FALSE, FALSE, FALSE, FALSE, 0xFF, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
#endif
#ifdef SUPPORT_HYNIX_DEVICE
	{{0xAD, 0xDE, 0x94, 0xA7, 0x42, 0x00}, 5, 5, IO_8BIT, 0x800000, 4096, 16384, 1280,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_BIWIN, 1024, "BW27UCG8T2ETR", 0,
		{SANDISK_16K, {0xFF, 0xFF, 0xFF, 7, 0xFF, 0, 1, RTYPE_HYNIX_16NM, {0XFF, 0xFF}, {0XFF, 0xFF} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC, {FALSE, FALSE, FALSE, FALSE, 0xFF, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
	{{0xAD, 0xDE, 0x14, 0xA7, 0x42, 0x00}, 5, 5, IO_TOGGLESDR, 0x800000, 4096, 16384, 1600,
		0x10804222, 0x60000, 0x33418010, 0x01010100, 100, VEND_HYNIX, 1024, "H27UCG8T2ETR", 0,
		{SANDISK_16K, {0xEF, 0xEE, 0xFF, 8, 0xFF, 0, 0, RTYPE_HYNIX_16NM, {0x01, 0x20}, {0X01, 0x00} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC_HYBER, {FALSE, FALSE, FALSE, FALSE, 0xBF, 0xBE, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
	{{0xAD, 0xD7, 0x94, 0x91, 0x60, 0x00}, 5, 5, IO_8BIT, 0x400000, 2048, 8192, 640,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_HYNIX, 1024, "H27UBG8T2CTR", 0,
		{HYNIX_8K, {0xFF, 0xFF, 0xFF, 7, 0xFF, 0, 1, RTYPE_HYNIX, {0XFF, 0xFF}, {0XFF, 0xFF} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC, {FALSE, FALSE, FALSE, FALSE, 0xFF, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
	{{0xAD, 0xDE, 0x18, 0x03, 0x00, 0x40}, 5, 5, IO_8BIT, 0x858000, 6144, 16384, 1952,
		0x10818022, 0xC03222, 0x101, 0, 80, VEND_HYNIX, 1024, "H27QCG882M5R", 0,
		{PPTBL_NONE, {0xEF, 0xEE, 0x5D, 39, 0x11, 0, 0, RTYPE_TOSHIBA_TLC, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_TLC, {TRUE, FALSE, FALSE, TRUE, 0xA2, 0xFF, TRUE, 68, 8, 0}, FALSE,
		{20, 3000, 2, 5} },
#endif
#ifdef SUPPORT_TOSHIBA_DEVICE
	{{0x98, 0xDE, 0x94, 0x93, 0x76, 0x00}, 5, 5, IO_8BIT, 0x800000, 4096, 16384, 1280,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_TOSHIBA, 1024, "TC58TEG6DDKTA00", 0,
		{TOSHIBA_16K, {0xEF, 0xEE, 0xFF, 7, 0xFF, 7, 0, RTYPE_TOSHIBA, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC_HYBER, {FALSE, FALSE, FALSE, FALSE, 0xA2, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
	{{0x98, 0xD7, 0x84, 0x93, 0x72, 0x00}, 5, 5, IO_8BIT, 0x400000, 4096, 16384, 1280,
		0x10401011, 0xC03222, 0x101, 0, 80, VEND_TOSHIBA, 1024, "TC58TEG5DCKTA00", 0,
		{TOSHIBA_16K, {0xEF, 0xEE, 0xFF, 7, 0xFF, 7, 0, RTYPE_TOSHIBA, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_MLC, {FALSE, FALSE, FALSE, FALSE, 0xFF, 0xFF, FALSE, 0xFF, 8, 0xFF}, FALSE,
		{20, 3000, 2, 5} },
#if defined(CONFIG_MTK_HALF_NAND_SUPPORT)
	{{0x98, 0xDE, 0x88, 0xA3, 0x72, 0x00}, 5, 5, IO_TOGGLEDDR, 0x42F000, 6144, 16384, 1952,
		0x10818022, 0x20008031, 0x33418010, 0x01010400, 100, VEND_TOSHIBA, 1024, "TC58TEG6TGLTA00", 0,
		{PPTBL_NONE, {0xEF, 0xEE, 0x5D, 39, 0x11, 0, 0, RTYPE_TOSHIBA_TLC, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_TLC, {TRUE, FALSE, TRUE, TRUE, 0xA2, 0xFF, TRUE, 68, 8, 0}, FALSE,
		{20, 3000, 2, 5} },
#else
	{{0x98, 0xDE, 0x88, 0xA3, 0x72, 0x00}, 5, 5, IO_TOGGLEDDR, 0x85E000, 6144, 16384, 1952,
		0x10818022, 0x20008031, 0x33418010, 0x01010400, 100, VEND_TOSHIBA, 1024, "TC58TEG6TGLTA00", 0,
		{PPTBL_NONE, {0xEF, 0xEE, 0x5D, 39, 0x11, 0, 0, RTYPE_TOSHIBA_TLC, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_TLC, {TRUE, FALSE, TRUE, TRUE, 0xA2, 0xFF, TRUE, 68, 8, 0}, FALSE,
		{20, 3000, 2, 5} },
#endif
	{{0x98, 0x3A, 0x98, 0xA3, 0x76, 0x51}, 5, 5, IO_TOGGLEDDR, 0x10F2000, 6144, 16384, 1952,
		0x10818022, 0x00110000, 0x33418010, 0x01010400, 100, VEND_TOSHIBA, 1024, "MULTI_PLANE", MULTI_PLANE,
		{PPTBL_NONE, {0xEF, 0xEE, 0x5D, 39, 0x11, 0, 0, RTYPE_TOSHIBA_TLC, {0x80, 0x00}, {0x80, 0x01} },
		{RAND_TYPE_SAMSUNG, {0x2D2D, 1, 1, 1, 1, 1} } },
		NAND_FLASH_TLC, {TRUE, FALSE, TRUE, TRUE, 0xA2, 0xFF, TRUE, 68, 8, 0}, FALSE,
		{20, 3000, 2, 5} },
#endif
};

