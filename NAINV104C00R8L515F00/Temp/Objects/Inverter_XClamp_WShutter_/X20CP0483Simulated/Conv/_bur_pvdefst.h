#ifndef __AS__TYPE_eTLBuzMod
#define __AS__TYPE_eTLBuzMod
typedef enum eTLBuzMod
{	TLBuzModNutek = 0,
	TLBuzModMEK = 1,
	TLBuzModBHTC = 2,
	TLBuzModAptiv = 3,
} eTLBuzMod;
#endif

#ifndef __AS__TYPE_eMcSetCommMod
#define __AS__TYPE_eMcSetCommMod
typedef enum eMcSetCommMod
{	McSetCommModSMEMA = 0,
	McSetCommModHermes = 1,
} eMcSetCommMod;
#endif

#ifndef __AS__TYPE_tyDigitalInputSettings
#define __AS__TYPE_tyDigitalInputSettings
typedef struct tyDigitalInputSettings
{	signed long diSafetyRlySig;
	signed long diEStopSig;
	signed long diCoverSWSig;
	signed long diUBA;
	signed long diUBAStat;
	signed long diDSB;
	signed long diConvLftSen;
	signed long diConvRgtSen;
	signed long diPressureSW;
	signed long diCoatingSen;
	signed long diThermalPrtSig;
	signed long diUSWidthChkSen;
	signed long diDSWidthChkSen;
	signed long diInvertHomeSen;
	signed long diInvertRemoteSen;
	signed long diInShutterOpenRS;
	signed long diInShutterCloseRS;
	signed long diOutShutterOpenRS;
	signed long diOutShutterCloseRS;
	signed long diClamp2Sen;
	signed long diClamp3Sen;
	signed long diClampRS1;
	signed long diUnClampRS1;
	signed long diClampRS2;
	signed long diUnClampRS2;
	signed long diClampRS3;
	signed long diUnClampRS3;
	signed long diUSWidthChkSen1;
	signed long diCoverSWSig2;
	signed long diSafetySigFromUS;
	signed long diSafetySigFromDS;
	signed long diUnlockCoverSigFromUS;
	signed long diUnlockCoverSigFromDS;
	signed long diCoverUnlockPB1;
	signed long diUBA2;
	signed long diUBAStat2;
	signed long diSPARE9;
	signed long diSPARE10;
	signed long diSPARE11;
	signed long diSPARE12;
} tyDigitalInputSettings;
#endif

#ifndef __AS__TYPE_tyDigitalOutputSettings
#define __AS__TYPE_tyDigitalOutputSettings
typedef struct tyDigitalOutputSettings
{	signed long diSafetyRlyRst;
	signed long diTLRed;
	signed long diTLAmber;
	signed long diTLGreen;
	signed long diTLBlue;
	signed long diTLWhite;
	signed long diBuz;
	signed long diCoatingStprRet;
	signed long diUSB;
	signed long diDBA;
	signed long diDBAStat;
	signed long diConvMtrCW;
	signed long diConvMtrCCW;
	signed long diStprUnblkCtrl;
	signed long diStprBlkCtrl;
	signed long diInvertHome;
	signed long diInvertRemote;
	signed long diInvertBrake;
	signed long diMtrPwrRly;
	signed long diClampControl;
	signed long diUnclampControl;
	signed long diInShutterOpenCtrl;
	signed long diInShutterCloseCtrl;
	signed long diOutShutterOpenCtrl;
	signed long diOutShutterCloseCtrl;
	signed long diClamp1Ctrl;
	signed long diUnClamp1Ctrl;
	signed long diClamp2Ctrl;
	signed long diUnClamp2Ctrl;
	signed long diClamp3Ctrl;
	signed long diUnClamp3Ctrl;
	signed long diTopCvrUnlckToDS;
	signed long diTopCvrUnlckToUS;
	signed long diMachineSafetySigToDS;
	signed long diMachineSafetySigToUS;
	signed long diCoverPBLED1;
	signed long diBypassTopCover1;
	signed long diSafetyTopCoverSWCoil1;
	signed long diUSB2;
	signed long diSPARE9;
	signed long diSPARE10;
	signed long diSPARE11;
	signed long diSPARE12;
} tyDigitalOutputSettings;
#endif

#ifndef __AS__TYPE_tyUILmt
#define __AS__TYPE_tyUILmt
typedef struct tyUILmt
{	signed long diMax;
	signed long diMin;
} tyUILmt;
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

#ifndef __AS__TYPE_eClampType
#define __AS__TYPE_eClampType
typedef enum eClampType
{	ClampNoRS = 0,
	ThreeClampsWithRS = 1,
} eClampType;
#endif

