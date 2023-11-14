
(* Convert Input STRING to Lower Case *)
FUNCTION fConvertToLower_254
	
	fConvertToLower_254	:= TRUE;
	
	p_sOutput	:= sInput;
	
	FOR udi := 0 TO LEN(sInput) DO
		
		memcpy(ADR(si) , ADR(sInput) + udi , 1);
		
		IF si >= 65 AND si <= 90 THEN
			si	:= si + 32;
			memcpy(ADR(p_sOutput) + udi , ADR(si) , 1);
		ELSIF si = 0 THEN
			EXIT;
		END_IF
		
	END_FOR
	
END_FUNCTION
