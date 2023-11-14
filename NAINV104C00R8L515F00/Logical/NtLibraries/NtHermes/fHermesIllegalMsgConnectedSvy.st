
(* Hermes Illegal Message - Connected For Supervisory *)
FUNCTION fHermesIllegalMsgConnectedSvy
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgConnectedSvy	:= 2963;	//Receive Supervisory ServiceDescription While Supervisory In Connected State
		
	ELSIF tyMsgType.bCurrentConfiguration = TRUE THEN
		                                                               
		fHermesIllegalMsgConnectedSvy	:= 2964;	//Receive CurrConfiguration While Supervisory In Connected State
		
	ELSIF tyMsgType.bQueryWorkOrderInfo = TRUE THEN
		
		fHermesIllegalMsgConnectedSvy	:= 2965;	//Receive QueryWorkOrderInfo While Supervisory In Connected State
		
	ELSIF tyMsgType.bBoardArrived = TRUE THEN
		
		fHermesIllegalMsgConnectedSvy	:= 2966;	//Receive BoardArrived While Supervisory In Connected State
		
	ELSIF tyMsgType.bBoardDeparted = TRUE THEN
		
		fHermesIllegalMsgConnectedSvy	:= 2967;	//Receive BoardDeparted While Supervisory In Connected State
					
	ELSE
		
		fHermesIllegalMsgConnectedSvy	:= 0;
		
	END_IF
	
END_FUNCTION
