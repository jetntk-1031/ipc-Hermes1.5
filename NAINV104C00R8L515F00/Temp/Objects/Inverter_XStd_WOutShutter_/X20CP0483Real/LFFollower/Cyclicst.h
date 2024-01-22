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

#ifndef __AS__TYPE_eTimeAction
#define __AS__TYPE_eTimeAction
typedef enum eTimeAction
{	TimeActIdle = 0,
	TimeActGetTime = 1,
	TimeActGetTimeZone = 2,
	TimeActSetTime = 3,
	TimeActSetTimeZone = 4,
} eTimeAction;
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

#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
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

#ifndef __AS__TYPE_eMachineStat
#define __AS__TYPE_eMachineStat
typedef enum eMachineStat
{	Run = 0,
	Stop = 1,
	Manual = 2,
	Warning = 3,
	InError = 4,
} eMachineStat;
#endif

#ifndef __AS__TYPE_tyLFLeaderToFollowerTag
#define __AS__TYPE_tyLFLeaderToFollowerTag
typedef struct tyLFLeaderToFollowerTag
{	plcstring sReqProdRcpNm[255];
	signed long diReqProdRcpWidth;
	plcstring sReqMagRcpNm[31];
	plcbit bMnlAccData;
	plcbit bBypassMnlAccData;
	plcbit bBlkDS;
	plcbit bBlkUS;
	plcbit bBypassWidthChk;
	plcbit bSetTm;
	plcdt dtTm;
	unsigned short uiTmZone;
	unsigned char usiRunTm;
	plcbit bProdNameUSWarn;
	plcbit bProdNameDSWarn;
	plcbit bProdWidthUSWarn;
	plcbit bProdWidthDSWarn;
	plcbit bLeaderSeqCtrlInActive;
} tyLFLeaderToFollowerTag;
#endif

#ifndef __AS__TYPE_tyLFFollowerToLeaderTag
#define __AS__TYPE_tyLFFollowerToLeaderTag
typedef struct tyLFFollowerToLeaderTag
{	plcstring sCurrProdRcp[255];
	signed long diCurrProdWidthUS;
	signed long diCurrProdWidthDS;
	plcstring sCurrMagRcp[31];
	plcstring sIPAddr[16];
	plcstring sMcNm[31];
	plcbit bSectionLeader;
	unsigned char usiRunTm;
	plcbit bProdRcpErr;
	plcbit bProdWidthErr;
	plcbit bMagRcpErr;
	plcbit bSyncTmErr;
	eMachineStat eCurrMachineStat;
	plcbit bProdChgOverActive;
} tyLFFollowerToLeaderTag;
#endif

#ifndef __AS__TYPE_tyLFLeaderInfo
#define __AS__TYPE_tyLFLeaderInfo
typedef struct tyLFLeaderInfo
{	plcbit bOnline;
	unsigned char usiRunTmOld;
} tyLFLeaderInfo;
#endif

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
#ifndef __AS__TYPE_tyLFFollowerInternal
#define __AS__TYPE_tyLFFollowerInternal
typedef struct tyLFFollowerInternal
{	struct TON fbDlyTm;
	plcbit bWidthTooSmall;
	plcbit bProdWidthErr;
} tyLFFollowerInternal;
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
struct fbLFFollower
{	tyLFLeaderToFollowerTag tyLeaderToFollowerTag;
	plcstring sMcNm[31];
	plcstring sIPAddr[16];
	plcstring sCurrProdRcpNm[255];
	signed long diCurrProdWidthUS;
	signed long diCurrProdWidthDS;
	plcstring sCurrMagRcpNm[31];
	plcstring sUpdtLeaderProdRcpNm[255];
	signed long diUpdtLeaderProdWidthUS;
	signed long diUpdtLeaderProdWidthDS;
	plcstring sUpdtLeaderMagRcpNm[31];
	signed long diWidthLimit;
	eMachineStat eCurrMachineStat;
	tyLFFollowerToLeaderTag tyFollowerToLeaderTag;
	unsigned long udiStatus;
	tyLFFollowerInternal tyInternal;
	plcbit bEn;
	plcbit bSectionLeader;
	plcbit bMnlAccDat;
	plcbit bAWEn;
	plcbit bUSWidthChkEn;
	plcbit bUSWidthChkSen;
	plcbit bDSWidthChkEn;
	plcbit bDSWidthChkSen;
	plcbit bProdWidthChk;
	plcbit bProdRcpErr;
	plcbit bMagRcpErr;
	plcbit bSetTmErr;
	plcbit bProdChgOverActive;
	plcbit bDBAOnWOAlign;
	plcbit bProdAccDataReq;
	plcbit bMagAccDataReq;
	plcbit bAutoAccData;
	plcbit bUSAllow;
	plcbit bDSAllow;
};
_BUR_PUBLIC void fbLFFollower(struct fbLFFollower* inst);
struct fbLFFollowerOnlineChk
{	struct tyLFLeaderInfo(* p_tyLeaderInfo);
	tyLFLeaderToFollowerTag tyLeaderToFollowerTag;
	plctime tDlyTm;
	unsigned long udiStatus;
	tyLFFollowerInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbLFFollowerOnlineChk(struct fbLFFollowerOnlineChk* inst);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamUSCommMod);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL plcbit(* p_bLinkConvHvBrd);
