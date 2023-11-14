(** 2019-01-20 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		usiStep		:= 0;
		
		sStatTxt	:= a_sStatText[eStat];
			
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		SimulationsActIdle:
			eStatus	:= Idle;
		
		SimulationsActStart:
			IF eStatus = Idle OR eStatus = Busy THEN
	
				eSimuStatus			:= SimulationsStatusRun;
				bStatusRun			:= TRUE;
				bStatusStop			:= FALSE;
				bStatusCycleStop	:= FALSE;
				bStatusStep			:= FALSE;
				
				bRun		:= TRUE;
				bStop		:= FALSE;
				bStep		:= FALSE;
				
				eStatus	:= Done;
				
			END_IF
		
		SimulationsActStop:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				eSimuStatus			:= SimulationsStatusCycleStopping;
				bStatusRun			:= FALSE;
				bStatusStop			:= FALSE;
				bStatusCycleStop	:= TRUE;

				bStop	:= TRUE;
				
				IF p_bPaused THEN
					
					bRun	:= FALSE;
					
					eSimuStatus			:= SimulationsStatusStop;
					bStatusRun			:= FALSE;
					bStatusStop			:= TRUE;
					bStatusCycleStop	:= FALSE;
					
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
		SimulationsActStep:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				eSimuStatus			:= SimulationsStatusStep;
				bStatusRun			:= FALSE;
				bStatusStop			:= FALSE;
				bStatusCycleStop	:= FALSE;
				
				bRun	:= TRUE;
				
				CASE usiStep OF
					
					0:
						bStep	:= FALSE;
						usiStep	:= 1;
						
					1:
						bStep	:= TRUE;
						
				END_CASE
				
				IF p_bPaused THEN
					eStatus	:= Done;
				END_IF
	
			END_IF
		
		SimulationsActError:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				eSimuStatus			:= SimulationsStatusStop;
				bStatusRun			:= FALSE;
				bStatusStop			:= TRUE;
				bStatusCycleStop	:= FALSE;

				bRun		:= FALSE;
				bStop		:= FALSE;
				bStep		:= FALSE;
				
				eStatus	:= Done;
				
			END_IF
		
	END_CASE
					
END_ACTION
