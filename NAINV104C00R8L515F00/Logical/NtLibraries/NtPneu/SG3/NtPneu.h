/* Automation Studio generated header file */
/* Do not edit ! */
/* NtPneu 5.00.0 */

#ifndef _NTPNEU_
#define _NTPNEU_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtPneu_VERSION
#define _NtPneu_VERSION 5.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyPneuSenChkInternal
{	struct TON fbChkTm;
} tyPneuSenChkInternal;

typedef struct fbPneuNoSenDly
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbPneuNoSenDly_typ;

typedef struct fbPneuSenOnChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bSenOn;
} fbPneuSenOnChk_typ;

typedef struct tyPneuSafetyChkInternal
{	struct fbPneuNoSenDly fbPneuNoSenDly;
	struct fbPneuSenOnChk fbPneuSenOnChk;
} tyPneuSafetyChkInternal;

typedef struct fbPneuSenOnChkWithSafety
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuSafetyChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bSenOn;
	plcbit bSafetySenOn;
} fbPneuSenOnChkWithSafety_typ;

typedef struct fbPneuNoSenDlyWithSafety
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuSafetyChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bSafetySenOn;
} fbPneuNoSenDlyWithSafety_typ;

typedef struct fbPneuSenOffChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bSenOn;
} fbPneuSenOffChk_typ;

typedef struct tyPneuFullSenChkInternal
{	struct fbPneuSenOnChkWithSafety fbPneuSenOnChkWithSafety;
	struct fbPneuNoSenDlyWithSafety fbPneuNoSenDlyWithSafety;
	struct fbPneuSenOffChk fbPneuSenOffChk;
} tyPneuFullSenChkInternal;

typedef struct fbPneuExtRetSenRetChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bExtSen;
	plcbit bRetSen;
	plcbit bRetSafety;
} fbPneuExtRetSenRetChk_typ;

typedef struct fbPneuExtRetSenExtChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bExtSen;
	plcbit bRetSen;
	plcbit bExtSafety;
} fbPneuExtRetSenExtChk_typ;

typedef struct fbPneuRetSenExtChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bRetSen;
	plcbit bExtSafety;
} fbPneuRetSenExtChk_typ;

typedef struct fbPneuRetSenRetChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bRetSen;
	plcbit bRetSafety;
} fbPneuRetSenRetChk_typ;

typedef struct fbPneuExtSenRetChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bExtSen;
	plcbit bRetSafety;
} fbPneuExtSenRetChk_typ;

typedef struct fbPneuExtSenExtChk
{
	/* VAR_INPUT (analog) */
	plctime tTimeOut;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bExtSen;
	plcbit bExtSafety;
} fbPneuExtSenExtChk_typ;

typedef struct fbPneuNoSenRetChk
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bRetSafety;
} fbPneuNoSenRetChk_typ;

typedef struct fbPneuNoSenExtChk
{
	/* VAR_INPUT (analog) */
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyPneuFullSenChkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bExtSafety;
} fbPneuNoSenExtChk_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbPneuExtRetSenRetChk(struct fbPneuExtRetSenRetChk* inst);
_BUR_PUBLIC void fbPneuExtRetSenExtChk(struct fbPneuExtRetSenExtChk* inst);
_BUR_PUBLIC void fbPneuRetSenExtChk(struct fbPneuRetSenExtChk* inst);
_BUR_PUBLIC void fbPneuRetSenRetChk(struct fbPneuRetSenRetChk* inst);
_BUR_PUBLIC void fbPneuExtSenRetChk(struct fbPneuExtSenRetChk* inst);
_BUR_PUBLIC void fbPneuExtSenExtChk(struct fbPneuExtSenExtChk* inst);
_BUR_PUBLIC void fbPneuNoSenRetChk(struct fbPneuNoSenRetChk* inst);
_BUR_PUBLIC void fbPneuNoSenExtChk(struct fbPneuNoSenExtChk* inst);
_BUR_PUBLIC void fbPneuNoSenDlyWithSafety(struct fbPneuNoSenDlyWithSafety* inst);
_BUR_PUBLIC void fbPneuSenOnChkWithSafety(struct fbPneuSenOnChkWithSafety* inst);
_BUR_PUBLIC void fbPneuSenOffChk(struct fbPneuSenOffChk* inst);
_BUR_PUBLIC void fbPneuSenOnChk(struct fbPneuSenOnChk* inst);
_BUR_PUBLIC void fbPneuNoSenDly(struct fbPneuNoSenDly* inst);


#ifdef __cplusplus
};
#endif
#endif /* _NTPNEU_ */

