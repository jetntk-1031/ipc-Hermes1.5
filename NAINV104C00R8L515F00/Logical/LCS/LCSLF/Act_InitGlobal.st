(** 2019-05-07 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	p_eLinkMcParamUSCommMod ACCESS p_McParamUSCommMod;
	p_bLinkConvHvBrd ACCESS p_OpsInvertHvBrd;
	
	p_bLinkOpsRun ACCESS p_OpsRun;
	
	//Pass Data To Internal Use
	p_eAct ACCESS p_LCS_LCSLF_LCSAct;
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamLCSLFPrep;
	p_bEn ACCESS p_McParamLCSLFEn;
	p_tyCurrProdParam ACCESS p_ProdRcpCurrRcp0;
	p_bMnlAccData ACCESS p_McParamMnlAccDat;
	p_bAccData ACCESS p_UIProdAccData;
	p_tyLCSProdRcpInfo ACCESS p_LCS_LCSLF_LCSProdRcpInfo;
	p_bChkLmtOK ACCESS p_LCSChkLmtOK;
	p_bChkLmtNG ACCESS p_LCSChkLmtNG;
	p_sProgNm ACCESS p_NtParamLCSLFProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bUIBtnSectionLdr ACCESS P_UISectionLdr;
	p_bLCSSectionLeaderEn ACCESS p_LCSSectionLeaderEn;
	p_bMcParamSectionLdr ACCESS p_McParamSectionLeader;
	
	(* Always Change If Project Change *)
	
END_ACTION
