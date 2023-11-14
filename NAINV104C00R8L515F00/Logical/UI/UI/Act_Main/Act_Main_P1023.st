(** 2018-12-21 **)
ACTION Act_Main_P1023:
	
	//Machine Setting_Communicationm Control
	//Display
	tyP1023McSetHComm.tyUSSel.tyBtnHermes.uiRtStat.0	:= NOT p_tyNtParamCurr.bHermesPrep;
	tyP1023McSetHComm.tyDSSel.tyBtnHermes.uiRtStat.0	:= NOT p_tyNtParamCurr.bHermesPrep;
	
	tyP1023McSetHComm.tyUSSel2.tyBtnHermes.uiRtStat.0	:= NOT (p_tyNtParamCurr.bHermesPrep AND (p_tyNtParamCurr.bProjInvertOncePrep OR p_tyNtParamCurr.bProjInvertTwicePrep)) ;
	
	IF p_tyNtParamCurr.bUSExtSMEMAPrep = TRUE THEN
		tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx	:= 2;
		
	ELSIF p_tyNtParamCurr.bUSExtSMEMA2Prep = TRUE THEN
		tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueMaxIdx	:= 2;
	ELSE
		tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx	:= 1;
		tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueMaxIdx	:= 1;
	END_IF
	
	IF p_tyNtParamCurr.bDSExtSMEMAPrep = TRUE THEN
		tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx	:= 2;
	ELSE
		tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueMaxIdx	:= 1;
	END_IF
		
	//Parameter
	//Upstream
	CASE p_tyMcParamCurr.eUSComm OF
		McSetCommModSMEMA:
			tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue		:= TRUE;
			tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk		:= TRUE;
			tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue	:= FALSE;
			tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk		:= FALSE;
		McSetCommModHermes:
			tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue		:= FALSE;
			tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk		:= FALSE;
			tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue	:= TRUE;
			tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk		:= TRUE;
	END_CASE
	
	tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueIdx		:= UDINT_TO_USINT(p_tyMcParamCurr.tyUSCommSMEMA.eSelection);
	tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bValue				:= p_tyMcParamCurr.tyUSCommSMEMA.bStatSigSetGd;
	
	tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.diValue		:= TIME_TO_DINT(p_tyHermesConfiguration.a_tyUSParam[0].tSndAlive);
	tyP1023McSetHComm.tyUSHermes.tyNumLaneID.diValue			:= INT_TO_DINT(p_tyHermesConfiguration.a_tyUSParam[0].iLaneID);
	tyP1023McSetHComm.tyUSHermes.tyNumHostPort.diValue			:= UINT_TO_DINT(p_tyHermesConfiguration.a_tyUSParam[0].uiHostPort);
	tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sValue		:= p_tyHermesConfiguration.a_tyUSParam[0].sHostAddress;
	tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bValue	:= p_tyHermesConfiguration.a_tyUSParam[0].bFeatureCheckAliveResponse;
	tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bValue			:= p_tyHermesConfiguration.a_tyUSParam[0].bFeatureBoardForecast;
	tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bValue			:= p_tyHermesConfiguration.a_tyUSParam[0].bFeatureQueryBoardInfo;
	tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bValue			:= p_tyHermesConfiguration.a_tyUSParam[0].bFeatureCommand;
	
	tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bValue			:= p_tyHermesConfiguration.a_tyUSParam[0].bCmpTypeId;
	tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bValue			:= p_tyHermesConfiguration.a_tyUSParam[0].bCmpParam;
	tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bValue			:= p_tyHermesConfiguration.a_tyUSParam[0].bOverwrite;
	
	//Upstream 2
	CASE p_tyMcParamCurr.eUSComm2 OF
		McSetCommModSMEMA:
			tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue	:= TRUE;
			tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk		:= TRUE;
			tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue	:= FALSE;
			tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk	:= FALSE;
		McSetCommModHermes:
			tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue	:= FALSE;
			tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk		:= FALSE;
			tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue	:= TRUE;
			tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk	:= TRUE;
	END_CASE
	
	tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx	:= UDINT_TO_USINT(p_tyMcParamCurr.tyUSCommSMEMA2.eSelection);
	tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bValue				:= p_tyMcParamCurr.tyUSCommSMEMA2.bStatSigSetGd;
	
	tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.diValue		:= TIME_TO_DINT(p_tyHermesConfiguration.a_tyUSParam[1].tSndAlive);
	tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.diValue			:= INT_TO_DINT(p_tyHermesConfiguration.a_tyUSParam[1].iLaneID);
	tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.diValue			:= UINT_TO_DINT(p_tyHermesConfiguration.a_tyUSParam[1].uiHostPort);
	tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.sValue		:= p_tyHermesConfiguration.a_tyUSParam[1].sHostAddress;
	tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bValue	:= p_tyHermesConfiguration.a_tyUSParam[1].bFeatureCheckAliveResponse;
	tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bValue			:= p_tyHermesConfiguration.a_tyUSParam[1].bFeatureBoardForecast;
	tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bValue			:= p_tyHermesConfiguration.a_tyUSParam[1].bFeatureQueryBoardInfo;
	tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bValue			:= p_tyHermesConfiguration.a_tyUSParam[1].bFeatureCommand;

	
	tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bValue			:= p_tyHermesConfiguration.a_tyUSParam[1].bCmpTypeId;
	tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bValue			:= p_tyHermesConfiguration.a_tyUSParam[1].bCmpParam;
	tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bValue			:= p_tyHermesConfiguration.a_tyUSParam[1].bOverwrite;
	
	//Downstream
	CASE p_tyMcParamCurr.eDSComm OF
		McSetCommModSMEMA:
			tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue		:= TRUE;
			tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk		:= TRUE;
			tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue	:= FALSE;
			tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk		:= FALSE;
		McSetCommModHermes:
			tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue		:= FALSE;
			tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk		:= FALSE;
			tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue	:= TRUE;
			tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk		:= TRUE;
	END_CASE
	
	tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueIdx		:= UDINT_TO_USINT(p_tyMcParamCurr.tyDSCommSMEMA.eSelection);
	tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bValue				:= p_tyMcParamCurr.tyDSCommSMEMA.bStatSigSetGd;
	
	tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.diValue		:= TIME_TO_DINT(p_tyHermesConfiguration.a_tyDSParam[0].tSndAlive);
	tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.diValue			:= UINT_TO_DINT(p_tyHermesConfiguration.a_tyDSParam[0].uiSvrPort);
	tyP1023McSetHComm.tyDSHermes.tyNumLaneID.diValue			:= INT_TO_DINT(p_tyHermesConfiguration.a_tyDSParam[0].iLaneID);
	tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bValue	:= p_tyHermesConfiguration.a_tyDSParam[0].bFeatureCheckAliveResponse;
	tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bValue		:= p_tyHermesConfiguration.a_tyDSParam[0].bFeatureBoardForecast;
	tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bValue		:= p_tyHermesConfiguration.a_tyDSParam[0].bFeatureSendBoardInfo;
	tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bValue			:= p_tyHermesConfiguration.a_tyDSParam[0].bFeatureCommand;
	
	//DS 2
	CASE p_tyMcParamCurr.eDSComm2 OF
		McSetCommModSMEMA:
			tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue		:= TRUE;
			tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk		:= TRUE;
			tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue	:= FALSE;
			tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk		:= FALSE;
		McSetCommModHermes:
			tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue		:= FALSE;
			tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk		:= FALSE;
			tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue	:= TRUE;
			tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk		:= TRUE;
	END_CASE
	tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx		:= UDINT_TO_USINT(p_tyMcParamCurr.tyDSCommSMEMA2.eSelection);
	tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bValue				:= p_tyMcParamCurr.tyDSCommSMEMA2.bStatSigSetGd;
	
	tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.diValue		:= TIME_TO_DINT(p_tyHermesConfiguration.a_tyDSParam[1].tSndAlive);
	tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.diValue			:= UINT_TO_DINT(p_tyHermesConfiguration.a_tyDSParam[1].uiSvrPort);
	tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.diValue			:= INT_TO_DINT(p_tyHermesConfiguration.a_tyDSParam[1].iLaneID);
	tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bValue	:= p_tyHermesConfiguration.a_tyDSParam[1].bFeatureCheckAliveResponse;
	tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bValue		:= p_tyHermesConfiguration.a_tyDSParam[1].bFeatureBoardForecast;
	tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bValue		:= p_tyHermesConfiguration.a_tyDSParam[1].bFeatureSendBoardInfo;
	tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bValue			:= p_tyHermesConfiguration.a_tyDSParam[1].bFeatureCommand;
	
	
	
	//Upstream Downstream Selection
	tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx 	:= 0;
	tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx	:= 0;
	
	tyP1023McSetHComm.tyGen.tyDrpDnDSSel.uiRtStat.0				:= NOT (p_tyNtParamCurr.bProjInvertOncePrep AND p_tyNtParamCurr.bProjInvertTwicePrep);
	tyP1023McSetHComm.tyGen.tyDrpDnUSSel.uiRtStat.0				:= NOT (p_tyNtParamCurr.bProjInvertOncePrep AND p_tyNtParamCurr.bProjInvertTwicePrep);
	
END_ACTION
