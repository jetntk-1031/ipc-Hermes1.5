
(* Get Touch Action Coordinate *)
FUNCTION_BLOCK fbTouchGetAction
	
	IF tyInternal.udiHandle = 0 THEN
		tyInternal.udiHandle	:= VA_Setup(TRUE , sVisuNm);
	
	ELSE
		IF VA_Saccess(TRUE , tyInternal.udiHandle) = 0 THEN
			VA_GetTouchAction(TRUE , tyInternal.udiHandle , 0 , ADR(tyInternal.tyTouchAction));
			
			bPressed	:= tyInternal.tyTouchAction.status = 1;
			udiX		:= tyInternal.tyTouchAction.x;
			udiY		:= tyInternal.tyTouchAction.y;
			
			VA_Srelease(TRUE ,tyInternal.udiHandle);
			
		END_IF
		
	END_IF
	
END_FUNCTION_BLOCK
