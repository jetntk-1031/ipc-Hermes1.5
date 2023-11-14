
FUNCTION_BLOCK DS1319StepperControl
	VAR_INPUT
		DS1319AddressIn : UDINT;
		StepperOnIn : BOOL;
		HomeModeIn : USINT;
		StepperSpeedIn : REAL;
		StepperAccIn : REAL;
		StepperDecIn : REAL;
		StepperDirIn : USINT;
		StepperTargetPositionIn : REAL;
		HomeReqIn : BOOL;
		HomeReqDoneOut : BOOL;
		JogPosReqIn : BOOL;
		JogNegReqIn : BOOL;
		AbsMoveReqIn : BOOL;
		ResetReqIn : BOOL;
		StopReqIn : BOOL;
		AxisNameIn : STRING[80];
		OTFCParReqIn : BOOL;
		OTFCParReqDoneOut : BOOL;
		StepperSettlingTimeIn : UINT := 50;
		StepperSettlingDone : BOOL;
		HomeSwitch : BOOL;
		PosHWSwitchIn : BOOL;
		NegHWSwitchIn : BOOL;
	END_VAR
	VAR_OUTPUT
		StepperCurrentPosOut : REAL;
		StepperStatusCodeOut : INT := 9;
		StepperStatusDescriptionOut : STRING[255];
		StepperControlStep : StepperControlStepEnum;
	END_VAR
	VAR
		MC_BR_JogVelocity_0 : MC_BR_JogVelocity;
		MC_Power_0 : MC_Power;
		MC_Home_0 : MC_Home;
		MC_MoveAbsolute_0 : MC_MoveAbsolute;
		MC_MoveAdditive_0 : MC_MoveAdditive;
		MC_ReadActualPosition_0 : MC_ReadActualPosition;
		MC_Stop_0 : MC_Stop;
		MC_Reset_0 : MC_Reset;
		MC_BR_ReadParID_0 : MC_BR_ReadParID;
		MC_ReadAxisError_0 : MC_ReadAxisError;
		DS1119StepperControlLoop : INT;
		TPStepperReadyOut : INT;
		StepperControlLoop : INT;
		MC_MoveVelocity_0 : MC_MoveVelocity;
		VersionNo : STRING[80];
		StepperReadyOut : BOOL;
		OTFCParReqInLatch : BOOL;
		zzEdge00000 : BOOL;
		StepperSettlingTimer : TON;
		MC_BR_SetHWInputs_0 : MC_BR_SetHardwareInputs;
	END_VAR
END_FUNCTION_BLOCK
