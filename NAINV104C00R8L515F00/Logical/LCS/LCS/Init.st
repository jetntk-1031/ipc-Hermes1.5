(** 2019-04-24 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	
	//Alarm
	
	//Output
	p_LCS_LCSMngRcp_LCSAct			:= ADR(eLCSMngRcp_LCSAct);
	p_LCS_LCSMngRcp_LCSIdxAct		:= ADR(iLCSMngRcp_LCSIdxAct);
	p_LCS_LCSMngRcp_LCSIdxStat		:= ADR(iLCSMngRcp_LCSIdxStat);
	p_LCS_LCSMngRcp_LCSProdRcpInfo	:= ADR(tyLCSMngRcp_LCSProdRcpInfo);
	p_LCS_LCSLF_LCSAct				:= ADR(eLCSLF_LCSAct);
	p_LCS_LCSLF_LCSProdRcpInfo		:= ADR(tyLCSLF_LCSProdRcpInfo);
	p_LCSChkLmtOK					:= ADR(bChkLmtOK);
	p_LCSChkLmtNG					:= ADR(bChkLmtNG);
	p_LCSSectionLeaderEn			:= ADR(tyTagNm.bSectionLeaderEn);

	
	(* Always Change If Project Change *)
	
END_PROGRAM