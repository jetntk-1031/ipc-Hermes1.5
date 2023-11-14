(** 2020-07-27 **)
ACTION Act_RstErr:
	
	IF p_udiRstErr <> udiRstErrOld THEN
		bRstErr			:= TRUE;
		udiRstErrOld	:= p_udiRstErr;
	ELSE
		bRstErr			:= FALSE;
	END_IF
	
	//Checking which Warning is clear 
	IF a_tyWarningCurrList[1].sMsg <> '' AND p_tyLinkLibVerAlmData.udiCode = 0 THEN
		
		FOR udi2 := 1 TO (udiWarningMax-1) DO
			udiRecorded1:= udiRecorded[udi2];
			IF 	(pa_tyAlmData[udiRecorded1].eSeverity =  AlmSeverityNA) AND udiRecorded1<> 0 THEN
				bRstWarning := TRUE;	
				EXIT;
			ELSE 
				bRstWarning := FALSE;
			END_IF
			
		END_FOR 
	ELSE
		bRstWarning := FALSE;			
	END_IF
	
	
END_ACTION
