(** 2021-08-01 **)
ACTION Act_Background_Route:
	
	//US Routing function
	
	
	//iGotoLane 0 Default Lane
	//iGotoLane 1 Route1
	IF NOT(p_bProcessRouteEn) THEN
		bReverseDSSndBfWBrdID := FALSE;
		bManualRmvBrdCond := FALSE;
		iGotoLane	:= 0;
		bProcessRouteReversal := FALSE;
		bTriggerRouteReversal := FALSE;
	ELSE
		// reversal condition
		IF EDGEPOS(tyBoardAvailableRcv.tyData.iRoute  = 900 AND tyBoardAvailableRcv.tyAvl.bRoute) THEN //flipping station reversal condition
			tyBoardAvailableRcv.tyAvl.bRoute := FALSE;
			bProcessRouteReversal := TRUE; 
		ELSIF EDGEPOS(tyBoardAvailableRcv.tyAvl.bFlippedBoard  AND tyBoardAvailableRcv.tyData.eFlippedBoard = HermesFlippedBoardTopSideUp) THEN
			bTriggerRouteReversal := TRUE;
		END_IF

		
		//receiving Route
		IF	NOT(tyBoardAvailableRcv.tyAvl.bRoute)   THEN
			iGotoLane := 0; //default, depend on priority
		ELSE
			IF  p_bManualRmvRoute AND tyBoardAvailableRcv.tyData.iRoute  = 999  THEN 
				bManualRmvBrdCond := TRUE;
			
			ELSIF p_bReturnRoute AND (
				(bProcessRouteReversal AND bProcessRouteMachine
				OR 
				bTriggerRouteReversal AND bTriggerRouteMachine) 
				OR bReverseDSSndBfWBrdID) THEN  
				IF bProcessRouteReversal  THEN //Route Guide (900),flipper as downstream
					bReverseDSSndBfWBrdID := TRUE;
					bTriggerUpdateRoute  := FALSE;
					bProcessRouteReversal := FALSE;
				ELSIF bTriggerRouteReversal THEN //process as downstream
					bReverseDSSndBfWBrdID := TRUE;
					bTriggerUpdateRoute  := TRUE;
					bTriggerRouteReversal := FALSE;
				END_IF
				
				//Reset
				fbRstReverseDSSndBF(IN:= bReverseDSSndBfWBrdID AND NOT(p_bReceiveReverseUSMcRdy));
				IF (bReverseDSSndBfWBrdID AND p_bReceiveReverseUSMcRdy) OR fbRstReverseDSSndBF.Q THEN
					bReverseDSSndBfWBrdID := FALSE;	
					bTriggerUpdateRoute := FALSE;
				END_IF
			ELSIF p_bNomRouteEn THEN  
				iMinDis := 0;
				FOR usidx := 0 TO 2 DO 
					//bChecking Closest Route
					IF tyBoardAvailableRcv.tyData.iRoute = pa_tyHermesDSParam[usidx].iLaneID THEN
						iGotoLane := usidx; //iGotoLane switch direction 
						EXIT;
					ELSIF iMinDis = 0 THEN
						iMinDis := ABS(tyBoardAvailableRcv.tyData.iRoute - pa_tyHermesDSParam[usidx].iLaneID);
						iGotoLane := usidx;
					ELSE
						IF iMinDis > ABS(tyBoardAvailableRcv.tyData.iRoute - pa_tyHermesDSParam[usidx].iLaneID) THEN
							iGotoLane := usidx;
							iMinDis := ABS(tyBoardAvailableRcv.tyData.iRoute - pa_tyHermesDSParam[usidx].iLaneID);
						END_IF
					END_IF
				END_FOR	
			END_IF
		END_IF
		

		//Process 900
		//when to reset block DS signal

		
		//Process 999
		//fbRstReverseDSSndBF(IN:= bManualRmvBrdCond);
		
		
		
	//	bBlkUS := bBlkUS OR bReverseDSSndBfWBrdID; //OR p_bSwitchtoReverseReceive;
	END_IF	
	
	
	
	
	//reverse route, input receiving 
	IF NOT(p_bReverseReceiveRoute) THEN
		bSwitchtoReverseReceive := FALSE;
	ELSE
		//process Reverse Input
		IF bSwitchtoReverseReceive = FALSE  AND EDGEPOS(p_tyDSHermesCurrBASnd.tyData.sBoardId = tyBoardForecastRcv.tyData.sBoardId AND tyBoardForecastRcv.tyData.sBoardId <> '' AND tyBoardForecastRcv.tyAvl.bBoardId) THEN 
			tyBoardForecastRcv.tyAvl.bBoardId := FALSE;
			bSwitchtoReverseReceive := TRUE; //when to reset ReverseRcv back , if the BASnd not the same anymore 
		ELSIF bSwitchtoReverseReceive = TRUE 
			AND (EDGEPOS(tyMsgTypeRcv.bTransportFinished AND tyTransportFinished.tyData.eTransferState = HermesTransferStateComplete )
			OR EDGEPOS(tyMsgTypeRcv.bBoardForecast AND tyBoardForecastRcv.tyData.sBoardId = ''  )) THEN 
			tyBoardForecastRcv.tyAvl.bBoardId := FALSE;
			bSwitchtoReverseReceive := FALSE;
		END_IF 
		fbRstReverseRcvGate(IN:= bSwitchtoReverseReceive);
		bNotifyRstReverseRcvGate := fbRstReverseRcvGate.Q;
		//	bBlkUS := bBlkUS OR NOT(bSwitchtoReverseReceive);
		
		bReverseRcvBlkUS := NOT(bSwitchtoReverseReceive);
	END_IF

	
	//bBlkUS := bBlkUS OR p_bUSHermes2SwitchtoReverseRcv; 
END_ACTION