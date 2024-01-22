#ifndef __AS__TYPE_
#define __AS__TYPE_
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

#ifndef __AS__TYPE_tyDigitalInput
#define __AS__TYPE_tyDigitalInput
typedef struct tyDigitalInput
{	plcbit bSafetyRlySig;
	plcbit bEStopSig;
	plcbit bCoverSWSig;
	plcbit bUBA;
	plcbit bUBAStat;
	plcbit bDSB;
	plcbit bConvLftSen;
	plcbit bConvRgtSen;
	plcbit bPressureSW;
	plcbit bThermalPrtSig;
	plcbit bCoatingSen;
	plcbit bUSWidthChkSen;
	plcbit bDSWidthChkSen;
	plcbit bInvertHomeSen;
	plcbit bInvertRemoteSen;
	plcbit bInShutterOpenRS;
	plcbit bInShutterCloseRS;
	plcbit bOutShutterOpenRS;
	plcbit bOutShutterCloseRS;
	plcbit bClamp2Sen;
	plcbit bClamp3Sen;
	plcbit bClampRS1;
	plcbit bUnClampRS1;
	plcbit bClampRS2;
	plcbit bUnClampRS2;
	plcbit bClampRS3;
	plcbit bUnClampRS3;
	plcbit bUSWidthChkSen1;
	plcbit bCoverSWSig2;
	plcbit bSafetySigFromUS;
	plcbit bSafetySigFromDS;
	plcbit bUnlockCoverSigFromUS;
	plcbit bUnlockCoverSigFromDS;
	plcbit bCoverUnlockPB1;
	plcbit bUBA2;
	plcbit bUBAStat2;
	plcbit bSPARE9;
	plcbit bSPARE10;
	plcbit bSPARE11;
	plcbit bSPARE12;
} tyDigitalInput;
#endif

#ifndef __AS__TYPE_eDOAction
#define __AS__TYPE_eDOAction
typedef enum eDOAction
{	DOActIdle = 0,
	DOActRstAll = 1,
	DOActSetBypassCoverSwitch = 2,
	DOActRstBypassCoverSwitch = 3,
} eDOAction;
#endif

#ifndef __AS__TYPE_tyDigitalOutput
#define __AS__TYPE_tyDigitalOutput
typedef struct tyDigitalOutput
{	plcbit bSafetyRlyRst;
	plcbit bTLRed;
	plcbit bTLAmber;
	plcbit bTLGreen;
	plcbit bTLBlue;
	plcbit bTLWhite;
	plcbit bBuz;
	plcbit bCoatingStprRet;
	plcbit bUSB;
	plcbit bDBA;
	plcbit bDBAStat;
	plcbit bConvMtrCW;
	plcbit bConvMtrCCW;
	plcbit bStprUnblkCtrl;
	plcbit bStprBlkCtrl;
	plcbit bInvertHome;
	plcbit bInvertRemote;
	plcbit bInvertBrake;
	plcbit bMtrPwrRly;
	plcbit bClampControl;
	plcbit bUnclampControl;
	plcbit bInShutterOpenCtrl;
	plcbit bInShutterCloseCtrl;
	plcbit bOutShutterOpenCtrl;
	plcbit bOutShutterCloseCtrl;
	plcbit bClamp1Ctrl;
	plcbit bUnClamp1Ctrl;
	plcbit bClamp2Ctrl;
	plcbit bUnClamp2Ctrl;
	plcbit bClamp3Ctrl;
	plcbit bUnClamp3Ctrl;
	plcbit bTopCvrUnlckToDS;
	plcbit bTopCvrUnlckToUS;
	plcbit bMachineSafetySigToDS;
	plcbit bMachineSafetySigToUS;
	plcbit bCoverPBLED1;
	plcbit bBypassTopCover1;
	plcbit bSafetyTopCoverSWCoil1;
	plcbit bUSB2;
	plcbit bSPARE9;
	plcbit bSPARE10;
	plcbit bSPARE11;
	plcbit bSPARE12;
} tyDigitalOutput;
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

