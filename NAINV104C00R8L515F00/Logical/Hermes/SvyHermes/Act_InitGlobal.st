(** 2021-08-01 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamHermesPrep;
	p_tyParam ACCESS p_HermesSvyParam;
	p_sIPAddr ACCESS p_HWInfoIPAddr;
	pa_usiMacAddr ACCESS p_HWInfoMacAddr;
	p_tyDTStructure ACCESS p_TimeCurrDTStruct;
	p_dtCurrDT ACCESS p_TimeCurrDT;
	p_sMcId ACCESS p_McParamMcNm;
	p_sRecipeNm ACCESS p_ProdRcpCurrRcp0Nm;
	p_sMagazineId ACCESS p_UIMagazineId; 
	p_iSlotId ACCESS p_UIMagazineSlotId; 
	p_sBarcode ACCESS p_UIPCBBarcode; 
	p_udiAliveIdleTimeInSec ACCESS p_NtParamSvyHermesAliveTmInSec;
	p_tConnTimeOut ACCESS p_NtParamSvyHermesConnTO;
	p_diTransferInTO ACCESS p_McParamTranOutErrDlyTm;
	p_bNewBrdAvlLastZone ACCESS p_HermesBrdAvlDataNewBrdAvlLastZ;
	p_bOpsRun ACCESS p_OpsRun;
	p_udiFileKeepDay ACCESS p_NtParamSvyHermesFileKeepDay;
	p_sConfigFileName ACCESS p_NtParamSvyHermesConfigFileNm;
	p_sProgNm ACCESS p_NtParamSvyHermesProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_bSvyPrep ACCESS p_NtParamHermesSvyPrep; 
	p_bSvyEn ACCESS p_McParamHermesSvyEn;
	p_bQueryWorkOrderInfo ACCESS p_UIQueryWorkOrderInfo;
	p_bReinsertBrd ACCESS p_UIReinsertBrd;
	p_bInsertBoard ACCESS p_UIInsertBoard;
	p_tyHermesConfiguration ACCESS p_HermesConfiguration;
	p_bUSHermesStopTransport1 ACCESS p_USHermesStopTransportSnd; //Lane 1
//	p_bUSHermesStopTransport2 ACCESS p_USHermesStopTransportSnd2; //Lane 2, open up for specific machine
//	p_bUSHermesStopTransport3 ACCESS p_USHermesStopTransportSnd3; //Lane 3, open up for specific machine
//	p_bUSHermesStopTransport4 ACCESS p_USHermesStopTransportSnd4; //Lane 4, open up for specific machine
	p_tyUSBoardArrived1 ACCESS p_USHermesBoardArrivedData; //Lane 1
//	p_tyUSBoardArrived2 ACCESS p_USHermesBoardArrivedData2; //Lane 2, open up for specific machine
//	p_tyUSBoardArrived3 ACCESS p_USHermesBoardArrivedData3; //Lane 3, open up for specific machine
//	p_tyUSBoardArrived4 ACCESS p_USHermesBoardArrivedData4; //Lane 4, open up for specific machine
	p_bDSHermesTransportFinished1 ACCESS p_DSHermesTransportFinishedSnd;
//	p_bDSHermesTransportFinished2 ACCESS p_DSHermesTransportFinishedSnd2; //Lane 2, open up for specific machine
//	p_bDSHermesTransportFinished3 ACCESS p_DSHermesTransportFinishedSnd3; //Lane 3, open up for specific machine
//	p_bDSHermesTransportFinished4 ACCESS p_DSHermesTransportFinishedSnd4; //Lane 4, open up for specific machine
	p_tyDSBoardDeparted1 ACCESS p_DSHermesBoardDepartedData; //Lane 1
//	p_tyDSBoardDeparted2 ACCESS p_DSHermesBoardDepartedData2; //Lane 2, open up for specific machine
//	p_tyDSBoardDeparted3 ACCESS p_DSHermesBoardDepartedData3; //Lane 3, open up for specific machine
//	p_tyDSBoardDeparted4 ACCESS p_DSHermesBoardDepartedData4; //Lane 4, open up for specific machine
	p_eHermesStat ACCESS p_HermesStat;
	p_eHermesStatus ACCESS p_HermesStatus;
	p_eMcParamStat ACCESS p_McParamStat;
	p_eMcParamStatus ACCESS p_McParamStatus;
	p_bAllZonesEmpty ACCESS p_DSHermesAllZonesEmpty; //All zones empty. Before empty, cannot change current sWorkOrderId.
	p_bDeleteWorkOrder ACCESS p_UIDeleteWorkOrder; 
	p_bFirstMcIntheLine ACCESS p_NtParamHermesSvyFirstMc; //First machine in the line only can Query Work Order
	p_sRetainFileName ACCESS p_NtParamSvyHermesRetainFileNm;
	p_bHermesSvyQueryBoardInfo ACCESS p_NtParamHermesSvyQueryBoardInfo;
	p_bHermesReinsertBoard ACCESS p_NtParamHermesReinsertBoard;
	p_bConvRgtSen ACCESS p_DIConvRgtSen;
	p_bConvLftSen ACCESS p_DIConvLftSen;
	p_tyProdRcpCurrRcp ACCESS p_ProdRcpCurrRcp0;
	p_tyMcParamCurr	ACCESS p_McParamCurr;
	p_tyNtParamCurr	ACCESS p_NtParamCurr;
	p_eLinkMcParamDSCommMod ACCESS p_McParamDSCommMod;
	p_bAWWidthPosDiff ACCESS p_AWOpenWidthPosDiff;           //Add
	p_bOpsGConvStepEntBrd ACCESS p_OpsGConvStepEntBrd;
	p_bOpsGConvStepDSTmr ACCESS p_OpsGConvStepDSTmr;
	p_bOpsGConvStepDSCommTmr ACCESS p_OpsGConvStepDSCommTmr;
	

	//	p_bRemovedBoard ACCESS p_RemovedBoard;               //ADD
	(* Always Change If Project Change *)
END_ACTION
