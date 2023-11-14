(** 202019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_DOStat	:= ADR(eStat);
	p_DOStatus	:= ADR(eStatus);
	p_DOStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_DO	:= ADR(tyDOutput);
	
	(* Always Change If Project Change *)
	
END_PROGRAM