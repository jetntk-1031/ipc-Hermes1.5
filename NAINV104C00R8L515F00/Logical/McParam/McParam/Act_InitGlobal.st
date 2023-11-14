(** 2019-03-25 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_sFileName ACCESS p_NtParamMcParamFileNm;
	p_tyMcParamWr ACCESS p_UIMcParamWr;
	p_sProgNm ACCESS p_NtParamMcParamProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
