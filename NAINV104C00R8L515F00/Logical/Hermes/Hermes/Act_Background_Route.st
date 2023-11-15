(** 2021-08-01 **)
ACTION Act_Background_Route:
	//Routing function
	//reverse route, input receiving 
	IF NOT(bSwitchtoReverseTransport) THEN 
		p_tyUSHermestyBoardAvailable ACCESS p_USHermestyBoardAvailable;
		p_tyDSHermesCurrBASnd ACCESS p_DSHermesBrdAvlSnd;
		p_tyUSRevHermesBFRcv  ACCESS p_USHermes2BrdForecast;
		p_bUSHermesBrdAvlRcved ACCESS p_USHermesBoardAvailableRcved;
		p_bUSRevHermesBrdForecastRcv ACCESS p_USHermes2BrdForecastRcv;
		p_bUSHermesStopTransport ACCESS p_USHermesStopTransportSent;
		p_tyUSHermesStopTransport ACCESS p_USHermesStopTransportSentMsg;
		p_bReceiveReverseUSMcRdy ACCESS p_DSHermesUSRdy;
		pa_tyLinkXMLTableDataBrdAvl ACCESS p_USHermesTableDataBrdAvl;
		p_iLinkXMLTableDataBrdAvlTtlIdx ACCESS p_USHermesTableDataBrdAvlTtlIdx;
		
		p_bUSCurrHermesBrdForecastRcv ACCESS p_USHermesBrdForecastRcv;
		p_tyUSCurrHermesBFRcv ACCESS p_USHermesBrdForecast;
		
		
		p_bDSHermesTransportFinished ACCESS p_DSHermesTransportFinish ;
		p_tyDSHermesTransportFinished ACCESS p_DSHermesTransportFinishMsg;
		
		p_usiReverseDSSndBfWBrdID ACCESS ADR(usiReverseDS2SndBfWBrdID);
	ELSIF bSwitchtoReverseTransport THEN
		p_tyUSHermestyBoardAvailable ACCESS p_USHermes2tyBoardAvailable;
		p_tyDSHermesCurrBASnd ACCESS p_DSHermes2BrdAvlSnd;
		p_tyUSRevHermesBFRcv  ACCESS p_USHermesBrdForecast;
		p_bUSHermesBrdAvlRcved ACCESS p_USHermes2BoardAvailableRcved;
		p_bUSRevHermesBrdForecastRcv ACCESS  p_USHermesBrdForecastRcv;
		p_bUSHermesStopTransport ACCESS p_USHermes2StopTransportSent;
		p_tyUSHermesStopTransport ACCESS p_USHermes2StopTransportSentMsg;
		p_bReceiveReverseUSMcRdy ACCESS p_DSHermes2USRdy;
		pa_tyLinkXMLTableDataBrdAvl ACCESS p_USHermes2TableDataBrdAvl;
		p_iLinkXMLTableDataBrdAvlTtlIdx ACCESS p_USHermes2TableDataBrdAvlTtlIdx;
		
		p_bDSHermesTransportFinished ACCESS p_DSHermes2TransportFinish;
		p_tyDSHermesTransportFinished ACCESS p_DSHermes2TransportFinishMsg;
		
		p_bUSCurrHermesBrdForecastRcv ACCESS p_USHermes2BrdForecastRcv;
		p_tyUSCurrHermesBFRcv ACCESS p_USHermes2BrdForecast;
		
		p_usiReverseDSSndBfWBrdID ACCESS ADR(usiReverseDS1SndBfWBrdID); 
	END_IF
	usiReverseDS1SndBfWBrdID := 0;	
	usiReverseDS2SndBfWBrdID := 0;
	
	
	IF NOT(p_bReverseReceiveRoute) AND NOT(p_bReverseSentRoute) THEN 
		bSwitchtoReverseTransport := FALSE;
	ELSE
		IF p_bReverseReceiveRoute THEN //flipper on upstream
			//process Reverse Input
			IF  EDGEPOS(p_bUSRevHermesBrdForecastRcv AND p_tyDSHermesCurrBASnd.tyData.sBoardId = p_tyUSRevHermesBFRcv.tyData.sBoardId AND p_tyUSRevHermesBFRcv.tyData.sBoardId <> '' ) THEN 
				//bSwitchtoReverseTransport := NOT(bSwitchtoReverseTransport); //when to reset ReverseRcv back , if the BASnd not the same anymore 
				bReqReverseAfterTransptFinished := TRUE;
			ELSIF (EDGEPOS(p_bUSRevHermesBrdForecastRcv AND p_tyUSRevHermesBFRcv.tyData.sBoardId = '' )) THEN
				//OR EDGEPOS(tyMsgTypeRcv.bTransportFinished AND tyTransportFinished.tyData.eTransferState = HermesTransferStateComplete )
				 bReqReverseAfterTransptFinished := FALSE;
			//	bSwitchtoReverseTransport := NOT(bSwitchtoReverseTransport);
			END_IF 
			IF bReqReverseAfterTransptFinished AND EDGEPOS(p_bDSHermesTransportFinished AND p_tyDSHermesTransportFinished.tyData.eTransferState  = HermesTransferStateComplete) THEN
				bReqReverseAfterTransptFinished := FALSE;
				bPrevReversalCondition := bSwitchtoReverseTransport;
				bSwitchtoReverseTransport := NOT(bSwitchtoReverseTransport);
			ELSIF bPrevReversalCondition <> bSwitchtoReverseTransport AND EDGEPOS(p_bUSCurrHermesBrdForecastRcv AND p_tyUSCurrHermesBFRcv.tyData.sBoardId = '' ) THEN
				bSwitchtoReverseTransport := bPrevReversalCondition;
			END_IF
		END_IF
		IF p_bReverseSentRoute THEN //flipper on downstream
			//update Reverse Sent
			IF bStopTransportSucceed THEN
				bSelfReverseAfterTransptFinished := TRUE;
			END_IF
			
			//reset when complete transport or initial run but no board 
			IF bBFWithoutBoardID THEN
				bBFWithoutBoardID := FALSE;
				p_usiReverseDSSndBfWBrdID := 2;
			END_IF
			
			IF bSelfReverseAfterTransptFinished AND  EDGEPOS(p_bDSHermesTransportFinished AND p_tyDSHermesTransportFinished.tyData.eTransferState  = HermesTransferStateComplete) THEN
				bSelfReverseAfterTransptFinished	:= FALSE;
				bSwitchtoReverseTransport := NOT(bSwitchtoReverseTransport);
			ELSIF bSelfReverseAfterTransptFinished AND EDGEPOS(p_bOpsInvertStepInitDone AND NOT(p_bOpsInvertHvBrd)) THEN 
				bSelfReverseAfterTransptFinished	:= FALSE;
				bSwitchtoReverseTransport := NOT(bSwitchtoReverseTransport);
				bBFWithoutBoardID := TRUE;
			END_IF

		END_IF
	END_IF
	
	fbRstReverseRcvGate(IN:= bSwitchtoReverseTransport); //notifty to reset when staying too long in reversal and not board 
	bNotifyRstReverseRcvGate := fbRstReverseRcvGate.Q;
	

	//iGotoLane 0 Default Lane
	//iGotoLane 1 Route1
	//internal condition
	IF NOT(p_bManualRmvRoute OR p_bReturnRoute OR p_bNomRouteEn) THEN
		usiReverseDS1SndBfWBrdID := FALSE;
		usiReverseDS2SndBfWBrdID := FALSE;
		bManualRmvBrdCond := FALSE;
		iGotoLane	:= 0;
		bProcessRouteReversal := FALSE;
		bTriggerRouteReversal := FALSE;
	ELSE
		// intermediate reversal condition
		IF (p_bReturnRoute AND bProcessRouteMachine) AND EDGEPOS(p_bUSHermesBrdAvlRcved AND p_tyUSHermestyBoardAvailable.tyData.iRoute  = 900 ) THEN //flipping station reversal condition
			bProcessRouteReversal := TRUE; 
		ELSIF (p_bReturnRoute AND bTriggerRouteMachine) AND EDGEPOS(p_bUSHermesBrdAvlRcved AND p_tyUSHermestyBoardAvailable.tyAvl.bFlippedBoard  AND p_tyUSHermestyBoardAvailable.tyData.eFlippedBoard = HermesFlippedBoardTopSideUp) THEN
			bTriggerRouteReversal := TRUE; //condition link to corresponding inspection zone
		END_IF

		bRouteHaveBeenTriggerred := EDGEPOS(bProcessRouteReversal OR bTriggerRouteReversal);
		bStopTransportFailed := EDGEPOS(p_bUSHermesStopTransport AND (p_tyUSHermesStopTransport.tyData.eTransferState = HermesTransferStateIncomplete OR p_tyUSHermesStopTransport.tyData.eTransferState = HermesTransferStateNotStarted));
		bStopTransportSucceed := EDGEPOS(p_bUSHermesStopTransport AND p_tyUSHermesStopTransport.tyData.eTransferState = HermesTransferStateComplete AND p_bLinkConvHvBrd);
		
		//receiving Route
		IF	NOT(p_tyUSHermestyBoardAvailable.tyAvl.bRoute)   THEN
			iGotoLane := 0; //default, depend on priority
		ELSE
			IF  p_bManualRmvRoute AND p_tyUSHermestyBoardAvailable.tyData.iRoute  = 999  THEN 
				bManualRmvBrdCond := TRUE;
			
			ELSIF p_bReturnRoute AND (bProcessRouteReversal OR bTriggerRouteReversal)THEN //OR p_usiReverseDSSndBfWBrdID) THEN
				//Reset
				//fbRstReverseDSSndBF(IN:= p_usiReverseDSSndBfWBrdID AND NOT(p_bReceiveReverseUSMcRdy));
				IF bRouteHaveBeenTriggerred THEN
					p_usiReverseDSSndBfWBrdID := 1;	
