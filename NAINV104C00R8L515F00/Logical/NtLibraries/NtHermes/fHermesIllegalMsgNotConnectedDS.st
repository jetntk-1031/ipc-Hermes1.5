
(* Hermes Illegal Message - Not Connected For Downstream *)
FUNCTION fHermesIllegalMsgNotConnectedDS
	
	IF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2840;	//Receive BoardAvailable While Downstream In Not Connected State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2841;	//Receive RevokeBoardAvailable While Downstream In Not Connected State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2842;	//Receive MachineReady While Downstream In Not Connected State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2843;	//Receive RevokeMachineReady While Downstream In Not Connected State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2844;	//Receive StartTransport While Downstream In Not Connected State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2845;	//Receive StopTransport While Downstream In Not Connected State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2846;	//Receive TransportFinished While Downstream In Not Connected State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgNotConnectedDS	:= 2847;	//Receive BoardForecast While Downstream In Not Connected State
		
	ELSE
		
		fHermesIllegalMsgNotConnectedDS	:= 0;
		
	END_IF
	
END_FUNCTION
