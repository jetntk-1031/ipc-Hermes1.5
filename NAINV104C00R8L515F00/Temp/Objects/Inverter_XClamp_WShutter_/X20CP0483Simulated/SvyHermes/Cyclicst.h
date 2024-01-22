#ifndef __AS__TYPE_
#define __AS__TYPE_
static signed long __AS__STRING_CMP(char* pstr1, char* pstr2);
static unsigned long __AS__MEMCPY(unsigned long pDest, unsigned long pSrc, unsigned long length);
static unsigned long __AS__MEMSET(unsigned long pDest, unsigned char value, unsigned long length);
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

#ifndef __AS__TYPE_eNetworkConfigMod
#define __AS__TYPE_eNetworkConfigMod
typedef enum eNetworkConfigMod
{	SetIPManually = 0,
	IPFromDHCPServer = 1,
} eNetworkConfigMod;
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

#ifndef __AS__TYPE_eMcParamAction
#define __AS__TYPE_eMcParamAction
typedef enum eMcParamAction
{	McParamActIdle = 0,
	McParamActCreateDir = 1,
	McParamActRead = 2,
	McParamActWrite = 3,
} eMcParamAction;
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

#ifndef __AS__TYPE_eHermesAction
#define __AS__TYPE_eHermesAction
typedef enum eHermesAction
{	HermesActIdle = 0,
	HermesActBGStartRun = 1,
	HermesActBGStopRun = 2,
	HermesActDeleteOldLog = 3,
	HermesActCreateDir = 4,
	HermesActWriteRetain = 5,
	HermesActWriteRetainLane1 = 6,
	HermesActWriteRetainLane2 = 7,
	HermesActWriteRetainLane3 = 8,
	HermesActWriteRetainLane4 = 9,
	HermesActReadRetain = 10,
	HermesActReadRetainLane1 = 11,
	HermesActReadRetainLane2 = 12,
	HermesActReadRetainLane3 = 13,
	HermesActReadRetainLane4 = 14,
	HermesActWriteConfig = 15,
	HermesActReadConfig = 16,
} eHermesAction;
#endif

#ifndef __AS__TYPE_tyHermesUSParam
#define __AS__TYPE_tyHermesUSParam
typedef struct tyHermesUSParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	unsigned short uiClntPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sHostAddress[16];
	unsigned short uiHostPort;
	plcstring sUpstreamInterfaceId[81];
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureCommand;
	plcbit bCmpTypeId;
	plcbit bCmpParam;
	plcbit bOverwrite;
} tyHermesUSParam;
#endif

#ifndef __AS__TYPE_tyHermesDSParam
#define __AS__TYPE_tyHermesDSParam
typedef struct tyHermesDSParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	plcstring sDownstreamInterfaceId[81];
	unsigned short uiSvrPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sClientAddress[16];
	unsigned short uiClientPort;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesDSParam;
#endif

#ifndef __AS__TYPE_tyHermesSvyParam
#define __AS__TYPE_tyHermesSvyParam
typedef struct tyHermesSvyParam
{	plctime tSndAlive;
	plctime tRcvAlive;
	unsigned short uiSvySvstemPort;
	signed short iLaneID;
	plcstring sMachineId[81];
	plcstring sClientAddress[16];
	unsigned short uiClientPort;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
	plcbit bFeatureInsertBrd;
} tyHermesSvyParam;
#endif

#ifndef __AS__TYPE_tyHermesConfiguration
#define __AS__TYPE_tyHermesConfiguration
typedef struct tyHermesConfiguration
{	struct tyHermesUSParam a_tyUSParam[4];
	struct tyHermesDSParam a_tyDSParam[4];
	tyHermesSvyParam tySvyParam;
} tyHermesConfiguration;
#endif

#ifndef __AS__TYPE_DTStructure
#define __AS__TYPE_DTStructure
typedef struct DTStructure
{	unsigned short year;
	unsigned char month;
	unsigned char day;
	unsigned char wday;
	unsigned char hour;
	unsigned char minute;
	unsigned char second;
	unsigned short millisec;
	unsigned short microsec;
} DTStructure;
#endif

#ifndef __AS__TYPE_fiDIR_READ_DATA
#define __AS__TYPE_fiDIR_READ_DATA
typedef struct fiDIR_READ_DATA
{	unsigned char Filename[260];
	plcdt Date;
	unsigned long Filelength;
} fiDIR_READ_DATA;
#endif

#ifndef __AS__TYPE_fiFILE_INFO
#define __AS__TYPE_fiFILE_INFO
typedef struct fiFILE_INFO
{	unsigned long size;
	unsigned long linkCnt;
	plcdt accTime;
	plcdt modTime;
	plcdt chgTime;
	unsigned long reserved[21];
} fiFILE_INFO;
#endif

