/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_108_
#define _BUR_1700031253_108_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL struct fbTLBuzWarn fbWarning1;
_BUR_LOCAL struct fbTLBuzBlink fbBlink4;
_BUR_LOCAL struct fbTLBuzBlink fbBlink3;
_BUR_LOCAL struct fbTLBuzBlink fbBlink2;
_BUR_LOCAL struct fbTLBuzBlink fbBlink1;
_BUR_LOCAL unsigned char usiWarnInfoStateNew;
_BUR_LOCAL unsigned char usiWarnInfoStateOld;
_BUR_LOCAL enum eTLBuzAction eStatOld;
_BUR_LOCAL struct fbTLBuzWarn fbWarning;
_BUR_LOCAL struct fbTLBuzBlink fbBlink;
_BUR_LOCAL plctime tBlinkTm;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bTLGreenFlashEn;
_BUR_LOCAL plcbit bTLRedFlashEn;
_BUR_LOCAL plcbit bTLWhiteFlashEn;
_BUR_LOCAL plcbit bTLAmberFlashEn;
_BUR_LOCAL plcbit bTLBlueFlashEn;
_BUR_LOCAL plcbit bBuzAlertEn;
_BUR_LOCAL plcbit bAOIOriginSig;
_BUR_LOCAL plcbit bAOIErrSig;
_BUR_LOCAL enum eTLBuzMod eTLBuzMode;
_BUR_LOCAL plcbit bCoveSwitchSig;
_BUR_LOCAL unsigned char usiWarn5OnTm;
_BUR_LOCAL plctime tWarn5RestTm;
_BUR_LOCAL plctime tWarn5BlinkTm;
_BUR_LOCAL unsigned char usiWarn4OnTm;
_BUR_LOCAL plctime tWarn4RestTm;
_BUR_LOCAL plctime tWarn4BlinkTm;
_BUR_LOCAL unsigned char usiWarn3OnTm;
_BUR_LOCAL plctime tWarn3RestTm;
_BUR_LOCAL plctime tWarn3BlinkTm;
_BUR_LOCAL unsigned char usiWarn2OnTm;
_BUR_LOCAL plctime tWarn2RestTm;
_BUR_LOCAL plctime tWarn2BlinkTm;
_BUR_LOCAL unsigned char usiWarn1OnTm;
_BUR_LOCAL plctime tWarn1RestTm;
_BUR_LOCAL plctime tWarn1BlinkTm;
_BUR_LOCAL unsigned char usiWarnOnTm;
_BUR_LOCAL plctime tWarnRestTm;
_BUR_LOCAL plctime tWarnBlinkTm;
_BUR_LOCAL plctime tChgRcpBlinkTm;
_BUR_LOCAL plctime tErrBlinkTm;
_BUR_LOCAL plctime tTLGreenBlinkTm;
_BUR_LOCAL plctime tTLRedBlinkTm;
_BUR_LOCAL plctime tTLWhiteBlinkTm;
_BUR_LOCAL plctime tTLAmberBlinkTm;
_BUR_LOCAL plctime tTLBlueBlinkTm;
_BUR_LOCAL unsigned char usiBuzAlertStopSeqCntr;
_BUR_LOCAL plcbit bBuzAlertStopSeqEn;
_BUR_LOCAL unsigned char usiBuzAlertOnCntr;
_BUR_LOCAL plctime tBuzAlertRestTm;
_BUR_LOCAL plctime tBuzAlertOnTm;
_BUR_LOCAL unsigned char usiBuzWarn5StopSeqCntr;
_BUR_LOCAL plcbit bBuzWarn5StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn5OnCntr;
_BUR_LOCAL plctime tBuzWarn5RestTm;
_BUR_LOCAL plctime tBuzWarn5OnTm;
_BUR_LOCAL plctime tTLWarn5BlinkTm;
_BUR_LOCAL unsigned char usiBuzWarn4StopSeqCntr;
_BUR_LOCAL plcbit bBuzWarn4StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn4OnCntr;
_BUR_LOCAL plctime tBuzWarn4RestTm;
_BUR_LOCAL plctime tBuzWarn4OnTm;
_BUR_LOCAL plctime tTLWarn4BlinkTm;
_BUR_LOCAL unsigned char usiBuzWarn3StopSeqCntr;
_BUR_LOCAL plcbit bBuzWarn3StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn3OnCntr;
_BUR_LOCAL plctime tBuzWarn3RestTm;
_BUR_LOCAL plctime tBuzWarn3OnTm;
_BUR_LOCAL plctime tTLWarn3BlinkTm;
_BUR_LOCAL unsigned char usiBuzWarn2StopSeqCntr;
_BUR_LOCAL plcbit bBuzWarn2StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn2OnCntr;
_BUR_LOCAL plctime tBuzWarn2RestTm;
_BUR_LOCAL plctime tBuzWarn2OnTm;
_BUR_LOCAL plctime tTLWarn2BlinkTm;
_BUR_LOCAL unsigned char usiBuzWarn1StopSeqCntr;
_BUR_LOCAL plcbit bBuzWarn1StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn1OnCntr;
_BUR_LOCAL plctime tBuzWarn1RestTm;
_BUR_LOCAL plctime tBuzWarn1OnTm;
_BUR_LOCAL plctime tTLWarn1BlinkTm;
_BUR_LOCAL unsigned char usiBuzWarnStopSeqCntr;
_BUR_LOCAL plcbit bBuzWarnStopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarnOnCntr;
_BUR_LOCAL plctime tBuzWarnRestTm;
_BUR_LOCAL plctime tBuzWarnOnTm;
_BUR_LOCAL plctime tTLWarnBlinkTm;
_BUR_LOCAL unsigned char usiBuzErrStopSeqCntr;
_BUR_LOCAL plcbit bBuzErrStopSeqEn;
_BUR_LOCAL unsigned char usiBuzErrOnCntr;
_BUR_LOCAL plctime tBuzErrRestTm;
_BUR_LOCAL plctime tBuzErrOnTm;
_BUR_LOCAL plctime tTLErrBlinkTm;
_BUR_LOCAL plctime tTLChgRcpBlinkTm;
_BUR_LOCAL plcbit bMuteBuz;
_BUR_LOCAL plcbit bSimulation;
_BUR_LOCAL plcbit bStandby;
_BUR_LOCAL plcbit bOps;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL plcbit bSeqStop;
_BUR_LOCAL plcbit bChgRcp;
_BUR_LOCAL plcbit bWarning5NoBuz;
_BUR_LOCAL plcbit bWarning5;
_BUR_LOCAL plcbit bWarning4NoBuz;
_BUR_LOCAL plcbit bWarning4;
_BUR_LOCAL plcbit bWarning3NoBuz;
_BUR_LOCAL plcbit bWarning3;
_BUR_LOCAL plcbit bWarning2NoBuz;
_BUR_LOCAL plcbit bWarning2;
_BUR_LOCAL plcbit bWarning1NoBuz;
_BUR_LOCAL plcbit bWarning1;
_BUR_LOCAL plcbit bWarningNoBuz;
_BUR_LOCAL plcbit bWarning;
_BUR_LOCAL plcbit bErrNoBuz;
_BUR_LOCAL plcbit bErr;
_BUR_LOCAL plcbit bStartup;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bManualErrOn;
_BUR_LOCAL plcbit bBuzBeep;
_BUR_LOCAL plcbit bTLWhite;
_BUR_LOCAL plcbit bTLBlue;
_BUR_LOCAL plcbit bTLGreen;
_BUR_LOCAL plcbit bTLAmber;
_BUR_LOCAL plcbit bTLRed;
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL enum eFBStatus eStatus;
_BUR_LOCAL enum eTLBuzAction eStat;
_BUR_LOCAL enum eTLBuzAction eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz/Local.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/NtLibraries/NtTLBuz/NtTLBuz.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_108_ */

