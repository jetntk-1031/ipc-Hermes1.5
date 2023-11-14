
(* Invalid Character For String Input Checker *)
FUNCTION fInvalidCharStringInChkr
	
	// Invalid character for string input checker
	// Invalid characters match for string input: bValid = TRUE
	// Match Invalid character can be observed on p_sInvalidChar
	//--------------------------------------------------------------------------------
		
	p_sInvalidChar := '';
	
	FOR tyInternal.i := 0 TO LEN(sInChk) - 1 DO
		memmove(ADR(tyInternal.sCharChk) , ADR(sInChk) + tyInternal.i , 1);
		fInvalidCharStringInChkr := FALSE;
		
		FOR tyInternal.j := 0 TO LEN(sInvalidMember) - 1 DO
			memmove(ADR(tyInternal.sInvalidChar) , ADR(sInvalidMember) + tyInternal.j , 1);
			
			IF memcmp(ADR(tyInternal.sCharChk) , ADR(tyInternal.sInvalidChar) , 1) = 0 THEN
				fInvalidCharStringInChkr := TRUE;
				EXIT;
			END_IF
		END_FOR
		
		IF fInvalidCharStringInChkr THEN
			p_sInvalidChar := tyInternal.sCharChk;
			EXIT;
		END_IF
	END_FOR
	
END_FUNCTION