//				ELSIF (p_usiReverseDSSndBfWBrdID AND p_bReceiveReverseUSMcRdy) OR fbRstReverseDSSndBF.Q THEN
//					p_usiReverseDSSndBfWBrdID := 0;	
				END_IF
						
				IF bProcessRouteReversal OR bTriggerRouteReversal  THEN //Route Guide (900),flipper as downstream
					IF bStopTransportFailed THEN
						bProcessRouteReversal := FALSE;
						bTriggerRouteReversal := FALSE;
					ELSIF bStopTransportSucceed  THEN //successful transport
						bSwitchtoReverseTransport := NOT(bSwitchtoReverseTransport);
						FOR i := 0 TO 200 DO
							IF (a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
								fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sValue);
								IF (sLowerCase = 'route') THEN
									IF a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
										IF p_tyUSHermestyBoardAvailable.tyData.iRoute = 900 AND bProcessRouteReversal THEN
											a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i+1].sValue	:= '0';
										ELSIF p_tyUSHermestyBoardAvailable.tyData.iRoute <> 900 AND bTriggerRouteReversal  THEN
											a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i+1].sValue	:= '900';
										END_IF
										EXIT;
									END_IF
								END_IF
							END_IF
						END_FOR
						bProcessRouteReversal := FALSE;
						bTriggerRouteReversal := FALSE;
					END_IF
				END_IF
				

			ELSIF p_bNomRouteEn THEN  
				iMinDis := 0;
				FOR usidx := 0 TO 2 DO 
					//bChecking Closest Route
					IF p_tyUSHermestyBoardAvailable.tyData.iRoute = tyCurrConfiguration.a_tyDSParam[usidx].iLaneID THEN
						iGotoLane := usidx; //iGotoLane switch direction 
						EXIT;
					ELSIF iMinDis = 0 THEN
						iMinDis := ABS(p_tyUSHermestyBoardAvailable.tyData.iRoute - tyCurrConfiguration.a_tyDSParam[usidx].iLaneID);
						iGotoLane := usidx;
					ELSE
						IF iMinDis > ABS(p_tyUSHermestyBoardAvailable.tyData.iRoute - tyCurrConfiguration.a_tyDSParam[usidx].iLaneID) THEN
							iGotoLane := usidx;
							iMinDis := ABS(p_tyUSHermestyBoardAvailable.tyData.iRoute - tyCurrConfiguration.a_tyDSParam[usidx].iLaneID);
						END_IF
					END_IF
				END_FOR	
			END_IF
			
			
			bEntToReversePosition := bProcessRouteReversal OR bTriggerRouteReversal;
		END_IF
		

		//Process 900
		//when to reset block DS signal

		
		//Process 999
		//fbRstReverseDSSndBF(IN:= bManualRmvBrdCond);
		
		
		
	//	bBlkUS := bBlkUS OR bReverseDSSndBfWBrdID; //OR p_bSwitchtoReverseTransport;
	END_IF	
	
	

	


	

END_ACTION