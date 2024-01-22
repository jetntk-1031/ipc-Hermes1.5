(** 2019-05-04 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	p_eLinkMcParamDSCommMod ACCESS p_McParamDSCommMod;
	
	p_eLinkConvDir ACCESS p_NtParamProjConvDir;
	p_bLinkConvGdBrd ACCESS p_ConvGdBrd;
	p_bLinkDILeftSen ACCESS p_DIConvLftSen;
	p_bLinkDIRightSen ACCESS p_DIConvRgtSen;
	p_bLinkConvHvBrd ACCESS p_OpsInvertHvBrd;
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamHermesPrep;
	p_tyParam ACCESS p_HermesDSParam1;
	p_sIPAddr ACCESS p_HWInfoIPAddr;
	pa_usiMacAddr ACCESS p_HWInfoMacAddr;
	p_tyDTStructure ACCESS p_TimeCurrDTStruct;
	p_dtCurrDT ACCESS p_TimeCurrDT;
	p_sMcId ACCESS p_McParamMcNm;
	p_sRecipeNm ACCESS p_ProdRcpCurrRcp0Nm;
	p_sRecipeZone1Nm ACCESS p_ProdRcpCurrRcp1Nm;
	//p_sWorkOrderId ACCESS p_SvyHermesWorkOrderId; //Work Order Id from SupervisoryHermes
	//p_sBatchId ACCESS p_SvyHermesBatchId; //Batch Id from SupervisoryHermes
	p_diWidthInUM ACCESS p_ProdRcpCurrRcp0Width;
	p_diWidthZone1InUM ACCESS p_ProdRcpCurrRcp1Width;
	p_udiAliveIdleTimeInSec ACCESS p_NtParamDSHermesAliveTmInSec;
	p_tConnTimeOut ACCESS p_NtParamDSHermesConnTO;
	p_diTransferInTO ACCESS p_McParamTranOutErrDlyTm;
	
	
	pa_tyXMLTableDataBrdAvl1stZ ACCESS p_HermesBrdAvlDataTable1stZ;
	p_iXMLTableDataBrdAvlTtlIdx1stZ ACCESS p_HermesBrdAvlDataTtlIdx1stZ;
	pa_tyXMLTableDataBrdAvl ACCESS p_HermesBrdAvlDataTableLastZ;
	p_iXMLTableDataBrdAvlTtlIdx ACCESS p_HermesBrdAvlDataTtlIdxLastZ;
	p_bNewBrdAvlFirstZone ACCESS p_HermesBrdAvlDataNewBrdAvl1stZ;
	p_bNewBrdAvlLastZone ACCESS p_HermesBrdAvlDataNewBrdAvlLastZ;
	p_bOpsRun ACCESS p_OpsRun;
	p_bInterruptSen ACCESS p_DIConvRgtSen;
	p_udiFileKeepDay ACCESS p_NtParamDSHermesFileKeepDay;
	p_sRetainFileName ACCESS p_NtParamDSHermesRetainFileNm;
	p_sProgNm ACCESS p_NtParamDSHermesProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_sRmtMcId ACCESS p_RmtHermesCurrentConfMcId;
	p_bRmtPrep ACCESS p_NtParamHermesRmtPrep;
	p_bRmtEn ACCESS p_McParamHermesRmtEn;
		
	
	
	p_bUSHermesStopTransport ACCESS p_USHermesStopTransportSnd;
	
	
	
	p_tyUSHermestyBoardAvailable ACCESS p_USHermestyBoardAvailable;
	p_bNtParamProjInvertOncePrep ACCESS p_NtParamProjInvertOncePrep;
	p_bNtParamProjInvertTwicePrep ACCESS p_NtParamProjInvertTwicePrep;
	
	
	
	
	
	//for reverse condition
	//p_bUSHermesReverseDSSendBFId ACCESS p_USHermesReverseDSSendBFId;
	//p_bUSHermesProcessRouteTrigger ACCESS p_USHermesProcessRouteTrigger;
	p_usiUSHermesReverseDSSendBFId ACCESS p_HermesReverseDS1SendBFId;//p_USHermes2ReverseDSSendBFId;
	p_bUSHermesProcessRouteTrigger ACCESS p_USHermes2ProcessRouteTrigger;
	p_tySvyHermesSendWorkOrderInfo ACCESS p_SvyHermesSendWorkOrderInfo; //SvyRcvBoardInfo from Supervisor, used to generate B.A for inserted PCB    
	pa_RevtyXMLTableDataBrdAvl  ACCESS p_USHermesTableDataBrdAvl;
	p_ReviXMLTableDataBrdAvlTtlIdx ACCESS  p_USHermesTableDataBrdAvlTtlIdx;
	
	
	//BoardForecast
	p_tyUSBoardArrivedData  ACCESS p_USHermesBoardArrivedData;
	//Board Available
	
	p_bRcvBoardInfo ACCESS p_USHermesRcvBoardInfoOk;
	p_tyBoardInfoData ACCESS p_USHermesBoardInfoData;
	
	
	p_bConvInitDone ACCESS p_OpsInvertStepInitConv;
	
	p_bHermesSwitchtoRvrseTransport ACCESS p_HermesSwitchtoReverseTransport;
	(* Always Change If Project Change *)
	
END_ACTION
