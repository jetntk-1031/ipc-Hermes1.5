
(* Hermes Check Alive *)
FUNCTION_BLOCK fbHermesCheckAlive
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		//Send Check Alive
		fbSendTm(IN := TRUE , PT := tSendTm);
		IF fbSendTm.Q = TRUE THEN
			fbSendTm(IN := FALSE);
				
			bDataSend	:= TRUE;
			memset(ADR(tyDataSend) , 0 , SIZEOF(tyDataSend));
			
		ELSE
			bDataSend	:= FALSE;
		END_IF
		
		//Wait Check Alive
		fbRcvTO(IN := NOT EDGEPOS(bDataRcv) , PT := tRcvTimeOut);
		IF fbRcvTO.Q = TRUE THEN
			udiStatus	:= 2767;	//Waiting Check Alive Time Out
		END_IF
		
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		bDataSend	:= FALSE;
		memset(ADR(tyDataSend) , 0 , SIZEOF(tyDataSend));
		
		fbSendTm(IN := FALSE);
		fbRcvTO(IN := FALSE);
		
	END_IF
		
END_FUNCTION_BLOCK
