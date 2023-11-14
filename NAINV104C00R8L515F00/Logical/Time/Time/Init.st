(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_TimeStat		:= ADR(eStat);
	p_TimeStatus	:= ADR(eMainStatus);
	p_TimeStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_TimeAlmData	:= ADR(tyAlmData);
	p_TimeAlmData1	:= ADR(tyAlmData1);
	
	//Output
	p_TimeCurrDT		:= ADR(dtCurrDT);
	p_TimeCurrTimeZone	:= ADR(uiCurrTimeZone);
	p_TimeCurrDTStruct	:= ADR(tyCurrDTStruct);
	
	(* Always Change If Project Change *)
	
END_PROGRAM