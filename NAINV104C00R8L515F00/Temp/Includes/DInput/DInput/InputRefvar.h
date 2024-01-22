/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_166_
#define _BUR_1700031253_166_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct tyHermesCommandPause *p_tyHermesDSCmdPause;
_BUR_LOCAL plcbit *p_bHermesDSCmdFeaturePause;
_BUR_LOCAL struct tyHermesCommandPause *p_tyHermesUSCmdPause;
_BUR_LOCAL plcbit *p_bHermesUSCmdFeaturePause;
_BUR_LOCAL plcbit *p_bHermesCmdInitialCompl;
_BUR_LOCAL plcbit *p_bLinkStartupRun;
_BUR_LOCAL plcbit *p_bRstErrSafetyRlyRst;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL signed long *p_diConvRgtSenOffTm;
_BUR_LOCAL signed long *p_diConvRgtSenOnTm;
_BUR_LOCAL signed long *p_diConvLftSenOffTm;
_BUR_LOCAL signed long *p_diConvLftSenOnTm;
_BUR_LOCAL struct tyDigitalInputSettings *p_tyDISettings;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL unsigned long *p_udiMax;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/DInput/DInput/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_166_ */

