(** 2019-01-02 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		GeneralActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				memset(ADR(a_iIPPart), 0, SIZEOF(a_iIPPart));
				bIPValid	:= FALSE;
		
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		GeneralActIPValid:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bIPValid	:= fIPValid(p_sIPAddr , ADR(a_iIPPart));
				
				eStatus	:= Done;
				
			END_IF
		
	END_CASE
	
END_ACTION
