(** 2019-03-25 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiCurrMax ACCESS ADR(c_udiAlarmCurrMax);
	p_udiHistoryMax ACCESS ADR(c_udiAlarmHistoryMax);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_dtCurrDT ACCESS ADR(dtCurrDT);
	pa_tyAlmData ACCESS ADR(a_tyAlmData);
	p_udiFileKeepDay ACCESS ADR(udiFileKeepDay);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
