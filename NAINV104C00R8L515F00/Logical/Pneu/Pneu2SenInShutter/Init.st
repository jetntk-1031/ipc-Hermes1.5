(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_Pneu2SenInShutterStat			:= ADR(eStat);
	p_Pneu2SenInShutterStatus		:= ADR(eStatus);
	p_Pneu2SenInShutterStatTxt		:= ADR(sStatTxt);
	
	//Alarm
	p_Pneu2SenInShutterAlmData		:= ADR(tyAlmData);
	
	//Output
	p_Pneu2SenInShutterExtCtrl		:= ADR(bExtCtrl);
	p_Pneu2SenInShutterRetCtrl		:= ADR(bRetCtrl);
	p_Pneu2SenInShutterTwoCtrlOut	:= ADR(bTwoCtrlOut);
	p_Pneu2SenInShutterExtended		:= ADR(bExtended);
	p_Pneu2SenInShutterRetracted	:= ADR(bRetracted);
	
	(* Always Change If Project Change *)
	
END_PROGRAM