#ifndef __AS__TYPE_tyMotionCANParamInHm
#define __AS__TYPE_tyMotionCANParamInHm
typedef struct tyMotionCANParamInHm
{	signed char siMode;
	signed long diStartVelInUMPS;
	signed long diOffsetVelInUMPS;
	signed long diAcc;
} tyMotionCANParamInHm;
#endif

#ifndef __AS__TYPE_tyMotionCANParamInConvert
#define __AS__TYPE_tyMotionCANParamInConvert
typedef struct tyMotionCANParamInConvert
{	signed long diPitchInUM;
	signed long diPulsePerRev;
	signed long diPrimaryGearRatio;
	signed long diSecondaryGearRatio;
} tyMotionCANParamInConvert;
#endif

#ifndef __AS__TYPE_tyMotionParam
#define __AS__TYPE_tyMotionParam
typedef struct tyMotionParam
{	signed long diAccInMS;
	signed long diDecInMS;
	signed long diAutoSpdInUMPS;
} tyMotionParam;
#endif

#ifndef __AS__TYPE_tyMotionCANTuning
#define __AS__TYPE_tyMotionCANTuning
typedef struct tyMotionCANTuning
{	signed long diAsdaA2Inertia;
	signed long diAsdaA2PosLoopGain;
	signed long diAsdaA2PosFFGain;
	signed long diAsdaA2SpdLoopGain;
	signed long diAsdaA2SpdIntegral;
	signed long diAsdaA2LowPassFltr;
	signed long diAsdaA2AntiInterGain;
	signed long diAsdaA2FirstTorqueCmd;
	signed long diLex28LTNDderivativeGain_P800;
	signed long diLex28LTNIintegralGain_P801;
	signed long diLex28LTNIVdeIntlGain_P802;
	signed long diLex28LTNPpropotionalGain_P803;
	signed long diLex28LTNUSERGAIN_P804;
	signed long diLex28NLAFFLPFHZspringFil_P805;
	signed long diLex28NLFILTDAMPING_P814;
	signed long diLex28NLFILTT1_P815;
	signed long diPronetInertia;
	signed long diPronetRealTimeAutoAdjSet;
	signed long diPronetPosLoopGain;
	signed long diPronetSpdLoopGain;
	signed long diPronetSpdIntegral;
	signed long diPronetTorqueFilter;
	signed long diPronetPosFeedForward;
	signed long diPronetLowSpeedTestFiltering;
	signed long diPronetStopMode;
} tyMotionCANTuning;
#endif

#ifndef __AS__TYPE_eServoMotorType
#define __AS__TYPE_eServoMotorType
typedef enum eServoMotorType
{	DeltaAsdaA2 = 0,
	SchneiderLexium28 = 1,
	EstunPronet = 2,
} eServoMotorType;
#endif

