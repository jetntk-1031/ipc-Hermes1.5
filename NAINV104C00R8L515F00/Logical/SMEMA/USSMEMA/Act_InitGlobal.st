(** 2019-04-09 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;
	
	p_eLinkConvDir ACCESS p_NtParamProjConvDir;
	p_bLinkNtParamUSWidthChkPrep ACCESS p_NtParamUSWidthChkPrep;
	p_bLinkMcParamUSWidthChkEn ACCESS p_McParamUSWidthChkEn;
	p_bLinkDIUSWidthChkSen ACCESS p_DIUSWidthChkSen;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bManual ACCESS p_UIMnlMod;
	p_tyParam ACCESS p_McParamUSSMEMAParam;
	p_diTransferInTO ACCESS p_McParamTranInErrDlyTm;
	p_bLeftSen ACCESS p_DIConvLftSen;
	p_bRightSen ACCESS p_DIConvRgtSen;
	p_bUBA ACCESS p_DIUBA;
	p_bUBAStat ACCESS p_DIUBAStat;
	p_bVirtualEn ACCESS p_UIVSMEMAUSEn;
	p_bUBAVirtual ACCESS p_UIVSMEMAUBA;
	p_bUBAStatVirtual ACCESS p_UIVSMEMAUBAStat;
	p_tRstDlyTm ACCESS p_NtParamUSSMEMARstDlyTm;
	p_tSigInChkTm ACCESS p_NtParamUSSMEMASigInChkTm;
	p_sProgNm ACCESS p_NtParamUSSMEMAProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	(* Always Change If Project Change *)
	
END_ACTION
