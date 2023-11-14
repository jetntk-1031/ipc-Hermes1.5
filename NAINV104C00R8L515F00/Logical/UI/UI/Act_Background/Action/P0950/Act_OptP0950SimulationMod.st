
ACTION Act_OptP0950SimulationMod: 
	
	IF p_bSimuStatusRun THEN
		tyP0950Simu.tySimu.tyBtnSimu.bRtLk				:= TRUE;
	ELSE
		tyP0950Simu.tySimu.tyBtnSimu.bRtLk				:= tyP0950Simu.tySimu.tyBtnSimu.bValue;
	END_IF

	IF tyP0950Simu.tySimu.tyBtnSimu.bRtCompl THEN
		tyP0950Simu.tySimu.tyBtnSimu.bRtCompl 			:= FALSE;
		tyP0950Simu.tySimu.tyBtnSimu.bValue	  			:= TRUE;
		tyP0950Simu.tySimu.tyBtnSimu.bRtLk	  			:= TRUE;
	END_IF
	
END_ACTION
