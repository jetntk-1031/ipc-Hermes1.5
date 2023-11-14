
(* Hermes Illegal Message - Transport Stopped For Downstream *)
FUNCTION fHermesIllegalMsgTransportStopDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2903;	//Receive ServiceDescription While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2904;	//Receive BoardAvailable While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2905;	//Receive RevokeBoardAvailable While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2906;	//Receive MachineReady While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2907;	//Receive RevokeMachineReady While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2908;	//Receive StartTransport While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2909;	//Receive StopTransport While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2910;	//Receive TransportFinished While Downstream In Transport Stopped State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgTransportStopDS	:= 2911;	//Receive BoardForecast While Downstream In Transport Stopped State
		
	ELSE
		
		fHermesIllegalMsgTransportStopDS	:= 0;
		
	END_IF
	
END_FUNCTION
