(** 2019-03-29 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupHWInfoAct;
	ELSE
		p_eAct ACCESS p_UIHWInfoAct;
	END_IF
	
END_ACTION
