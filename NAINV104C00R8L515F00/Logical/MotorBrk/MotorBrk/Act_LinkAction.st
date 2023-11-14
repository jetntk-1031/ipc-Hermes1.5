(** 2019-04-09 **)
ACTION Act_LinkAction:
	
	IF p_bLinkOpsRun = TRUE THEN
		p_eAct ACCESS p_OpsInvertInvertAct;
	ELSIF p_bLinkOpsSimu THEN
		p_eAct ACCESS p_SimuInvInvAct;
	ELSIF p_bManual = TRUE THEN
		p_eAct ACCESS p_UIInvertAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
	END_IF
	
END_ACTION
