(** 2019-03-25 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_sSetIPAddr ACCESS p_UISetIPAddr;
	p_sSetSubnetMask ACCESS p_UISetSubnetMask;
	p_sDevice ACCESS p_NtParamHWInfoDevice;
	p_sProgNm ACCESS p_NtParamHWInfoProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_usiNetworkMod ACCESS p_UINetworkMode;
	(* Always Change If Project Change *)
	
END_ACTION
