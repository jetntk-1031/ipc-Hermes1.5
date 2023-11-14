(** 2019-04-24 **)
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
			Act_Background;
			Act_Main;
			
		ELSE
			Act_Main_Disable;
			
			IF eStat <> LCSActIdle THEN
				eStatus			:= Done;
				udiPLCStatus	:= 10002;	//LCS Leader Follower Disabled
			ELSE
				eStatus	:= Idle;
			END_IF
		END_IF
		
		Act_Alarm;
		
	END_IF
	
END_PROGRAM
