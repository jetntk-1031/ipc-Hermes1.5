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
struct CANopenNMT
{	unsigned long pDevice;
	unsigned char node;
	unsigned short state;
	unsigned short status;
	unsigned short error;
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	plcbit enable;
};
_BUR_PUBLIC void CANopenNMT(struct CANopenNMT* inst);
#ifndef __AS__TYPE_tyMotionCANInternal
#define __AS__TYPE_tyMotionCANInternal
typedef struct tyMotionCANInternal
{	unsigned char usiStep;
	unsigned long udiErrStatus;
	struct TON fbHomeSenTO;
	struct TON fbTO;
	struct TON fbTO1;
	struct TON fbTm;
	struct TON fbTm1;
	struct TON fbTm2;
	signed long diMovPosInUM;
	struct CANopenNMT fbRstNode;
	unsigned char usiCntr;
} tyMotionCANInternal;
#endif

struct fbMotionCANRstAxisErr
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	plctime tDlyTm;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMotionCANRstAxisErr(struct fbMotionCANRstAxisErr* inst);
#ifndef __AS__TYPE_tyMotionCANDriverIn
#define __AS__TYPE_tyMotionCANDriverIn
typedef struct tyMotionCANDriverIn
{	signed long diActualPos_6064;
	signed char siModOfOptDisp_6061;
	unsigned short uiErrCode_603F;
	unsigned short uiStatword_6041;
	unsigned long udiDigitalInputs_60FD;
} tyMotionCANDriverIn;
#endif

#ifndef __AS__TYPE_eServoMotorType
#define __AS__TYPE_eServoMotorType
typedef enum eServoMotorType
{	DeltaAsdaA2 = 0,
	SchneiderLexium28 = 1,
	EstunPronet = 2,
} eServoMotorType;
#endif

struct fbMotionCANPwrOn
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMotionCANPwrOn(struct fbMotionCANPwrOn* inst);
#ifndef __AS__TYPE_tyMotionCANInternal1
#define __AS__TYPE_tyMotionCANInternal1
typedef struct tyMotionCANInternal1
{	unsigned char usiStep;
	unsigned char usiAxisErrCnt;
	unsigned char usiPwrOnCnt;
	struct fbMotionCANRstAxisErr fbMotionCANRstAxisErr;
	struct fbMotionCANPwrOn fbMotionCANPwrOn;
} tyMotionCANInternal1;
#endif

#ifndef __AS__TYPE_tyMotionCANParamOut
#define __AS__TYPE_tyMotionCANParamOut
typedef struct tyMotionCANParamOut
{	plcbit bPwrOn;
	plcbit bIsHomed;
	plcbit bInPos;
	plcbit bStopped;
	plcbit bFwdLmtSen;
	plcbit bRevLmtSen;
	plcbit bAxisErr;
	plcbit bPosDiff;
	signed long diActualPosInUM;
	unsigned long udiAxisErrID;
	signed long diHmSpdForSwitch;
	signed long diHmSpdForZero;
	signed long diProfileAcc;
	signed long diProfileDec;
	signed long diHmAcc;
	unsigned long diSchProfileAcc;
	unsigned long diSchProfileDec;
	signed long diSchHmMode;
} tyMotionCANParamOut;
#endif

struct fbMotionCANFullPwrOn
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANParamOut tyParamOut;
	tyMotionCANDriverIn tyParamInDriver;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal1 tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMotionCANFullPwrOn(struct fbMotionCANFullPwrOn* inst);
struct fbMotionCANHoming
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANParamOut tyParamOut;
	tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	plctime tDlyTm;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
	plcbit bDir;
	plcbit bNoIndexPulse;
};
_BUR_PUBLIC void fbMotionCANHoming(struct fbMotionCANHoming* inst);
#ifndef __AS__TYPE_tyMotionCANParamInMove
#define __AS__TYPE_tyMotionCANParamInMove
typedef struct tyMotionCANParamInMove
{	signed long diPosInUM;
	signed long diDistInUM;
	signed long diBacklashDistInUM;
	signed long diVelInUMPS;
	signed long diAcc;
	signed long diDec;
} tyMotionCANParamInMove;
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

