(** 2019-03-22 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	bTwoCtrlOut	:= p_bTwoCtrlIn;
	
	fbPneuExtChk.tDlyTm	:= p_tExtDlyTm;
	fbPneuExtChk(bEn := FALSE);
	
	fbPneuRetChk.tDlyTm	:= p_tRetDlyTm;
	fbPneuRetChk(bEn := FALSE);
	
END_ACTION
