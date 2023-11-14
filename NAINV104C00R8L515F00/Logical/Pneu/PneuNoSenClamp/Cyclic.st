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
		Act_LinkEn;
		
		IF (p_bPrep = TRUE) AND (p_bEn = TRUE) AND (p_bDis = FALSE) THEN
			Act_Link;
			Act_Main;
		ELSE
			IF eStat <> PneuActIdle THEN
				IF eStat = PneuActSetExt OR eStat = PneuActExt THEN
					bExtended	:= TRUE;
					bRetracted	:= FALSE;
				ELSIF eStat = PneuActSetRet OR eStat = PneuActRet THEN
					bExtended	:= FALSE;
					bRetracted	:= TRUE;
				END_IF
				
				eStatus	:= Done;
			ELSE
				eStatus	:= Idle;
			END_IF
		END_IF
		
		Act_Alarm;
		
	END_IF
	
END_PROGRAM
