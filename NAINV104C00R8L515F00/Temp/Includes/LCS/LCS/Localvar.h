/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_199_
#define _BUR_1700031253_199_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcstring sAddMsg[81];
_BUR_LOCAL plcstring sLastModifiedTemp[81];
_BUR_LOCAL plcbit bMngRcpRun;
_BUR_LOCAL plcbit bLFRun;
_BUR_LOCAL struct tyLCSTagNm tyTagNm;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiFlagNo;
_BUR_LOCAL unsigned long udi;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL struct tyNtParam tyNtParamCurr;
_BUR_LOCAL struct tyProdRcpParam tyProdRcpCurrRcp;
_BUR_LOCAL plcbit bUIManual;
_BUR_LOCAL plcbit bInfo;
_BUR_LOCAL plcbit bWarning;
_BUR_LOCAL plcbit bError;
_BUR_LOCAL plcbit bOpsRun;
_BUR_LOCAL plcbit bLCSLFChkLmt;
_BUR_LOCAL plcbit bLCSMngRcpChkLmt;
_BUR_LOCAL unsigned long udiLCSLF_PLCStatus;
_BUR_LOCAL enum eLCSAction eLCSLF_PLCStat;
_BUR_LOCAL struct tyProdRcpParam tyLCSMngRcp_PLCProdRcpInfo;
_BUR_LOCAL signed short iLCSMngRcp_PLCIdxStat;
_BUR_LOCAL signed short iLCSMngRcp_PLCIdxAct;
_BUR_LOCAL unsigned long udiLCSMngRcp_PLCStatus;
_BUR_LOCAL enum eLCSAction eLCSMngRcp_PLCStat;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bChkLmtNG;
_BUR_LOCAL plcbit bChkLmtOK;
_BUR_LOCAL struct tyProdRcpParam tyLCSLF_LCSProdRcpInfo;
_BUR_LOCAL enum eLCSAction eLCSLF_LCSAct;
_BUR_LOCAL struct tyProdRcpParam tyLCSMngRcp_LCSProdRcpInfo;
_BUR_LOCAL signed short iLCSMngRcp_LCSIdxStat;
_BUR_LOCAL signed short iLCSMngRcp_LCSIdxAct;
_BUR_LOCAL enum eLCSAction eLCSMngRcp_LCSAct;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCS/Local.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_199_ */

