(** 2019-04-28 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	pa_tyMpProdRcp ACCESS p_ProdRcpCurrList;
	p_sPVName ACCESS p_NtParamMpProdRcpPVNm;
	p_sFileName ACCESS p_NtParamMpProdRcpFileNm;
	p_sProgNm ACCESS p_NtParamMpProdRcpProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
