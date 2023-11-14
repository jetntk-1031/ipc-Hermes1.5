(** 2019-04-09 **)
ACTION Act_LinkAction:
	
	IF p_bLinkOpsRun = TRUE THEN
		p_eAct ACCESS p_OpsInvertDSSMEMAAct;
	ELSIF p_bManual = TRUE THEN
		p_eAct ACCESS p_UIDSSMEMAAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
	END_IF
	
END_ACTION
