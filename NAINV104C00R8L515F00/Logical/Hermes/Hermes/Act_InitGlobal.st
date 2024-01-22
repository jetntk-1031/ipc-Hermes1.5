(** 2019-05-04 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkStartupRun ACCESS p_StartupRun;
	
//	p_eLinkMcParamUSCommMod ACCESS p_McParamUSCommMod;
	p_bLinkUSHermesTransporting ACCESS p_USHermesTransporting;
	p_eLinkMcParamUSComm2Mod ACCESS p_McParamUSComm2Mod;

	

	
	p_bLinkOpsInvertStepInitDone ACCESS p_OpsInvertStepInitDone;
	p_bLinkOpsInvertStepEntToEnd ACCESS p_OpsInvertStepEntToEnd;
	p_bLinkOpsInvertStepEntToInOff ACCESS p_OpsInvertStepEntToInOff;
	p_bLinkOpsInvertStepExitBrd ACCESS p_OpsInvertStepExitBrd;
	p_bLinkConvHvBrd ACCESS p_OpsInvertHvBrd; //p_ConvHvBrd;//
	p_bLinkOpsInvertStepInvert ACCESS p_OpsInvertStepInvert;
	
	//p_tyUSHermestyBoardAvailable ACCESS p_USHermestyBoardAvailable;
	//Pass Data To Internal Use
	
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamHermesPrep;
	pa_tyUSParam ACCESS p_UIHermesUSParamWr;
	pa_tyDSParam ACCESS p_UIHermesDSParamWr;
	p_tySvyParam ACCESS p_UIHermesSvyParamWr; //HMI Svy Configure from UI
	p_tyRmtSetConfiguration ACCESS p_RmtHermesSetConfiguration; //US,DS SetConfigure from RmtHermes
	p_tySvySetConfiguration ACCESS p_SvyHermesSetConfiguration; //US,DS SetConfigure from SvyHermes
	





	
	//p_tySvySetConfiguration ACCESS p_SvyHermesSetConfiguration; //US,DS SetConfigure from SvyHermes
	p_bRmtPrep ACCESS p_NtParamHermesRmtPrep;
	p_bRmtEn ACCESS p_McParamHermesRmtEn;
	p_bSvyPrep ACCESS p_NtParamHermesSvyPrep;
	p_bSvyEn ACCESS p_McParamHermesSvyEn ;
	p_sRetainFileName1 ACCESS ADR(sRetainFileName1);
	p_sRetainFileName2 ACCESS ADR(sRetainFileName2);
	p_sRetainFileName3 ACCESS ADR(sRetainFileName3);
	p_sRetainFileName4 ACCESS ADR(sRetainFileName4);
	p_udiRetainDataAddr1 ACCESS ADR(udiRetainDataAddr1);
	p_udiRetainDataLen1 ACCESS ADR(udiRetainDataLen1);
	p_udiRetainDataAddr2 ACCESS ADR(udiRetainDataAddr2);
	p_udiRetainDataLen2 ACCESS ADR(udiRetainDataLen2);
	p_udiRetainDataAddr3 ACCESS ADR(udiRetainDataAddr3);
	p_udiRetainDataLen3 ACCESS ADR(udiRetainDataLen3);
	p_udiRetainDataAddr4 ACCESS ADR(udiRetainDataAddr4);
	p_udiRetainDataLen4 ACCESS ADR(udiRetainDataLen4);
	
	p_sConfigFileName ACCESS p_NtParamHermesConfigFileNm;
	p_sProgNm ACCESS p_NtParamHermesProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_bRmtHermesWriteConfig ACCESS p_RmtHermesWriteConfig; 
	p_bSvyHermesWriteConfig ACCESS p_SvyHermesWriteConfig; 
	p_bUISaveHMIConfigure ACCESS p_UISaveHMIConfigure; 
	p_bUISaveHMISvyConfig ACCESS p_UISaveHMISvyConfig; 
	p_sMcId ACCESS p_McParamMcNm;
	
	
	p_bRmtFoundIndexUS1 ACCESS p_RmtHermesFoundIndexUS1; 
	p_bRmtFoundIndexUS2 ACCESS p_RmtHermesFoundIndexUS2; 
	p_bRmtFoundIndexUS3 ACCESS p_RmtHermesFoundIndexUS3; 
	p_bRmtFoundIndexUS4 ACCESS p_RmtHermesFoundIndexUS4;
	p_bRmtFoundIndexDS1 ACCESS p_RmtHermesFoundIndexDS1; 
	p_bRmtFoundIndexDS2 ACCESS p_RmtHermesFoundIndexDS2; 
	p_bRmtFoundIndexDS3 ACCESS p_RmtHermesFoundIndexDS3; 
	p_bRmtFoundIndexDS4 ACCESS p_RmtHermesFoundIndexDS4;
	p_udiRmtIndexUS1 ACCESS p_RmtHermesIndexUS1; 
	p_udiRmtIndexUS2 ACCESS p_RmtHermesIndexUS2; 
	p_udiRmtIndexUS3 ACCESS p_RmtHermesIndexUS3; 
	p_udiRmtIndexUS4 ACCESS p_RmtHermesIndexUS4;
	p_udiRmtIndexDS1 ACCESS p_RmtHermesIndexDS1; 
	p_udiRmtIndexDS2 ACCESS p_RmtHermesIndexDS2; 
	p_udiRmtIndexDS3 ACCESS p_RmtHermesIndexDS3; 
	p_udiRmtIndexDS4 ACCESS p_RmtHermesIndexDS4;
	
	p_bSvyFoundIndexUS1 ACCESS p_SvyHermesFoundIndexUS1; 
	p_bSvyFoundIndexUS2 ACCESS p_SvyHermesFoundIndexUS2; 
	p_bSvyFoundIndexUS3 ACCESS p_SvyHermesFoundIndexUS3; 
	p_bSvyFoundIndexUS4 ACCESS p_SvyHermesFoundIndexUS4;
	p_bSvyFoundIndexDS1 ACCESS p_SvyHermesFoundIndexDS1; 
	p_bSvyFoundIndexDS2 ACCESS p_SvyHermesFoundIndexDS2; 
	p_bSvyFoundIndexDS3 ACCESS p_SvyHermesFoundIndexDS3; 
	p_bSvyFoundIndexDS4 ACCESS p_SvyHermesFoundIndexDS4;
	p_udiSvyIndexUS1 ACCESS p_SvyHermesIndexUS1; 
	p_udiSvyIndexUS2 ACCESS p_SvyHermesIndexUS2; 
	p_udiSvyIndexUS3 ACCESS p_SvyHermesIndexUS3; 
	p_udiSvyIndexUS4 ACCESS p_SvyHermesIndexUS4;
	p_udiSvyIndexDS1 ACCESS p_SvyHermesIndexDS1; 
	p_udiSvyIndexDS2 ACCESS p_SvyHermesIndexDS2; 
	p_udiSvyIndexDS3 ACCESS p_SvyHermesIndexDS3; 
	p_udiSvyIndexDS4 ACCESS p_SvyHermesIndexDS4;
	
	
	
	
	//Command
	//Unlock Cover
	p_bNTParamUnlockCovPrep ACCESS p_NTParamUnlockCovPrep;
	p_bNTParamMachineSafetySig ACCESS p_NTParamMachineSafetySig;
	

	//route 
	p_bOpsInvertStepInitDone ACCESS p_OpsInvertStepInitDone;
	p_bOpsInvertHvBrd ACCESS p_OpsInvertHvBrd;
	(* Always Change If Project Change *)

	//action
	pa_usiMacAddr ACCESS p_HWInfoMacAddr;
	p_tyDTStructure ACCESS p_TimeCurrDTStruct;
END_ACTION
