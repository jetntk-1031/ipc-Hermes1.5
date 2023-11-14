(** 2019-04-09 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupNtParamAct;
	ELSE
		p_eAct ACCESS ADR(eAct);
	END_IF
	
END_ACTION
