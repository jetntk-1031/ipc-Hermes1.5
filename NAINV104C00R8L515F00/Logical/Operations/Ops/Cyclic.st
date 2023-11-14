(** 2019-03-29 **)
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
		Act_Link;
		Act_Main;
		
	END_IF
	
END_PROGRAM
