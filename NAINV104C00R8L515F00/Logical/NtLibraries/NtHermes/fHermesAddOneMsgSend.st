
(* Hermes Add One Message Send Buffer *)
FUNCTION fHermesAddOneMsgSend
	
	fHermesAddOneMsgSend	:= TRUE;
	
	pa_eMsgSend[p_udiIdx]	:= eMsgType;
	p_udiIdx				:= p_udiIdx + 1;
	
END_FUNCTION
