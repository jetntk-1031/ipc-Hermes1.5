/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_189_
#define _BUR_1700031253_189_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcbit *p_bLFSeqStayActive;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcstring (*p_sFollowerProgTagNm)[16];
_BUR_LOCAL plcstring (*p_sLeaderProgTagNm)[16];

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit (*pa_bLFOnline)[50];
#else
/* Variable pa_bLFOnline not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring (*pa_sLFIPAddr)[50][16];
#else
/* Variable pa_sLFIPAddr not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcdt *p_dtCurrDT;
_BUR_LOCAL plctime *p_tSetTmOffDlyTm;
_BUR_LOCAL plctime *p_tOnlineChkDlyTm;
_BUR_LOCAL signed long *p_diAfterOven2;
_BUR_LOCAL signed long *p_diBeforeOven2;
_BUR_LOCAL signed long *p_diAfterOven;
_BUR_LOCAL plcbit *p_bWidth2Prep;
_BUR_LOCAL signed long *p_diBeforeOven;
_BUR_LOCAL plcstring (*p_sReqMagRcpNm)[16];
_BUR_LOCAL signed long *p_diReqProdWidth;
_BUR_LOCAL plcstring (*p_sReqProdRcpNm)[255];
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eLFAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LF/LFLeader/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/NtLibraries/NtLF/Constants.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_189_ */

