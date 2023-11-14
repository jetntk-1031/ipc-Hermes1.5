(** 2019-03-25 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_bRun ACCESS ADR(bRun);
	p_bStop ACCESS ADR(bStop);
	p_bStep ACCESS ADR(bStep);
	
	p_eInvertStat ACCESS ADR(eInverterStat);
	p_eInvertStatus ACCESS ADR(eInverterStatus);
	
	p_eConvStat ACCESS ADR(eConvStat);
	p_eConvStatus ACCESS ADR(eConvStatus);
	
	p_eStopperStat ACCESS ADR(eStopperStat);
	p_eStopperStatus ACCESS ADR(eStopperStatus);

	p_eInletShutterStat ACCESS ADR(eInletShutterStat);
	p_eInletShutterStatus ACCESS ADR(eInletShutterStatus);
	
	p_eOutletShutterStat ACCESS ADR(eOutletShutterStat);
	p_eOutletShutterStatus ACCESS ADR(eOutletShutterStatus);
	
	p_bConvLeftSen ACCESS ADR(bConvLeftSen);
	p_bConvRightSen ACCESS ADR(bConvRightSen);
	
	p_bInletShutterCloseRs ACCESS ADR(bInletShutterCloseRS);
	p_bOutletShutterCloseRs ACCESS ADR(bOutletShutterCloseRS);



	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	
END_ACTION
