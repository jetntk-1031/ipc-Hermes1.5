(** 2019-04-28 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	pa_tyMpProdRcp ACCESS ADR(a_tyMpProdRcp);
	p_tyMpProdRcpMpLink ACCESS ADR(tyMpProdRcpMpLink);
	p_sPVName ACCESS ADR(sPVName);
	p_sFileName ACCESS ADR(sFileName);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
