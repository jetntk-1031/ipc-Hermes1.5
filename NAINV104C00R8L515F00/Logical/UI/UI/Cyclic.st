(** 2019-03-29 **)
PROGRAM _CYCLIC
	
	IF bInitDone = FALSE THEN
		bInitDone	:= TRUE;
		
		Act_InitLocal;
		Act_InitGlobal;
		
	ELSIF bInitialDone = FALSE THEN
		bInitialDone	:= TRUE;
		
		Act_Initial;
		
	ELSE
		
		Act_LinkAction;
		Act_Action;
		Act_Main;
		Act_Background;
		
	END_IF
	
END_PROGRAM
