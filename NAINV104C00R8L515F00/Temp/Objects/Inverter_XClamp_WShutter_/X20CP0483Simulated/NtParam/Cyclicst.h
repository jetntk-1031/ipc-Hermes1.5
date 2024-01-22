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

#ifndef __AS__TYPE_MpComSeveritiesEnum
#define __AS__TYPE_MpComSeveritiesEnum
typedef enum MpComSeveritiesEnum
{	mpCOM_SEV_SUCCESS = 0,
	mpCOM_SEV_INFORMATIONAL = 1,
	mpCOM_SEV_WARNING = 2,
	mpCOM_SEV_ERROR = 3,
} MpComSeveritiesEnum;
#endif

#ifndef __AS__TYPE_MpComIdentType
#define __AS__TYPE_MpComIdentType
typedef struct MpComIdentType
{	unsigned long Internal[2];
} MpComIdentType;
#endif

#ifndef __AS__TYPE_MpComInternalDataType
#define __AS__TYPE_MpComInternalDataType
typedef struct MpComInternalDataType
{	unsigned long pObject;
	unsigned long State;
} MpComInternalDataType;
#endif

#ifndef __AS__TYPE_MpRecipeErrorEnum
#define __AS__TYPE_MpRecipeErrorEnum
typedef enum MpRecipeErrorEnum
{	mpRECIPE_NO_ERROR = 0,
	mpRECIPE_ERR_ACTIVATION = -1064239103,
	mpRECIPE_ERR_MPLINK_NULL = -1064239102,
	mpRECIPE_ERR_MPLINK_INVALID = -1064239101,
	mpRECIPE_ERR_MPLINK_CHANGED = -1064239100,
	mpRECIPE_ERR_MPLINK_CORRUPT = -1064239099,
	mpRECIPE_ERR_MPLINK_IN_USE = -1064239098,
	mpRECIPE_ERR_CONFIG_INVALID = -1064239091,
	mpRECIPE_ERR_SAVE_DATA = -1064140799,
	mpRECIPE_ERR_LOAD_DATA = -1064140798,
	mpRECIPE_ERR_INVALID_FILE_DEV = -1064140797,
	mpRECIPE_ERR_INVALID_FILE_NAME = -1064140796,
	mpRECIPE_ERR_CMD_IN_PROGRESS = -1064140795,
	mpRECIPE_WRN_SAVE_WITH_WARN = -2137882618,
	mpRECIPE_WRN_LOAD_WITH_WARN = -2137882617,
	mpRECIPE_ERR_SAVE_WITH_ERRORS = -1064140792,
	mpRECIPE_ERR_LOAD_WITH_ERRORS = -1064140791,
	mpRECIPE_ERR_MISSING_RECIPE = -1064140790,
	mpRECIPE_ERR_MISSING_MPFILE = -1064140789,
	mpRECIPE_ERR_INVALID_SORT_ORDER = -1064140788,
	mpRECIPE_WRN_MISSING_UICONNECT = -2137882611,
	mpRECIPE_ERR_INVALID_PV_NAME = -1064140786,
	mpRECIPE_ERR_INVALID_LOAD_TYPE = -1064140785,
	mpRECIPE_ERR_LISTING_FILES = -1064140784,
	mpRECIPE_ERR_PV_NAME_NULL = -1064140783,
	mpRECIPE_WRN_NO_PV_REGISTERED = -2137882606,
	mpRECIPE_ERR_SYNC_SAVE_ACTIVE = -1064140781,
	mpRECIPE_ERR_DELETING_FILE = -1064140780,
	mpRECIPE_WRN_EMPTY_RECIPE = -2137882603,
	mpRECIPE_INF_WAIT_RECIPE_FB = 1083342870,
	mpRECIPE_ERR_RENAMING_FILE = -1064140777,
	mpRECIPE_WRN_NO_PV_FOUND = -2137882600,
	mpRECIPE_WRN_LIST_SIZE = -2137882599,
} MpRecipeErrorEnum;
#endif

#ifndef __AS__TYPE_MpRecipeStatusIDType
#define __AS__TYPE_MpRecipeStatusIDType
typedef struct MpRecipeStatusIDType
{	MpRecipeErrorEnum ID;
	MpComSeveritiesEnum Severity;
	unsigned short Code;
} MpRecipeStatusIDType;
#endif

#ifndef __AS__TYPE_MpRecipeDiagType
#define __AS__TYPE_MpRecipeDiagType
typedef struct MpRecipeDiagType
{	MpRecipeStatusIDType StatusID;
} MpRecipeDiagType;
#endif

#ifndef __AS__TYPE_MpRecipeInfoType
#define __AS__TYPE_MpRecipeInfoType
typedef struct MpRecipeInfoType
{	MpRecipeDiagType Diag;
} MpRecipeInfoType;
#endif

#ifndef __AS__TYPE_MpRecipeXmlInfoType
#define __AS__TYPE_MpRecipeXmlInfoType
typedef struct MpRecipeXmlInfoType
{	unsigned long FileSize;
	unsigned long PendingSync;
	MpRecipeDiagType Diag;
	plcstring LastLoadedRecipe[256];
} MpRecipeXmlInfoType;
#endif

