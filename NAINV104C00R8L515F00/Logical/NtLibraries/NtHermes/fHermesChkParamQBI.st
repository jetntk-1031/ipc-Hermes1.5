
(* Hermes Checking Parameter Query Board Info *)
FUNCTION fHermesChkParamQBI
	
	fHermesChkParamQBI	:= 0;
	
	IF fHermesChkParamQBI = 0 THEN
		
		IF tyQueryBoardInfo.tyAvl.bTopBarcode = FALSE AND tyQueryBoardInfo.tyAvl.bBottomBarcode = FALSE THEN
					
			fHermesChkParamQBI	:= 2766;	//Barcode Missing While Checking Query Board Info
					
		END_IF
		
	END_IF
	
END_FUNCTION