#ifndef __AS__TYPE_tyNtParam
#define __AS__TYPE_tyNtParam
typedef struct tyNtParam
{	tyDigitalInputSettings tyDISettings;
	tyDigitalOutputSettings tyDOSettings;
	plcbit bAWPrep;
	plcbit bLFPrep;
	plcbit bLeaderMc;
	plcbit bLFUsrSetPrep;
	signed long diLFWidthLimit;
	plcbit bLFProdWidthChk;
	plcbit bLFProdWidth2Prep;
	plcbit bUSWidthChkPrep;
	plcbit bDSWidthChkPrep;
	plcbit bLCSLFPrep;
	plcbit bLCSReqRcpPrep;
	plcbit bLCSManageRcpPrep;
	plcbit bLCSLiveDatPrep;
	plcbit bUSExtSMEMAPrep;
	plcbit bDSExtSMEMAPrep;
	plcbit bVSMEMAPrep;
	plcbit bHermesPrep;
	plcbit bHermesRmtPrep;
	plcbit bUnlockCoverPrep;
	plcbit bUSDSMachineSafetySig;
	plcbit bSSaverPrep;
	plcbit bAutoLogoutPrep;
	signed long diWidthOffsetInUM;
	tyUILmt tyUIAWOffset;
	plcstring sJobNo[31];
	unsigned char usiNtAddr;
	eConvDir eProjConvDir;
	plcbit bProjCoatingPrep;
	plctime tComLoadRstTm;
	plcbit bProjDBAOnRgtSen;
	plcbit bProjClampPrep;
	eClampType eProjClampOption;
	plcbit bProjStopperPrep;
	plcbit bProjInletShutPrep;
	plcbit bProjOutletShutPrep;
	plcbit bProjBypsInitConvPrep;
	plcbit bProjRlsNewProdPrep;
	plcstring sUsrFolderProgNm[16];
	plcstring sLibVersionProgNm[16];
	plcstring sTimeProgNm[16];
	plcstring sHWInfoProgNm[16];
	plcstring sHWInfoDevice[4];
	plcstring sAlmProgNm[16];
	plctime tTLChgRcpBlinkTm;
	plctime tTLErrBlinkTm;
	plctime tBuzErrOnTm;
	plctime tBuzErrRestTm;
	unsigned char usiBuzErrOnCntr;
	plcbit bBuzErrStopSeqEn;
	unsigned char usiBuzErrStopSeqCntr;
	plctime tTLWarnBlinkTm;
	plctime tBuzWarnOnTm;
	plctime tBuzWarnRestTm;
	unsigned char usiBuzWarnOnCntr;
	plcbit bBuzWarnStopSeqEn;
	unsigned char usiBuzWarnStopSeqCntr;
	plctime tTLWarn1BlinkTm;
	plctime tBuzWarn1OnTm;
	plctime tBuzWarn1RestTm;
	unsigned char usiBuzWarn1OnCntr;
	plcbit bBuzWarn1StopSeqEn;
	unsigned char usiBuzWarn1StopSeqCntr;
	plctime tTLWarn2BlinkTm;
	plctime tBuzWarn2OnTm;
	plctime tBuzWarn2RestTm;
	unsigned char usiBuzWarn2OnCntr;
	plcbit bBuzWarn2StopSeqEn;
	unsigned char usiBuzWarn2StopSeqCntr;
	plctime tTLWarn3BlinkTm;
	plctime tBuzWarn3OnTm;
	plctime tBuzWarn3RestTm;
	unsigned char usiBuzWarn3OnCntr;
	plcbit bBuzWarn3StopSeqEn;
	unsigned char usiBuzWarn3StopSeqCntr;
	plctime tTLWarn4BlinkTm;
	plctime tBuzWarn4OnTm;
	plctime tBuzWarn4RestTm;
	unsigned char usiBuzWarn4OnCntr;
	plcbit bBuzWarn4StopSeqEn;
	unsigned char usiBuzWarn4StopSeqCntr;
	plctime tTLWarn5BlinkTm;
	plctime tBuzWarn5OnTm;
	plctime tBuzWarn5RestTm;
	unsigned char usiBuzWarn5OnCntr;
	plcbit bBuzWarn5StopSeqEn;
	unsigned char usiBuzWarn5StopSeqCntr;
	plctime tBuzAlertOnTm;
	plctime tBuzAlertRestTm;
	unsigned char usiBuzAlertOnCntr;
	plcbit bBuzAlertStopSeqEn;
	unsigned char usiBuzAlertStopSeqCntr;
	plctime tTLBlueBlinkTm;
	plctime tTLAmberBlinkTm;
	plctime tTLWhiteBlinkTm;
	plctime tTLRedBlinkTm;
	plctime tTLGreenBlinkTm;
	eTLBuzMod eTLBuzMode;
	unsigned long udiAlmFileKeepDay;
	plcstring sProdRcpProgNm[16];
	plcstring sProdRcpListFileNm[81];
	plcstring sProdRcpSingleFileNm[81];
	plcstring sMpProdRcpProgNm[16];
	plcstring sMpProdRcpFileNm[256];
	plcstring sMpProdRcpPVNm[101];
	plcstring sMcParamProgNm[16];
	plcstring sMcParamFileNm[81];
	plcstring sUsrMgmtProgNm[16];
	plcstring sUSSMEMAProgNm[16];
	plctime tUSSMEMARstDlyTm;
	plctime tUSSMEMASigInChkTm;
	plcstring sDSSMEMAProgNm[16];
	plctime tDSSMEMARstDlyTm;
	plctime tDSSMEMASigInChkTm;
	plcstring sConvProgNm[16];
	plcbit bConvOnDirMod;
	plctime tConvMtrOffDlyTm;
	signed long diConvFwdDlyTm;
	signed long diConvRevDlyTm;
	plcstring sStopperProgNm[16];
	plcbit bStopperTwoCtrlIn;
	plctime tStopperExtDlyTm;
	plctime tStopperRetDlyTm;
	plcstring sClampProgNm[16];
	plcbit bClampTwoCtrlIn;
	plctime tClampExtDlyTm;
	plctime tClampRetDlyTm;
	plcstring sInShutterProgNm[16];
	plcbit bInShutterTwoCtrlIn;
	plctime tInShutterExtTO;
	plctime tInShutterRetTO;
	plcstring sOutShutterProgNm[16];
	plcbit bOutShutterTwoCtrlIn;
	plctime tOutShutterExtTO;
	plctime tOutShutterRetTO;
	plcstring sClamp1ProgNm[16];
	plcbit bClamp1TwoCtrlIn;
	plctime tClamp1ExtTO;
	plctime tClamp1RetTO;
	plcstring sClamp2ProgNm[16];
	plcbit bClamp2TwoCtrlIn;
	plctime tClamp2ExtTO;
	plctime tClamp2RetTO;
	plcstring sClamp3ProgNm[16];
	plcbit bClamp3TwoCtrlIn;
	plctime tClamp3ExtTO;
	plctime tClamp3RetTO;
	signed long diMotorOnDlyTm;
	signed long diMotorOffDlyTm;
	signed long diBrakeOnDlyTm;
	signed long diBrakeOffDlyTm;
	signed long diTimeOut;
	plcstring sAWProgNm[16];
	plcstring sAWDevice[4];
	unsigned char usiAWNode;
	plcbit bAWDir;
	plcbit bAWDirBl;
	signed long diAWPitchInUM;
	signed long diAWMovBlDistInUM;
	tyMotionCANParamInHm tyAWParamInHm;
	tyMotionCANParamInConvert tyAWParamInConvert;
	tyMotionParam tyAWParam;
	tyMotionCANTuning tyAWTuning;
	eServoMotorType eAWServoMotorType;
	plcstring sInvertProgNm[16];
	plcstring sInvertDevice[4];
	unsigned char usiInvertNode;
	plcbit bInvertDir;
	tyMotionCANParamInHm tyInvertParamInHm;
	tyMotionCANParamInConvert tyInvertParamInConvert;
	tyMotionParam tyInvertParam;
	tyMotionCANTuning tyInvertTuning;
	eServoMotorType eInvertServoMotorType;
	plcstring sDIProgNm[16];
	plcstring sMcProgNm[16];
	plcstring sHermesProgNm[16];
	plcstring sHermesRetainFileNm[81];
	plcstring sHermesConfigFileNm[81];
	plcstring sUSHermesProgNm[16];
	unsigned long udiUSHermesFileKeepDay;
	unsigned long udiUSHermesAliveTmInSec;
	plctime tUSHermesConnTO;
	plcstring sUSHermes2ProgNm[16];
	unsigned long udiUSHermes2FileKeepDay;
	unsigned long udiUSHermes2AliveTmInSec;
	plctime tUSHermes2ConnTO;
	plcstring sDSHermesProgNm[16];
	unsigned long udiDSHermesFileKeepDay;
	unsigned long udiDSHermesAliveTmInSec;
	plctime tDSHermesConnTO;
	plcstring sDSHermes2ProgNm[16];
	unsigned long udiDSHermes2FileKeepDay;
	unsigned long udiDSHermes2AliveTmInSec;
	plctime tDSHermes2ConnTO;
	plcstring sRmtHermesProgNm[16];
	plcstring sRmtHermesConfigFileNm[81];
	unsigned long udiRmtHermesFileKeepDay;
	unsigned long udiRmtHermesAliveTmInSec;
	unsigned long udiRmtHermesSndBffrSize;
	unsigned long udiRmtHermesRcvBffrSize;
	plcstring sOpsAWProgNm[16];
	plcstring sOpsInitConvProgNm[16];
	plcstring sOpsInitPneuProgNm[16];
	plcstring sOpsConvProgNm[16];
	plcstring sOpsPneuProgNm[16];
	plcstring sConvBffrProgNm[16];
	plcstring sConvBffrFileNm[81];
	signed short iConvBffrIdx;
	plcstring sLFLeaderProgNm[16];
	plctime tLFLeaderOnlineChkDlyTm;
	plctime tLFLeaderSetTmOffDlyTm;
	plcstring sLFFollowerProgNm[16];
	plcstring sFollower1ProgNm[16];
	plctime tLFFollowerOnlineChkDlyTm;
	plcstring sLCSProgNm[16];
	plcstring sLCSMngRcpProgNm[16];
	plcstring sLCSLFProgNm[16];
	tyUILmt tyProdRcpWidthLmt;
	tyUILmt tyProdRcpMcModLmt;
	tyUILmt tyProdRcpFlippedBrdLmt;
	tyUILmt tyUISSaverTm;
	tyUILmt tyUIConvInitTm;
	tyUILmt tyUITranInErrDlyTm;
	tyUILmt tyUITranOutErrDlyTm;
	tyUILmt tyUIHermesSndAliveTm;
	tyUILmt tyUIHermesLnID;
	tyUILmt tyUIAntiGapSenOnTm;
	tyUILmt tyUIAntiGapSenOffTm;
	tyUILmt tyUILFIndexBeforeOven;
	tyUILmt tyUILFIndexAfterOven;
	tyUILmt tyUIAWTargetPos;
	tyUILmt tyUIAWStepSize;
	tyUILmt tyUIAWNomSpd;
	tyUILmt tyUIAWSlwSpd;
	tyUILmt tyUIInvertTargetPos;
	tyUILmt tyUIInvertStepSize;
	tyUILmt tyUIInvertNomSpd;
	tyUILmt tyUIInvertSlwSpd;
	tyUILmt tyUIHermesHostPort;
	tyUILmt tyUIHermesSvrPort;
	tyUILmt tyUIAutoLogoutTm;
	tyUILmt tyNetworkMode;
	plcbit bUIConvDirRL;
	plcstring sMpNtParamFileNm[256];
	plcstring sMpNtParamPVNm[101];
	plcstring sUIDefaultLoginNm[31];
	plcstring sUIDefaultLoginPw[31];
	plcbit bProjInvertOncePrep;
	plcbit bProjInvertTwicePrep;
	plcbit bUSExtSMEMA2Prep;
	plcstring sUSSMEMA2ProgNm[16];
	plctime tUSSMEMA2RstDlyTm;
	plctime tUSSMEMA2SigInChkTm;
	eConvDir eProjRtrnBrdConvDir;
	plcbit bChinesePrep;
	plcbit bGemanPrep;
	plcbit bHermesSvyPrep;
	plcbit bHermesSvyFirstMcInTheLine;
	plcbit bHermesSvyQueryBoardInfo;
	plcstring sDSHermesRetainFileNm[81];
	signed short iInput;
	signed short iOutput;
	plcstring sSvyHermesProgNm[16];
	plcstring sSvyHermesConfigFileNm[81];
	unsigned long udiSvyHermesFileKeepDay;
	unsigned long udiSvyHermesAliveTmInSec;
	plctime tSvyHermesConnTO;
	plcstring sSvyHermesRetainFileNm[81];
} tyNtParam;
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
#ifndef __AS__TYPE_tyPneuSenChkInternal
#define __AS__TYPE_tyPneuSenChkInternal
typedef struct tyPneuSenChkInternal
{	struct TON fbChkTm;
} tyPneuSenChkInternal;
#endif

