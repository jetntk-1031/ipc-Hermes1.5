/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700528767_1_
#define _BUR_1700528767_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
 #define c_udiAlarminfoMaxModule 10U
 #define c_udiAlarmMaxModule 60U
 #define c_udiAlarmHistoryMax 300U
 #define c_udiAlarmCurrMax 200U
#else
 _GLOBAL_CONST unsigned long c_udiAlarminfoMaxModule;
 _GLOBAL_CONST unsigned long c_udiAlarmMaxModule;
 _GLOBAL_CONST unsigned long c_udiAlarmHistoryMax;
 _GLOBAL_CONST unsigned long c_udiAlarmCurrMax;
#endif


/* Variables */
_GLOBAL plcstring g_sSvyHermesProgNm[16];
_GLOBAL plcstring g_sOps4ProgNm[16];
_GLOBAL plcstring g_sOps3ProgNm[16];
_GLOBAL plcstring g_sOps2ProgNm[16];
_GLOBAL plcstring g_sLiberWarnName[16];
_GLOBAL plcstring g_sOpsInvertProgNm[16];
_GLOBAL plcstring g_sMachineProgNm[16];
_GLOBAL plcstring g_sTimeProgNm[16];
_GLOBAL plcstring g_sDInputProgNm[16];
_GLOBAL plcstring g_sHWInfoProgNm[16];
_GLOBAL plcstring g_sUsrFolderProgNm[16];
_GLOBAL plcstring g_sLibVerProgNm[16];
_GLOBAL plcstring g_sUsrMgmtProgNm[16];
_GLOBAL plcstring g_sMcParamProgNm[16];
_GLOBAL plcstring g_sNtParamProgNm[16];
_GLOBAL plcstring g_sAlarmProgNm[16];
_GLOBAL plcstring g_sMpProdRcpProgNm[16];
_GLOBAL plcstring g_sMagRcpProgNm[16];
_GLOBAL plcstring g_sProdRcpProgNm[16];
_GLOBAL plcstring g_sRS232MirtecProgNm[16];
_GLOBAL plcstring g_sBarcodeRdrProgNm[16];
_GLOBAL plcstring g_sDSSOTProgNm[16];
_GLOBAL plcstring g_sUSSOTProgNm[16];
_GLOBAL plcstring g_sTCPProgNm[16];
_GLOBAL plcstring g_sLCSMngRcpProgNm[16];
_GLOBAL plcstring g_sLCSLFProgNm[16];
_GLOBAL plcstring g_sLCSProgNm[16];
_GLOBAL plcstring g_sLFFollowerProgNm[16];
_GLOBAL plcstring g_sLFLeaderProgNm[16];
_GLOBAL plcstring g_sRmtHermesProgNm[16];
_GLOBAL plcstring g_sDSHermesProgNm[16];
_GLOBAL plcstring g_sUSHermesProgNm[16];
_GLOBAL plcstring g_sHermesProgNm[16];
_GLOBAL plcstring g_sDSSMEMAProgNm[16];
_GLOBAL plcstring g_sUSSMEMAProgNm[16];
_GLOBAL plcstring g_sPneu3SenProgNm[16];
_GLOBAL plcstring g_sPneu2SenProgNm[16];
_GLOBAL plcstring g_sPneuRetSenProgNm[16];
_GLOBAL plcstring g_sPneuExtSenProgNm[16];
_GLOBAL plcstring g_sPneuNoSenProgNm[16];
_GLOBAL plcstring g_sStepperProgNm[16];
_GLOBAL plcstring g_sMtrPshrProgNm[16];
_GLOBAL plcstring g_sMotorBrkProgNm[16];
_GLOBAL plcstring g_sBufferProgNm[16];
_GLOBAL plcstring g_sMagConv2ClpProgNm[16];
_GLOBAL plcstring g_sMagConvProgNm[16];
_GLOBAL plcstring g_sDCConvProgNm[16];
_GLOBAL plcstring g_sConvProgNm[16];
_GLOBAL plcstring g_sLifterBtmProgNm[16];
_GLOBAL plcstring g_sTravProgNm[16];
_GLOBAL plcstring g_sMagAWOpenProgNm[16];
_GLOBAL plcstring g_sAWCloseProgNm[16];
_GLOBAL plcstring g_sAWOpenProgNm[16];
_GLOBAL unsigned long p_AlarmHistoryFileNotFound;
_GLOBAL unsigned long p_AlarmInfoMsg;
_GLOBAL unsigned long p_AlarmInfoLF;
_GLOBAL unsigned long p_AlarmInfo;
_GLOBAL unsigned long p_AlarmHistoryList;
_GLOBAL unsigned long p_AlarmRecoveryList;
_GLOBAL unsigned long p_AlarmCurrList;
_GLOBAL unsigned long p_AlarmWarning;
_GLOBAL unsigned long p_AlarmErr;
_GLOBAL unsigned long p_AlarmStatTxt;
_GLOBAL unsigned long p_AlarmStatus;
_GLOBAL unsigned long p_AlarmStat;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Alarm/Alarm.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700528767_1_ */

