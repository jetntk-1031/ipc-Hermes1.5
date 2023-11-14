(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_UsrFolderStat		:= ADR(eStat);
	p_UsrFolderStatus	:= ADR(eStatus);
	p_UsrFolderStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_UsrFolderAlmData	:= ADR(tyAlmData);
	
	//Output
	
	(* Always Change If Project Change *)
	
END_PROGRAM