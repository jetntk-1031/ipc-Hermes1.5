(** 2019-05-04 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	pa_tyUSParam ACCESS ADR(a_tyUSParam);
	pa_tyDSParam ACCESS ADR(a_tyDSParam);
	p_tyRmtParam ACCESS ADR(tyRmtParam);
	p_tySvyParam ACCESS ADR(tySvyParam);
	p_tyRmtSetConfiguration ACCESS ADR(tyRmtSetConfiguration); 
	p_tySvySetConfiguration ACCESS ADR(tySvySetConfiguration); 
	
	p_bRmtPrep ACCESS ADR(bRmtPrep);
	p_bRmtEn ACCESS ADR(bRmtEn);
	p_bSvyPrep ACCESS ADR(bSvyPrep);
	p_bSvyEn ACCESS ADR(bSvyEn);
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
	
	p_sConfigFileName ACCESS ADR(sConfigFileName);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_bRmtHermesWriteConfig ACCESS ADR(bRmtHermesWriteConfig); 
	p_bSvyHermesWriteConfig ACCESS ADR(bSvyHermesWriteConfig);
	p_bUISaveHMIConfigure ACCESS ADR(bUISaveHMIConfigure);
	p_bUISaveHMISvyConfig ACCESS ADR(bUISaveHMISvyConfig);
	p_sMcId ACCESS ADR(sMcId);	
	
	p_bRmtFoundIndexUS1 ACCESS ADR(bRmtFoundIndexUS1); 
	p_bRmtFoundIndexUS2 ACCESS ADR(bRmtFoundIndexUS2); 
	p_bRmtFoundIndexUS3 ACCESS ADR(bRmtFoundIndexUS3); 
	p_bRmtFoundIndexUS4 ACCESS ADR(bRmtFoundIndexUS4);
	p_bRmtFoundIndexDS1 ACCESS ADR(bRmtFoundIndexDS1); 
	p_bRmtFoundIndexDS2 ACCESS ADR(bRmtFoundIndexDS2); 
	p_bRmtFoundIndexDS3 ACCESS ADR(bRmtFoundIndexDS3); 
	p_bRmtFoundIndexDS4 ACCESS ADR(bRmtFoundIndexDS4);
	p_udiRmtIndexUS1 ACCESS ADR(udiRmtIndexUS1); 
	p_udiRmtIndexUS2 ACCESS ADR(udiRmtIndexUS2); 
	p_udiRmtIndexUS3 ACCESS ADR(udiRmtIndexUS3); 
	p_udiRmtIndexUS4 ACCESS ADR(udiRmtIndexUS4);
	p_udiRmtIndexDS1 ACCESS ADR(udiRmtIndexDS1); 
	p_udiRmtIndexDS2 ACCESS ADR(udiRmtIndexDS2); 
	p_udiRmtIndexDS3 ACCESS ADR(udiRmtIndexDS3); 
	p_udiRmtIndexDS4 ACCESS ADR(udiRmtIndexDS4);
	
	p_bSvyFoundIndexUS1 ACCESS ADR(bSvyFoundIndexUS1); 
	p_bSvyFoundIndexUS2 ACCESS ADR(bSvyFoundIndexUS2); 
	p_bSvyFoundIndexUS3 ACCESS ADR(bSvyFoundIndexUS3); 
	p_bSvyFoundIndexUS4 ACCESS ADR(bSvyFoundIndexUS4);
	p_bSvyFoundIndexDS1 ACCESS ADR(bSvyFoundIndexDS1); 
	p_bSvyFoundIndexDS2 ACCESS ADR(bSvyFoundIndexDS2); 
	p_bSvyFoundIndexDS3 ACCESS ADR(bSvyFoundIndexDS3); 
	p_bSvyFoundIndexDS4 ACCESS ADR(bSvyFoundIndexDS4);
	
	p_udiSvyIndexUS1 ACCESS ADR(udiSvyIndexUS1); 
	p_udiSvyIndexUS2 ACCESS ADR(udiSvyIndexUS2); 
	p_udiSvyIndexUS3 ACCESS ADR(udiSvyIndexUS3); 
	p_udiSvyIndexUS4 ACCESS ADR(udiSvyIndexUS4);
	p_udiSvyIndexDS1 ACCESS ADR(udiSvyIndexDS1); 
	p_udiSvyIndexDS2 ACCESS ADR(udiSvyIndexDS2); 
	p_udiSvyIndexDS3 ACCESS ADR(udiSvyIndexDS3); 
	p_udiSvyIndexDS4 ACCESS ADR(udiSvyIndexDS4);

	p_bReverseReceiveRoute ACCESS ADR(bReverseReceiveRoute);
	p_bReverseSentRoute ACCESS ADR(bReverseSendRoute);
	
	p_bManualRmvRoute ACCESS ADR(bManualRmvRoute);
	p_bReturnRoute ACCESS ADR(bReturnRoute);
	p_bNomRouteEn ACCESS ADR(bNomRouteEn);
END_ACTION
