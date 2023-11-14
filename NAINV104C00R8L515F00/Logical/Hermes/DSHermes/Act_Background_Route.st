(** 2021-08-01 **)
ACTION Act_Background_Route:
	
	
	//DS Routing Function
	
	//same lane same interface
	//reverse output

	
	IF NOT(p_bProcessRouteEn) THEN
		
		bTriggerRouteReversal := FALSE;
	ELSE
		//decision making re-route the route number
		IF EDGEPOS(tyBoardAvailableRcv.tyAvl.bFlippedBoard  AND tyBoardAvailableRcv.tyData.eFlippedBoard = HermesFlippedBoardTopSideUp) THEN
			bTriggerRouteReversal := TRUE;
		END_IF
		
	
		IF p_bReturnRoute AND bTriggerRouteReversal  THEN //Process machine as upstream
			bTriggerRouteReversal := FALSE;
			iRoute := 990;
		END_IF 
		

	END_IF

	
	
	//revese route, send 
	IF NOT(p_bReverseSentRoute) THEN
		bSwitchtoReverseSend := FALSE;
	ELSE
		IF bReverseDSSndBfWBrdID = FALSE AND tyMsgTypeRcv.bMachineReady AND tyBoardForecastSnd.tyData.sBoardId = tyMachineReady.tyData.sBoardId THEN 
			bSwitchtoReverseSend := TRUE;
//			IF p_bUSHermesProcessRouteTrigger THEN 
//				iRoute := 990;
//			ELSE
//				iRoute := 0;	
//			END_IF
		ELSIF bReverseDSSndBfWBrdID = TRUE 
			AND ( EDGEPOS(tyMsgTypeRcv.bStopTransport AND tyStopTransport.tyData.eTransferState = HermesTransferStateComplete ) 
			)THEN 
			bSwitchtoReverseSend := FALSE;
		END_IF
		
		fbRstReverseSndGate(IN:= bSwitchtoReverseSend);
		bNotifyRstReverseSndGate := fbRstReverseSndGate.Q;
		
		//feedback
		//bDSHermesRcvReverseUSMcRdy := 
		bReverseRcvBlkDS :=  NOT(bSwitchtoReverseSend);
	END_IF 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
END_ACTION