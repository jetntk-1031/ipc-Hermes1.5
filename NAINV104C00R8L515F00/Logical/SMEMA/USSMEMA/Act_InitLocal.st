(** 2019-03-25 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_bManual ACCESS ADR(bManual);
	p_tyParam ACCESS ADR(tyParam);
	p_diTransferInTO ACCESS ADR(diTransferInTO);
	p_bDirLToR ACCESS ADR(bDirLToR);
	p_bRdyRcv ACCESS ADR(bRdyRcv);
	p_bLeftSen ACCESS ADR(bLeftSen);
	p_bRightSen ACCESS ADR(bRightSen);
	p_bComplSigOn ACCESS ADR(bComplSigOn);
	p_bUBA ACCESS ADR(bUBA);
	p_bUBAStat ACCESS ADR(bUBAStat);
	p_bTimerEnSen ACCESS ADR(bTimerEnSen);
	p_bTimerEnSenEdge ACCESS ADR(bTimerEnSenEdge);
	p_bVirtualEn ACCESS ADR(bVirtualEn);
	p_bUBAVirtual ACCESS ADR(bUBAVirtual);
	p_bUBAStatVirtual ACCESS ADR(bUBAStatVirtual);
	p_tRstDlyTm ACCESS ADR(tRstDlyTm);
	p_tSigInChkTm ACCESS ADR(tSigInChkTm);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
