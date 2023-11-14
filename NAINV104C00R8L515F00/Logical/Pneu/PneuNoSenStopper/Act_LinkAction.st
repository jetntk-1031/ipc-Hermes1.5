(** 2019-04-09 **)
ACTION Act_LinkAction:
	
	IF p_bLinkOpsRun = TRUE THEN
		p_eAct ACCESS p_OpsInvertStopperAct;
	ELSIF p_bLinkOpsSimu = TRUE THEN
		p_eAct ACCESS p_SimuInvStopperAct;
	ELSIF p_bManual = TRUE THEN
		p_eAct ACCESS p_UIStopperAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
	END_IF
	
END_ACTION
