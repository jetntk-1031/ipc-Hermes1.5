(** 2019-03-22 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	bTwoCtrlOut	:= p_bTwoCtrlIn;
	
	fbPneuExtChk.tTimeOut	:= p_tExtTO;
	fbPneuExtChk(bEn := FALSE);
	
	fbPneuRetChk.tTimeOut	:= p_tRetTO;
	fbPneuRetChk(bEn := FALSE);
	
END_ACTION