struct fbMotionCANMovRel
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANDriverIn tyParamInDriver;
	tyMotionCANParamOut tyParamOut;
	tyMotionCANParamInMove tyParamInMove;
	tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	plctime tDlyTm;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
	plcbit bDir;
};
_BUR_PUBLIC void fbMotionCANMovRel(struct fbMotionCANMovRel* inst);
struct fbMotionCANStop
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	plctime tDlyTm;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMotionCANStop(struct fbMotionCANStop* inst);
#ifndef __AS__TYPE_tyMotionCANInternal2
#define __AS__TYPE_tyMotionCANInternal2
typedef struct tyMotionCANInternal2
{	unsigned char usiStep;
	unsigned long udiErrStatus;
	struct TON fbTO;
	struct fbMotionCANFullPwrOn fbMotionCANFullPwrOn;
	struct fbMotionCANHoming fbMotionCANHoming;
	struct fbMotionCANMovRel fbMotionCANMovRel;
	struct fbMotionCANStop fbMotionCANStop;
} tyMotionCANInternal2;
#endif

struct fbMotionCANFullHm
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANParamOut tyParamOut;
	tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal2 tyInternal;
	plcbit bEn;
	plcbit bDir;
	plcbit bNoIndexPulse;
};
_BUR_PUBLIC void fbMotionCANFullHm(struct fbMotionCANFullHm* inst);
struct fbMotionCANMovAbs
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANDriverIn tyParamInDriver;
	tyMotionCANParamInMove tyParamInMove;
	tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	plctime tDlyTm;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
	plcbit bDir;
};
_BUR_PUBLIC void fbMotionCANMovAbs(struct fbMotionCANMovAbs* inst);
#ifndef __AS__TYPE_tyMotionCANInternal3
#define __AS__TYPE_tyMotionCANInternal3
typedef struct tyMotionCANInternal3
{	plcbit bLimitMoveAllowed;
	unsigned char usiStep;
	unsigned long udiErrStatus;
	signed long diMovePosInUM;
	struct fbMotionCANFullHm fbMotionCANFullHm;
	struct fbMotionCANMovAbs fbMotionCANMovAbs;
	struct fbMotionCANMovAbs fbMotionCANMovAbsBl;
	struct fbMotionCANStop fbMotionCANStop;
} tyMotionCANInternal3;
#endif

struct CANopenSDOWrite8
{	unsigned long pDevice;
	unsigned char node;
	unsigned short index;
	unsigned char subindex;
	unsigned char data0;
	unsigned char data1;
	unsigned char data2;
	unsigned char data3;
	unsigned char data4;
	unsigned char data5;
	unsigned char data6;
	unsigned char data7;
	unsigned char datalen;
	unsigned short status;
	unsigned short error;
	unsigned long errorinfo;
	unsigned char sdo_channel;
	signed char sdo_mode;
	signed char sdo_confirmed;
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	unsigned char databuffer[8];
	plcbit enable;
};
_BUR_PUBLIC void CANopenSDOWrite8(struct CANopenSDOWrite8* inst);
#ifndef __AS__TYPE_tyCANSDOWriteArrayInternal
#define __AS__TYPE_tyCANSDOWriteArrayInternal
typedef struct tyCANSDOWriteArrayInternal
{	unsigned char usiLoopIdx;
	struct CANopenSDOWrite8 fbCANSDOWrite;
} tyCANSDOWriteArrayInternal;
#endif

#ifndef __AS__TYPE_tyCANSDOWriteArrayParamIn
#define __AS__TYPE_tyCANSDOWriteArrayParamIn
typedef struct tyCANSDOWriteArrayParamIn
{	unsigned short uiIdx;
	unsigned char usiSubIdx;
	unsigned long udiDat;
	unsigned char usiDatLen;
} tyCANSDOWriteArrayParamIn;
#endif

