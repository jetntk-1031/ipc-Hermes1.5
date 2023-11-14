(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_PneuNoSenStopperStat			:= ADR(eStat);
	p_PneuNoSenStopperStatus		:= ADR(eStatus);
	p_PneuNoSenStopperStatTxt		:= ADR(sStatTxt);
	
	//Alarm
	p_PneuNoSenStopperAlmData		:= ADR(tyAlmData);
	
	//Output
	p_PneuNoSenStopperExtCtrl		:= ADR(bExtCtrl);
	p_PneuNoSenStopperRetCtrl		:= ADR(bRetCtrl);
	p_PneuNoSenStopperTwoCtrlOut	:= ADR(bTwoCtrlOut);
	p_PneuNoSenStopperExtended		:= ADR(bExtended);
	p_PneuNoSenStopperRetracted		:= ADR(bRetracted);
	
	(* Always Change If Project Change *)
	
END_PROGRAM