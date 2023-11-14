(** 2018-12-10 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	
	p_tyDISettings ACCESS p_NtParamDISettings;
	
	p_diConvLftSenOnTm ACCESS p_McParamConvLftSenOnTm;
	p_diConvLftSenOffTm ACCESS p_McParamConvLftSenOffTm;
	p_diConvRgtSenOnTm ACCESS p_McParamConvRgtSenOnTm;
	p_diConvRgtSenOffTm ACCESS p_McParamConvRgtSenOffTm;
	p_bRstErrSafetyRlyRst ACCESS p_RstErrSafetyRlyRst;
	p_sProgNm ACCESS p_NtParamDInputProgNm;
	
	//For BZ startup sound
	p_bLinkStartupRun ACCESS p_StartupRun; 
	p_bHermesCmdInitialCompl ACCESS p_HermesCmdInitialCompl; 

		
	(* Always Change If Project Change *)
	
END_ACTION
