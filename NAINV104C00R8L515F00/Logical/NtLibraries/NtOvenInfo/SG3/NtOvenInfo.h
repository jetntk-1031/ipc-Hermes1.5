/* Automation Studio generated header file */
/* Do not edit ! */
/* NtOvenInfo 5.00.0 */

#ifndef _NTOVENINFO_
#define _NTOVENINFO_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtOvenInfo_VERSION
#define _NtOvenInfo_VERSION 5.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct fbOvenInfoStd
{
	/* VAR_INPUT (analog) */
	signed long diBffrMtySlt;
	signed long diMinBffrMtySlt;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bOvenAllow;
} fbOvenInfoStd_typ;

typedef struct fbOvenInfoExtdd
{
	/* VAR_INPUT (analog) */
	signed long diAddBffr;
	signed long diBffrMtySlt;
	signed long diBrdInOven;
	signed long diBrdPerSlt;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	/* VAR_OUTPUT (digital) */
	plcbit bOvenAllow;
} fbOvenInfoExtdd_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbOvenInfoStd(struct fbOvenInfoStd* inst);
_BUR_PUBLIC void fbOvenInfoExtdd(struct fbOvenInfoExtdd* inst);
_BUR_PUBLIC plcbit fOvenInfoExtddForm(signed long diAddBffr, signed long diBrdInOven, signed long diBffrMtySlt, signed long diBrdPerSlt);
_BUR_PUBLIC plcbit fOvenInfoStdForm(signed long diBffrMtySlt, signed long diMinBffrMtySlt);


#ifdef __cplusplus
};
#endif
#endif /* _NTOVENINFO_ */

