(** 2020-08-06 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_sReqProdRcpNm ACCESS ADR(sReqProdRcpNm);
	p_diReqProdWidth ACCESS ADR(diReqProdWidth);
	p_sReqMagRcpNm ACCESS ADR(sReqMagRcpNm);
	p_diBeforeOven ACCESS ADR(diBeforeOven);
	p_diAfterOven ACCESS ADR(diAfterOven);
	p_diBeforeOven2 ACCESS ADR(diBeforeOven2);
	p_diAfterOven2 ACCESS ADR(diAfterOven2);
	p_tOnlineChkDlyTm ACCESS ADR(tOnlineChkDlyTm);
	p_tSetTmOffDlyTm ACCESS ADR(tSetTmOffDlyTm);
	p_dtCurrDT ACCESS ADR(dtCurrDT);
	pa_sLFIPAddr ACCESS ADR(a_sLFIPAddr);
	pa_bLFOnline ACCESS ADR(a_bLFOnline);
	p_sLeaderProgTagNm ACCESS ADR(sLeaderProgTagNm);
	p_sFollowerProgTagNm ACCESS ADR(sFollowerProgTagNm);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_bWidth2Prep ACCESS ADR(bWidth2Prep);
//	p_bLFSeqStayActive ACCESS ADR(bLFSeqStayActive);
	
END_ACTION
