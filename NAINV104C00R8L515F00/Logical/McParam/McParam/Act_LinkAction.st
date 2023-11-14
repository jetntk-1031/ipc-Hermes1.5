(** 2019-03-29 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupMcParamAct;
	ELSE
		p_eAct ACCESS p_UIMcParamAct;
	END_IF
	
END_ACTION
