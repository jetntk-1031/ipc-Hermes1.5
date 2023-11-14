(** 2019-06-12 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	p_bLinkNtParamLCSLFPrep ACCESS p_NtParamLCSLFPrep;
	p_bLinkNtParamLCSManageRcpPrep ACCESS p_NtParamLCSManageRcpPrep;
	p_bLinkNtParamLCSReqRcpPrep ACCESS p_NtParamLCSReqRcpPrep;
	p_bLinkNtParamLCSLiveDatPrep ACCESS p_NtParamLCSLiveDatPrep;
	p_bLinkMcParamLCSLFEn ACCESS p_McParamLCSLFEn;
	p_bLinkMcParamLCSManageRcpEn ACCESS p_McParamLCSManageRcpEn;
	p_bLinkMcParamLCSReqRcpEn ACCESS p_McParamLCSReqRcpEn;
	p_bLinkMcParamLCSLiveDatEn ACCESS p_McParamLCSLiveDatEn;
	p_tyLinkUpdtProdRcp ACCESS p_Follower1UpdtProdRcp;
	
	p_bLinkConvHvBrd ACCESS p_OpsInvertHvBrd;
	p_tyLinkAlarmCurrList ACCESS p_AlarmCurrList;
	
	//Pass Data To Internal Use
	p_eLCSMngRcp_PLCStat ACCESS p_LCSMngRcpStat;
	p_udiLCSMngRcp_PLCStatus ACCESS p_LCSMngRcp_PLCStatus;
	p_iLCSMngRcp_PLCIdxAct ACCESS p_LCSMngRcp_PLCIdxAct;
	p_iLCSMngRcp_PLCIdxStat ACCESS p_LCSMngRcp_PLCIdxStat;
	p_tyLCSMngRcp_PLCProdRcpInfo ACCESS p_LCSMngRcp_PLCProdRcpInfo;
	p_eLCSLF_PLCStat ACCESS p_LCSLFStat;
	p_udiLCSLF_PLCStatus ACCESS p_LCSLF_PLCStatus;
	p_bLCSMngRcpChkLmt ACCESS p_LCSMngRcpChkLmt;
	p_bLCSLFChkLmt ACCESS p_LCSLFChkLmt;
	p_bOpsRun ACCESS p_OpsRun;
	p_bError ACCESS p_AlarmErr;
	p_bWarning ACCESS p_AlarmWarning;
	p_bInfo ACCESS p_AlarmInfo;
	p_bUIManual ACCESS p_UIUIMnlMod;
	p_tyProdRcpCurrRcp ACCESS p_Follower1UpdtProdRcp;	//Assign With Conveyor Last Zone (Live Data Update)
	p_tyNtParamCurr ACCESS p_NtParamCurr;
	p_sProgNm ACCESS p_NtParamLCSProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
