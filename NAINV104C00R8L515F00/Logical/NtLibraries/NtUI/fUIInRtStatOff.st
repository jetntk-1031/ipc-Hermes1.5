
(* Runtime Status Datapoint Lock *)
FUNCTION fUIInRtStatOff
	
	uiRtStat.0		:= FALSE;
	uiRtStat.1		:= FALSE;
	uiRtStat.2		:= FALSE;
	uiRtStat.3		:= FALSE;
	
	fUIInRtStatOff	:= uiRtStat;
	
END_FUNCTION
