(** 2020-02-18 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		IF eStatOld <> TLBuzActIdle
			AND eStatOld <> TLBuzActSetGreen
			AND eStatOld <> TLBuzActSetAmber
			AND eStatOld <> TLBuzActSetRed
			AND eStatOld <> TLBuzActSetBlue
			AND eStatOld <> TLBuzActSetWhite
			AND eStatOld <> TLBuzActSetBuz
			AND eStatOld <> TLBuzActRstGreen
			AND eStatOld <> TLBuzActRstAmber
			AND eStatOld <> TLBuzActRstRed
			AND eStatOld <> TLBuzActRstBlue
			AND eStatOld <> TLBuzActRstWhite
			AND eStatOld <> TLBuzActRstBuz 
			AND eStatOld <> TLBuzActSetAll
			AND eStatOld <> TLBuzActRstAll THEN
			
			bTLGreen	:= FALSE;
			bTLAmber	:= FALSE;
			bTLWhite	:= FALSE;
			bTLBlue		:= FALSE;
			bTLRed		:= FALSE;
			bBuzBeep	:= FALSE;
			
		END_IF
		
		sStatTxt	:= a_sStatText[eStat];
		
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		TLBuzActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
						
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		TLBuzActSetGreen:
			IF eStatus = Idle OR eStatus = Busy THEN
						
				sStatTxt	:= a_sStatText[eStat];
		
				bTLGreen	:= TRUE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActSetAmber:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLAmber	:= TRUE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActSetRed:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLRed	:= TRUE;
				eStatus	:= Done;
				
			END_IF
			
		TLBuzActSetBlue:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLBlue		:= TRUE;
				eStatus		:= Done;
				
			END_IF
			
		TLBuzActSetWhite:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLWhite	:= TRUE;
				eStatus		:= Done;
				
			END_IF
			
		TLBuzActSetBuz:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bBuzBeep	:= TRUE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActRstGreen:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLGreen	:= FALSE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActRstAmber:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLAmber	:= FALSE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActRstRed:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLRed		:= FALSE;
				eStatus		:= Done;
				
			END_IF
			
		TLBuzActRstBlue:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLBlue		:= FALSE;
				eStatus		:= Done;
				
			END_IF
			
		TLBuzActRstWhite:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLWhite	:= FALSE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActRstBuz:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bBuzBeep	:= FALSE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActSetAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLGreen	:= TRUE;
				bTLRed		:= TRUE;
				bTLAmber	:= TRUE;
				bTLWhite	:= TRUE;
				bTLBlue		:= TRUE;
				bBuzBeep	:= TRUE;
				eStatus		:= Done;
				
			END_IF
		
		TLBuzActRstAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bTLGreen	:= FALSE;
				bTLAmber	:= FALSE;
				bTLRed		:= FALSE;
				bTLWhite	:= FALSE;
				bTLBlue		:= FALSE;
				bBuzBeep	:= FALSE;
				eStatus		:= Done;
				
			END_IF
		
	END_CASE
	
END_ACTION
