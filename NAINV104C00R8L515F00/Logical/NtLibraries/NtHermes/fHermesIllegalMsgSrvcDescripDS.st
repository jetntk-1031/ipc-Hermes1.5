
(* Hermes Illegal Message - Service Description For Downstream *)
FUNCTION fHermesIllegalMsgSrvcDescripDS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2848;	//Receive ServiceDescription While Downstream In Service Description State
		
	ELSIF tyMsgType.bBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2849;	//Receive BoardAvailable While Downstream In Service Description State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2850;	//Receive RevokeBoardAvailable While Downstream In Service Description State
		
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2851;	//Receive MachineReady While Downstream In Service Description State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2852;	//Receive RevokeMachineReady While Downstream In Service Description State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2853;	//Receive StartTransport While Downstream In Service Description State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2854;	//Receive StopTransport While Downstream In Service Description State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2855;	//Receive TransportFinished While Downstream In Service Description State
		
	ELSIF tyMsgType.bBoardForecast = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripDS	:= 2856;	//Receive BoardForecast While Downstream In Service Description State
		
	ELSE
		
		fHermesIllegalMsgSrvcDescripDS	:= 0;
		
	END_IF
	
END_FUNCTION
