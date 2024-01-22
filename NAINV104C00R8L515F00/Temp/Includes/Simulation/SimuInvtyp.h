/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_80_
#define _BUR_1700031253_80_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eSimuInvRunStep
{	SimuInvStepNA,
	SimuInvStepChkCondition,
	SimuInvStepInvertHome,
	SimuInvStepInvertRemote,
	SimuInvStepConvToRightSen,
	SimuInvStepConvToLeftSen,
	SimuInvStepInitShutterCls,
	SimuInvStepInitStopperExt
} eSimuInvRunStep;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Simulation/SimuInv.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_80_ */

