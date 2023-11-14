(** 2020-09-10 **)
PROGRAM _CYCLIC
	
	IF bInitDone = FALSE THEN
		bInitDone	:= TRUE;
		
		Act_InitLocal;
		Act_InitGlobal;
		
	ELSIF bInitialDone = FALSE THEN
		IF p_bNtSettingsLoadDone = TRUE THEN
			bInitialDone	:= TRUE;
			
			Act_Initial;
		END_IF
		
	ELSE
		
		Act_RstErr;
		Act_LinkAction;
		Act_Action;
		Act_LinkEn;
		
		IF (p_bPrep = TRUE) AND (p_bEn = TRUE) AND (p_bDis = FALSE) THEN
			Act_Link;
			Act_Main;
			Act_Background;
		ELSE
			Act_Main_Disable;
			
			IF eStat <> HermesActIdle THEN
				eStatus	:= Done;
			ELSE
				eStatus	:= Idle;
			END_IF
		END_IF
		
		Act_CombineErr;
		Act_Alarm;
		Act_Alarm1;
		Act_Alarm2;
		Act_Alarm3;
		Act_Alarm4;
		Act_Alarm5;

		
	END_IF
	
END_PROGRAM
