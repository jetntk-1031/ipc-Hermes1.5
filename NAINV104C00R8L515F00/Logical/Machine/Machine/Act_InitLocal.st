(** 2020-10-06 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
	p_bDIThermalPrtSig ACCESS ADR(bThermalPrtSig);
	p_bDIPressureSW ACCESS ADR(bPressureSW);
	
	p_tyNtParamCurr ACCESS ADR(tyNtParamCurr);
	
END_ACTION
