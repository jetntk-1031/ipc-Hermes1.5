(** 2019-04-09 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;
	p_bLinkOpsSimu ACCESS p_SimuRun;

	p_bLinkDISafetyRlySig ACCESS p_DISafetyRlySig;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamProjStopperPrep;
	p_bDis ACCESS p_McParamStopperDis;
	p_bManual ACCESS p_UIMnlMod;
	p_bTwoCtrlIn ACCESS p_NtParamStopperTwoCtrlIn;
	p_sProgNm ACCESS p_NtParamStopperProgNm;
	p_tExtDlyTm ACCESS p_NtParamStopperExtDlyTm;
	p_tRetDlyTm ACCESS p_NtParamStopperRetDlyTm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
