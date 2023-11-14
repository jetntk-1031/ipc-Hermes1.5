(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_TLBuzStat		:= ADR(eStat);
	p_TLBuzStatus	:= ADR(eStatus);
	p_TLBuzStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_TLBuzBlue		:= ADR(bTLBlue);
	p_TLBuzRed		:= ADR(bTLRed);
	p_TLBuzAmber	:= ADR(bTLAmber);
	p_TLBuzWhite	:= ADR(bTLWhite);
	p_TLBuzGreen	:= ADR(bTLGreen);
	p_TLBuzBeep		:= ADR(bBuzBeep);
	
	(* Always Change If Project Change *)
	
END_PROGRAM