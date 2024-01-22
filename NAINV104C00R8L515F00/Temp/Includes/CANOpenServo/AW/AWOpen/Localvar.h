/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_165_
#define _BUR_1700031253_165_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit bOutletShutterDis;
_BUR_LOCAL plcbit bOutletShutterPrep;
_BUR_LOCAL plcbit bInletShutterDis;
_BUR_LOCAL plcbit bInletShutterPrep;
_BUR_LOCAL plcbit bOutletShutterCloseRS;
_BUR_LOCAL plcbit bInletShutterCloseRS;
_BUR_LOCAL struct fbCANSDOWriteArrayParam fbSDOWrite;
_BUR_LOCAL struct fbMotionCANModuleOK fbModuleOK;
_BUR_LOCAL struct fbMotionCANFullMovAbsBl fbFullMovAbsBl;
_BUR_LOCAL struct fbMotionCANFullMovAbs fbFullMovAbs;
_BUR_LOCAL struct fbMotionCANFullHm fbFullHm;
_BUR_LOCAL struct fbMotionCANPwrOn fbPwrOn;
_BUR_LOCAL struct fbMotionCANPwrOff fbPwrOff;
_BUR_LOCAL struct fbMotionCANHoming fbHoming;
_BUR_LOCAL struct fbMotionCANMovAbs fbMovAbs;
_BUR_LOCAL struct fbMotionCANMovRel fbMovRel;
_BUR_LOCAL struct fbMotionCANJog fbJog;
_BUR_LOCAL struct fbMotionCANRstAxisErr fbRstAxisErr;
_BUR_LOCAL struct fbMotionCANStop fbStop;
_BUR_LOCAL struct tyMotionCANDriverOut tyParamOutDriver;
_BUR_LOCAL struct tyMotionCANDriverIn tyParamInDriver;
_BUR_LOCAL struct tyMotionCANParamInMove tyParamInMove;
_BUR_LOCAL struct TON fbRstNodeTimer;
_BUR_LOCAL struct TON fbServoModuleOk;
_BUR_LOCAL struct TON fbServoModuleNotOk;
_BUR_LOCAL struct TON fbTm;
_BUR_LOCAL unsigned char usiCount;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL unsigned char usiRstStep;
_BUR_LOCAL signed long diActualPosInUMOld;
_BUR_LOCAL plcbit bNotInterruptible;
_BUR_LOCAL plcbit bModuleNotOKLock;
_BUR_LOCAL plcbit bModuleNotOK;
_BUR_LOCAL plcbit bModuleOK;
_BUR_LOCAL plcbit bModuleOKChk;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL enum eServoMotorType eMotorType;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL struct tyMotionCANParamInConvert tyParamInConvert;
_BUR_LOCAL struct tyMotionCANParamInHm tyParamInHm;
_BUR_LOCAL signed long diPitchInUM;
_BUR_LOCAL signed long diMoveBacklashDistInUM;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sDevice[4];
_BUR_LOCAL unsigned char usiNode;
_BUR_LOCAL plcbit bNoIndexPulse;
_BUR_LOCAL plcbit bDirBl;
_BUR_LOCAL plcbit bDir;
_BUR_LOCAL plcbit bCloseInterruptSensor;
_BUR_LOCAL plcbit bOpenInterruptSensor;
_BUR_LOCAL plcbit bInterruptSensor;
_BUR_LOCAL plcbit bClamp3Sensor;
_BUR_LOCAL plcbit bClamp2Sensor;
_BUR_LOCAL plcbit bMiddleSensor;
_BUR_LOCAL plcbit bClearSensor;
_BUR_LOCAL plcbit bOutletSensor;
_BUR_LOCAL plcbit bInletSensor;
_BUR_LOCAL signed long diWidthOffsetInUM;
_BUR_LOCAL signed long diMaxWidthInUM;
_BUR_LOCAL signed long diMinWidthInUM;
_BUR_LOCAL signed long diMaxAbsPosInUM;
_BUR_LOCAL signed long diMinAbsPosInUM;
_BUR_LOCAL signed long diMoveDec;
_BUR_LOCAL signed long diMoveAcc;
_BUR_LOCAL signed long diMoveVelInUMPS;
_BUR_LOCAL signed long diMoveDistInUM;
_BUR_LOCAL signed long diMovePosInUM;
_BUR_LOCAL signed long diJogVelInUMPS;
_BUR_LOCAL signed long diGoWidth;
_BUR_LOCAL struct tyMotionCANTuning tyTuning;
_BUR_LOCAL signed long diWidthAtHmPos;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bOps;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bCloseSen;
_BUR_LOCAL plcbit bOpenSen;
_BUR_LOCAL plcbit bJogging;
_BUR_LOCAL plcbit bJogClose;
_BUR_LOCAL plcbit bJogOpen;
_BUR_LOCAL plcbit bWidthPosDiff;
_BUR_LOCAL plcstring sAxisErrTxt[81];
_BUR_LOCAL struct tyMotionCANParamOut tyParamOut;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[300];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData3;
_BUR_LOCAL struct tyAlmDat tyAlmData2;
_BUR_LOCAL struct tyAlmDat tyAlmData1;
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus3;
_BUR_LOCAL unsigned long udiStatus2;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus3;
_BUR_LOCAL enum eFBStatus eStatus2;
_BUR_LOCAL enum eFBStatus eStatus1;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eFBStatus eMainStatus;
_BUR_LOCAL enum eAWAction eStat;
_BUR_LOCAL enum eAWAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/AW/AWOpen/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtMotion/NtMotion.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_165_ */

