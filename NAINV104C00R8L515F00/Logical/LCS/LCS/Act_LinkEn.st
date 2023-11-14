(** 2019-04-24 **)
ACTION Act_LinkEn:
	
	//Link bPrep, bEn & bDis
	p_bPrep	:= p_bLinkNtParamLCSLFPrep OR p_bLinkNtParamLCSManageRcpPrep OR p_bLinkNtParamLCSReqRcpPrep OR p_bLinkNtParamLCSLiveDatPrep;
	p_bEn	:= p_bLinkMcParamLCSLFEn OR p_bLinkMcParamLCSManageRcpEn OR p_bLinkMcParamLCSReqRcpEn OR p_bLinkMcParamLCSLiveDatEn;
	p_bDis	:= p_bLinkStartupRun;
	
END_ACTION
