(** 2019-04-09 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_bLinkOpsRun ACCESS p_OpsRun;
	
	p_eLinkConvDir ACCESS p_NtParamProjConvDir;
	p_bLinkNtParamDSWidthChkPrep ACCESS p_NtParamDSWidthChkPrep;
	p_bLinkMcParamDSWidthChkEn ACCESS p_McParamDSWidthChkEn;
	p_bLinkDIDSWidthChkSen ACCESS p_DIDSWidthChkSen;
	
	p_usiLinkMcMod ACCESS p_ProdRcpCurrRcp0McMod;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bManual ACCESS p_UIMnlMod;
	p_tyParam ACCESS p_McParamDSSMEMAParam;
	p_diTransferOutTO ACCESS p_McParamTranOutErrDlyTm;
	p_bLeftSen ACCESS p_DIConvLftSen;
	p_bRightSen ACCESS p_DIConvRgtSen;
	p_bDSB ACCESS p_DIDSB;
	p_bVirtualEn ACCESS p_UIVSMEMADSEn;
	p_bDSBVirtual ACCESS p_UIVSMEMADSB;
	p_tRstDlyTm ACCESS p_NtParamDSSMEMARstDlyTm;
	p_tSigInChkTm ACCESS p_NtParamDSSMEMASigInChkTm;
	p_sProgNm ACCESS p_NtParamDSSMEMAProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
//	p_bGdBrd ACCESS p_OpsInvertGdBrd;
	
	(* Always Change If Project Change *)
	
END_ACTION
