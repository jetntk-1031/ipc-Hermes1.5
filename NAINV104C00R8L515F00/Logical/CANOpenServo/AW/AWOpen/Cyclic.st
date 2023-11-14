(** 2020-03-16 **)
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
		
		IF EDGEPOS(p_bDis = FALSE) THEN
			bModuleNotOK := TRUE;
		END_IF
			
		IF (p_bPrep = TRUE) AND (p_bEn = TRUE) AND (p_bDis = FALSE) THEN
			Act_Link;
			Act_Background;
			Act_Main;
		ELSE
			Act_Main_Disable;
			
			IF eStat <> AWActIdle THEN
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
		
	END_IF
	
END_PROGRAM