struct fbPneuNoSenDly
{	plctime tDlyTm;
	unsigned long udiStatus;
	tyPneuSenChkInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbPneuNoSenDly(struct fbPneuNoSenDly* inst);
struct fbPneuSenOnChk
{	plctime tTimeOut;
	unsigned long udiStatus;
	tyPneuSenChkInternal tyInternal;
	plcbit bEn;
	plcbit bSenOn;
};
_BUR_PUBLIC void fbPneuSenOnChk(struct fbPneuSenOnChk* inst);
#ifndef __AS__TYPE_tyPneuSafetyChkInternal
#define __AS__TYPE_tyPneuSafetyChkInternal
typedef struct tyPneuSafetyChkInternal
{	struct fbPneuNoSenDly fbPneuNoSenDly;
	struct fbPneuSenOnChk fbPneuSenOnChk;
} tyPneuSafetyChkInternal;
#endif

struct fbPneuSenOnChkWithSafety
{	plctime tTimeOut;
	unsigned long udiStatus;
	tyPneuSafetyChkInternal tyInternal;
	plcbit bEn;
	plcbit bSenOn;
	plcbit bSafetySenOn;
};
_BUR_PUBLIC void fbPneuSenOnChkWithSafety(struct fbPneuSenOnChkWithSafety* inst);
struct fbPneuNoSenDlyWithSafety
{	plctime tDlyTm;
	unsigned long udiStatus;
	tyPneuSafetyChkInternal tyInternal;
	plcbit bEn;
	plcbit bSafetySenOn;
};
_BUR_PUBLIC void fbPneuNoSenDlyWithSafety(struct fbPneuNoSenDlyWithSafety* inst);
struct fbPneuSenOffChk
{	plctime tTimeOut;
	unsigned long udiStatus;
	tyPneuSenChkInternal tyInternal;
	plcbit bEn;
	plcbit bSenOn;
};
_BUR_PUBLIC void fbPneuSenOffChk(struct fbPneuSenOffChk* inst);
#ifndef __AS__TYPE_tyPneuFullSenChkInternal
#define __AS__TYPE_tyPneuFullSenChkInternal
typedef struct tyPneuFullSenChkInternal
{	struct fbPneuSenOnChkWithSafety fbPneuSenOnChkWithSafety;
	struct fbPneuNoSenDlyWithSafety fbPneuNoSenDlyWithSafety;
	struct fbPneuSenOffChk fbPneuSenOffChk;
} tyPneuFullSenChkInternal;
#endif

#ifndef __AS__TYPE_tyConvLongBrdInternal
#define __AS__TYPE_tyConvLongBrdInternal
typedef struct tyConvLongBrdInternal
{	struct TON fbDlyTm;
} tyConvLongBrdInternal;
#endif

#ifndef __AS__TYPE_tyConvMtrOnOffInternal
#define __AS__TYPE_tyConvMtrOnOffInternal
typedef struct tyConvMtrOnOffInternal
{	struct TON fbDlyTm;
} tyConvMtrOnOffInternal;
#endif

struct fbConvMtrOff
{	plctime tDlyTm;
	unsigned long udiStatus;
	tyConvMtrOnOffInternal tyInternal;
	plcbit bEn;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
};
_BUR_PUBLIC void fbConvMtrOff(struct fbConvMtrOff* inst);
struct fbConvMtrOn
{	plctime tDlyTm;
	unsigned long udiStatus;
	tyConvMtrOnOffInternal tyInternal;
	plcbit bEn;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
};
_BUR_PUBLIC void fbConvMtrOn(struct fbConvMtrOn* inst);
struct fbConvBrkOn
{	plctime tDlyTm;
	unsigned long udiStatus;
	tyConvMtrOnOffInternal tyInternal;
	plcbit bEn;
	plcbit bMtrBrk;
};
_BUR_PUBLIC void fbConvBrkOn(struct fbConvBrkOn* inst);
struct fbConvBrkOff
{	plctime tDlyTm;
	unsigned long udiStatus;
	tyConvMtrOnOffInternal tyInternal;
	plcbit bEn;
	plcbit bMtrBrk;
};
_BUR_PUBLIC void fbConvBrkOff(struct fbConvBrkOff* inst);
#ifndef __AS__TYPE_tyConvMtrSenToSenInternal
#define __AS__TYPE_tyConvMtrSenToSenInternal
typedef struct tyConvMtrSenToSenInternal
{	struct fbConvMtrOff fbConvMtrOff;
	struct fbConvMtrOn fbConvMtrOn;
	struct fbConvBrkOn fbConvBrkOn;
	struct fbConvBrkOff fbConvBrkOff;
	struct TON fbMtrDirOffDlyTm;
	struct TON fbTO;
} tyConvMtrSenToSenInternal;
#endif

struct fbConvSenToSen
{	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	unsigned long udiStatus;
	tyConvMtrSenToSenInternal tyInternal;
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
};
_BUR_PUBLIC void fbConvSenToSen(struct fbConvSenToSen* inst);
struct fbConvSenToSenBrk2
{	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	plctime tMtrDirOffDlyTm;
	plctime tMtrBrkOnDlyTm;
	unsigned long udiStatus;
	tyConvMtrSenToSenInternal tyInternal;
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
};
_BUR_PUBLIC void fbConvSenToSenBrk2(struct fbConvSenToSenBrk2* inst);
struct F_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void F_TRIG(struct F_TRIG* inst);
#ifndef __AS__TYPE_tyConvMtrSenToSenInternal1
#define __AS__TYPE_tyConvMtrSenToSenInternal1
typedef struct tyConvMtrSenToSenInternal1
{	struct fbConvSenToSen fbConvSenToSen;
	struct fbConvSenToSenBrk2 fbConvSenToSenBrk;
	struct F_TRIG fbFTrig;
	struct TON fbMtrBrkOnDlyTm;
	struct TON fbMtrDirOffDlyTm;
	struct TON fbMtrSigOnDlyTm;
	struct TON fbDlyTm;
} tyConvMtrSenToSenInternal1;
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

struct fbPneuExtRetSenRetChk
{	plctime tTimeOut;
	unsigned long udiStatus;
	tyPneuFullSenChkInternal tyInternal;
	plcbit bEn;
	plcbit bExtSen;
	plcbit bRetSen;
	plcbit bRetSafety;
};
_BUR_PUBLIC void fbPneuExtRetSenRetChk(struct fbPneuExtRetSenRetChk* inst);
struct fbPneuExtRetSenExtChk
{	plctime tTimeOut;
	unsigned long udiStatus;
	tyPneuFullSenChkInternal tyInternal;
	plcbit bEn;
	plcbit bExtSen;
	plcbit bRetSen;
	plcbit bExtSafety;
};
_BUR_PUBLIC void fbPneuExtRetSenExtChk(struct fbPneuExtRetSenExtChk* inst);
struct fbConvSenToSenTm1
{	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	unsigned long udiStatus;
	tyConvMtrSenToSenInternal1 tyInternal;
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
};
_BUR_PUBLIC void fbConvSenToSenTm1(struct fbConvSenToSenTm1* inst);
struct fbConvSenToSenTm
{	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	unsigned long udiStatus;
	tyConvMtrSenToSenInternal1 tyInternal;
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
};
_BUR_PUBLIC void fbConvSenToSenTm(struct fbConvSenToSenTm* inst);
struct fbConvSenToSenOff1
{	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	unsigned long udiStatus;
	tyConvMtrSenToSenInternal1 tyInternal;
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
};
_BUR_PUBLIC void fbConvSenToSenOff1(struct fbConvSenToSenOff1* inst);
struct fbConvSenToSenOff
{	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	unsigned long udiStatus;
	tyConvMtrSenToSenInternal1 tyInternal;
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
};
_BUR_PUBLIC void fbConvSenToSenOff(struct fbConvSenToSenOff* inst);
struct fbConvLongBrd
{	plctime tDlyTm;
	unsigned long udiStatus;
	tyConvLongBrdInternal tyInternal;
	plcbit bSen1;
	plcbit bSen2;
	plcbit bSen3;
	plcbit bSen4;
};
_BUR_PUBLIC void fbConvLongBrd(struct fbConvLongBrd* inst);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL plcbit(* p_bLinkOpsSimu);
_BUR_LOCAL plcbit(* p_bLinkUIBypsInitConv);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamUSCommMod);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertBrdInserted);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamUSComm2Mod);
_BUR_LOCAL struct tyNtParam(* p_tyNtParamCurr);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertOnceTwicePCBOut);
_BUR_LOCAL unsigned char(* p_usiLinkMcMod);
_BUR_LOCAL unsigned char New_Variable;
_BUR_LOCAL eConvAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL plcbit(* p_bLongBrdPrep);
_BUR_LOCAL plcbit(* p_bLongBrdEn);
_BUR_LOCAL plcbit(* p_bOnDirMod);
_BUR_LOCAL signed long(* p_diInitTm);
_BUR_LOCAL signed long(* p_diRevDlyTm);
_BUR_LOCAL plctime(* p_tMtrOffDlyTm);
_BUR_LOCAL signed long(* p_diTxInTimeOut);
_BUR_LOCAL signed long(* p_diTxOutTimeOut);
_BUR_LOCAL eConvDir(* p_eDirection);
_BUR_LOCAL plcbit(* p_bGdBrdInit);
_BUR_LOCAL plcbit(* p_bGdBrdEnt);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plctime(* p_tPshrExtTO);
_BUR_LOCAL plctime(* p_tPshrRetTO);
_BUR_LOCAL plctime(* p_tPullerExtTO);
_BUR_LOCAL plctime(* p_tPullerRetTO);
_BUR_LOCAL plctime(* p_tRotHomeTO);
_BUR_LOCAL plctime(* p_tRotRemoteTO);
_BUR_LOCAL plctime(* p_tRejectUpTO);
_BUR_LOCAL plctime(* p_tRejectDownTO);
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bLeftSen);
_BUR_LOCAL plcbit(* p_bRightSen);
_BUR_LOCAL plcbit(* p_bMiddleSen);
_BUR_LOCAL plcbit(* p_bPullerChkSen);
_BUR_LOCAL plcbit(* p_bPshrExtSen);
_BUR_LOCAL plcbit(* p_bPshrRetSen);
_BUR_LOCAL plcbit(* p_bPshrExtSafetySen);
_BUR_LOCAL plcbit(* p_bPshrRetSafetySen);
_BUR_LOCAL plcbit(* p_bPullerExtSen);
_BUR_LOCAL plcbit(* p_bPullerRetSen);
_BUR_LOCAL plcbit(* p_bPullerExtSafetySen);
_BUR_LOCAL plcbit(* p_bPullerRetSafetySen);
_BUR_LOCAL plcbit(* p_bRotHomeSen);
_BUR_LOCAL plcbit(* p_bRotRemoteSen);
_BUR_LOCAL plcbit(* p_bRotHomeSafetySen);
_BUR_LOCAL plcbit(* p_bRotRemoteSafetySen);
_BUR_LOCAL plcbit(* p_bRejectUpSen);
_BUR_LOCAL plcbit(* p_bRejectDownSen);
_BUR_LOCAL plcbit(* p_bRejectUpSafetySen);
_BUR_LOCAL plcbit(* p_bRejectDownSafetySen);
_BUR_LOCAL plcbit(* p_bUSHermesDSRdy);
_BUR_LOCAL plcbit(* p_bDSHermesUSRdy);
_BUR_LOCAL plcbit(* p_bUSHermesReversalDSRdy);
_BUR_LOCAL plcbit(* p_bDSHermesReversalUSRdy);
_BUR_LOCAL eConvAction eAct;
_BUR_LOCAL eConvAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[61][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[200];
_BUR_LOCAL plcbit bHvBrd;
_BUR_LOCAL plcbit bRejHvBrd;
_BUR_LOCAL plcbit bInspHvBrd;
_BUR_LOCAL plcbit bGdBrd;
_BUR_LOCAL plcbit bLmtSenActivated;
_BUR_LOCAL plcbit bMtrSigOnOrLToR;
_BUR_LOCAL plcbit bMtrDirOrRToL;
_BUR_LOCAL plcbit bPshrExtCtrl;
_BUR_LOCAL plcbit bPshrTwoOutputControl;
_BUR_LOCAL plcbit bPshrExtended;
_BUR_LOCAL plcbit bPshrRetracted;
_BUR_LOCAL plcbit bPullerExtCtrl;
_BUR_LOCAL plcbit bPullerRetCtrl;
_BUR_LOCAL plcbit bPullerTwoOutputControl;
_BUR_LOCAL plcbit bPullerExtended;
_BUR_LOCAL plcbit bPullerRetracted;
_BUR_LOCAL plcbit bRotRemoteCtrl;
_BUR_LOCAL plcbit bRotTwoOutputControl;
_BUR_LOCAL plcbit bRotAtRemote;
_BUR_LOCAL plcbit bRotAtHome;
_BUR_LOCAL plcbit bRejectUpCtrl;
_BUR_LOCAL plcbit bRejectDownCtrl;
_BUR_LOCAL plcbit bRejectTwoOutputControl;
_BUR_LOCAL plcbit bRejectAtUp;
_BUR_LOCAL plcbit bRejectAtDown;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bLongBrdPrep;
_BUR_LOCAL plcbit bLongBrdEn;
_BUR_LOCAL plcbit bOnDirMod;
_BUR_LOCAL signed long diInitTm;
_BUR_LOCAL signed long diRevDlyTm;
_BUR_LOCAL plctime tMtrOffDlyTm;
_BUR_LOCAL signed long diTxInTimeOut;
_BUR_LOCAL signed long diTxOutTimeOut;
_BUR_LOCAL eConvDir eDirection;
_BUR_LOCAL plcbit bGdBrdInit;
_BUR_LOCAL plcbit bGdBrdEnt;
_BUR_LOCAL plcbit bLeftSen;
_BUR_LOCAL plcbit bRightSen;
_BUR_LOCAL plcbit bMiddleSen;
_BUR_LOCAL plcbit bPullerChkSen;
_BUR_LOCAL plcbit bPshrExtSen;
_BUR_LOCAL plcbit bPshrRetSen;
_BUR_LOCAL plcbit bPshrExtSafetySen;
_BUR_LOCAL plcbit bPshrRetSafetySen;
_BUR_LOCAL plcbit bPullerExtSen;
_BUR_LOCAL plcbit bPullerRetSen;
_BUR_LOCAL plcbit bPullerExtSafetySen;
_BUR_LOCAL plcbit bPullerRetSafetySen;
_BUR_LOCAL plcbit bRotHomeSen;
_BUR_LOCAL plcbit bRotRemoteSen;
_BUR_LOCAL plcbit bRotHomeSafetySen;
_BUR_LOCAL plcbit bRotRemoteSafetySen;
_BUR_LOCAL plcbit bRejectUpSen;
_BUR_LOCAL plcbit bRejectDownSen;
_BUR_LOCAL plcbit bRejectUpSafetySen;
_BUR_LOCAL plcbit bRejectDownSafetySen;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plctime tPshrExtTO;
_BUR_LOCAL plctime tPshrRetTO;
_BUR_LOCAL plctime tPullerExtTO;
_BUR_LOCAL plctime tPullerRetTO;
_BUR_LOCAL plctime tRotHomeTO;
_BUR_LOCAL plctime tRotRemoteTO;
_BUR_LOCAL plctime tRejectUpTO;
_BUR_LOCAL plctime tRejectDownTO;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bInletOff;
_BUR_LOCAL struct TON fbWaitTm;
_BUR_LOCAL eConvAction eStatOld;
_BUR_LOCAL struct fbConvSenToSenTm fbInit;
_BUR_LOCAL struct fbConvSenToSen fbEnt;
_BUR_LOCAL struct fbConvSenToSenTm1 fbRev;
_BUR_LOCAL struct fbConvSenToSenTm fbPreExit;
_BUR_LOCAL struct fbConvSenToSenOff fbExit;
_BUR_LOCAL struct fbConvSenToSenOff1 fbExit1;
_BUR_LOCAL struct fbConvLongBrd fbLongBrd;
_BUR_LOCAL struct fbConvMtrOff fbStop;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbPshrExtChk;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbPshrRetChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbPullerExtChk;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbPullerRetChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbRotHomeChk;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbRotRemoteChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbRejectUpChk;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbRejectDownChk;
_BUR_LOCAL unsigned long udiModuleNum;
