(** 2019-03-29 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupMcParamAct;
	ELSIF p_bSvyHermesWriteConfig THEN 	//new for Hermes 1.3
		p_eAct ACCESS p_SvyHermesMcParamAct;
	ELSIF p_bRmtHermesWriteConfig THEN 	//new for Hermes 1.3
		p_eAct ACCESS p_RmtHermesMcParamAct;
	ELSE
		p_eAct ACCESS p_UIMcParamAct;
	END_IF
	
END_ACTION
