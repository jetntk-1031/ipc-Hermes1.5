(** 2020-09-22 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_sSetIPAddr ACCESS ADR(sSetIPAddr);
	p_sSetSubnetMask ACCESS ADR(sSetSubnetMask);
	p_sDevice ACCESS ADR(sDevice);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_usiNetworkMod ACCESS ADR(usiNetworkMode);
	
END_ACTION
