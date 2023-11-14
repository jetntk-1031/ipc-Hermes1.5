
(* Hermes Illegal Message - Transporting For Downstream *)
FUNCTION fHermesIllegalMsgTransportingDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2887;	//Receive ServiceDescription While Downstream In Transporting State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2888;	//Receive BoardAvailable While Downstream In Transporting State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2889;	//Receive RevokeBoardAvailable While Downstream In Transporting State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2890;	//Receive MachineReady While Downstream In Transporting State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2891;	//Receive RevokeMachineReady While Downstream In Transporting State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2892;	//Receive StartTransport While Downstream In Transporting State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2893;	//Receive TransportFinished While Downstream In Transporting State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgTransportingDS	:= 2894;	//Receive BoardForecast While Downstream In Transporting State
		
	ELSE
		
		fHermesIllegalMsgTransportingDS	:= 0;
		
	END_IF
	
END_FUNCTION
