(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_GeneralStat		:= ADR(eStat);
	p_GeneralStatus		:= ADR(eStatus);
	p_GeneralStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_GeneralIPPart		:= ADR(a_iIPPart);
	p_GeneralIPValid	:= ADR(bIPValid);
	
	(* Always Change If Project Change *)
	
END_PROGRAM