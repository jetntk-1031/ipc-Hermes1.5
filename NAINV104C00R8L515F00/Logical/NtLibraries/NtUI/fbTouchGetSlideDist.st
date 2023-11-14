
(* Get Slide Distance *)
FUNCTION_BLOCK fbTouchGetSlideDist
	
	//Get Valid Press
	tyInternal.fbPressedRise(CLK := bPressed);
	
	IF tyInternal.fbPressedRise.Q THEN
		IF udiX > udiWorkAreaStartX AND udiX < udiWorkAreaEndX AND udiY > udiWorkAreaStartY AND udiY < udiWorkAreaEndY THEN
			tyInternal.bValidStartPress	:= TRUE;
		ELSE
			tyInternal.bValidStartPress	:= FALSE;
		END_IF
	END_IF
	
	IF bPressed AND tyInternal.bValidStartPress THEN
		tyInternal.bPressed	:= TRUE;
	ELSE
		tyInternal.bPressed	:= FALSE;
	END_IF
	
	//Update Press Record
	tyInternal.fbInternalPressedRise(CLK := tyInternal.bPressed);
	
	IF tyInternal.fbInternalPressedRise.Q THEN
		tyInternal.udiXTemp	:= udiX;
		tyInternal.udiYTemp	:= udiY;
		
	END_IF
	
	//Get Valid Press Coordinate
	IF tyInternal.bPressed = TRUE THEN
		diXDist	:= UDINT_TO_DINT(udiX) - UDINT_TO_DINT(tyInternal.udiXTemp);
		diYDist	:= UDINT_TO_DINT(udiY) - UDINT_TO_DINT(tyInternal.udiYTemp);
		
		IF DINT_TO_UDINT(ABS(diXDist)) < udiMinXDist THEN
			diXDist	:= 0;
		END_IF
		
		IF DINT_TO_UDINT(ABS(diYDist)) < udiMinYDist THEN
			diYDist	:= 0;
		END_IF
			
	ELSE
		diXDist	:= 0;
		diYDist	:= 0;
		
	END_IF
	
END_FUNCTION_BLOCK
