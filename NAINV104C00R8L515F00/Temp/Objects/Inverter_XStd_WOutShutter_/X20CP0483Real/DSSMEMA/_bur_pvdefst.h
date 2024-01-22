#ifndef __AS__TYPE_eSMEMAAction
#define __AS__TYPE_eSMEMAAction
typedef enum eSMEMAAction
{	SMEMAActIdle = 0,
	SMEMAActRun = 1,
	SMEMAActSetSig = 2,
	SMEMAActSetStatSig = 3,
	SMEMAActRstSig = 4,
	SMEMAActRstStatSig = 5,
	SMEMAActSetAllSig = 6,
	SMEMAActRstAllSig = 7,
} eSMEMAAction;
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

#ifndef __AS__TYPE_eConvDir
#define __AS__TYPE_eConvDir
typedef enum eConvDir
{	ConvDirLToR = 0,
	ConvDirRToL = 1,
	ConvDirLToL = 2,
	ConvDirRToR = 3,
} eConvDir;
#endif

#ifndef __AS__TYPE_eSMEMAStat
#define __AS__TYPE_eSMEMAStat
typedef enum eSMEMAStat
{	SMEMAStatOppNotRdyNCurrNotRdy = 0,
	SMEMAStatOppRdyNCurrNotRdy = 1,
	SMEMAStatOppNotRdyNCurrRdy = 2,
	SMEMAStatOppRdyNCurrRdy = 3,
	SMEMAStatTransportStart = 4,
	SMEMAStatTransportIdle = 5,
	SMEMAStatTransporting = 6,
	SMEMAStatOppTransportFinished = 7,
	SMEMAStatCurrTransportFinished = 8,
	SMEMAStatTransportDone = 9,
} eSMEMAStat;
#endif

#ifndef __AS__TYPE_tySMEMABrdSeqInternal
#define __AS__TYPE_tySMEMABrdSeqInternal
typedef struct tySMEMABrdSeqInternal
{	eSMEMAStat eStat;
} tySMEMABrdSeqInternal;
#endif

struct fbSMEMABrdSeq
{	unsigned long udiStatus;
	tySMEMABrdSeqInternal tyInternal;
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bCurrRdy;
	plcbit bSigToOppOn;
};
_BUR_PUBLIC void fbSMEMABrdSeq(struct fbSMEMABrdSeq* inst);
struct fbSMEMABrdSeq_OppFirst
{	unsigned long udiStatus;
	tySMEMABrdSeqInternal tyInternal;
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bCurrRdy;
	plcbit bSigToOppOn;
};
_BUR_PUBLIC void fbSMEMABrdSeq_OppFirst(struct fbSMEMABrdSeq_OppFirst* inst);
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
#ifndef __AS__TYPE_tySMEMATransportingInternal
#define __AS__TYPE_tySMEMATransportingInternal
typedef struct tySMEMATransportingInternal
{	eSMEMAStat eStat;
	struct TON fbTO;
	struct TON fbRstDlyTm;
} tySMEMATransportingInternal;
#endif

struct fbSMEMATransporting1
{	plctime tTimeOut;
	plctime tRstDlyTm;
	unsigned long udiStatus;
	tySMEMATransportingInternal tyInternal;
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bComplSigOn;
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToOppOff;
};
_BUR_PUBLIC void fbSMEMATransporting1(struct fbSMEMATransporting1* inst);
#ifndef __AS__TYPE_tySMEMADSInternal
#define __AS__TYPE_tySMEMADSInternal
typedef struct tySMEMADSInternal
{	unsigned char usiStep;
	struct fbSMEMABrdSeq fbSMEMABrdSeq;
	struct fbSMEMABrdSeq_OppFirst fbSMEMABrdSeq_OppFirst;
	struct fbSMEMATransporting1 fbSMEMATransporting1;
} tySMEMADSInternal;
#endif

#ifndef __AS__TYPE_tySMEMASigInChkInternal
#define __AS__TYPE_tySMEMASigInChkInternal
typedef struct tySMEMASigInChkInternal
{	plcbit bSigInValid;
	plcbit bNomSigOld;
	plcbit bStatSigOld;
	struct TON fbSigInChkTm;
} tySMEMASigInChkInternal;
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

