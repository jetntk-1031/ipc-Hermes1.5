(** 2019-04-09 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;
	p_bLinkOpsSimu ACCESS p_SimuRun;
	
	p_bLinkDISafetyRlySig ACCESS p_DISafetyRlySig;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bPrep ACCESS p_NtParamProjOutletShutPrep;
	p_bDis ACCESS p_McParamOutShutterDis;
	p_bManual ACCESS p_UIMnlMod;
	p_bTwoCtrlIn ACCESS p_NtParamOutShutterTwoCtrlIn;
	p_sProgNm ACCESS p_NtParamOutShutterProgNm;
	p_bExtSen ACCESS p_DIOutShutterCloseRS;	
	p_bRetSen ACCESS p_DIOutShutterOpenRS;
	p_tExtTO ACCESS p_NtParamOutShutterExtTO;
	p_tRetTO ACCESS p_NtParamOutShutterRetTO;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
