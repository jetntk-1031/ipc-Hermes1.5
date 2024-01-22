/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_216_
#define _BUR_1700031253_216_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL unsigned long udiModuleNum;
_BUR_LOCAL plcbit b180Angle;
_BUR_LOCAL plcbit b90Angle;
_BUR_LOCAL plcbit bNeg90Angle;
_BUR_LOCAL plcbit b0Angle;
_BUR_LOCAL plcbit bInterruptSensor;
_BUR_LOCAL plcbit bNotInterruptible;
_BUR_LOCAL struct TON fbMtrDirOffDlyTm;
_BUR_LOCAL struct TON fbMtrSigOnDlyTm;
_BUR_LOCAL plcbit bReached;
_BUR_LOCAL struct fbConvBrkOff fbMtrBrkRlsOff;
_BUR_LOCAL struct fbConvBrkOn fbMtrBrkRlsOn;
_BUR_LOCAL struct fbConvMtrOff fbStop;
_BUR_LOCAL struct fbConvSenToSenBrkTmLmt fbRotCCW;
_BUR_LOCAL struct fbConvSenToSenBrkTmLmt fbRotCW;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL enum eMotorBrkAction eStatOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL plcbit bOutletShutterDis;
_BUR_LOCAL plcbit bOutletShutterPrep;
_BUR_LOCAL plcbit bInletShutterDis;
_BUR_LOCAL plcbit bInletShutterPrep;
_BUR_LOCAL plcbit bOutletShutterCloseRS;
_BUR_LOCAL plcbit bInletShutterCloseRS;
_BUR_LOCAL plcbit bCWSen;
_BUR_LOCAL plcbit bMidSen;
_BUR_LOCAL plcbit bCCWSen;
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL signed long diTimeOut;
_BUR_LOCAL signed long diBrkOffDlyTm;
_BUR_LOCAL signed long diBrkOnDlyTm;
_BUR_LOCAL signed long diMtrOffDlyTm;
_BUR_LOCAL signed long diMtrOnDlyTm;
_BUR_LOCAL signed long diMtrBrkOnDlyTm;
_BUR_LOCAL signed long diMtrDirOffDlyTm;
_BUR_LOCAL signed long diMtrSigOnDlyTm;
_BUR_LOCAL plcbit bOnDirMod;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bMtrBrkRls;
_BUR_LOCAL plcbit bMtrDirOrCCW;
_BUR_LOCAL plcbit bMtrSigOnOrCW;

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
_BUR_LOCAL enum eMotorBrkAction eStat;
_BUR_LOCAL enum eMotorBrkAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/standard/standard.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtConv/NtConv.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_216_ */

