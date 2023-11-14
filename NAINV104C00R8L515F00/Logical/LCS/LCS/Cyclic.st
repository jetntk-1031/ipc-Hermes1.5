(** 2019-04-30 **)
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
		
		Act_LinkEn;
		
		IF (p_bPrep = TRUE) AND (p_bEn = TRUE) AND (p_bDis = FALSE) THEN
			Act_Link;
			Act_Background;
		ELSE
			Act_Main_Disable;
			
			tyTagNm.udiStatus	:= 10000;	//LCS Disable
		END_IF
		
	END_IF
	
END_PROGRAM