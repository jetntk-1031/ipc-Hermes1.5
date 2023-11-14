(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_PneuNoSenClampStat		:= ADR(eStat);
	p_PneuNoSenClampStatus		:= ADR(eStatus);
	p_PneuNoSenClampStatTxt		:= ADR(sStatTxt);
	
	//Alarm
	p_PneuNoSenClampAlmData		:= ADR(tyAlmData);
	
	//Output
	p_PneuNoSenClampExtCtrl		:= ADR(bExtCtrl);
	p_PneuNoSenClampRetCtrl		:= ADR(bRetCtrl);
	p_PneuNoSenClampTwoCtrlOut	:= ADR(bTwoCtrlOut);
	p_PneuNoSenClampExtended	:= ADR(bExtended);
	p_PneuNoSenClampRetracted	:= ADR(bRetracted);
	
	(* Always Change If Project Change *)
	
END_PROGRAM