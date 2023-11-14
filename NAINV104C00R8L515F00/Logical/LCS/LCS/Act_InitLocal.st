(** 2019-06-12 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_eLCSMngRcp_PLCStat ACCESS ADR(eLCSMngRcp_PLCStat);
	p_udiLCSMngRcp_PLCStatus ACCESS ADR(udiLCSMngRcp_PLCStatus);
	p_iLCSMngRcp_PLCIdxAct ACCESS ADR(iLCSMngRcp_PLCIdxAct);
	p_iLCSMngRcp_PLCIdxStat ACCESS ADR(iLCSMngRcp_PLCIdxStat);
	p_tyLCSMngRcp_PLCProdRcpInfo ACCESS ADR(tyLCSMngRcp_PLCProdRcpInfo);
	p_eLCSLF_PLCStat ACCESS ADR(eLCSLF_PLCStat);
	p_udiLCSLF_PLCStatus ACCESS ADR(udiLCSLF_PLCStatus);
	p_bLCSMngRcpChkLmt ACCESS ADR(bLCSMngRcpChkLmt);
	p_bLCSLFChkLmt ACCESS ADR(bLCSLFChkLmt);
	p_bOpsRun ACCESS ADR(bOpsRun);
	p_bError ACCESS ADR(bError);
	p_bWarning ACCESS ADR(bWarning);
	p_bInfo ACCESS ADR(bInfo);
	p_bUIManual ACCESS ADR(bUIManual);
	p_tyProdRcpCurrRcp ACCESS ADR(tyProdRcpCurrRcp);
	p_tyNtParamCurr ACCESS ADR(tyNtParamCurr);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
