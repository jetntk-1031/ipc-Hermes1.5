
(* Hermes Remove One Message Send Buffer *)
FUNCTION fHermesRmvOneMsgSend
	
	fHermesRmvOneMsgSend	:= TRUE;
	
	memcpy(ADR(pa_eMsgSend[0]) , ADR(pa_eMsgSend[1]) , SIZEOF(pa_eMsgSend[0]) * 50);
	pa_eMsgSend[50]	:= HermesMsgTypeNA;
	p_udiIdx		:= p_udiIdx - 1;
	
END_FUNCTION
