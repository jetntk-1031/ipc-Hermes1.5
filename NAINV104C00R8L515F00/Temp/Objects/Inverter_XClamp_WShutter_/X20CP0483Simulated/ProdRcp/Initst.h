#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_eProdRcpAction
#define __AS__TYPE_eProdRcpAction
typedef enum eProdRcpAction
{	ProdRcpActIdle = 0,
	ProdRcpActCreateDir = 1,
	ProdRcpActAddEdit = 2,
	ProdRcpActDel = 3,
	ProdRcpActGetInfo = 4,
	ProdRcpActGetList = 5,
	ProdRcpActFilter = 6,
	ProdRcpActLoadRcp = 7,
	ProdRcpActAdd = 8,
	ProdRcpActEdit = 9,
	ProdRcpActReadCurrRcp = 10,
	ProdRcpActWriteCurrRcpParam = 11,
	ProdRcpActSaveList = 12,
	ProdRcpActSort = 13,
	ProdRcpActEndCharFilter = 14,
} eProdRcpAction;
#endif

#ifndef __AS__TYPE_tyProdRcpParam
#define __AS__TYPE_tyProdRcpParam
typedef struct tyProdRcpParam
{	plcstring sRcpNm[255];
	signed long diWidthInUM;
	signed long diWidthInUM2;
	unsigned char usiMcMod;
	plcstring sDisplayInfo[31];
	plcdt dtLastModified;
	unsigned char usiFlippedBrd;
	plcstring sMatchCode[31];
} tyProdRcpParam;
#endif

#ifndef __AS__TYPE_eFBStatus
#define __AS__TYPE_eFBStatus
typedef enum eFBStatus
{	Idle = 0,
	Done = 1,
	Busy = 2,
	Error = 3,
} eFBStatus;
#endif

#ifndef __AS__TYPE_eAlmSeverity
#define __AS__TYPE_eAlmSeverity
typedef enum eAlmSeverity
{	AlmSeverityNA = 0,
	AlmSeverityError = 1,
	AlmSeverityWarning = 2,
	AlmSeverityInfo = 3,
} eAlmSeverity;
#endif

#ifndef __AS__TYPE_tyAlmDat
#define __AS__TYPE_tyAlmDat
typedef struct tyAlmDat
{	unsigned long udiCode;
	eAlmSeverity eSeverity;
	plcstring sProgNm[16];
	plcstring sAlmMsg[201];
	plcstring sRcyMsg[201];
	unsigned long udiRunTime;
	unsigned long udiModuleNum;
	plcbit bAlm;
	plcbit bWarning;
} tyAlmDat;
#endif

