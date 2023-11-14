(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_USSMEMAStat		:= ADR(eStat);
	p_USSMEMAStatus		:= ADR(eStatus);
	p_USSMEMAStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_USSMEMAAlmData	:= ADR(tyAlmData);
	
	//Output
	p_USSMEMAUSRdy			:= ADR(bUSRdy);
	p_USSMEMAUSGdBrdRdy		:= ADR(bUSGdBrdRdy);
	p_USSMEMADSRdy			:= ADR(bDSRdy);
	p_USSMEMATransporting	:= ADR(bTransporting);
	p_USSMEMAConvStart		:= ADR(bConvStart);
	p_USSMEMAConvStop		:= ADR(bConvStop);
	p_USSMEMAUSB			:= ADR(bUSB);
	p_USSMEMATimer			:= ADR(bTimer);
	p_USSMEMAVirtual		:= ADR(bVirtual);
	
	(* Always Change If Project Change *)
	
END_PROGRAM
