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
	p_bTwoCtrlIn ACCESS p_NtParamClamp2TwoCtrlIn;
	p_sProgNm ACCESS p_NtParamClamp2ProgNm;
	p_bExtSen ACCESS p_DIClampRS2;
	p_bRetSen ACCESS p_DIUnClampRS2;
	p_tExtTO ACCESS p_NtParamClamp2ExtTO;
	p_tRetTO ACCESS p_NtParamClamp2RetTO;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bClampPrep ACCESS p_NtParamProjClampPrep;
	p_eClampOption ACCESS p_NtParamProjClampOption;
	
	(* Always Change If Project Change *)
	
END_ACTION
