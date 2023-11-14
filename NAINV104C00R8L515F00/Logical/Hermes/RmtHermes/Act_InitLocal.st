(** 2021-08-01 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_tyParam ACCESS ADR(tyParam);
	p_sIPAddr ACCESS ADR(sIPAddr);
	p_tyDTStructure ACCESS ADR(tyDTStructure);
	p_dtCurrDT ACCESS ADR(dtCurrDT);
	p_sMcId ACCESS ADR(sMcId);
	p_bRmtPrep ACCESS ADR(bRmtPrep);
	p_bRmtEn ACCESS ADR(bRmtEn);
	p_udiSndBffrSize ACCESS ADR(udiSndBffrSize);
	p_udiRcvBffrSize ACCESS ADR(udiRcvBffrSize);
	p_udiAliveIdleTimeInSec ACCESS ADR(udiAliveIdleTimeInSec);
	p_udiFileKeepDay ACCESS ADR(udiFileKeepDay);
	p_sConfigFileName ACCESS ADR(sConfigFileName);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_sInfoMsg ACCESS ADR(sInfoMsg);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_sInfoMsg ACCESS ADR(sInfoMsg);
	p_tyHermesConfiguration ACCESS ADR(tyHermesCurrConfiguration);
	p_iInput ACCESS ADR(iInput);
	p_iOutput ACCESS ADR(iOutput);
	
END_ACTION
