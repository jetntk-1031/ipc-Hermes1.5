/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_117_
#define _BUR_1700031253_117_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL signed short iFilterCtr;
_BUR_LOCAL struct fbFileFullWrite fbFileLoadSingle;
_BUR_LOCAL struct fbFileFullWrite fbFileWriteSingle;
_BUR_LOCAL struct fbFileFullRead fbFileReadSingle;
_BUR_LOCAL struct fbFileFullWrite fbFileWriteList;
_BUR_LOCAL struct fbFileFullRead fbFileReadList;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbDirCreate fbDirCreate1;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam a_tyListTemp[2000];
#else
/* Variable a_tyListTemp not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL unsigned long udiAddStatus;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bWidth2Prep;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcstring sSingleFileName[81];
_BUR_LOCAL plcstring sListFileName[81];
_BUR_LOCAL struct tyProdRcpParam tyCurrRcpWr;
_BUR_LOCAL struct tyProdRcpParam tyInfoIn;
_BUR_LOCAL plcstring sScan[255];
_BUR_LOCAL plcstring sSearch[255];
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL struct tyProdRcpParam a_tyCurrRcp[6];
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL struct tyProdRcpParam tyInfoOut;
_BUR_LOCAL struct tyProdRcpParam tyTempList;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam a_tyScanList[2000];
#else
/* Variable a_tyScanList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam a_tySortList[2000];
#else
/* Variable a_tySortList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam a_tyFilterList[2000];
#else
/* Variable a_tyFilterList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyProdRcpParam a_tyCurrList[2000];
#else
/* Variable a_tyCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit bListFull;
_BUR_LOCAL plcbit bNmEmpty;
_BUR_LOCAL plcbit bNmNotExist;
_BUR_LOCAL plcbit bNmExist;

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
_BUR_LOCAL enum eProdRcpAction eStat;
_BUR_LOCAL enum eProdRcpAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/ProdRcp/ProdRcp/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/NtFileIO.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/ProdRcp/ProdRcp.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_117_ */

