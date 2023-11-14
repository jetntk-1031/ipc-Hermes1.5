(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_MotorBrkStat		:= ADR(eStat);
	p_MotorBrkStatus	:= ADR(eStatus);
	p_MotorBrkStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_MotorBrkAlmData	:= ADR(tyAlmData);
	
	//Output
	p_MotorBrkMtrSigOnOrCW	:= ADR(bMtrSigOnOrCW);
	p_MotorBrkMtrDirOrCCW	:= ADR(bMtrDirOrCCW);
	p_MotorBrkMtrBrkRls		:= ADR(bMtrBrkRls);

	(* Always Change If Project Change *)
	
END_PROGRAM