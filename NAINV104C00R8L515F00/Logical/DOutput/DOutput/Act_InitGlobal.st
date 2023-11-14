(** 2020-10-08 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_eLinkOpsInvertInvertCurrPos ACCESS p_OpsInvertInvertCurrPos;
	p_bLinkConvMtrSigOnOrLToR ACCESS p_ConvMtrSigOnOrLToR;
	p_bLinkConvMtrDirOrRToL ACCESS p_ConvMtrDirOrRToL;
	
	p_bLinkUIConvDCCtrl ACCESS p_UIConvDCCtrl;
//	p_bLinkUIInvertDCCtrl ACCESS p_UIInvertDCCtrl;
	p_usiLinkProdRcpCurrRcpMcMod ACCESS p_ProdRcpCurrRcp1McMod;
	p_eConvStatus ACCESS p_ConvStatus;
	
	p_bLinkOpsInvertStepInitTwdStpr ACCESS p_OpsInvertStepInitTwdStpr;
	p_bLinkOpsInvertStepInitAwayStpr ACCESS p_OpsInvertStepInitAwayStpr;
	
	//Pass Data To Internal Use
	p_eAct ACCESS p_UIDOAct;
	p_tyDOSettings ACCESS p_NtParamDOSettings;
	
	p_bManual ACCESS p_UIUIMnlMod;
	p_bSafetyRlyRst ACCESS p_RstErrSafetyRlyRst;
	p_bTLWhite ACCESS p_TLBuzWhite;
	p_bTLAmber ACCESS p_TLBuzAmber;
	p_bTLGreen ACCESS p_TLBuzGreen;
	p_bTLRed ACCESS p_TLBuzRed;
	p_bTLBlue ACCESS p_TLBuzBlue;
	p_bBuz ACCESS p_TLBuzBeep;
	p_bUSB ACCESS p_USSMEMAUSB;
	p_bDBA ACCESS p_DSSMEMADBA;
	p_bUSB2 ACCESS p_USSMEMA2USB;
	p_bDBAStat ACCESS p_DSSMEMADBAStat;
	p_bStprUnblkCtrl ACCESS p_PneuNoSenStopperRetCtrl;
	p_bStprBlkCtrl ACCESS p_PneuNoSenStopperExtCtrl;
	p_bInvertHome ACCESS p_MotorBrkMtrSigOnOrCW;
	p_bInvertRemote ACCESS p_MotorBrkMtrDirOrCCW;
	p_bInvertBrake ACCESS p_MotorBrkMtrBrkRls;
	p_bClampControl ACCESS p_PneuNoSenClampExtCtrl;
	p_bUnclampControl ACCESS p_PneuNoSenClampRetCtrl;
	p_bInShutterOpenCtrl ACCESS p_Pneu2SenInShutterRetCtrl;
	p_bInShutterCloseCtrl ACCESS p_Pneu2SenInShutterExtCtrl;
	p_bOutShutterOpenCtrl ACCESS p_Pneu2SenOutShutterRetCtrl;
	p_bOutShutterCloseCtrl ACCESS p_Pneu2SenOutShutterExtCtrl;
	
	//Clamp
	p_bClamp1Ctrl ACCESS p_Pneu2SenClamp1ExtCtrl;
	p_bUnClamp1Ctrl ACCESS p_Pneu2SenClamp1RetCtrl;
	p_bClamp2Ctrl ACCESS p_Pneu2SenClamp2ExtCtrl;
	p_bUnClamp2Ctrl ACCESS p_Pneu2SenClamp2RetCtrl;
	p_bClamp3Ctrl ACCESS p_Pneu2SenClamp3ExtCtrl;
	p_bUnClamp3Ctrl ACCESS p_Pneu2SenClamp3RetCtrl;
	
	p_tyDI ACCESS p_DI;
	p_bHermesCmdInitialCompl ACCESS p_HermesCmdInitialCompl;


	(* Always Change If Project Change *)
	
	
	
END_ACTION

