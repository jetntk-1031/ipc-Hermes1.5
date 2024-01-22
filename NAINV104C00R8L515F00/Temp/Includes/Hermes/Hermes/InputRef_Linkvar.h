/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700034959_1_
#define _BUR_1700034959_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcstring sLowerCase[255];
_BUR_LOCAL plcbit bHermesWriteRetain;
_BUR_LOCAL struct tyHermesBrdAvlDat a_tyHermesBrdAvlData[7];
_BUR_LOCAL struct tyHermesBrdAvlDat tyHermesBrdAvlData;
_BUR_LOCAL struct tyHermesBoardAvailable *p_tyUSHermestyBoardAvailable;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepInvert;
_BUR_LOCAL plcbit *p_bLinkConvHvBrd;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepExitBrd;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepEntToInOff;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepEntToEnd;
_BUR_LOCAL plcbit *p_bLinkOpsInvertStepInitDone;
_BUR_LOCAL signed short *p_iLinkXMLTableDataBrdAvlTtlIdx;
_BUR_LOCAL struct tyXMLTableDat (*pa_tyLinkXMLTableDataBrdAvl)[201];
_BUR_LOCAL enum eMcSetCommMod *p_eLinkMcParamUSComm2Mod;
_BUR_LOCAL plcbit *p_bLinkUSHermesTransporting;
_BUR_LOCAL plcbit *p_bLinkStartupRun;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/Hermes/InputRef_Link.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700034959_1_ */

