(** 2019-05-22 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	
	//Pass Data To Internal Use
	p_eAct ACCESS p_LFFollowerTimeAct;
	p_udiRstErr ACCESS p_RstErrReset;
	p_dtSetDT ACCESS p_LFFollowerSetDT;
	p_sProgNm ACCESS p_NtParamTimeProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
