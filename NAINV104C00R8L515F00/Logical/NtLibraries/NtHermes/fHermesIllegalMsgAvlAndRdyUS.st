
(* Hermes Illegal Message - Available And Ready For Upstream *)
FUNCTION fHermesIllegalMsgAvlAndRdyUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyUS	:= 2809;	//Receive ServiceDescription While Upstream In Available And Ready State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyUS	:= 2810;	//Receive BoardAvailable While Upstream In Available And Ready State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyUS	:= 2811;	//Receive MachineReady While Upstream In Available And Ready State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyUS	:= 2812;	//Receive RevokeMachineReady While Upstream In Available And Ready State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyUS	:= 2813;	//Receive StartTransport While Upstream In Available And Ready State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyUS	:= 2814;	//Receive StopTransport While Upstream In Available And Ready State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyUS	:= 2815;	//Receive TransportFinished While Upstream In Available And Ready State
		
//	ELSIF tyMsgType.bBoardForecast = TRUE THEN
//		
//		fHermesIllegalMsgAvlAndRdyUS	:= 2816;	//Receive BoardForecast While Upstream In Available And Ready State
		
	ELSE
		
		fHermesIllegalMsgAvlAndRdyUS	:= 0;
		
	END_IF
	
END_FUNCTION