struct fbCANSDOWriteArray
{	plcstring sDevice[81];
	unsigned char usiNode;
	struct tyCANSDOWriteArrayParamIn a_tyParamIn[20];
	unsigned long udiStatus;
	tyCANSDOWriteArrayInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbCANSDOWriteArray(struct fbCANSDOWriteArray* inst);
#ifndef __AS__TYPE_tyCANSDOWriteArrayInternal1
#define __AS__TYPE_tyCANSDOWriteArrayInternal1
typedef struct tyCANSDOWriteArrayInternal1
{	struct fbCANSDOWriteArray fbCANSDOWriteArray;
} tyCANSDOWriteArrayInternal1;
#endif

#ifndef __AS__TYPE_tyMotionCANDriverOut
#define __AS__TYPE_tyMotionCANDriverOut
typedef struct tyMotionCANDriverOut
{	signed long diJogVel_60FF;
	signed long diTargetPos_607A;
	signed char siHmMethod_6098;
	signed char siModOfOpt_6060;
	unsigned long udiMoveSpd_6081;
	unsigned short uiCtrlword_6040;
	unsigned long udiSchProfileAcc_6083;
	unsigned long udiSchProfileDec_6084;
	unsigned short siSchHmMethod_6098;
} tyMotionCANDriverOut;
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

#ifndef __AS__TYPE_tyMotionCANParamInJog
#define __AS__TYPE_tyMotionCANParamInJog
typedef struct tyMotionCANParamInJog
{	signed long diVelInUMPS;
} tyMotionCANParamInJog;
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

struct fbMotionCANFullMovAbsBl
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANParamOut tyParamOut;
	tyMotionCANDriverIn tyParamInDriver;
	tyMotionCANParamInMove tyParamInMove;
	tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal3 tyInternal;
	plcbit bEn;
	plcbit bDir;
	plcbit bDirBl;
	plcbit bNoIndexPulse;
};
_BUR_PUBLIC void fbMotionCANFullMovAbsBl(struct fbMotionCANFullMovAbsBl* inst);
struct fbMotionCANFullMovAbs
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANParamOut tyParamOut;
	tyMotionCANDriverIn tyParamInDriver;
	tyMotionCANParamInMove tyParamInMove;
	tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal3 tyInternal;
	plcbit bEn;
	plcbit bDir;
	plcbit bNoIndexPulse;
};
_BUR_PUBLIC void fbMotionCANFullMovAbs(struct fbMotionCANFullMovAbs* inst);
struct fbMotionCANModuleOK
{	plcstring sDevice[81];
	unsigned char usiNode;
	plctime tDlyTm;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
	plcbit bModuleOK;
};
_BUR_PUBLIC void fbMotionCANModuleOK(struct fbMotionCANModuleOK* inst);
struct fbMotionCANPwrOff
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyMotionCANInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMotionCANPwrOff(struct fbMotionCANPwrOff* inst);
struct fbMotionCANJog
{	struct tyMotionCANDriverOut(* p_tyParamOutDriver);
	tyMotionCANParamInConvert tyParamInConvert;
	tyMotionCANDriverIn tyParamInDriver;
	tyMotionCANParamInJog tyParamInJog;
	tyMotionCANParamInMove tyParamInMove;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	plcbit bEn;
};
_BUR_PUBLIC void fbMotionCANJog(struct fbMotionCANJog* inst);
_BUR_PUBLIC plcbit fMotionCANJogStop(struct tyMotionCANDriverOut(* p_tyParamOutDriver));
_BUR_PUBLIC plcbit fMotionCANRstCtrlWord(struct tyMotionCANDriverOut(* p_tyParamOutDriver));
_BUR_PUBLIC plcbit fMotionCANUpdtDat(struct tyMotionCANParamOut(* p_tyParamOut), struct tyMotionCANParamInConvert(* tyParamInConvert), struct tyMotionCANDriverOut(* tyParamOutDriver), struct tyMotionCANDriverIn(* tyParamInDriver), struct tyMotionCANParamInMove(* tyParamInMove), struct tyMotionCANParamInHm(* tyParamInHm), plcbit bDir, eServoMotorType eMotorType);
_BUR_PUBLIC signed long fAWWidthToPosInUM(signed long diWidthInUM, signed long diWidthAtHmPosInUM);
_BUR_PUBLIC signed long fPitchCalc(signed long diOffset, signed long diMax, signed long diMin, signed long diPitch);
struct fbCANSDOWriteArrayParam
{	plcstring sDevice[81];
	unsigned char usiNode;
	tyMotionCANParamOut tyParamOut;
	tyMotionCANTuning tyTuning;
	eServoMotorType eMotorType;
	unsigned long udiStatus;
	tyCANSDOWriteArrayInternal1 tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbCANSDOWriteArrayParam(struct fbCANSDOWriteArrayParam* inst);
_BUR_LOCAL plcbit(* p_bLinkOpsRun);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eAWAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcbit(* p_bOps);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL signed long(* p_diWidthAtHmPos);
_BUR_LOCAL struct tyMotionCANTuning(* p_tyTuning);
_BUR_LOCAL signed long(* p_diGoWidth);
_BUR_LOCAL signed long(* p_diJogVelInUMPS);
_BUR_LOCAL signed long(* p_diMovePosInUM);
_BUR_LOCAL signed long(* p_diMoveDistInUM);
_BUR_LOCAL signed long(* p_diMoveVelInUMPS);
_BUR_LOCAL signed long(* p_diMoveAcc);
_BUR_LOCAL signed long(* p_diMoveDec);
_BUR_LOCAL signed long(* p_diMinAbsPosInUM);
_BUR_LOCAL signed long(* p_diMaxAbsPosInUM);
_BUR_LOCAL signed long(* p_diMinWidthInUM);
_BUR_LOCAL signed long(* p_diMaxWidthInUM);
_BUR_LOCAL signed long(* p_diWidthOffsetInUM);
_BUR_LOCAL plcbit(* p_bInletSensor);
_BUR_LOCAL plcbit(* p_bOutletSensor);
_BUR_LOCAL plcbit(* p_bClearSensor);
_BUR_LOCAL plcbit(* p_bMiddleSensor);
_BUR_LOCAL plcbit(* p_bClamp2Sensor);
_BUR_LOCAL plcbit(* p_bClamp3Sensor);
_BUR_LOCAL plcbit(* p_bInterruptSensor);
_BUR_LOCAL plcbit(* p_bOpenInterruptSensor);
_BUR_LOCAL plcbit(* p_bCloseInterruptSensor);
_BUR_LOCAL plcbit(* p_bDir);
_BUR_LOCAL plcbit(* p_bDirBl);
_BUR_LOCAL plcbit(* p_bNoIndexPulse);
_BUR_LOCAL unsigned char(* p_usiNode);
_BUR_LOCAL plcstring(* p_sDevice)[4];
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL signed long(* p_diMoveBacklashDistInUM);
_BUR_LOCAL signed long(* p_diPitchInUM);
_BUR_LOCAL struct tyMotionCANParamInHm(* p_tyParamInHm);
_BUR_LOCAL struct tyMotionCANParamInConvert(* p_tyParamInConvert);
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eServoMotorType(* p_eNtParamMotorType);
_BUR_LOCAL plcbit(* p_bInletShutterCloseRS);
_BUR_LOCAL plcbit(* p_bOutletShutterCloseRS);
_BUR_LOCAL plcbit(* p_bInletShutterPrep);
_BUR_LOCAL plcbit(* p_bInletShutterDis);
_BUR_LOCAL plcbit(* p_bOutletShutterPrep);
_BUR_LOCAL plcbit(* p_bOutletShutterDis);
_BUR_LOCAL eAWAction eAct;
_BUR_LOCAL eAWAction eStat;
_BUR_LOCAL eFBStatus eMainStatus;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL eFBStatus eStatus1;
_BUR_LOCAL eFBStatus eStatus2;
_BUR_LOCAL eFBStatus eStatus3;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus2;
_BUR_LOCAL unsigned long udiStatus3;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL tyAlmDat tyAlmData1;
_BUR_LOCAL tyAlmDat tyAlmData2;
_BUR_LOCAL tyAlmDat tyAlmData3;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[300];
_BUR_LOCAL tyMotionCANParamOut tyParamOut;
_BUR_LOCAL plcstring sAxisErrTxt[81];
_BUR_LOCAL plcbit bWidthPosDiff;
_BUR_LOCAL plcbit bJogOpen;
_BUR_LOCAL plcbit bJogClose;
_BUR_LOCAL plcbit bJogging;
_BUR_LOCAL plcbit bOpenSen;
_BUR_LOCAL plcbit bCloseSen;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bOps;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL signed long diWidthAtHmPos;
_BUR_LOCAL tyMotionCANTuning tyTuning;
_BUR_LOCAL signed long diGoWidth;
_BUR_LOCAL signed long diJogVelInUMPS;
_BUR_LOCAL signed long diMovePosInUM;
_BUR_LOCAL signed long diMoveDistInUM;
_BUR_LOCAL signed long diMoveVelInUMPS;
_BUR_LOCAL signed long diMoveAcc;
_BUR_LOCAL signed long diMoveDec;
_BUR_LOCAL signed long diMinAbsPosInUM;
_BUR_LOCAL signed long diMaxAbsPosInUM;
_BUR_LOCAL signed long diMinWidthInUM;
_BUR_LOCAL signed long diMaxWidthInUM;
_BUR_LOCAL signed long diWidthOffsetInUM;
_BUR_LOCAL plcbit bInletSensor;
_BUR_LOCAL plcbit bOutletSensor;
_BUR_LOCAL plcbit bClearSensor;
_BUR_LOCAL plcbit bMiddleSensor;
_BUR_LOCAL plcbit bClamp2Sensor;
_BUR_LOCAL plcbit bClamp3Sensor;
_BUR_LOCAL plcbit bInterruptSensor;
_BUR_LOCAL plcbit bOpenInterruptSensor;
_BUR_LOCAL plcbit bCloseInterruptSensor;
_BUR_LOCAL plcbit bDir;
_BUR_LOCAL plcbit bDirBl;
_BUR_LOCAL plcbit bNoIndexPulse;
_BUR_LOCAL unsigned char usiNode;
_BUR_LOCAL plcstring sDevice[4];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL signed long diMoveBacklashDistInUM;
_BUR_LOCAL signed long diPitchInUM;
_BUR_LOCAL tyMotionCANParamInHm tyParamInHm;
_BUR_LOCAL tyMotionCANParamInConvert tyParamInConvert;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL eServoMotorType eMotorType;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bModuleOKChk;
_BUR_LOCAL plcbit bModuleOK;
_BUR_LOCAL plcbit bModuleNotOK;
_BUR_LOCAL plcbit bModuleNotOKLock;
_BUR_LOCAL plcbit bNotInterruptible;
_BUR_LOCAL signed long diActualPosInUMOld;
_BUR_LOCAL unsigned char usiRstStep;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL unsigned char usiCount;
_BUR_LOCAL struct TON fbTm;
_BUR_LOCAL struct TON fbServoModuleNotOk;
_BUR_LOCAL struct TON fbServoModuleOk;
_BUR_LOCAL struct TON fbRstNodeTimer;
_BUR_LOCAL tyMotionCANParamInMove tyParamInMove;
_BUR_LOCAL tyMotionCANDriverIn tyParamInDriver;
_BUR_LOCAL tyMotionCANDriverOut tyParamOutDriver;
_BUR_LOCAL struct fbMotionCANStop fbStop;
_BUR_LOCAL struct fbMotionCANRstAxisErr fbRstAxisErr;
_BUR_LOCAL struct fbMotionCANJog fbJog;
_BUR_LOCAL struct fbMotionCANMovRel fbMovRel;
_BUR_LOCAL struct fbMotionCANMovAbs fbMovAbs;
_BUR_LOCAL struct fbMotionCANHoming fbHoming;
_BUR_LOCAL struct fbMotionCANPwrOff fbPwrOff;
_BUR_LOCAL struct fbMotionCANPwrOn fbPwrOn;
_BUR_LOCAL struct fbMotionCANFullHm fbFullHm;
_BUR_LOCAL struct fbMotionCANFullMovAbs fbFullMovAbs;
_BUR_LOCAL struct fbMotionCANFullMovAbsBl fbFullMovAbsBl;
_BUR_LOCAL struct fbMotionCANModuleOK fbModuleOK;
_BUR_LOCAL struct fbCANSDOWriteArrayParam fbSDOWrite;
_BUR_LOCAL plcbit bInletShutterCloseRS;
_BUR_LOCAL plcbit bOutletShutterCloseRS;
_BUR_LOCAL plcbit bInletShutterPrep;
_BUR_LOCAL plcbit bInletShutterDis;
_BUR_LOCAL plcbit bOutletShutterPrep;
_BUR_LOCAL plcbit bOutletShutterDis;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_UIAWOpenAct;
_GLOBAL unsigned long p_UIMnlMod;
_GLOBAL unsigned long p_UIMnlAWGoWidth;
_GLOBAL unsigned long p_UIMnlAWNomSpd;
_GLOBAL unsigned long p_UIMnlAWTargetPos;
_GLOBAL unsigned long p_UIMnlAWStepSize;
_GLOBAL unsigned long p_UIMnlAWJogSpd;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupAWAct;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL plcstring g_sAWOpenProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Width;
_GLOBAL unsigned long p_McParamWidthAtHmPos;
_GLOBAL unsigned long p_McParamWidthOffset;
_GLOBAL unsigned long p_McParamAWDis;
_GLOBAL unsigned long p_McParamInShutterDis;
_GLOBAL unsigned long p_McParamOutShutterDis;
_GLOBAL unsigned long p_NtParamAWPrep;
_GLOBAL unsigned long p_NtParamProjInletShutPrep;
_GLOBAL unsigned long p_NtParamProjOutletShutPrep;
_GLOBAL unsigned long p_NtParamAWProgNm;
_GLOBAL unsigned long p_NtParamAWDevice;
_GLOBAL unsigned long p_NtParamAWNode;
_GLOBAL unsigned long p_NtParamAWDir;
_GLOBAL unsigned long p_NtParamAWDirBl;
_GLOBAL unsigned long p_NtParamAWPitchInUM;
_GLOBAL unsigned long p_NtParamAWMovBlDistInUM;
_GLOBAL unsigned long p_NtParamAWParamInHm;
_GLOBAL unsigned long p_NtParamAWParamInConvert;
_GLOBAL unsigned long p_NtParamAWAcc;
_GLOBAL unsigned long p_NtParamAWDec;
_GLOBAL unsigned long p_NtParamAWAutoSpd;
_GLOBAL unsigned long p_NtParamAWTuning;
_GLOBAL unsigned long p_NtParamAWMotorType;
_GLOBAL unsigned long p_NtParamProdRcpMinWidth;
_GLOBAL unsigned long p_NtParamProdRcpMaxWidth;
_GLOBAL unsigned long p_DIConvLftSen;
_GLOBAL unsigned long p_DIConvRgtSen;
_GLOBAL unsigned long p_DIInShutterCloseRS;
_GLOBAL unsigned long p_DIOutShutterCloseRS;
_GLOBAL unsigned long p_DIClamp2Sen;
_GLOBAL unsigned long p_DIClamp3Sen;
_GLOBAL unsigned long p_OpsStatusRun;
_GLOBAL unsigned long p_OpsRun;
_GLOBAL unsigned long p_OpsInvertAWAct;
_LOCAL plcbit Edge0001700000;
_LOCAL plcbit Edge0001200000;
_LOCAL plcbit Edge0001200001;
_LOCAL plcbit Edge0001200002;
_LOCAL plcbit Edge0000100000;
_LOCAL plcbit Edge0001400000;
_LOCAL plcbit Edge0001400001;
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
static void __AS__Action__Act_Main_Disable(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_CombineErr(void);
static void __AS__Action__Act_Alarm(void);
static void __AS__Action__Act_Alarm1(void);
static void __AS__Action__Act_Alarm2(void);
static void __AS__Action__Act_Alarm3(void);
