(** 2019-04-28 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_MpProdRcpStat		:= ADR(eStat);
	p_MpProdRcpStatus	:= ADR(eStatus);
	p_MpProdRcpStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_MpProdRcpAlmData	:= ADR(tyAlmData);
	
	//Output
	
	(* Always Change If Project Change *)
	
END_PROGRAM