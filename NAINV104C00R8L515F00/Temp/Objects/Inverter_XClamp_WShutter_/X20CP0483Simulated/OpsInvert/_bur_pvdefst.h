#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
#endif

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

#ifndef __AS__TYPE_ePneuAction
#define __AS__TYPE_ePneuAction
typedef enum ePneuAction
{	PneuActIdle = 0,
	PneuActSetAll = 1,
	PneuActRstAll = 2,
	PneuActSetExt = 3,
	PneuActSetRet = 4,
	PneuActExt = 5,
	PneuActRet = 6,
	PneuActExtSenToMidSen = 7,
	PneuActMidSenToRetSen = 8,
	PneuActRetSenToMidSen = 9,
	PneuActMidSenToExtSen = 10,
} ePneuAction;
#endif

#ifndef __AS__TYPE_eClampType
#define __AS__TYPE_eClampType
typedef enum eClampType
{	ClampNoRS = 0,
	ThreeClampsWithRS = 1,
} eClampType;
#endif

#ifndef __AS__TYPE_eConvAction
#define __AS__TYPE_eConvAction
typedef enum eConvAction
{	ConvActIdle = 0,
	ConvActInit = 1,
	ConvActInitRev = 2,
	ConvActInitPshr = 3,
	ConvActInitPuller = 4,
	ConvActInitRej = 5,
	ConvActInitInsp = 6,
	ConvActEnt = 7,
	ConvActEntToInOff = 8,
	ConvActEntRev = 9,
	ConvActRev = 10,
	ConvActRevImmedStart = 11,
	ConvActEntPuller = 12,
	ConvActEntRej = 13,
	ConvActEntInsp = 14,
	ConvActPreExit = 15,
	ConvActRejResume = 16,
	ConvActExit = 17,
	ConvActExit1 = 18,
	ConvActExitPshr = 19,
	ConvActExit1Pshr = 20,
	ConvActPshrSetAll = 21,
	ConvActPshrRstAll = 22,
	ConvActPshrSetExt = 23,
	ConvActPshrSetRet = 24,
	ConvActPshrExt = 25,
	ConvActPshrRet = 26,
	ConvActPullerSetAll = 27,
	ConvActPullerRstAll = 28,
	ConvActPullerSetExt = 29,
	ConvActPullerSetRet = 30,
	ConvActPullerExt = 31,
	ConvActPullerRet = 32,
	ConvActRotSetAll = 33,
	ConvActRotRstAll = 34,
	ConvActRotSetHome = 35,
	ConvActRotSetRmt = 36,
	ConvActRotHome = 37,
	ConvActRotRemote = 38,
	ConvActRejSetAll = 39,
	ConvActRejRstAll = 40,
	ConvActRejSetUp = 41,
	ConvActRejSetDown = 42,
	ConvActRejUp = 43,
	ConvActRejDown = 44,
	ConvActStop = 45,
	ConvActStopPshr = 46,
	ConvActStopPuller = 47,
	ConvActStopRej = 48,
	ConvActSetMtrSigOnOrLToR = 49,
	ConvActSetMtrDirOrRToL = 50,
	ConvActRstMtrSigOnOrLToR = 51,
	ConvActRstMtrDirOrRToL = 52,
	ConvActSetMtrAll = 53,
	ConvActRstMtrAll = 54,
} eConvAction;
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

