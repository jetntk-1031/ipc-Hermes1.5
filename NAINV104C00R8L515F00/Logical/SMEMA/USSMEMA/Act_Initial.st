(** 2019-03-22 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbSMEMA_Std.tRstDlyTm	:= p_tRstDlyTm;
	fbSMEMA_Std(bEn := FALSE);
	
	fbSMEMA_9851.tRstDlyTm	:= p_tRstDlyTm;
	fbSMEMA_9851(bEn := FALSE);
	
	fbTimerDlyTm(IN := FALSE);
	fbTimeTrig(CLK := TRUE);
	
	fbSigInChk.tSigInChkTm	:= p_tSigInChkTm;
	
END_ACTION
