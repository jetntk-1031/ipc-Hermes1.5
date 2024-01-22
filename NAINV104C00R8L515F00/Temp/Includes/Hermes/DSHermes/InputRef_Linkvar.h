/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_179_
#define _BUR_1700031253_179_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct TON fbDeleteLogTmr;
_BUR_LOCAL struct TON fbDlyTmr;
_BUR_LOCAL plcbit *p_bLinkConvHvBrd;
_BUR_LOCAL plcbit *p_bLinkDIRightSen;
_BUR_LOCAL plcbit *p_bLinkDILeftSen;
_BUR_LOCAL plcbit *p_bLinkConvGdBrd;
_BUR_LOCAL enum eConvDir *p_eLinkConvDir;
_BUR_LOCAL plcbit bHermesStop;
_BUR_LOCAL plcbit bHermesRun;
_BUR_LOCAL enum eMcSetCommMod *p_eLinkMcParamDSCommMod;
_BUR_LOCAL plcbit *p_bLinkStartupRun;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/DSHermes/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_179_ */

