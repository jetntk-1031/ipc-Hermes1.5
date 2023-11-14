(** 2020-09-10 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_tyLinkDIAlmData1 ACCESS p_DIAlmData1;
	p_tyLinkDIAlmData2 ACCESS p_DIAlmData2;
	p_tyLinkUsrMgmtAlmData ACCESS p_UsrMgmtAlmData;
	p_tyLinkUSSMEMAAlmData ACCESS p_USSMEMAAlmData;
	p_tyLinkDSSMEMAAlmData ACCESS p_DSSMEMAAlmData;
	p_tyLinkUSSMEMA2AlmData ACCESS p_USSMEMA2AlmData;
	p_tyLinkMcParamAlmData ACCESS p_McParamAlmData;
	p_tyLinkNtParamAlmData ACCESS p_NtParamAlmData;
	p_tyLinkProdRcpAlmData ACCESS p_ProdRcpAlmData;
	p_tyLinkAWAlmData ACCESS p_AWOpenAlmData;
	p_tyLinkAWAlmData1 ACCESS p_AWOpenAlmData1;
	p_tyLinkAWAlmData2 ACCESS p_AWOpenAlmData2;
	p_tyLinkAWAlmData3 ACCESS p_AWOpenAlmData3;
	p_tyLinkMotorBrkAlmData ACCESS p_MotorBrkAlmData;
	p_tyLinkTimeAlmData	ACCESS p_TimeAlmData;
	p_tyLinkTimeAlmData1 ACCESS p_TimeAlmData1;
	p_tyLinkUsrFolderAlmData ACCESS p_UsrFolderAlmData;
	p_tyLinkLibVerAlmData ACCESS p_LibVerAlmData;
	p_tyLinkHWInfoAlmData ACCESS p_HWInfoAlmData;
	p_tyLinkConvAlmData ACCESS p_ConvAlmData;
	p_tyLinkMcAlmData ACCESS p_McAlmData;
	p_tyLinkMcAlmData1 ACCESS p_McAlmData1;
	p_tyLinkPneuNoSenStopperAlmData ACCESS p_PneuNoSenStopperAlmData;
	p_tyLinkPneuNoSenClampAlmData ACCESS p_PneuNoSenClampAlmData;
	p_tyLinkOpsInvertAlmData ACCESS p_OpsInvertAlmData;
	p_tyLinkOpsInvertAlmData1 ACCESS p_OpsInvertAlmData1;
	p_tyLinkHermesAlmData ACCESS p_HermesAlmData;
	p_tyLinkUSHermesAlmData ACCESS p_USHermesAlmData;
	p_tyLinkUSHermesAlmData1 ACCESS p_USHermesAlmData1;
	p_tyLinkUSHermesAlmData2 ACCESS p_USHermesAlmData2;
	p_tyLinkUSHermesAlmData3 ACCESS p_USHermesAlmData3;
	p_tyLinkUSHermesAlmData4 ACCESS p_USHermesAlmData4;
	p_tyLinkUSHermesAlmData5 ACCESS p_USHermesAlmData5;
	p_tyLinkUSHermesInfoData ACCESS p_USHermesInfoData;
	p_tyLinkDSHermesAlmData ACCESS p_DSHermesAlmData;
	p_tyLinkDSHermesAlmData1 ACCESS p_DSHermesAlmData1;
	p_tyLinkDSHermesAlmData2 ACCESS p_DSHermesAlmData2;
	p_tyLinkDSHermesAlmData3 ACCESS p_DSHermesAlmData3;
	p_tyLinkDSHermesAlmData4 ACCESS p_DSHermesAlmData4;
	p_tyLinkDSHermesInfoData ACCESS p_DSHermesInfoData;
	p_tyLinkLFLeaderAlmData ACCESS p_LFLeaderAlmData;
	p_tyLinkLFFollowerAlmData ACCESS p_LFFollowerAlmData;
	p_tyLinkLFFollowerInfoData ACCESS p_LFFollowerInfoData;
	p_tyLinkLFFollowerInfoData1 ACCESS p_LFFollowerInfoData1;
	p_tyLinkFollower1AlmData ACCESS p_Follower1AlmData;
	p_tyLinkFollower1InfoData ACCESS p_Follower1InfoData;
	p_tyLinkFollower1InfoData1 ACCESS p_Follower1InfoData1;
	p_tyLinkLCSMngRcpAlmData ACCESS p_LCSMngRcpAlmData;
	p_tyLinkLCSLFAlmData ACCESS p_LCSLFAlmData;
	p_tyLinkLCSLFInfoData ACCESS p_LCSLFInfoData;
	p_tyLinkMpProdRcpAlmData ACCESS p_MpProdRcpAlmData;
	p_tyLinkPneu2SenInShutterAlmData ACCESS p_Pneu2SenInShutterAlmData;
	p_tyLinkPneu2SenOutShuttrAlmData ACCESS p_Pneu2SenOutShutterAlmData;
	p_tyLinkPneu2SenClamp1AlmData ACCESS p_Pneu2SenClamp1AlmData;
	p_tyLinkPneu2SenClamp2AlmData ACCESS p_Pneu2SenClamp2AlmData;
	p_tyLinkPneu2SenClamp3AlmData ACCESS p_Pneu2SenClamp3AlmData;
	
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_eAct ACCESS p_StartupAlarmAct;
	p_dtCurrDT ACCESS p_TimeCurrDT;
	p_udiFileKeepDay ACCESS p_NtParamAlmFileKeepDay;
	p_sProgNm ACCESS p_NtParamAlmProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_bStartupUISettingsLoadDone ACCESS p_StartupUISettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