struct R_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void R_TRIG(struct R_TRIG* inst);
struct fbSMEMADS
{	plctime tTimeOut;
	plctime tRstDlyTm;
	unsigned long udiStatus;
	tySMEMADSInternal tyInternal;
	plcbit bEn;
	plcbit bDSRdy;
	plcbit bRdySend;
	plcbit bComplSigOn;
	plcbit bTransporting;
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToDS;
};
_BUR_PUBLIC void fbSMEMADS(struct fbSMEMADS* inst);
struct fbSMEMADS_OppFirst
{	plctime tTimeOut;
	plctime tRstDlyTm;
	unsigned long udiStatus;
	tySMEMADSInternal tyInternal;
	plcbit bEn;
	plcbit bDSRdy;
	plcbit bRdySend;
	plcbit bComplSigOn;
	plcbit bTransporting;
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToDS;
};
_BUR_PUBLIC void fbSMEMADS_OppFirst(struct fbSMEMADS_OppFirst* inst);
struct fbSMEMASigInChk
{	plctime tSigInChkTm;
	tySMEMASigInChkInternal tyInternal;
	plcbit bNomSig;
	plcbit bStatSig;
	plcbit bStatSigSetGd;
	plcbit bGdBrd;
	plcbit bSigInValid;
};
_BUR_PUBLIC void fbSMEMASigInChk(struct fbSMEMASigInChk* inst);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL eConvDir(* p_eLinkConvDir);
_BUR_LOCAL plcbit(* p_bLinkNtParamDSWidthChkPrep);
_BUR_LOCAL plcbit(* p_bLinkMcParamDSWidthChkEn);
_BUR_LOCAL plcbit(* p_bLinkDIDSWidthChkSen);
_BUR_LOCAL unsigned char(* p_usiLinkMcMod);
_BUR_LOCAL eSMEMAAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL struct tySMEMAParam(* p_tyParam);
_BUR_LOCAL plcbit(* p_bGdBrd);
_BUR_LOCAL signed long(* p_diTransferOutTO);
_BUR_LOCAL plcbit(* p_bDirLToR);
_BUR_LOCAL plcbit(* p_bRdySend);
_BUR_LOCAL plcbit(* p_bLeftSen);
_BUR_LOCAL plcbit(* p_bRightSen);
_BUR_LOCAL plcbit(* p_bComplSigOn);
_BUR_LOCAL plcbit(* p_bDSB);
_BUR_LOCAL plcbit(* p_bTimerEnSen);
_BUR_LOCAL plcbit(* p_bTimerEnSenEdge);
_BUR_LOCAL plcbit(* p_bVirtualEn);
_BUR_LOCAL plcbit(* p_bDSBVirtual);
_BUR_LOCAL plctime(* p_tRstDlyTm);
_BUR_LOCAL plctime(* p_tSigInChkTm);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eSMEMAAction eAct;
_BUR_LOCAL eSMEMAAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcbit bUSRdy;
_BUR_LOCAL plcbit bUSGdBrdRdy;
_BUR_LOCAL plcbit bDSRdy;
_BUR_LOCAL plcbit bTransporting;
_BUR_LOCAL plcbit bConvStart;
_BUR_LOCAL plcbit bConvStop;
_BUR_LOCAL plcbit bDBA;
_BUR_LOCAL plcbit bDBAStat;
_BUR_LOCAL plcbit bTimer;
_BUR_LOCAL plcbit bVirtual;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL tySMEMAParam tyParam;
_BUR_LOCAL plcbit bGdBrd;
_BUR_LOCAL signed long diTransferOutTO;
_BUR_LOCAL plcbit bDirLToR;
_BUR_LOCAL plcbit bRdySend;
_BUR_LOCAL plcbit bLeftSen;
_BUR_LOCAL plcbit bRightSen;
_BUR_LOCAL plcbit bComplSigOn;
_BUR_LOCAL plcbit bDSB;
_BUR_LOCAL plcbit bTimerEnSen;
_BUR_LOCAL plcbit bTimerEnSenEdge;
_BUR_LOCAL plcbit bVirtualEn;
_BUR_LOCAL plcbit bDSBVirtual;
_BUR_LOCAL plctime tRstDlyTm;
_BUR_LOCAL plctime tSigInChkTm;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL struct TON fbTimerDlyTm;
_BUR_LOCAL struct R_TRIG fbTimeTrig;
_BUR_LOCAL struct fbSMEMADS_OppFirst fbSMEMA_OppFirst;
_BUR_LOCAL struct fbSMEMADS fbSMEMA;
_BUR_LOCAL struct fbSMEMASigInChk fbSigInChk;
_BUR_LOCAL eSMEMAAction eStatOld;
_BUR_LOCAL unsigned long udiModuleNum;
