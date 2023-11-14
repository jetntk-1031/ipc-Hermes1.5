(** 2020-08-06 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	p_bLinkOpsRun ACCESS p_OpsRun;
	p_bLinkOpsInvertStepInitDone ACCESS p_OpsInvertStepInitDone;
	p_bLinkConvHvBrd ACCESS p_OpsInvertHvBrd;
	p_eLinkOpsInvertCurrPos ACCESS p_OpsInvertInvertCurrPos;
	p_bLinkUSWidthChkSen ACCESS p_DIUSWidthChkSen;
	p_bLinkUSWidthChkSen1 ACCESS p_DIUSWidthChkSen1;
	p_bLinkDIInvertHomeSen ACCESS p_DIInvertHomeSen;
	p_bLinkDIInvertRemoteSen ACCESS p_DIInvertRemoteSen;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_sIPAddr ACCESS p_HWInfoIPAddr;
	p_sMcNm ACCESS p_McParamMcNm;
	p_bUSWidthChkPrep ACCESS p_NtParamUSWidthChkPrep;
	p_bUSWidthChkEn ACCESS p_McParamUSWidthChkEn;
//	p_bUSWidthChkSen ACCESS p_DIUSWidthChkSen;
	p_bDSWidthChkPrep ACCESS p_NtParamDSWidthChkPrep;
	p_bDSWidthChkEn ACCESS p_McParamDSWidthChkEn;
	p_bDSWidthChkSen ACCESS p_DIDSWidthChkSen;
	p_tyCurrProdRcp ACCESS p_ProdRcpCurrRcp1;
	p_tyInternalReqProdRcp ACCESS p_ProdRcpCurrRcp0; //Follower 1 Assign With Default Recipe
	p_bRlsBrd ACCESS p_UIRlsNewProd;
	p_sProgNm ACCESS p_NtParamFollower1ProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bWidth2Prep ACCESS p_NtParamLFWidth2Prep;
	
	// Add for remain last Loaded product after power cycle
	p_eProdRcpStat ACCESS p_ProdRcpStat; 
	p_eProdRcpStatus ACCESS p_ProdRcpStatus;
	p_eLinkUIProdRcpAct ACCESS p_UIProdRcpAct;
	p_tyProdRcpCurrRcpWr ACCESS p_UIProdRcpCurrRcpWr;
	
	(* Always Change If Project Change *)
END_ACTION
