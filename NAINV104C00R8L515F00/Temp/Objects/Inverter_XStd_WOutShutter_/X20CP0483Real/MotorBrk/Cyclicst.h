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

struct fbConvSenToSenBrkTmLmt
{	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	plctime tMtrSigOnDlyTm;
	plctime tMtrDirOffDlyTm;
	plctime tMtrSigOffDlyTm;
	unsigned long udiStatus;
	tyConvMtrSenToSenInternal1 tyInternal;
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
	plcbit bLmtActivated;
};
_BUR_PUBLIC void fbConvSenToSenBrkTmLmt(struct fbConvSenToSenBrkTmLmt* inst);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL plcbit(* p_bLinkOpsSimu);
_BUR_LOCAL eMotorBrkAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL plcbit(* p_bOnDirMod);
_BUR_LOCAL signed long(* p_diMtrSigOnDlyTm);
_BUR_LOCAL signed long(* p_diMtrDirOffDlyTm);
_BUR_LOCAL signed long(* p_diMtrBrkOnDlyTm);
_BUR_LOCAL signed long(* p_diMtrOnDlyTm);
_BUR_LOCAL signed long(* p_diMtrOffDlyTm);
_BUR_LOCAL signed long(* p_diBrkOnDlyTm);
_BUR_LOCAL signed long(* p_diBrkOffDlyTm);
_BUR_LOCAL signed long(* p_diTimeOut);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bInletShutterCloseRS);
_BUR_LOCAL plcbit(* p_bOutletShutterCloseRS);
_BUR_LOCAL plcbit(* p_bInletShutterPrep);
_BUR_LOCAL plcbit(* p_bInletShutterDis);
_BUR_LOCAL plcbit(* p_bOutletShutterPrep);
_BUR_LOCAL plcbit(* p_bOutletShutterDis);
_BUR_LOCAL plcbit(* p_bCCWSen);
_BUR_LOCAL plcbit(* p_bMidSen);
_BUR_LOCAL plcbit(* p_bCWSen);
_BUR_LOCAL plcbit(* p_bInterruptSensor);
_BUR_LOCAL eMotorBrkAction eAct;
_BUR_LOCAL eMotorBrkAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcbit bMtrSigOnOrCW;
_BUR_LOCAL plcbit bMtrDirOrCCW;
_BUR_LOCAL plcbit bMtrBrkRls;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bOnDirMod;
_BUR_LOCAL signed long diMtrSigOnDlyTm;
_BUR_LOCAL signed long diMtrDirOffDlyTm;
_BUR_LOCAL signed long diMtrBrkOnDlyTm;
_BUR_LOCAL signed long diMtrOnDlyTm;
_BUR_LOCAL signed long diMtrOffDlyTm;
_BUR_LOCAL signed long diBrkOnDlyTm;
_BUR_LOCAL signed long diBrkOffDlyTm;
_BUR_LOCAL signed long diTimeOut;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bCCWSen;
_BUR_LOCAL plcbit bMidSen;
_BUR_LOCAL plcbit bCWSen;
_BUR_LOCAL plcbit bInletShutterCloseRS;
_BUR_LOCAL plcbit bOutletShutterCloseRS;
_BUR_LOCAL plcbit bInletShutterPrep;
_BUR_LOCAL plcbit bInletShutterDis;
_BUR_LOCAL plcbit bOutletShutterPrep;
_BUR_LOCAL plcbit bOutletShutterDis;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL eMotorBrkAction eStatOld;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL struct fbConvSenToSenBrkTmLmt fbRotCW;
_BUR_LOCAL struct fbConvSenToSenBrkTmLmt fbRotCCW;
_BUR_LOCAL struct fbConvMtrOff fbStop;
_BUR_LOCAL struct fbConvBrkOn fbMtrBrkRlsOn;
_BUR_LOCAL struct fbConvBrkOff fbMtrBrkRlsOff;
_BUR_LOCAL struct TON fbMtrSigOnDlyTm;
_BUR_LOCAL struct TON fbMtrDirOffDlyTm;
_BUR_LOCAL plcbit bNotInterruptible;
_BUR_LOCAL plcbit bInterruptSensor;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_UIInvertAct;
_GLOBAL unsigned long p_UIMnlMod;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL plcstring g_sMotorBrkProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_McParamInShutterDis;
_GLOBAL unsigned long p_McParamOutShutterDis;
_GLOBAL unsigned long p_NtParamProjInletShutPrep;
_GLOBAL unsigned long p_NtParamProjOutletShutPrep;
_GLOBAL unsigned long p_NtParamMotorOnDlyTm;
_GLOBAL unsigned long p_NtParamMotorOffDlyTm;
_GLOBAL unsigned long p_NtParamBrakeOnDlyTm;
_GLOBAL unsigned long p_NtParamBrakeOffDlyTm;
_GLOBAL unsigned long p_NtParamTimeOut;
_GLOBAL unsigned long p_DIInvertHomeSen;
_GLOBAL unsigned long p_DIInvertRemoteSen;
_GLOBAL unsigned long p_DIInShutterCloseRS;
_GLOBAL unsigned long p_DIOutShutterCloseRS;
_GLOBAL unsigned long p_OpsRun;
_GLOBAL unsigned long p_OpsInvertInvertAct;
_GLOBAL unsigned long p_SimuRun;
_GLOBAL unsigned long p_SimuInvInvAct;
_LOCAL plcbit Edge0001000000;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkEn(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Alarm(void);
