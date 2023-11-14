(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_Pneu2SenOutShutterStat		:= ADR(eStat);
	p_Pneu2SenOutShutterStatus		:= ADR(eStatus);
	p_Pneu2SenOutShutterStatTxt		:= ADR(sStatTxt);
	
	//Alarm
	p_Pneu2SenOutShutterAlmData		:= ADR(tyAlmData);
	
	//Output
	p_Pneu2SenOutShutterExtCtrl		:= ADR(bExtCtrl);
	p_Pneu2SenOutShutterRetCtrl		:= ADR(bRetCtrl);
	p_Pneu2SenOutShutterTwoCtrlOut	:= ADR(bTwoCtrlOut);
	p_Pneu2SenOutShutterExtended	:= ADR(bExtended);
	p_Pneu2SenOutShutterRetracted	:= ADR(bRetracted);
	
	(* Always Change If Project Change *)
	
END_PROGRAM