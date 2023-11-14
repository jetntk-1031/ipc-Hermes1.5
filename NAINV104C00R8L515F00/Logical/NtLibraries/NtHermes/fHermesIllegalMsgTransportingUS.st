
(* Hermes Illegal Message - Transporting For Upstream *)
FUNCTION fHermesIllegalMsgTransportingUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgTransportingUS	:= 2817;	//Receive ServiceDescription While Upstream In Transporting State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE AND bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportingUS	:= 2818;	//Receive Twice Board Available While Upstream In Transporting State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE AND bBoardAvailable = FALSE THEN
		
		fHermesIllegalMsgTransportingUS	:= 2819;	//Receive RevokeBoardAvailable Without BoardAvailable While Upstream In Transporting State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportingUS	:= 2820;	//Receive MachineReady While Upstream In Transporting State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportingUS	:= 2821;	//Receive RevokeMachineReady While Upstream In Transporting State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgTransportingUS	:= 2822;	//Receive StartTransport While Upstream In Transporting State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgTransportingUS	:= 2823;	//Receive StopTransport While Upstream In Transporting State
		
	ELSE
		
		fHermesIllegalMsgTransportingUS	:= 0;
		
	END_IF
	
END_FUNCTION
