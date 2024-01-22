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

#ifndef __AS__TYPE_eTLBuzMod
#define __AS__TYPE_eTLBuzMod
typedef enum eTLBuzMod
{	TLBuzModNutek = 0,
	TLBuzModMEK = 1,
	TLBuzModBHTC = 2,
	TLBuzModAptiv = 3,
} eTLBuzMod;
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

_BUR_LOCAL eNtParamAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyNtParam tyNtParamCurr;
_BUR_LOCAL plcbit bFileNotFound;
_GLOBAL unsigned long p_NtParamStat;
_GLOBAL unsigned long p_NtParamStatus;
_GLOBAL unsigned long p_NtParamStatTxt;
_GLOBAL unsigned long p_NtParamAlmData;
_GLOBAL unsigned long p_NtParamFileNotFound;
_GLOBAL unsigned long p_NtParamCurr;
_GLOBAL unsigned long p_NtParamDISettings;
_GLOBAL unsigned long p_NtParamDOSettings;
_GLOBAL unsigned long p_NtParamAWPrep;
_GLOBAL unsigned long p_NtParamLFPrep;
_GLOBAL unsigned long p_NtParamLeaderMc;
_GLOBAL unsigned long p_NtParamLFUsrSetPrep;
_GLOBAL unsigned long p_NtParamLFWidthLimit;
_GLOBAL unsigned long p_NtParamLFProdWidthChk;
_GLOBAL unsigned long p_NtParamUSWidthChkPrep;
_GLOBAL unsigned long p_NtParamDSWidthChkPrep;
_GLOBAL unsigned long p_NtParamLCSLFPrep;
_GLOBAL unsigned long p_NtParamLCSReqRcpPrep;
_GLOBAL unsigned long p_NtParamLCSManageRcpPrep;
_GLOBAL unsigned long p_NtParamLCSLiveDatPrep;
_GLOBAL unsigned long p_NtParamUSExtSMEMAPrep;
_GLOBAL unsigned long p_NtParamDSExtSMEMAPrep;
_GLOBAL unsigned long p_NtParamVSMEMAPrep;
_GLOBAL unsigned long p_NtParamHermesPrep;
_GLOBAL unsigned long p_NtParamHermesRmtPrep;
_GLOBAL unsigned long p_NtParamSSaverPrep;
_GLOBAL unsigned long p_NtParamWidthOffset;
_GLOBAL unsigned long p_NtParamJobNo;
_GLOBAL unsigned long p_NtParamNtAddr;
_GLOBAL unsigned long p_NtParamProjConvDir;
_GLOBAL unsigned long p_NtParamProjBypsInitConvPrep;
_GLOBAL unsigned long p_NtParamProjCoatingPrep;
_GLOBAL unsigned long p_NtParamProjClampPrep;
_GLOBAL unsigned long p_NtParamProjClampOption;
_GLOBAL unsigned long p_NtParamProjStopperPrep;
_GLOBAL unsigned long p_NtParamProjInletShutPrep;
_GLOBAL unsigned long p_NtParamProjOutletShutPrep;
_GLOBAL unsigned long p_NtParamProjRlsNewProdPrep;
_GLOBAL unsigned long p_NtParamUsrFolderProgNm;
_GLOBAL unsigned long p_NtParamLibVersionProgNm;
_GLOBAL unsigned long p_NtParamTimeProgNm;
_GLOBAL unsigned long p_NtParamHWInfoProgNm;
_GLOBAL unsigned long p_NtParamHWInfoDevice;
_GLOBAL unsigned long p_NtParamTLChgRcpBlinkTm;
_GLOBAL unsigned long p_NtParamTLErrBlinkTm;
_GLOBAL unsigned long p_NtParamBuzErrOnTm;
_GLOBAL unsigned long p_NtParamBuzErrRestTm;
_GLOBAL unsigned long p_NtParamBuzErrOnCntr;
_GLOBAL unsigned long p_NtParamBuzErrStopSeqEn;
_GLOBAL unsigned long p_NtParamBuzErrStopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarnBlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarnOnTm;
_GLOBAL unsigned long p_NtParamBuzWarnRestTm;
_GLOBAL unsigned long p_NtParamBuzWarnOnCntr;
_GLOBAL unsigned long p_NtParamBuzWarnStopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarnStopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn1BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn1OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn1RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn1OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn1StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn1StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn2BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn2OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn2RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn2OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn2StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn2StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn3BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn3OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn3RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn3OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn3StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn3StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn4BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn4OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn4RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn4OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn4StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn4StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn5BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn5OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn5RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn5OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn5StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn5StopSeqCntr;
_GLOBAL unsigned long p_NtParamBuzAlertOnTm;
_GLOBAL unsigned long p_NtParamBuzAlertRestTm;
_GLOBAL unsigned long p_NtParamBuzAlertOnCntr;
_GLOBAL unsigned long p_NtParamBuzAlertStopSeqEn;
_GLOBAL unsigned long p_NtParamBuzAlertStopSeqCntr;
_GLOBAL unsigned long p_NtParamTLBlueBlinkTm;
_GLOBAL unsigned long p_NtParamTLAmberBlinkTm;
_GLOBAL unsigned long p_NtParamTLWhiteBlinkTm;
_GLOBAL unsigned long p_NtParamTLRedBlinkTm;
_GLOBAL unsigned long p_NtParamTLGreenBlinkTm;
_GLOBAL unsigned long p_NtParamTLBuzMode;
_GLOBAL unsigned long p_NtParamAlmProgNm;
_GLOBAL unsigned long p_NtParamAlmFileKeepDay;
_GLOBAL unsigned long p_NtParamProdRcpProgNm;
_GLOBAL unsigned long p_NtParamProdRcpListFileNm;
_GLOBAL unsigned long p_NtParamProdRcpSingleFileNm;
_GLOBAL unsigned long p_NtParamMpProdRcpProgNm;
_GLOBAL unsigned long p_NtParamMpProdRcpFileNm;
_GLOBAL unsigned long p_NtParamMpProdRcpPVNm;
_GLOBAL unsigned long p_NtParamMcParamProgNm;
_GLOBAL unsigned long p_NtParamMcParamFileNm;
_GLOBAL unsigned long p_NtParamUsrMgmtProgNm;
_GLOBAL unsigned long p_NtParamUSSMEMAProgNm;
_GLOBAL unsigned long p_NtParamUSSMEMARstDlyTm;
_GLOBAL unsigned long p_NtParamUSSMEMASigInChkTm;
_GLOBAL unsigned long p_NtParamDSSMEMAProgNm;
_GLOBAL unsigned long p_NtParamDSSMEMARstDlyTm;
_GLOBAL unsigned long p_NtParamDSSMEMASigInChkTm;
_GLOBAL unsigned long p_NtParamConvProgNm;
_GLOBAL unsigned long p_NtParamConvOnDirMod;
_GLOBAL unsigned long p_NtParamConvMtrOffDlyTm;
_GLOBAL unsigned long p_NtParamConvFwdDlyTm;
_GLOBAL unsigned long p_NtParamConvRevDlyTm;
_GLOBAL unsigned long p_NtParamStopperProgNm;
_GLOBAL unsigned long p_NtParamStopperTwoCtrlIn;
_GLOBAL unsigned long p_NtParamStopperExtDlyTm;
_GLOBAL unsigned long p_NtParamStopperRetDlyTm;
_GLOBAL unsigned long p_NtParamClampProgNm;
_GLOBAL unsigned long p_NtParamClampTwoCtrlIn;
_GLOBAL unsigned long p_NtParamClampExtDlyTm;
_GLOBAL unsigned long p_NtParamClampRetDlyTm;
_GLOBAL unsigned long p_NtParamInShutterProgNm;
_GLOBAL unsigned long p_NtParamInShutterTwoCtrlIn;
_GLOBAL unsigned long p_NtParamInShutterExtTO;
_GLOBAL unsigned long p_NtParamInShutterRetTO;
_GLOBAL unsigned long p_NtParamOutShutterProgNm;
_GLOBAL unsigned long p_NtParamOutShutterTwoCtrlIn;
_GLOBAL unsigned long p_NtParamOutShutterExtTO;
_GLOBAL unsigned long p_NtParamOutShutterRetTO;
_GLOBAL unsigned long p_NtParamClamp1ProgNm;
_GLOBAL unsigned long p_NtParamClamp1TwoCtrlIn;
_GLOBAL unsigned long p_NtParamClamp1ExtTO;
_GLOBAL unsigned long p_NtParamClamp1RetTO;
_GLOBAL unsigned long p_NtParamClamp2ProgNm;
_GLOBAL unsigned long p_NtParamClamp2TwoCtrlIn;
_GLOBAL unsigned long p_NtParamClamp2ExtTO;
_GLOBAL unsigned long p_NtParamClamp2RetTO;
_GLOBAL unsigned long p_NtParamClamp3ProgNm;
_GLOBAL unsigned long p_NtParamClamp3TwoCtrlIn;
_GLOBAL unsigned long p_NtParamClamp3ExtTO;
_GLOBAL unsigned long p_NtParamClamp3RetTO;
_GLOBAL unsigned long p_NtParamMotorOnDlyTm;
_GLOBAL unsigned long p_NtParamMotorOffDlyTm;
_GLOBAL unsigned long p_NtParamBrakeOnDlyTm;
_GLOBAL unsigned long p_NtParamBrakeOffDlyTm;
_GLOBAL unsigned long p_NtParamTimeOut;
_GLOBAL unsigned long p_NtParamAWProgNm;
_GLOBAL unsigned long p_NtParamAWDevice;
_GLOBAL unsigned long p_NtParamAWNode;
_GLOBAL unsigned long p_NtParamAWDir;
_GLOBAL unsigned long p_NtParamAWDirBl;
_GLOBAL unsigned long p_NtParamAWPitchInUM;
_GLOBAL unsigned long p_NtParamAWMovBlDistInUM;
_GLOBAL unsigned long p_NtParamAWParamInHm;
_GLOBAL unsigned long p_NtParamAWParamInConvert;
_GLOBAL unsigned long p_NtParamAWParam;
_GLOBAL unsigned long p_NtParamAWAcc;
_GLOBAL unsigned long p_NtParamAWDec;
_GLOBAL unsigned long p_NtParamAWAutoSpd;
_GLOBAL unsigned long p_NtParamAWTuning;
_GLOBAL unsigned long p_NtParamAWMotorType;
_GLOBAL unsigned long p_NtParamInvertProgNm;
_GLOBAL unsigned long p_NtParamInvertDevice;
_GLOBAL unsigned long p_NtParamInvertNode;
_GLOBAL unsigned long p_NtParamInvertDir;
_GLOBAL unsigned long p_NtParamInvertParamInHm;
_GLOBAL unsigned long p_NtParamInvertParamInConvert;
_GLOBAL unsigned long p_NtParamInvertParam;
_GLOBAL unsigned long p_NtParamInvertAcc;
_GLOBAL unsigned long p_NtParamInvertDec;
_GLOBAL unsigned long p_NtParamInvertAutoSpd;
_GLOBAL unsigned long p_NtParamInvertTuning;
_GLOBAL unsigned long p_NtParamInvertMotorType;
_GLOBAL unsigned long p_NtParamDInputProgNm;
_GLOBAL unsigned long p_NtParamMcProgNm;
_GLOBAL unsigned long p_NtParamHermesProgNm;
_GLOBAL unsigned long p_NtParamHermesRetainFileNm;
_GLOBAL unsigned long p_NtParamHermesConfigFileNm;
_GLOBAL unsigned long p_NtParamUSHermesProgNm;
_GLOBAL unsigned long p_NtParamUSHermesFileKeepDay;
_GLOBAL unsigned long p_NtParamUSHermesAliveTmInSec;
_GLOBAL unsigned long p_NtParamUSHermesConnTO;
_GLOBAL unsigned long p_NtParamDSHermesProgNm;
_GLOBAL unsigned long p_NtParamDSHermesFileKeepDay;
_GLOBAL unsigned long p_NtParamDSHermesAliveTmInSec;
_GLOBAL unsigned long p_NtParamDSHermesConnTO;
_GLOBAL unsigned long p_NtParamUSHermes2ProgNm;
_GLOBAL unsigned long p_NtParamUSHermes2FileKeepDay;
_GLOBAL unsigned long p_NtParamUSHermes2AliveTmInSec;
_GLOBAL unsigned long p_NtParamUSHermes2ConnTO;
_GLOBAL unsigned long p_NtParamDSHermes2ProgNm;
_GLOBAL unsigned long p_NtParamDSHermes2FileKeepDay;
_GLOBAL unsigned long p_NtParamDSHermes2AliveTmInSec;
_GLOBAL unsigned long p_NtParamDSHermes2ConnTO;
_GLOBAL unsigned long p_NtParamRmtHermesProgNm;
_GLOBAL unsigned long p_NtParamRmtHermesConfigFileNm;
_GLOBAL unsigned long p_NtParamRmtHermesFileKeepDay;
_GLOBAL unsigned long p_NtParamRmtHermesAliveTmInSec;
_GLOBAL unsigned long p_NtParamRmtHermesSndBffrSize;
_GLOBAL unsigned long p_NtParamRmtHermesRcvBffrSize;
_GLOBAL unsigned long p_NtParamOpsAWProgNm;
_GLOBAL unsigned long p_NtParamOpsInitConvProgNm;
_GLOBAL unsigned long p_NtParamOpsInitPneuProgNm;
_GLOBAL unsigned long p_NtParamOpsConvProgNm;
_GLOBAL unsigned long p_NtParamOpsPneuProgNm;
_GLOBAL unsigned long p_NtParamConvBffrProgNm;
_GLOBAL unsigned long p_NtParamConvBffrFileNm;
_GLOBAL unsigned long p_NtParamConvBffrIdx;
_GLOBAL unsigned long p_NtParamLFLeaderProgNm;
_GLOBAL unsigned long p_NtParamLFLeaderOnlineChkDlyTm;
_GLOBAL unsigned long p_NtParamLFLeaderSetTmOffDlyTm;
_GLOBAL unsigned long p_NtParamLFFollowerProgNm;
_GLOBAL unsigned long p_NtParamFollower1ProgNm;
_GLOBAL unsigned long p_NtParamLCSProgNm;
_GLOBAL unsigned long p_NtParamLCSMngRcpProgNm;
_GLOBAL unsigned long p_NtParamLCSLFProgNm;
_GLOBAL unsigned long p_NtParamProdRcpMinWidth;
_GLOBAL unsigned long p_NtParamProdRcpMaxWidth;
_GLOBAL unsigned long p_NtParamProdRcpMinMcMod;
_GLOBAL unsigned long p_NtParamProdRcpMaxMcMod;
_GLOBAL unsigned long p_NtParamProdRcpMinFlippedBrd;
_GLOBAL unsigned long p_NtParamProdRcpMaxFlippedBrd;
_GLOBAL unsigned long p_NtParamUIConvDirRL;
_GLOBAL unsigned long p_NtParamProjDBAOnRgtSen;
_GLOBAL unsigned long p_NtParamLFWidth2Prep;
_GLOBAL unsigned long p_NtParamLFFllowerOnlineChkDlyTm;
_GLOBAL unsigned long p_NTParamUnlockCovPrep;
_GLOBAL unsigned long p_NTParamMachineSafetySig;
_GLOBAL unsigned long p_NtParamProjInvertOncePrep;
_GLOBAL unsigned long p_NtParamProjInvertTwicePrep;
_GLOBAL unsigned long p_NtParamUSExtSMEMA2Prep;
_GLOBAL unsigned long p_NtParamUSSMEMA2ProgNm;
_GLOBAL unsigned long p_NtParamUSSMEMA2RstDlyTm;
_GLOBAL unsigned long p_NtParamUSSMEMA2SigInChkTm;
_GLOBAL unsigned long p_NtParamProjRtrnBrdConvDir;
_GLOBAL unsigned long p_NtParamProjChinesePrep;
_GLOBAL unsigned long p_NtParamProjGermanPrep;
_GLOBAL unsigned long p_NtParamHermesInput;
_GLOBAL unsigned long p_NtParamHermesOutput;
_GLOBAL unsigned long p_NtParamHermesSvyPrep;
_GLOBAL unsigned long p_NtParamHermesSvyFirstMc;
_GLOBAL unsigned long p_NtParamDSHermesRetainFileNm;
_GLOBAL unsigned long p_NtParamSvyHermesProgNm;
_GLOBAL unsigned long p_NtParamSvyHermesConfigFileNm;
_GLOBAL unsigned long p_NtParamSvyHermesFileKeepDay;
_GLOBAL unsigned long p_NtParamSvyHermesAliveTmInSec;
_GLOBAL unsigned long p_NtParamSvyHermesConnTO;
_GLOBAL unsigned long p_NtParamSvyHermesRetainFileNm;
