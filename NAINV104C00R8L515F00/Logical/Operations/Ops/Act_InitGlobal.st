(** 2019-03-22 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bOpsInvertPaused ACCESS p_OpsInvertPaused;
	
	//Pass Data To Internal Use
	p_eAct ACCESS p_UIOpsAct;
	p_udiRstErr ACCESS p_RstErrReset;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
