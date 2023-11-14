(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_RstErrStat	:= ADR(eStat);
	p_RstErrStatus	:= ADR(eStatus);
	p_RstErrStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_RstErrReset			:= ADR(udiRstErr);
	p_RstErrSafetyRlyRst	:= ADR(bSafetyRlyRst);
	
	(* Always Change If Project Change *)
	
END_PROGRAM