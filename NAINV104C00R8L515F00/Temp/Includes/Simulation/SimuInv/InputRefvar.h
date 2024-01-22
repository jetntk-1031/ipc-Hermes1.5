/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_221_
#define _BUR_1700031253_221_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bOutletShutterCloseRs;
_BUR_LOCAL plcbit *p_bOutletShutterOpenRs;
_BUR_LOCAL plcbit *p_bInletShutterCloseRs;
_BUR_LOCAL plcbit *p_bInletShutterOpenRs;
_BUR_LOCAL plcbit *p_bStopperRetracted;
_BUR_LOCAL plcbit *p_bStopperExtended;
_BUR_LOCAL plcbit *p_bInverterRemoteSen;
_BUR_LOCAL plcbit *p_bInverterHomeSen;
_BUR_LOCAL plcbit *p_bConvRightSen;
_BUR_LOCAL plcbit *p_bConvLeftSen;
_BUR_LOCAL enum eFBStatus *p_eOutletShutterStatus;
_BUR_LOCAL enum ePneuAction *p_eOutletShutterStat;
_BUR_LOCAL enum eFBStatus *p_eInletShutterStatus;
_BUR_LOCAL enum ePneuAction *p_eInletShutterStat;
_BUR_LOCAL enum eFBStatus *p_eStopperStatus;
_BUR_LOCAL enum ePneuAction *p_eStopperStat;
_BUR_LOCAL enum eFBStatus *p_eConvStatus;
_BUR_LOCAL enum eConvAction *p_eConvStat;
_BUR_LOCAL enum eFBStatus *p_eInvertStatus;
_BUR_LOCAL enum eMotorBrkAction *p_eInvertStat;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcbit *p_bOutletShutterPrep;
_BUR_LOCAL plcbit *p_bInletShutterPrep;
_BUR_LOCAL plcbit *p_bStep;
_BUR_LOCAL plcbit *p_bStop;
_BUR_LOCAL plcbit *p_bRun;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL unsigned long *p_udiRstErr;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Simulation/SimuInv/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_221_ */

