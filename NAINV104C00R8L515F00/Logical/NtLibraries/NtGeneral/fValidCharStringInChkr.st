
(* Valid Character For String Input Checker *)
FUNCTION fValidCharStringInChkr
	
	// Valid character for string input checker
	// Valid characters match for string input: bValid = TRUE
	// Mismatch character can be observed on p_sMismatchChar
	//--------------------------------------------------------------------------------
	fValidCharStringInChkr	:= TRUE;
	p_sMismatchChar 		:= '';
	
	FOR tyInternal.i := 0 TO LEN(sInChk) - 1 DO
		memmove(ADR(tyInternal.sCharChk) , ADR(sInChk) + INT_TO_UDINT(tyInternal.i) , 1);
		
		fValidCharStringInChkr	:= FALSE;
		
		FOR tyInternal.j := 0 TO LEN(sValidMember) - 1 DO
			memmove(ADR(tyInternal.sValidChar) , ADR(sValidMember) + INT_TO_UDINT(tyInternal.j) , 1);
			
			IF memcmp(ADR(tyInternal.sCharChk) , ADR(tyInternal.sValidChar) , 1) = 0 THEN
				fValidCharStringInChkr := TRUE;
				EXIT;
			END_IF
		END_FOR
		
		IF fValidCharStringInChkr = FALSE THEN
			p_sMismatchChar	:= tyInternal.sCharChk;
			EXIT;
		END_IF
	END_FOR
	
END_FUNCTION
