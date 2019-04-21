

#include "met_smi_configuration.h"
#include "met_drv.h"
#include "met_smi_name.h"

struct smi_desc larb0_desc[SMI_MET_LARB0_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc larb1_desc[SMI_MET_LARB1_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc larb2_desc[SMI_MET_LARB2_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc larb3_desc[SMI_MET_LARB3_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc larb4_desc[SMI_MET_LARB4_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc larb5_desc[SMI_MET_LARB5_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc larb6_desc[SMI_MET_LARB6_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 12, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 13, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 14, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 15, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 16, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 17, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 18, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 19, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 20, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc larb7_desc[SMI_MET_LARB7_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

struct smi_desc common_desc[SMI_MET_COMMON_PORT_NUM] = {
	{ 0, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 1, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 2, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 3, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 4, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 5, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 6, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 7, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 8, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE }
};

struct chip_smi smi_map[SMI_MET_TOTAL_MASTER_NUM] = {
	{0, larb0_desc, SMI_MET_LARB0_PORT_NUM},
	{1, larb1_desc, SMI_MET_LARB1_PORT_NUM},
	{2, larb2_desc, SMI_MET_LARB2_PORT_NUM},
	{3, larb3_desc, SMI_MET_LARB3_PORT_NUM},
	{4, larb4_desc, SMI_MET_LARB4_PORT_NUM},
	{5, larb5_desc, SMI_MET_LARB5_PORT_NUM},
	{6, larb6_desc, SMI_MET_LARB6_PORT_NUM},
	{7, larb7_desc, SMI_MET_LARB7_PORT_NUM},
	{8, common_desc, SMI_MET_COMMON_PORT_NUM}
};
