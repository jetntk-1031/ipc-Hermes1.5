(** 2019-04-09 **)
ACTION Act_LinkAction:
	
	IF p_bLinkOpsRun = TRUE THEN
		p_eAct ACCESS p_OpsInvertInletShutterAct;
	ELSIF p_bLinkOpsSimu = TRUE THEN
		p_eAct ACCESS p_SimuInvInShutterAct;
	ELSIF p_bManual = TRUE THEN
		p_eAct ACCESS p_UIInShutterAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
	END_IF
	
END_ACTION
