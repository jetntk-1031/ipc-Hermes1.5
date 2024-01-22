/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_98_
#define _BUR_1700031253_98_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL struct tyLibrariesVer (*pa_tyInfoIn)[101];
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eLibVerAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LibVer/LibVer/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtVersion/Constant.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_98_ */

