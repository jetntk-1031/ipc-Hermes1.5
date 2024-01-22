#ifndef __AS__TYPE_eNetworkConfigMod
#define __AS__TYPE_eNetworkConfigMod
typedef enum eNetworkConfigMod
{	SetIPManually = 0,
	IPFromDHCPServer = 1,
} eNetworkConfigMod;
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

#ifndef __AS__TYPE_tyAntiGapDly
#define __AS__TYPE_tyAntiGapDly
typedef struct tyAntiGapDly
{	signed long diSigOnTm;
	signed long diSigOffTm;
} tyAntiGapDly;
#endif

#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
#endif

#ifndef __AS__TYPE_eSMEMASelection
#define __AS__TYPE_eSMEMASelection
typedef enum eSMEMASelection
{	SMEMASelStandard = 0,
	SMEMASelIPC9851 = 1,
	SMEMASelIPC9851Ext = 2,
} eSMEMASelection;
#endif

#ifndef __AS__TYPE_tySMEMAParam
#define __AS__TYPE_tySMEMAParam
typedef struct tySMEMAParam
{	eSMEMASelection eSelection;
	plcbit bStatSigSetGd;
} tySMEMAParam;
#endif

#ifndef __AS__TYPE_tyMcParam
#define __AS__TYPE_tyMcParam
typedef struct tyMcParam
{	plcbit a_bLFOnline[50];
	plcstring a_sLFIPAddr[50][16];
	plcstring sMcNm[31];
	signed long diWidthAtHmPosInUM;
	plcstring sIPAddr[16];
	plcstring sSubnetMask[16];
	eNetworkConfigMod eNetworkMod;
	plcbit bSSaverEn;
	unsigned short uiSSaverTmInSec;
	signed long diConvInitTmInMS;
	signed long diTranInErrDlyTmInMS;
	signed long diTranOutErrDlyTmInMS;
	signed long diStopperAtLftPos;
	signed long diStopperAtRgtPos;
	unsigned char usiDefaultMcMod;
	unsigned char usiDefaultFlippedBrd;
	plcbit bAutoStepEn;
	plcbit bAWDis;
	plcbit bVSMEMAEn;
	plcbit bMnlAccDat;
	plcbit bChgParamEn;
	plcbit bHermesRmtEn;
	plcbit bHermesSvyEn;
	plcbit bClampDis;
	plcbit bStopperDis;
	plcbit bInShutterDis;
	plcbit bOutShutterDis;
	unsigned char usiLang;
	plcbit bLFEn;
	plcbit bLCSLFEn;
	plcbit bLCSReqRcpEn;
	plcbit bLCSManageRcpEn;
	plcbit bLCSLiveDatEn;
	plcbit bSectionLeader;
	plcbit bUSWidthChkEn;
	plcbit bDSWidthChkEn;
	tyAntiGapDly tyConvLftSenAntiGapDly;
	tyAntiGapDly tyConvRgtSenAntiGapDly;
	eMcSetCommMod eUSComm;
	tySMEMAParam tyUSCommSMEMA;
	eMcSetCommMod eDSComm;
	tySMEMAParam tyDSCommSMEMA;
	eMcSetCommMod eUSComm2;
	tySMEMAParam tyUSCommSMEMA2;
	eMcSetCommMod eDSComm2;
	tySMEMAParam tyDSCommSMEMA2;
	plcbit bLFLeaderMc;
	signed long diLFMcIdxBeforeOven;
	signed long diLFMcIdxAfterOven;
	signed long diLFMcIdxBeforeOven2;
	signed long diLFMcIdxAfterOven2;
	signed long diWidthOffsetInUM;
	plcbit bAutoLogoutEn;
	signed long diAutoLogoutTmInSec;
	plcbit bLFSeqStayActive;
	plcbit bLFBuzMute;
	plcbit bDBAOnWOAlign;
} tyMcParam;
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

_BUR_LOCAL plcstring sWidthInUMTemp[81];
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamUSCommMod);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL struct tyMcParam(* p_bLinkMcParam);
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
_GLOBAL signed long c_diLFClntNum;
