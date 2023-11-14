(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_Pneu2SenClamp3Stat		:= ADR(eStat);
	p_Pneu2SenClamp3Status		:= ADR(eStatus);
	p_Pneu2SenClamp3StatTxt		:= ADR(sStatTxt);
	
	//Alarm
	p_Pneu2SenClamp3AlmData		:= ADR(tyAlmData);
	
	//Output
	p_Pneu2SenClamp3ExtCtrl		:= ADR(bExtCtrl);
	p_Pneu2SenClamp3RetCtrl		:= ADR(bRetCtrl);
	p_Pneu2SenClamp3TwoCtrlOut	:= ADR(bTwoCtrlOut);
	p_Pneu2SenClamp3Extended	:= ADR(bExtended);
	p_Pneu2SenClamp3Retracted	:= ADR(bRetracted);
	
	(* Always Change If Project Change *)
	
END_PROGRAM