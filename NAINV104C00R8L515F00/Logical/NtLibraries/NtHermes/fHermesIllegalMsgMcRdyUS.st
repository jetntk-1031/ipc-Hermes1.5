
(* Hermes Illegal Message - Machine Ready For Upstream *)
FUNCTION fHermesIllegalMsgMcRdyUS
	
	IF tyMsgType.bServiceDescription = TRUE THEN
		
		fHermesIllegalMsgMcRdyUS	:= 2802;	//Receive ServiceDescription While Upstream In Machine Ready State
		
	ELSIF tyMsgType.bRevokeBoardAvailable = TRUE THEN
		
		fHermesIllegalMsgMcRdyUS	:= 2803;	//Receive RevokeBoardAvailable While Upstream In Machine Ready State
			
	ELSIF tyMsgType.bMachineReady = TRUE THEN
		
		fHermesIllegalMsgMcRdyUS	:= 2804;	//Receive MachineReady While Upstream In Machine Ready State
		
	ELSIF tyMsgType.bRevokeMachineReady = TRUE THEN
		
		fHermesIllegalMsgMcRdyUS	:= 2805;	//Receive RevokeMachineReady While Upstream In Machine Ready State
		
	ELSIF tyMsgType.bStartTransport = TRUE THEN
		
		fHermesIllegalMsgMcRdyUS	:= 2806;	//Receive StartTransport While Upstream In Machine Ready State
		
	ELSIF tyMsgType.bStopTransport = TRUE THEN
		
		fHermesIllegalMsgMcRdyUS	:= 2807;	//Receive StopTransport While Upstream In Machine Ready State
		
	ELSIF tyMsgType.bTransportFinished = TRUE THEN
		
		fHermesIllegalMsgMcRdyUS	:= 2808;	//Receive TransportFinished While Upstream In Machine Ready State
		
	ELSE
		
		fHermesIllegalMsgMcRdyUS	:= 0;
		
	END_IF
	
END_FUNCTION
