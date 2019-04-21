
#ifndef __IMGSENSOR_COMMON_H__
#define __IMGSENSOR_COMMON_H__

#include "kd_camera_feature.h"
#include "kd_imgsensor_define.h"

#define PREFIX "[imgsensor]"

#define DEBUG_CAMERA_HW_K
#ifdef DEBUG_CAMERA_HW_K
#define PK_DBG(fmt, arg...)  pr_debug(PREFIX fmt, ##arg)
#define PK_PR_ERR(fmt, arg...)  pr_err(fmt, ##arg)
#define PK_INFO(fmt, arg...) pr_debug(PREFIX fmt, ##arg)
#else
#define PK_DBG(fmt, arg...)
#define PK_PR_ERR(fmt, arg...)  pr_err(fmt, ##arg)
#define PK_INFO(fmt, arg...) pr_debug(PREFIX fmt, ##arg)
#endif

#define IMGSENSOR_LEGACY_COMPAT

enum IMGSENSOR_ARCH {
	IMGSENSOR_ARCH_V1 = 0,
	IMGSENSOR_ARCH_V2,
	IMGSENSOR_ARCH_V3
};

enum IMGSENSOR_RETURN {
	IMGSENSOR_RETURN_SUCCESS = 0,
	IMGSENSOR_RETURN_ERROR   = -1,
};

#endif

