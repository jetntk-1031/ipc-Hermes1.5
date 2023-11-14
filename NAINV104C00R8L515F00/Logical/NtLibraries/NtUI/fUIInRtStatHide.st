
(* Runtime Status Datapoint Lock *)
FUNCTION fUIInRtStatHide
	
	uiRtStat.0		:= TRUE;
	uiRtStat.1		:= FALSE;
	uiRtStat.2		:= FALSE;
	uiRtStat.3		:= FALSE;
	
	fUIInRtStatHide	:= uiRtStat;
	
END_FUNCTION
