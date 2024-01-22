#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_eTLBuzAction
#define __AS__TYPE_eTLBuzAction
typedef enum eTLBuzAction
{	TLBuzActIdle = 0,
	TLBuzActSetGreen = 1,
	TLBuzActSetAmber = 2,
	TLBuzActSetRed = 3,
	TLBuzActSetWhite = 4,
	TLBuzActSetBlue = 5,
	TLBuzActSetBuz = 6,
	TLBuzActRstGreen = 7,
	TLBuzActRstAmber = 8,
	TLBuzActRstRed = 9,
	TLBuzActRstWhite = 10,
	TLBuzActRstBlue = 11,
	TLBuzActRstBuz = 12,
	TLBuzActSetAll = 13,
	TLBuzActRstAll = 14,
} eTLBuzAction;
#endif

#ifndef __AS__TYPE_eTLBuzMod
#define __AS__TYPE_eTLBuzMod
typedef enum eTLBuzMod
{	TLBuzModNutek = 0,
	TLBuzModMEK = 1,
	TLBuzModBHTC = 2,
	TLBuzModAptiv = 3,
} eTLBuzMod;
#endif

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
#ifndef __AS__TYPE_tyTLBuzInternal
#define __AS__TYPE_tyTLBuzInternal
typedef struct tyTLBuzInternal
{	struct TON fbTm;
	unsigned char usiStep;
	unsigned char usiOnCnt;
	unsigned char usiStopAftRptSeqCntr;
} tyTLBuzInternal;
#endif

#ifndef __AS__TYPE_eFBStatus
#define __AS__TYPE_eFBStatus
typedef enum eFBStatus
{	Idle = 0,
	Done = 1,
	Busy = 2,
	Error = 3,
} eFBStatus;
#endif