struct DirInfo
{	unsigned long pDevice;
	unsigned long pPath;
	unsigned short status;
	unsigned long dirnum;
	unsigned long filenum;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirInfo(struct DirInfo* inst);
#ifndef __AS__TYPE_tyDirInfoInternal
#define __AS__TYPE_tyDirInfoInternal
typedef struct tyDirInfoInternal
{	struct DirInfo fbDirInfo;
} tyDirInfoInternal;
#endif

struct fbDirInfo
{	plcstring sDevice[81];
	plcstring sPath[81];
	unsigned long udiSubDirNum;
	unsigned long udiFileNum;
	unsigned long udiStatus;
	tyDirInfoInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirInfo(struct fbDirInfo* inst);
struct DirRead
{	unsigned long pDevice;
	unsigned long pPath;
	unsigned long entry;
	unsigned char option;
	unsigned long pData;
	unsigned long data_len;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirRead(struct DirRead* inst);
#ifndef __AS__TYPE_tyDirReadInternal
#define __AS__TYPE_tyDirReadInternal
typedef struct tyDirReadInternal
{	struct DirRead fbDirRead;
} tyDirReadInternal;
#endif

struct fbDirRead
{	plcstring sDevice[81];
	plcstring sPath[81];
	unsigned long udiEntry;
	unsigned char usiOption;
	fiDIR_READ_DATA tyDirReadData;
	unsigned long udiStatus;
	tyDirReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirRead(struct fbDirRead* inst);
struct FileDelete
{	unsigned long pDevice;
	unsigned long pName;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileDelete(struct FileDelete* inst);
#ifndef __AS__TYPE_tyFileDeleteInternal
#define __AS__TYPE_tyFileDeleteInternal
typedef struct tyFileDeleteInternal
{	struct FileDelete fbFileDelete;
} tyFileDeleteInternal;
#endif

struct fbFileDelete
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiStatus;
	tyFileDeleteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileDelete(struct fbFileDelete* inst);
#ifndef __AS__TYPE_tyFileOldDelInternal
#define __AS__TYPE_tyFileOldDelInternal
typedef struct tyFileOldDelInternal
{	struct fbDirInfo fbDirInfo;
	struct fbDirRead fbDirRead;
	struct fbFileDelete fbFileDel;
	plcstring sFileNm[261];
	fiDIR_READ_DATA tyfiDIR_READ_DATA;
	unsigned long udiDTNow;
	unsigned long udiFileDT;
	unsigned long udiFileKeep;
	unsigned long udiFileNum;
	unsigned long udiKeywordLen;
	unsigned char usiStep;
} tyFileOldDelInternal;
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
struct FileInfo
{	unsigned long pDevice;
	unsigned long pName;
	unsigned long pInfo;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileInfo(struct FileInfo* inst);
#ifndef __AS__TYPE_tyFileInfoInternal
#define __AS__TYPE_tyFileInfoInternal
typedef struct tyFileInfoInternal
{	struct FileInfo fbFileInfo;
} tyFileInfoInternal;
#endif

struct fbFileInfo
{	plcstring sDevice[81];
	plcstring sFile[81];
	fiFILE_INFO tyFileInfo;
	unsigned long udiStatus;
	tyFileInfoInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileInfo(struct fbFileInfo* inst);
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
#ifndef __AS__TYPE_tyFileFullAppendInternal
#define __AS__TYPE_tyFileFullAppendInternal
typedef struct tyFileFullAppendInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileInfo fbFileInfo;
	struct fbFileWrite fbFileWrite;
	fiFILE_INFO tyFileInfo;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullAppendInternal;
#endif

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

#ifndef __AS__TYPE_eTCPCreateSvrStat
#define __AS__TYPE_eTCPCreateSvrStat
typedef enum eTCPCreateSvrStat
{	TCPCreateSvrStatOpen = 0,
	TCPCreateSvrStatSetup = 1,
	TCPCreateSvrStatClose = 2,
} eTCPCreateSvrStat;
#endif

struct TcpOpen
{	unsigned long pIfAddr;
	unsigned short port;
	unsigned long options;
	unsigned short status;
	unsigned long ident;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpOpen(struct TcpOpen* inst);
#ifndef __AS__TYPE_tyTCPOpenPortInternal
#define __AS__TYPE_tyTCPOpenPortInternal
typedef struct tyTCPOpenPortInternal
{	struct TcpOpen fbTCPOpen;
} tyTCPOpenPortInternal;
#endif

struct fbTCPOpenPort
{	plcstring sIP[16];
	unsigned short uiPort;
	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	tyTCPOpenPortInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPOpenPort(struct fbTCPOpenPort* inst);
struct TcpIoctl
{	unsigned long ident;
	unsigned long ioctl;
	unsigned long pData;
	unsigned long datalen;
	unsigned short status;
	unsigned long outlen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpIoctl(struct TcpIoctl* inst);
#ifndef __AS__TYPE_tyTCPIoCtlSetInternal
#define __AS__TYPE_tyTCPIoCtlSetInternal
typedef struct tyTCPIoCtlSetInternal
{	struct TcpIoctl fbTCPIoCtl;
} tyTCPIoCtlSetInternal;
#endif

struct fbTCPSndBffrSet
{	unsigned long udiTCPIdent;
	unsigned long udiSndBffrSize;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPSndBffrSet(struct fbTCPSndBffrSet* inst);
struct fbTCPRcvBffrSet
{	unsigned long udiTCPIdent;
	unsigned long udiRcvBffrSize;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPRcvBffrSet(struct fbTCPRcvBffrSet* inst);
struct fbTCPAliveEnSet
{	unsigned long udiTCPIdent;
	unsigned long udiEn;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveEnSet(struct fbTCPAliveEnSet* inst);
struct fbTCPAliveCntSet
{	unsigned long udiTCPIdent;
	unsigned long udiCnt;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveCntSet(struct fbTCPAliveCntSet* inst);
struct fbTCPAliveIdleSet
{	unsigned long udiTCPIdent;
	unsigned long udiIdleTmInSec;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveIdleSet(struct fbTCPAliveIdleSet* inst);
struct fbTCPAliveIntvlSet
{	unsigned long udiTCPIdent;
	unsigned long udiIntvlTmInSec;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPAliveIntvlSet(struct fbTCPAliveIntvlSet* inst);
#ifndef __AS__TYPE_tyTCPKeepAliveSetInternal
#define __AS__TYPE_tyTCPKeepAliveSetInternal
typedef struct tyTCPKeepAliveSetInternal
{	struct fbTCPAliveEnSet fbTCPAliveEnSet;
	struct fbTCPAliveCntSet fbTCPAliveCntSet;
	struct fbTCPAliveIdleSet fbTCPAliveIdleSet;
	struct fbTCPAliveIntvlSet fbTCPAliveIntvlSet;
	unsigned char usiStep;
} tyTCPKeepAliveSetInternal;
#endif

struct fbTCPKeepAliveSet
{	unsigned long udiTCPIdent;
	unsigned long udiEn;
	unsigned long udiCnt;
	unsigned long udiIdleTmInSec;
	unsigned long udiIntvlTmInSec;
	unsigned long udiStatus;
	tyTCPKeepAliveSetInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPKeepAliveSet(struct fbTCPKeepAliveSet* inst);
struct fbTCPListenNoWaitingSet
{	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	tyTCPIoCtlSetInternal tyInternal;
	plcbit bEn;
	plcbit bEnNoWaiting;
};
_BUR_PUBLIC void fbTCPListenNoWaitingSet(struct fbTCPListenNoWaitingSet* inst);
struct TcpClose
{	unsigned long ident;
	unsigned long how;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpClose(struct TcpClose* inst);
#ifndef __AS__TYPE_tyTCPCloseInternal
#define __AS__TYPE_tyTCPCloseInternal
typedef struct tyTCPCloseInternal
{	struct TcpClose fbTCPClose;
} tyTCPCloseInternal;
#endif

struct fbTCPClose
{	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	tyTCPCloseInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPClose(struct fbTCPClose* inst);
#ifndef __AS__TYPE_tyTCPCreateSvrInternal
#define __AS__TYPE_tyTCPCreateSvrInternal
typedef struct tyTCPCreateSvrInternal
{	eTCPCreateSvrStat eStat;
	struct fbTCPOpenPort fbTCPOpenPort;
	struct fbTCPSndBffrSet fbTCPSndBffrSet;
	struct fbTCPRcvBffrSet fbTCPRcvBffrSet;
	struct fbTCPKeepAliveSet fbTCPKeepAliveSet;
	struct fbTCPListenNoWaitingSet fbTCPListenNoWaitingSet;
	struct fbTCPClose fbTCPClose;
	unsigned char usiSetupStep;
	unsigned long udiErrStatus;
} tyTCPCreateSvrInternal;
#endif

struct TcpServer
{	unsigned long ident;
	unsigned long backlog;
	unsigned long pIpAddr;
	unsigned short status;
	unsigned long identclnt;
	unsigned short portclnt;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpServer(struct TcpServer* inst);
#ifndef __AS__TYPE_tyTCPListenInternal
#define __AS__TYPE_tyTCPListenInternal
typedef struct tyTCPListenInternal
{	struct TcpServer fbTCPListen;
} tyTCPListenInternal;
#endif

struct TcpSend
{	unsigned long ident;
	unsigned long pData;
	unsigned long datalen;
	unsigned long flags;
	unsigned short status;
	unsigned long sentlen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpSend(struct TcpSend* inst);
#ifndef __AS__TYPE_tyTCPSndInternal
#define __AS__TYPE_tyTCPSndInternal
typedef struct tyTCPSndInternal
{	struct TcpSend fbTCPSnd;
	unsigned char usiRetryCnt;
} tyTCPSndInternal;
#endif

struct TcpRecv
{	unsigned long ident;
	unsigned long pData;
	unsigned long datamax;
	unsigned long flags;
	unsigned short status;
	unsigned long recvlen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void TcpRecv(struct TcpRecv* inst);
#ifndef __AS__TYPE_tyTCPRcvInternal
#define __AS__TYPE_tyTCPRcvInternal
typedef struct tyTCPRcvInternal
{	struct TcpRecv fbTCPRcv;
} tyTCPRcvInternal;
#endif

#ifndef __AS__TYPE_tyXMLConvertToTableInternal
#define __AS__TYPE_tyXMLConvertToTableInternal
typedef struct tyXMLConvertToTableInternal
{	unsigned long udi;
	unsigned long udj;
	unsigned long udiTitleOffset;
	unsigned long udiValueOffset;
	unsigned long udiSizeOffset;
	unsigned long udiStartAddr;
	unsigned long udiEndAddr;
	unsigned long udiTableValueSize;
	unsigned short uiSize;
	plcbit bSymbolStart;
	plcbit bSymbolEnd;
	plcbit bSymbolQuestion;
	plcbit bSymbolSlash;
	plcbit bSymbolEqual;
	plcbit bSymbolQuotation;
	plcbit bSymbolSpace;
	plcbit bSymbolChar;
	plcbit bFirstStart;
	plcbit bInTag;
	plcbit bInStartTag;
	plcbit bInEndTag;
	plcbit bInDeclarationTag;
	plcbit bInTagNm;
	plcbit bInTagNmDone;
	plcbit bInTagAttribute;
	plcbit bInTagAttributeDone;
	plcbit bInTagValue;
	plcbit bInTagEndShort;
	plcbit bInTagEndDeclaration;
	plcbit bInElement;
	plcbit bWriteStartTag;
	plcbit bWriteEndTag;
	plcbit bWriteDeclarationTag;
	plcbit bWriteAttribute;
	plcbit bWriteValue;
	plcbit bWriteEnd;
	plcbit bWriteEndShort;
	plcbit bWriteEndDeclaration;
	plcbit bWriteElement;
} tyXMLConvertToTableInternal;
#endif

#ifndef __AS__TYPE_tyTableConvertToXMLInternal
#define __AS__TYPE_tyTableConvertToXMLInternal
typedef struct tyTableConvertToXMLInternal
{	unsigned long udi;
	unsigned long udj;
	unsigned long udiTitleOffset;
	unsigned long udiValueOffset;
	unsigned long udiSizeOffset;
	unsigned long udiAddr;
	unsigned long udiLvl;
	unsigned short uiSize;
	unsigned long udiSize;
	unsigned long udiCurrTitleAddr;
	unsigned long udiCurrValueAddr;
} tyTableConvertToXMLInternal;
#endif

#ifndef __AS__TYPE_tyXMLTableDat
#define __AS__TYPE_tyXMLTableDat
typedef struct tyXMLTableDat
{	plcstring sTitle[3];
	plcstring sValue[255];
	unsigned short uiSize;
} tyXMLTableDat;
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

#ifndef __AS__TYPE_eHermesState
#define __AS__TYPE_eHermesState
typedef enum eHermesState
{	HermesStateNotConnected = 0,
	HermesStateConnected = 1,
	HermesStateServiceDescription = 2,
	HermesStateSServiceDescription = 3,
	HermesStateNotAvailableNotReady = 4,
	HermesStateBoardAvailable = 5,
	HermesStateMachineReady = 6,
	HermesStateAvailableAndReady = 7,
	HermesStateTransporting = 8,
	HermesStateTransportStopped = 9,
	HermesStateTransportFinished = 10,
} eHermesState;
#endif

#ifndef __AS__TYPE_tyHermesMsgType
#define __AS__TYPE_tyHermesMsgType
typedef struct tyHermesMsgType
{	plcbit bCheckAlive;
	plcbit bCheckAlivePing;
	plcbit bCheckAlivePong;
	plcbit bServiceDescription;
	plcbit bSServiceDescription;
	plcbit bNotification;
	plcbit bBoardAvailable;
	plcbit bRevokeBoardAvailable;
	plcbit bMachineReady;
	plcbit bRevokeMachineReady;
	plcbit bStartTransport;
	plcbit bStopTransport;
	plcbit bTransportFinished;
	plcbit bSetConfiguration;
	plcbit bGetConfiguration;
	plcbit bCurrentConfiguration;
	plcbit bBoardForecast;
	plcbit bBoardArrived;
	plcbit bBoardDeparted;
	plcbit bQueryBoardInfo;
	plcbit bSendBoardInfo;
	plcbit bQueryWorkOrderInfo;
	plcbit bSendWorkOrderInfo;
	plcbit bCommand;
} tyHermesMsgType;
#endif

#ifndef __AS__TYPE_eHermesMsgType
#define __AS__TYPE_eHermesMsgType
typedef enum eHermesMsgType
{	HermesMsgTypeNA = 0,
	HermesMsgTypeCheckAlive = 1,
	HermesMsgTypeCheckAlivePing = 2,
	HermesMsgTypeCheckAlivePong = 3,
	HermesMsgTypeServiceDescription = 4,
	HermesMsgTypeSServiceDescription = 5,
	HermesMsgTypeNotification = 6,
	HermesMsgTypeBoardAvailable = 7,
	HermesMsgTypeRevokeBoardAvl = 8,
	HermesMsgTypeMachineReady = 9,
	HermesMsgTypeRevokeMachineReady = 10,
	HermesMsgTypeStartTransport = 11,
	HermesMsgTypeStopTransport = 12,
	HermesMsgTypeTransportFinished = 13,
	HermesMsgTypeSetConfiguration = 14,
	HermesMsgTypeGetConfiguration = 15,
	HermesMsgTypeCurrConfiguration = 16,
	HermesMsgTypeBoardForecast = 17,
	HermesMsgTypeBoardForecastId = 18,
	HermesMsgTypeBoardForecastNoId = 19,
	HermesMsgTypeBoardArrived = 20,
	HermesMsgTypeBoardArrived1 = 21,
	HermesMsgTypeBoardArrived2 = 22,
	HermesMsgTypeBoardArrived3 = 23,
	HermesMsgTypeBoardArrived4 = 24,
	HermesMsgTypeBoardDeparted = 25,
	HermesMsgTypeBoardDeparted1 = 26,
	HermesMsgTypeBoardDeparted2 = 27,
	HermesMsgTypeBoardDeparted3 = 28,
	HermesMsgTypeBoardDeparted4 = 29,
	HermesMsgTypeQueryBoardInfo = 30,
	HermesMsgTypeSendBoardInfo = 31,
	HermesMsgTypeQueryWorkOrderInfo = 32,
	HermesMsgTypeSendWorkOrderInfo = 33,
	HermesMsgTypeReplyWorkOrderInfo = 34,
	HermesMsgTypeCommand = 35,
} eHermesMsgType;
#endif

#ifndef __AS__TYPE_eHermesCheckAliveType
#define __AS__TYPE_eHermesCheckAliveType
typedef enum eHermesCheckAliveType
{	HermesCheckAliveTypeUnknown = 0,
	HermesCheckAliveTypePing = 1,
	HermesCheckAliveTypePong = 2,
} eHermesCheckAliveType;
#endif

#ifndef __AS__TYPE_eHermesBoardTransfer
#define __AS__TYPE_eHermesBoardTransfer
typedef enum eHermesBoardTransfer
{	HermesTransferred = 1,
	HermesLoaded = 2,
	HermesInserted = 3,
} eHermesBoardTransfer;
#endif

#ifndef __AS__TYPE_eHermesFailedBoard
#define __AS__TYPE_eHermesFailedBoard
typedef enum eHermesFailedBoard
{	HermesUnknownBoard = 0,
	HermesGoodBoard = 1,
	HermesFailedBoard = 2,
} eHermesFailedBoard;
#endif

#ifndef __AS__TYPE_eHermesFlippedBoard
#define __AS__TYPE_eHermesFlippedBoard
typedef enum eHermesFlippedBoard
{	HermesFlippedBoardUnknownSide = 0,
	HermesFlippedBoardTopSideUp = 1,
	HermesFlippedBoardBtmSideUp = 2,
} eHermesFlippedBoard;
#endif

#ifndef __AS__TYPE_eHermesSeverity
#define __AS__TYPE_eHermesSeverity
typedef enum eHermesSeverity
{	HermesSeverityFatalError = 1,
	HermesSeverityError = 2,
	HermesSeverityWarning = 3,
	HermesSeverityInfo = 4,
} eHermesSeverity;
#endif

#ifndef __AS__TYPE_eHermesTransferState
#define __AS__TYPE_eHermesTransferState
typedef enum eHermesTransferState
{	HermesTransferStateNotStarted = 1,
	HermesTransferStateIncomplete = 2,
	HermesTransferStateComplete = 3,
} eHermesTransferState;
#endif

#ifndef __AS__TYPE_eHermesCommand
#define __AS__TYPE_eHermesCommand
typedef enum eHermesCommand
{	HermesCommandUndefined = 0,
	HermesCommandLockInputConveyor = 1,
	HermesCommandUnLockInputConveyor = 2,
	HermesCommandRequestPause = 3,
	HermesCommandConfirmPause = 4,
	HermesCommandResumeOperation = 5,
	HermesCommandOvenInfeed = 1000,
	HermesCommandSelfDefine = 1001,
} eHermesCommand;
#endif

#ifndef __AS__TYPE_tyHermesNotificationData
#define __AS__TYPE_tyHermesNotificationData
typedef struct tyHermesNotificationData
{	signed short iNotificationCode;
	eHermesSeverity eSeverity;
	plcstring sDescription[255];
} tyHermesNotificationData;
#endif

#ifndef __AS__TYPE_tyHermesNotificationAvl
#define __AS__TYPE_tyHermesNotificationAvl
typedef struct tyHermesNotificationAvl
{	plcbit bNotificationCode;
	plcbit bSeverity;
	plcbit bDescription;
} tyHermesNotificationAvl;
#endif

#ifndef __AS__TYPE_tyHermesNotification
#define __AS__TYPE_tyHermesNotification
typedef struct tyHermesNotification
{	tyHermesNotificationData tyData;
	tyHermesNotificationAvl tyAvl;
} tyHermesNotification;
#endif

#ifndef __AS__TYPE_tyHermesFeature
#define __AS__TYPE_tyHermesFeature
typedef struct tyHermesFeature
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesFeature;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescriptionData
#define __AS__TYPE_tyHermesServiceDescriptionData
typedef struct tyHermesServiceDescriptionData
{	plcstring sMachineId[81];
	plcstring sSystemId[81];
	signed short iLaneId;
	plcstring sInterfaceId[81];
	plcstring sVersion[8];
	tyHermesFeature tySupportedFeatures;
} tyHermesServiceDescriptionData;
#endif

#ifndef __AS__TYPE_tyHermesFeatureAvl
#define __AS__TYPE_tyHermesFeatureAvl
typedef struct tyHermesFeatureAvl
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardForecast;
	plcbit bFeatureQueryBoardInfo;
	plcbit bFeatureSendBoardInfo;
	plcbit bFeatureCommand;
} tyHermesFeatureAvl;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescriptionAvl
#define __AS__TYPE_tyHermesServiceDescriptionAvl
typedef struct tyHermesServiceDescriptionAvl
{	plcbit bMachineId;
	plcbit bSystemId;
	plcbit bLaneId;
	plcbit bInterfaceId;
	plcbit bVersion;
	plcbit bSupportedFeatures;
	tyHermesFeatureAvl tySupportedFeatures;
} tyHermesServiceDescriptionAvl;
#endif

#ifndef __AS__TYPE_tyHermesServiceDescription
#define __AS__TYPE_tyHermesServiceDescription
typedef struct tyHermesServiceDescription
{	tyHermesServiceDescriptionData tyData;
	tyHermesServiceDescriptionAvl tyAvl;
} tyHermesServiceDescription;
#endif

#ifndef __AS__TYPE_tyHermesSvyFeature
#define __AS__TYPE_tyHermesSvyFeature
typedef struct tyHermesSvyFeature
{	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureConfiguration;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
} tyHermesSvyFeature;
#endif

#ifndef __AS__TYPE_tyHermesSServiceDescriptionData
#define __AS__TYPE_tyHermesSServiceDescriptionData
typedef struct tyHermesSServiceDescriptionData
{	plcstring sSystemId[81];
	plcstring sMachineId[81];
	plcstring sVersion[8];
	tyHermesSvyFeature tySupportedFeatures;
} tyHermesSServiceDescriptionData;
#endif

#ifndef __AS__TYPE_tyHermesSvyFeatureAvl
#define __AS__TYPE_tyHermesSvyFeatureAvl
typedef struct tyHermesSvyFeatureAvl
{	plcbit bFeatureConfiguration;
	plcbit bFeatureCheckAliveResponse;
	plcbit bFeatureBoardTracking;
	plcbit bFeatureQueryWorkOrderInfo;
	plcbit bFeatureSendWorkOrderInfo;
	plcbit bFeatureReplyWorkOrderInfo;
} tyHermesSvyFeatureAvl;
#endif

#ifndef __AS__TYPE_tyHermesSServiceDescriptionAvl
#define __AS__TYPE_tyHermesSServiceDescriptionAvl
typedef struct tyHermesSServiceDescriptionAvl
{	plcbit bSystemId;
	plcbit bMachineId;
	plcbit bVersion;
	plcbit bSupportedFeatures;
	tyHermesSvyFeatureAvl tySupportedFeatures;
} tyHermesSServiceDescriptionAvl;
#endif

#ifndef __AS__TYPE_tyHermesSServiceDescription
#define __AS__TYPE_tyHermesSServiceDescription
typedef struct tyHermesSServiceDescription
{	tyHermesSServiceDescriptionData tyData;
	tyHermesSServiceDescriptionAvl tyAvl;
} tyHermesSServiceDescription;
#endif

#ifndef __AS__TYPE_tyHermesCheckAliveData
#define __AS__TYPE_tyHermesCheckAliveData
typedef struct tyHermesCheckAliveData
{	eHermesCheckAliveType eType;
	plcstring sId[81];
} tyHermesCheckAliveData;
#endif

#ifndef __AS__TYPE_tyHermesCheckAliveAvl
#define __AS__TYPE_tyHermesCheckAliveAvl
typedef struct tyHermesCheckAliveAvl
{	plcbit bType;
	plcbit bId;
} tyHermesCheckAliveAvl;
#endif

#ifndef __AS__TYPE_tyHermesCheckAlive
#define __AS__TYPE_tyHermesCheckAlive
typedef struct tyHermesCheckAlive
{	tyHermesCheckAliveData tyData;
	tyHermesCheckAliveAvl tyAvl;
} tyHermesCheckAlive;
#endif

#ifndef __AS__TYPE_tyHermesBASubBoardsData
#define __AS__TYPE_tyHermesBASubBoardsData
typedef struct tyHermesBASubBoardsData
{	signed short iSubBoardsPos[5];
	plcstring sSubBoardsBc[5][81];
	signed short iSubBoardsSt[5];
} tyHermesBASubBoardsData;
#endif

#ifndef __AS__TYPE_tyHermesBoardAvailableData
#define __AS__TYPE_tyHermesBoardAvailableData
typedef struct tyHermesBoardAvailableData
{	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	signed short iRoute;
	signed short iAction;
	tyHermesBASubBoardsData tySubBoards;
} tyHermesBoardAvailableData;
#endif

#ifndef __AS__TYPE_tyHermesBASubBoardsAvl
#define __AS__TYPE_tyHermesBASubBoardsAvl
typedef struct tyHermesBASubBoardsAvl
{	plcbit bSubBoardsPos[5];
	plcbit bSubBoardsBc[5];
	plcbit bSubBoardsSt[5];
} tyHermesBASubBoardsAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardAvailableAvl
#define __AS__TYPE_tyHermesBoardAvailableAvl
typedef struct tyHermesBoardAvailableAvl
{	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bRoute;
	plcbit bAction;
	tyHermesBASubBoardsAvl tySubBoards;
} tyHermesBoardAvailableAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardAvailable
#define __AS__TYPE_tyHermesBoardAvailable
typedef struct tyHermesBoardAvailable
{	tyHermesBoardAvailableData tyData;
	tyHermesBoardAvailableAvl tyAvl;
} tyHermesBoardAvailable;
#endif

#ifndef __AS__TYPE_tyHermesMachineReadyData
#define __AS__TYPE_tyHermesMachineReadyData
typedef struct tyHermesMachineReadyData
{	eHermesFailedBoard eFailedBoard;
	plcstring sForecastId[81];
	plcstring sBoardId[37];
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
} tyHermesMachineReadyData;
#endif

#ifndef __AS__TYPE_tyHermesMachineReadyAvl
#define __AS__TYPE_tyHermesMachineReadyAvl
typedef struct tyHermesMachineReadyAvl
{	plcbit bFailedBoard;
	plcbit bForecastId;
	plcbit bBoardId;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
} tyHermesMachineReadyAvl;
#endif

#ifndef __AS__TYPE_tyHermesMachineReady
#define __AS__TYPE_tyHermesMachineReady
typedef struct tyHermesMachineReady
{	tyHermesMachineReadyData tyData;
	tyHermesMachineReadyAvl tyAvl;
} tyHermesMachineReady;
#endif

#ifndef __AS__TYPE_tyHermesStartTransportData
#define __AS__TYPE_tyHermesStartTransportData
typedef struct tyHermesStartTransportData
{	plcstring sBoardId[37];
	float rConveyorSpeed;
} tyHermesStartTransportData;
#endif

#ifndef __AS__TYPE_tyHermesStartTransportAvl
#define __AS__TYPE_tyHermesStartTransportAvl
typedef struct tyHermesStartTransportAvl
{	plcbit bBoardId;
	plcbit bConveyorSpeed;
} tyHermesStartTransportAvl;
#endif

#ifndef __AS__TYPE_tyHermesStartTransport
#define __AS__TYPE_tyHermesStartTransport
typedef struct tyHermesStartTransport
{	tyHermesStartTransportData tyData;
	tyHermesStartTransportAvl tyAvl;
} tyHermesStartTransport;
#endif

#ifndef __AS__TYPE_tyHermesStopTransportData
#define __AS__TYPE_tyHermesStopTransportData
typedef struct tyHermesStopTransportData
{	eHermesTransferState eTransferState;
	plcstring sBoardId[37];
} tyHermesStopTransportData;
#endif

#ifndef __AS__TYPE_tyHermesStopTransportAvl
#define __AS__TYPE_tyHermesStopTransportAvl
typedef struct tyHermesStopTransportAvl
{	plcbit bTransferState;
	plcbit bBoardId;
} tyHermesStopTransportAvl;
#endif

#ifndef __AS__TYPE_tyHermesStopTransport
#define __AS__TYPE_tyHermesStopTransport
typedef struct tyHermesStopTransport
{	tyHermesStopTransportData tyData;
	tyHermesStopTransportAvl tyAvl;
} tyHermesStopTransport;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinishedData
#define __AS__TYPE_tyHermesTransportFinishedData
typedef struct tyHermesTransportFinishedData
{	eHermesTransferState eTransferState;
	plcstring sBoardId[37];
} tyHermesTransportFinishedData;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinishedAvl
#define __AS__TYPE_tyHermesTransportFinishedAvl
typedef struct tyHermesTransportFinishedAvl
{	plcbit bTransferState;
	plcbit bBoardId;
} tyHermesTransportFinishedAvl;
#endif

#ifndef __AS__TYPE_tyHermesTransportFinished
#define __AS__TYPE_tyHermesTransportFinished
typedef struct tyHermesTransportFinished
{	tyHermesTransportFinishedData tyData;
	tyHermesTransportFinishedAvl tyAvl;
} tyHermesTransportFinished;
#endif

#ifndef __AS__TYPE_tyHermesBoardForecastData
#define __AS__TYPE_tyHermesBoardForecastData
typedef struct tyHermesBoardForecastData
{	plcstring sForecastId[81];
	float rTimeUntilAvailable;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
} tyHermesBoardForecastData;
#endif

#ifndef __AS__TYPE_tyHermesBoardForecastAvl
#define __AS__TYPE_tyHermesBoardForecastAvl
typedef struct tyHermesBoardForecastAvl
{	plcbit bForecastId;
	plcbit bTimeUntilAvailable;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
} tyHermesBoardForecastAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardForecast
#define __AS__TYPE_tyHermesBoardForecast
typedef struct tyHermesBoardForecast
{	tyHermesBoardForecastData tyData;
	tyHermesBoardForecastAvl tyAvl;
} tyHermesBoardForecast;
#endif

#ifndef __AS__TYPE_tyHermesQueryBoardInfoData
#define __AS__TYPE_tyHermesQueryBoardInfoData
typedef struct tyHermesQueryBoardInfoData
{	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
} tyHermesQueryBoardInfoData;
#endif

#ifndef __AS__TYPE_tyHermesQueryBoardInfoAvl
#define __AS__TYPE_tyHermesQueryBoardInfoAvl
typedef struct tyHermesQueryBoardInfoAvl
{	plcbit bTopBarcode;
	plcbit bBottomBarcode;
} tyHermesQueryBoardInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesQueryBoardInfo
#define __AS__TYPE_tyHermesQueryBoardInfo
typedef struct tyHermesQueryBoardInfo
{	tyHermesQueryBoardInfoData tyData;
	tyHermesQueryBoardInfoAvl tyAvl;
} tyHermesQueryBoardInfo;
#endif

#ifndef __AS__TYPE_tyHermesSendBoardInfoData
#define __AS__TYPE_tyHermesSendBoardInfoData
typedef struct tyHermesSendBoardInfoData
{	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
} tyHermesSendBoardInfoData;
#endif

#ifndef __AS__TYPE_tyHermesSendBoardInfoAvl
#define __AS__TYPE_tyHermesSendBoardInfoAvl
typedef struct tyHermesSendBoardInfoAvl
{	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
} tyHermesSendBoardInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesSendBoardInfo
#define __AS__TYPE_tyHermesSendBoardInfo
typedef struct tyHermesSendBoardInfo
{	tyHermesSendBoardInfoData tyData;
	tyHermesSendBoardInfoAvl tyAvl;
} tyHermesSendBoardInfo;
#endif

#ifndef __AS__TYPE_tyHermesBoardArrivedData
#define __AS__TYPE_tyHermesBoardArrivedData
typedef struct tyHermesBoardArrivedData
{	plcstring sMachineId[81];
	signed short iUpstreamLaneId;
	plcstring sUpstreamInterfaceId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	eHermesBoardTransfer eBoadTransfer;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrdedId[81];
	plcstring sBatchId[81];
	signed short iRoute;
	signed short iAction;
} tyHermesBoardArrivedData;
#endif

#ifndef __AS__TYPE_tyHermesBoardArrivedAvl
#define __AS__TYPE_tyHermesBoardArrivedAvl
typedef struct tyHermesBoardArrivedAvl
{	plcbit bMachineId;
	plcbit bUpstreamLaneId;
	plcbit bUpstreamInterfaceId;
	plcbit bMagazineId;
	plcbit bSlotId;
	plcbit bBoardTransfer;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bRoute;
	plcbit bAction;
} tyHermesBoardArrivedAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardArrived
#define __AS__TYPE_tyHermesBoardArrived
typedef struct tyHermesBoardArrived
{	tyHermesBoardArrivedData tyData;
	tyHermesBoardArrivedAvl tyAvl;
} tyHermesBoardArrived;
#endif

#ifndef __AS__TYPE_tyHermesBoardDepartedData
#define __AS__TYPE_tyHermesBoardDepartedData
typedef struct tyHermesBoardDepartedData
{	plcstring sMachineId[81];
	signed short iDownstreamLaneId;
	plcstring sDownstreamInterfaceId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	eHermesBoardTransfer eBoadTransfer;
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	plcstring sWorkOrdedId[81];
	plcstring sBatchId[81];
	signed short iRoute;
	signed short iAction;
} tyHermesBoardDepartedData;
#endif

#ifndef __AS__TYPE_tyHermesBoardDepartedAvl
#define __AS__TYPE_tyHermesBoardDepartedAvl
typedef struct tyHermesBoardDepartedAvl
{	plcbit bMachineId;
	plcbit bDownstreamLaneId;
	plcbit bDownstreamInterfaceId;
	plcbit bMagazineId;
	plcbit bSlotId;
	plcbit bBoardTransfer;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bRoute;
	plcbit bAction;
} tyHermesBoardDepartedAvl;
#endif

#ifndef __AS__TYPE_tyHermesBoardDeparted
#define __AS__TYPE_tyHermesBoardDeparted
typedef struct tyHermesBoardDeparted
{	tyHermesBoardDepartedData tyData;
	tyHermesBoardDepartedAvl tyAvl;
} tyHermesBoardDeparted;
#endif

#ifndef __AS__TYPE_tyHermesUpstreamConfiguration
#define __AS__TYPE_tyHermesUpstreamConfiguration
typedef struct tyHermesUpstreamConfiguration
{	signed short iUpstreamLaneId;
	plcstring sUpstreamInterfaceId[81];
	plcstring sHostAddress[255];
	unsigned short uiPort;
} tyHermesUpstreamConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesDownstreamConfiguration
#define __AS__TYPE_tyHermesDownstreamConfiguration
typedef struct tyHermesDownstreamConfiguration
{	signed short iDownstreamLaneId;
	plcstring sDownstreamInterfaceId[81];
	plcstring sClientAddress[255];
	unsigned short uiPort;
} tyHermesDownstreamConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesSetConfigurationData
#define __AS__TYPE_tyHermesSetConfigurationData
typedef struct tyHermesSetConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesSetConfigurationData;
#endif

#ifndef __AS__TYPE_tyHermesUpstreamConfigurationAvl
#define __AS__TYPE_tyHermesUpstreamConfigurationAvl
typedef struct tyHermesUpstreamConfigurationAvl
{	plcbit bUpstreamLaneId;
	plcbit bUpstreamInterfaceId;
	plcbit bHostAddress;
	plcbit bPort;
} tyHermesUpstreamConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesDnstreamConfigurationAvl
#define __AS__TYPE_tyHermesDnstreamConfigurationAvl
typedef struct tyHermesDnstreamConfigurationAvl
{	plcbit bDownstreamLaneId;
	plcbit bDownstreamInterfaceId;
	plcbit bClientAddress;
	plcbit bPort;
} tyHermesDnstreamConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesSetConfigurationAvl
#define __AS__TYPE_tyHermesSetConfigurationAvl
typedef struct tyHermesSetConfigurationAvl
{	plcbit bMachineId;
	plcbit bSupervisorySystemPort;
	plcbit bUpstreamConfigurations;
	plcbit bDownstreamConfigurations;
	signed short iUpstreamConfigurations;
	signed short iDownstreamConfigurations;
	struct tyHermesUpstreamConfigurationAvl a_tyUpstreamConfigurations[4];
	struct tyHermesDnstreamConfigurationAvl a_tyDownstreamConfigurations[4];
} tyHermesSetConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesSetConfiguration
#define __AS__TYPE_tyHermesSetConfiguration
typedef struct tyHermesSetConfiguration
{	tyHermesSetConfigurationData tyData;
	tyHermesSetConfigurationAvl tyAvl;
} tyHermesSetConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesCurrentConfigurationData
#define __AS__TYPE_tyHermesCurrentConfigurationData
typedef struct tyHermesCurrentConfigurationData
{	plcstring sMachineId[81];
	unsigned short uiSupervisorySystemPort;
	struct tyHermesUpstreamConfiguration a_tyUpstreamConfigurations[4];
	struct tyHermesDownstreamConfiguration a_tyDownstreamConfigurations[4];
} tyHermesCurrentConfigurationData;
#endif

#ifndef __AS__TYPE_tyHermesCurrentConfigurationAvl
#define __AS__TYPE_tyHermesCurrentConfigurationAvl
typedef struct tyHermesCurrentConfigurationAvl
{	plcbit bMachineId;
	plcbit bSupervisorySystemPort;
	plcbit bUpstreamConfigurations;
	plcbit bDownstreamConfigurations;
	signed short iUpstreamConfigurations;
	signed short iDownstreamConfigurations;
	struct tyHermesUpstreamConfigurationAvl a_tyUpstreamConfigurations[4];
	struct tyHermesDnstreamConfigurationAvl a_tyDownstreamConfigurations[4];
} tyHermesCurrentConfigurationAvl;
#endif

#ifndef __AS__TYPE_tyHermesCurrentConfiguration
#define __AS__TYPE_tyHermesCurrentConfiguration
typedef struct tyHermesCurrentConfiguration
{	tyHermesCurrentConfigurationData tyData;
	tyHermesCurrentConfigurationAvl tyAvl;
} tyHermesCurrentConfiguration;
#endif

#ifndef __AS__TYPE_tyHermesQueryWorkOrderInfoData
#define __AS__TYPE_tyHermesQueryWorkOrderInfoData
typedef struct tyHermesQueryWorkOrderInfoData
{	plcstring sQueryId[81];
	plcstring sMachineId[81];
	plcstring sMagazineId[81];
	signed short iSlotId;
	plcstring sBarcode[255];
} tyHermesQueryWorkOrderInfoData;
#endif

#ifndef __AS__TYPE_tyHermesQueryWorkOrderInfoAvl
#define __AS__TYPE_tyHermesQueryWorkOrderInfoAvl
typedef struct tyHermesQueryWorkOrderInfoAvl
{	plcbit bQueryId;
	plcbit bMachineId;
	plcbit bMagazineId;
	plcbit bSlotId;
	plcbit bBarcode;
} tyHermesQueryWorkOrderInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesQueryWorkOrderInfo
#define __AS__TYPE_tyHermesQueryWorkOrderInfo
typedef struct tyHermesQueryWorkOrderInfo
{	tyHermesQueryWorkOrderInfoData tyData;
	tyHermesQueryWorkOrderInfoAvl tyAvl;
} tyHermesQueryWorkOrderInfo;
#endif

#ifndef __AS__TYPE_tyHermesSendWorkOrderInfoData
#define __AS__TYPE_tyHermesSendWorkOrderInfoData
typedef struct tyHermesSendWorkOrderInfoData
{	plcstring sQueryId[81];
	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	plcstring sBoardId[37];
	plcstring sBoardIdCreatedBy[81];
	eHermesFailedBoard eFailedBoard;
	plcstring sProductTypeId[255];
	eHermesFlippedBoard eFlippedBoard;
	plcstring sTopBarcode[255];
	plcstring sBottomBarcode[255];
	float rLength;
	float rWidth;
	float rThickness;
	float rConveyorSpeed;
	float rTopClearanceHeight;
	float rBottomClearanceHeight;
	float rWeight;
	signed short iRoute;
} tyHermesSendWorkOrderInfoData;
#endif

#ifndef __AS__TYPE_tyHermesSendWorkOrderInfoAvl
#define __AS__TYPE_tyHermesSendWorkOrderInfoAvl
typedef struct tyHermesSendWorkOrderInfoAvl
{	plcbit bQueryId;
	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bBoardId;
	plcbit bBoardIdCreatedBy;
	plcbit bFailedBoard;
	plcbit bProductTypeId;
	plcbit bFlippedBoard;
	plcbit bTopBarcode;
	plcbit bBottomBarcode;
	plcbit bLength;
	plcbit bWidth;
	plcbit bThickness;
	plcbit bConveyorSpeed;
	plcbit bTopClearanceHeight;
	plcbit bBottomClearanceHeight;
	plcbit bWeight;
	plcbit bRoute;
} tyHermesSendWorkOrderInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesSendWorkOrderInfo
#define __AS__TYPE_tyHermesSendWorkOrderInfo
typedef struct tyHermesSendWorkOrderInfo
{	tyHermesSendWorkOrderInfoData tyData;
	tyHermesSendWorkOrderInfoAvl tyAvl;
} tyHermesSendWorkOrderInfo;
#endif

#ifndef __AS__TYPE_tyHermesReplyWorkOrderInfoData
#define __AS__TYPE_tyHermesReplyWorkOrderInfoData
typedef struct tyHermesReplyWorkOrderInfoData
{	plcstring sWorkOrderId[81];
	plcstring sBatchId[81];
	signed short iStatus;
} tyHermesReplyWorkOrderInfoData;
#endif

#ifndef __AS__TYPE_tyHermesReplyWorkOrderInfoAvl
#define __AS__TYPE_tyHermesReplyWorkOrderInfoAvl
typedef struct tyHermesReplyWorkOrderInfoAvl
{	plcbit bWorkOrderId;
	plcbit bBatchId;
	plcbit bStatus;
} tyHermesReplyWorkOrderInfoAvl;
#endif

#ifndef __AS__TYPE_tyHermesReplyWorkOrderInfo
#define __AS__TYPE_tyHermesReplyWorkOrderInfo
typedef struct tyHermesReplyWorkOrderInfo
{	tyHermesReplyWorkOrderInfoData tyData;
	tyHermesReplyWorkOrderInfoAvl tyAvl;
} tyHermesReplyWorkOrderInfo;
#endif

#ifndef __AS__TYPE_tyHermesCommandData
#define __AS__TYPE_tyHermesCommandData
typedef struct tyHermesCommandData
{	eHermesCommand eCommand;
} tyHermesCommandData;
#endif

#ifndef __AS__TYPE_tyHermesCommandAvl
#define __AS__TYPE_tyHermesCommandAvl
typedef struct tyHermesCommandAvl
{	plcbit bCommand;
} tyHermesCommandAvl;
#endif

#ifndef __AS__TYPE_tyHermesCommand
#define __AS__TYPE_tyHermesCommand
typedef struct tyHermesCommand
{	tyHermesCommandData tyData;
	tyHermesCommandAvl tyAvl;
} tyHermesCommand;
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
_BUR_PUBLIC signed short LEN(plcstring IN[32768]);
_BUR_PUBLIC plcstring* MID(plcstring IN[32768], signed short L, signed short P);
_BUR_PUBLIC plcstring* CONCAT(plcstring IN1[32768], plcstring IN2[32768]);
_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_PUBLIC unsigned long memcpy(unsigned long pDest, unsigned long pSrc, unsigned long length);
_BUR_PUBLIC signed long memcmp(unsigned long pMem1, unsigned long pMem2, unsigned long length);
_BUR_PUBLIC plcstring* dt2str(plcdt IN, plcstring pStr[81], unsigned long len);
struct fbFileOldDel
{	plcstring sDevice[81];
	plcstring sPath[81];
	plcstring sKeyword[81];
	plcdt dtDTNow;
	unsigned long udiFileKeepDay;
	unsigned long udiStatus;
	tyFileOldDelInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOldDel(struct fbFileOldDel* inst);
struct fbFileFullAppend
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiStatus;
	tyFileFullAppendInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullAppend(struct fbFileFullAppend* inst);
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
_BUR_PUBLIC plcbit fLogDTConvert(plcstring p_sDTOut[81], plcdt dtIn);
struct fbTCPCreateSvr
{	plcstring sSvrIP[16];
	unsigned short uiSvrPort;
	unsigned long udiSndBffrSize;
	unsigned long udiRcvBffrSize;
	unsigned long udiAliveIdleTmInSec;
	unsigned long udiTCPIdent;
	unsigned long udiStatus;
	tyTCPCreateSvrInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPCreateSvr(struct fbTCPCreateSvr* inst);
struct fbTCPSnd
{	unsigned long udiTCPIdent;
	unsigned long udiSndSize;
	unsigned long p_BffrDest;
	unsigned long udiStatus;
	tyTCPSndInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPSnd(struct fbTCPSnd* inst);
struct fbTCPRcv
{	unsigned long udiTCPIdent;
	unsigned long udiBffrSize;
	unsigned long p_BffrDest;
	unsigned long udiDataSizeRcv;
	unsigned long udiStatus;
	tyTCPRcvInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPRcv(struct fbTCPRcv* inst);
struct fbTCPListen
{	unsigned long udiSvrIdent;
	plcstring sConnectedIP[16];
	unsigned short uiConnectedPort;
	unsigned long udiClntIdent;
	unsigned long udiStatus;
	tyTCPListenInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbTCPListen(struct fbTCPListen* inst);
_BUR_PUBLIC unsigned long fXMLConvertToTable(unsigned long p_XMLMsg, unsigned long udiXMLMsgLen, unsigned long p_XMLAllTable, unsigned long p_XMLTableFirstTitle, unsigned long udiXMLTableTitleSize, unsigned long p_XMLTableFirstValue, unsigned long udiXMLTableValueSize, unsigned long p_XMLTableFirstSize, unsigned long udiXMLSingleTableSize, unsigned long udiXMLTableTotalIdx, unsigned long(* p_udiXMLTableWriteIdx));
_BUR_PUBLIC unsigned long fTableConvertToXML(unsigned long p_XMLMsg, unsigned long(* p_udiXMLMsgLen), unsigned long udiXMLMsgMaxLen, unsigned long p_XMLAllTable, unsigned long p_XMLTableFirstTitle, unsigned long p_XMLTableFirstValue, unsigned long p_XMLTableFirstSize, unsigned long udiXMLSingleTableSize, unsigned long udiXMLTableTotalIdx);
struct fbHermesSequenceSvy
{	struct tyHermesMsgType(* p_tyMsgTypeRcv);
	eHermesMsgType eMsgTypeSnd;
	eHermesState eState;
	unsigned long udiStatus;
	plcbit bEn;
	plcbit bRstState;
};
_BUR_PUBLIC void fbHermesSequenceSvy(struct fbHermesSequenceSvy* inst);
struct fbHermesSequenceSvyTO
{	eHermesState eState;
	plctime tConnTimeOut;
	unsigned long udiStatus;
	struct TON fbConnTimeOut;
	plcbit bEn;
};
_BUR_PUBLIC void fbHermesSequenceSvyTO(struct fbHermesSequenceSvyTO* inst);
struct fbHermesParseXMLTable
{	unsigned long p_XMLTable;
	signed short iTotalIdxWrite;
	tyHermesMsgType tyMsgType;
	tyHermesCheckAlive tyCheckAlive;
	signed short iCheckAliveFirstIdx;
	signed short iCheckAliveLastIdx;
	tyHermesCheckAlive tyCheckAlivePing;
	signed short iCheckAlivePingFirstIdx;
	signed short iCheckAlivePingLastIdx;
	tyHermesCheckAlive tyCheckAlivePong;
	signed short iCheckAlivePongFirstIdx;
	signed short iCheckAlivePongLastIdx;
	tyHermesServiceDescription tyServiceDescription;
	signed short iServiceDescriptionFirstIdx;
	signed short iServiceDescriptionLastIdx;
	tyHermesSServiceDescription tySServiceDescription;
	signed short iSServiceDescriptionFirstIdx;
	signed short iSServiceDescriptionLastIdx;
	tyHermesNotification tyNotification;
	signed short iNotificationFirstIdx;
	signed short iNotificationLastIdx;
	tyHermesBoardAvailable tyBoardAvailable;
	signed short iBoardAvailableFirstIdx;
	signed short iBoardAvailableLastIdx;
	signed short iRevokeBoardAvailableFirstIdx;
	signed short iRevokeBoardAvailableLastIdx;
	tyHermesMachineReady tyMachineReady;
	signed short iMachineReadyFirstIdx;
	signed short iMachineReadyLastIdx;
	signed short iRevokeMachineReadyFirstIdx;
	signed short iRevokeMachineReadyLastIdx;
	tyHermesStartTransport tyStartTransport;
	signed short iStartTransportFirstIdx;
	signed short iStartTransportLastIdx;
	tyHermesStopTransport tyStopTransport;
	signed short iStopTransportFirstIdx;
	signed short iStopTransportLastIdx;
	tyHermesTransportFinished tyTransportFinished;
	signed short iTransportFinishedFirstIdx;
	signed short iTransportFinishedLastIdx;
	tyHermesSetConfiguration tySetConfiguration;
	signed short iSetConfigurationFirstIdx;
	signed short iSetConfigurationLastIdx;
	signed short iGetConfigurationFirstIdx;
	signed short iGetConfigurationLastIdx;
	tyHermesCurrentConfiguration tyCurrentConfiguration;
	signed short iCurrentConfigurationFirstIdx;
	signed short iCurrentConfigurationLastIdx;
	tyHermesBoardForecast tyBoardForecast;
	signed short iBoardForecastFirstIdx;
	signed short iBoardForecastLastIdx;
	tyHermesBoardArrived tyBoardArrived;
	signed short iBoardArrivedFirstIdx;
	signed short iBoardArrivedLastIdx;
	tyHermesBoardDeparted tyBoardDeparted;
	signed short iBoardDepartedFirstIdx;
	signed short iBoardDepartedLastIdx;
	tyHermesQueryBoardInfo tyQueryBoardInfo;
	signed short iQueryBoardInfoFirstIdx;
	signed short iQueryBoardInfoLastIdx;
	tyHermesSendBoardInfo tySendBoardInfo;
	signed short iSendBoardInfoFirstIdx;
	signed short iSendBoardInfoLastIdx;
	tyHermesQueryWorkOrderInfo tyQueryWorkOrderInfo;
	signed short iQueryWorkOrderInfoFirstIdx;
	signed short iQueryWorkOrderInfoLastIdx;
	tyHermesSendWorkOrderInfo tySendWorkOrderInfo;
	signed short iSendWorkOrderInfoFirstIdx;
	signed short iSendWorkOrderInfoLastIdx;
	tyHermesCommand tyCommand;
	signed short iCommandFirstIdx;
	signed short iCommandLastIdx1;
	struct tyXMLTableDat(* p_tyXMLTable);
	struct tyXMLTableDat(* p_tyXMLTable1);
	unsigned long udi;
	signed short iHermesIdx;
	eHermesMsgType eMsgType;
	plcstring sLowerCase[255];
	signed short iSubBoardCntr;
	plcbit bSetUpstream;
	plcbit bSetDownstream;
	plcbit bCurrUpstream;
	plcbit bCurrDownstream;
};
_BUR_PUBLIC void fbHermesParseXMLTable(struct fbHermesParseXMLTable* inst);
_BUR_PUBLIC signed short fHermesFormCheckAlive(struct tyXMLTableDat pa_tyXMLTable[12], struct DTStructure(* tyDTStructure), struct tyHermesCheckAlive(* tyParameter));
_BUR_PUBLIC signed short fHermesFormSServiceDescription(struct tyXMLTableDat pa_tyXMLTable[30], struct DTStructure(* tyDTStructure), struct tyHermesSServiceDescription(* tyParameter));
_BUR_PUBLIC signed short fHermesFormNotification(struct tyXMLTableDat pa_tyXMLTable[14], struct DTStructure(* tyDTStructure), struct tyHermesNotification(* tyParameter));
_BUR_PUBLIC signed short fHermesFormCurrentConfiguration(struct tyXMLTableDat pa_tyXMLTable[200], struct DTStructure(* tyDTStructure), struct tyHermesCurrentConfiguration(* tyParameter));
_BUR_PUBLIC signed short fHermesFormBoardArrived(struct tyXMLTableDat pa_tyXMLTable[50], struct DTStructure(* tyDTStructure), struct tyHermesBoardArrived(* tyParameter));
_BUR_PUBLIC signed short fHermesFormBoardDeparted(struct tyXMLTableDat pa_tyXMLTable[50], struct DTStructure(* tyDTStructure), struct tyHermesBoardDeparted(* tyParameter));
_BUR_PUBLIC signed short fHermesFormQueryWorkOrderInfo(struct tyXMLTableDat pa_tyXMLTable[20], struct DTStructure(* tyDTStructure), struct tyHermesQueryWorkOrderInfo(* tyParameter));
_BUR_PUBLIC signed short fHermesFormReplyWorkOrderInfo(struct tyXMLTableDat pa_tyXMLTable[50], struct DTStructure(* tyDTStructure), struct tyHermesReplyWorkOrderInfo(* tyParameter));
_BUR_PUBLIC unsigned long fHermesChkParamSSD(struct tyHermesSServiceDescription(* tyServiceDescription));
_BUR_PUBLIC unsigned long fHermesChkParamN(struct tyHermesNotification(* tyNotification));
_BUR_PUBLIC unsigned long fHermesChkParamSWQW(struct tyHermesSendWorkOrderInfo(* tySendWorkOrderInfo), struct tyHermesQueryWorkOrderInfo(* tyQueryWorkOrderInfo));
_BUR_PUBLIC plcbit fHermesNotificationRstConn(struct tyHermesNotification(* tyNotification));
struct fbHermesCheckAlive
{	plctime tSendTm;
	plctime tRcvTimeOut;
	tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	struct TON fbSendTm;
	struct TON fbRcvTO;
	plcbit bEn;
	plcbit bDataRcv;
	plcbit bDataSend;
	plcbit zzEdge00000;
};
_BUR_PUBLIC void fbHermesCheckAlive(struct fbHermesCheckAlive* inst);
struct fbHermesCheckAliveSendPing
{	tyHermesCheckAlive tyDataRcv;
	DTStructure tyDTStructure;
	plctime tSendTm;
	plctime tRcvTimeOut;
	tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	struct TON fbSendTm;
	struct TON fbRcvTO;
	plcbit bEn;
	plcbit bDataRcv;
	plcbit bDataSend;
	plcbit zzEdge00000;
	plcbit zzEdge00001;
};
_BUR_PUBLIC void fbHermesCheckAliveSendPing(struct fbHermesCheckAliveSendPing* inst);
struct fbHermesCheckAliveRcvPing
{	tyHermesCheckAlive tyDataRcv;
	tyHermesCheckAlive tyDataSend;
	unsigned long udiStatus;
	plcbit bEn;
	plcbit bDataRcv;
	plcbit bDataSend;
	plcbit zzEdge00000;
};
_BUR_PUBLIC void fbHermesCheckAliveRcvPing(struct fbHermesCheckAliveRcvPing* inst);
_BUR_PUBLIC unsigned long fHermesIllegalMsgSvy(eHermesState eState, struct tyHermesMsgType(* tyMsgType));
_BUR_PUBLIC plcbit fHermesGenerateUUID(plcstring p_sUUID[37], struct DTStructure(* tyDTStructure), unsigned char a_usiMacAddr[6]);
_BUR_PUBLIC plcbit fHermesRmvOneMsgSend(eHermesMsgType pa_eMsgSend[51], unsigned long(* p_udiIdx));
_BUR_PUBLIC plcbit fHermesAddOneMsgSend(eHermesMsgType pa_eMsgSend[51], unsigned long(* p_udiIdx), eHermesMsgType eMsgType);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL plcbit bHermesRun;
_BUR_LOCAL plcbit bHermesStop;
_BUR_LOCAL struct tyHermesSvyParam(* p_tyParam);
_BUR_LOCAL plcstring(* p_sIPAddr)[16];
_BUR_LOCAL unsigned char(* pa_usiMacAddr)[6];
_BUR_LOCAL struct DTStructure(* p_tyDTStructure);
_BUR_LOCAL plcdt(* p_dtCurrDT);
_BUR_LOCAL plcstring(* p_sMcId)[81];
_BUR_LOCAL eHermesAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcstring(* p_sRecipeNm)[255];
_BUR_LOCAL plcstring(* p_sMagazineId)[81];
_BUR_LOCAL signed short(* p_iSlotId);
_BUR_LOCAL eHermesBoardTransfer(* p_eBoardTransfer1);
_BUR_LOCAL eHermesBoardTransfer(* p_eBoardTransfer2);
_BUR_LOCAL eHermesBoardTransfer(* p_eBoardTransfer3);
_BUR_LOCAL eHermesBoardTransfer(* p_eBoardTransfer4);
_BUR_LOCAL plcstring(* p_sBarcode)[255];
_BUR_LOCAL plcstring(* p_sVersion)[8];
_BUR_LOCAL unsigned long(* p_udiSndBffrSize);
_BUR_LOCAL unsigned long(* p_udiRcvBffrSize);
_BUR_LOCAL unsigned long(* p_udiAliveIdleTimeInSec);
_BUR_LOCAL plctime(* p_tConnTimeOut);
_BUR_LOCAL signed long(* p_diTransferInTO);
_BUR_LOCAL plcbit(* p_bNewBrdAvlLastZone);
_BUR_LOCAL plcbit(* p_bOpsRun);
_BUR_LOCAL unsigned long(* p_udiFileKeepDay);
_BUR_LOCAL plcstring(* p_sConfigFileName)[81];
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bSvyPrep);
_BUR_LOCAL plcbit(* p_bSvyEn);
_BUR_LOCAL plcbit(* p_bQueryWorkOrderInfo);
_BUR_LOCAL plcbit(* p_bReinsertBrd);
_BUR_LOCAL plcbit(* p_bInsertBoard);
_BUR_LOCAL struct tyHermesConfiguration(* p_tyHermesConfiguration);
_BUR_LOCAL plcbit(* p_bUSHermesStopTransport1);
_BUR_LOCAL plcbit(* p_bUSHermesStopTransport2);
_BUR_LOCAL plcbit(* p_bUSHermesStopTransport3);
_BUR_LOCAL plcbit(* p_bUSHermesStopTransport4);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyUSBoardArrived1);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyUSBoardArrived2);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyUSBoardArrived3);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyUSBoardArrived4);
_BUR_LOCAL plcbit(* p_bDSHermesTransportFinished1);
_BUR_LOCAL plcbit(* p_bDSHermesTransportFinished2);
_BUR_LOCAL plcbit(* p_bDSHermesTransportFinished3);
_BUR_LOCAL plcbit(* p_bDSHermesTransportFinished4);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyDSBoardDeparted1);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyDSBoardDeparted2);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyDSBoardDeparted3);
_BUR_LOCAL struct tyHermesBoardAvailable(* p_tyDSBoardDeparted4);
_BUR_LOCAL unsigned long(* p_udiRetainDataAddr);
_BUR_LOCAL unsigned long(* p_udiRetainDataLen);
_BUR_LOCAL plcstring(* p_sInfoMsg)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg1)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg2)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg3)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg4)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg5)[201];
_BUR_LOCAL plcstring(* p_sInfoMsg6)[201];
_BUR_LOCAL eFBStatus(* p_eMcParamStatus);
_BUR_LOCAL eMcParamAction(* p_eMcParamStat);
_BUR_LOCAL eFBStatus(* p_eHermesStatus);
_BUR_LOCAL eHermesAction(* p_eHermesStat);
_BUR_LOCAL plcbit(* p_bAllZonesEmpty);
_BUR_LOCAL plcbit(* p_bDeleteWorkOrder);
_BUR_LOCAL plcbit(* p_bFirstMcIntheLine);
_BUR_LOCAL plcstring(* p_sRetainFileName)[81];
_BUR_LOCAL plcstring(* p_sInternalRcv)[65536];
_BUR_LOCAL plcbit(* p_bInternalUse);
_BUR_LOCAL plcbit(* p_bHermesSvyQueryBoardInfo);
_BUR_LOCAL plcbit(* p_bAcceptCondition);
_BUR_LOCAL plcbit(* p_bConvRgtSen);
_BUR_LOCAL plcbit(* p_bConvLftSen);
_BUR_LOCAL plcbit(* p_bAWWidthPosDiff);
_BUR_LOCAL struct tyProdRcpParam(* p_tyProdRcpCurrRcp);
_BUR_LOCAL struct tyMcParam(* p_tyMcParamCurr);
_BUR_LOCAL struct tyNtParam(* p_tyNtParamCurr);
_BUR_LOCAL eMcSetCommMod(* p_eLinkMcParamDSCommMod);
_BUR_LOCAL eHermesAction eAct;
_BUR_LOCAL eHermesAction eStat;
_BUR_LOCAL eHermesAction eHermesAct;
_BUR_LOCAL eMcParamAction eMcParamAct;
_BUR_LOCAL eFBStatus eMainStatus;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL eFBStatus eStatus1;
_BUR_LOCAL eFBStatus eStatus2;
_BUR_LOCAL eFBStatus eStatus3;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus2;
_BUR_LOCAL unsigned long udiStatus3;
_BUR_LOCAL unsigned long udiStatus4;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL tyAlmDat tyAlmData2;
_BUR_LOCAL tyAlmDat tyAlmData3;
_BUR_LOCAL tyAlmDat tyAlmData4;
_BUR_LOCAL tyAlmDat tyInfoData;
_BUR_LOCAL tyAlmDat tyInfoData1;
_BUR_LOCAL tyAlmDat tyInfoData2;
_BUR_LOCAL tyAlmDat tyInfoData3;
_BUR_LOCAL tyAlmDat tyInfoData4;
_BUR_LOCAL tyAlmDat tyInfoData5;
_BUR_LOCAL tyAlmDat tyInfoData6;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[200];
_BUR_LOCAL plcbit bConnected;
_BUR_LOCAL plcbit bTest;
_BUR_LOCAL plcbit bHandshakeDone;
_BUR_LOCAL plcstring sInternalSnd[65536];
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL plcbit bWriteConfig;
_BUR_LOCAL plcbit bUpdateUIData;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL tyHermesSvyParam tyParam;
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL unsigned char a_usiMacAddr[6];
_BUR_LOCAL DTStructure tyDTStructure;
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL plcstring sMcId[81];
_BUR_LOCAL plcstring sMagazineId[81];
_BUR_LOCAL signed short iSlotId;
_BUR_LOCAL plcstring sBarcode[255];
_BUR_LOCAL eHermesBoardTransfer eBoardTransfer1;
_BUR_LOCAL eHermesBoardTransfer eBoardTransfer2;
_BUR_LOCAL eHermesBoardTransfer eBoardTransfer3;
_BUR_LOCAL eHermesBoardTransfer eBoardTransfer4;
_BUR_LOCAL plcstring sVersion[8];
_BUR_LOCAL plcstring sWorkOrderId[81];
_BUR_LOCAL plcstring sBatchId[81];
_BUR_LOCAL plcstring sRecipeNm[255];
_BUR_LOCAL unsigned long udiSndBffrSize;
_BUR_LOCAL unsigned long udiRcvBffrSize;
_BUR_LOCAL unsigned long udiAliveIdleTimeInSec;
_BUR_LOCAL plctime tConnTimeOut;
_BUR_LOCAL signed long diTransferInTO;
_BUR_LOCAL plcbit bNewBrdAvl;
_BUR_LOCAL plcbit bOpsRun;
_BUR_LOCAL unsigned long udiFileKeepDay;
_BUR_LOCAL plcstring sConfigFileName[81];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sRetainFileName[81];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bSvyPrep;
_BUR_LOCAL plcbit bSvyEn;
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcstring sInfoMsg1[201];
_BUR_LOCAL plcstring sInfoMsg2[201];
_BUR_LOCAL plcstring sInfoMsg3[201];
_BUR_LOCAL plcstring sInfoMsg4[201];
_BUR_LOCAL plcstring sInfoMsg5[201];
_BUR_LOCAL plcstring sInfoMsg6[201];
_BUR_LOCAL tyHermesConfiguration tyHermesCurrConfiguration;
_BUR_LOCAL plcbit bQueryWorkOrderInfo;
_BUR_LOCAL plcbit bReinsertBrd;
_BUR_LOCAL plcbit bInsertBoard;
_BUR_LOCAL plcbit bManualInsertData;
_BUR_LOCAL plcbit bQueryInsertBoard;
_BUR_LOCAL plcbit bAcceptCondition;
_BUR_LOCAL plcbit bAllZonesEmpty;
_BUR_LOCAL plcbit bDeleteWorkOrder;
_BUR_LOCAL plcbit bFirstMcIntheLine;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd1;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd2;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd3;
_BUR_LOCAL plcbit bUSHermesStopTransportSnd4;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd1;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd2;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd3;
_BUR_LOCAL plcbit bDSHermesTransportFinishedSnd4;
_BUR_LOCAL tyHermesBoardAvailable tyUSHermesBoardArrivedData1;
_BUR_LOCAL tyHermesBoardAvailable tyUSHermesBoardArrivedData2;
_BUR_LOCAL tyHermesBoardAvailable tyUSHermesBoardArrivedData3;
_BUR_LOCAL tyHermesBoardAvailable tyUSHermesBoardArrivedData4;
_BUR_LOCAL tyHermesBoardAvailable tyDSHermesBoardDepartedData1;
_BUR_LOCAL tyHermesBoardAvailable tyDSHermesBoardDepartedData2;
_BUR_LOCAL tyHermesBoardAvailable tyDSHermesBoardDepartedData3;
_BUR_LOCAL tyHermesBoardAvailable tyDSHermesBoardDepartedData4;
_BUR_LOCAL plcbit bInternalUse;
_BUR_LOCAL plcstring sInternalRcv[65536];
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bRstConnection;
_BUR_LOCAL plcbit bRstState;
_BUR_LOCAL plcbit bRcvWorkOrderInfo1;
_BUR_LOCAL plcbit bRcvWorkOrderInfo2;
_BUR_LOCAL plcbit bRcvInsertBoardInfo;
_BUR_LOCAL plcbit bRstWorkOrderInfo;
_BUR_LOCAL plcbit bReplyWorkOrderInfo;
_BUR_LOCAL plcbit bFoundIndexUS1;
_BUR_LOCAL plcbit bFoundIndexUS2;
_BUR_LOCAL plcbit bFoundIndexUS3;
_BUR_LOCAL plcbit bFoundIndexUS4;
_BUR_LOCAL plcbit bFoundIndexDS1;
_BUR_LOCAL plcbit bFoundIndexDS2;
_BUR_LOCAL plcbit bFoundIndexDS3;
_BUR_LOCAL plcbit bFoundIndexDS4;
_BUR_LOCAL unsigned long udiFoundIndexUS1;
_BUR_LOCAL unsigned long udiFoundIndexUS2;
_BUR_LOCAL unsigned long udiFoundIndexUS3;
_BUR_LOCAL unsigned long udiFoundIndexUS4;
_BUR_LOCAL unsigned long udiFoundIndexDS1;
_BUR_LOCAL unsigned long udiFoundIndexDS2;
_BUR_LOCAL unsigned long udiFoundIndexDS3;
_BUR_LOCAL unsigned long udiFoundIndexDS4;
_BUR_LOCAL unsigned long k;
_BUR_LOCAL unsigned long kk;
_BUR_LOCAL signed short j;
_BUR_LOCAL signed short jj;
_BUR_LOCAL signed short jjj;
_BUR_LOCAL signed short jjjj;
_BUR_LOCAL unsigned long udiSvrIdent;
_BUR_LOCAL unsigned long udiClntIdent;
_BUR_LOCAL unsigned long udiClntIdentExtra;
_BUR_LOCAL unsigned long udiXMLTableWriteIdx;
_BUR_LOCAL unsigned long udiMsgSendBffr;
_BUR_LOCAL unsigned long udiSndMsgLen;
_BUR_LOCAL plcstring sSnd[65536];
_BUR_LOCAL plcstring sRcv[65536];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataRcv[201];
_BUR_LOCAL struct tyXMLTableDat a_tyXMLTableDataSnd[201];
_BUR_LOCAL eHermesMsgType a_eMsgSend[51];
_BUR_LOCAL tyHermesMsgType tyMsgTypeRcv;
_BUR_LOCAL tyHermesCheckAlive tyCheckAliveSnd;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePingSnd;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePongSnd;
_BUR_LOCAL tyHermesCheckAlive tyCheckAliveRcv;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePingRcv;
_BUR_LOCAL tyHermesCheckAlive tyCheckAlivePongRcv;
_BUR_LOCAL tyHermesServiceDescription tyServiceDescriptionRcv;
_BUR_LOCAL tyHermesSServiceDescription tySServiceDescriptionSnd;
_BUR_LOCAL tyHermesSServiceDescription tySServiceDescriptionRcv;
_BUR_LOCAL tyHermesNotification tyNotificationSnd;
_BUR_LOCAL tyHermesNotification tyNotificationRcv;
_BUR_LOCAL tyHermesBoardAvailable tyBoardAvailableRcv;
_BUR_LOCAL tyHermesMachineReady tyMachineReady;
_BUR_LOCAL tyHermesStartTransport tyStartTransport;
_BUR_LOCAL tyHermesStopTransport tyStopTransport;
_BUR_LOCAL tyHermesTransportFinished tyTransportFinished;
_BUR_LOCAL tyHermesSetConfiguration tySetConfiguration;
_BUR_LOCAL tyHermesSetConfiguration tySetConfigurationRcv;
_BUR_LOCAL tyHermesSetConfiguration tySetConfigurationModified;
_BUR_LOCAL tyHermesCurrentConfiguration tyCurrentConfigurationRcv;
_BUR_LOCAL tyHermesCurrentConfiguration tyCurrentConfigurationSnd;
_BUR_LOCAL tyHermesBoardForecast tyBoardForecast;
_BUR_LOCAL tyHermesBoardArrived tyBoardArrivedRcv;
_BUR_LOCAL tyHermesBoardArrived tyBoardArrived1;
_BUR_LOCAL tyHermesBoardArrived tyBoardArrived2;
_BUR_LOCAL tyHermesBoardArrived tyBoardArrived3;
_BUR_LOCAL tyHermesBoardArrived tyBoardArrived4;
_BUR_LOCAL tyHermesBoardDeparted tyBoardDepartedRcv;
_BUR_LOCAL tyHermesBoardDeparted tyBoardDeparted1;
_BUR_LOCAL tyHermesBoardDeparted tyBoardDeparted2;
_BUR_LOCAL tyHermesBoardDeparted tyBoardDeparted3;
_BUR_LOCAL tyHermesBoardDeparted tyBoardDeparted4;
_BUR_LOCAL tyHermesQueryBoardInfo tyQueryBoardInfo;
_BUR_LOCAL tyHermesSendBoardInfo tySendBoardInfo;
_BUR_LOCAL tyHermesQueryWorkOrderInfo tyQueryWorkOrderInfo;
_BUR_LOCAL tyHermesSendWorkOrderInfo tySendWorkOrderInfoAcc;
_BUR_LOCAL tyHermesSendWorkOrderInfo tySendWorkOrderInfoRcv;
_BUR_LOCAL tyHermesReplyWorkOrderInfo tyReplyWorkOrderInfo;
_BUR_LOCAL struct fbTCPCreateSvr fbCreateSvr;
_BUR_LOCAL struct fbTCPListen fbListen;
_BUR_LOCAL struct fbTCPRcv fbRcv;
_BUR_LOCAL struct fbTCPSnd fbSend;
_BUR_LOCAL struct fbTCPClose fbCloseSvr;
_BUR_LOCAL struct fbTCPClose fbCloseClnt;
_BUR_LOCAL struct fbHermesParseXMLTable fbParseXMLTable;
_BUR_LOCAL struct fbHermesCheckAlive fbCheckAlive;
_BUR_LOCAL struct fbHermesCheckAliveSendPing fbCheckAliveSendPing;
_BUR_LOCAL struct fbHermesCheckAliveRcvPing fbCheckAliveRcvPing;
_BUR_LOCAL struct fbHermesSequenceSvy fbSequenceSvy;
_BUR_LOCAL struct fbHermesSequenceSvyTO fbSequenceTO;
_BUR_LOCAL eHermesAction eStatOld;
_BUR_LOCAL tyHermesSvyParam tyParamOld;
_BUR_LOCAL unsigned long udiLogCntr;
_BUR_LOCAL unsigned long udiWriteLogCntr;
_BUR_LOCAL plcstring a_sLogList[10][65536];
_BUR_LOCAL plcstring sDT[81];
_BUR_LOCAL plcdt dtCurrDTTemp;
_BUR_LOCAL struct fbFileFullAppend fbFileAppend1;
_BUR_LOCAL struct fbFileOldDel fbFileOldDel1;
_BUR_LOCAL struct fbFileFullRead fbFileRead1;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite1;
_BUR_LOCAL struct TON fbDelayTm;
_BUR_LOCAL struct TON fbDelayTm1;
_BUR_LOCAL unsigned long udiTargetAddress;
_BUR_LOCAL unsigned long udiTargetAddress1;
_BUR_LOCAL unsigned long udiSizeAddress;
_BUR_LOCAL unsigned long udiSizeAddress1;
_BUR_LOCAL unsigned long udiRetainDataAddr;
_BUR_LOCAL unsigned long udiRetainDataLen;
_BUR_LOCAL signed long diReqWidthInUM;
_BUR_LOCAL signed short iWriteLogStep;
_BUR_LOCAL signed short i;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupSvyHermesAct;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL unsigned long p_TimeCurrDT;
_GLOBAL unsigned long p_TimeCurrDTStruct;
_GLOBAL unsigned long p_HWInfoIPAddr;
_GLOBAL unsigned long p_HWInfoMacAddr;
_GLOBAL plcstring g_sSvyHermesProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_ProdRcpCurrRcp0;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Nm;
_GLOBAL unsigned long p_McParamStat;
_GLOBAL unsigned long p_McParamStatus;
_GLOBAL unsigned long p_McParamCurr;
_GLOBAL unsigned long p_McParamMcNm;
_GLOBAL unsigned long p_McParamTranOutErrDlyTm;
_GLOBAL unsigned long p_McParamDSCommMod;
_GLOBAL unsigned long p_McParamHermesSvyEn;
_GLOBAL unsigned long p_NtParamCurr;
_GLOBAL unsigned long p_NtParamHermesPrep;
_GLOBAL unsigned long p_NtParamHermesSvyPrep;
_GLOBAL unsigned long p_NtParamHermesSvyFirstMc;
_GLOBAL unsigned long p_NtParamSvyHermesProgNm;
_GLOBAL unsigned long p_NtParamSvyHermesConfigFileNm;
_GLOBAL unsigned long p_NtParamSvyHermesFileKeepDay;
_GLOBAL unsigned long p_NtParamSvyHermesAliveTmInSec;
_GLOBAL unsigned long p_NtParamSvyHermesConnTO;
_GLOBAL unsigned long p_NtParamSvyHermesRetainFileNm;
_GLOBAL unsigned long p_AWOpenWidthPosDiff;
_GLOBAL unsigned long p_DIConvLftSen;
_GLOBAL unsigned long p_DIConvRgtSen;
_GLOBAL unsigned long p_HermesStat;
_GLOBAL unsigned long p_HermesStatus;
_GLOBAL unsigned long p_HermesConfiguration;
_GLOBAL unsigned long p_HermesSvyParam;
_GLOBAL unsigned long p_HermesBrdAvlDataNewBrdAvlLastZ;
_GLOBAL unsigned long p_USHermesStopTransportSnd;
_GLOBAL unsigned long p_OpsRun;
_GLOBAL signed long c_diLFClntNum;
_GLOBAL signed long c_diHermesConfigMaxIdx;
_LOCAL plcbit Edge0004400000;
_LOCAL plcbit Edge0004400001;
_LOCAL plcbit Edge0000700000;
_LOCAL plcbit Edge0000700001;
_LOCAL plcbit Edge0000700002;
_LOCAL plcbit Edge0000700003;
_LOCAL plcbit Edge0000700004;
_LOCAL plcbit Edge0000700005;
_LOCAL plcbit Edge0000700006;
_LOCAL plcbit Edge0000700007;
_LOCAL plcbit Edge0000700008;
_LOCAL plcbit Edge0000700009;
_LOCAL plcbit Edge0000700010;
_LOCAL plcbit Edge0001900000;
_LOCAL plcbit Edge0001900001;
_LOCAL plcbit Edge0001900002;
_LOCAL plcbit Edge0001900003;
_LOCAL plcbit Edge0001900004;
_LOCAL plcbit Edge0001900005;
_LOCAL plcbit Edge0000900000;
_LOCAL plcbit Edge0001100000;
_LOCAL plcbit Edge0001000000;
_LOCAL plcbit Edge0002000000;
_LOCAL plcbit Edge0002000001;
_LOCAL plcbit Edge0002000002;
_LOCAL plcbit Edge0002000003;
_LOCAL plcbit Edge0002000004;
_LOCAL plcbit Edge0002000005;
_LOCAL plcbit Edge0002000006;
_LOCAL plcbit Edge0002000007;
_LOCAL plcbit Edge0002100000;
_LOCAL plcbit Edge0002200000;
_LOCAL plcbit Edge0002300000;
_LOCAL plcbit Edge0002400000;
_LOCAL plcbit Edge0002500000;
_LOCAL plcbit Edge0002600000;
_LOCAL plcbit Edge0002700000;
_LOCAL plcbit Edge0002800000;
_LOCAL plcbit Edge0003100000;
_LOCAL plcbit Edge0000200000;
_LOCAL plcbit Edge0000300000;
_LOCAL plcbit Edge0000400000;
_LOCAL plcbit Edge0000500000;
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
static void __AS__Action__Act_Background_ProcessData(void);
static void __AS__Action__Act_Background_TCPCreateSvr(void);
static void __AS__Action__Act_Background_TCPListen(void);
static void __AS__Action__Act_Background_TCPRcv(void);
static void __AS__Action__Act_Background_NotificationRcv(void);
static void __AS__Action__Act_Background_IllegalMsg(void);
static void __AS__Action__Act_Background_ChkParamRcv(void);
static void __AS__Action__Act_Background_CmpParamRcv(void);
static void __AS__Action__Act_Background_Sequence(void);
static void __AS__Action__Act_Background_SequenceTO(void);
static void __AS__Action__Act_Background_ChkAlive(void);
static void __AS__Action__Act_Background_ChkAliveSendPing(void);
static void __AS__Action__Act_Background_ChkAliveRcvPing(void);
static void __AS__Action__Act_Background_UpdtConfig(void);
static void __AS__Action__Act_Background_ChgConfig(void);
static void __AS__Action__Act_Background_QueryWorkOrderInfo(void);
static void __AS__Action__Act_Background_SendBoardArrivedLane1(void);
static void __AS__Action__Act_Background_SendBoardArrivedLane2(void);
static void __AS__Action__Act_Background_SendBoardArrivedLane3(void);
static void __AS__Action__Act_Background_SendBoardArrivedLane4(void);
static void __AS__Action__Act_Background_SendBoardDepartedLane1(void);
static void __AS__Action__Act_Background_SendBoardDepartedLane2(void);
static void __AS__Action__Act_Background_SendBoardDepartedLane3(void);
static void __AS__Action__Act_Background_SendBoardDepartedLane4(void);
static void __AS__Action__Act_Background_TCPSend(void);
static void __AS__Action__Act_Background_TCPCloseSvr(void);
static void __AS__Action__Act_Background_TCPCloseClnt(void);
static void __AS__Action__Act_Background_Stop(void);
static void __AS__Action__Act_Background_Log(void);
static void __AS__Action__Act_Background_Err(void);
static void __AS__Action__Act_Main_Disable(void);
static void __AS__Action__Act_CombineErr(void);
static void __AS__Action__Act_Alarm(void);
static void __AS__Action__Act_Alarm1(void);
static void __AS__Action__Act_Alarm2(void);
static void __AS__Action__Act_Alarm3(void);
static void __AS__Action__Act_Alarm4(void);
static void __AS__Action__Act_Background_NotificationSnd(void);
