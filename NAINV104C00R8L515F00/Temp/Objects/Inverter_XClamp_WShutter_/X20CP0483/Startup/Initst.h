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

#ifndef __AS__TYPE_eUIAction
#define __AS__TYPE_eUIAction
typedef enum eUIAction
{	UIActIdle = 0,
	UIActInitial = 1,
} eUIAction;
#endif

#ifndef __AS__TYPE_eStartupAction
#define __AS__TYPE_eStartupAction
typedef enum eStartupAction
{	StartupActIdle = 0,
	StartupActRun = 1,
} eStartupAction;
#endif

#ifndef __AS__TYPE_eStartupStep
#define __AS__TYPE_eStartupStep
typedef enum eStartupStep
{	StartupStepUsrFolder = 0,
	StartupStepParameter = 1,
	StartupStepGetHWInfo = 2,
	StartupStepLibVer = 3,
	StartupStepRecipe = 4,
	StartupStepUsrMgmt = 5,
	StartupStepBffr = 6,
	StartupStepAlarm = 7,
	StartupStepHermes = 8,
	StartupStepSDOWrite = 9,
	StartupStepSetupUI = 10,
	StartupStepDone = 11,
} eStartupStep;
#endif

#ifndef __AS__TYPE_eUsrFolderAction
#define __AS__TYPE_eUsrFolderAction
typedef enum eUsrFolderAction
{	UsrFolderActIdle = 0,
	UsrFolderActCreateUsrDir = 1,
	UsrFolderActCreatePrivateDir = 2,
	UsrFolderActCreateLogDir = 3,
	UsrFolderActCreateLCSDir = 4,
} eUsrFolderAction;
#endif

#ifndef __AS__TYPE_eLibVerAction
#define __AS__TYPE_eLibVerAction
typedef enum eLibVerAction
{	LibVerActIdle = 0,
	LibVerActCreateDir = 1,
	LibVerActWrite = 2,
	LibVerActRead = 3,
	LibVerActReadChk = 4,
} eLibVerAction;
#endif

#ifndef __AS__TYPE_eHWInfoAction
#define __AS__TYPE_eHWInfoAction
typedef enum eHWInfoAction
{	HWInfoActIdle = 0,
	HWInfoActGetIPAddr = 1,
	HWInfoActGetSubnetMask = 2,
	HWInfoActGetMacAddr = 3,
	HWInfoActSetIPAddr = 4,
	HWInfoActSetSubnetMask = 5,
	HWInfoActGetEthConfigMode = 6,
	HWInfoActSetEthConfigMode = 7,
} eHWInfoAction;
#endif

#ifndef __AS__TYPE_eAlarmAction
#define __AS__TYPE_eAlarmAction
typedef enum eAlarmAction
{	AlarmActIdle = 0,
	AlarmActCreateDir = 1,
	AlarmActDeleteOldLog = 2,
	AlarmActReadHistory = 3,
	AlarmActWriteHistory = 4,
	AlarmActAppendLog = 5,
	AlarmActAppendLogWriteHistory = 6,
	AlarmActResetHistory = 7,
	AlarmActBGStartLog = 8,
	AlarmActBGStopLog = 9,
} eAlarmAction;
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

#ifndef __AS__TYPE_eMpProdRcpAction
#define __AS__TYPE_eMpProdRcpAction
typedef enum eMpProdRcpAction
{	MpProdRcpActIdle = 0,
	MpProdRcpActCreateDir = 1,
	MpProdRcpActLoad = 2,
	MpProdRcpActSave = 3,
} eMpProdRcpAction;
#endif

#ifndef __AS__TYPE_eMcParamAction
#define __AS__TYPE_eMcParamAction
typedef enum eMcParamAction
{	McParamActIdle = 0,
	McParamActCreateDir = 1,
	McParamActRead = 2,
	McParamActWrite = 3,
} eMcParamAction;
#endif

#ifndef __AS__TYPE_eNtParamAction
#define __AS__TYPE_eNtParamAction
typedef enum eNtParamAction
{	NtParamActIdle = 0,
	NtParamActCreateDir = 1,
	NtParamActRead = 2,
	NtParamActWrite = 3,
	NtParamActLoad = 4,
	NtParamActSave = 5,
} eNtParamAction;
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

