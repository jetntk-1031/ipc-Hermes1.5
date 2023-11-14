
(* Hermes Illegal Message - Available And Ready For Downstream *)
FUNCTION fHermesIllegalMsgAvlAndRdyDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyDS	:= 2880;	//Receive ServiceDescription While Downstream In Available And Ready State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyDS	:= 2881;	//Receive BoardAvailable While Downstream In Available And Ready State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyDS	:= 2882;	//Receive RevokeBoardAvailable While Downstream In Available And Ready State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyDS	:= 2883;	//Receive MachineReady While Downstream In Available And Ready State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyDS	:= 2884;	//Receive StopTransport While Downstream In Available And Ready State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyDS	:= 2885;	//Receive TransportFinished While Downstream In Available And Ready State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgAvlAndRdyDS	:= 2886;	//Receive BoardForecast While Downstream In Available And Ready State
		
	ELSE
		
		fHermesIllegalMsgAvlAndRdyDS	:= 0;
		
	END_IF
	
END_FUNCTION