#ifndef __AS__TYPE_eInvertPos
#define __AS__TYPE_eInvertPos
typedef enum eInvertPos
{	InvertCurrPosAtRemote = 0,
	InvertCurrPosAtHome = 1,
	InvertPosInvalid = 2,
} eInvertPos;
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

#ifndef __AS__TYPE_tyHermesCommandPause
#define __AS__TYPE_tyHermesCommandPause
typedef struct tyHermesCommandPause
{	plcbit bFeatureRequestTo;
	plcbit bUnlockCoverSigTo;
	plcbit bPrevUnlockCoverSigTo;
	plcbit bMachineSafetySigFrom;
	plcbit bFeatureRequestFrom;
	plcbit bUnlockCoverSigFrom;
	plcbit bMachineSafetySigTo;
	plcbit bPrevMachineSafetySigTo;
} tyHermesCommandPause;
#endif

_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_LOCAL eDOAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiMax);
_BUR_LOCAL struct tyDigitalOutputSettings(* p_tyDOSettings);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL plcbit(* p_bSafetyRlyRst);
_BUR_LOCAL plcbit(* p_bTLRed);
_BUR_LOCAL plcbit(* p_bTLAmber);
_BUR_LOCAL plcbit(* p_bTLGreen);
_BUR_LOCAL plcbit(* p_bTLWhite);
_BUR_LOCAL plcbit(* p_bTLBlue);
_BUR_LOCAL plcbit(* p_bBuz);
_BUR_LOCAL plcbit(* p_bUSB);
_BUR_LOCAL plcbit(* p_bDBA);
_BUR_LOCAL plcbit(* p_bDBAStat);
_BUR_LOCAL plcbit(* p_bUSB2);
_BUR_LOCAL plcbit(* p_bConvMtrCW);
_BUR_LOCAL plcbit(* p_bConvMtrCCW);
_BUR_LOCAL plcbit(* p_bStprUnblkCtrl);
_BUR_LOCAL plcbit(* p_bStprBlkCtrl);
_BUR_LOCAL plcbit(* p_bInvertBrake);
_BUR_LOCAL plcbit(* p_bInvertHome);
_BUR_LOCAL plcbit(* p_bInvertRemote);
_BUR_LOCAL plcbit(* p_bClampControl);
_BUR_LOCAL plcbit(* p_bUnclampControl);
_BUR_LOCAL plcbit(* p_bMtrPwrRly);
_BUR_LOCAL plcbit(* p_bInShutterOpenCtrl);
_BUR_LOCAL plcbit(* p_bInShutterCloseCtrl);
_BUR_LOCAL plcbit(* p_bOutShutterOpenCtrl);
_BUR_LOCAL plcbit(* p_bOutShutterCloseCtrl);
_BUR_LOCAL plcbit(* p_bClamp1Ctrl);
_BUR_LOCAL plcbit(* p_bUnClamp1Ctrl);
_BUR_LOCAL plcbit(* p_bClamp2Ctrl);
_BUR_LOCAL plcbit(* p_bUnClamp2Ctrl);
_BUR_LOCAL plcbit(* p_bClamp3Ctrl);
_BUR_LOCAL plcbit(* p_bUnClamp3Ctrl);
_BUR_LOCAL plcbit(* p_bLinkConvMtrSigOnOrLToR);
_BUR_LOCAL plcbit(* p_bLinkConvMtrDirOrRToL);
_BUR_LOCAL eInvertPos(* p_eLinkOpsInvertInvertCurrPos);
_BUR_LOCAL plcbit(* p_bLinkUIConvDCCtrl);
_BUR_LOCAL unsigned char(* p_usiLinkProdRcpCurrRcpMcMod);
_BUR_LOCAL eFBStatus(* p_eConvStatus);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepInitTwdStpr);
_BUR_LOCAL plcbit(* p_bLinkOpsInvertStepInitAwayStpr);
_BUR_LOCAL struct tyDigitalInput(* p_tyDI);
_BUR_LOCAL plcbit(* p_bBypsCoverSW1);
_BUR_LOCAL plcbit(* p_bTopCvrUnlckToDS);
_BUR_LOCAL plcbit(* p_bTopCvrUnlckToUS);
_BUR_LOCAL plcbit(* p_bMachineSafetySigToDS);
_BUR_LOCAL plcbit(* p_bMachineSafetySigToUS);
_BUR_LOCAL plcbit(* p_bSafetyTopCoverSWCoil1);
_BUR_LOCAL plcbit(* p_bCoverPBLED1);
_BUR_LOCAL plcbit(* p_bHermesCmdInitialCompl);
_BUR_LOCAL plcbit(* p_bHermesUSCmdFeaturePause);
_BUR_LOCAL struct tyHermesCommandPause(* p_tyHermesUSCmdPause);
_BUR_LOCAL plcbit(* p_bHermesDSCmdFeaturePause);
_BUR_LOCAL struct tyHermesCommandPause(* p_tyHermesDSCmdPause);
_BUR_LOCAL eDOAction eAct;
_BUR_LOCAL eDOAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyDigitalOutput tyDOutput;
_BUR_LOCAL tyDigitalOutputSettings tyDOSettings;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bSafetyRlyRst;
_BUR_LOCAL plcbit bTLRed;
_BUR_LOCAL plcbit bTLAmber;
_BUR_LOCAL plcbit bTLGreen;
_BUR_LOCAL plcbit bTLBlue;
_BUR_LOCAL plcbit bTLWhite;
_BUR_LOCAL plcbit bBuz;
_BUR_LOCAL plcbit bUSB;
_BUR_LOCAL plcbit bDBA;
_BUR_LOCAL plcbit bDBAStat;
_BUR_LOCAL plcbit bUSB2;
_BUR_LOCAL plcbit bConvMtrCW;
_BUR_LOCAL plcbit bConvMtrCCW;
_BUR_LOCAL plcbit bStprUnblkCtrl;
_BUR_LOCAL plcbit bStprBlkCtrl;
_BUR_LOCAL plcbit bInvertHome;
_BUR_LOCAL plcbit bInvertRemote;
_BUR_LOCAL plcbit bInvertBrake;
_BUR_LOCAL plcbit bClampControl;
_BUR_LOCAL plcbit bUnclampControl;
_BUR_LOCAL plcbit bMtrPwrRly;
_BUR_LOCAL plcbit bInShutterOpenCtrl;
_BUR_LOCAL plcbit bInShutterCloseCtrl;
_BUR_LOCAL plcbit bOutShutterOpenCtrl;
_BUR_LOCAL plcbit bOutShutterCloseCtrl;
_BUR_LOCAL plcbit bClamp1Ctrl;
_BUR_LOCAL plcbit bUnClamp1Ctrl;
_BUR_LOCAL plcbit bClamp2Ctrl;
_BUR_LOCAL plcbit bUnClamp2Ctrl;
_BUR_LOCAL plcbit bClamp3Ctrl;
_BUR_LOCAL plcbit bUnClamp3Ctrl;
_BUR_LOCAL plcbit bBypassTopCover1;
_BUR_LOCAL plcbit bTopCvrUnlckToDS;
_BUR_LOCAL plcbit bTopCvrUnlckToUS;
_BUR_LOCAL plcbit bMachineSafetySigToDS;
_BUR_LOCAL plcbit bMachineSafetySigToUS;
_BUR_LOCAL plcbit bCoverPBLED1;
_BUR_LOCAL plcbit bSafetyTopCoverSWCoil1;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit a_bPhysicalDO[40];
_BUR_LOCAL eDOAction eStatOld;
_BUR_LOCAL plcbit bHermesDummyMem;
_GLOBAL unsigned long p_UIDOAct;
_GLOBAL unsigned long p_UIUIMnlMod;
_GLOBAL unsigned long p_UIConvDCCtrl;
_GLOBAL unsigned long p_UIBypassTopCover1;
_GLOBAL unsigned long p_UIMachineSafetySigToDS;
_GLOBAL unsigned long p_UIMachineSafetySigToUS;
_GLOBAL unsigned long p_UISafetyTopCoverSWCoil1;
_GLOBAL unsigned long p_UITopCvrUnlckToUS;
_GLOBAL unsigned long p_UITopCvrUnlckToDS;
_GLOBAL unsigned long p_UICoverPBLED1;
_GLOBAL unsigned long p_UIMnlModBypassTopCover1;
_GLOBAL unsigned long p_UIMnlModMachineSafetySigToDS;
_GLOBAL unsigned long p_UIMnlModMachineSafetySigToUS;
_GLOBAL unsigned long p_UIMnlModSafetyTopCoverSWCoil1;
_GLOBAL unsigned long p_UIMnlModTopCvrUnlckToUS;
_GLOBAL unsigned long p_UIMnlModTopCvrUnlckToDS;
_GLOBAL unsigned long p_UIMnlModCoverPBLED1;
_GLOBAL unsigned long p_TLBuzRed;
_GLOBAL unsigned long p_TLBuzAmber;
_GLOBAL unsigned long p_TLBuzGreen;
_GLOBAL unsigned long p_TLBuzBlue;
_GLOBAL unsigned long p_TLBuzWhite;
_GLOBAL unsigned long p_TLBuzBeep;
_GLOBAL unsigned long p_RstErrSafetyRlyRst;
_GLOBAL unsigned long p_ProdRcpCurrRcp1McMod;
_GLOBAL unsigned long p_NtParamDOSettings;
_GLOBAL unsigned long p_USSMEMAUSB;
_GLOBAL unsigned long p_DSSMEMADBA;
_GLOBAL unsigned long p_DSSMEMADBAStat;
_GLOBAL unsigned long p_USSMEMA2USB;
_GLOBAL unsigned long p_PneuNoSenStopperExtCtrl;
_GLOBAL unsigned long p_PneuNoSenStopperRetCtrl;
_GLOBAL unsigned long p_PneuNoSenClampExtCtrl;
_GLOBAL unsigned long p_PneuNoSenClampRetCtrl;
_GLOBAL unsigned long p_Pneu2SenInShutterExtCtrl;
_GLOBAL unsigned long p_Pneu2SenInShutterRetCtrl;
_GLOBAL unsigned long p_Pneu2SenOutShutterExtCtrl;
_GLOBAL unsigned long p_Pneu2SenOutShutterRetCtrl;
_GLOBAL unsigned long p_Pneu2SenClamp1ExtCtrl;
_GLOBAL unsigned long p_Pneu2SenClamp1RetCtrl;
_GLOBAL unsigned long p_Pneu2SenClamp2ExtCtrl;
_GLOBAL unsigned long p_Pneu2SenClamp2RetCtrl;
_GLOBAL unsigned long p_Pneu2SenClamp3ExtCtrl;
_GLOBAL unsigned long p_Pneu2SenClamp3RetCtrl;
_GLOBAL unsigned long p_ConvStatus;
_GLOBAL unsigned long p_ConvMtrSigOnOrLToR;
_GLOBAL unsigned long p_ConvMtrDirOrRToL;
_GLOBAL unsigned long p_DI;
_GLOBAL unsigned long c_udiDOutputMax;
_GLOBAL unsigned long p_HermesCmdInitialCompl;
_GLOBAL unsigned long p_HermesUSCmdFeaturePause;
_GLOBAL unsigned long p_HermesUSCmdPause;
_GLOBAL unsigned long p_HermesDSCmdFeaturePause;
_GLOBAL unsigned long p_HermesDSCmdPause;
_GLOBAL unsigned long p_OpsInvertStepInitAwayStpr;
_GLOBAL unsigned long p_OpsInvertStepInitTwdStpr;
_GLOBAL unsigned long p_OpsInvertInvertCurrPos;
_GLOBAL unsigned long p_MotorBrkMtrSigOnOrCW;
_GLOBAL unsigned long p_MotorBrkMtrDirOrCCW;
_GLOBAL unsigned long p_MotorBrkMtrBrkRls;
_LOCAL plcbit Edge0001000000;
_LOCAL plcbit Edge0000800000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_InitialCompl(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Background(void);
