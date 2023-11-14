(** 2019-03-25 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_tyInfoIn ACCESS p_UIUsrMgmtInfoIn;
	p_tyAccessRightLvl1 ACCESS p_UIUsrMgmtAccessRightLvl1Wr;
	p_tyAccessRightLvl2 ACCESS p_UIUsrMgmtAccessRightLvl2Wr;
	p_tyAccessRightLvl3 ACCESS p_UIUsrMgmtAccessRightLvl3Wr;
	p_sProgNm ACCESS p_NtParamUsrMgmtProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
