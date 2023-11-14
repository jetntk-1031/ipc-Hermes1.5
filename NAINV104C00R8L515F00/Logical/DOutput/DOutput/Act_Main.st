(** 2019-01-10 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		sStatTxt	:= a_sStatText[eStat];
			
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		DOActIdle:
			eStatus	:= Idle;
		
		DOActRstAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
//				p_bBypassCoverSwitch	:= FALSE;
				eStatus					:= Done;
				
			END_IF
		
		DOActSetBypassCoverSwitch:
			IF eStatus = Idle OR eStatus = Busy THEN
		
//				p_bBypassCoverSwitch	:= TRUE;
				eStatus					:= Done;
				
			END_IF
		
		DOActRstBypassCoverSwitch:
			IF eStatus = Idle OR eStatus = Busy THEN
		
//				p_bBypassCoverSwitch	:= FALSE;
				eStatus					:= Done;
				
			END_IF
		
	END_CASE
	
END_ACTION
