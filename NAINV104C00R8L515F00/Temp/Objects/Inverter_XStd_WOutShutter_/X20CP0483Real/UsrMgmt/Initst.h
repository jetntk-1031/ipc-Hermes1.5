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

#ifndef __AS__TYPE_eUsrMgmtAction
#define __AS__TYPE_eUsrMgmtAction
typedef enum eUsrMgmtAction
{	UsrMgmtActIdle = 0,
	UsrMgmtActCreateDir = 1,
	UsrMgmtActLogin = 2,
	UsrMgmtActBypassLogin = 3,
	UsrMgmtActLogout = 4,
	UsrMgmtActAdd = 5,
	UsrMgmtActEdit = 6,
	UsrMgmtActDel = 7,
	UsrMgmtActSaveAccessRight = 8,
	UsrMgmtActReadData = 9,
} eUsrMgmtAction;
#endif

#ifndef __AS__TYPE_eUsrMgmtAutLvl
#define __AS__TYPE_eUsrMgmtAutLvl
typedef enum eUsrMgmtAutLvl
{	UsrMgmtLvl1 = 0,
	UsrMgmtLvl2 = 1,
	UsrMgmtLvl3 = 2,
	UsrMgmtAdmin = 3,
	UsrMgmtNtEngr = 4,
	UsrMgmtNtAdmin = 5,
} eUsrMgmtAutLvl;
#endif

#ifndef __AS__TYPE_tyUsrMgmtParam
#define __AS__TYPE_tyUsrMgmtParam
typedef struct tyUsrMgmtParam
{	plcstring sUsrNm[31];
	plcstring sPw[31];
	eUsrMgmtAutLvl eUsrLvl;
} tyUsrMgmtParam;
#endif

#ifndef __AS__TYPE_tyUsrMgmtAccessRight
#define __AS__TYPE_tyUsrMgmtAccessRight
typedef struct tyUsrMgmtAccessRight
{	plcbit bOpt;
	plcbit bProdSel;
	plcbit bMagSel;
	plcbit bMcInfo;
	plcbit bAlm;
	plcbit bBffrInfo;
	plcbit bOvenInfo;
	plcbit bMagInfo;
	plcbit bLFCtrl;
	plcbit bManual;
	plcbit bManualFBOnly;
	plcbit bSimulation;
	plcbit bProdSet;
	plcbit bMagSet;
	plcbit bMcSet;
	plcbit bLang;
	plcbit bUsrMgmt;
	plcbit bLFSet;
	plcbit bChgParam;
	plcstring sNm[31];
} tyUsrMgmtAccessRight;
#endif

#ifndef __AS__TYPE_tyUsrMgmtFullDat
#define __AS__TYPE_tyUsrMgmtFullDat
typedef struct tyUsrMgmtFullDat
{	struct tyUsrMgmtParam a_tyAllList[50];
	tyUsrMgmtAccessRight tyAccessRightLvl1;
	tyUsrMgmtAccessRight tyAccessRightLvl2;
	tyUsrMgmtAccessRight tyAccessRightLvl3;
} tyUsrMgmtFullDat;
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

_BUR_LOCAL eUsrMgmtAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyUsrMgmtAccessRight tyCurrAccessRight;
_BUR_LOCAL tyUsrMgmtParam tyCurrUsr;
_BUR_LOCAL tyUsrMgmtFullDat tyFullData;
_BUR_LOCAL struct tyUsrMgmtParam a_tyLvl2List[50];
_BUR_LOCAL struct tyUsrMgmtParam a_tyLvl3List[50];
_BUR_LOCAL struct tyUsrMgmtParam a_tyAdminList[50];
_BUR_LOCAL plcbit bLastAdmin;
_BUR_LOCAL plcbit bUnableDelete;
_BUR_LOCAL plcbit bLoginSuccess;
_BUR_LOCAL plcbit bNmExist;
_BUR_LOCAL plcbit bNmNotExist;
_BUR_LOCAL plcbit bPwMismatch;
_BUR_LOCAL plcbit bNmEmpty;
_BUR_LOCAL plcbit bListFull;
_BUR_LOCAL plcbit bFileNotFound;
_GLOBAL unsigned long c_udiUsrMgmtMax;
_GLOBAL unsigned long p_UsrMgmtStat;
_GLOBAL unsigned long p_UsrMgmtStatus;
_GLOBAL unsigned long p_UsrMgmtStatTxt;
_GLOBAL unsigned long p_UsrMgmtAlmData;
_GLOBAL unsigned long p_UsrMgmtCurrAccessRight;
_GLOBAL unsigned long p_UsrMgmtCurrUsr;
_GLOBAL unsigned long p_UsrMgmtFullData;
_GLOBAL unsigned long p_UsrMgmtAllList;
_GLOBAL unsigned long p_UsrMgmtAccessRightLvl1;
_GLOBAL unsigned long p_UsrMgmtAccessRightLvl2;
_GLOBAL unsigned long p_UsrMgmtAccessRightLvl3;
_GLOBAL unsigned long p_UsrMgmtLvl2List;
_GLOBAL unsigned long p_UsrMgmtLvl3List;
_GLOBAL unsigned long p_UsrMgmtAdminList;
_GLOBAL unsigned long p_UsrMgmtLastAdmin;
_GLOBAL unsigned long p_UsrMgmtUnableDelete;
_GLOBAL unsigned long p_UsrMgmtLoginSuccess;
_GLOBAL unsigned long p_UsrMgmtNmExist;
_GLOBAL unsigned long p_UsrMgmtNmNotExist;
_GLOBAL unsigned long p_UsrMgmtPwMismatch;
_GLOBAL unsigned long p_UsrMgmtNmEmpty;
_GLOBAL unsigned long p_UsrMgmtListFull;
_GLOBAL unsigned long p_UsrMgmtFileNotFound;
