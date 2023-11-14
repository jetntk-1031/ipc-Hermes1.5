(** 2020-10-14 **)
ACTION Act_InitLocal:
	
	//Input Reference Link To Local Variable
	p_eAct ACCESS ADR(eAct);
	p_udiRstErr ACCESS ADR(udiRstErr);
	p_bPrep ACCESS ADR(bPrep);
	p_bEn ACCESS ADR(bEn);
	p_bDis ACCESS ADR(bDis);
	p_bManual ACCESS ADR(bManual);
	p_bOnDirMod ACCESS ADR(bOnDirMod);
	p_diMtrSigOnDlyTm ACCESS ADR(diMtrSigOnDlyTm); //For Signal On Delay between Dir Rly and Run Rly
	p_diMtrDirOffDlyTm ACCESS ADR(diMtrDirOffDlyTm); //For Signal Off Delay between Run Rly and Dir Rly
	p_diMtrBrkOnDlyTm ACCESS ADR(diMtrBrkOnDlyTm); //For Signal Brake On Delay Tm
	p_diMtrOnDlyTm ACCESS ADR(diMtrOnDlyTm);
	p_diMtrOffDlyTm ACCESS ADR(diMtrOffDlyTm);
	p_diBrkOnDlyTm ACCESS ADR(diBrkOnDlyTm);
	p_diBrkOffDlyTm ACCESS ADR(diBrkOffDlyTm);
	p_diTimeOut ACCESS ADR(diTimeOut);
	p_sProgNm ACCESS ADR(sProgNm);
	p_bNtSettingsLoadDone ACCESS ADR(bNtSettingsLoadDone);
	p_bCCWSen ACCESS ADR(bCCWSen);
	p_bMidSen ACCESS ADR(bMidSen);
	p_bCWSen ACCESS ADR(bCWSen);
	p_bInterruptSensor ACCESS ADR(bInterruptSensor);
	
	p_bInletShutterCloseRS ACCESS ADR(bInletShutterCloseRS);
	p_bOutletShutterCloseRS ACCESS ADR(bOutletShutterCloseRS);
	p_bInletShutterPrep ACCESS ADR(bInletShutterPrep);
	p_bInletShutterDis ACCESS ADR(bInletShutterDis);
	p_bOutletShutterPrep ACCESS ADR(bOutletShutterPrep);
	p_bOutletShutterDis ACCESS ADR(bOutletShutterDis);
	
END_ACTION
