(** 2019-06-10 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_tyParam ACCESS ADR(tyParam);
	p_sIPAddr ACCESS ADR(sIPAddr);
	pa_usiMacAddr ACCESS ADR(a_usiMacAddr);
	p_tyDTStructure ACCESS ADR(tyDTStructure);
	p_dtCurrDT ACCESS ADR(dtCurrDT);
	p_bRdySnd ACCESS ADR(bRdySnd);
	p_bSndCompl ACCESS ADR(bSndCompl);
	p_bSndIncompl ACCESS ADR(bSndInCompl);
	p_bSndNotStart ACCESS ADR(bSndNotStart);
	p_bBAWidthEn ACCESS ADR(bBAWidthEn);
	p_bBASltEn ACCESS ADR(bBASltEn);
	p_bBFWidthEn ACCESS ADR(bBFWidthEn);
	p_bBFSltEn ACCESS ADR(bBFSltEn);
	p_sMcId ACCESS ADR(sMcId);
	p_sInterfaceId ACCESS ADR(sInterfaceId);
	p_sVersion ACCESS ADR(sVersion);
	p_eFailedBoard ACCESS ADR(eFailedBoard);
	p_sRecipeNm ACCESS ADR(sRecipeNm);
	p_eFlippedBoard ACCESS ADR(eFlippedBoard);
	p_sTopBarcode ACCESS ADR(sTopBarcode);
	p_sBottomBarcode ACCESS ADR(sBottomBarcode);
	p_rLength ACCESS ADR(rLength);
	p_rThickness ACCESS ADR(rThickness);
	p_rConveyorSpeed ACCESS ADR(rConveyorSpeed);
	p_rTopClearanceHeight ACCESS ADR(rTopClearanceHeight);
	p_rBottomClearanceHeight ACCESS ADR(rBottomClearanceHeight);
	p_rWeight ACCESS ADR(rWeight);
	p_sWorkOrderId ACCESS ADR(sWorkOrderId);
	p_sBatchId ACCESS ADR(sBatchId);
	p_diWidthInUM ACCESS ADR(diWidthInUM);
	p_diMinSltValue ACCESS ADR(diMinSltValue);
	p_diMaxSltValue ACCESS ADR(diMaxSltValue);
	p_diPitch ACCESS ADR(diPitch);
	p_diTtlSlt ACCESS ADR(diTtlSlt);
	p_diSltToSltInUM ACCESS ADR(diSltToSltInUM);
	p_udiSndBffrSize ACCESS ADR(udiSndBffrSize);
	p_udiRcvBffrSize ACCESS ADR(udiRcvBffrSize);
	p_udiAliveIdleTimeInSec ACCESS ADR(udiAliveIdleTimeInSec);
	p_tConnTimeOut ACCESS ADR(tConnTimeOut);
	p_diTransferInTO ACCESS ADR(diTransferInTO);
	pa_tyXMLTableDataBrdAvl ACCESS ADR(a_tyXMLTableDataBrdAvl);
	p_iXMLTableDataBrdAvlTtlIdx ACCESS ADR(iXMLTableDataBrdAvlTtlIdx);
	p_bNewBrdAvlFirstZone ACCESS ADR(bNewBrdAvl);
	p_bOpsRun ACCESS ADR(bOpsRun);
	p_bInterruptSen ACCESS ADR(bInterruptSen);
	p_udiFileKeepDay ACCESS ADR(udiFileKeepDay);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_sRmtMcId ACCESS ADR(sRmtMcId);
	p_bRmtPrep ACCESS ADR(bRmtPrep);
	p_bRmtEn ACCESS ADR(bRmtEn);
	p_bInternalUse ACCESS ADR(bInternalUse);
	p_sInternalRcv ACCESS ADR(sInternalRcv);
	p_eFlippedBoard ACCESS ADR(eFlippedBoard);
	p_tyUSHermestyBoardAvailable ACCESS ADR(tyUSHermestyBoardAvailable);
	p_bManualInsertData ACCESS ADR (bDummy);
	//p_bManualInsertData  ACCESS p_ManualInsertData;
	p_rMcCycleTm ACCESS ADR(rMachineCycleTime);
	p_rAWCycleTm ACCESS ADR(rAWCycleTm);
	//Route 
	p_bProcessRouteEn ACCESS ADR(bProcessRouteEn);
	p_bManualRmvRoute ACCESS ADR(bManualRmvRoute);
	p_bReturnRoute ACCESS ADR(bReturnRoute);
	p_bNomRouteEn ACCESS ADR(bNomRouteEn);
	
	
	p_bReverseSentRoute ACCESS ADR(bReverseSentRoute);
	p_usiUSHermesReverseDSSendBFId ACCESS ADR(usiUSHermesReverseDSSendBFId);
	p_bUSHermesProcessRouteTrigger ACCESS ADR(bUSHermesProcessRouteTrigger);



END_ACTION