_BUR_LOCAL plcstring sWidthInUMTemp[81];
_BUR_LOCAL plcbit(* p_bLinkUSWidthChkSen);
_BUR_LOCAL plcbit(* p_bLinkUSWidthChkSen1);
_BUR_LOCAL plcbit(* p_bLinkDIInvertHomeSen);
_BUR_LOCAL plcbit(* p_bLinkDIInvertRemoteSen);
_BUR_LOCAL eProdRcpAction(* p_eLinkUIProdRcpAct);
_BUR_LOCAL eProdRcpAction(* p_eProdRcpStat);
_BUR_LOCAL eFBStatus(* p_eProdRcpStatus);
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrRcpWr);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL eAWAction(* p_eAWStat);
_BUR_LOCAL plcstring(* p_sIPAddr)[16];
_BUR_LOCAL plcstring(* p_sMcNm)[31];
_BUR_LOCAL plcbit(* p_bAWPrep);
_BUR_LOCAL plcbit(* p_bAWDis);
_BUR_LOCAL plcbit(* p_bMnlAccData);
_BUR_LOCAL plcbit(* p_bSectionLeader);
_BUR_LOCAL plcstring(* p_sMagRcpNm)[31];
_BUR_LOCAL signed long(* p_diWidthLimit);
_BUR_LOCAL plcbit(* p_bWidth2Prep);
_BUR_LOCAL plcbit(* p_bUSWidthChkPrep);
_BUR_LOCAL plcbit(* p_bUSWidthChkEn);
_BUR_LOCAL plcbit(* p_bUSWidthChkSen);
_BUR_LOCAL plcbit(* p_bDSWidthChkPrep);
_BUR_LOCAL plcbit(* p_bDSWidthChkEn);
_BUR_LOCAL plcbit(* p_bDSWidthChkSen);
_BUR_LOCAL plcbit(* p_bProdWidthChk);
_BUR_LOCAL plcbit(* p_bUIProdAccData);
_BUR_LOCAL plcbit(* p_bUIProdUpdtData);
_BUR_LOCAL plcbit(* p_bUIMagAccData);
_BUR_LOCAL plcbit(* p_bDBAOnWOAlign);
_BUR_LOCAL struct tyProdRcpParam(* pa_tyProdRcpList)[2000];
_BUR_LOCAL struct tyProdRcpParam(* p_tyCurrProdRcp);
_BUR_LOCAL struct tyProdRcpParam(* p_tyDispProdRcp);
_BUR_LOCAL plcstring(* p_sCurrMagRcpNm)[31];
_BUR_LOCAL eTimeAction(* p_eTimeStat);
_BUR_LOCAL eFBStatus(* p_eTimeStatus);
_BUR_LOCAL plcbit(* p_bAccNewRcpCond);
_BUR_LOCAL plcbit(* p_bUpdtNewRcpCond);
_BUR_LOCAL plcbit(* p_bAutoUpdtData);
_BUR_LOCAL plcstring(* p_sInfoMsg)[201];
_BUR_LOCAL plcbit(* p_bInternalUse);
_BUR_LOCAL struct tyProdRcpParam(* p_tyInternalReqProdRcp);
_BUR_LOCAL plcbit(* p_bNewBrdEnteredCond);
_BUR_LOCAL plcbit(* p_bOldBrdExitedCond);
_BUR_LOCAL plcbit(* p_bRlsBrd);
_BUR_LOCAL struct tyProdRcpParam(* p_tyToLeaderProdRcp);
_BUR_LOCAL plcbit(* p_bInternalReqProdRcpDiff);
_BUR_LOCAL plcbit(* p_bUpdtProdRcpDiff);
_BUR_LOCAL plcbit(* p_bRlsBrdProdRcpDiff);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plctime(* p_tOnlineChkDlyTm);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL plcbit(* p_bErr);
_BUR_LOCAL plcbit(* p_bWarning);
_BUR_LOCAL plcbit(* p_bOps);
_BUR_LOCAL plcbit(* p_bStandby);
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyInfoData;
_BUR_LOCAL tyAlmDat tyInfoData1;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcbit bUSAllow;
_BUR_LOCAL plcbit bDSAllow;
_BUR_LOCAL plcbit bLeaderSeqCtrlInActive;
_BUR_LOCAL plcbit bProdAccDataMnl;
_BUR_LOCAL plcbit bProdUpdtDataMnl;
_BUR_LOCAL plcbit bMagAccDataMnl;
_BUR_LOCAL eTimeAction eTimeAct;
_BUR_LOCAL plcbit bWaitRlsBrd;
_BUR_LOCAL tyLFLeaderInfo tyLeaderInfo;
_BUR_LOCAL tyProdRcpParam tyUpdtProdRcp;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL plcstring sMcNm[31];
_BUR_LOCAL plcbit bAWPrep;
_BUR_LOCAL plcbit bAWDis;
_BUR_LOCAL plcbit bMnlAccData;
_BUR_LOCAL plcbit bSectionLeader;
_BUR_LOCAL plcstring sMagRcpNm[31];
_BUR_LOCAL signed long diWidthLimit;
_BUR_LOCAL plcbit bWidth2Prep;
_BUR_LOCAL plcbit bUSWidthChkPrep;
_BUR_LOCAL plcbit bUSWidthChkEn;
_BUR_LOCAL plcbit bUSWidthChkSen;
_BUR_LOCAL plcbit bDSWidthChkPrep;
_BUR_LOCAL plcbit bDSWidthChkEn;
_BUR_LOCAL plcbit bDSWidthChkSen;
_BUR_LOCAL plcbit bProdWidthChk;
_BUR_LOCAL plcbit bUIProdAccData;
_BUR_LOCAL plcbit bUIProdUpdtData;
_BUR_LOCAL plcbit bUIMagAccData;
_BUR_LOCAL struct tyProdRcpParam a_tyProdRcpList[2000];
_BUR_LOCAL tyProdRcpParam tyDispProdRcp;
_BUR_LOCAL tyProdRcpParam tyCurrProdRcp;
_BUR_LOCAL plcstring sCurrMagRcpNm[31];
_BUR_LOCAL eTimeAction eTimeStat;
_BUR_LOCAL eFBStatus eTimeStatus;
_BUR_LOCAL plcbit bAccNewRcpCond;
_BUR_LOCAL plcbit bUpdtNewRcpCond;
_BUR_LOCAL plcbit bAutoUpdtData;
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcbit bInternalUse;
_BUR_LOCAL tyProdRcpParam tyInternalReqProdRcp;
_BUR_LOCAL plcbit bNewBrdEnteredCond;
_BUR_LOCAL plcbit bOldBrdExitedCond;
_BUR_LOCAL plcbit bRlsBrd;
_BUR_LOCAL tyProdRcpParam tyToLeaderProdRcp;
_BUR_LOCAL plcbit bInternalReqProdRcpDiff;
_BUR_LOCAL plcbit bUpdtProdRcpDiff;
_BUR_LOCAL plcbit bRlsBrdProdRcpDiff;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plctime tOnlineChkDlyTm;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bErr;
_BUR_LOCAL plcbit bWarning;
_BUR_LOCAL plcbit bOps;
_BUR_LOCAL plcbit bStandby;
_BUR_LOCAL eAWAction eAWStat;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bAutoAccData;
_BUR_LOCAL plcbit bProdRcpErr;
_BUR_LOCAL plcbit bMagRcpErr;
_BUR_LOCAL plcbit bSetTmErr;
_BUR_LOCAL plcbit bProdAccDataReq;
_BUR_LOCAL plcstring sReqProdRcpNm[255];
_BUR_LOCAL signed long diReqProdRcpWidth;
_BUR_LOCAL plcbit bMagAccDataReq;
_BUR_LOCAL unsigned char usiProdAccDatStep;
_BUR_LOCAL unsigned char usiMagAccDatStep;
_BUR_LOCAL unsigned char usiProdUpdtDatStep;
_BUR_LOCAL tyProdRcpParam tyRlsBrdProdRcpNm;
_BUR_LOCAL plcbit bNewBrdEntered;
_BUR_LOCAL plcbit bOldBrdExited;
_BUR_LOCAL signed short i;
_BUR_LOCAL plcbit bSetTm;
_BUR_LOCAL struct fbLFFollowerOnlineChk fbOnlineChk;
_BUR_LOCAL struct fbLFFollower fbFollower;
_BUR_LOCAL tyLFLeaderToFollowerTag tyLeaderToFollowerTag;
_BUR_LOCAL tyLFFollowerToLeaderTag tyFollowerToLeaderTag;
_BUR_LOCAL eMachineStat eCurrMachineStat;
_BUR_LOCAL plcbit bLeaderOnline;
_BUR_LOCAL plcbit bLeaderInfo;
_BUR_LOCAL plcbit bFollowerInfo;
_BUR_LOCAL plcbit bProdRcpErrNotExist;
_BUR_LOCAL plcbit bProdRcpErrWidthMismatch;
_BUR_LOCAL plcbit bDBAOnWOAlign;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_UIProdRcpAct;
_GLOBAL unsigned long p_UIProdRcpCurrRcpWr;
_GLOBAL unsigned long p_UIUIMnlMod;
_GLOBAL unsigned long p_UIProdAccData;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL unsigned long p_TimeStat;
_GLOBAL unsigned long p_TimeStatus;
_GLOBAL unsigned long p_HWInfoIPAddr;
_GLOBAL unsigned long p_AlarmErr;
_GLOBAL unsigned long p_AlarmWarning;
_GLOBAL plcstring g_sLFFollowerProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long c_udiProdRcpMax;
_GLOBAL unsigned long p_ProdRcpStat;
_GLOBAL unsigned long p_ProdRcpStatus;
_GLOBAL unsigned long p_ProdRcpCurrList;
_GLOBAL unsigned long p_ProdRcpCurrRcp0;
_GLOBAL unsigned long p_ProdRcpCurrRcp1;
_GLOBAL unsigned long p_McParamMcNm;
_GLOBAL unsigned long p_McParamAWDis;
_GLOBAL unsigned long p_McParamMnlAccDat;
_GLOBAL unsigned long p_McParamLFEn;
_GLOBAL unsigned long p_McParamSectionLeader;
_GLOBAL unsigned long p_McParamUSWidthChkEn;
_GLOBAL unsigned long p_McParamDSWidthChkEn;
_GLOBAL unsigned long p_McParamUSCommMod;
_GLOBAL unsigned long p_McParamDBAOnWOAlign;
_GLOBAL unsigned long p_NtParamAWPrep;
_GLOBAL unsigned long p_NtParamLFPrep;
_GLOBAL unsigned long p_NtParamLFWidthLimit;
_GLOBAL unsigned long p_NtParamLFProdWidthChk;
_GLOBAL unsigned long p_NtParamUSWidthChkPrep;
_GLOBAL unsigned long p_NtParamDSWidthChkPrep;
_GLOBAL unsigned long p_NtParamLFFollowerProgNm;
_GLOBAL unsigned long p_NtParamLFWidth2Prep;
_GLOBAL unsigned long p_NtParamLFFllowerOnlineChkDlyTm;
_GLOBAL unsigned long p_AWOpenStat;
_GLOBAL unsigned long p_DIUSWidthChkSen;
_GLOBAL unsigned long p_DIUSWidthChkSen1;
_GLOBAL unsigned long p_DIDSWidthChkSen;
_GLOBAL unsigned long p_DIInvertHomeSen;
_GLOBAL unsigned long p_DIInvertRemoteSen;
_GLOBAL unsigned long p_Follower1UpdtProdRcp;
_GLOBAL unsigned long p_OpsStatusRun;
_GLOBAL unsigned long p_OpsStatusStop;
_GLOBAL unsigned long p_OpsRun;
_GLOBAL unsigned long p_OpsInvertHvBrd;
_LOCAL plcbit Edge0000200000;
_LOCAL plcbit Edge0000100000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkEn(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Background_ChkRlsBrd(void);
static void __AS__Action__Act_Background_UpdtData(void);
static void __AS__Action__Act_Background_AccData(void);
static void __AS__Action__Act_Main_Disable(void);
static void __AS__Action__Act_Alarm(void);
