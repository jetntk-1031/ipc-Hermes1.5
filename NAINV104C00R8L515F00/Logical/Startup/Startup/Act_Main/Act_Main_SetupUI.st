(** 2019-03-28 **)
ACTION Act_Main_SetupUI:

	CASE usiStep OF
		0:
			eUIAct	:= UIActInitial;
		
			IF (p_eUIStatus = Done) AND (p_eUIStat = UIActInitial) THEN
				
				eUIAct			:= UIActIdle;
				eStartupStep1	:= StartupStepDone;
				bUISettingsLoadDone := TRUE;
			ELSIF p_eUIStatus = Error THEN
				
				eUIAct			:= UIActIdle;
				eStartupStep1	:= StartupStepDone;
				bUISettingsLoadDone := TRUE;
			END_IF
		
	END_CASE
	
END_ACTION
