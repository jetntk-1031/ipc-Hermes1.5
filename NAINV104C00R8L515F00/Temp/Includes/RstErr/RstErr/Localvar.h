/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_114_
#define _BUR_1700031253_114_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct TON fbSafetyRlyRstTm;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bSafetyRlySig;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bSafetyRlyRst;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eRstErrAction eStat;
_BUR_LOCAL enum eRstErrAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/RstErr/RstErr/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_114_ */

