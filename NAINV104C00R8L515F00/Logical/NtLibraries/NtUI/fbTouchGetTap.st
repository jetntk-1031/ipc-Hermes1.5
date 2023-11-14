
(* Get Double Tap *)
FUNCTION_BLOCK fbTouchGetTap
	
	IF bPressed AND udiX > udiWorkAreaStartX AND udiX < udiWorkAreaEndX AND udiY > udiWorkAreaStartY AND udiY < udiWorkAreaEndY THEN
		tyInternal.bPressed	:= TRUE;
	ELSE
		tyInternal.bPressed	:= FALSE;
	END_IF
		
	tyInternal.fbInternalPressedRise(CLK := tyInternal.bPressed);
	tyInternal.fbInternalPressedFall(CLK := tyInternal.bPressed);
	
	IF tyInternal.fbInternalPressedRise.Q THEN
		tyInternal.tTmTemp	:= clock_ms();
		tyInternal.udiXTemp	:= udiX;
		tyInternal.udiYTemp	:= udiY;
		
		bSingleTap		:= FALSE;
		udiSingleTapX	:= 0;
		udiSingleTapY	:= 0;
		
		bDoubleTap		:= FALSE;
		udiDoubleTapX	:= 0;
		udiDoubleTapY	:= 0;
		
	ELSIF tyInternal.fbInternalPressedFall.Q THEN
		IF ((clock_ms() - tyInternal.tTmPrev) < tMaxDoubleTapTm) AND (ABS(UDINT_TO_DINT(udiX) - UDINT_TO_DINT(tyInternal.udiXPrev)) < UDINT_TO_DINT(udiMinDoubleTapXDiff)) AND (ABS(UDINT_TO_DINT(udiY) - UDINT_TO_DINT(tyInternal.udiYPrev)) < UDINT_TO_DINT(udiMinDoubleTapYDiff)) THEN
			bDoubleTap		:= TRUE;
			udiDoubleTapX	:= (udiX + tyInternal.udiXPrev) / 2;
			udiDoubleTapY	:= (udiY + tyInternal.udiYPrev) / 2;
			
		END_IF
			
		IF (ABS(UDINT_TO_DINT(udiX) - UDINT_TO_DINT(tyInternal.udiXTemp)) < UDINT_TO_DINT(udiMinSingleTapXDiff)) AND (ABS(UDINT_TO_DINT(udiY) - UDINT_TO_DINT(tyInternal.udiYTemp)) < UDINT_TO_DINT(udiMinSingleTapYDiff)) THEN
			bSingleTap		:= TRUE;
			udiSingleTapX	:= tyInternal.udiXTemp;
			udiSingleTapY	:= tyInternal.udiYTemp;
			
		END_IF
		
		tyInternal.tTmPrev	:= tyInternal.tTmTemp;
		tyInternal.udiXPrev	:= tyInternal.udiXTemp;
		tyInternal.udiYPrev	:= tyInternal.udiYTemp;
		
	END_IF
	
END_FUNCTION_BLOCK
