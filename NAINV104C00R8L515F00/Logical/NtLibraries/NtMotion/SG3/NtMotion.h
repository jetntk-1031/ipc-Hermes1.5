/* Automation Studio generated header file */
/* Do not edit ! */
/* NtMotion 5.00.9 */

#ifndef _NTMOTION_
#define _NTMOTION_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtMotion_VERSION
#define _NtMotion_VERSION 5.00.9
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum eServoMotorType
{	DeltaAsdaA2,
	SchneiderLexium28,
	EstunPronet
} eServoMotorType;

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

typedef struct fbMotionCANRstAxisErr
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMotionCANRstAxisErr_typ;

typedef struct tyMotionCANDriverIn
{	signed long diActualPos_6064;
	signed char siModOfOptDisp_6061;
	unsigned short uiErrCode_603F;
	unsigned short uiStatword_6041;
	unsigned long udiDigitalInputs_60FD;
} tyMotionCANDriverIn;

typedef struct fbMotionCANPwrOn
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMotionCANPwrOn_typ;

typedef struct tyMotionCANInternal1
{	unsigned char usiStep;
	unsigned char usiAxisErrCnt;
	unsigned char usiPwrOnCnt;
	struct fbMotionCANRstAxisErr fbMotionCANRstAxisErr;
	struct fbMotionCANPwrOn fbMotionCANPwrOn;
} tyMotionCANInternal1;

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

typedef struct fbMotionCANFullPwrOn
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANDriverIn tyParamInDriver;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMotionCANFullPwrOn_typ;

typedef struct fbMotionCANHoming
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	plctime tDlyTm;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDir;
	plcbit bNoIndexPulse;
} fbMotionCANHoming_typ;

typedef struct tyMotionCANParamInMove
{	signed long diPosInUM;
	signed long diDistInUM;
	signed long diBacklashDistInUM;
	signed long diVelInUMPS;
	signed long diAcc;
	signed long diDec;
} tyMotionCANParamInMove;

typedef struct tyMotionCANParamInConvert
{	signed long diPitchInUM;
	signed long diPulsePerRev;
	signed long diPrimaryGearRatio;
	signed long diSecondaryGearRatio;
} tyMotionCANParamInConvert;

typedef struct fbMotionCANMovRel
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANDriverIn tyParamInDriver;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANParamInMove tyParamInMove;
	struct tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	plctime tDlyTm;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDir;
} fbMotionCANMovRel_typ;

typedef struct fbMotionCANStop
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMotionCANStop_typ;

typedef struct tyMotionCANInternal2
{	unsigned char usiStep;
	unsigned long udiErrStatus;
	struct TON fbTO;
	struct fbMotionCANFullPwrOn fbMotionCANFullPwrOn;
	struct fbMotionCANHoming fbMotionCANHoming;
	struct fbMotionCANMovRel fbMotionCANMovRel;
	struct fbMotionCANStop fbMotionCANStop;
} tyMotionCANInternal2;

typedef struct fbMotionCANFullHm
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal2 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDir;
	plcbit bNoIndexPulse;
} fbMotionCANFullHm_typ;

typedef struct fbMotionCANMovAbs
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANDriverIn tyParamInDriver;
	struct tyMotionCANParamInMove tyParamInMove;
	struct tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	plctime tDlyTm;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDir;
} fbMotionCANMovAbs_typ;

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

typedef struct tyMotionCANInternal4
{	struct fbMotionCANMovAbs fbMotionCANMovAbs;
	struct fbMotionCANMovRel fbMotionCANMovRel;
} tyMotionCANInternal4;

typedef struct tyCANSDOWriteArrayParamIn
{	unsigned short uiIdx;
	unsigned char usiSubIdx;
	unsigned long udiDat;
	unsigned char usiDatLen;
} tyCANSDOWriteArrayParamIn;

typedef struct tyCANSDOWriteArrayInternal
{	unsigned char usiLoopIdx;
	struct CANopenSDOWrite8 fbCANSDOWrite;
} tyCANSDOWriteArrayInternal;

typedef struct fbCANSDOWriteArray
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	unsigned char usiNode;
	struct tyCANSDOWriteArrayParamIn a_tyParamIn[20];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyCANSDOWriteArrayInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbCANSDOWriteArray_typ;

typedef struct tyCANSDOWriteArrayInternal1
{	struct fbCANSDOWriteArray fbCANSDOWriteArray;
} tyCANSDOWriteArrayInternal1;

typedef struct tyCANSDOReadArrayInternal
{	unsigned char usiLoopIdx;
	struct CANopenSDORead8 fbCANSDORead;
} tyCANSDOReadArrayInternal;

