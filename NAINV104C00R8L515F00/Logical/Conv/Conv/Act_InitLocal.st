(** 2019-03-25 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	
	p_bManual ACCESS ADR(bManual);
	p_bLongBrdPrep ACCESS ADR(bLongBrdPrep);
	p_bLongBrdEn ACCESS ADR(bLongBrdEn);
	p_bOnDirMod ACCESS ADR(bOnDirMod);
	p_diInitTm ACCESS ADR(diInitTm);
	p_diRevDlyTm ACCESS ADR(diRevDlyTm);
	p_tMtrOffDlyTm ACCESS ADR(tMtrOffDlyTm);
	p_diTxInTimeOut ACCESS ADR(diTxInTimeOut);
	p_diTxOutTimeOut ACCESS ADR(diTxOutTimeOut);
	p_eDirection ACCESS ADR(eDirection);
	p_bGdBrdEnt ACCESS ADR(bGdBrdEnt);
	p_bGdBrdInit ACCESS ADR(bGdBrdInit);
	p_sProgNm ACCESS ADR(sProgNm);
	p_tPshrExtTO ACCESS ADR(tPshrExtTO);
	p_tPshrRetTO ACCESS ADR(tPshrRetTO);
	p_tPullerExtTO ACCESS ADR(tPullerExtTO);
	p_tPullerRetTO ACCESS ADR(tPullerRetTO);
	p_tRotHomeTO ACCESS ADR(tRotHomeTO);
	p_tRotRemoteTO ACCESS ADR(tRotRemoteTO);
	p_tRejectUpTO ACCESS ADR(tRejectUpTO);
	p_tRejectDownTO ACCESS ADR(tRejectDownTO);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
	p_bLeftSen ACCESS ADR(bLeftSen);
	p_bRightSen ACCESS ADR(bRightSen);
	p_bMiddleSen ACCESS ADR(bMiddleSen);
	p_bPullerChkSen ACCESS ADR(bPullerChkSen);
	p_bPshrExtSen ACCESS ADR(bPshrExtSen);
	p_bPshrRetSen ACCESS ADR(bPshrRetSen);
	p_bPshrExtSafetySen ACCESS ADR(bPshrExtSafetySen);
	p_bPshrRetSafetySen ACCESS ADR(bPshrRetSafetySen);
	p_bPullerExtSen ACCESS ADR(bPullerExtSen);
	p_bPullerRetSen ACCESS ADR(bPullerRetSen);
	p_bPullerExtSafetySen ACCESS ADR(bPullerExtSafetySen);
	p_bPullerRetSafetySen ACCESS ADR(bPullerRetSafetySen);
	p_bRotHomeSen ACCESS ADR(bRotHomeSen);
	p_bRotRemoteSen ACCESS ADR(bRotRemoteSen);
	p_bRotHomeSafetySen ACCESS ADR(bRotHomeSafetySen);
	p_bRotRemoteSafetySen ACCESS ADR(bRotRemoteSafetySen);
	p_bRejectUpSen ACCESS ADR(bRejectUpSen);
	p_bRejectDownSen ACCESS ADR(bRejectDownSen);
	p_bRejectUpSafetySen ACCESS ADR(bRejectUpSafetySen);
	p_bRejectDownSafetySen ACCESS ADR(bRejectDownSafetySen);
	
END_ACTION
