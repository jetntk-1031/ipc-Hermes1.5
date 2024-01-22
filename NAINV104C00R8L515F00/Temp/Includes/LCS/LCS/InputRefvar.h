/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_198_
#define _BUR_1700031253_198_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL struct tyNtParam *p_tyNtParamCurr;
_BUR_LOCAL struct tyProdRcpParam *p_tyProdRcpCurrRcp;
_BUR_LOCAL plcbit *p_bUIManual;
_BUR_LOCAL plcbit *p_bInfo;
_BUR_LOCAL plcbit *p_bWarning;
_BUR_LOCAL plcbit *p_bError;
_BUR_LOCAL plcbit *p_bOpsRun;
_BUR_LOCAL plcbit *p_bLCSLFChkLmt;
_BUR_LOCAL plcbit *p_bLCSMngRcpChkLmt;
_BUR_LOCAL unsigned long *p_udiLCSLF_PLCStatus;
_BUR_LOCAL enum eLCSAction *p_eLCSLF_PLCStat;
_BUR_LOCAL struct tyProdRcpParam *p_tyLCSMngRcp_PLCProdRcpInfo;
_BUR_LOCAL signed short *p_iLCSMngRcp_PLCIdxStat;
_BUR_LOCAL signed short *p_iLCSMngRcp_PLCIdxAct;
_BUR_LOCAL unsigned long *p_udiLCSMngRcp_PLCStatus;
_BUR_LOCAL enum eLCSAction *p_eLCSMngRcp_PLCStat;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_198_ */

