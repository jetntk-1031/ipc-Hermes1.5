/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_102_
#define _BUR_1700031253_102_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL struct CfgSetTimeZone fbSetTimeZone;
_BUR_LOCAL struct CfgGetTimeZone fbGetTimeZone;
_BUR_LOCAL struct DTStructureGetTime fbGetTimeDT1;
_BUR_LOCAL struct DTStructureGetTime fbGetTimeDT;
_BUR_LOCAL struct DTSetTime fbSetTime;
_BUR_LOCAL struct DTGetTime fbGetTime1;
_BUR_LOCAL struct DTGetTime fbGetTime;
_BUR_LOCAL struct TON fbDlyTm;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL unsigned short uiSetTimeZone;
_BUR_LOCAL plcdt dtSetDT;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL struct DTStructure tyCurrDTStruct;
_BUR_LOCAL unsigned short uiCurrTimeZone;
_BUR_LOCAL plcdt dtCurrDT;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData1;
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus1;
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eFBStatus eMainStatus;
_BUR_LOCAL enum eTimeAction eStat;
_BUR_LOCAL enum eTimeAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Time/Time/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsARCfg/AsARCfg.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_102_ */

