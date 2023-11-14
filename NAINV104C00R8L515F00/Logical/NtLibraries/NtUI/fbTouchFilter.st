
(* Filter Touch Action *)
FUNCTION_BLOCK fbTouchFilter
	
	IF bPressedIn = TRUE THEN
		tyInternal.udiXOld	:= udiXIn;
		tyInternal.udiYOld	:= udiYIn;
		
		bPressedOut	:= TRUE;
		udiXOut		:= udiXIn;
		udiYOut		:= udiYIn;
		
	ELSIF (bPressedIn = FALSE) AND (tyInternal.udiXOld <> udiXIn OR tyInternal.udiYOld <> udiYIn) AND (tyInternal.udiXOld = 0 AND tyInternal.udiYOld = 0) THEN
		tyInternal.udiXOld	:= udiXIn;
		tyInternal.udiYOld	:= udiYIn;
		
		bPressedOut	:= FALSE;
		udiXOut		:= udiXIn;
		udiYOut		:= udiYIn;
		
	ELSIF (bPressedIn = FALSE) AND (tyInternal.udiXOld <> udiXIn OR tyInternal.udiYOld <> udiYIn) THEN
		tyInternal.udiXOld	:= udiXIn;
		tyInternal.udiYOld	:= udiYIn;
		
		bPressedOut	:= TRUE;
		udiXOut		:= udiXIn;
		udiYOut		:= udiYIn;
		
	ELSE
		bPressedOut	:= FALSE;
		
	END_IF
	
END_FUNCTION_BLOCK
