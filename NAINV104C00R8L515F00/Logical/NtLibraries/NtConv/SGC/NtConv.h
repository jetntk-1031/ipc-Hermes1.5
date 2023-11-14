/* Automation Studio generated header file */
/* Do not edit ! */
/* NtConv 5.00.3 */

#ifndef _NTCONV_
#define _NTCONV_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtConv_VERSION
#define _NtConv_VERSION 5.00.3
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyConvLongBrdInternal
{	struct TON fbDlyTm;
} tyConvLongBrdInternal;

typedef struct tyConvMtrOnOffInternal
{	struct TON fbDlyTm;
} tyConvMtrOnOffInternal;

typedef struct fbConvMtrOff
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrOnOffInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvMtrOff_typ;

typedef struct fbConvMtrOn
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrOnOffInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvMtrOn_typ;

typedef struct fbConvBrkOn
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrOnOffInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrBrk;
} fbConvBrkOn_typ;

typedef struct fbConvBrkOff
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrOnOffInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrBrk;
} fbConvBrkOff_typ;

typedef struct tyConvMtrSenToSenInternal
{	struct fbConvMtrOff fbConvMtrOff;
	struct fbConvMtrOn fbConvMtrOn;
	struct fbConvBrkOn fbConvBrkOn;
	struct fbConvBrkOff fbConvBrkOff;
	struct TON fbMtrDirOffDlyTm;
	struct TON fbTO;
} tyConvMtrSenToSenInternal;

typedef struct fbConvSenToSen
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvSenToSen_typ;

typedef struct fbConvSenToSenBrk2
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	plctime tMtrDirOffDlyTm;
	plctime tMtrBrkOnDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
} fbConvSenToSenBrk2_typ;

typedef struct tyConvMtrSenToSenInternal1
{	struct fbConvSenToSen fbConvSenToSen;
	struct fbConvSenToSenBrk2 fbConvSenToSenBrk;
	struct F_TRIG fbFTrig;
	struct TON fbMtrBrkOnDlyTm;
	struct TON fbMtrDirOffDlyTm;
	struct TON fbMtrSigOnDlyTm;
	struct TON fbDlyTm;
} tyConvMtrSenToSenInternal1;

typedef struct tyConvMtrCtrlInternal
{	struct fbConvMtrOn fbConvMtrOn;
	struct fbConvMtrOff fbConvMtrOff1;
	struct fbConvMtrOff fbConvMtrOff;
	struct TON fbMtrChgDirDlyTm;
	plcbit bConvLToRTemp;
	plcbit bChangingDir;
	plcbit bNotFirstMtrOn;
} tyConvMtrCtrlInternal;

typedef struct fbConvSenToSenTmLmt
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bLmtActivated;
} fbConvSenToSenTmLmt_typ;

typedef struct fbConvSenToSenTm1Lmt
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bLmtActivated;
} fbConvSenToSenTm1Lmt_typ;

typedef struct fbConvSenToSenTm1
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvSenToSenTm1_typ;

typedef struct fbConvSenToSenTm
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvSenToSenTm_typ;

typedef struct fbConvSenToSenOffTmLmt
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bLmtActivated;
} fbConvSenToSenOffTmLmt_typ;

typedef struct fbConvSenToSenOffTm1Lmt
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bLmtActivated;
} fbConvSenToSenOffTm1Lmt_typ;

typedef struct fbConvSenToSenOffTm1
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvSenToSenOffTm1_typ;

typedef struct fbConvSenToSenOffTm
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvSenToSenOffTm_typ;

typedef struct fbConvSenToSenOffLmt
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bLmtActivated;
} fbConvSenToSenOffLmt_typ;

typedef struct fbConvSenToSenOff1
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvSenToSenOff1_typ;

typedef struct fbConvSenToSenOff
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvSenToSenOff_typ;

typedef struct fbConvSenToSenLmt
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bLmtActivated;
} fbConvSenToSenLmt_typ;

typedef struct fbConvSenToSenBrkTmLmt
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	plctime tMtrSigOnDlyTm;
	plctime tMtrDirOffDlyTm;
	plctime tMtrSigOffDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
	plcbit bLmtActivated;
} fbConvSenToSenBrkTmLmt_typ;

typedef struct fbConvSenToSenBrkTm1Lmt
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
	plcbit bLmtActivated;
} fbConvSenToSenBrkTm1Lmt_typ;

typedef struct fbConvSenToSenBrkTm2Lmt
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	plctime tMtrDirOffDlyTm;
	plctime tMtrSigOnDlyTm;
	plctime tMtrBrkOnDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bLmtSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
	plcbit bLmtActivated;
} fbConvSenToSenBrkTm2Lmt_typ;

