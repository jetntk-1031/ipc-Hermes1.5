/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_45_
#define _BUR_1700031252_45_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eConvAction
{	ConvActIdle,
	ConvActInit,
	ConvActInitRev,
	ConvActInitPshr,
	ConvActInitPuller,
	ConvActInitRej,
	ConvActInitInsp,
	ConvActEnt,
	ConvActEntToInOff,
	ConvActEntRev,
	ConvActRev,
	ConvActRevImmedStart,
	ConvActEntPuller,
	ConvActEntRej,
	ConvActEntInsp,
	ConvActPreExit,
	ConvActRejResume,
	ConvActExit,
	ConvActExit1,
	ConvActExitPshr,
	ConvActExit1Pshr,
	ConvActPshrSetAll,
	ConvActPshrRstAll,
	ConvActPshrSetExt,
	ConvActPshrSetRet,
	ConvActPshrExt,
	ConvActPshrRet,
	ConvActPullerSetAll,
	ConvActPullerRstAll,
	ConvActPullerSetExt,
	ConvActPullerSetRet,
	ConvActPullerExt,
	ConvActPullerRet,
	ConvActRotSetAll,
	ConvActRotRstAll,
	ConvActRotSetHome,
	ConvActRotSetRmt,
	ConvActRotHome,
	ConvActRotRemote,
	ConvActRejSetAll,
	ConvActRejRstAll,
	ConvActRejSetUp,
	ConvActRejSetDown,
	ConvActRejUp,
	ConvActRejDown,
	ConvActStop,
	ConvActStopPshr,
	ConvActStopPuller,
	ConvActStopRej,
	ConvActSetMtrSigOnOrLToR,
	ConvActSetMtrDirOrRToL,
	ConvActRstMtrSigOnOrLToR,
	ConvActRstMtrDirOrRToL,
	ConvActSetMtrAll,
	ConvActRstMtrAll
} eConvAction;

typedef enum eConvDir
{	ConvDirLToR,
	ConvDirRToL,
	ConvDirLToL,
	ConvDirRToR
} eConvDir;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_45_ */

