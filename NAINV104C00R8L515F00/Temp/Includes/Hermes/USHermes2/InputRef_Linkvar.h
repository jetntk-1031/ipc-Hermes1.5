/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_176_
#define _BUR_1700031253_176_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct TON fbDeleteLogTmr;
_BUR_LOCAL struct TON fbDlyTmr;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepInitDone;
_BUR_LOCAL plcbit *p_bLinkOpsRun;
_BUR_LOCAL plcbit *p_bLinkConvHvBrd;
_BUR_LOCAL plcstring sWidthInUMTemp[81];
_BUR_LOCAL plcbit *p_bLinkUIAccData;
_BUR_LOCAL plcbit *p_bLinkOpsStop;
_BUR_LOCAL plcbit *p_bLinkMcParamMnlAccData;
_BUR_LOCAL struct tyProdRcpParam *p_tyLinkProdRcpCurrRcp;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam (*pa_tyLinkProdRcpList)[2000];
#else
/* Variable pa_tyLinkProdRcpList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit *p_bLinkDIRightSen;
_BUR_LOCAL plcbit *p_bLinkDILeftSen;
_BUR_LOCAL enum eConvDir *p_eLinkConvDir;
_BUR_LOCAL plcbit bHermesStop;
_BUR_LOCAL plcbit bHermesRun;
_BUR_LOCAL enum eMcSetCommMod *p_eLinkMcParamUSCommMod;
_BUR_LOCAL plcbit *p_bLinkStartupRun;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/USHermes2/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_176_ */

