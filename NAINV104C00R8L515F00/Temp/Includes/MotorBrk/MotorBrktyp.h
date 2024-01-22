/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_75_
#define _BUR_1700031253_75_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eMotorBrkAction
{	MotorBrkActIdle,
	MotorBrkActCW,
	MotorBrkActCCW,
	MotorBrkActCCWSenToMidSen,
	MotorBrkActMidSenToCWSen,
	MotorBrkActCWSenToMidSen,
	MotorBrkActMidSenToCCWSen,
	MotorBrkActBrkRlsOn,
	MotorBrkActBrkRlsOff,
	MotorBrkActStop,
	MotorBrkActSetMtrSigOnOrCW,
	MotorBrkActSetMtrDirOrCCW,
	MotorBrkActSetMtrBrkRls,
	MotorBrkActRstMtrSigOnOrCW,
	MotorBrkActRstMtrDirOrCCW,
	MotorBrkActRstMtrBrkRls,
	MotorBrkActSetMtrAll,
	MotorBrkActRstMtrAll,
	MotorBrkActSetMtrDirOrCCW1,
	MotorBrkActRstMtrDirOrCCW1
} eMotorBrkAction;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/MotorBrk/MotorBrk.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_75_ */

