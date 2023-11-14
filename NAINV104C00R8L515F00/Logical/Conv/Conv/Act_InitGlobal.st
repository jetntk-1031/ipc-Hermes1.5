(** 2019-04-09 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;
	p_bLinkOpsSimu ACCESS p_SimuRun;
	
	p_bLinkUIBypsInitConv ACCESS p_UIOpsBypsInitConv;	
	p_eLinkMcParamUSCommMod ACCESS p_McParamUSCommMod;
	p_bLinkOpsInvertBrdInserted ACCESS p_OpsInvertBrdInserted;
	p_eLinkMcParamUSComm2Mod ACCESS p_McParamUSComm2Mod;
	p_bLinkOpsInvertOnceTwicePCBOut ACCESS p_OpsInvertOnceTwicePCBOut;
	p_usiLinkMcMod ACCESS p_ProdRcpCurrRcp0McMod;
	
	p_tyNtParamCurr ACCESS p_NtParamCurr;
		
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bManual ACCESS p_UIMnlMod;
	p_bOnDirMod ACCESS p_NtParamConvOnDirMod;
	p_diInitTm ACCESS p_McParamConvInitTm;
	p_diRevDlyTm ACCESS p_NtParamConvRevDlyTm;
	p_tMtrOffDlyTm ACCESS p_NtParamConvMtrOffDlyTm;
	p_diTxInTimeOut ACCESS p_McParamTranInErrDlyTm;
	p_diTxOutTimeOut ACCESS p_McParamTranOutErrDlyTm;
//	p_eDirection ACCESS p_NtParamProjConvDir;
	p_sProgNm ACCESS p_NtParamConvProgNm;
	p_bLeftSen ACCESS p_DIConvLftSen;
	p_bRightSen	ACCESS p_DIConvRgtSen;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
	//Routing
	p_bUSHermesDSRdy ACCESS p_USHermesDSRdy;
	p_bDSHermesUSRdy ACCESS  p_DSHermesUSRdy;
	p_bUSHermesReversalDSRdy ACCESS p_USHermes2DSRdy;
	p_bDSHermesReversalUSRdy ACCESS  p_DSHermes2USRdy;
END_ACTION