_BUR_LOCAL eProdRcpAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL plcbit bNmExist;
_BUR_LOCAL plcbit bNmNotExist;
_BUR_LOCAL plcbit bNmEmpty;
_BUR_LOCAL plcbit bListFull;
_BUR_LOCAL struct tyProdRcpParam a_tyCurrList[2000];
_BUR_LOCAL struct tyProdRcpParam a_tyFilterList[2000];
_BUR_LOCAL struct tyProdRcpParam a_tySortList[2000];
_BUR_LOCAL struct tyProdRcpParam a_tyScanList[2000];
_BUR_LOCAL tyProdRcpParam tyInfoOut;
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL struct tyProdRcpParam a_tyCurrRcp[6];
_GLOBAL unsigned long c_udiProdRcpMax;
_GLOBAL unsigned long p_ProdRcpStat;
_GLOBAL unsigned long p_ProdRcpStatus;
_GLOBAL unsigned long p_ProdRcpStatTxt;
_GLOBAL unsigned long p_ProdRcpAlmData;
_GLOBAL unsigned long p_ProdRcpNmExist;
_GLOBAL unsigned long p_ProdRcpNmNotExist;
_GLOBAL unsigned long p_ProdRcpNmEmpty;
_GLOBAL unsigned long p_ProdRcpListFull;
_GLOBAL unsigned long p_ProdRcpCurrList;
_GLOBAL unsigned long p_ProdRcpFilterList;
_GLOBAL unsigned long p_ProdRcpSortedList;
_GLOBAL unsigned long p_ProdRcpScanList;
_GLOBAL unsigned long p_ProdRcpInfoOut;
_GLOBAL unsigned long p_ProdRcpFileNotFound;
_GLOBAL unsigned long p_ProdRcpCurrRcpAll;
_GLOBAL unsigned long p_ProdRcpCurrRcp0;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Width;
_GLOBAL unsigned long p_ProdRcpCurrRcp0McMod;
_GLOBAL unsigned long p_ProdRcpCurrRcp0FlippedBrd;
_GLOBAL unsigned long p_ProdRcpCurrRcp0MatchCode;
_GLOBAL unsigned long p_ProdRcpCurrRcp0DisplayInfo;
_GLOBAL unsigned long p_ProdRcpCurrRcp0LastModified;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Width2;
_GLOBAL unsigned long p_ProdRcpCurrRcp1;
_GLOBAL unsigned long p_ProdRcpCurrRcp1Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp1Width;
_GLOBAL unsigned long p_ProdRcpCurrRcp1McMod;
_GLOBAL unsigned long p_ProdRcpCurrRcp1FlippedBrd;
_GLOBAL unsigned long p_ProdRcpCurrRcp1MatchCode;
_GLOBAL unsigned long p_ProdRcpCurrRcp1DisplayInfo;
_GLOBAL unsigned long p_ProdRcpCurrRcp1LastModified;
_GLOBAL unsigned long p_ProdRcpCurrRcp1Width2;
_GLOBAL unsigned long p_ProdRcpCurrRcp2;
_GLOBAL unsigned long p_ProdRcpCurrRcp2Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp2Width;
_GLOBAL unsigned long p_ProdRcpCurrRcp2McMod;
_GLOBAL unsigned long p_ProdRcpCurrRcp2FlippedBrd;
_GLOBAL unsigned long p_ProdRcpCurrRcp2MatchCode;
_GLOBAL unsigned long p_ProdRcpCurrRcp2DisplayInfo;
_GLOBAL unsigned long p_ProdRcpCurrRcp2LastModified;
_GLOBAL unsigned long p_ProdRcpCurrRcp2Width2;
_GLOBAL unsigned long p_ProdRcpCurrRcp3;
_GLOBAL unsigned long p_ProdRcpCurrRcp3Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp3Width;
_GLOBAL unsigned long p_ProdRcpCurrRcp3McMod;
_GLOBAL unsigned long p_ProdRcpCurrRcp3FlippedBrd;
_GLOBAL unsigned long p_ProdRcpCurrRcp3MatchCode;
_GLOBAL unsigned long p_ProdRcpCurrRcp3DisplayInfo;
_GLOBAL unsigned long p_ProdRcpCurrRcp3LastModified;
_GLOBAL unsigned long p_ProdRcpCurrRcp3Width2;
_GLOBAL unsigned long p_ProdRcpCurrRcp4;
_GLOBAL unsigned long p_ProdRcpCurrRcp4Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp4Width;
_GLOBAL unsigned long p_ProdRcpCurrRcp4McMod;
_GLOBAL unsigned long p_ProdRcpCurrRcp4FlippedBrd;
_GLOBAL unsigned long p_ProdRcpCurrRcp4MatchCode;
_GLOBAL unsigned long p_ProdRcpCurrRcp4DisplayInfo;
_GLOBAL unsigned long p_ProdRcpCurrRcp4LastModified;
_GLOBAL unsigned long p_ProdRcpCurrRcp4Width2;
_GLOBAL unsigned long p_ProdRcpCurrRcp5;
_GLOBAL unsigned long p_ProdRcpCurrRcp5Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp5Width;
_GLOBAL unsigned long p_ProdRcpCurrRcp5McMod;
_GLOBAL unsigned long p_ProdRcpCurrRcp5FlippedBrd;
_GLOBAL unsigned long p_ProdRcpCurrRcp5MatchCode;
_GLOBAL unsigned long p_ProdRcpCurrRcp5DisplayInfo;
_GLOBAL unsigned long p_ProdRcpCurrRcp5LastModified;
_GLOBAL unsigned long p_ProdRcpCurrRcp5Width2;
