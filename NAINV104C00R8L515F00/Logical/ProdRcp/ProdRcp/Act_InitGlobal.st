(** 2020-06-08 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	p_bLinkNtParamLCSManageRcpPrep ACCESS p_NtParamLCSManageRcpPrep;
	p_bLinkMcParamLCSManageRcpEn ACCESS p_McParamLCSManageRcpEn;
	p_eLinkLCSMngRcpProdRcpAct ACCESS p_LCSMngRcpProdRcpAct;
	p_eLinkUIProdRcpAct ACCESS p_UIProdRcpAct;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_dtCurrDT ACCESS p_TimeCurrDT;
	p_sSearch ACCESS p_UIProdRcpSearch;
	p_sScan ACCESS p_UIProdRcpScan;
	p_tyInfoIn ACCESS p_UIProdRcpInfoIn;
	p_tyCurrRcpWr ACCESS p_UIProdRcpCurrRcpWr;
	p_sListFileName ACCESS p_NtParamProdRcpListFileNm;
	p_sSingleFileName ACCESS p_NtParamProdRcpSingleFileNm;
	p_sProgNm ACCESS p_NtParamProdRcpProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bWidth2Prep ACCESS p_NtParamLFWidth2Prep;
	(* Always Change If Project Change *)
	
END_ACTION
