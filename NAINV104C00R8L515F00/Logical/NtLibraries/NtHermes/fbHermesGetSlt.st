
(* Hermes Get Slot Parameter *)
FUNCTION_BLOCK fbHermesGetSlt
	
	IF (rThicknessInMM <= 0) OR (rTopClearanceHeightInMM <= 0) OR (rBtmClearanceHeightInMM <= 0) OR (diTtlSlt <= 0) OR (diSltToSltInUM <= 0) THEN
		diMinSltValue	:= 0;
		diMaxSltValue	:= 0;
		diPitch			:= 0;
		diSltToSltInUM	:= 0;
		
	ELSE
		diThicknessInUM				:= REAL_TO_DINT(rThicknessInMM * 1000);
		diTopClearanceHeightInUM	:= REAL_TO_DINT(rTopClearanceHeightInMM * 1000);
		diBtmClearanceHeightInUM	:= REAL_TO_DINT(rBtmClearanceHeightInMM * 1000);
		
		IF eFlippedBrd = HermesFlippedBoardBtmSideUp THEN
			
			diMinSltValue	:= (diTopClearanceHeightInUM / diSltToSltInUM) + 1;
			diMaxSltValue	:= diTtlSlt - ((diBtmClearanceHeightInUM + diThicknessInUM) / diSltToSltInUM);
			diPitch			:= ((diTopClearanceHeightInUM + diBtmClearanceHeightInUM + diThicknessInUM) / diSltToSltInUM) + 1;
				
		ELSE
			
			diMinSltValue	:= (diBtmClearanceHeightInUM / diSltToSltInUM) + 1;
			diMaxSltValue	:= diTtlSlt - ((diTopClearanceHeightInUM + diThicknessInUM) / diSltToSltInUM);
			diPitch			:= ((diTopClearanceHeightInUM + diBtmClearanceHeightInUM + diThicknessInUM) / diSltToSltInUM) + 1;
				
		END_IF
		
	END_IF
	
END_FUNCTION_BLOCK
