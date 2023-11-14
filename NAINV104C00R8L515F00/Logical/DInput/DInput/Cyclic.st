(** 2019-03-22 **)
PROGRAM _CYCLIC
	
	IF bInitDone = FALSE THEN
		bInitDone	:= TRUE;
		
		Act_InitLocal;
		Act_InitGlobal;
		
	ELSIF bInitialDone = FALSE THEN
		bInitialDone	:= TRUE;
		
		Act_Initial;
		
	ELSE
		IF EDGEPOS(p_bHermesCmdInitialCompl) THEN
			Act_InitialCompl;
		END_IF
		Act_RstErr;
		Act_Background;
		Act_Alarm1;
		Act_Alarm2;
		
	END_IF
	
END_PROGRAM
