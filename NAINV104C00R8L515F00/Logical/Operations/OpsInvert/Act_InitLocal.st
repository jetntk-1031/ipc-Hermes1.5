(** 2020-10-06 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_bRun ACCESS ADR(bRun);
	p_bStop ACCESS ADR(bStop);
	p_bStep ACCESS ADR(bStep);
	
	p_bInitGdBrd ACCESS ADR(bInitGdBrd);
	p_bInsertGdBrd ACCESS ADR(bInsertGdBrd);
	p_eConvDirection ACCESS ADR(eConvDirection);
	p_eUSCommMod ACCESS ADR(eUSCommMod);
	p_eDSCommMod ACCESS ADR(eDSCommMod);
	p_bGoToStandby ACCESS ADR(bGoToStandby);
	p_bUSAllow ACCESS ADR(bUSAllow);
	p_bDSAllow ACCESS ADR(bDSAllow);
	
	p_bRtrnUSAllow ACCESS ADR(bRtrnUSAllow);
	p_bRtrnDSAllow ACCESS ADR(bRtrnDSAllow);
	
	p_bLeftSen ACCESS ADR(bLeftSen);
	p_bRightSen ACCESS ADR(bRightSen);
	p_bMidSen ACCESS ADR(bMidSen);

	p_eUSSMEMAStat	ACCESS ADR(eUSSMEMAStat);
	p_eUSSMEMAStatus ACCESS ADR(eUSSMEMAStatus);
	p_bUSSMEMATransporting ACCESS ADR(bUSSMEMATransporting);
	p_bUSSMEMAConvStart ACCESS ADR(bUSSMEMAConvStart);
	p_bUSSMEMAConvStop ACCESS ADR(bUSSMEMAConvStop);
	p_bUSSMEMAUSRdy ACCESS ADR(bUSSMEMAUSRdy);
	p_bUSSMEMAUSGdBrdRdy ACCESS ADR(bUSSMEMAUSGdBrdRdy);
	
	p_eDSSMEMAStat	ACCESS ADR(eDSSMEMAStat);
	p_eDSSMEMAStatus ACCESS ADR(eDSSMEMAStatus);
	p_bDSSMEMAConvStart ACCESS ADR(bDSSMEMAConvStart);
	p_bDSSMEMAConvStop ACCESS ADR(bDSSMEMAConvStop);
	p_bDSSMEMATimer ACCESS ADR(bDSSMEMATimer);
	
	p_bUSHermesTransporting ACCESS ADR(bUSHermesTransporting);
	p_bUSHermesStopTransport ACCESS ADR(bUSHermesStopTransport);
	p_bUSHermesUSRdy ACCESS ADR(bUSHermesUSRdy);
	p_bUSHermesUSGdRdy ACCESS ADR(bUSHermesUSGdRdy);
	
	p_bDSHermesTransporting ACCESS ADR(bDSHermesTransporting);
	p_bDSHermesStopTransport ACCESS ADR(bDSHermesStopTransport);
	
	p_eConvStat	ACCESS ADR(eConvStat);
	p_eConvStatus ACCESS ADR(eConvStatus);
	p_bConvHvBrd ACCESS ADR(bConvHvBrd);
	
	p_eStopperStat ACCESS ADR(eStopperStat);
	p_eStopperStatus ACCESS ADR(eStopperStatus);
	p_bStopperExtended ACCESS ADR(bStopperExtended);
	p_bStopperRetracted ACCESS ADR(bStopperRetracted);
	
	p_eClampStat ACCESS ADR(eClampStat);
	p_eClampStatus ACCESS ADR(eClampStatus);
	
	p_eInletShutterStat ACCESS ADR(eInletShutterStat);
	p_eInletShutterStatus ACCESS ADR(eInletShutterStatus);
	p_bInletShutterOpen ACCESS ADR(bInletShutterOpen);
	p_bInletShutterClose ACCESS ADR(bInletShutterClose);
	
	p_eOutletShutterStat ACCESS ADR(eOutletShutterStat);
	p_eOutletShutterStatus ACCESS ADR(eOutletShutterStatus);
	p_bOutletShutterOpen ACCESS ADR(bOutletShutterOpen);
	p_bOutletShutterClose ACCESS ADR(bOutletShutterClose);
	
	p_eClamp1Stat ACCESS ADR (eClamp1Stat);
	p_eClamp1Status ACCESS ADR (eClamp1Status);
	p_bClampRS1 ACCESS ADR (bClampRS1);
	p_bUnClampRS1 ACCESS ADR ( bUnClampRS1);
	
	p_eClamp2Stat ACCESS ADR (eClamp2Stat);
	p_eClamp2Status ACCESS ADR (eClamp2Status);
	p_bClampRS2 ACCESS ADR (bClampRS2);
	p_bUnClampRS2 ACCESS ADR ( bUnClampRS2);
	
	p_eClamp3Stat ACCESS ADR (eClamp3Stat);
	p_eClamp3Status ACCESS ADR (eClamp3Status);
	p_bClampRS3 ACCESS ADR (bClampRS3);
	p_bUnClampRS3 ACCESS ADR ( bUnClampRS3);
	
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
	p_bClampDis ACCESS ADR(bClampDis);
	p_bClampPrep ACCESS ADR(bClampPrep);
	p_eClampOption ACCESS ADR(eClampOption);
	
	p_bInletShutterPrep ACCESS ADR(bInletShutterPrep);
	p_bInletShutterDis ACCESS ADR(bInletShutterDis);
	p_bOutletShutterPrep ACCESS ADR(bOutletShutterPrep);
	p_bOutletShutterDis ACCESS ADR(bOutletShutterDis);
	
	p_bClamp2Sen ACCESS ADR(bClamp2Sen);
	p_bClamp3Sen ACCESS ADR(bClamp3Sen);
	
	p_diFwdDlyTm ACCESS ADR(diFwdDlyTm);
	p_diRevDlyTm ACCESS ADR(diRevDlyTm);
	
END_ACTION
