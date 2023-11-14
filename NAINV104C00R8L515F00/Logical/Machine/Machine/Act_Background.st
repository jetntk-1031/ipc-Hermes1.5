(** 2020-10-08 **)
ACTION Act_Background:
	
//	Thermal Signal
	IF (p_bOpsRun = TRUE AND p_bDIThermalPrtSig = FALSE AND p_tyNtParamCurr.tyDISettings.diThermalPrtSig<>0) AND (eStatus <> Error) THEN
		eStatus		:= Error;
		udiStatus	:= 10001;	//Thermal Protection Signal Not Activated
	END_IF
	
	IF (p_bOpsRun = TRUE AND p_bDIPressureSW = FALSE AND p_tyNtParamCurr.tyDISettings.diPressureSW<>0) AND (eStatus <> Error) THEN
		eStatus		:= Error;
		udiStatus	:= 10000;	//Pressure Switch Not Activated
	END_IF
	
//Reset Error
	IF (eStatus = Error) AND bRstErr THEN
		eStatus		:= Idle;
		udiStatus	:= 0;
	END_IF
	
END_ACTION
