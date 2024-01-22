/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_73_
#define _BUR_1700031253_73_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eInvertStep
{	InvertStepNA,
	InvertStepInitChkCondition,
	InvertStepInitInvertComplChk,
	InvertStepInitClampUnblk,
	InvertStepInitConvAwayLftSen,
	InvertStepInitConvAwayRgtSen,
	InvertStepInitStopperBlk,
	InvertStepInitConvTwdLftSen,
	InvertStepInitConvTwdRgtSen,
	InvertStepInitStopperUnblk,
	InvertStepInitConvToRgt,
	InvertStepInitInvRtrnConv,
	InvertStepInitShuttersInOutClose,
	InvertStepChkCondition,
	InvertStepShuttersInOutClose,
	InvertStepAWMov,
	InvertStepSafetyInOutClose,
	InvertStepShutterCloseWaitForSig,
	InvertStepChkShutterCond,
	InvertStepShuttersInOutOpen,
	InvertStepShuttersInOpenOutClose,
	InvertStepStopperPosChk,
	InvertStepStopperBlk,
	InvertStepStopperUnblk,
	InvertStepUSStandby,
	InvertStepUSTmr,
	InvertStepUSCommTmr,
	InvertStepEntToEnd,
	InvertStepEntToInOff,
	InvertStepStopperBlkAftEnt,
	InvertStepRev,
	InvertStepShuttersInClose,
	InvertStepInvertComplChk,
	InvertStepClampBlkBefInvert,
	InvertStepShuttersCloseBefInvert,
	InvertStepInvert,
	InvertStepInvalidPosRecoverBrd,
	InvertStepClampUnblkAftInvert,
	InvertStepStopperUnblkAftInvert,
	InvertStepPreExit,
	InvertStepDSInOutletShutterOpen,
	InvertStepOutletShutterOpen,
	InvertStepDSStandby,
	InvertStepDSTmr,
	InvertStepDSCommTmr,
	InvertShuttersInOutCloseBefInitR,
	InvertShuttersInOutCloseBefInit,
	InvertStepExitBrd,
	InvertStepPCBOut,
	InvertStepInvRtrnUSStandby,
	InvertStepInvRtrnUSTmr,
	InvertStepInvRtrnUSCommTmr,
	InvertStepInvRtrnEntToEnd,
	InvertStepInvRtrnEntToInOff,
	InvertStepShuttersInCloseOutOpen
} eInvertStep;

typedef enum eInvertPos
{	InvertCurrPosAtRemote,
	InvertCurrPosAtHome,
	InvertPosInvalid
} eInvertPos;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Operations/OpsInvert.typ\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_73_ */

