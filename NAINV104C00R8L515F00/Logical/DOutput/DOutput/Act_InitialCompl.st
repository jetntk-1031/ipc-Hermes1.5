(** 2018-12-10 **)
ACTION Act_InitialCompl:
	
	//Initial Completed
//	IF p_HermesUSCmdFeaturePause <> 0 THEN
		p_bHermesUSCmdFeaturePause ACCESS p_HermesUSCmdFeaturePause;
//	END_IF
//	IF p_HermesUSCmdPause <> 0  THEN
		p_tyHermesUSCmdPause ACCESS p_HermesUSCmdPause;
//	END_IF
//	IF p_HermesDSCmdFeaturePause <> 0 THEN
		p_bHermesDSCmdFeaturePause ACCESS p_HermesDSCmdFeaturePause;
//	END_IF
//	IF p_HermesDSCmdPause <> 0 THEN
		p_tyHermesDSCmdPause ACCESS p_HermesDSCmdPause;
//	END_IF
END_ACTION
