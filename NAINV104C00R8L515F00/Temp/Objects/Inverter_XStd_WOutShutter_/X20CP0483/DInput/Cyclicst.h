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
#ifndef __AS__TYPE_tySenFltrInternal
#define __AS__TYPE_tySenFltrInternal
typedef struct tySenFltrInternal
{	struct TON fbSigFltrTm;
} tySenFltrInternal;
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

_BUR_PUBLIC plcbit DiagCpuIsSimulated(void);
struct fbSenFltr
{	plctime tSigOnFltrTm;
	plctime tSigOffFltrTm;
	tySenFltrInternal tyInternal;
	plcbit bSigIn;
	plcbit bSigOut;
};
_BUR_PUBLIC void fbSenFltr(struct fbSenFltr* inst);
_BUR_LOCAL unsigned long(* p_udiMax);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL struct tyDigitalInputSettings(* p_tyDISettings);
_BUR_LOCAL signed long(* p_diConvLftSenOnTm);
_BUR_LOCAL signed long(* p_diConvLftSenOffTm);
_BUR_LOCAL signed long(* p_diConvRgtSenOnTm);
_BUR_LOCAL signed long(* p_diConvRgtSenOffTm);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bRstErrSafetyRlyRst);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL plcbit(* p_bHermesCmdInitialCompl);
_BUR_LOCAL plcbit(* p_bHermesUSCmdFeaturePause);
_BUR_LOCAL struct tyHermesCommandPause(* p_tyHermesUSCmdPause);
_BUR_LOCAL plcbit(* p_bHermesDSCmdFeaturePause);
_BUR_LOCAL struct tyHermesCommandPause(* p_tyHermesDSCmdPause);
_BUR_LOCAL eFBStatus eStatus1;
_BUR_LOCAL eFBStatus eStatus2;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus2;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL tyAlmDat tyAlmData2;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL tyDigitalInput tyDInput;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL tyDigitalInputSettings tyDISettings;
_BUR_LOCAL signed long diConvLftSenOnTm;
_BUR_LOCAL signed long diConvLftSenOffTm;
_BUR_LOCAL signed long diConvRgtSenOnTm;
_BUR_LOCAL signed long diConvRgtSenOffTm;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit a_bPhysicalDI[40];
_BUR_LOCAL struct fbSenFltr fbConvLftSigFltr;
_BUR_LOCAL struct fbSenFltr fbConvRgtSigFltr;
_BUR_LOCAL struct TON fbSafetyRlyRstTm;
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bSafetySigErrNoBuz;
_BUR_LOCAL plcbit bHermesDummyMem;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL plcstring g_sDInputProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_RstErrSafetyRlyRst;
_GLOBAL unsigned long p_McParamConvLftSenOnTm;
_GLOBAL unsigned long p_McParamConvLftSenOffTm;
_GLOBAL unsigned long p_McParamConvRgtSenOnTm;
_GLOBAL unsigned long p_McParamConvRgtSenOffTm;
_GLOBAL unsigned long p_NtParamDISettings;
_GLOBAL unsigned long p_NtParamDInputProgNm;
_GLOBAL unsigned long c_udiDInputMax;
_GLOBAL unsigned long p_HermesCmdInitialCompl;
_GLOBAL unsigned long p_HermesUSCmdFeaturePause;
_GLOBAL unsigned long p_HermesUSCmdPause;
_GLOBAL unsigned long p_HermesDSCmdFeaturePause;
_GLOBAL unsigned long p_HermesDSCmdPause;
_LOCAL plcbit Edge0000900000;
_LOCAL plcbit Edge0000100000;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_InitialCompl(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Alarm1(void);
static void __AS__Action__Act_Alarm2(void);
