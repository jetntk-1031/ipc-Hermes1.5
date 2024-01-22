/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_107_
#define _BUR_1700031253_107_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bTLGreenFlashEn;
_BUR_LOCAL plcbit *p_bTLRedFlashEn;
_BUR_LOCAL plcbit *p_bTLWhiteFlashEn;
_BUR_LOCAL plcbit *p_bTLAmberFlashEn;
_BUR_LOCAL plcbit *p_bTLBlueFlashEn;
_BUR_LOCAL plcbit *p_bBuzAlertEn;
_BUR_LOCAL plcbit *p_bAOIOriginSig;
_BUR_LOCAL plcbit *p_bAOIErrSig;
_BUR_LOCAL enum eTLBuzMod *p_eTLBuzMode;
_BUR_LOCAL plcbit *p_bCoverSwitchSig;
_BUR_LOCAL unsigned char *p_usiWarn5OnTm;
_BUR_LOCAL plctime *p_tWarn5RestTm;
_BUR_LOCAL plctime *p_tWarn5BlinkTm;
_BUR_LOCAL unsigned char *p_usiWarn4OnTm;
_BUR_LOCAL plctime *p_tWarn4RestTm;
_BUR_LOCAL plctime *p_tWarn4BlinkTm;
_BUR_LOCAL unsigned char *p_usiWarn3OnTm;
_BUR_LOCAL plctime *p_tWarn3RestTm;
_BUR_LOCAL plctime *p_tWarn3BlinkTm;
_BUR_LOCAL unsigned char *p_usiWarn2OnTm;
_BUR_LOCAL plctime *p_tWarn2RestTm;
_BUR_LOCAL plctime *p_tWarn2BlinkTm;
_BUR_LOCAL unsigned char *p_usiWarn1OnTm;
_BUR_LOCAL plctime *p_tWarn1RestTm;
_BUR_LOCAL plctime *p_tWarn1BlinkTm;
_BUR_LOCAL unsigned char *p_usiWarnOnTm;
_BUR_LOCAL plctime *p_tWarnRestTm;
_BUR_LOCAL plctime *p_tWarnBlinkTm;
_BUR_LOCAL plctime *p_tChgRcpBlinkTm;
_BUR_LOCAL plctime *p_tErrBlinkTm;
_BUR_LOCAL plctime *p_tTLGreenBlinkTm;
_BUR_LOCAL plctime *p_tTLRedBlinkTm;
_BUR_LOCAL plctime *p_tTLWhiteBlinkTm;
_BUR_LOCAL plctime *p_tTLAmberBlinkTm;
_BUR_LOCAL plctime *p_tTLBlueBlinkTm;
_BUR_LOCAL unsigned char *p_usiBuzAlertStopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzAlertStopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzAlertOnCntr;
_BUR_LOCAL plctime *p_tBuzAlertRestTm;
_BUR_LOCAL plctime *p_tBuzAlertOnTm;
_BUR_LOCAL unsigned char *p_usiBuzWarn5StopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzWarn5StopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzWarn5OnCntr;
_BUR_LOCAL plctime *p_tBuzWarn5RestTm;
_BUR_LOCAL plctime *p_tBuzWarn5OnTm;
_BUR_LOCAL plctime *p_tTLWarn5BlinkTm;
_BUR_LOCAL unsigned char *p_usiBuzWarn4StopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzWarn4StopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzWarn4OnCntr;
_BUR_LOCAL plctime *p_tBuzWarn4RestTm;
_BUR_LOCAL plctime *p_tBuzWarn4OnTm;
_BUR_LOCAL plctime *p_tTLWarn4BlinkTm;
_BUR_LOCAL unsigned char *p_usiBuzWarn3StopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzWarn3StopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzWarn3OnCntr;
_BUR_LOCAL plctime *p_tBuzWarn3RestTm;
_BUR_LOCAL plctime *p_tBuzWarn3OnTm;
_BUR_LOCAL plctime *p_tTLWarn3BlinkTm;
_BUR_LOCAL unsigned char *p_usiBuzWarn2StopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzWarn2StopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzWarn2OnCntr;
_BUR_LOCAL plctime *p_tBuzWarn2RestTm;
_BUR_LOCAL plctime *p_tBuzWarn2OnTm;
_BUR_LOCAL plctime *p_tTLWarn2BlinkTm;
_BUR_LOCAL unsigned char *p_usiBuzWarn1StopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzWarn1StopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzWarn1OnCntr;
_BUR_LOCAL plctime *p_tBuzWarn1RestTm;
_BUR_LOCAL plctime *p_tBuzWarn1OnTm;
_BUR_LOCAL plctime *p_tTLWarn1BlinkTm;
_BUR_LOCAL unsigned char *p_usiBuzWarnStopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzWarnStopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzWarnOnCntr;
_BUR_LOCAL plctime *p_tBuzWarnRestTm;
_BUR_LOCAL plctime *p_tBuzWarnOnTm;
_BUR_LOCAL plctime *p_tTLWarnBlinkTm;
_BUR_LOCAL unsigned char *p_usiBuzErrStopSeqCntr;
_BUR_LOCAL plcbit *p_bBuzErrStopSeqEn;
_BUR_LOCAL unsigned char *p_usiBuzErrOnCntr;
_BUR_LOCAL plctime *p_tBuzErrRestTm;
_BUR_LOCAL plctime *p_tBuzErrOnTm;
_BUR_LOCAL plctime *p_tTLErrBlinkTm;
_BUR_LOCAL plctime *p_tTLChgRcpBlinkTm;
_BUR_LOCAL plcbit *p_bMuteBuz;
_BUR_LOCAL plcbit *p_bSimulation;
_BUR_LOCAL plcbit *p_bStandby;
_BUR_LOCAL plcbit *p_bOps;
_BUR_LOCAL plcbit *p_bStep;
_BUR_LOCAL plcbit *p_bSeqStop;
_BUR_LOCAL plcbit *p_bChgRcp;
_BUR_LOCAL plcbit *p_bWarning5NoBuz;
_BUR_LOCAL plcbit *p_bWarning5;
_BUR_LOCAL plcbit *p_bWarning4NoBuz;
_BUR_LOCAL plcbit *p_bWarning4;
_BUR_LOCAL plcbit *p_bWarning3NoBuz;
_BUR_LOCAL plcbit *p_bWarning3;
_BUR_LOCAL plcbit *p_bWarning2NoBuz;
_BUR_LOCAL plcbit *p_bWarning2;
_BUR_LOCAL plcbit *p_bWarning1NoBuz;
_BUR_LOCAL plcbit *p_bWarning1;
_BUR_LOCAL plcbit *p_bWarningNoBuz;
_BUR_LOCAL plcbit *p_bWarning;
_BUR_LOCAL plcbit *p_bErrNoBuz;
_BUR_LOCAL plcbit *p_bErr;
_BUR_LOCAL plcbit *p_bStartup;
_BUR_LOCAL plcbit *p_bManual;
_BUR_LOCAL enum eTLBuzAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_107_ */