#ifndef __AS__TYPE_eInvertStep
#define __AS__TYPE_eInvertStep
typedef enum eInvertStep
{	InvertStepNA = 0,
	InvertStepInitChkCondition = 1,
	InvertStepInitInvertComplChk = 2,
	InvertStepInitClampUnblk = 3,
	InvertStepInitConvAwayLftSen = 4,
	InvertStepInitConvAwayRgtSen = 5,
	InvertStepInitStopperBlk = 6,
	InvertStepInitConvTwdLftSen = 7,
	InvertStepInitConvTwdRgtSen = 8,
	InvertStepInitStopperUnblk = 9,
	InvertStepInitConvToRgt = 10,
	InvertStepInitInvRtrnConv = 11,
	InvertStepInitShuttersInOutClose = 12,
	InvertStepChkCondition = 13,
	InvertStepShuttersInOutClose = 14,
	InvertStepAWMov = 15,
	InvertStepSafetyInOutClose = 16,
	InvertStepShutterCloseWaitForSig = 17,
	InvertStepChkShutterCond = 18,
	InvertStepShuttersInOutOpen = 19,
	InvertStepShuttersInOpenOutClose = 20,
	InvertStepStopperPosChk = 21,
	InvertStepStopperBlk = 22,
	InvertStepStopperUnblk = 23,
	InvertStepUSStandby = 24,
	InvertStepUSTmr = 25,
	InvertStepUSCommTmr = 26,
	InvertStepEntToEnd = 27,
	InvertStepEntToInOff = 28,
	InvertStepStopperBlkAftEnt = 29,
	InvertStepRev = 30,
	InvertStepShuttersInClose = 31,
	InvertStepInvertComplChk = 32,
	InvertStepClampBlkBefInvert = 33,
	InvertStepShuttersCloseBefInvert = 34,
	InvertStepInvert = 35,
	InvertStepInvalidPosRecoverBrd = 36,
	InvertStepClampUnblkAftInvert = 37,
	InvertStepStopperUnblkAftInvert = 38,
	InvertStepPreExit = 39,
	InvertStepDSInOutletShutterOpen = 40,
	InvertStepOutletShutterOpen = 41,
	InvertStepDSStandby = 42,
	InvertStepDSTmr = 43,
	InvertStepDSCommTmr = 44,
	InvertShuttersInOutCloseBefInitR = 45,
	InvertShuttersInOutCloseBefInit = 46,
	InvertStepExitBrd = 47,
	InvertStepPCBOut = 48,
	InvertStepInvRtrnUSStandby = 49,
	InvertStepInvRtrnUSTmr = 50,
	InvertStepInvRtrnUSCommTmr = 51,
	InvertStepInvRtrnEntToEnd = 52,
	InvertStepInvRtrnEntToInOff = 53,
	InvertStepShuttersInCloseOutOpen = 54,
} eInvertStep;
#endif

#ifndef __AS__TYPE_eInvertPos
#define __AS__TYPE_eInvertPos
typedef enum eInvertPos
{	InvertCurrPosAtRemote = 0,
	InvertCurrPosAtHome = 1,
	InvertPosInvalid = 2,
} eInvertPos;
#endif

