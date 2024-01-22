(** 2019-05-04 **)
ACTION Act_LinkAction:
	
	IF p_bLinkStartupRun = TRUE THEN
		p_eAct ACCESS p_StartupHermesAct;
	ELSIF p_bSvyHermesWriteConfig THEN
		p_eAct ACCESS p_SvyHermesAct;
	ELSIF p_bRmtHermesWriteConfig THEN
		p_eAct ACCESS p_RmtHermesAct;
	ELSIF p_bUISaveHMIConfigure OR p_bUISaveHMISvyConfig THEN
		p_eAct ACCESS p_UIHermesAct;
	END_IF
	
END_ACTION
