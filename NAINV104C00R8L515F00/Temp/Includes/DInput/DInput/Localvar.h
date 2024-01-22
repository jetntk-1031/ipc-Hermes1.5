/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_167_
#define _BUR_1700031253_167_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit bHermesDummyMem;
_BUR_LOCAL plcbit bSafetySigErrNoBuz;
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL struct TON fbSafetyRlyRstTm;
_BUR_LOCAL struct fbSenFltr fbConvRgtSigFltr;
_BUR_LOCAL struct fbSenFltr fbConvLftSigFltr;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL plcbit a_bPhysicalDI[40];
#else
/* Variable a_bPhysicalDI not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL signed long diConvRgtSenOffTm;
_BUR_LOCAL signed long diConvRgtSenOnTm;
_BUR_LOCAL signed long diConvLftSenOffTm;
_BUR_LOCAL signed long diConvLftSenOnTm;
_BUR_LOCAL struct tyDigitalInputSettings tyDISettings;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL struct tyDigitalInput tyDInput;

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
#else
/* Variable a_tyAlmText not declared. Array variables with starting indexes not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif
_BUR_LOCAL struct tyAlmDat tyAlmData2;
_BUR_LOCAL struct tyAlmDat tyAlmData1;
_BUR_LOCAL unsigned long udiStatus2;
_BUR_LOCAL unsigned long udiStatus1;
_BUR_LOCAL enum eFBStatus eStatus2;
_BUR_LOCAL enum eFBStatus eStatus1;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/DInput/DInput/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtGeneral/NtGeneral.fun\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/DInput/DInput.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_167_ */

