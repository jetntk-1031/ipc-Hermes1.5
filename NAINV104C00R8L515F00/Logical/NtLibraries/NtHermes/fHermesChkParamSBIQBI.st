
(* Hermes Checking Parameter SendBoardInfo & QueryBoardInfo *)
FUNCTION fHermesChkParamSBIQBI
	
	fHermesChkParamSBIQBI	:= 0;
	
	IF tyQueryBoardInfo.tyAvl.bTopBarcode = TRUE THEN
		
		IF tySendBoardInfo.tyAvl.bTopBarcode = TRUE THEN
			
			IF tySendBoardInfo.tyData.sTopBarcode <> tyQueryBoardInfo.tyData.sTopBarcode THEN
			
			fHermesChkParamSBIQBI	:= 2769;	//Top Barcode Mismatch While Checking SendBoardInfo & QueryBoardInfo
			
			END_IF
		ELSE 
			fHermesChkParamSBIQBI	:= 2770;	//Top Barcode Missing While Checking SendBoardInfo & QueryBoardInfo
		END_IF
	ELSE	
		IF tySendBoardInfo.tyAvl.bTopBarcode = TRUE THEN
		
			fHermesChkParamSBIQBI	:= 2769;	//Bottom Barcode Mismatch While Checking SendBoardInfo & QueryBoardInfo
		END_IF
	END_IF
		
		

	
	IF tyQueryBoardInfo.tyAvl.bBottomBarcode = TRUE THEN
		
		IF tySendBoardInfo.tyAvl.bBottomBarcode = TRUE THEN
			
			IF tySendBoardInfo.tyData.sBottomBarcode <> tyQueryBoardInfo.tyData.sBottomBarcode THEN
			
				fHermesChkParamSBIQBI	:= 2771;	//Bottom Barcode Mismatch While Checking SendBoardInfo & QueryBoardInfo
			
			END_IF
		ELSE 
			fHermesChkParamSBIQBI	:= 2772;	//Bottom Barcode Missing While Checking SendBoardInfo & QueryBoardInfo
		END_IF
	
	ELSE	
		IF tySendBoardInfo.tyAvl.bBottomBarcode = TRUE THEN
		
			fHermesChkParamSBIQBI	:= 2771;	//Bottom Barcode Mismatch While Checking SendBoardInfo & QueryBoardInfo
		END_IF
	END_IF
	
			

	
	
END_FUNCTION
