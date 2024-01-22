#ifndef __AS__TYPE_
#define __AS__TYPE_
static signed long __AS__STRING_CMP(char* pstr1, char* pstr2);
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

#ifndef __AS__TYPE_eLCSAction
#define __AS__TYPE_eLCSAction
typedef enum eLCSAction
{	LCSActIdle = 0,
	LCSActAddProd = 1,
	LCSActAddMultiProd = 2,
	LCSActEditProd = 3,
	LCSActEditMultiProd = 4,
	LCSActOverWriteProd = 5,
	LCSActOverWriteMultiProd = 6,
	LCSActDelProd = 7,
	LCSActDelMultiProd = 8,
	LCSActRunProd = 9,
	LCSActUploadProd = 10,
	LCSActUploadMultiProd = 11,
} eLCSAction;
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

#ifndef __AS__TYPE_tyAlmTxt
#define __AS__TYPE_tyAlmTxt
typedef struct tyAlmTxt
{	plcstring sAlmText[201];
	plcstring sRcyText[201];
} tyAlmTxt;
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

_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eLCSAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcbit(* p_bProdRcpNmExist);
_BUR_LOCAL plcbit(* p_bProdRcpNmNotExist);
_BUR_LOCAL plcbit(* p_bProdRcpNmEmpty);
_BUR_LOCAL plcbit(* p_bProdRcpListFull);
_BUR_LOCAL struct tyProdRcpParam(* pa_tyProdRcpCurrList)[2000];
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpInfoOut);
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrRcp);
_BUR_LOCAL eProdRcpAction(* p_eProdRcpStat);
_BUR_LOCAL eFBStatus(* p_eProdRcpStatus);
_BUR_LOCAL plcstring(* p_sMcParamProdSelRcpNm)[16];
_BUR_LOCAL signed long(* p_diMcParamProdSelWidth);
_BUR_LOCAL signed short(* p_iLCSIdxAct);
_BUR_LOCAL signed short(* p_iLCSIdxStat);
_BUR_LOCAL struct tyProdRcpParam(* p_tyLCSProdRcpInfo);
_BUR_LOCAL plcbit(* p_bChkLmtOK);
_BUR_LOCAL plcbit(* p_bChkLmtNG);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eLCSAction eAct;
_BUR_LOCAL eLCSAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL unsigned long udiPLCStatus;
_BUR_LOCAL signed short iPLCIdxAct;
_BUR_LOCAL signed short iPLCIdxStat;
_BUR_LOCAL tyProdRcpParam tyPLCProdRcpInfo;
_BUR_LOCAL eProdRcpAction eProdRcpAct;
_BUR_LOCAL tyProdRcpParam tyProdRcpInfoIn;
_BUR_LOCAL plcbit bChkLmt;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bProdRcpNmExist;
_BUR_LOCAL plcbit bProdRcpNmNotExist;
_BUR_LOCAL plcbit bProdRcpNmEmpty;
_BUR_LOCAL plcbit bProdRcpListFull;
_BUR_LOCAL struct tyProdRcpParam a_tyProdRcpCurrList[2000];
_BUR_LOCAL tyProdRcpParam tyProdRcpInfoOut;
_BUR_LOCAL tyProdRcpParam tyProdRcpCurrRcp;
_BUR_LOCAL eProdRcpAction eProdRcpStat;
_BUR_LOCAL eFBStatus eProdRcpStatus;
_BUR_LOCAL plcstring sMcParamProdSelRcpNm[16];
_BUR_LOCAL signed long diMcParamProdSelWidth;
_BUR_LOCAL signed short iLCSIdxAct;
_BUR_LOCAL signed short iLCSIdxStat;
_BUR_LOCAL tyProdRcpParam tyLCSProdRcpInfo;
_BUR_LOCAL plcbit bChkLmtOK;
_BUR_LOCAL plcbit bChkLmtNG;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL plcstring g_sLCSMngRcpProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long c_udiProdRcpMax;
_GLOBAL unsigned long p_ProdRcpStat;
_GLOBAL unsigned long p_ProdRcpStatus;
_GLOBAL unsigned long p_ProdRcpNmExist;
_GLOBAL unsigned long p_ProdRcpNmNotExist;
_GLOBAL unsigned long p_ProdRcpNmEmpty;
_GLOBAL unsigned long p_ProdRcpListFull;
_GLOBAL unsigned long p_ProdRcpCurrList;
_GLOBAL unsigned long p_ProdRcpInfoOut;
_GLOBAL unsigned long p_ProdRcpCurrRcp0;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Width;
_GLOBAL unsigned long p_McParamLCSManageRcpEn;
_GLOBAL unsigned long p_NtParamLCSManageRcpPrep;
_GLOBAL unsigned long p_NtParamLCSMngRcpProgNm;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSAct;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSIdxAct;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSIdxStat;
_GLOBAL unsigned long p_LCS_LCSMngRcp_LCSProdRcpInfo;
_GLOBAL unsigned long p_LCSChkLmtOK;
_GLOBAL unsigned long p_LCSChkLmtNG;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_LinkEn(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Main_Disable(void);
static void __AS__Action__Act_Alarm(void);
