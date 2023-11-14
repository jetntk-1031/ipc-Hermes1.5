(** 2019-06-28 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	p_eLinkMcParamUSCommMod ACCESS p_McParamUSCommMod;
	
	p_eLinkConvDir ACCESS p_NtParamProjConvDir;
	p_bLinkDILeftSen ACCESS p_DIConvLftSen;
	p_bLinkDIRightSen ACCESS p_DIConvRgtSen;
	
	p_bLinkOpsInvertStepInitDone ACCESS p_OpsInvertStepInitDone;	
	p_bLinkOpsRun ACCESS p_OpsRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamHermesPrep;
	p_tyParam ACCESS p_HermesUSParam1;
	p_sIPAddr ACCESS p_HWInfoIPAddr;
	p_tyDTStructure ACCESS p_TimeCurrDTStruct;
	p_dtCurrDT ACCESS p_TimeCurrDT;
	p_sMcId ACCESS p_McParamMcNm;
	p_sRecipeNm ACCESS p_ProdRcpCurrRcp0Nm;
	p_diWidthInUM ACCESS p_ProdRcpCurrRcp0Width;
	p_udiAliveIdleTimeInSec ACCESS p_NtParamUSHermesAliveTmInSec;
	p_tConnTimeOut ACCESS p_NtParamUSHermesConnTO;
	p_diTransferInTO ACCESS p_McParamTranInErrDlyTm;
	p_bInterruptSen ACCESS p_DIConvLftSen;
	p_bOpsRun ACCESS p_OpsRun;
	p_udiFileKeepDay ACCESS p_NtParamUSHermesFileKeepDay;
	p_sProgNm ACCESS p_NtParamUSHermesProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_bAccDataRdy ACCESS p_USHermesUSRdy;
	p_sRmtMcId ACCESS p_RmtHermesCurrentConfMcId;
	p_bRmtPrep ACCESS p_NtParamHermesRmtPrep;
	p_bRmtEn ACCESS p_McParamHermesRmtEn;
	pa_tyProdRcpList ACCESS p_ProdRcpCurrList;
	p_tyProdRcpCurrRcp ACCESS p_ProdRcpCurrRcp0;
	p_bMcParamMnlAccData ACCESS p_McParamMnlAccDat;
	p_bUIAccData ACCESS p_UIProdAccData;
	
	
	pa_tyHermesDSParam ACCESS pa_HermesDSParam;
	
	
	p_bHermesSwitchtoRvrseTransport ACCESS p_HermesSwitchtoReverseTransport;//p_USHermes2SwitchtoReverseRcv;
	//Query Board Info
	p_bTransportFinished ACCESS p_DSHermesTransportFinish ;
	p_bQueryBoardInfo ACCESS p_UIQueryBoardInfo;
	p_bManualInsertZoneHvBrd ACCESS p_ConvHvBrd; //insert zone (can input conv or ouput conv)
	p_bManualInsertEndSen ACCESS p_DIConvRgtSen; 
	p_bConvHvBrd ACCESS p_ConvHvBrd; //first zone
	//Reverse Machine Ready
	//p_bReceiveReverseUSMcRdy ACCESS p_DSHermes2RcvReverseUSMcRdy;
	
	
	
	(* Always Change If Project Change *)
	
END_ACTION
