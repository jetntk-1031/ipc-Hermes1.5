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

_BUR_LOCAL eInvertPos eInvertCurrPos;
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
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
_BUR_LOCAL plcbit bHvBrd;
_BUR_LOCAL plcbit bGdBrd;
_GLOBAL unsigned long p_OpsInvertAlmData;
_GLOBAL unsigned long p_OpsInvertAlmData1;
_GLOBAL unsigned long p_OpsInvertStepTxt;
_GLOBAL unsigned long p_OpsInvertPaused;
_GLOBAL unsigned long p_OpsInvertHvBrd;
_GLOBAL unsigned long p_OpsInvertGdBrd;
_GLOBAL unsigned long p_OpsInvertStepInitConv;
_GLOBAL unsigned long p_OpsInvertStepInitAwayStpr;
_GLOBAL unsigned long p_OpsInvertStepInitTwdStpr;
_GLOBAL unsigned long p_OpsInvertStepInitDone;
_GLOBAL unsigned long p_OpsInvertStepUSStandby;
_GLOBAL unsigned long p_OpsInvertStepUSCommTmr;
_GLOBAL unsigned long p_OpsInvertStepEntToEnd;
_GLOBAL unsigned long p_OpsInvertStepEntToInOff;
_GLOBAL unsigned long p_OpsInvertStepRev;
_GLOBAL unsigned long p_OpsInvertStepPreExit;
_GLOBAL unsigned long p_OpsInvertStepDSStandby;
_GLOBAL unsigned long p_OpsInvertStepDSCommTmr;
_GLOBAL unsigned long p_OpsInvertStepExitBrd;
_GLOBAL unsigned long p_OpsInvertStepInvert;
_GLOBAL unsigned long p_OpsInvertStepAWMove;
_GLOBAL unsigned long p_OpsInvertStepOpsSafeMode;
_GLOBAL unsigned long p_OpsInvertBrdInserted;
_GLOBAL unsigned long p_OpsInvertBrdRemoved;
_GLOBAL unsigned long p_OpsInvertUSSMEMAAct;
_GLOBAL unsigned long p_OpsInvertDSSMEMAAct;
_GLOBAL unsigned long p_OpsInvertConvAct;
_GLOBAL unsigned long p_OpsInvertStopperAct;
_GLOBAL unsigned long p_OpsInvertInvertAct;
_GLOBAL unsigned long p_OpsInvertAWAct;
_GLOBAL unsigned long p_OpsInvertClampAct;
_GLOBAL unsigned long p_OpsInvertInletShutterAct;
_GLOBAL unsigned long p_OpsInvertOutletShutterAct;
_GLOBAL unsigned long p_OpsInvertClamp1Act;
_GLOBAL unsigned long p_OpsInvertClamp2Act;
_GLOBAL unsigned long p_OpsInvertClamp3Act;
_GLOBAL unsigned long p_OpsInvertUSSMEMA2Act;
_GLOBAL unsigned long p_OpsInvertOnceTwicePCBOut;
_GLOBAL unsigned long p_OpsInvertStepInvRtrnUSStandby;
_GLOBAL unsigned long p_OpsInvertStepInvRtrnUSCommTmr;
_GLOBAL unsigned long p_OpsInvertStepInvRtrnEntToEnd;
_GLOBAL unsigned long p_OpsInvertStepInvRtrnEntToInOff;
_GLOBAL unsigned long p_OpsInvertInvertCurrPos;