typedef struct tyCANSDOReadArrayParamIn
{	unsigned short uiIdx;
	unsigned char usiSubIdx;
} tyCANSDOReadArrayParamIn;

typedef struct tyCANSDOReadArrayParamOut
{	unsigned long udiDat;
	unsigned char usiDatLen;
} tyCANSDOReadArrayParamOut;

typedef struct tyMotionCANParamInHm
{	signed char siMode;
	signed long diStartVelInUMPS;
	signed long diOffsetVelInUMPS;
	signed long diAcc;
} tyMotionCANParamInHm;

typedef struct tyMotionCANParamInJog
{	signed long diVelInUMPS;
} tyMotionCANParamInJog;

typedef struct tyUMPulseConvertInternal
{	float rMicrometer;
	float rPitchInUM;
	float rPrimaryGearRatio;
	float rPulse;
	float rPulsePerRev;
	float rSecondaryGearRatio;
} tyUMPulseConvertInternal;

typedef struct tyUMPS100mRPMConvertInternal
{	float rUMPS;
	float rPitchInUM;
	float rPrimaryGearRatio;
	float r100mRPM;
	float rSecondaryGearRatio;
} tyUMPS100mRPMConvertInternal;

typedef struct tySltPosConvertInternal
{	float rPosInUM;
	float rSlt;
	float rMinSltPosInUM;
	float rSltToSltInUM;
} tySltPosConvertInternal;

typedef struct tyMSAccConvertInternal
{	float rAccDecInMSOut;
	float rAccDecInMSIn;
	float rPitchInMM;
	float rGearRatio;
	float rVelInMMPS;
	float rVelInRPM;
	float rVelIn100mRPM;
	float rAccDecIn100mRPMPS;
	float rPulsePerRev;
} tyMSAccConvertInternal;

typedef struct fbMotionCANFullMovAbsBl
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANDriverIn tyParamInDriver;
	struct tyMotionCANParamInMove tyParamInMove;
	struct tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal3 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDir;
	plcbit bDirBl;
	plcbit bNoIndexPulse;
} fbMotionCANFullMovAbsBl_typ;

typedef struct fbMotionCANFullMovAbs
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANDriverIn tyParamInDriver;
	struct tyMotionCANParamInMove tyParamInMove;
	struct tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal3 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDir;
	plcbit bNoIndexPulse;
} fbMotionCANFullMovAbs_typ;

typedef struct fbMotionCANFullMovRel
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANDriverIn tyParamInDriver;
	struct tyMotionCANParamInMove tyParamInMove;
	struct tyMotionCANParamInConvert tyParamInConvert;
	plctime tTimeOut;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal2 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDir;
} fbMotionCANFullMovRel_typ;

typedef struct fbMotionCANModuleOK
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	unsigned char usiNode;
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bModuleOK;
} fbMotionCANModuleOK_typ;

typedef struct fbMotionCANPwrOff
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANDriverIn tyParamInDriver;
	plctime tTimeOut;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMotionCANInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMotionCANPwrOff_typ;

