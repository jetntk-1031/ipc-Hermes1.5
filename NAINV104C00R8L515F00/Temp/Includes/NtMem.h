/* Automation Studio generated header file */
/* Do not edit ! */
/* NtMem 5.00.0 */

#ifndef _NTMEM_
#define _NTMEM_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtMem_VERSION
#define _NtMem_VERSION 5.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyMemDestroyInternal
{	struct AsMemPartDestroy fbMemPartDestroy;
} tyMemDestroyInternal;

typedef struct tyMemCreateInternal
{	struct AsMemPartAlloc fbMemPartAlloc;
	struct AsMemPartCreate fbMemPartCreate;
	unsigned char usiStep;
} tyMemCreateInternal;

typedef struct fbMemDestroy
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMemDestroyInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMemDestroy_typ;

typedef struct fbMemCreate
{
	/* VAR_INPUT (analog) */
	unsigned long udiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiIdent;
	unsigned long p_Dest;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyMemCreateInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbMemCreate_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbMemDestroy(struct fbMemDestroy* inst);
_BUR_PUBLIC void fbMemCreate(struct fbMemCreate* inst);


#ifdef __cplusplus
};
#endif
#endif /* _NTMEM_ */

