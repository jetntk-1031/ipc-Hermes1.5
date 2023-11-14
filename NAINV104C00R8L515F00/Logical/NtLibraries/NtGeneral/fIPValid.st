
(* Check IP Address Validation *)
FUNCTION fIPValid
	
	fIPValid	:= FALSE;
	memset(ADR(pa_iIPPart) , 0 , SIZEOF(pa_iIPPart));
	
	IF fValidCharStringInChkr(ADR(tyInternal.sMismatchChar) , sIPAdd , '1234567890.') = TRUE THEN
		IF LEN(sIPAdd) >= 7 AND LEN(sIPAdd) <= 15 THEN
			memset(ADR(tyInternal.a_iDotPos) , 0 , SIZEOF(tyInternal.a_iDotPos));
			memset(ADR(tyInternal.a_sIPPart) , 0 , SIZEOF(tyInternal.a_sIPPart));
			memset(ADR(pa_iIPPart) , 0 , SIZEOF(pa_iIPPart));
			tyInternal.iCnt	:= 0;
			
			FOR tyInternal.i := 0 TO LEN(sIPAdd) -1 DO
				IF memcmp(ADR(sIPAdd) + tyInternal.i , ADR('.') , 1) = 0 THEN
					tyInternal.iCnt	:= tyInternal.iCnt + 1;
					IF tyInternal.iCnt < 4 THEN
						tyInternal.a_iDotPos[tyInternal.iCnt]	:= tyInternal.i + 1;
					ELSE
						EXIT;
					END_IF
				END_IF
			END_FOR
			
			IF tyInternal.iCnt = 3 THEN
				memcpy(ADR(tyInternal.a_sIPPart[1]) , ADR(sIPAdd) , tyInternal.a_iDotPos[1] - 1);
				memcpy(ADR(tyInternal.a_sIPPart[2]) , ADR(sIPAdd) + tyInternal.a_iDotPos[1] , tyInternal.a_iDotPos[2] - tyInternal.a_iDotPos[1] - 1);
				memcpy(ADR(tyInternal.a_sIPPart[3]) , ADR(sIPAdd) + tyInternal.a_iDotPos[2] , tyInternal.a_iDotPos[3] - tyInternal.a_iDotPos[2] - 1);
				memcpy(ADR(tyInternal.a_sIPPart[4]) , ADR(sIPAdd) + tyInternal.a_iDotPos[3] , LEN(sIPAdd) - tyInternal.a_iDotPos[3]);
				
				IF tyInternal.a_sIPPart[1] <> '' AND tyInternal.a_sIPPart[2] <> '' AND tyInternal.a_sIPPart[3] <> '' AND tyInternal.a_sIPPart[4] <> '' THEN
					FOR tyInternal.i := 1 TO 4 DO
						pa_iIPPart[tyInternal.i]	:= STRING_TO_INT(tyInternal.a_sIPPart[tyInternal.i]);
					END_FOR
					
					IF pa_iIPPart[1] >= 1 AND pa_iIPPart[1] <= 255 AND pa_iIPPart[2] >= 0 AND pa_iIPPart[2] <= 255 AND pa_iIPPart[3] >= 0 AND pa_iIPPart[3] <= 255 AND pa_iIPPart[4] >= 0 AND pa_iIPPart[4] <= 255 THEN
						fIPValid	:= TRUE;
					END_IF
				END_IF
			END_IF
		END_IF
	END_IF
	
END_FUNCTION
