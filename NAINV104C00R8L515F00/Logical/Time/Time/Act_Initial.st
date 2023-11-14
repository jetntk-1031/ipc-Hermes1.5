(** 2019-01-03 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbSetTime(enable := FALSE);
	
	fbSetTimeZone.option	:= cfgOPTION_NON_VOLATILE;
	fbSetTimeZone(enable := FALSE);
	
	fbGetTime(enable := FALSE);
	
	fbGetTime1(enable := FALSE);
	
	fbGetTimeDT.pDTStructure	:= ADR(tyCurrDTStruct);
	fbGetTimeDT(enable := FALSE);
	
	fbGetTimeDT1.pDTStructure	:= ADR(tyCurrDTStruct);
	fbGetTimeDT1(enable := FALSE);
	
	fbGetTimeZone(enable := FALSE);
	
	fbDlyTm(IN := FALSE);
	
END_ACTION
