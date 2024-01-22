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
_GLOBAL unsigned long c_udiProdRcpMax;
