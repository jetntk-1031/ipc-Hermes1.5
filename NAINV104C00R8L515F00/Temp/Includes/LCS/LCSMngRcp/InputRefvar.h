/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_201_
#define _BUR_1700031253_201_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcbit *p_bChkLmtNG;
_BUR_LOCAL plcbit *p_bChkLmtOK;
_BUR_LOCAL struct tyProdRcpParam *p_tyLCSProdRcpInfo;
_BUR_LOCAL signed short *p_iLCSIdxStat;
_BUR_LOCAL signed short *p_iLCSIdxAct;
_BUR_LOCAL signed long *p_diMcParamProdSelWidth;
_BUR_LOCAL plcstring (*p_sMcParamProdSelRcpNm)[16];
_BUR_LOCAL enum eFBStatus *p_eProdRcpStatus;
_BUR_LOCAL enum eProdRcpAction *p_eProdRcpStat;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpCurrRcp;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpInfoOut;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam (*pa_tyProdRcpCurrList)[2000];
#else
/* Variable pa_tyProdRcpCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit *p_bProdRcpListFull;
_BUR_LOCAL plcbit *p_bProdRcpNmEmpty;
_BUR_LOCAL plcbit *p_bProdRcpNmNotExist;
_BUR_LOCAL plcbit *p_bProdRcpNmExist;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eLCSAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCSMngRcp/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_201_ */

