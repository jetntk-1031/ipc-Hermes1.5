/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_115_
#define _BUR_1700031253_115_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct tyProdRcpParam tyTempRecipe;
_BUR_LOCAL plcstring sDebug[301];
_BUR_LOCAL signed short iSortCurrentInnerCntr;
_BUR_LOCAL signed short iTotalRcp;
_BUR_LOCAL signed short iSortCurrentOuterCntr;
_BUR_LOCAL unsigned long udiSortCurrenTotalCntr;
_BUR_LOCAL unsigned long udi;
_BUR_LOCAL enum eProdRcpAction *p_eLinkUIProdRcpAct;
_BUR_LOCAL enum eProdRcpAction *p_eLinkLCSMngRcpProdRcpAct;
_BUR_LOCAL plcbit *p_bLinkMcParamLCSManageRcpEn;
_BUR_LOCAL plcbit *p_bLinkNtParamLCSManageRcpPrep;
_BUR_LOCAL plcbit *p_bLinkStartupRun;
_BUR_LOCAL plcstring sWidthInMM2[31];
_BUR_LOCAL plcstring sWidthInMM[31];
_BUR_LOCAL float rWidthInMM2;
_BUR_LOCAL float rWidthInMM;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ProdRcp/ProdRcp/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_115_ */

