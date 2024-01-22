/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700528767_4_
#define _BUR_1700528767_4_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bStartupUISettingsLoadDone;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL unsigned long *p_udiFileKeepDay;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmDat (*pa_tyAlmData)[200];
#else
/* Variable pa_tyAlmData not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcdt *p_dtCurrDT;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eAlarmAction *p_eAct;
_BUR_LOCAL unsigned long *p_udiHistoryMax;
_BUR_LOCAL unsigned long *p_udiCurrMax;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Alarm/Alarm.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700528767_4_ */

