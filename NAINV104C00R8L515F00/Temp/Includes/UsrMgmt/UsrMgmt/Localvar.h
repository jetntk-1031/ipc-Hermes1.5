/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_129_
#define _BUR_1700031253_129_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned short udiModuleNum;
_BUR_LOCAL unsigned long udiCnt2;
_BUR_LOCAL unsigned long udiCnt1;
_BUR_LOCAL unsigned long udiCnt;
_BUR_LOCAL unsigned long udi;
_BUR_LOCAL struct tyUsrMgmtParam tyInfoOut;
_BUR_LOCAL struct tyUsrMgmtFullDat tyFullDataTemp;
_BUR_LOCAL struct fbFileFullWriteEncry fbFileWrite1;
_BUR_LOCAL struct fbFileFullReadEncry fbFileRead1;
_BUR_LOCAL struct fbDirCreate fbDirCreate3;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbDirCreate fbDirCreate1;
_BUR_LOCAL struct tyUsrMgmtAccessRight tyAccessRightAdmin;
_BUR_LOCAL unsigned long udiAddStatus;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL struct tyUsrMgmtAccessRight tyAccessRightLvl3;
_BUR_LOCAL struct tyUsrMgmtAccessRight tyAccessRightLvl2;
_BUR_LOCAL struct tyUsrMgmtAccessRight tyAccessRightLvl1;
_BUR_LOCAL struct tyUsrMgmtParam tyInfoIn;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL plcbit bListFull;
_BUR_LOCAL plcbit bNmEmpty;
_BUR_LOCAL plcbit bPwMismatch;
_BUR_LOCAL plcbit bNmNotExist;
_BUR_LOCAL plcbit bNmExist;
_BUR_LOCAL plcbit bLoginSuccess;
_BUR_LOCAL plcbit bUnableDelete;
_BUR_LOCAL plcbit bLastAdmin;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyUsrMgmtParam a_tyAdminList[50];
#else
/* Variable a_tyAdminList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyUsrMgmtParam a_tyLvl3List[50];
#else
/* Variable a_tyLvl3List not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyUsrMgmtParam a_tyLvl2List[50];
#else
/* Variable a_tyLvl2List not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyUsrMgmtFullDat tyFullData;
_BUR_LOCAL struct tyUsrMgmtParam tyCurrUsr;
_BUR_LOCAL struct tyUsrMgmtAccessRight tyCurrAccessRight;

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
_BUR_LOCAL enum eUsrMgmtAction eStat;
_BUR_LOCAL enum eUsrMgmtAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UsrMgmt/UsrMgmt/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/NtFileIO.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/UsrMgmt/UsrMgmt.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_129_ */

