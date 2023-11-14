
(* Runtime Status Datapoint Lock *)
FUNCTION fUIInRtStatLock
	
	uiRtStat.0		:= FALSE;
	uiRtStat.1		:= TRUE;
	uiRtStat.2		:= FALSE;
	uiRtStat.3		:= FALSE;
	
	fUIInRtStatLock	:= uiRtStat;
	
END_FUNCTION
