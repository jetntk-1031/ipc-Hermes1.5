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

#ifndef __AS__TYPE_eSimuInvRunStep
#define __AS__TYPE_eSimuInvRunStep
typedef enum eSimuInvRunStep
{	SimuInvStepNA = 0,
	SimuInvStepChkCondition = 1,
	SimuInvStepInvertHome = 2,
	SimuInvStepInvertRemote = 3,
	SimuInvStepConvToRightSen = 4,
	SimuInvStepConvToLeftSen = 5,
	SimuInvStepInitShutterCls = 6,
	SimuInvStepInitStopperExt = 7,
} eSimuInvRunStep;
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
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcbit(* p_bRun);
_BUR_LOCAL plcbit(* p_bStop);
_BUR_LOCAL plcbit(* p_bStep);
_BUR_LOCAL plcbit(* p_bInletShutterPrep);
_BUR_LOCAL plcbit(* p_bOutletShutterPrep);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eMotorBrkAction(* p_eInvertStat);
_BUR_LOCAL eFBStatus(* p_eInvertStatus);
_BUR_LOCAL eConvAction(* p_eConvStat);
_BUR_LOCAL eFBStatus(* p_eConvStatus);
_BUR_LOCAL ePneuAction(* p_eStopperStat);
_BUR_LOCAL eFBStatus(* p_eStopperStatus);
_BUR_LOCAL ePneuAction(* p_eInletShutterStat);
_BUR_LOCAL eFBStatus(* p_eInletShutterStatus);
_BUR_LOCAL ePneuAction(* p_eOutletShutterStat);
_BUR_LOCAL eFBStatus(* p_eOutletShutterStatus);
_BUR_LOCAL plcbit(* p_bConvLeftSen);
_BUR_LOCAL plcbit(* p_bConvRightSen);
_BUR_LOCAL plcbit(* p_bInverterHomeSen);
_BUR_LOCAL plcbit(* p_bInverterRemoteSen);
_BUR_LOCAL plcbit(* p_bStopperExtended);
_BUR_LOCAL plcbit(* p_bStopperRetracted);
_BUR_LOCAL plcbit(* p_bInletShutterOpenRs);
_BUR_LOCAL plcbit(* p_bInletShutterCloseRs);
_BUR_LOCAL plcbit(* p_bOutletShutterOpenRs);
_BUR_LOCAL plcbit(* p_bOutletShutterCloseRs);
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcstring sStepTxt[81];
_BUR_LOCAL plcbit bPaused;
_BUR_LOCAL eMotorBrkAction eInverterAct;
_BUR_LOCAL eConvAction eConvAct;
_BUR_LOCAL ePneuAction eInShutterAct;
_BUR_LOCAL ePneuAction eOutShutterAct;
_BUR_LOCAL ePneuAction eStopperAct;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL plcbit bConvLeftSen;
_BUR_LOCAL plcbit bConvRightSen;
_BUR_LOCAL plcbit bInletShutterCloseRS;
_BUR_LOCAL plcbit bOutletShutterCloseRS;
_BUR_LOCAL eMotorBrkAction eInverterStat;
_BUR_LOCAL eFBStatus eInverterStatus;
_BUR_LOCAL eConvAction eConvStat;
_BUR_LOCAL eFBStatus eConvStatus;
_BUR_LOCAL ePneuAction eInletShutterStat;
_BUR_LOCAL eFBStatus eInletShutterStatus;
_BUR_LOCAL ePneuAction eOutletShutterStat;
_BUR_LOCAL eFBStatus eOutletShutterStatus;
_BUR_LOCAL ePneuAction eStopperStat;
_BUR_LOCAL eFBStatus eStopperStatus;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL eSimuInvRunStep eSimuInvStep;
_BUR_LOCAL eSimuInvRunStep eSimuInvGotoStep;
_BUR_LOCAL struct TON fbInvChgDirDlyTm;
_BUR_LOCAL struct TON fbConvChgDirDlyTm;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_NtParamProjInletShutPrep;
_GLOBAL unsigned long p_NtParamProjOutletShutPrep;
_GLOBAL unsigned long p_PneuNoSenStopperStat;
_GLOBAL unsigned long p_PneuNoSenStopperStatus;
_GLOBAL unsigned long p_PneuNoSenStopperExtended;
_GLOBAL unsigned long p_PneuNoSenStopperRetracted;
_GLOBAL unsigned long p_Pneu2SenInShutterStat;
_GLOBAL unsigned long p_Pneu2SenInShutterStatus;
_GLOBAL unsigned long p_Pneu2SenOutShutterStat;
_GLOBAL unsigned long p_Pneu2SenOutShutterStatus;
_GLOBAL unsigned long p_ConvStat;
_GLOBAL unsigned long p_ConvStatus;
_GLOBAL unsigned long p_DIConvLftSen;
_GLOBAL unsigned long p_DIConvRgtSen;
_GLOBAL unsigned long p_DIInvertHomeSen;
_GLOBAL unsigned long p_DIInvertRemoteSen;
_GLOBAL unsigned long p_DIInShutterOpenRS;
_GLOBAL unsigned long p_DIInShutterCloseRS;
_GLOBAL unsigned long p_DIOutShutterOpenRS;
_GLOBAL unsigned long p_DIOutShutterCloseRS;
_GLOBAL unsigned long p_MotorBrkStat;
_GLOBAL unsigned long p_MotorBrkStatus;
_GLOBAL unsigned long p_SimuRun;
_GLOBAL unsigned long p_SimuStop;
_GLOBAL unsigned long p_SimuStep;
_LOCAL plcbit Edge0000200000;
_LOCAL plcbit Edge0000200001;
_LOCAL plcbit Edge0000200002;
_LOCAL plcbit Edge0000200003;
_LOCAL plcbit Edge0000100000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkEn(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Alarm(void);
static void __AS__Action__Act_OpsInitial(void);
static void __AS__Action__Act_OpsRun(void);
static void __AS__Action__Act_OpsRst(void);
