(** 2019-03-22 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bRun ACCESS p_SimuRun;
	p_bStop ACCESS p_SimuStop;
	p_bStep ACCESS p_SimuStep;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	p_bInletShutterPrep ACCESS p_NtParamProjInletShutPrep;
	p_bOutletShutterPrep ACCESS p_NtParamProjOutletShutPrep;

	p_eInvertStat ACCESS p_MotorBrkStat;
	p_eInvertStatus ACCESS p_MotorBrkStatus;
	p_bInverterHomeSen ACCESS p_DIInvertHomeSen;
	p_bInverterRemoteSen ACCESS p_DIInvertRemoteSen;
	
	p_eConvStat ACCESS p_ConvStat;
	p_eConvStatus ACCESS p_ConvStatus;
	p_bConvLeftSen ACCESS p_DIConvLftSen;
	p_bConvRightSen ACCESS p_DIConvRgtSen;

	p_eInletShutterStat ACCESS p_Pneu2SenInShutterStat;
	p_eInletShutterStatus ACCESS p_Pneu2SenInShutterStatus;
	p_bInletShutterOpenRs ACCESS p_DIInShutterOpenRS;
	p_bInletShutterCloseRs ACCESS p_DIInShutterCloseRS;
	
	p_eOutletShutterStat ACCESS p_Pneu2SenOutShutterStat;
	p_eOutletShutterStatus ACCESS p_Pneu2SenOutShutterStatus;
	p_bOutletShutterOpenRs ACCESS p_DIOutShutterOpenRS;
	p_bOutletShutterCloseRs ACCESS p_DIOutShutterCloseRS;
	
	p_eStopperStat ACCESS p_PneuNoSenStopperStat;
	p_eStopperStatus ACCESS p_PneuNoSenStopperStatus;
	p_bStopperExtended ACCESS p_PneuNoSenStopperExtended;		
	p_bStopperRetracted ACCESS p_PneuNoSenStopperRetracted;	
	
	
	(* Always Change If Project Change *)
	
END_ACTION
