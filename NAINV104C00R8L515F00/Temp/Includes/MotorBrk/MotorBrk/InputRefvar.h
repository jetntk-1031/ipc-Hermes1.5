/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_215_
#define _BUR_1700031253_215_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL float *p_rMcParamStepper0deg;
_BUR_LOCAL float *p_rMcParamStepper90deg;
_BUR_LOCAL float *p_rMcParamStepperNeg90deg;
_BUR_LOCAL float *p_rMcParamStepper180deg;
_BUR_LOCAL plcbit *p_bInterruptSensor;
_BUR_LOCAL plcbit *p_bSensor3;
_BUR_LOCAL plcbit *p_bSensor2;
_BUR_LOCAL plcbit *p_bSensor1;
_BUR_LOCAL plcbit *p_bLiftHomeSen;
_BUR_LOCAL plcbit *p_bLiftRemoteSen;
_BUR_LOCAL plcbit *p_bCWSen;
_BUR_LOCAL plcbit *p_bMidSen;
_BUR_LOCAL plcbit *p_bCCWSen;
_BUR_LOCAL plcbit *p_bOutletShutterDis;
_BUR_LOCAL plcbit *p_bOutletShutterPrep;
_BUR_LOCAL plcbit *p_bInletShutterDis;
_BUR_LOCAL plcbit *p_bInletShutterPrep;
_BUR_LOCAL plcbit *p_bOutletShutterCloseRS;
_BUR_LOCAL plcbit *p_bInletShutterCloseRS;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL signed long *p_diTimeOut;
_BUR_LOCAL signed long *p_diBrkOffDlyTm;
_BUR_LOCAL signed long *p_diBrkOnDlyTm;
_BUR_LOCAL signed long *p_diMtrOffDlyTm;
_BUR_LOCAL signed long *p_diMtrOnDlyTm;
_BUR_LOCAL signed long *p_diMtrBrkOnDlyTm;
_BUR_LOCAL signed long *p_diMtrDirOffDlyTm;
_BUR_LOCAL signed long *p_diMtrSigOnDlyTm;
_BUR_LOCAL plcbit *p_bOnDirMod;
_BUR_LOCAL plcbit *p_bManual;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eMotorBrkAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_215_ */

