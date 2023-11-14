/* Automation Studio generated header file */
/* Do not edit ! */
/* NtSMEMA 5.00.6 */

#ifndef _NTSMEMA_
#define _NTSMEMA_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtSMEMA_VERSION
#define _NtSMEMA_VERSION 5.00.6
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum eSMEMAStat
{	SMEMAStatOppNotRdyNCurrNotRdy,
	SMEMAStatOppRdyNCurrNotRdy,
	SMEMAStatOppNotRdyNCurrRdy,
	SMEMAStatOppRdyNCurrRdy,
	SMEMAStatTransportStart,
	SMEMAStatTransportIdle,
	SMEMAStatTransporting,
	SMEMAStatOppTransportFinished,
	SMEMAStatCurrTransportFinished,
	SMEMAStatTransportDone
} eSMEMAStat;

typedef struct tySMEMABrdSeqInternal
{	enum eSMEMAStat eStat;
} tySMEMABrdSeqInternal;

typedef struct fbSMEMABrdSeq
{
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMABrdSeqInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bCurrRdy;
	/* VAR_OUTPUT (digital) */
	plcbit bSigToOppOn;
} fbSMEMABrdSeq_typ;

typedef struct fbSMEMABrdSeq_OppFirst
{
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMABrdSeqInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bCurrRdy;
	/* VAR_OUTPUT (digital) */
	plcbit bSigToOppOn;
} fbSMEMABrdSeq_OppFirst_typ;

typedef struct tySMEMATransportIdleInternal
{	enum eSMEMAStat eStat;
	struct TON fbTO;
} tySMEMATransportIdleInternal;

typedef struct fbSMEMATransportIdle
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	plctime tElapseTimeOut;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMATransportIdleInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bInletSen;
	plcbit bOutletSen;
	/* VAR_OUTPUT (digital) */
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bContinue;
	/* VAR (digital) */
	plcbit zzEdge00000;
} fbSMEMATransportIdle_typ;

typedef struct tySMEMATransportingInternal
{	enum eSMEMAStat eStat;
	struct TON fbTO;
	struct TON fbRstDlyTm;
} tySMEMATransportingInternal;

typedef struct fbSMEMATransporting
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	plctime tRstDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMATransportingInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bComplSigOn;
	/* VAR_OUTPUT (digital) */
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToOppOff;
	plcbit bCompl;
} fbSMEMATransporting_typ;

typedef struct tySMEMAUSInternal
{	unsigned char usiStep;
	struct fbSMEMABrdSeq fbSMEMABrdSeq;
	struct fbSMEMABrdSeq_OppFirst fbSMEMABrdSeq_OppFirst;
	struct fbSMEMATransportIdle fbSMEMATransportIdle;
	struct fbSMEMATransporting fbSMEMATransporting;
	struct TON fbDlyTM;
} tySMEMAUSInternal;

typedef struct fbSMEMATransporting1
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	plctime tRstDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMATransportingInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bComplSigOn;
	/* VAR_OUTPUT (digital) */
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToOppOff;
} fbSMEMATransporting1_typ;

typedef struct tySMEMADSInternal
{	unsigned char usiStep;
	struct fbSMEMABrdSeq fbSMEMABrdSeq;
	struct fbSMEMABrdSeq_OppFirst fbSMEMABrdSeq_OppFirst;
	struct fbSMEMATransporting1 fbSMEMATransporting1;
} tySMEMADSInternal;

typedef struct tySMEMASimpleInternal
{	enum eSMEMAStat eStat;
	struct TON fbTO;
} tySMEMASimpleInternal;

typedef struct tySMEMASigInChkInternal
{	plcbit bSigInValid;
	plcbit bNomSigOld;
	plcbit bStatSigOld;
	struct TON fbSigInChkTm;
} tySMEMASigInChkInternal;

typedef struct fbSMEMASimple
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMASimpleInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bOppRdy;
	plcbit bCurrRdy;
	plcbit bComplSigOn;
	/* VAR_OUTPUT (digital) */
	plcbit bConvStart;
	plcbit bSigOut;
} fbSMEMASimple_typ;

typedef struct fbSMEMAUS_9851
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	plctime tTimeOut;
	plctime tRstDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMAUSInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bUSRdy;
	plcbit bRdyRcv;
	plcbit bComplSigOn;
	plcbit bInletSen;
	plcbit bOutletSen;
	/* VAR_OUTPUT (digital) */
	plcbit bTransporting;
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToUS;
} fbSMEMAUS_9851_typ;

typedef struct fbSMEMAUS_Std
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	plctime tTimeOut;
	plctime tRstDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMAUSInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bUSRdy;
	plcbit bRdyRcv;
	plcbit bComplSigOn;
	plcbit bInletSen;
	plcbit bOutletSen;
	/* VAR_OUTPUT (digital) */
	plcbit bTransporting;
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToUS;
} fbSMEMAUS_Std_typ;

typedef struct fbSMEMADS
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	plctime tRstDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMADSInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDSRdy;
	plcbit bRdySend;
	plcbit bComplSigOn;
	/* VAR_OUTPUT (digital) */
	plcbit bTransporting;
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToDS;
} fbSMEMADS_typ;

typedef struct fbSMEMADS_OppFirst
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	plctime tRstDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tySMEMADSInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bDSRdy;
	plcbit bRdySend;
	plcbit bComplSigOn;
	/* VAR_OUTPUT (digital) */
	plcbit bTransporting;
	plcbit bConvStart;
	plcbit bConvStop;
	plcbit bSigToDS;
} fbSMEMADS_OppFirst_typ;

typedef struct fbSMEMASigInChk
{
	/* VAR_INPUT (analog) */
	plctime tSigInChkTm;
	/* VAR (analog) */
	struct tySMEMASigInChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bNomSig;
	plcbit bStatSig;
	plcbit bStatSigSetGd;
	/* VAR_OUTPUT (digital) */
	plcbit bGdBrd;
	plcbit bSigInValid;
} fbSMEMASigInChk_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbSMEMASimple(struct fbSMEMASimple* inst);
_BUR_PUBLIC void fbSMEMAUS_9851(struct fbSMEMAUS_9851* inst);
_BUR_PUBLIC void fbSMEMAUS_Std(struct fbSMEMAUS_Std* inst);
_BUR_PUBLIC void fbSMEMADS(struct fbSMEMADS* inst);
_BUR_PUBLIC void fbSMEMADS_OppFirst(struct fbSMEMADS_OppFirst* inst);
_BUR_PUBLIC void fbSMEMABrdSeq(struct fbSMEMABrdSeq* inst);
_BUR_PUBLIC void fbSMEMABrdSeq_OppFirst(struct fbSMEMABrdSeq_OppFirst* inst);
_BUR_PUBLIC void fbSMEMATransportIdle(struct fbSMEMATransportIdle* inst);
_BUR_PUBLIC void fbSMEMATransporting(struct fbSMEMATransporting* inst);
_BUR_PUBLIC void fbSMEMATransporting1(struct fbSMEMATransporting1* inst);
_BUR_PUBLIC void fbSMEMASigInChk(struct fbSMEMASigInChk* inst);
_BUR_PUBLIC plcbit fSMEMASigStatOut(plcbit bStatSigSetGd, plcbit bGdBrd);


#ifdef __cplusplus
};
#endif
#endif /* _NTSMEMA_ */

