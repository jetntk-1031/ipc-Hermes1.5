/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_205_
#define _BUR_1700031253_205_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL unsigned char usiProdUpdtDatStep;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcbit bUIUpdtData;
_BUR_LOCAL plcbit bAutoUpdtData;
_BUR_LOCAL plcbit bUpdtNewRcpCond;
_BUR_LOCAL plcbit bAccNewRcpCond;
_BUR_LOCAL plcbit bChkLmtNG;
_BUR_LOCAL plcbit bChkLmtOK;
_BUR_LOCAL struct tyProdRcpParam tyLCSProdRcpInfo;
_BUR_LOCAL plcbit bAccData;
_BUR_LOCAL plcbit bMnlAccData;
_BUR_LOCAL struct tyProdRcpParam tyCurrProdParam;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL signed long diUpdtProdWidth;
_BUR_LOCAL plcstring sUpdtProdRcpNm[31];
_BUR_LOCAL plcbit bUpdtDataMnl;
_BUR_LOCAL plcbit bAccDataMnl;
_BUR_LOCAL plcbit bChkLmt;
_BUR_LOCAL unsigned long udiPLCStatus;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyInfoData;
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eLCSAction eStat;
_BUR_LOCAL enum eLCSAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/LCS/LCSLF/Local.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_205_ */