#ifndef __AS__TYPE_eAWAction
#define __AS__TYPE_eAWAction
typedef enum eAWAction
{	AWActIdle = 0,
	AWActGoWidth = 1,
	AWActFullHm = 2,
	AWActPwrOn = 3,
	AWActPwrOff = 4,
	AWActHoming = 5,
	AWActMovAbs = 6,
	AWActMovRel = 7,
	AWActJogOpen = 8,
	AWActJogClose = 9,
	AWActJogStop = 10,
	AWActRstAxisErr = 11,
	AWActStop = 12,
	AWActSDOWrite = 13,
	AWActBGStartModOKChk = 14,
	AWActBGStopModOKChk = 15,
	AWActGoWidthOff = 16,
	AWActRstNode = 17,
} eAWAction;
#endif

#ifndef __AS__TYPE_eHermesAction
#define __AS__TYPE_eHermesAction
typedef enum eHermesAction
{	HermesActIdle = 0,
	HermesActBGStartRun = 1,
	HermesActBGStopRun = 2,
	HermesActDeleteOldLog = 3,
	HermesActCreateDir = 4,
	HermesActWriteRetain = 5,
	HermesActWriteRetainLane1 = 6,
	HermesActWriteRetainLane2 = 7,
	HermesActWriteRetainLane3 = 8,
	HermesActWriteRetainLane4 = 9,
	HermesActReadRetain = 10,
	HermesActReadRetainLane1 = 11,
	HermesActReadRetainLane2 = 12,
	HermesActReadRetainLane3 = 13,
	HermesActReadRetainLane4 = 14,
	HermesActWriteConfig = 15,
	HermesActReadConfig = 16,
} eHermesAction;
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

_BUR_LOCAL eStartupAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL eUsrFolderAction eUsrFolderAct;
_BUR_LOCAL eHWInfoAction eHWInfoAct;
_BUR_LOCAL eLibVerAction eLibVerAct;
_BUR_LOCAL eNtParamAction eNtParamAct;
_BUR_LOCAL eMcParamAction eMcParamAct;
_BUR_LOCAL eProdRcpAction eProdRcpAct;
_BUR_LOCAL eMpProdRcpAction eMpProdRcpAct;
_BUR_LOCAL eUsrMgmtAction eUsrMgmtAct;
_BUR_LOCAL eAlarmAction eAlarmAct;
_BUR_LOCAL eUIAction eUIAct;
_BUR_LOCAL eAWAction eAWAct;
_BUR_LOCAL eHermesAction eHermesAct;
_BUR_LOCAL eHermesAction eRmtHermesAct;
_BUR_LOCAL eHermesAction eUSHermesAct;
_BUR_LOCAL eHermesAction eDSHermesAct;
_BUR_LOCAL eStartupStep eStartupStep1;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bUISettingsLoadDone;
_BUR_LOCAL plcstring sStepTxt[81];
_BUR_LOCAL plcbit bGetConfigDone;
_BUR_LOCAL plcbit bMismatchSetConfigDone;
_GLOBAL unsigned long p_StartupStat;
_GLOBAL unsigned long p_StartupStatus;
_GLOBAL unsigned long p_StartupStatTxt;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupUsrFolderAct;
_GLOBAL unsigned long p_StartupHWInfoAct;
_GLOBAL unsigned long p_StartupLibVerAct;
_GLOBAL unsigned long p_StartupNtParamAct;
_GLOBAL unsigned long p_StartupMcParamAct;
_GLOBAL unsigned long p_StartupProdRcpAct;
_GLOBAL unsigned long p_StartupMpProdRcpAct;
_GLOBAL unsigned long p_StartupUsrMgmtAct;
_GLOBAL unsigned long p_StartupAlarmAct;
_GLOBAL unsigned long p_StartupUIAct;
_GLOBAL unsigned long p_StartupAWAct;
_GLOBAL unsigned long p_StartupHermesAct;
_GLOBAL unsigned long p_StartupRmtHermesAct;
_GLOBAL unsigned long p_StartupUSHermesAct;
_GLOBAL unsigned long p_StartupDSHermesAct;
_GLOBAL unsigned long p_StartupStep;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL unsigned long p_StartupUISettingsLoadDone;
_GLOBAL unsigned long p_StartupStepTxt;
_GLOBAL unsigned long p_StartupGetConfigDone;
_GLOBAL unsigned long p_StartupMismatchSetConfigDone;
