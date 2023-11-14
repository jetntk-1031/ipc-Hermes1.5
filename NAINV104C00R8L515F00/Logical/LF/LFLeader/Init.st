(** 2019-04-30 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_LFLeaderStat		:= ADR(eStat);
	p_LFLeaderStatus	:= ADR(eStatus);
	p_LFLeaderStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_LFLeaderAlmData	:= ADR(tyAlmData);
	
	//Output
	p_LFLeaderFollowerInfo			:= ADR(a_tyFollowerInfo);
	p_LFLeaderFollowerToLeaderTag	:= ADR(a_tyFollowerToLeaderTag);
	
	(* Always Change If Project Change *)
	
END_PROGRAM
