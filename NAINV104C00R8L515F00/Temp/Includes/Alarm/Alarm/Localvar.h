/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700528767_5_
#define _BUR_1700528767_5_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcstring sDT[81];
_BUR_LOCAL unsigned long udiErrorCode;
_BUR_LOCAL plcbit WarningListOccur;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyHistory a_tyHistoryList[300];
#else
/* Variable a_tyHistoryList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlarmCurr a_tyWarningCurrList[200];
#else
/* Variable a_tyWarningCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcstring sWarningCompareMsg[301];
_BUR_LOCAL plcstring sWarningID[81];
_BUR_LOCAL plcstring sWarningMsg[301];
_BUR_LOCAL unsigned long udiWarningMax;
_BUR_LOCAL plcbit bRstWarning;
_BUR_LOCAL unsigned long udiRecorded1;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL unsigned long udiRecorded[200];
#else
/* Variable udiRecorded not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL unsigned long udi2;
_BUR_LOCAL unsigned long udi1;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite1;
_BUR_LOCAL struct fbFileFullRead fbFileRead1;
_BUR_LOCAL struct fbFileOldDel fbFileOldDel1;
_BUR_LOCAL struct fbFileFullAppend fbFileAppend1;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbDirCreate fbDirCreate1;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL unsigned long a_udiRunTimeOld[200];
#else
/* Variable a_udiRunTimeOld not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcdt dtCurrDTTemp;
_BUR_LOCAL plcbit bAlmUpdt;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring a_sLogList[200][201];
#else
/* Variable a_sLogList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL unsigned long udiWriteLogCntr;
_BUR_LOCAL unsigned long udiLogCntr;
_BUR_LOCAL unsigned long udiAlmRecvryCntr;
_BUR_LOCAL unsigned long udiAlmCntr;
_BUR_LOCAL plcstring sAlmMsg[301];
_BUR_LOCAL signed short iInfoCntr;
_BUR_LOCAL unsigned long udi;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL plcbit bAlarmLog;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL unsigned long udiFileKeepDay;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmDat a_tyAlmData[200];
#else
/* Variable a_tyAlmData not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bInfoLF;
_BUR_LOCAL plcbit bHistoryFileNotFound;
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcbit bInfo;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring a_sHistoryList[300][201];
#else
/* Variable a_sHistoryList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL unsigned long a_udiRecoveryList[200];
#else
/* Variable a_udiRecoveryList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcstring a_sRecoveryList[200][201];
#else
/* Variable a_sRecoveryList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlarmCurr a_tyCurrList[200];
#else
/* Variable a_tyCurrList not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit bWarning;
_BUR_LOCAL plcbit bErr;

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
_BUR_LOCAL enum eAlarmAction eStat;
_BUR_LOCAL enum eAlarmAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtFileIO/NtFileIO.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/Alarm/Alarm.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700528767_5_ */

