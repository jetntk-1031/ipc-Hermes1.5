(** 2020-03-16 **)
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
		Act_Link;
		Act_Main;
		
		CASE p_eTLBuzMode OF
			TLBuzModNutek:
				Act_Background;
			TLBuzModAptiv:	
				Act_Background1;
			TLBuzModMEK:	
				Act_Background2;
			TLBuzModBHTC:	
				Act_Background3;
		END_CASE
		
	END_IF
	
END_PROGRAM
