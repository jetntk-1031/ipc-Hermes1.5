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

#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
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

_BUR_PUBLIC plcstring* CONCAT(plcstring IN1[32768], plcstring IN2[32768]);
_BUR_PUBLIC plcstring* dint2str(signed long IN, plcstring pStr[81], unsigned long len);
_BUR_LOCAL plcstring sWidthInUMTemp[81];
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamUSCommMod);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL plcbit(* p_bLinkConvHvBrd);
_BUR_LOCAL eLCSAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL struct tyProdRcpParam(* p_tyCurrProdParam);
_BUR_LOCAL plcbit(* p_bMnlAccData);
_BUR_LOCAL plcbit(* p_bAccData);
_BUR_LOCAL struct tyProdRcpParam(* p_tyLCSProdRcpInfo);
_BUR_LOCAL plcbit(* p_bChkLmtOK);
_BUR_LOCAL plcbit(* p_bChkLmtNG);
_BUR_LOCAL plcbit(* p_bAccNewRcpCond);
_BUR_LOCAL plcbit(* p_bUpdtNewRcpCond);
_BUR_LOCAL plcbit(* p_bAutoUpdtData);
_BUR_LOCAL plcbit(* p_bUIUpdtData);
_BUR_LOCAL plcstring(* p_sInfoMsg)[201];
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bUIBtnSectionLdr);
_BUR_LOCAL plcbit(* p_bLCSSectionLeaderEn);
_BUR_LOCAL plcbit(* p_bMcParamSectionLdr);
_BUR_LOCAL eLCSAction eAct;
_BUR_LOCAL eLCSAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyInfoData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL unsigned long udiPLCStatus;
_BUR_LOCAL plcbit bChkLmt;
_BUR_LOCAL plcbit bAccDataMnl;
_BUR_LOCAL plcbit bUpdtDataMnl;
_BUR_LOCAL plcstring sUpdtProdRcpNm[31];
_BUR_LOCAL signed long diUpdtProdWidth;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL tyProdRcpParam tyCurrProdParam;
_BUR_LOCAL plcbit bMnlAccData;
_BUR_LOCAL plcbit bAccData;
_BUR_LOCAL tyProdRcpParam tyLCSProdRcpInfo;
_BUR_LOCAL plcbit bChkLmtOK;
_BUR_LOCAL plcbit bChkLmtNG;
_BUR_LOCAL plcbit bAccNewRcpCond;
_BUR_LOCAL plcbit bUpdtNewRcpCond;
_BUR_LOCAL plcbit bAutoUpdtData;
_BUR_LOCAL plcbit bUIUpdtData;
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL unsigned char usiProdUpdtDatStep;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_UIProdAccData;
_GLOBAL unsigned long P_UISectionLdr;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL plcstring g_sLCSLFProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_ProdRcpCurrRcp0;
_GLOBAL unsigned long p_McParamMnlAccDat;
_GLOBAL unsigned long p_McParamLCSLFEn;
_GLOBAL unsigned long p_McParamSectionLeader;
_GLOBAL unsigned long p_McParamUSCommMod;
_GLOBAL unsigned long p_NtParamLCSLFPrep;
_GLOBAL unsigned long p_NtParamLCSLFProgNm;
_GLOBAL unsigned long p_LCS_LCSLF_LCSAct;
_GLOBAL unsigned long p_LCS_LCSLF_LCSProdRcpInfo;
_GLOBAL unsigned long p_LCSChkLmtOK;
_GLOBAL unsigned long p_LCSChkLmtNG;
_GLOBAL unsigned long p_LCSSectionLeaderEn;
_GLOBAL unsigned long p_OpsRun;
_GLOBAL unsigned long p_OpsInvertHvBrd;
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
