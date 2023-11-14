
(* Runtime Status Datapoint Lock *)
FUNCTION fUIInRtStatOpenTP
	
	uiRtStat.0			:= FALSE;
	uiRtStat.1			:= FALSE;
	uiRtStat.2			:= FALSE;
	uiRtStat.3			:= TRUE;
	
	fUIInRtStatOpenTP	:= uiRtStat;
	
END_FUNCTION
