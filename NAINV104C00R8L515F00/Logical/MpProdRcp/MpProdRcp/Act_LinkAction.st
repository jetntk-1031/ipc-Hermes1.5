(** 2019-04-28 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupMpProdRcpAct;
	ELSE
		p_eAct ACCESS p_UIMpProdRcpAct;
	END_IF
	
END_ACTION
