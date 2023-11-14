
(* Hermes Check Alive Send Ping Wait Pong *)
FUNCTION_BLOCK fbHermesCheckAliveSendPing
	
	IF (bEn = TRUE) AND (udiStatus >= 65534) THEN
		
		udiStatus	:= 65535;
		
		//Send Check Alive
		fbSendTm(IN := TRUE , PT := tSendTm);
		IF fbSendTm.Q = TRUE THEN
			fbSendTm(IN := FALSE);
			
			bDataSend				:= TRUE;
			tyDataSend.tyAvl.bType	:= TRUE;
			tyDataSend.tyAvl.bId	:= TRUE;
			tyDataSend.tyData.eType	:= HermesCheckAliveTypePing;
			fHermesGetTimestamp(ADR(tyDataSend.tyData.sId) , tyDTStructure);
			
		ELSE
			bDataSend	:= FALSE;
		END_IF
		
		//Wait Check Alive
		fbRcvTO(IN := NOT EDGEPOS(bDataRcv) , PT := tRcvTimeOut);
		IF fbRcvTO.Q = TRUE THEN
			udiStatus	:= 2768;	//Waiting Check Alive Time Out
		END_IF
		
		IF EDGEPOS(bDataRcv) THEN
			IF tyDataRcv.tyData.sId <> tyDataSend.tyData.sId THEN
				udiStatus	:= 2769;	//Check Alive Id Mismatch
			END_IF
		END_IF
		
	ELSIF (bEn = FALSE) AND (udiStatus <> 65534) THEN
		
		udiStatus	:= 65534;
		
		bDataSend	:= FALSE;
		memset(ADR(tyDataSend) , 0 , SIZEOF(tyDataSend));
		
		fbSendTm(IN := FALSE);
		fbRcvTO(IN := FALSE);
		
	END_IF
		
END_FUNCTION_BLOCK
