/* Automation Studio generated header file */
/* Do not edit ! */
/* NtStepper 5.00.0 */

#ifndef _NTSTEPPER_
#define _NTSTEPPER_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtStepper_VERSION
#define _NtStepper_VERSION 5.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG4
		#include "Acp10_MC.h"
#endif
#ifdef _SG3
		#include "Acp10_MC.h"
#endif
#ifdef _SGC
		#include "Acp10_MC.h"
#endif

/* Datatypes and datatypes of function blocks */
typedef enum StepperControlStepEnum
{	StepperControlStepClear = 0,
	StepperControlStepInitial = 1,
	StepperControlStepHoming = 2,
	StepperControlStepReady = 3,
	StepperControlStepRun = 4,
	StepperControlStepSettling = 5,
	StepperControlStepError = 6,
	StepperControlStepStop = 7
} StepperControlStepEnum;

typedef struct DS1319StepperControl
{
	/* VAR_INPUT (analog) */
	unsigned long DS1319AddressIn;
	unsigned char HomeModeIn;
	float StepperSpeedIn;
	float StepperAccIn;
	float StepperDecIn;
	unsigned char StepperDirIn;
	float StepperTargetPositionIn;
	plcstring AxisNameIn[81];
	unsigned short StepperSettlingTimeIn;
	/* VAR_OUTPUT (analog) */
	float StepperCurrentPosOut;
	signed short StepperStatusCodeOut;
	plcstring StepperStatusDescriptionOut[256];
	enum StepperControlStepEnum StepperControlStep;
	/* VAR (analog) */
	struct MC_BR_JogVelocity MC_BR_JogVelocity_0;
	struct MC_Power MC_Power_0;
	struct MC_Home MC_Home_0;
	struct MC_MoveAbsolute MC_MoveAbsolute_0;
	struct MC_MoveAdditive MC_MoveAdditive_0;
	struct MC_ReadActualPosition MC_ReadActualPosition_0;
	struct MC_Stop MC_Stop_0;
	struct MC_Reset MC_Reset_0;
	struct MC_BR_ReadParID MC_BR_ReadParID_0;
	struct MC_ReadAxisError MC_ReadAxisError_0;
	signed short DS1119StepperControlLoop;
	signed short TPStepperReadyOut;
	signed short StepperControlLoop;
	struct MC_MoveVelocity MC_MoveVelocity_0;
	plcstring VersionNo[81];
	struct TON StepperSettlingTimer;
	struct MC_BR_SetHardwareInputs MC_BR_SetHWInputs_0;
	/* VAR_INPUT (digital) */
	plcbit StepperOnIn;
	plcbit HomeReqIn;
	plcbit HomeReqDoneOut;
	plcbit JogPosReqIn;
	plcbit JogNegReqIn;
	plcbit AbsMoveReqIn;
	plcbit ResetReqIn;
	plcbit StopReqIn;
	plcbit OTFCParReqIn;
	plcbit OTFCParReqDoneOut;
	plcbit StepperSettlingDone;
	plcbit HomeSwitch;
	plcbit PosHWSwitchIn;
	plcbit NegHWSwitchIn;
	/* VAR (digital) */
	plcbit StepperReadyOut;
	plcbit OTFCParReqInLatch;
	plcbit zzEdge00000;
} DS1319StepperControl_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DS1319StepperControl(struct DS1319StepperControl* inst);


#ifdef __cplusplus
};
#endif
#endif /* _NTSTEPPER_ */

