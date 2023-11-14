(** 2019-04-24 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_bProdRcpNmExist ACCESS ADR(bProdRcpNmExist);
	p_bProdRcpNmNotExist ACCESS ADR(bProdRcpNmNotExist);
	p_bProdRcpNmEmpty ACCESS ADR(bProdRcpNmEmpty);
	p_bProdRcpListFull ACCESS ADR(bProdRcpListFull);
	pa_tyProdRcpCurrList ACCESS ADR(a_tyProdRcpCurrList);
	p_tyProdRcpInfoOut ACCESS ADR(tyProdRcpInfoOut);
	p_tyProdRcpCurrRcp ACCESS ADR(tyProdRcpCurrRcp);
	p_eProdRcpStat ACCESS ADR(eProdRcpStat);
	p_eProdRcpStatus ACCESS ADR(eProdRcpStatus);
	p_sMcParamProdSelRcpNm ACCESS ADR(sMcParamProdSelRcpNm);
	p_diMcParamProdSelWidth ACCESS ADR(diMcParamProdSelWidth);
	p_iLCSIdxAct ACCESS ADR(iLCSIdxAct);
	p_iLCSIdxStat ACCESS ADR(iLCSIdxStat);
	p_tyLCSProdRcpInfo ACCESS ADR(tyLCSProdRcpInfo);
	p_bChkLmtOK ACCESS ADR(bChkLmtOK);
	p_bChkLmtNG ACCESS ADR(bChkLmtNG);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
