/* Automation Studio generated header file */
/* Do not edit ! */
/* NtTLBuz 5.00.2 */

#ifndef _NTTLBUZ_
#define _NTTLBUZ_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtTLBuz_VERSION
#define _NtTLBuz_VERSION 5.00.2
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyTLBuzInternal
{	struct TON fbTm;
	unsigned char usiStep;
	unsigned char usiOnCnt;
	unsigned char usiStopAftRptSeqCntr;
} tyTLBuzInternal;

typedef struct fbTLBuzBlink
{
	/* VAR_INPUT (analog) */
	plctime tOffTm;
	plctime tOnTm;
	/* VAR (analog) */
	struct tyTLBuzInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bOut;
} fbTLBuzBlink_typ;

typedef struct fbTLBuzWarn
{
	/* VAR_INPUT (analog) */
	plctime tOffTm;
	plctime tOnTm;
	plctime tRstTm;
	unsigned char usiOnCnt;
	unsigned char usiStopAftRptSeqCntr;
	/* VAR (analog) */
	struct tyTLBuzInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bStopAftRptSeqEn;
	/* VAR_OUTPUT (digital) */
	plcbit bOut;
} fbTLBuzWarn_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbTLBuzBlink(struct fbTLBuzBlink* inst);
_BUR_PUBLIC void fbTLBuzWarn(struct fbTLBuzWarn* inst);


#ifdef __cplusplus
};
#endif
#endif /* _NTTLBUZ_ */

