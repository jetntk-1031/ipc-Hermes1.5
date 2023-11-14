
(* Hermes Check Alive Receive Ping Send Pong *)
FUNCTION_BLOCK fbHermesCheckAliveRcvPing
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		IF EDGEPOS(bDataRcv) THEN
			
			bDataSend				:= TRUE;
			tyDataSend.tyAvl.bType	:= TRUE;
			tyDataSend.tyAvl.bId	:= TRUE;
			tyDataSend.tyData.eType	:= HermesCheckAliveTypePong;
			tyDataSend.tyData.sId	:= tyDataRcv.tyData.sId;
			
		ELSE
			
			bDataSend	:= FALSE;
			memset(ADR(tyDataSend) , 0 , SIZEOF(tyDataSend));
			
		END_IF
		
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		bDataSend	:= FALSE;
		memset(ADR(tyDataSend) , 0 , SIZEOF(tyDataSend));
			
	END_IF
		
END_FUNCTION_BLOCK