typedef struct fbConvSenToSenBrkTm
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
} fbConvSenToSenBrkTm_typ;

typedef struct fbConvSenToSenBrkTm1
{
	/* VAR_INPUT (analog) */
	plctime tTxDlyTm;
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal1 tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
} fbConvSenToSenBrkTm1_typ;

typedef struct fbConvSenToSenBrk
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tBrkOnDlyTm;
	plctime tBrkOffDlyTm;
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrSenToSenInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStartSen;
	plcbit bEndSen;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
	plcbit bMtrBrk;
} fbConvSenToSenBrk_typ;

typedef struct fbConvMtrCtrl
{
	/* VAR_INPUT (analog) */
	plctime tMtrOnDlyTm;
	plctime tMtrOffDlyTm;
	plctime tMtrChgDirDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvMtrCtrlInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bMtrOn;
	plcbit bOnDirMod;
	plcbit bConvLToR;
	/* VAR_OUTPUT (digital) */
	plcbit bMtrSigOnOrLToR;
	plcbit bMtrDirOrRToL;
} fbConvMtrCtrl_typ;

typedef struct fbConvLongBrd
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyConvLongBrdInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bSen1;
	plcbit bSen2;
	plcbit bSen3;
	plcbit bSen4;
} fbConvLongBrd_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbConvSenToSenTmLmt(struct fbConvSenToSenTmLmt* inst);
_BUR_PUBLIC void fbConvSenToSenTm1Lmt(struct fbConvSenToSenTm1Lmt* inst);
_BUR_PUBLIC void fbConvSenToSenTm1(struct fbConvSenToSenTm1* inst);
_BUR_PUBLIC void fbConvSenToSenTm(struct fbConvSenToSenTm* inst);
_BUR_PUBLIC void fbConvSenToSenOffTmLmt(struct fbConvSenToSenOffTmLmt* inst);
_BUR_PUBLIC void fbConvSenToSenOffTm1Lmt(struct fbConvSenToSenOffTm1Lmt* inst);
_BUR_PUBLIC void fbConvSenToSenOffTm1(struct fbConvSenToSenOffTm1* inst);
_BUR_PUBLIC void fbConvSenToSenOffTm(struct fbConvSenToSenOffTm* inst);
_BUR_PUBLIC void fbConvSenToSenOffLmt(struct fbConvSenToSenOffLmt* inst);
_BUR_PUBLIC void fbConvSenToSenOff1(struct fbConvSenToSenOff1* inst);
_BUR_PUBLIC void fbConvSenToSenOff(struct fbConvSenToSenOff* inst);
_BUR_PUBLIC void fbConvSenToSenLmt(struct fbConvSenToSenLmt* inst);
_BUR_PUBLIC void fbConvSenToSenBrkTmLmt(struct fbConvSenToSenBrkTmLmt* inst);
_BUR_PUBLIC void fbConvSenToSenBrkTm1Lmt(struct fbConvSenToSenBrkTm1Lmt* inst);
_BUR_PUBLIC void fbConvSenToSenBrkTm2Lmt(struct fbConvSenToSenBrkTm2Lmt* inst);
_BUR_PUBLIC void fbConvSenToSenBrkTm(struct fbConvSenToSenBrkTm* inst);
_BUR_PUBLIC void fbConvSenToSenBrkTm1(struct fbConvSenToSenBrkTm1* inst);
_BUR_PUBLIC void fbConvSenToSenBrk(struct fbConvSenToSenBrk* inst);
_BUR_PUBLIC void fbConvSenToSenBrk2(struct fbConvSenToSenBrk2* inst);
_BUR_PUBLIC void fbConvSenToSen(struct fbConvSenToSen* inst);
_BUR_PUBLIC void fbConvMtrOn(struct fbConvMtrOn* inst);
_BUR_PUBLIC void fbConvMtrOff(struct fbConvMtrOff* inst);
_BUR_PUBLIC void fbConvMtrCtrl(struct fbConvMtrCtrl* inst);
_BUR_PUBLIC void fbConvLongBrd(struct fbConvLongBrd* inst);
_BUR_PUBLIC void fbConvBrkOn(struct fbConvBrkOn* inst);
_BUR_PUBLIC void fbConvBrkOff(struct fbConvBrkOff* inst);
_BUR_PUBLIC plcbit fConvMtrSigOnOrLToR(plcbit bConvLToR, plcbit bOnDirMod);
_BUR_PUBLIC plcbit fConvMtrDirOrRToL(plcbit bConvLToR, plcbit bOnDirMod);
_BUR_PUBLIC plcbit fConvLongBrd(plcbit bSen1, plcbit bSen2, plcbit bSen3, plcbit bSen4);


#ifdef __cplusplus
};
#endif
#endif /* _NTCONV_ */

