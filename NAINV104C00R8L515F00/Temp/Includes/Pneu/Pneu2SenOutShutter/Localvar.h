/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_150_
#define _BUR_1700031253_150_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL enum ePneuAction eStatOld;
_BUR_LOCAL struct fbPneuExtRetSenRetChk fbPneuRetChk;
_BUR_LOCAL struct fbPneuExtRetSenExtChk fbPneuExtChk;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plctime tRetTO;
_BUR_LOCAL plctime tExtTO;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bRetSen;
_BUR_LOCAL plcbit bExtSen;
_BUR_LOCAL plcbit bRetSafetySen;
_BUR_LOCAL plcbit bExtSafetySen;
_BUR_LOCAL plcbit bTwoCtrlIn;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bRetracted;
_BUR_LOCAL plcbit bExtended;
_BUR_LOCAL plcbit bTwoCtrlOut;
_BUR_LOCAL plcbit bRetCtrl;
_BUR_LOCAL plcbit bExtCtrl;

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
_BUR_LOCAL enum ePneuAction eStat;
_BUR_LOCAL enum ePneuAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Pneu/Pneu2SenOutShutter/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtPneu/NtPneu.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_150_ */

