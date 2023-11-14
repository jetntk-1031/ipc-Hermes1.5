
(* Hermes Illegal Message - Not Connected For Upstream *)
FUNCTION fHermesIllegalMsgNotConnectedUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2770;	//Receive ServiceDescription While Upstream In Not Connected State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2771;	//Receive BoardAvailable While Upstream In Not Connected State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2772;	//Receive RevokeBoardAvailable While Upstream In Not Connected State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2773;	//Receive MachineReady While Upstream In Not Connected State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2774;	//Receive RevokeMachineReady While Upstream In Not Connected State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2775;	//Receive StartTransport While Upstream In Not Connected State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2776;	//Receive StopTransport While Upstream In Not Connected State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2777;	//Receive TransportFinished While Upstream In Not Connected State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgNotConnectedUS	:= 2778;	//Receive BoardForecast While Upstream In Not Connected State
		
	ELSE
		
		fHermesIllegalMsgNotConnectedUS	:= 0;
		
	END_IF
	
END_FUNCTION