#ifndef __AS__TYPE_eMotorBrkAction
#define __AS__TYPE_eMotorBrkAction
typedef enum eMotorBrkAction
{	MotorBrkActIdle = 0,
	MotorBrkActCW = 1,
	MotorBrkActCCW = 2,
	MotorBrkActCCWSenToMidSen = 3,
	MotorBrkActMidSenToCWSen = 4,
	MotorBrkActCWSenToMidSen = 5,
	MotorBrkActMidSenToCCWSen = 6,
	MotorBrkActBrkRlsOn = 7,
	MotorBrkActBrkRlsOff = 8,
	MotorBrkActStop = 9,
	MotorBrkActSetMtrSigOnOrCW = 10,
	MotorBrkActSetMtrDirOrCCW = 11,
	MotorBrkActSetMtrBrkRls = 12,
	MotorBrkActRstMtrSigOnOrCW = 13,
	MotorBrkActRstMtrDirOrCCW = 14,
	MotorBrkActRstMtrBrkRls = 15,
	MotorBrkActSetMtrAll = 16,
	MotorBrkActRstMtrAll = 17,
	MotorBrkActSetMtrDirOrCCW1 = 18,
	MotorBrkActRstMtrDirOrCCW1 = 19,
} eMotorBrkAction;
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
_BUR_LOCAL unsigned char(* p_usiLinkProdRcpCurrRcpMcMod);
_BUR_LOCAL plcbit(* p_bLinkConvHvBrd);
_BUR_LOCAL plcbit(* p_bLinkInvertHomeSen);
_BUR_LOCAL plcbit(* p_bLinkInvertRemoteSen);
_BUR_LOCAL_RETAIN eInvertPos eInvertReqPos;
_BUR_LOCAL eInvertPos eInvertCurrPos;
_BUR_LOCAL plcbit bInvertCompl;
_BUR_LOCAL plcbit(* p_bLinkUSHermesBlkUS);
_BUR_LOCAL plcbit(* p_bLinkUSHermes2BlkUS);
_BUR_LOCAL plcbit(* p_bLinkLFFollowerUSAllow);
_BUR_LOCAL plcbit(* p_bLinkLFFollowerDSAllow);
_BUR_LOCAL plcbit(* p_bLinkFollower1USAllow);
_BUR_LOCAL plcbit(* p_bLinkFollower1DSAllow);
_BUR_LOCAL plcbit(* p_bLinkFollower1WaitRlsBrd);
_BUR_LOCAL plcbit(* p_bLinkUIRtnBrdReset);
_BUR_LOCAL plcbit(* p_bLinkUIRtnBrdResetBtn);
_BUR_LOCAL signed long(* p_diFwdDlyTm);
_BUR_LOCAL signed long(* p_diRevDlyTm);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcbit(* p_bRun);
_BUR_LOCAL plcbit(* p_bStop);
_BUR_LOCAL plcbit(* p_bStep);
_BUR_LOCAL plcbit(* p_bInitGdBrd);
_BUR_LOCAL plcbit(* p_bInsertGdBrd);
_BUR_LOCAL eConvDir(* p_eConvDirection);
_BUR_LOCAL eMcSetCommMod(* p_eUSCommMod);
_BUR_LOCAL eMcSetCommMod(* p_eDSCommMod);
_BUR_LOCAL plcbit(* p_bGoToStandby);
_BUR_LOCAL plcbit(* p_bUSAllow);
_BUR_LOCAL plcbit(* p_bDSAllow);
_BUR_LOCAL eMcSetCommMod(* p_eUSComm2Mod);
_BUR_LOCAL plcbit(* p_bRtrnUSAllow);
_BUR_LOCAL plcbit(* p_bRtrnDSAllow);
_BUR_LOCAL plcbit(* p_bLeftSen);
_BUR_LOCAL plcbit(* p_bRightSen);
_BUR_LOCAL plcbit(* p_bMidSen);
_BUR_LOCAL plcbit(* p_bClamp2Sen);
_BUR_LOCAL plcbit(* p_bClamp3Sen);
_BUR_LOCAL eSMEMAAction(* p_eUSSMEMAStat);
_BUR_LOCAL eFBStatus(* p_eUSSMEMAStatus);
_BUR_LOCAL plcbit(* p_bUSSMEMATransporting);
_BUR_LOCAL plcbit(* p_bUSSMEMAConvStart);
_BUR_LOCAL plcbit(* p_bUSSMEMAConvStop);
_BUR_LOCAL plcbit(* p_bUSSMEMAUSRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMAUSGdBrdRdy);
_BUR_LOCAL eSMEMAAction(* p_eUSSMEMA2Stat);
_BUR_LOCAL eFBStatus(* p_eUSSMEMA2Status);
_BUR_LOCAL plcbit(* p_bUSSMEMA2Transporting);
_BUR_LOCAL plcbit(* p_bUSSMEMA2ConvStart);
_BUR_LOCAL plcbit(* p_bUSSMEMA2ConvStop);
_BUR_LOCAL plcbit(* p_bUSSMEMA2USRdy);
_BUR_LOCAL plcbit(* p_bUSSMEMA2USGdBrdRdy);
_BUR_LOCAL eSMEMAAction(* p_eDSSMEMAStat);
_BUR_LOCAL eFBStatus(* p_eDSSMEMAStatus);
_BUR_LOCAL plcbit(* p_bDSSMEMAConvStart);
_BUR_LOCAL plcbit(* p_bDSSMEMAConvStop);
_BUR_LOCAL plcbit(* p_bDSSMEMATimer);
_BUR_LOCAL plcbit(* p_bDBAOnRgtSen);
_BUR_LOCAL plcbit(* p_bUSHermesTransporting);
_BUR_LOCAL plcbit(* p_bUSHermesStopTransport);
_BUR_LOCAL plcbit(* p_bUSHermesUSRdy);
_BUR_LOCAL plcbit(* p_bUSHermesUSGdRdy);
_BUR_LOCAL plcbit(* p_bDSHermesTransporting);
_BUR_LOCAL plcbit(* p_bDSHermesStopTransport);
_BUR_LOCAL eConvAction(* p_eConvStat);
_BUR_LOCAL eFBStatus(* p_eConvStatus);
_BUR_LOCAL plcbit(* p_bConvHvBrd);
_BUR_LOCAL ePneuAction(* p_eStopperStat);
_BUR_LOCAL eFBStatus(* p_eStopperStatus);
_BUR_LOCAL plcbit(* p_bStopperExtended);
_BUR_LOCAL plcbit(* p_bStopperRetracted);
_BUR_LOCAL ePneuAction(* p_eClampStat);
_BUR_LOCAL eFBStatus(* p_eClampStatus);
_BUR_LOCAL ePneuAction(* p_eInletShutterStat);
_BUR_LOCAL eFBStatus(* p_eInletShutterStatus);
_BUR_LOCAL plcbit(* p_bInletShutterOpen);
_BUR_LOCAL plcbit(* p_bInletShutterClose);
_BUR_LOCAL ePneuAction(* p_eOutletShutterStat);
_BUR_LOCAL eFBStatus(* p_eOutletShutterStatus);
_BUR_LOCAL plcbit(* p_bOutletShutterOpen);
_BUR_LOCAL plcbit(* p_bOutletShutterClose);
_BUR_LOCAL ePneuAction(* p_eClamp1Stat);
_BUR_LOCAL eFBStatus(* p_eClamp1Status);
_BUR_LOCAL plcbit(* p_bClampRS1);
_BUR_LOCAL plcbit(* p_bUnClampRS1);
_BUR_LOCAL ePneuAction(* p_eClamp2Stat);
_BUR_LOCAL eFBStatus(* p_eClamp2Status);
_BUR_LOCAL plcbit(* p_bClampRS2);
_BUR_LOCAL plcbit(* p_bUnClampRS2);
_BUR_LOCAL ePneuAction(* p_eClamp3Stat);
_BUR_LOCAL eFBStatus(* p_eClamp3Status);
_BUR_LOCAL plcbit(* p_bClampRS3);
_BUR_LOCAL plcbit(* p_bUnClampRS3);
_BUR_LOCAL eMotorBrkAction(* p_eInvertStat);
_BUR_LOCAL eFBStatus(* p_eInvertStatus);
_BUR_LOCAL eAWAction(* p_eAWStat);
_BUR_LOCAL eFBStatus(* p_eAWStatus);
_BUR_LOCAL plcbit(* p_bAWWidthPosDiff);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bClampPrep);
_BUR_LOCAL plcbit(* p_bClampDis);
_BUR_LOCAL eClampType(* p_eClampOption);
_BUR_LOCAL plcbit(* p_bInletShutterPrep);
_BUR_LOCAL plcbit(* p_bInletShutterDis);
_BUR_LOCAL plcbit(* p_bOutletShutterPrep);
_BUR_LOCAL plcbit(* p_bOutletShutterDis);
_BUR_LOCAL plcbit(* p_bMachineSafetyPrep);
_BUR_LOCAL plcbit(* p_bUnlockCovPrep);
_BUR_LOCAL plcbit(* p_bLinkDICoverSwitchSig2);
_BUR_LOCAL plcbit(* p_bLinkUIBypsCoverSWPress1);
_BUR_LOCAL plcbit(* p_bLinkDIUnlockCoverSigFromDS);
_BUR_LOCAL plcbit(* p_bLinkDISafetySigFromDS);
_BUR_LOCAL plcbit(* p_bLinkDISafetySigFromUS);
_BUR_LOCAL plcbit(* p_bLinkDIUnlockCoverSigFromUS);
_BUR_LOCAL signed short(* p_iHermesAction);
_BUR_LOCAL plcbit(* p_bUSReversal);
_BUR_LOCAL plcbit(* p_bHermesEntToReversePosition);
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcstring sStepTxt[81];
_BUR_LOCAL plcbit bPaused;
_BUR_LOCAL plcbit bStepInitConv;
_BUR_LOCAL plcbit bStepInitAwayStopper;
_BUR_LOCAL plcbit bStepInitTwdStopper;
_BUR_LOCAL plcbit bStepInitDone;
_BUR_LOCAL plcbit bStepUSStandby;
_BUR_LOCAL plcbit bStepUSCommTmr;
_BUR_LOCAL plcbit bStepEntToEnd;
_BUR_LOCAL plcbit bStepEntToInOff;
_BUR_LOCAL plcbit bStepRev;
_BUR_LOCAL plcbit bStepPreExit;
_BUR_LOCAL plcbit bStepDSStandby;
_BUR_LOCAL plcbit bStepDSCommTmr;
_BUR_LOCAL plcbit bStepExitBrd;
_BUR_LOCAL plcbit bStepInvert;
_BUR_LOCAL plcbit bStepAWMov;
_BUR_LOCAL plcbit bStepSafeMode;
_BUR_LOCAL plcbit bBrdInserted;
_BUR_LOCAL plcbit bBrdRemoved;
_BUR_LOCAL eSMEMAAction eUSSMEMAAct;
_BUR_LOCAL eSMEMAAction eDSSMEMAAct;
_BUR_LOCAL eSMEMAAction eUSSMEMA2Act;
_BUR_LOCAL eConvAction eConvAct;
_BUR_LOCAL ePneuAction eStopperAct;
_BUR_LOCAL eMotorBrkAction eInvertAct;
_BUR_LOCAL eAWAction eAWAct;
_BUR_LOCAL ePneuAction eClampAct;
_BUR_LOCAL ePneuAction eInletShutterAct;
_BUR_LOCAL ePneuAction eOutletShutterAct;
_BUR_LOCAL ePneuAction eClamp1Act;
_BUR_LOCAL ePneuAction eClamp2Act;
_BUR_LOCAL ePneuAction eClamp3Act;
_BUR_LOCAL plcbit bInvOnceTwicePCBOut;
_BUR_LOCAL plcbit bStepInvRtrnEntToEnd;
_BUR_LOCAL plcbit bStepInvRtrnEntToInOff;
_BUR_LOCAL plcbit bStepInvRtrnUSStandby;
_BUR_LOCAL plcbit bStepInvRtrnUSCommTmr;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL plcbit bInletShutterPrep;
_BUR_LOCAL plcbit bInletShutterDis;
_BUR_LOCAL plcbit bOutletShutterPrep;
_BUR_LOCAL plcbit bOutletShutterDis;
_BUR_LOCAL plcbit bClampPrep;
_BUR_LOCAL plcbit bClampDis;
_BUR_LOCAL eClampType eClampOption;
_BUR_LOCAL plcbit bBrdOnSen;
_BUR_LOCAL plcbit bHvBrd;
_BUR_LOCAL plcbit bGdBrd;
_BUR_LOCAL plcbit bInitGdBrd;
_BUR_LOCAL plcbit bInsertGdBrd;
_BUR_LOCAL eConvDir eConvDirection;
_BUR_LOCAL eMcSetCommMod eUSCommMod;
_BUR_LOCAL eMcSetCommMod eDSCommMod;
_BUR_LOCAL plcbit bGoToStandby;
_BUR_LOCAL plcbit bUSAllow;
_BUR_LOCAL plcbit bDSAllow;
_BUR_LOCAL plcbit bLeftSen;
_BUR_LOCAL plcbit bRightSen;
_BUR_LOCAL plcbit bMidSen;
_BUR_LOCAL plcbit bClamp2Sen;
_BUR_LOCAL plcbit bClamp3Sen;
_BUR_LOCAL plcbit bRtrnUSAllow;
_BUR_LOCAL plcbit bRtrnDSAllow;
_BUR_LOCAL eSMEMAAction eUSSMEMAStat;
_BUR_LOCAL eFBStatus eUSSMEMAStatus;
_BUR_LOCAL plcbit bUSSMEMATransporting;
_BUR_LOCAL plcbit bUSSMEMAConvStart;
_BUR_LOCAL plcbit bUSSMEMAConvStop;
_BUR_LOCAL plcbit bUSSMEMAUSRdy;
_BUR_LOCAL plcbit bUSSMEMAUSGdBrdRdy;
_BUR_LOCAL eSMEMAAction eDSSMEMAStat;
_BUR_LOCAL eFBStatus eDSSMEMAStatus;
_BUR_LOCAL plcbit bDSSMEMAConvStart;
_BUR_LOCAL plcbit bDSSMEMAConvStop;
_BUR_LOCAL plcbit bDSSMEMATimer;
_BUR_LOCAL plcbit bUSHermesTransporting;
_BUR_LOCAL plcbit bUSHermesStopTransport;
_BUR_LOCAL plcbit bUSHermesUSRdy;
_BUR_LOCAL plcbit bUSHermesUSGdRdy;
_BUR_LOCAL plcbit bDSHermesTransporting;
_BUR_LOCAL plcbit bDSHermesStopTransport;
_BUR_LOCAL eConvAction eConvStat;
_BUR_LOCAL eFBStatus eConvStatus;
_BUR_LOCAL plcbit bConvHvBrd;
_BUR_LOCAL plcbit bConvLmtSenActivated;
_BUR_LOCAL ePneuAction eStopperStat;
_BUR_LOCAL eFBStatus eStopperStatus;
_BUR_LOCAL plcbit bStopperExtended;
_BUR_LOCAL plcbit bStopperRetracted;
_BUR_LOCAL ePneuAction eClampStat;
_BUR_LOCAL eFBStatus eClampStatus;
_BUR_LOCAL ePneuAction eInletShutterStat;
_BUR_LOCAL eFBStatus eInletShutterStatus;
_BUR_LOCAL plcbit bInletShutterClose;
_BUR_LOCAL plcbit bInletShutterOpen;
_BUR_LOCAL ePneuAction eOutletShutterStat;
_BUR_LOCAL eFBStatus eOutletShutterStatus;
_BUR_LOCAL plcbit bOutletShutterClose;
_BUR_LOCAL plcbit bOutletShutterOpen;
_BUR_LOCAL ePneuAction eClamp1Stat;
_BUR_LOCAL eFBStatus eClamp1Status;
_BUR_LOCAL plcbit bClampRS1;
_BUR_LOCAL plcbit bUnClampRS1;
_BUR_LOCAL ePneuAction eClamp2Stat;
_BUR_LOCAL eFBStatus eClamp2Status;
_BUR_LOCAL plcbit bClampRS2;
_BUR_LOCAL plcbit bUnClampRS2;
_BUR_LOCAL ePneuAction eClamp3Stat;
_BUR_LOCAL eFBStatus eClamp3Status;
_BUR_LOCAL plcbit bClampRS3;
_BUR_LOCAL plcbit bUnClampRS3;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL signed long diFwdDlyTm;
_BUR_LOCAL signed long diRevDlyTm;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL eInvertStep eOpsStep;
_BUR_LOCAL eInvertStep eGotoOpsStep;
_BUR_LOCAL struct TON fbUSTimer;
_BUR_LOCAL struct TON fbDSTimer;
_BUR_LOCAL plcbit bUSTimerRun;
_BUR_LOCAL plcbit bDSTimerRun;
_BUR_LOCAL struct TON fbUS2Timer;
_BUR_LOCAL plcbit bUS2TimerRun;
_BUR_LOCAL plcbit bConvSen;
_BUR_LOCAL plcbit bReachedEnd;
_BUR_LOCAL struct TON fbFwdTimer;
_BUR_LOCAL struct TON fbRevTimer;
_BUR_LOCAL plcbit bInvertPosInvalidSkipInit;
_BUR_LOCAL plcbit bClampDisInitUnblk;
_BUR_LOCAL plcbit bChangeBypassRetPneu;
_BUR_LOCAL plcbit bChangeInvertExtPneu;
_BUR_LOCAL plcbit bBoardInFromUS1;
_BUR_LOCAL plcbit bBoardInFromUS2;
_BUR_LOCAL plcbit bReverseStoppingPos;
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bClsLog;
_BUR_LOCAL plcbit blog;
_BUR_LOCAL eInvertStep logStep[1000];
_BUR_LOCAL signed short logIndexStep;
_BUR_LOCAL eInvertStep eGotoOpsStepDummy;
_BUR_LOCAL plcbit btest;
