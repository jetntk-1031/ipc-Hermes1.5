(** 2019-03-25 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_bManual ACCESS ADR(bManual);
	p_bTwoCtrlIn ACCESS ADR(bTwoCtrlIn);
	p_bExtSafetySen ACCESS ADR(bExtSafetySen);
	p_bRetSafetySen ACCESS ADR(bRetSafetySen);
	p_sProgNm ACCESS ADR(sProgNm);
	p_tExtTO ACCESS ADR(tExtTO);
	p_tRetTO ACCESS ADR(tRetTO);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_bExtSen ACCESS ADR(bExtSen);
	p_bRetSen ACCESS ADR(bRetSen);
	
END_ACTION
