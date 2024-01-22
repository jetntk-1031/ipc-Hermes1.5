/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1701679520_1_
#define _BUR_1701679520_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct tyHermesConfiguration *p_tyHermesConfigurationWr;
_BUR_LOCAL plcbit *p_bSvyHermesWriteConfig;
_BUR_LOCAL plcbit *p_bRmtHermesWriteConfig;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL struct tyMcParam *p_tyMcParamWr;
_BUR_LOCAL plcstring (*p_sFileName)[81];
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eMcParamAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/McParam/McParam/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1701679520_1_ */

