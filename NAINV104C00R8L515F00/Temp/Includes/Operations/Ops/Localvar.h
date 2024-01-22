/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_208_
#define _BUR_1700031253_208_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL enum eOperationsAction eStatOld;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bPaused;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bStatusStep;
_BUR_LOCAL plcbit bStatusCycleStop;
_BUR_LOCAL plcbit bStatusStop;
_BUR_LOCAL plcbit bStatusRun;
_BUR_LOCAL enum eOperationsStatus eOpsStatus;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eOperationsAction eStat;
_BUR_LOCAL enum eOperationsAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Operations/Ops/Local.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_208_ */

