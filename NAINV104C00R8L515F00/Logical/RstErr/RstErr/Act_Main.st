(** 2019-01-18 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		RstErrActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbSafetyRlyRstTm(IN := FALSE);
						
				sStatTxt	:= a_sStatText[eStat];
		
				IF p_bManual = FALSE THEN
					bSafetyRlyRst	:= FALSE;
				END_IF
				
			END_IF
			
			IF EDGENEG(p_bManual) THEN
				bSafetyRlyRst	:= FALSE;
			END_IF
			
			eStatus	:= Idle;
		
		RstErrActRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				IF bSafetyRlyRst=FALSE THEN
					udiRstErr	:= udiRstErr + 1;
				END_IF
				
				IF p_bSafetyRlySig = FALSE THEN
					bSafetyRlyRst	:= TRUE;
				END_IF
				
				IF bSafetyRlyRst = TRUE THEN
					fbSafetyRlyRstTm(IN := TRUE, PT := T#500ms);
					
					IF fbSafetyRlyRstTm.Q = TRUE THEN
						bSafetyRlyRst	:= FALSE;
						eStatus			:= Done;
					END_IF
					
				ELSE
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
		RstErrActSetSafetyRlyRst:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				//Reset
				fbSafetyRlyRstTm(IN := FALSE);
				
				bSafetyRlyRst	:= TRUE;
				eStatus			:= Done;
				
			END_IF
		
		RstErrActRstSafetyRlyRst:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				//Reset
				fbSafetyRlyRstTm(IN := FALSE);
				
				bSafetyRlyRst	:= FALSE;
				eStatus			:= Done;
				
			END_IF
		
	END_CASE
	
END_ACTION
