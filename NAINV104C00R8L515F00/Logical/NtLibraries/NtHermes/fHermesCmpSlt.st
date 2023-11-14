
(* Hermes Compare Slot Parameter *)
FUNCTION fHermesCmpSlt
	
	fHermesCmpSlt	:= 0;
	
	IF diRcpMinSltValue <= 0 THEN
		fHermesCmpSlt	:= 2914;	//Input First Slot Is Invalid
		
	ELSIF diRcpMaxSltValue <= 0 THEN
		fHermesCmpSlt	:= 2915;	//Input Last Slot Is Invalid
		
	ELSIF diRcpPitch <= 0 THEN
		fHermesCmpSlt	:= 2916;	//Input Pitch Is Invalid
		
	ELSIF diRcpSltToSltInUM <= 0 THEN
		fHermesCmpSlt	:= 2917;	//Input Slot To Slot Distance Is Invalid
		
	ELSIF diRcpTtlSlt <= 0 THEN
		fHermesCmpSlt	:= 2918;	//Input Total Slot Is Invalid
		
	ELSIF rHermesThicknessInMM <= 0 THEN
		fHermesCmpSlt	:= 2919;	//Input Thickness Is Invalid
		
	ELSIF rHermesTopClearanceHeightInMM <= 0 THEN
		fHermesCmpSlt	:= 2920;	//Input Top Clearance Height Is Invalid
		
	ELSIF rHermesBtmClearanceHeightInMM <= 0 THEN
		fHermesCmpSlt	:= 2921;	//Input Bottom Clearance Height Is Invalid
		
	ELSE
		fbGetSlt.eFlippedBrd				:= eHermesFlippedBrd;
		fbGetSlt.rThicknessInMM				:= rHermesThicknessInMM;
		fbGetSlt.rTopClearanceHeightInMM	:= rHermesTopClearanceHeightInMM;
		fbGetSlt.rBtmClearanceHeightInMM	:= rHermesBtmClearanceHeightInMM;
		fbGetSlt.diSltToSltInUM				:= diRcpSltToSltInUM;
		fbGetSlt.diTtlSlt					:= diRcpTtlSlt;
		fbGetSlt;
		
		IF (fHermesCmpSlt = 0) THEN
			IF diRcpMinSltValue < fbGetSlt.diMinSltValue THEN
				fHermesCmpSlt	:= 2922;	//Recipe First Slot Value & Board Available Data Not Match
			END_IF
		END_IF
		
		IF (fHermesCmpSlt = 0) THEN
			IF diRcpMaxSltValue > fbGetSlt.diMaxSltValue THEN
				fHermesCmpSlt	:= 2923;	//Recipe Last Slot Value & Board Available Data Not Match
			END_IF
		END_IF
		
		IF (fHermesCmpSlt = 0) THEN
			IF diRcpPitch < fbGetSlt.diPitch THEN
				fHermesCmpSlt	:= 2924;	//Recipe Pitch Value & Board Available Data Not Match
			END_IF
		END_IF
		
	END_IF
	
END_FUNCTION