struct fbTLBuzBlink
{	plctime tOffTm;
	plctime tOnTm;
	tyTLBuzInternal tyInternal;
	plcbit bEn;
	plcbit bOut;
};
_BUR_PUBLIC void fbTLBuzBlink(struct fbTLBuzBlink* inst);
struct fbTLBuzWarn
{	plctime tOffTm;
	plctime tOnTm;
	plctime tRstTm;
	unsigned char usiOnCnt;
	unsigned char usiStopAftRptSeqCntr;
	tyTLBuzInternal tyInternal;
	plcbit bEn;
	plcbit bStopAftRptSeqEn;
	plcbit bOut;
};
_BUR_PUBLIC void fbTLBuzWarn(struct fbTLBuzWarn* inst);
_BUR_LOCAL plcbit(* p_bLinkAlarmWarning);
_BUR_LOCAL plcbit(* p_bLinkAlarmInfo);
_BUR_LOCAL plcbit(* p_bLinkAlarmInfoLF);
_BUR_LOCAL plcbit(* p_bLinkLFBuzMute);
_BUR_LOCAL eTLBuzAction(* p_eAct);
_BUR_LOCAL plcbit(* p_bManual);
_BUR_LOCAL plcbit(* p_bStartup);
_BUR_LOCAL plcbit(* p_bErr);
_BUR_LOCAL plcbit(* p_bErrNoBuz);
_BUR_LOCAL plcbit(* p_bWarning);
_BUR_LOCAL plcbit(* p_bWarningNoBuz);
_BUR_LOCAL plcbit(* p_bWarning1);
_BUR_LOCAL plcbit(* p_bWarning1NoBuz);
_BUR_LOCAL plcbit(* p_bWarning2);
_BUR_LOCAL plcbit(* p_bWarning2NoBuz);
_BUR_LOCAL plcbit(* p_bWarning3);
_BUR_LOCAL plcbit(* p_bWarning3NoBuz);
_BUR_LOCAL plcbit(* p_bWarning4);
_BUR_LOCAL plcbit(* p_bWarning4NoBuz);
_BUR_LOCAL plcbit(* p_bWarning5);
_BUR_LOCAL plcbit(* p_bWarning5NoBuz);
_BUR_LOCAL plcbit(* p_bChgRcp);
_BUR_LOCAL plcbit(* p_bSeqStop);
_BUR_LOCAL plcbit(* p_bStep);
_BUR_LOCAL plcbit(* p_bOps);
_BUR_LOCAL plcbit(* p_bStandby);
_BUR_LOCAL plcbit(* p_bSimulation);
_BUR_LOCAL plcbit(* p_bMuteBuz);
_BUR_LOCAL plctime(* p_tTLChgRcpBlinkTm);
_BUR_LOCAL plctime(* p_tTLErrBlinkTm);
_BUR_LOCAL plctime(* p_tBuzErrOnTm);
_BUR_LOCAL plctime(* p_tBuzErrRestTm);
_BUR_LOCAL unsigned char(* p_usiBuzErrOnCntr);
_BUR_LOCAL plcbit(* p_bBuzErrStopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzErrStopSeqCntr);
_BUR_LOCAL plctime(* p_tTLWarnBlinkTm);
_BUR_LOCAL plctime(* p_tBuzWarnOnTm);
_BUR_LOCAL plctime(* p_tBuzWarnRestTm);
_BUR_LOCAL unsigned char(* p_usiBuzWarnOnCntr);
_BUR_LOCAL plcbit(* p_bBuzWarnStopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzWarnStopSeqCntr);
_BUR_LOCAL plctime(* p_tTLWarn1BlinkTm);
_BUR_LOCAL plctime(* p_tBuzWarn1OnTm);
_BUR_LOCAL plctime(* p_tBuzWarn1RestTm);
_BUR_LOCAL unsigned char(* p_usiBuzWarn1OnCntr);
_BUR_LOCAL plcbit(* p_bBuzWarn1StopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzWarn1StopSeqCntr);
_BUR_LOCAL plctime(* p_tTLWarn2BlinkTm);
_BUR_LOCAL plctime(* p_tBuzWarn2OnTm);
_BUR_LOCAL plctime(* p_tBuzWarn2RestTm);
_BUR_LOCAL unsigned char(* p_usiBuzWarn2OnCntr);
_BUR_LOCAL plcbit(* p_bBuzWarn2StopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzWarn2StopSeqCntr);
_BUR_LOCAL plctime(* p_tTLWarn3BlinkTm);
_BUR_LOCAL plctime(* p_tBuzWarn3OnTm);
_BUR_LOCAL plctime(* p_tBuzWarn3RestTm);
_BUR_LOCAL unsigned char(* p_usiBuzWarn3OnCntr);
_BUR_LOCAL plcbit(* p_bBuzWarn3StopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzWarn3StopSeqCntr);
_BUR_LOCAL plctime(* p_tTLWarn4BlinkTm);
_BUR_LOCAL plctime(* p_tBuzWarn4OnTm);
_BUR_LOCAL plctime(* p_tBuzWarn4RestTm);
_BUR_LOCAL unsigned char(* p_usiBuzWarn4OnCntr);
_BUR_LOCAL plcbit(* p_bBuzWarn4StopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzWarn4StopSeqCntr);
_BUR_LOCAL plctime(* p_tTLWarn5BlinkTm);
_BUR_LOCAL plctime(* p_tBuzWarn5OnTm);
_BUR_LOCAL plctime(* p_tBuzWarn5RestTm);
_BUR_LOCAL unsigned char(* p_usiBuzWarn5OnCntr);
_BUR_LOCAL plcbit(* p_bBuzWarn5StopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzWarn5StopSeqCntr);
_BUR_LOCAL plctime(* p_tBuzAlertOnTm);
_BUR_LOCAL plctime(* p_tBuzAlertRestTm);
_BUR_LOCAL unsigned char(* p_usiBuzAlertOnCntr);
_BUR_LOCAL plcbit(* p_bBuzAlertStopSeqEn);
_BUR_LOCAL unsigned char(* p_usiBuzAlertStopSeqCntr);
_BUR_LOCAL plctime(* p_tTLBlueBlinkTm);
_BUR_LOCAL plctime(* p_tTLAmberBlinkTm);
_BUR_LOCAL plctime(* p_tTLWhiteBlinkTm);
_BUR_LOCAL plctime(* p_tTLRedBlinkTm);
_BUR_LOCAL plctime(* p_tTLGreenBlinkTm);
_BUR_LOCAL plctime(* p_tErrBlinkTm);
_BUR_LOCAL plctime(* p_tChgRcpBlinkTm);
_BUR_LOCAL plctime(* p_tWarnBlinkTm);
_BUR_LOCAL plctime(* p_tWarnRestTm);
_BUR_LOCAL unsigned char(* p_usiWarnOnTm);
_BUR_LOCAL plctime(* p_tWarn1BlinkTm);
_BUR_LOCAL plctime(* p_tWarn1RestTm);
_BUR_LOCAL unsigned char(* p_usiWarn1OnTm);
_BUR_LOCAL plctime(* p_tWarn2BlinkTm);
_BUR_LOCAL plctime(* p_tWarn2RestTm);
_BUR_LOCAL unsigned char(* p_usiWarn2OnTm);
_BUR_LOCAL plctime(* p_tWarn3BlinkTm);
_BUR_LOCAL plctime(* p_tWarn3RestTm);
_BUR_LOCAL unsigned char(* p_usiWarn3OnTm);
_BUR_LOCAL plctime(* p_tWarn4BlinkTm);
_BUR_LOCAL plctime(* p_tWarn4RestTm);
_BUR_LOCAL unsigned char(* p_usiWarn4OnTm);
_BUR_LOCAL plctime(* p_tWarn5BlinkTm);
_BUR_LOCAL plctime(* p_tWarn5RestTm);
_BUR_LOCAL unsigned char(* p_usiWarn5OnTm);
_BUR_LOCAL plcbit(* p_bCoverSwitchSig);
_BUR_LOCAL eTLBuzMod(* p_eTLBuzMode);
_BUR_LOCAL plcbit(* p_bAOIErrSig);
_BUR_LOCAL plcbit(* p_bAOIOriginSig);
_BUR_LOCAL plcbit(* p_bBuzAlertEn);
_BUR_LOCAL plcbit(* p_bTLBlueFlashEn);
_BUR_LOCAL plcbit(* p_bTLAmberFlashEn);
_BUR_LOCAL plcbit(* p_bTLWhiteFlashEn);
_BUR_LOCAL plcbit(* p_bTLRedFlashEn);
_BUR_LOCAL plcbit(* p_bTLGreenFlashEn);
_BUR_LOCAL eTLBuzAction eAct;
_BUR_LOCAL eTLBuzAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL plcbit bTLRed;
_BUR_LOCAL plcbit bTLAmber;
_BUR_LOCAL plcbit bTLGreen;
_BUR_LOCAL plcbit bTLBlue;
_BUR_LOCAL plcbit bTLWhite;
_BUR_LOCAL plcbit bBuzBeep;
_BUR_LOCAL plcbit bManualErrOn;
_BUR_LOCAL plcbit bManual;
_BUR_LOCAL plcbit bStartup;
_BUR_LOCAL plcbit bErr;
_BUR_LOCAL plcbit bErrNoBuz;
_BUR_LOCAL plcbit bWarning;
_BUR_LOCAL plcbit bWarningNoBuz;
_BUR_LOCAL plcbit bWarning1;
_BUR_LOCAL plcbit bWarning1NoBuz;
_BUR_LOCAL plcbit bWarning2;
_BUR_LOCAL plcbit bWarning2NoBuz;
_BUR_LOCAL plcbit bWarning3;
_BUR_LOCAL plcbit bWarning3NoBuz;
_BUR_LOCAL plcbit bWarning4;
_BUR_LOCAL plcbit bWarning4NoBuz;
_BUR_LOCAL plcbit bWarning5;
_BUR_LOCAL plcbit bWarning5NoBuz;
_BUR_LOCAL plcbit bChgRcp;
_BUR_LOCAL plcbit bSeqStop;
_BUR_LOCAL plcbit bStep;
_BUR_LOCAL plcbit bOps;
_BUR_LOCAL plcbit bStandby;
_BUR_LOCAL plcbit bSimulation;
_BUR_LOCAL plcbit bMuteBuz;
_BUR_LOCAL plctime tTLChgRcpBlinkTm;
_BUR_LOCAL plctime tTLErrBlinkTm;
_BUR_LOCAL plctime tBuzErrOnTm;
_BUR_LOCAL plctime tBuzErrRestTm;
_BUR_LOCAL unsigned char usiBuzErrOnCntr;
_BUR_LOCAL plcbit bBuzErrStopSeqEn;
_BUR_LOCAL unsigned char usiBuzErrStopSeqCntr;
_BUR_LOCAL plctime tTLWarnBlinkTm;
_BUR_LOCAL plctime tBuzWarnOnTm;
_BUR_LOCAL plctime tBuzWarnRestTm;
_BUR_LOCAL unsigned char usiBuzWarnOnCntr;
_BUR_LOCAL plcbit bBuzWarnStopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarnStopSeqCntr;
_BUR_LOCAL plctime tTLWarn1BlinkTm;
_BUR_LOCAL plctime tBuzWarn1OnTm;
_BUR_LOCAL plctime tBuzWarn1RestTm;
_BUR_LOCAL unsigned char usiBuzWarn1OnCntr;
_BUR_LOCAL plcbit bBuzWarn1StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn1StopSeqCntr;
_BUR_LOCAL plctime tTLWarn2BlinkTm;
_BUR_LOCAL plctime tBuzWarn2OnTm;
_BUR_LOCAL plctime tBuzWarn2RestTm;
_BUR_LOCAL unsigned char usiBuzWarn2OnCntr;
_BUR_LOCAL plcbit bBuzWarn2StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn2StopSeqCntr;
_BUR_LOCAL plctime tTLWarn3BlinkTm;
_BUR_LOCAL plctime tBuzWarn3OnTm;
_BUR_LOCAL plctime tBuzWarn3RestTm;
_BUR_LOCAL unsigned char usiBuzWarn3OnCntr;
_BUR_LOCAL plcbit bBuzWarn3StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn3StopSeqCntr;
_BUR_LOCAL plctime tTLWarn4BlinkTm;
_BUR_LOCAL plctime tBuzWarn4OnTm;
_BUR_LOCAL plctime tBuzWarn4RestTm;
_BUR_LOCAL unsigned char usiBuzWarn4OnCntr;
_BUR_LOCAL plcbit bBuzWarn4StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn4StopSeqCntr;
_BUR_LOCAL plctime tTLWarn5BlinkTm;
_BUR_LOCAL plctime tBuzWarn5OnTm;
_BUR_LOCAL plctime tBuzWarn5RestTm;
_BUR_LOCAL unsigned char usiBuzWarn5OnCntr;
_BUR_LOCAL plcbit bBuzWarn5StopSeqEn;
_BUR_LOCAL unsigned char usiBuzWarn5StopSeqCntr;
_BUR_LOCAL plctime tBuzAlertOnTm;
_BUR_LOCAL plctime tBuzAlertRestTm;
_BUR_LOCAL unsigned char usiBuzAlertOnCntr;
_BUR_LOCAL plcbit bBuzAlertStopSeqEn;
_BUR_LOCAL unsigned char usiBuzAlertStopSeqCntr;
_BUR_LOCAL plctime tTLBlueBlinkTm;
_BUR_LOCAL plctime tTLAmberBlinkTm;
_BUR_LOCAL plctime tTLWhiteBlinkTm;
_BUR_LOCAL plctime tTLRedBlinkTm;
_BUR_LOCAL plctime tTLGreenBlinkTm;
_BUR_LOCAL plctime tErrBlinkTm;
_BUR_LOCAL plctime tChgRcpBlinkTm;
_BUR_LOCAL plctime tWarnBlinkTm;
_BUR_LOCAL plctime tWarnRestTm;
_BUR_LOCAL unsigned char usiWarnOnTm;
_BUR_LOCAL plctime tWarn1BlinkTm;
_BUR_LOCAL plctime tWarn1RestTm;
_BUR_LOCAL unsigned char usiWarn1OnTm;
_BUR_LOCAL plctime tWarn2BlinkTm;
_BUR_LOCAL plctime tWarn2RestTm;
_BUR_LOCAL unsigned char usiWarn2OnTm;
_BUR_LOCAL plctime tWarn3BlinkTm;
_BUR_LOCAL plctime tWarn3RestTm;
_BUR_LOCAL unsigned char usiWarn3OnTm;
_BUR_LOCAL plctime tWarn4BlinkTm;
_BUR_LOCAL plctime tWarn4RestTm;
_BUR_LOCAL unsigned char usiWarn4OnTm;
_BUR_LOCAL plctime tWarn5BlinkTm;
_BUR_LOCAL plctime tWarn5RestTm;
_BUR_LOCAL unsigned char usiWarn5OnTm;
_BUR_LOCAL plcbit bCoveSwitchSig;
_BUR_LOCAL eTLBuzMod eTLBuzMode;
_BUR_LOCAL plcbit bAOIErrSig;
_BUR_LOCAL plcbit bAOIOriginSig;
_BUR_LOCAL plcbit bBuzAlertEn;
_BUR_LOCAL plcbit bTLBlueFlashEn;
_BUR_LOCAL plcbit bTLAmberFlashEn;
_BUR_LOCAL plcbit bTLWhiteFlashEn;
_BUR_LOCAL plcbit bTLRedFlashEn;
_BUR_LOCAL plcbit bTLGreenFlashEn;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plctime tBlinkTm;
_BUR_LOCAL struct fbTLBuzBlink fbBlink;
_BUR_LOCAL struct fbTLBuzWarn fbWarning;
_BUR_LOCAL eTLBuzAction eStatOld;
_BUR_LOCAL unsigned char usiWarnInfoStateOld;
_BUR_LOCAL unsigned char usiWarnInfoStateNew;
_BUR_LOCAL struct fbTLBuzBlink fbBlink1;
_BUR_LOCAL struct fbTLBuzBlink fbBlink2;
_BUR_LOCAL struct fbTLBuzBlink fbBlink3;
_BUR_LOCAL struct fbTLBuzBlink fbBlink4;
_BUR_LOCAL struct fbTLBuzWarn fbWarning1;
_GLOBAL unsigned long p_UITLBuzAct;
_GLOBAL unsigned long p_UIUIMnlMod;
_GLOBAL unsigned long p_UIMuteBuz;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_AlarmErr;
_GLOBAL unsigned long p_AlarmWarning;
_GLOBAL unsigned long p_AlarmInfo;
_GLOBAL unsigned long p_AlarmInfoLF;
_GLOBAL unsigned long p_McParamLFBuzMute;
_GLOBAL unsigned long p_NtParamTLChgRcpBlinkTm;
_GLOBAL unsigned long p_NtParamTLErrBlinkTm;
_GLOBAL unsigned long p_NtParamBuzErrOnTm;
_GLOBAL unsigned long p_NtParamBuzErrRestTm;
_GLOBAL unsigned long p_NtParamBuzErrOnCntr;
_GLOBAL unsigned long p_NtParamBuzErrStopSeqEn;
_GLOBAL unsigned long p_NtParamBuzErrStopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarnBlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarnOnTm;
_GLOBAL unsigned long p_NtParamBuzWarnRestTm;
_GLOBAL unsigned long p_NtParamBuzWarnOnCntr;
_GLOBAL unsigned long p_NtParamBuzWarnStopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarnStopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn1BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn1OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn1RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn1OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn1StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn1StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn2BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn2OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn2RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn2OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn2StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn2StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn3BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn3OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn3RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn3OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn3StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn3StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn4BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn4OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn4RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn4OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn4StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn4StopSeqCntr;
_GLOBAL unsigned long p_NtParamTLWarn5BlinkTm;
_GLOBAL unsigned long p_NtParamBuzWarn5OnTm;
_GLOBAL unsigned long p_NtParamBuzWarn5RestTm;
_GLOBAL unsigned long p_NtParamBuzWarn5OnCntr;
_GLOBAL unsigned long p_NtParamBuzWarn5StopSeqEn;
_GLOBAL unsigned long p_NtParamBuzWarn5StopSeqCntr;
_GLOBAL unsigned long p_NtParamBuzAlertOnTm;
_GLOBAL unsigned long p_NtParamBuzAlertRestTm;
_GLOBAL unsigned long p_NtParamBuzAlertOnCntr;
_GLOBAL unsigned long p_NtParamBuzAlertStopSeqEn;
_GLOBAL unsigned long p_NtParamBuzAlertStopSeqCntr;
_GLOBAL unsigned long p_NtParamTLBlueBlinkTm;
_GLOBAL unsigned long p_NtParamTLAmberBlinkTm;
_GLOBAL unsigned long p_NtParamTLWhiteBlinkTm;
_GLOBAL unsigned long p_NtParamTLRedBlinkTm;
_GLOBAL unsigned long p_NtParamTLGreenBlinkTm;
_GLOBAL unsigned long p_NtParamTLBuzMode;
_GLOBAL unsigned long p_DICoverSWSig;
_GLOBAL unsigned long p_OpsStatusRun;
_GLOBAL unsigned long p_OpsStatusStop;
_GLOBAL unsigned long p_OpsStatusCycleStop;
_GLOBAL unsigned long p_OpsStatusStep;
_LOCAL plcbit Edge0000200000;
_LOCAL plcbit Edge0000200001;
_LOCAL plcbit Edge0000300000;
_LOCAL plcbit Edge0000300001;
_LOCAL plcbit Edge0000400000;
_LOCAL plcbit Edge0000400001;
_LOCAL plcbit Edge0000500000;
_LOCAL plcbit Edge0000500001;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Background1(void);
static void __AS__Action__Act_Background2(void);
static void __AS__Action__Act_Background3(void);
