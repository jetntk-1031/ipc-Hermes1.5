(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_USSMEMA2Stat		:= ADR(eStat);
	p_USSMEMA2Status		:= ADR(eStatus);
	p_USSMEMA2StatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_USSMEMA2AlmData	:= ADR(tyAlmData);
	
	//Output
	p_USSMEMA2USRdy			:= ADR(bUSRdy);
	p_USSMEMA2USGdBrdRdy	:= ADR(bUSGdBrdRdy);
	p_USSMEMA2DSRdy			:= ADR(bDSRdy);
	p_USSMEMA2Transporting	:= ADR(bTransporting);
	p_USSMEMA2ConvStart		:= ADR(bConvStart);
	p_USSMEMA2ConvStop		:= ADR(bConvStop);
	p_USSMEMA2USB			:= ADR(bUSB);
	p_USSMEMA2Timer			:= ADR(bTimer);
	p_USSMEMA2Virtual		:= ADR(bVirtual);
	
	(* Always Change If Project Change *)
	
END_PROGRAM
