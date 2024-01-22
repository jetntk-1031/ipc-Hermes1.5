/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700528767_6_
#define _BUR_1700528767_6_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlarmCurr (*p_tyLinkAlarmCurrList)[200];
#else
/* Variable p_tyLinkAlarmCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit *p_bLinkConvHvBrd;
_BUR_LOCAL signed long *p_diLinkUpdtProdWidth;
_BUR_LOCAL plcstring (*p_sLinkUpdtProdRcpNm)[31];
_BUR_LOCAL struct tyProdRcpParam *p_tyLinkUpdtProdRcp;
_BUR_LOCAL plcbit *p_bLinkMcParamLCSLiveDatEn;
_BUR_LOCAL plcbit *p_bLinkMcParamLCSReqRcpEn;
_BUR_LOCAL plcbit *p_bLinkMcParamLCSManageRcpEn;
_BUR_LOCAL plcbit *p_bLinkMcParamLCSLFEn;
_BUR_LOCAL plcbit *p_bLinkNtParamLCSLiveDatPrep;
_BUR_LOCAL plcbit *p_bLinkNtParamLCSReqRcpPrep;
_BUR_LOCAL plcbit *p_bLinkNtParamLCSManageRcpPrep;
_BUR_LOCAL plcbit *p_bLinkNtParamLCSLFPrep;
_BUR_LOCAL plcbit *p_bLinkStartupRun;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Alarm/Alarm.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700528767_6_ */

