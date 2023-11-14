(** 2019-04-24 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_eAct ACCESS p_LCS_LCSMngRcp_LCSAct;
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamLCSManageRcpPrep;
	p_bEn ACCESS p_McParamLCSManageRcpEn;
	p_bProdRcpNmExist ACCESS p_ProdRcpNmExist;
	p_bProdRcpNmNotExist ACCESS p_ProdRcpNmNotExist;
	p_bProdRcpNmEmpty ACCESS p_ProdRcpNmEmpty;
	p_bProdRcpListFull ACCESS p_ProdRcpListFull;
	pa_tyProdRcpCurrList ACCESS p_ProdRcpCurrList;
	p_tyProdRcpInfoOut ACCESS p_ProdRcpInfoOut;
	p_tyProdRcpCurrRcp ACCESS p_ProdRcpCurrRcp0;
	p_eProdRcpStat ACCESS p_ProdRcpStat;
	p_eProdRcpStatus ACCESS p_ProdRcpStatus;
	p_sMcParamProdSelRcpNm ACCESS p_ProdRcpCurrRcp0Nm;
	p_diMcParamProdSelWidth ACCESS p_ProdRcpCurrRcp0Width;
	p_iLCSIdxAct ACCESS p_LCS_LCSMngRcp_LCSIdxAct;
	p_iLCSIdxStat ACCESS p_LCS_LCSMngRcp_LCSIdxStat;
	p_tyLCSProdRcpInfo ACCESS p_LCS_LCSMngRcp_LCSProdRcpInfo;
	p_bChkLmtOK ACCESS p_LCSChkLmtOK;
	p_bChkLmtNG ACCESS p_LCSChkLmtNG;
	p_sProgNm ACCESS p_NtParamLCSMngRcpProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
