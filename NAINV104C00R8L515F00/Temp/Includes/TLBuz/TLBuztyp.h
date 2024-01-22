/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_17_
#define _BUR_1700031252_17_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eTLBuzAction
{	TLBuzActIdle,
	TLBuzActSetGreen,
	TLBuzActSetAmber,
	TLBuzActSetRed,
	TLBuzActSetWhite,
	TLBuzActSetBlue,
	TLBuzActSetBuz,
	TLBuzActRstGreen,
	TLBuzActRstAmber,
	TLBuzActRstRed,
	TLBuzActRstWhite,
	TLBuzActRstBlue,
	TLBuzActRstBuz,
	TLBuzActSetAll,
	TLBuzActRstAll
} eTLBuzAction;

typedef enum eTLBuzMod
{	TLBuzModNutek,
	TLBuzModMEK,
	TLBuzModBHTC,
	TLBuzModAptiv
} eTLBuzMod;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/TLBuz/TLBuz.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_17_ */

