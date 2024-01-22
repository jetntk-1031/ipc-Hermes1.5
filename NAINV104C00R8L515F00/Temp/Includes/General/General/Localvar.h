/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_93_
#define _BUR_1700031253_93_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sIPAddr[16];
_BUR_LOCAL plcbit bIPValid;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL signed short a_iIPPart[4];
#else
/* Variable a_iIPPart not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eGeneralAction eStat;
_BUR_LOCAL enum eGeneralAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/General/General/Local.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_93_ */

