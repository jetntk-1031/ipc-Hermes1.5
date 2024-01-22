/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_202_
#define _BUR_1700031253_202_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bChkLmtNG;
_BUR_LOCAL plcbit bChkLmtOK;
_BUR_LOCAL struct tyProdRcpParam tyLCSProdRcpInfo;
_BUR_LOCAL signed short iLCSIdxStat;
_BUR_LOCAL signed short iLCSIdxAct;
_BUR_LOCAL signed long diMcParamProdSelWidth;
_BUR_LOCAL plcstring sMcParamProdSelRcpNm[16];
_BUR_LOCAL enum eFBStatus eProdRcpStatus;
_BUR_LOCAL enum eProdRcpAction eProdRcpStat;
_BUR_LOCAL struct tyProdRcpParam tyProdRcpCurrRcp;
_BUR_LOCAL struct tyProdRcpParam tyProdRcpInfoOut;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam a_tyProdRcpCurrList[2000];
#else
/* Variable a_tyProdRcpCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit bProdRcpListFull;
_BUR_LOCAL plcbit bProdRcpNmEmpty;
_BUR_LOCAL plcbit bProdRcpNmNotExist;
_BUR_LOCAL plcbit bProdRcpNmExist;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bChkLmt;
_BUR_LOCAL struct tyProdRcpParam tyProdRcpInfoIn;
_BUR_LOCAL enum eProdRcpAction eProdRcpAct;
_BUR_LOCAL struct tyProdRcpParam tyPLCProdRcpInfo;
_BUR_LOCAL signed short iPLCIdxStat;
_BUR_LOCAL signed short iPLCIdxAct;
_BUR_LOCAL unsigned long udiPLCStatus;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eLCSAction eStat;
_BUR_LOCAL enum eLCSAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCSMngRcp/Local.var\\\" scope \\\"local\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_202_ */

