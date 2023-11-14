(** 2019-04-25 **)
ACTION Act_LinkEn:
	
	//Link bPrep, bEn & bDis
	p_bPrep	:= p_bLinkNtParamLFPrep;
	p_bDis	:= p_bLinkStartupRun OR (NOT p_bLinkNtParamLFUsrSetPrep AND NOT p_bLinkNtParamLeaderMc) OR (p_bLinkNtParamLFUsrSetPrep AND NOT p_bLinkMcParamLFLeaderMc);
	
END_ACTION
