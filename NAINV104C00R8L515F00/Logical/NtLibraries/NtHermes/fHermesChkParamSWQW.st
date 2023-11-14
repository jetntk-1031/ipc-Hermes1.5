
(* Hermes Checking Parameter SendWorkOrderId & QueryWorkOrderId *)
FUNCTION fHermesChkParamSWQW
	
	fHermesChkParamSWQW	:= 0;
	
	IF tySendWorkOrderInfo.tyAvl.bQueryId = TRUE AND tyQueryWorkOrderInfo.tyAvl.bQueryId = TRUE THEN
		
		IF tySendWorkOrderInfo.tyData.sQueryId <> tyQueryWorkOrderInfo.tyData.sQueryId THEN
			
			fHermesChkParamSWQW	:= 2767;	//QueryId Mismatch While Checking SendWorkOrderId & QueryWorkOrderId
			
		END_IF
		
	ELSE
		
		fHermesChkParamSWQW	:= 2768;	//QueryId Missing While Checking SendWorkOrderId & QueryWorkOrderId
		
	END_IF
	
END_FUNCTION
