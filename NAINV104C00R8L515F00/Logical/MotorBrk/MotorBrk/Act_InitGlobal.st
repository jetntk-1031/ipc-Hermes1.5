(** 2020-10-14 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;
	p_bLinkOpsSimu ACCESS p_SimuRun;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bManual ACCESS p_UIMnlMod;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bCWSen ACCESS p_DIInvertRemoteSen;
	p_bCCWSen ACCESS p_DIInvertHomeSen;
	
	p_diMtrOnDlyTm ACCESS p_NtParamMotorOnDlyTm;
	p_diMtrOffDlyTm ACCESS p_NtParamMotorOffDlyTm;
	p_diBrkOnDlyTm ACCESS p_NtParamBrakeOnDlyTm;
	p_diBrkOffDlyTm ACCESS p_NtParamBrakeOffDlyTm;
	p_diTimeOut ACCESS p_NtParamTimeOut;
	
	p_bInletShutterCloseRS ACCESS p_DIInShutterCloseRS;
	p_bOutletShutterCloseRS ACCESS p_DIOutShutterCloseRS;
	p_bInletShutterPrep ACCESS p_NtParamProjInletShutPrep;
	p_bInletShutterDis ACCESS p_McParamInShutterDis;
	p_bOutletShutterPrep ACCESS p_NtParamProjOutletShutPrep;
	p_bOutletShutterDis ACCESS p_McParamOutShutterDis;
	
	(* Always Change If Project Change *)
	
END_ACTION
