(** 2019-05-04 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiMax ACCESS ADR(c_udiUsrMgmtMax);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_tyInfoIn ACCESS ADR(tyInfoIn);
	p_tyAccessRightLvl1 ACCESS ADR(tyAccessRightLvl1);
	p_tyAccessRightLvl2 ACCESS ADR(tyAccessRightLvl2);
	p_tyAccessRightLvl3 ACCESS ADR(tyAccessRightLvl3);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);

END_ACTION
