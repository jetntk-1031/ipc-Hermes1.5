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

_BUR_LOCAL eConvAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL tyAlmDat tyAlmData;
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
_BUR_LOCAL signed long diInitTm;
_GLOBAL unsigned long p_ConvStat;
_GLOBAL unsigned long p_ConvStatus;
_GLOBAL unsigned long p_ConvStatTxt;
_GLOBAL unsigned long p_ConvAlmData;
_GLOBAL unsigned long p_ConvHvBrd;
_GLOBAL unsigned long p_ConvRejHvBrd;
_GLOBAL unsigned long p_ConvInspHvBrd;
_GLOBAL unsigned long p_ConvGdBrd;
_GLOBAL unsigned long p_ConvLmtSenActivated;
_GLOBAL unsigned long p_ConvMtrSigOnOrLToR;
_GLOBAL unsigned long p_ConvMtrDirOrRToL;
_GLOBAL unsigned long p_ConvPshrExtCtrl;
_GLOBAL unsigned long p_ConvPshrTwoOutputControl;
_GLOBAL unsigned long p_ConvPshrExtended;
_GLOBAL unsigned long p_ConvPshrRetracted;
_GLOBAL unsigned long p_ConvPullerExtCtrl;
_GLOBAL unsigned long p_ConvPullerRetCtrl;
_GLOBAL unsigned long p_ConvPullerTwoOutputControl;
_GLOBAL unsigned long p_ConvPullerExtended;
_GLOBAL unsigned long p_ConvPullerRetracted;
_GLOBAL unsigned long p_ConvRotRemoteCtrl;
_GLOBAL unsigned long p_ConvRotTwoOutputControl;
_GLOBAL unsigned long p_ConvRotAtRemote;
_GLOBAL unsigned long p_ConvRotAtHome;
_GLOBAL unsigned long p_ConvRejectUpCtrl;
_GLOBAL unsigned long p_ConvRejectDownCtrl;
_GLOBAL unsigned long p_ConvRejectTwoOutputControl;
_GLOBAL unsigned long p_ConvRejectAtUp;
_GLOBAL unsigned long p_ConvRejectAtDown;
