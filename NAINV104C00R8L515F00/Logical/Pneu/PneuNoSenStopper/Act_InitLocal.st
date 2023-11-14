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
	p_tExtDlyTm ACCESS ADR(tExtDlyTm);
	p_tRetDlyTm ACCESS ADR(tRetDlyTm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
