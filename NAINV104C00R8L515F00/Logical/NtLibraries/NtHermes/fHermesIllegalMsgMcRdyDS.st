
(* Hermes Illegal Message - Machine Ready For Downstream *)
FUNCTION fHermesIllegalMsgMcRdyDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgMcRdyDS	:= 2873;	//Receive ServiceDescription While Downstream In Machine Ready State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgMcRdyDS	:= 2874;	//Receive BoardAvailable While Downstream In Machine Ready State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgMcRdyDS	:= 2875;	//Receive RevokeBoardAvailable While Downstream In Machine Ready State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgMcRdyDS	:= 2876;	//Receive MachineReady While Downstream In Machine Ready State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgMcRdyDS	:= 2877;	//Receive StopTransport While Downstream In Machine Ready State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgMcRdyDS	:= 2878;	//Receive TransportFinished While Downstream In Machine Ready State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgMcRdyDS	:= 2879;	//Receive BoardForecast While Downstream In Machine Ready State
		
	ELSE
		
		fHermesIllegalMsgMcRdyDS	:= 0;
		
	END_IF
	
END_FUNCTION