#ifndef __AS__TYPE_MpRecipeXmlHeaderType
#define __AS__TYPE_MpRecipeXmlHeaderType
typedef struct MpRecipeXmlHeaderType
{	plcstring Name[101];
	plcstring Description[256];
	plcstring Version[21];
	plcdt DateTime;
} MpRecipeXmlHeaderType;
#endif

#ifndef __AS__TYPE_MpRecipeXmlLoadEnum
#define __AS__TYPE_MpRecipeXmlLoadEnum
typedef enum MpRecipeXmlLoadEnum
{	mpRECIPE_XML_LOAD_ALL = 0,
	mpRECIPE_XML_LOAD_HEADER = 1,
} MpRecipeXmlLoadEnum;
#endif

struct AsMemPartDestroy
{	unsigned long ident;
	unsigned short status;
	plcbit enable;
};
_BUR_PUBLIC void AsMemPartDestroy(struct AsMemPartDestroy* inst);
#ifndef __AS__TYPE_tyMemDestroyInternal
#define __AS__TYPE_tyMemDestroyInternal
typedef struct tyMemDestroyInternal
{	struct AsMemPartDestroy fbMemPartDestroy;
} tyMemDestroyInternal;
#endif

struct AsMemPartAlloc
{	unsigned long ident;
	unsigned long len;
	unsigned short status;
	unsigned long mem;
	plcbit enable;
};
_BUR_PUBLIC void AsMemPartAlloc(struct AsMemPartAlloc* inst);
struct AsMemPartCreate
{	unsigned long len;
	unsigned short status;
	unsigned long ident;
	plcbit enable;
};
_BUR_PUBLIC void AsMemPartCreate(struct AsMemPartCreate* inst);
#ifndef __AS__TYPE_tyMemCreateInternal
#define __AS__TYPE_tyMemCreateInternal
typedef struct tyMemCreateInternal
{	struct AsMemPartAlloc fbMemPartAlloc;
	struct AsMemPartCreate fbMemPartCreate;
	unsigned char usiStep;
} tyMemCreateInternal;
#endif

