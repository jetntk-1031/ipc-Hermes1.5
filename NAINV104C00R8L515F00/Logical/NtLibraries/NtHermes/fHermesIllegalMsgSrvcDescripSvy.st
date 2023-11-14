
(* Hermes Illegal Message - Supervisory Service Description *)
FUNCTION fHermesIllegalMsgSrvcDescripSvy
	
	IF tyMsgType.bSServiceDescription = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2951;	//Receive Supervisory ServiceDescription While Supervisory In Service Description State
		
	ELSIF tyMsgType.bSetConfiguration = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2952;	//Receive SetConfiguration While Supervisory In Service Description State
		
	ELSIF tyMsgType.bGetConfiguration = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2953;	//Receive GetConfiguration While Supervisory In Service Description State
		
	ELSIF tyMsgType.bCurrentConfiguration = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2954;	//Receive CurrConfiguration While Supervisory In Service Description State
		
	ELSIF tyMsgType.bSendWorkOrderInfo = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2955;	//Receive SendWorkOrderInfo While Supervisory In Service Description State
		
	ELSIF tyMsgType.bQueryWorkOrderInfo = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2956;	//Receive QueryWorkOrderInfo While Supervisory In Service Description State
		
	ELSIF tyMsgType.bBoardArrived = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2957;	//Receive BoardArrived While Supervisory In Service Description State
		
	ELSIF tyMsgType.bBoardDeparted = TRUE THEN
		
		fHermesIllegalMsgSrvcDescripSvy	:= 2958;	//Receive BoardDeparted While Supervisory In Service Description State
		
	ELSE
		
		fHermesIllegalMsgSrvcDescripSvy	:= 0;
		
	END_IF
	
END_FUNCTION
