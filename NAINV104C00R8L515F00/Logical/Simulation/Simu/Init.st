(** 2019-03-25 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_SimuStat		:= ADR(eStat);
	p_SimuStatus	:= ADR(eStatus);
	p_SimuStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_SimuSimuStatus		:= ADR(eSimuStatus);
	p_SimuStatusRun			:= ADR(bStatusRun);
	p_SimuStatusStop		:= ADR(bStatusStop);
	p_SimuStatusCycleStop	:= ADR(bStatusCycleStop);
	p_SimuStatusStep		:= ADR(bStatusStep);

	p_SimuRun				:= ADR(bRun);
	p_SimuStop				:= ADR(bStop);
	p_SimuStep				:= ADR(bStep);

	(* Always Change If Project Change *)
	
END_PROGRAM