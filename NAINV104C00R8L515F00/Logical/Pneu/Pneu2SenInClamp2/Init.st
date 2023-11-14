(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_Pneu2SenClamp2Stat		:= ADR(eStat);
	p_Pneu2SenClamp2Status		:= ADR(eStatus);
	p_Pneu2SenClamp2StatTxt		:= ADR(sStatTxt);
	
	//Alarm
	p_Pneu2SenClamp2AlmData		:= ADR(tyAlmData);
	
	//Output
	p_Pneu2SenClamp2ExtCtrl		:= ADR(bExtCtrl);
	p_Pneu2SenClamp2RetCtrl		:= ADR(bRetCtrl);
	p_Pneu2SenClamp2TwoCtrlOut	:= ADR(bTwoCtrlOut);
	p_Pneu2SenClamp2Extended	:= ADR(bExtended);
	p_Pneu2SenClamp2Retracted	:= ADR(bRetracted);
	
	(* Always Change If Project Change *)
	
END_PROGRAM