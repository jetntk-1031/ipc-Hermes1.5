
(* Check Input Duplicate *)
FUNCTION fCheckDuplicate
	
	fCheckDuplicate	:= 0;
	
	FOR tyInternal.i := 1 TO 100 DO
		IF a_bChkValue[tyInternal.i] = TRUE THEN
			
			tyInternal.usiCnt	:= 0;
			
			FOR tyInternal.j := 1 TO 100 DO
				IF a_usiValue[tyInternal.j] = tyInternal.i THEN
					tyInternal.usiCnt	:= tyInternal.usiCnt + 1;
					
					IF tyInternal.usiCnt > 1 THEN
						fCheckDuplicate	:= tyInternal.i;
						EXIT;
					END_IF
					
				END_IF
				
			END_FOR
			
			IF fCheckDuplicate <> 0 THEN
				EXIT;
			END_IF
			
		END_IF
		
	END_FOR
	
END_FUNCTION
