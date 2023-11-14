
(* Hermes Illegal Message - Supervisory *)
FUNCTION fHermesIllegalMsgSvy
	

	CASE eState OF
		
		HermesStateNotConnected:			fHermesIllegalMsgSvy	:= fHermesIllegalMsgNotConnectedSvy(tyMsgType); //2940 - 2946, 4 standby until 2950
		HermesStateSServiceDescription:  	fHermesIllegalMsgSvy	:= fHermesIllegalMsgSrvcDescripSvy(tyMsgType); //2951 - 2958, 4 standby until 2962
		HermesStateConnected:               fHermesIllegalMsgSvy	:= fHermesIllegalMsgConnectedSvy(tyMsgType); //2963 - 2967, 4 standby until 2971

	END_CASE
	
END_FUNCTION
