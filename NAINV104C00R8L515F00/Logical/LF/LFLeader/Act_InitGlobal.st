(** 2020-08-06 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	p_bLinkNtParamLFPrep ACCESS p_NtParamLFPrep;
	p_bLinkNtParamLeaderMc ACCESS p_NtParamLeaderMc;
	p_bLinkNtParamLFUsrSetPrep ACCESS p_NtParamLFUsrSetPrep;
	p_bLinkMcParamLFLeaderMc ACCESS p_McParamLFLeaderMc;
	p_bLinkUILeaderRun ACCESS p_UILeaderRun;
	
	//Pass Data To Internal Use
	p_eAct ACCESS p_UILFLeaderAct;
	p_udiRstErr ACCESS p_RstErrReset;
	p_bEn ACCESS p_McParamLFEn;
	p_sReqProdRcpNm ACCESS p_ProdRcpCurrRcp0Nm;
//	p_diReqProdWidth ACCESS p_ProdRcpCurrRcp0Width;
	p_diBeforeOven ACCESS p_McParamLFMcIdxBeforeOven;
	p_diAfterOven ACCESS p_McParamLFMcIdxAfterOven;
	p_tOnlineChkDlyTm ACCESS p_NtParamLFLeaderOnlineChkDlyTm;
	p_tSetTmOffDlyTm ACCESS p_NtParamLFLeaderSetTmOffDlyTm;
	p_dtCurrDT ACCESS p_TimeCurrDT;
	pa_sLFIPAddr ACCESS p_McParamLFIPAddr;
	pa_bLFOnline ACCESS p_McParamLFOnline;
	p_sProgNm ACCESS p_NtParamLFLeaderProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_diBeforeOven2 ACCESS p_McParamLFMcIdxBeforeOven2;		// ADD
	p_diAfterOven2 ACCESS p_McParamLFMcIdxAfterOven2;		//
	
	p_bWidth2Prep ACCESS p_NtParamLFWidth2Prep;
	p_bLFSeqStayActive ACCESS p_McParamLFSeqStayActive;
	
	(* Always Change If Project Change *)
	
END_ACTION
