(** 2019-04-09 **)
ACTION Act_LinkAction:
	
	IF p_bLinkOpsRun = TRUE THEN
		p_eAct ACCESS p_OpsInvertConvAct;
	ELSIF p_bManual = TRUE THEN
		p_eAct ACCESS p_UIConvAct;
	ELSIF p_bLinkOpsSimu = TRUE THEN
		p_eAct ACCESS p_SimuInvConvAct;
		
	ELSE
		p_eAct ACCESS ADR(eAct);
	END_IF
	
END_ACTION
