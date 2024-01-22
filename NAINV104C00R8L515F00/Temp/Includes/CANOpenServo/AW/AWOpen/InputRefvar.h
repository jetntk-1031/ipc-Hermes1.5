/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_164_
#define _BUR_1700031253_164_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bOutletShutterDis;
_BUR_LOCAL plcbit *p_bOutletShutterPrep;
_BUR_LOCAL plcbit *p_bInletShutterDis;
_BUR_LOCAL plcbit *p_bInletShutterPrep;
_BUR_LOCAL plcbit *p_bOutletShutterCloseRS;
_BUR_LOCAL plcbit *p_bInletShutterCloseRS;
_BUR_LOCAL enum eServoMotorType *p_eNtParamMotorType;
_BUR_LOCAL plcbit *p_bOpsAWStepMove;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL struct tyMotionCANParamInConvert *p_tyParamInConvert;
_BUR_LOCAL struct tyMotionCANParamInHm *p_tyParamInHm;
_BUR_LOCAL signed long *p_diPitchInUM;
_BUR_LOCAL signed long *p_diMoveBacklashDistInUM;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcstring (*p_sDevice)[4];
_BUR_LOCAL unsigned char *p_usiNode;
_BUR_LOCAL plcbit *p_bNoIndexPulse;
_BUR_LOCAL plcbit *p_bDirBl;
_BUR_LOCAL plcbit *p_bDir;
_BUR_LOCAL plcbit *p_bSafetyInterruptSen;
_BUR_LOCAL plcbit *p_bCloseInterruptSensor;
_BUR_LOCAL plcbit *p_bOpenInterruptSensor;
_BUR_LOCAL plcbit *p_bInterruptSensor;
_BUR_LOCAL plcbit *p_bClamp3Sensor;
_BUR_LOCAL plcbit *p_bClamp2Sensor;
_BUR_LOCAL plcbit *p_bMiddleSensor;
_BUR_LOCAL plcbit *p_bClearSensor;
_BUR_LOCAL plcbit *p_bOutletSensor;
_BUR_LOCAL plcbit *p_bInletSensor;
_BUR_LOCAL signed long *p_diWidthOffsetInUM;
_BUR_LOCAL signed long *p_diMaxWidthInUM;
_BUR_LOCAL signed long *p_diMinWidthInUM;
_BUR_LOCAL signed long *p_diMaxAbsPosInUM;
_BUR_LOCAL signed long *p_diMinAbsPosInUM;
_BUR_LOCAL signed long *p_diMoveDec;
_BUR_LOCAL signed long *p_diMoveAcc;
_BUR_LOCAL signed long *p_diMoveVelInUMPS;
_BUR_LOCAL signed long *p_diMoveDistInUM;
_BUR_LOCAL signed long *p_diMovePosInUM;
_BUR_LOCAL signed long *p_diJogVelInUMPS;
_BUR_LOCAL signed long *p_diGoWidth;
_BUR_LOCAL struct tyMotionCANTuning *p_tyTuning;
_BUR_LOCAL signed long *p_diWidthAtHmPos;
_BUR_LOCAL plcbit *p_bManual;
_BUR_LOCAL plcbit *p_bOps;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eAWAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/CANOpenServo/AW/AWOpen/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_164_ */

