
(* Hermes Illegal Message - Transport Finished For Upstream *)
FUNCTION fHermesIllegalMsgTransportFiniUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2824;	//Receive ServiceDescription While Upstream In Transport Finished State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2825;	//Receive BoardAvailable While Upstream In Transport Finished State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2826;	//Receive RevokeBoardAvailable While UpstreamWhile Upstream In Transport Finished State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2827;	//Receive MachineReady While Upstream In Transport Finished State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2828;	//Receive RevokeMachineReady While Upstream In Transport Finished State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2829;	//Receive StartTransport While Upstream In Transport Finished State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2830;	//Receive TransportFinished While Upstream In Transport Finished State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgTransportFiniUS	:= 2831;	//Receive StopTransport While Upstream In Transport Finished State
		
//	ELSIF tyMsgType.bBoardForecast = TRUE THEN
//		
//		fHermesIllegalMsgTransportFiniUS	:= 2832;	//Receive BoardForecast While Upstream In Transport Finished State
		
	ELSE
		
		fHermesIllegalMsgTransportFiniUS	:= 0;
		
	END_IF
	
END_FUNCTION
