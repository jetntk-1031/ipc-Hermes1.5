
(* Hermes Illegal Message - Transport Finished For Downstream *)
FUNCTION fHermesIllegalMsgTransportFiniDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2895;	//Receive ServiceDescription While In Transport Finished State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2896;	//Receive BoardAvailable While In Transport Finished State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2897;	//Receive RevokeBoardAvailable While In Transport Finished State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2898;	//Receive MachineReady While In Transport Finished State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2899;	//Receive RevokeMachineReady While In Transport Finished State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2900;	//Receive StartTransport While In Transport Finished State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2901;	//Receive TransportFinished While In Transport Finished State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgTransportFiniDS	:= 2902;	//Receive BoardForecast While In Transport Finished State
		
	ELSE
		
		fHermesIllegalMsgTransportFiniDS	:= 0;
		
	END_IF
	
END_FUNCTION
