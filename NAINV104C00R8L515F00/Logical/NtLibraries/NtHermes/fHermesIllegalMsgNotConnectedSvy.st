
(* Hermes Illegal Message - Not Connected For Supervisory *)
FUNCTION fHermesIllegalMsgNotConnectedSvy
	

		
	IF tyMsgType.bSetConfiguration = TRUE THEN
		
		fHermesIllegalMsgNotConnectedSvy	:= 2940;	//Receive SetConfiguration While Supervisory In Not Connected State
		
	ELSIF tyMsgType.bGetConfiguration = TRUE THEN
		
		fHermesIllegalMsgNotConnectedSvy	:= 2941;	//Receive GetConfiguration While Supervisory In Not Connected State
		
	ELSIF tyMsgType.bCurrentConfiguration = TRUE THEN
		
		fHermesIllegalMsgNotConnectedSvy	:= 2942;	//Receive CurrConfiguration While Supervisory In Not Connected State
		
	ELSIF tyMsgType.bSendWorkOrderInfo = TRUE THEN
		
		fHermesIllegalMsgNotConnectedSvy	:= 2943;	//Receive SendWorkOrderInfo While Supervisory In Not Connected State
		
	ELSIF tyMsgType.bQueryWorkOrderInfo = TRUE THEN
		
		fHermesIllegalMsgNotConnectedSvy	:= 2944;	//Receive QueryWorkOrderInfo While Supervisory In Not Connected State
		
	ELSIF tyMsgType.bBoardArrived = TRUE THEN
		
		fHermesIllegalMsgNotConnectedSvy	:= 2945;	//Receive BoardArrived While Supervisory In Not Connected State
		
	ELSIF tyMsgType.bBoardDeparted = TRUE THEN
		
		fHermesIllegalMsgNotConnectedSvy	:= 2946;	//Receive BoardDeparted While Supervisory In Not Connected State	
		
	ELSE
		
		fHermesIllegalMsgNotConnectedSvy	:= 0;
		
	END_IF
	
END_FUNCTION
