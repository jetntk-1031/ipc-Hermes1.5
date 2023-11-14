(** 2020-10-08 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;

	p_bLinkDISafetyRlySig ACCESS p_DISafetyRlySig;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bDis ACCESS p_McParamClampDis;
	p_bManual ACCESS p_UIMnlMod;
	p_bTwoCtrlIn ACCESS p_NtParamClampTwoCtrlIn;
	p_sProgNm ACCESS p_NtParamClampProgNm;
	p_tExtDlyTm ACCESS p_NtParamClampExtDlyTm;
	p_tRetDlyTm ACCESS p_NtParamClampRetDlyTm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bClampPrep ACCESS p_NtParamProjClampPrep;
	p_eClampOption ACCESS p_NtParamProjClampOption;
	
	(* Always Change If Project Change *)
	
END_ACTION
