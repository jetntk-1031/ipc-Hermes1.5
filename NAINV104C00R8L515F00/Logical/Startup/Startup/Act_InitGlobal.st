(** 2020-09-22 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	
	//Pass Data To Internal Use
	p_eAct ACCESS p_UIStartupAct;
	p_tyNtParamCurr ACCESS p_NtParamCurr;
	p_tyMcParamCurr ACCESS p_McParamCurr;
		
	p_bUIMismatchOverWriteConfig ACCESS p_UIMismatchOverWriteConfig;
	p_bUITempAddrFillDone ACCESS p_UITempAddrFillDone;
	p_bUIChgConfigDone ACCESS p_UIIPConfigChgDone;
	p_bUIOverwriteIP ACCESS p_UIOverwriteIP;
	p_bUIOverwriteSubnet ACCESS p_UIOverwriteSubnet;
	p_bUIOverwriteEthMode ACCESS p_UIOverwriteEthMode;
	
	p_eUsrFolderStat ACCESS p_UsrFolderStat;
	p_eUsrFolderStatus ACCESS p_UsrFolderStatus;
	
	p_eHWInfoStat ACCESS p_HWInfoStat;
	p_eHWInfoStatus ACCESS p_HWInfoStatus;
	p_sHWInfoIPAddr ACCESS p_HWInfoIPAddr;
	p_sHWInfoSubnetMask ACCESS p_HWInfoSubnetMask;
	p_udiHWInfoEthMode ACCESS p_HWInfoEthMode;
	
	p_eLibVerStat ACCESS p_LibVerStat;
	p_eLibVerStatus ACCESS p_LibVerStatus;
	
	p_eNtParamStat ACCESS p_NtParamStat;
	p_eNtParamStatus ACCESS p_NtParamStatus;
	
	p_eMcParamStat ACCESS p_McParamStat;
	p_eMcParamStatus ACCESS p_McParamStatus;
	
	p_eProdRcpStat ACCESS p_ProdRcpStat;
	p_eProdRcpStatus ACCESS p_ProdRcpStatus;
	
	p_eMpProdRcpStat ACCESS p_MpProdRcpStat;
	p_eMpProdRcpStatus ACCESS p_MpProdRcpStatus;
	
	p_eUsrMgmtStat ACCESS p_UsrMgmtStat;
	p_eUsrMgmtStatus ACCESS p_UsrMgmtStatus;
	
	p_eAlarmStat ACCESS p_AlarmStat;
	p_eAlarmStatus ACCESS p_AlarmStatus;
	
	p_eHermesStat ACCESS p_HermesStat;
	p_eHermesStatus ACCESS p_HermesStatus;
	
	p_eRmtHermesStat ACCESS p_RmtHermesStat;
	p_eRmtHermesStatus ACCESS p_RmtHermesStatus;
	
	p_eSvyHermesStat ACCESS p_SvyHermesStat;//new for Hermes 1.3
	p_eSvyHermesStatus ACCESS p_SvyHermesStatus;//new for Hermes 1.3
	
	p_eUSHermesStat ACCESS p_USHermesStat;
	p_eUSHermesStatus ACCESS p_USHermesStatus;
	
	p_eDSHermesStat ACCESS p_DSHermesStat;
	p_eDSHermesStatus ACCESS p_DSHermesStatus;
	
	p_eAWStat ACCESS p_AWOpenStat;
	p_eAWStatus ACCESS p_AWOpenStatus;
	
	p_eUIStat ACCESS p_UIStat;
	p_eUIStatus ACCESS p_UIStatus;
	
	(* Always Change If Project Change *)
	
END_ACTION
