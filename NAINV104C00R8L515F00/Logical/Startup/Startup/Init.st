(** 2020-09-16 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To External Use
	p_StartupStat		:= ADR(eStat);
	p_StartupStatus		:= ADR(eStatus);
	p_StartupStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_StartupRun				:= ADR(bRun);
	p_StartupUsrFolderAct		:= ADR(eUsrFolderAct);
	p_StartupHWInfoAct			:= ADR(eHWInfoAct);
	p_StartupLibVerAct			:= ADR(eLibVerAct);
	p_StartupNtParamAct			:= ADR(eNtParamAct);
	p_StartupMcParamAct			:= ADR(eMcParamAct);
	p_StartupProdRcpAct			:= ADR(eProdRcpAct);
	p_StartupMpProdRcpAct		:= ADR(eMpProdRcpAct);
	p_StartupUsrMgmtAct			:= ADR(eUsrMgmtAct);
	p_StartupAlarmAct			:= ADR(eAlarmAct);
	p_StartupUIAct				:= ADR(eUIAct);
	p_StartupAWAct				:= ADR(eAWAct);
	p_StartupHermesAct			:= ADR(eHermesAct);
	p_StartupRmtHermesAct		:= ADR(eRmtHermesAct);
	p_StartupUSHermesAct		:= ADR(eUSHermesAct);
	p_StartupDSHermesAct		:= ADR(eDSHermesAct);
	p_StartupStep				:= ADR(eStartupStep1);
	p_StartupNtSettingsLoadDone	:= ADR(bNtSettingsLoadDone);
	p_StartupUISettingsLoadDone := ADR(bUISettingsLoadDone);
	p_StartupStepTxt			:= ADR(sStepTxt);
	
	p_StartupGetConfigDone			:= ADR(bGetConfigDone);
	p_StartupMismatchSetConfigDone	:= ADR(bMismatchSetConfigDone);
	
	(* Always Change If Project Change *)
	
END_PROGRAM