(** 2020-08-06 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	p_eLinkMcParamUSCommMod ACCESS p_McParamUSCommMod;
	
	p_bLinkOpsRun ACCESS p_OpsRun;
	p_bLinkConvHvBrd ACCESS p_OpsInvertHvBrd;
	p_bLinkUSWidthChkSen ACCESS p_DIUSWidthChkSen;
	p_bLinkUSWidthChkSen1 ACCESS p_DIUSWidthChkSen1;
	p_bLinkDIInvertHomeSen ACCESS p_DIInvertHomeSen;
	p_bLinkDIInvertRemoteSen ACCESS p_DIInvertRemoteSen;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamLFPrep;
	p_bEn ACCESS p_McParamLFEn;
	p_sIPAddr ACCESS p_HWInfoIPAddr;
	p_sMcNm ACCESS p_McParamMcNm;
	p_bAWPrep ACCESS p_NtParamAWPrep;
	p_bAWDis ACCESS p_McParamAWDis;
	p_bMnlAccData ACCESS p_McParamMnlAccDat;
	p_bSectionLeader ACCESS p_McParamSectionLeader;
	p_diWidthLimit ACCESS p_NtParamLFWidthLimit;
	p_bUSWidthChkPrep ACCESS p_NtParamUSWidthChkPrep;
	p_bUSWidthChkEn ACCESS p_McParamUSWidthChkEn;
//	p_bUSWidthChkSen ACCESS p_DIUSWidthChkSen;
	p_bDSWidthChkPrep ACCESS p_NtParamDSWidthChkPrep;
	p_bDSWidthChkEn ACCESS p_McParamDSWidthChkEn;
	p_bDSWidthChkSen ACCESS p_DIDSWidthChkSen;
	p_bProdWidthChk ACCESS p_NtParamLFProdWidthChk;
	p_bUIProdAccData ACCESS p_UIProdAccData;
	p_bUIProdUpdtData ACCESS p_UIProdAccData;
	pa_tyProdRcpList ACCESS p_ProdRcpCurrList;
	p_tyCurrProdRcp ACCESS p_ProdRcpCurrRcp0;
	p_tyDispProdRcp ACCESS p_ProdRcpCurrRcp1;
	p_eTimeStat ACCESS p_TimeStat;
	p_eTimeStatus ACCESS p_TimeStatus;
	p_tyToLeaderProdRcp ACCESS p_Follower1UpdtProdRcp;	//Assign With Conveyor Last Zone (To Leader Completion Update)
	p_sProgNm ACCESS p_NtParamLFFollowerProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_tOnlineChkDlyTm ACCESS p_NtParamLFFllowerOnlineChkDlyTm;
	p_bManual ACCESS p_UIUIMnlMod;
	p_bErr ACCESS p_AlarmErr;
	p_bOps ACCESS p_OpsStatusRun;
	p_bStandby ACCESS p_OpsStatusStop;
	p_bWarning ACCESS p_AlarmWarning;
	p_eAWStat ACCESS p_AWOpenStat;
	p_bWidth2Prep ACCESS p_NtParamLFWidth2Prep;
	p_bDBAOnWOAlign ACCESS p_McParamDBAOnWOAlign;
	
	// Add for remain last Loaded product after power cycle
	p_eProdRcpStat ACCESS p_ProdRcpStat; 
	p_eProdRcpStatus ACCESS p_ProdRcpStatus;
	p_eLinkUIProdRcpAct ACCESS p_UIProdRcpAct;
	p_tyProdRcpCurrRcpWr ACCESS p_UIProdRcpCurrRcpWr;

	(* Always Change If Project Change *)
	
END_ACTION
