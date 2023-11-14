(** 2019-04-16 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_OpsStat		:= ADR(eStat);
	p_OpsStatus		:= ADR(eStatus);
	p_OpsStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_OpsOpsStatus			:= ADR(eOpsStatus);
	p_OpsStatusRun			:= ADR(bStatusRun);
	p_OpsStatusStop			:= ADR(bStatusStop);
	p_OpsStatusCycleStop	:= ADR(bStatusCycleStop);
	p_OpsStatusStep			:= ADR(bStatusStep);
	p_OpsRun				:= ADR(bRun);
	p_OpsStop				:= ADR(bStop);
	p_OpsStep				:= ADR(bStep);
	
	(* Always Change If Project Change *)
	
END_PROGRAM