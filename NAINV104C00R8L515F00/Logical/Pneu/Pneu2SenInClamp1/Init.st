(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_Pneu2SenClamp1Stat		:= ADR(eStat);
	p_Pneu2SenClamp1Status		:= ADR(eStatus);
	p_Pneu2SenClamp1StatTxt		:= ADR(sStatTxt);
	
	//Alarm
	p_Pneu2SenClamp1AlmData		:= ADR(tyAlmData);
	
	//Output
	p_Pneu2SenClamp1ExtCtrl		:= ADR(bExtCtrl);
	p_Pneu2SenClamp1RetCtrl		:= ADR(bRetCtrl);
	p_Pneu2SenClamp1TwoCtrlOut	:= ADR(bTwoCtrlOut);
	p_Pneu2SenClamp1Extended	:= ADR(bExtended);
	p_Pneu2SenClamp1Retracted	:= ADR(bRetracted);
	
	(* Always Change If Project Change *)
	
END_PROGRAM