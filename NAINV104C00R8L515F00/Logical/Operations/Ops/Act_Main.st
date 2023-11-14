(** 2019-04-16 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		usiStep		:= 0;
		
		sStatTxt	:= a_sStatText[eStat];
			
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		OperationsActIdle:
			eStatus	:= Idle;
		
		OperationsActStart:
			IF eStatus = Idle OR eStatus = Busy THEN
	
				eOpsStatus			:= OperationsStatusRun;
				bStatusRun			:= TRUE;
				bStatusStop			:= FALSE;
				bStatusCycleStop	:= FALSE;
				bStatusStep			:= FALSE;
				
				bRun		:= TRUE;
				bStop		:= FALSE;
				bStep		:= FALSE;
				
				eStatus	:= Done;
				
			END_IF
		
		OperationsActStop:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				eOpsStatus			:= OperationsStatusCycleStopping;
				bStatusRun			:= FALSE;
				bStatusStop			:= FALSE;
				bStatusCycleStop	:= TRUE;
				bStatusStep			:= FALSE;

				bStop	:= TRUE;
				
				IF p_bPaused THEN
					
					bRun	:= FALSE;
					
					eOpsStatus			:= OperationsStatusStop;
					bStatusRun			:= FALSE;
					bStatusStop			:= TRUE;
					bStatusCycleStop	:= FALSE;
					bStatusStep			:= FALSE;
					
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
		OperationsActStep:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				eOpsStatus			:= OperationsStatusStep;
				bStatusRun			:= FALSE;
				bStatusStop			:= FALSE;
				bStatusCycleStop	:= FALSE;
				bStatusStep			:= TRUE;
				
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
		
		OperationsActError:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				eOpsStatus			:= OperationsStatusStop;
				bStatusRun			:= FALSE;
				bStatusStop			:= TRUE;
				bStatusCycleStop	:= FALSE;
				bStatusStep			:= FALSE;
				
				bRun		:= FALSE;
				bStop		:= FALSE;
				bStep		:= FALSE;
				
				eStatus	:= Done;
				
			END_IF
		
	END_CASE
					
END_ACTION
