
ACTION Act_OptP0000StatDisp: 
		
	//Error / Warning / Info
	IF p_bAlarmErr = TRUE OR p_bAlarmWarning = TRUE OR p_bAlarmInfo = TRUE THEN
		
		fbErrBlinkTm(IN := TRUE);
		IF fbErrBlinkTm.Q = TRUE THEN
			fbErrBlinkTm(IN := FALSE);
			
			IF p_bAlarmErr THEN
				
				IF tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx = 1 THEN
					tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 0;
				ELSE
					tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 1;
				END_IF
				
			ELSE
				
				IF tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx = 3 THEN
					tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 0;
				ELSE
					tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 3;
				END_IF
				
			END_IF
			
		END_IF
		
	//Safety Relay Signal Activated
	ELSIF p_tyDI.bSafetyRlySig = FALSE THEN
		
		fbRstBlinkTm(IN := TRUE);
		IF fbRstBlinkTm.Q = TRUE THEN
			fbRstBlinkTm(IN := FALSE);
				
			IF tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx = 5 THEN
				tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx			:= 6;
			ELSE
				tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx			:= 5;
			END_IF
			
		END_IF	
		
	//Manual Running
	ELSIF bUIManualMod THEN
		tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 7;
		
	//Operation Cycle Stopping
	ELSIF p_eOpsOpsStatus = OperationsStatusCycleStopping THEN
		
		fbStopBlinkTm(IN := TRUE);
		IF fbStopBlinkTm.Q = TRUE THEN
			fbStopBlinkTm(IN := FALSE);
			
			IF tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx = 1 THEN
				tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 2;
			ELSE
				tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 1;
			END_IF
			
		END_IF
		
	//Operation Stepping
	ELSIF p_eOpsOpsStatus = OperationsStatusStep THEN
		tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 3;
		
	//Operation Running
	ELSIF p_eOpsOpsStatus = OperationsStatusRun THEN
		tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 2;
		
	//Standby
	ELSE
		tyP0000SSaver.tySSaver.tyBitmapStat.usiValueIdx	:= 0;
		
	END_IF
	
END_ACTION
