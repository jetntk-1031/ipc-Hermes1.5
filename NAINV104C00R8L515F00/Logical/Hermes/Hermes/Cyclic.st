(** 2019-05-04 **)
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
			Act_Background_Route;
			Act_Link;
			Act_Background;
			Act_Main;
			Act_Background_Command;
			
		ELSE
			IF eStat <> HermesActIdle THEN
				eStatus	:= Done;
			ELSE
				eStatus	:= Idle;
			END_IF
		END_IF
		
		Act_Alarm;
		
	END_IF
	
END_PROGRAM