typedef struct fbMotionCANJog
{
	/* VAR_INPUT (analog) */
	struct tyMotionCANDriverOut* p_tyParamOutDriver;
	struct tyMotionCANParamInConvert tyParamInConvert;
	struct tyMotionCANDriverIn tyParamInDriver;
	struct tyMotionCANParamInJog tyParamInJog;
	struct tyMotionCANParamInMove tyParamInMove;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMotionCANJog_typ;

typedef struct fbCANSDOWriteArrayParam
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	unsigned char usiNode;
	struct tyMotionCANParamOut tyParamOut;
	struct tyMotionCANTuning tyTuning;
	enum eServoMotorType eMotorType;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyCANSDOWriteArrayInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbCANSDOWriteArrayParam_typ;

typedef struct fbCANSDOReadArray
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	unsigned char usiNode;
	struct tyCANSDOReadArrayParamIn a_tyParamIn[20];
	/* VAR_OUTPUT (analog) */
	struct tyCANSDOReadArrayParamOut a_tyParamOut[20];
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyCANSDOReadArrayInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbCANSDOReadArray_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbMotionCANFullMovAbsBl(struct fbMotionCANFullMovAbsBl* inst);
_BUR_PUBLIC void fbMotionCANFullMovAbs(struct fbMotionCANFullMovAbs* inst);
_BUR_PUBLIC void fbMotionCANFullMovRel(struct fbMotionCANFullMovRel* inst);
_BUR_PUBLIC void fbMotionCANFullHm(struct fbMotionCANFullHm* inst);
_BUR_PUBLIC void fbMotionCANFullPwrOn(struct fbMotionCANFullPwrOn* inst);
_BUR_PUBLIC void fbMotionCANModuleOK(struct fbMotionCANModuleOK* inst);
_BUR_PUBLIC void fbMotionCANPwrOn(struct fbMotionCANPwrOn* inst);
_BUR_PUBLIC void fbMotionCANPwrOff(struct fbMotionCANPwrOff* inst);
_BUR_PUBLIC void fbMotionCANHoming(struct fbMotionCANHoming* inst);
_BUR_PUBLIC void fbMotionCANMovAbs(struct fbMotionCANMovAbs* inst);
_BUR_PUBLIC void fbMotionCANMovRel(struct fbMotionCANMovRel* inst);
_BUR_PUBLIC void fbMotionCANJog(struct fbMotionCANJog* inst);
_BUR_PUBLIC void fbMotionCANRstAxisErr(struct fbMotionCANRstAxisErr* inst);
_BUR_PUBLIC void fbMotionCANStop(struct fbMotionCANStop* inst);
_BUR_PUBLIC void fbCANSDOWriteArrayParam(struct fbCANSDOWriteArrayParam* inst);
_BUR_PUBLIC void fbCANSDOReadArray(struct fbCANSDOReadArray* inst);
_BUR_PUBLIC void fbCANSDOWriteArray(struct fbCANSDOWriteArray* inst);
_BUR_PUBLIC plcbit fMotionCANJogStop(struct tyMotionCANDriverOut** p_tyParamOutDriver);
_BUR_PUBLIC plcbit fMotionCANRstCtrlWord(struct tyMotionCANDriverOut** p_tyParamOutDriver);
_BUR_PUBLIC plcbit fMotionCANUpdtDat(struct tyMotionCANParamOut** p_tyParamOut, struct tyMotionCANParamInConvert* tyParamInConvert, struct tyMotionCANDriverOut* tyParamOutDriver, struct tyMotionCANDriverIn* tyParamInDriver, struct tyMotionCANParamInMove* tyParamInMove, struct tyMotionCANParamInHm* tyParamInHm, plcbit bDir, enum eServoMotorType eMotorType);
_BUR_PUBLIC signed long fMicrometerToPulse(signed long diMicrometer, struct tyMotionCANParamInConvert* tyParamInConvert);
_BUR_PUBLIC signed long fPulseToMicrometer(signed long diPulse, struct tyMotionCANParamInConvert* tyParamInConvert);
_BUR_PUBLIC signed long f100mRPMToUMPS(signed long di100mRPM, struct tyMotionCANParamInConvert* tyParamInConvert);
_BUR_PUBLIC signed long fUMPSTo100mRPM(signed long diUMPS, struct tyMotionCANParamInConvert* tyParamInConvert, enum eServoMotorType eMotorType);
_BUR_PUBLIC signed long fLifterSltToPosInUMTopMin(signed long diSlt, signed long diSltToSltInUM, signed long diMinSltPosInUM);
_BUR_PUBLIC signed long fLifterSltToPosInUMBtmMin(signed long diSlt, signed long diSltToSltInUM, signed long diMinSltPosInUM);
_BUR_PUBLIC signed long fLifterPosInUMToSltTopMin(signed long diPosInUM, signed long diSltToSltInUM, signed long diMinSltPosInUM);
_BUR_PUBLIC signed long fLifterPosInUMToSltBtmMin(signed long diPosInUM, signed long diSltToSltInUM, signed long diMinSltPosInUM);
_BUR_PUBLIC signed long fAWWidthToPosInUM(signed long diWidthInUM, signed long diWidthAtHmPosInUM);
_BUR_PUBLIC signed long fAWPosInUMToWidth(signed long diPosInUM, signed long diWidthAtHmPosInUM);
_BUR_PUBLIC signed long fMSToEstunHomeAccDec(signed long diAccDecInMS, signed long diVelInUMPS, struct tyMotionCANParamInConvert* tyParamInConvert);
_BUR_PUBLIC signed long fMSToDeltaAccDec(signed long diAccDecInMS, signed long diVelInUMPS, struct tyMotionCANParamInConvert* tyParamInConvert, enum eServoMotorType eMotorType);
_BUR_PUBLIC signed long fMSTo100mRPMPS(signed long diAccDecInMS, signed long diVelInUMPS, struct tyMotionCANParamInConvert* tyParamInConvert, enum eServoMotorType eMotorType);
_BUR_PUBLIC signed long fPitchCalc(signed long diOffset, signed long diMax, signed long diMin, signed long diPitch);


#ifdef __cplusplus
};
#endif
#endif /* _NTMOTION_ */

