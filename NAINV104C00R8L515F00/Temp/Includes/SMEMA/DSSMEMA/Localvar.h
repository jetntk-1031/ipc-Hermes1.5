/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_135_
#define _BUR_1700031253_135_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL enum eSMEMAAction eStatOld;
_BUR_LOCAL struct fbSMEMASigInChk fbSigInChk;
_BUR_LOCAL struct fbSMEMADS fbSMEMA;
_BUR_LOCAL struct fbSMEMADS_OppFirst fbSMEMA_OppFirst;
_BUR_LOCAL struct R_TRIG fbTimeTrig;
_BUR_LOCAL struct TON fbTimerDlyTm;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plctime tSigInChkTm;
_BUR_LOCAL plctime tRstDlyTm;
_BUR_LOCAL plcbit bDSBVirtual;
_BUR_LOCAL plcbit bVirtualEn;
_BUR_LOCAL plcbit bTimerEnSenEdge;
_BUR_LOCAL plcbit bTimerEnSen;
_BUR_LOCAL plcbit bDSB;
_BUR_LOCAL plcbit bComplSigOn;
_BUR_LOCAL plcbit bRightSen;
_BUR_LOCAL plcbit bLeftSen;
_BUR_LOCAL plcbit bRdySend;
_BUR_LOCAL plcbit bDirLToR;
_BUR_LOCAL signed long diTransferOutTO;
_BUR_LOCAL plcbit bGdBrd;
_BUR_LOCAL struct tySMEMAParam tyParam;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bVirtual;
_BUR_LOCAL plcbit bTimer;
_BUR_LOCAL plcbit bDBAStat;
_BUR_LOCAL plcbit bDBA;
_BUR_LOCAL plcbit bConvStop;
_BUR_LOCAL plcbit bConvStart;
_BUR_LOCAL plcbit bTransporting;
_BUR_LOCAL plcbit bDSRdy;
_BUR_LOCAL plcbit bUSGdBrdRdy;
_BUR_LOCAL plcbit bUSRdy;

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
_BUR_LOCAL enum eSMEMAAction eStat;
_BUR_LOCAL enum eSMEMAAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/SMEMA/DSSMEMA/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtSMEMA/NtSMEMA.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_135_ */

