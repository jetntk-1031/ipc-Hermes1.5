
(* Runtime Status Datapoint Lock *)
FUNCTION fUIInRtStatFocus
		
	uiRtStat.0			:= FALSE;
	uiRtStat.1			:= FALSE;
	uiRtStat.2			:= TRUE;
	uiRtStat.3			:= FALSE;
	
	fUIInRtStatFocus	:= uiRtStat;
	
END_FUNCTION
