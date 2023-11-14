(** 2019-04-09 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link

		
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;

	p_bOpsRun ACCESS p_OpsRun;
	p_bDIThermalPrtSig ACCESS p_DIThermalPrtSig;
	p_bDIPressureSW ACCESS p_DIPressureSW;
	
	p_sProgNm ACCESS p_NtParamMcProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_tyNtParamCurr ACCESS p_NtParamCurr;
	
	(* Always Change If Project Change *)
	
END_ACTION
