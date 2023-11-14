(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_DSSMEMAStat		:= ADR(eStat);
	p_DSSMEMAStatus		:= ADR(eStatus);
	p_DSSMEMAStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_DSSMEMAAlmData	:= ADR(tyAlmData);
	
	//Output
	p_DSSMEMAUSRdy			:= ADR(bUSRdy);
	p_DSSMEMAUSGdBrdRdy		:= ADR(bUSGdBrdRdy);
	p_DSSMEMADSRdy			:= ADR(bDSRdy);
	p_DSSMEMATransporting	:= ADR(bTransporting);
	p_DSSMEMAConvStart		:= ADR(bConvStart);
	p_DSSMEMAConvStop		:= ADR(bConvStop);
	p_DSSMEMADBA			:= ADR(bDBA);
	p_DSSMEMADBAStat		:= ADR(bDBAStat);
	p_DSSMEMATimer			:= ADR(bTimer);
	p_DSSMEMAVirtual		:= ADR(bVirtual);
	
	(* Always Change If Project Change *)
	
END_PROGRAM