struct FileClose
{	unsigned long ident;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileClose(struct FileClose* inst);
#ifndef __AS__TYPE_tyFileCloseInternal
#define __AS__TYPE_tyFileCloseInternal
typedef struct tyFileCloseInternal
{	struct FileClose fbFileClose;
} tyFileCloseInternal;
#endif

struct fbFileClose
{	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileCloseInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileClose(struct fbFileClose* inst);
struct FileCreate
{	unsigned long pDevice;
	unsigned long pFile;
	unsigned short status;
	unsigned long ident;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileCreate(struct FileCreate* inst);
struct FileOpen
{	unsigned long pDevice;
	unsigned long pFile;
	unsigned char mode;
	unsigned short status;
	unsigned long ident;
	unsigned long filelen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileOpen(struct FileOpen* inst);
#ifndef __AS__TYPE_tyFileOpenCreateInternal
#define __AS__TYPE_tyFileOpenCreateInternal
typedef struct tyFileOpenCreateInternal
{	struct FileCreate fbFileCreate;
	struct FileOpen fbFileOpen;
	unsigned char usiStep;
} tyFileOpenCreateInternal;
#endif

struct fbFileOpenCreate
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileOpenCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOpenCreate(struct fbFileOpenCreate* inst);
struct FileWriteEx
{	unsigned long ident;
	unsigned long offset;
	unsigned long pSrc;
	unsigned long len;
	unsigned long option;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileWriteEx(struct FileWriteEx* inst);
#ifndef __AS__TYPE_tyFileWriteInternal
#define __AS__TYPE_tyFileWriteInternal
typedef struct tyFileWriteInternal
{	struct FileWriteEx fbFileWrite;
} tyFileWriteInternal;
#endif

struct fbFileWrite
{	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned long udiStatus;
	tyFileWriteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileWrite(struct fbFileWrite* inst);
#ifndef __AS__TYPE_tyFileFullWriteInternal
#define __AS__TYPE_tyFileFullWriteInternal
typedef struct tyFileFullWriteInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileWrite fbFileWrite;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullWriteInternal;
#endif

struct fbFileFullWrite
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned long udiStatus;
	tyFileFullWriteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullWrite(struct fbFileFullWrite* inst);
struct fbMemCreate
{	unsigned long udiLen;
	unsigned long udiIdent;
	unsigned long p_Dest;
	unsigned long udiStatus;
	tyMemCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMemCreate(struct fbMemCreate* inst);
struct fbMemDestroy
{	unsigned long udiIdent;
	unsigned long udiStatus;
	tyMemDestroyInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMemDestroy(struct fbMemDestroy* inst);
#ifndef __AS__TYPE_tyFileFullWriteEncryInternal
#define __AS__TYPE_tyFileFullWriteEncryInternal
typedef struct tyFileFullWriteEncryInternal
{	struct fbFileFullWrite fbFileWrite;
	struct fbMemCreate fbMemCreate;
	struct fbMemDestroy fbMemDestroy;
	unsigned long p_Dest;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullWriteEncryInternal;
#endif

#ifndef __AS__TYPE_tyFileOpenInternal
#define __AS__TYPE_tyFileOpenInternal
typedef struct tyFileOpenInternal
{	struct FileOpen fbFileOpen;
} tyFileOpenInternal;
#endif

struct fbFileOpen
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileOpenInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOpen(struct fbFileOpen* inst);
struct FileReadEx
{	unsigned long ident;
	unsigned long offset;
	unsigned long pDest;
	unsigned long len;
	unsigned short status;
	unsigned long bytesread;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileReadEx(struct FileReadEx* inst);
#ifndef __AS__TYPE_tyFileReadInternal
#define __AS__TYPE_tyFileReadInternal
typedef struct tyFileReadInternal
{	struct FileReadEx fbFileRead;
} tyFileReadInternal;
#endif

struct fbFileRead
{	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileRead(struct fbFileRead* inst);
#ifndef __AS__TYPE_tyFileFullReadInternal
#define __AS__TYPE_tyFileFullReadInternal
typedef struct tyFileFullReadInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpen fbFileOpen;
	struct fbFileRead fbFileRead;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullReadInternal;
#endif

struct fbFileFullRead
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileFullReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullRead(struct fbFileFullRead* inst);
#ifndef __AS__TYPE_tyFileFullReadEncryInternal
#define __AS__TYPE_tyFileFullReadEncryInternal
typedef struct tyFileFullReadEncryInternal
{	struct fbFileFullRead fbFileRead;
	struct fbMemCreate fbMemCreate;
	struct fbMemDestroy fbMemDestroy;
	unsigned long p_Dest;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullReadEncryInternal;
#endif

struct DirCreate
{	unsigned long pDevice;
	unsigned long pName;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirCreate(struct DirCreate* inst);
#ifndef __AS__TYPE_tyDirCreateInternal
#define __AS__TYPE_tyDirCreateInternal
typedef struct tyDirCreateInternal
{	struct DirCreate fbDirCreate;
} tyDirCreateInternal;
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

struct MpRecipeRegPar
{	struct MpComIdentType(* MpLink);
	plcstring(* PVName)[101];
	plcstring(* Category)[51];
	signed long StatusID;
	MpRecipeInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Active;
	plcbit Error;
	plcbit UpdateNotification;
};
_BUR_PUBLIC void MpRecipeRegPar(struct MpRecipeRegPar* inst);
struct MpRecipeXml
{	struct MpComIdentType(* MpLink);
	plcstring(* DeviceName)[51];
	plcstring(* FileName)[256];
	struct MpRecipeXmlHeaderType(* Header);
	plcstring(* Category)[51];
	MpRecipeXmlLoadEnum LoadType;
	signed long StatusID;
	MpRecipeXmlInfoType Info;
	MpComInternalDataType Internal;
	plcbit Enable;
	plcbit ErrorReset;
	plcbit Load;
	plcbit Save;
	plcbit UpdateNotification;
	plcbit Active;
	plcbit Error;
	plcbit CommandBusy;
	plcbit CommandDone;
};
_BUR_PUBLIC void MpRecipeXml(struct MpRecipeXml* inst);
struct fbFileFullWriteEncry
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned char usiEncryptCode;
	unsigned long udiStatus;
	tyFileFullWriteEncryInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullWriteEncry(struct fbFileFullWriteEncry* inst);
struct fbFileFullReadEncry
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned char usiEncryptCode;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileFullReadEncryInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullReadEncry(struct fbFileFullReadEncry* inst);
struct fbDirCreate
{	plcstring sDevice[81];
	plcstring sDirName[81];
	unsigned long udiStatus;
	tyDirCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirCreate(struct fbDirCreate* inst);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eNtParamAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcstring(* p_sFileName)[81];
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcstring(* p_sFileName1)[81];
_BUR_LOCAL plcstring(* p_sPVName)[81];
_BUR_LOCAL struct MpComIdentType(* p_tyMpNtParamMpLink);
_BUR_LOCAL eNtParamAction eAct;
_BUR_LOCAL eNtParamAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL tyNtParam tyNtParamCurr;
_BUR_LOCAL tyNtParam tyMpNtParamCurr1;
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcstring sFileName[81];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sFileName1[81];
_BUR_LOCAL plcstring sPVName[101];
_BUR_LOCAL MpComIdentType tyMpNtParamMpLink;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL struct MpRecipeRegPar fbMpNtParamRegPar;
_BUR_LOCAL struct MpRecipeXml fbMpNtParamXml;
_BUR_LOCAL struct fbDirCreate fbDirCreate1;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbDirCreate fbDirCreate3;
_BUR_LOCAL struct fbFileFullReadEncry fbFileRead1;
_BUR_LOCAL struct fbFileFullWriteEncry fbFileWrite1;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupNtParamAct;
_GLOBAL plcstring g_sNtParamProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL MpComIdentType gRecipeXml;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Alarm(void);
