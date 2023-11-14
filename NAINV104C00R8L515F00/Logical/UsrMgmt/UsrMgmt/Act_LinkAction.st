(** 2019-03-29 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupUsrMgmtAct;
	ELSE
		p_eAct ACCESS p_UIUsrMgmtAct;
	END_IF
	
END_ACTION
