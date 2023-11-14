
(* String Search *)
FUNCTION fStringSearch
	
	fStringSearch	:= 0;
	
	IF udiStringChkSize < INT_TO_UDINT(LEN(sSearch)) THEN
		;
	ELSE
		FOR tyInternal.i := p_StringChk TO (p_StringChk + udiStringChkSize - LEN(sSearch) + 1) DO
			IF memcmp(ADR(sSearch) , tyInternal.i , LEN(sSearch)) = 0 THEN
				fStringSearch	:= tyInternal.i - p_StringChk + 1;
				EXIT;
			ELSIF memcmp(tyInternal.i , ADR(tyInternal.usiZero) , 1) = 0 THEN
				EXIT;
			END_IF
		END_FOR
	END_IF
	
END_FUNCTION
