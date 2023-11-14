(** 2021-04-20 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_AlarmStat		:= ADR(eStat);
	p_AlarmStatus	:= ADR(eStatus);
	p_AlarmStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_AlarmErr					:= ADR(bErr);
	p_AlarmWarning				:= ADR(bWarning);
	p_AlarmCurrList				:= ADR(a_tyCurrList);
	p_AlarmRecoveryList			:= ADR(a_udiRecoveryList);
	p_AlarmHistoryList			:= ADR(a_sHistoryList);
	p_AlarmInfo					:= ADR(bInfo);
	p_AlarmInfoLF				:= ADR(bInfoLF);
	p_AlarmInfoMsg				:= ADR(sInfoMsg);
	p_AlarmHistoryFileNotFound	:= ADR(bHistoryFileNotFound);

	(* Always Change If Project Change *)
	
END_PROGRAM