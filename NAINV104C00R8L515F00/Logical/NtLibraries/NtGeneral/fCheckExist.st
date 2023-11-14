
(* Check Exist Of Value *)
FUNCTION fCheckExist
	
	fCheckExist	:= 0;
	
	FOR tyInternal.i := 1 TO 50 DO
		IF a_bChkValue[tyInternal.i] = TRUE THEN
			
			FOR tyInternal.j := 1 TO 50 DO
				IF a_usiValue[tyInternal.j] = tyInternal.i THEN
					EXIT;
				END_IF
			END_FOR
			
			IF tyInternal.j = 51 THEN
				fCheckExist	:= tyInternal.i;
				EXIT;
			END_IF
			
		END_IF
		
	END_FOR
	
END_FUNCTION
