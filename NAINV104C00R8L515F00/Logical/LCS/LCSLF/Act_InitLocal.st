(** 2019-06-28 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_tyCurrProdParam ACCESS ADR(tyCurrProdParam);
	p_bMnlAccData ACCESS ADR(bMnlAccData);
	p_bAccData ACCESS ADR(bAccData);
	p_tyLCSProdRcpInfo ACCESS ADR(tyLCSProdRcpInfo);
	p_bChkLmtOK ACCESS ADR(bChkLmtOK);
	p_bChkLmtNG ACCESS ADR(bChkLmtNG);
	p_bAccNewRcpCond ACCESS ADR(bAccNewRcpCond);
	p_bUpdtNewRcpCond ACCESS ADR(bUpdtNewRcpCond);
	p_bAutoUpdtData ACCESS ADR(bAutoUpdtData);
	p_bUIUpdtData ACCESS ADR(bUIUpdtData);
	p_sInfoMsg ACCESS ADR(sInfoMsg);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
