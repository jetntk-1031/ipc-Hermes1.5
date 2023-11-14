
(* Hermes Illegal Message - Transport Stopped For Upstream *)
FUNCTION fHermesIllegalMsgTransportStopUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgTransportStopUS	:= 2833;	//Receive ServiceDescription While Upstream In Transport Stopped State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE AND bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportStopUS	:= 2834;	//Receive Twice Board Available While Upstream In Transport Stopped State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE AND bBoardAvailable = FALSE THEN
		
		fHermesIllegalMsgTransportStopUS	:= 2835;	//Receive RevokeBoardAvailable Without BoardAvailable While Upstream In Transport Stopped State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportStopUS	:= 2836;	//Receive MachineReady While Upstream In Transport Stopped State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportStopUS	:= 2837;	//Receive RevokeMachineReady While Upstream In Transport Stopped State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgTransportStopUS	:= 2838;	//Receive StartTransport While Upstream In Transport Stopped State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgTransportStopUS	:= 2839;	//Receive StopTransport While Upstream In Transport Stopped State
		
	ELSE
		
		fHermesIllegalMsgTransportStopUS	:= 0;
		
	END_IF
	
END_FUNCTION
