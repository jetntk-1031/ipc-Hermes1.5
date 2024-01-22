/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_222_
#define _BUR_1700031253_222_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct TON fbConvChgDirDlyTm;
_BUR_LOCAL struct TON fbInvChgDirDlyTm;
_BUR_LOCAL enum eSimuInvRunStep eSimuInvGotoStep;
_BUR_LOCAL enum eSimuInvRunStep eSimuInvStep;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL enum eFBStatus eStopperStatus;
_BUR_LOCAL enum ePneuAction eStopperStat;
_BUR_LOCAL enum eFBStatus eOutletShutterStatus;
_BUR_LOCAL enum ePneuAction eOutletShutterStat;
_BUR_LOCAL enum eFBStatus eInletShutterStatus;
_BUR_LOCAL enum ePneuAction eInletShutterStat;
_BUR_LOCAL enum eFBStatus eConvStatus;
_BUR_LOCAL enum eConvAction eConvStat;
_BUR_LOCAL enum eFBStatus eInverterStatus;
_BUR_LOCAL enum eMotorBrkAction eInverterStat;
_BUR_LOCAL plcbit bOutletShutterCloseRS;
_BUR_LOCAL plcbit bInletShutterCloseRS;
_BUR_LOCAL plcbit bConvRightSen;
_BUR_LOCAL plcbit bConvLeftSen;
_BUR_LOCAL plcbit binvRemoteSen;
_BUR_LOCAL plcbit bInvHomeSen;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bRun;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL enum ePneuAction eStopperAct;
_BUR_LOCAL enum ePneuAction eOutShutterAct;
_BUR_LOCAL enum ePneuAction eInShutterAct;
_BUR_LOCAL enum eConvAction eConvAct;
_BUR_LOCAL enum eMotorBrkAction eInverterAct;
_BUR_LOCAL plcbit bPaused;
_BUR_LOCAL plcstring sStepTxt[81];

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL enum eFBStatus eStatus;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Simulation/SimuInv/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_222_ */

