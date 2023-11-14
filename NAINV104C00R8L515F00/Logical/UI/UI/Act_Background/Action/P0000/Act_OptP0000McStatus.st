
ACTION Act_OptP0000McStatus: 
	
	IF p_bAlarmErr = TRUE THEN
		tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx	:= 6;
		
	ELSIF p_bAlarmWarning = TRUE THEN
		tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx	:= 7;
		
	ELSIF p_eOpsOpsStatus = OperationsStatusRun THEN
		
		tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx	:= 1;
		
//	ELSIF tyOpsProgData.bSimuCtrl = TRUE THEN
//		tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx	:= 5;
		
	ELSIF bUIManualMod = TRUE THEN
		tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx	:= 3;
		
	ELSE
		tyP0000SSaver.tySSaver.tyTxtMcStat.usiValueIdx	:= 2;
		
	END_IF
	
END_ACTION
