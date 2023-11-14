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
	p_bTwoCtrlIn ACCESS p_NtParamClamp1TwoCtrlIn;
	p_sProgNm ACCESS p_NtParamClamp1ProgNm;
	p_bExtSen ACCESS p_DIClampRS1;
	p_bRetSen ACCESS p_DIUnClampRS1;
	p_tExtTO ACCESS p_NtParamClamp1ExtTO;
	p_tRetTO ACCESS p_NtParamClamp1RetTO;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bClampPrep ACCESS p_NtParamProjClampPrep;
	p_eClampOption ACCESS p_NtParamProjClampOption;
	
	(* Always Change If Project Change *)
	
END_ACTION
