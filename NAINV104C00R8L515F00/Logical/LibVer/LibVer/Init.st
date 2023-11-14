(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_LibVerStat	:= ADR(eStat);
	p_LibVerStatus	:= ADR(eStatus);
	p_LibVerStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_LibVerAlmData	:= ADR(tyAlmData);
	
	//Output
	p_LibVerInfoOut	:= ADR(a_tyInfoOut);
	p_VerMismatch	:= ADR(a_bVerMismatch);
	
	(* Always Change If Project Change *)
	
END_PROGRAM