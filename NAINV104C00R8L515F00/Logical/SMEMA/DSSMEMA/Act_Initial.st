(** 2019-04-27 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbSMEMA_OppFirst.tRstDlyTm	:= p_tRstDlyTm;
	fbSMEMA_OppFirst(bEn := FALSE);
	
	fbSMEMA.tRstDlyTm	:= p_tRstDlyTm;
	fbSMEMA(bEn := FALSE);
	
	fbTimerDlyTm(IN := FALSE);
	fbTimeTrig(CLK := TRUE);
	
	fbSigInChk.tSigInChkTm	:= p_tSigInChkTm;
	
END_ACTION
