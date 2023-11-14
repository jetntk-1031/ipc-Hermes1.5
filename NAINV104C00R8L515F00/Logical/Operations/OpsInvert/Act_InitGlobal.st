(** 2020-10-06 **)
ACTION Act_InitGlobal:
	
	(* Always Change If Project Change *)
	
	//Pass Data To Link
	p_usiLinkProdRcpCurrRcpMcMod ACCESS p_ProdRcpCurrRcp1McMod;
	p_bLinkConvHvBrd ACCESS p_ConvHvBrd;
	
	p_bLinkInvertHomeSen ACCESS p_DIInvertHomeSen;
	p_bLinkInvertRemoteSen ACCESS p_DIInvertRemoteSen;
		
	p_bLinkUSHermesBlkUS ACCESS p_USHermesBlkUS;
	p_bLinkUSHermes2BlkUS ACCESS p_USHermes2BlkUS;
	p_bLinkFollower1USAllow ACCESS p_Follower1USAllow;
	p_bLinkFollower1DSAllow ACCESS p_Follower1DSAllow;
	p_bLinkLFFollowerUSAllow ACCESS p_LFFollowerUSAllow;
	p_bLinkLFFollowerDSAllow ACCESS p_LFFollowerDSAllow;
	
	p_bLinkFollower1WaitRlsBrd ACCESS p_Follower1WaitRlsBrd;
	
	p_diFwdDlyTm ACCESS p_NtParamConvFwdDlyTm;
	p_diRevDlyTm ACCESS p_NtParamConvRevDlyTm;
	
	p_bLinkUIRtnBrdReset ACCESS p_UIRtnBrdReset;
	p_bLinkUIRtnBrdResetBtn ACCESS p_UIRtnBrdResetBtn;
	
	//Pass Data To Internal Use
	p_udiRstErr ACCESS p_RstErrReset;
	p_bRun ACCESS p_OpsRun;
	p_bStop ACCESS p_OpsStop;
	p_bStep ACCESS p_OpsStep;
	
	p_eConvDirection ACCESS p_NtParamProjConvDir;
	p_eUSCommMod ACCESS p_McParamUSCommMod;
	p_eDSCommMod ACCESS p_McParamDSCommMod;
			
	p_eUSSMEMAStat ACCESS p_USSMEMAStat;
	p_eUSSMEMAStatus ACCESS p_USSMEMAStatus;
	p_bUSSMEMATransporting ACCESS p_USSMEMATransporting;
	p_bUSSMEMAConvStart ACCESS p_USSMEMAConvStart;
	p_bUSSMEMAConvStop ACCESS p_USSMEMAConvStop;
	p_bUSSMEMAUSRdy ACCESS p_USSMEMAUSRdy;
	p_bUSSMEMAUSGdBrdRdy ACCESS p_USSMEMAUSGdBrdRdy;
	
	p_eDSSMEMAStat ACCESS p_DSSMEMAStat;
	p_eDSSMEMAStatus ACCESS p_DSSMEMAStatus;
	p_bDSSMEMAConvStart ACCESS p_DSSMEMAConvStart;
	p_bDSSMEMAConvStop ACCESS p_DSSMEMAConvStop;
	p_bDSSMEMATimer ACCESS p_DSSMEMATimer;
	
	p_bUSHermesTransporting ACCESS p_USHermesTransporting;
	p_bUSHermesStopTransport ACCESS p_USHermesStopTransport;
	
	
	p_bUSHermesUSRdy ACCESS p_USHermesUSRdy;
	p_bUSHermesUSGdRdy ACCESS p_USHermesUSGdRdy;
	
	p_bDSHermesTransporting ACCESS p_DSHermesTransporting;
	p_bDSHermesStopTransport ACCESS p_DSHermesStopTransport;
	
	p_eConvStat ACCESS p_ConvStat;
	p_eConvStatus ACCESS p_ConvStatus;
	p_bConvHvBrd ACCESS p_ConvHvBrd;
		
	p_eStopperStat ACCESS p_PneuNoSenStopperStat;
	p_eStopperStatus ACCESS p_PneuNoSenStopperStatus;
	p_bStopperExtended ACCESS p_PneuNoSenStopperExtended;		
	p_bStopperRetracted ACCESS p_PneuNoSenStopperRetracted;	
	
	p_eClampStat ACCESS p_PneuNoSenClampStat;
	p_eClampStatus ACCESS p_PneuNoSenClampStatus;
	
	p_eInvertStat ACCESS p_MotorBrkStat;
	p_eInvertStatus ACCESS p_MotorBrkStatus;
	
	p_eInletShutterStat ACCESS p_Pneu2SenInShutterStat;
	p_eInletShutterStatus ACCESS p_Pneu2SenInShutterStatus;
	p_bInletShutterOpen ACCESS p_DIInShutterOpenRS;
	p_bInletShutterClose ACCESS p_DIInShutterCloseRS;
	
	p_eOutletShutterStat ACCESS p_Pneu2SenOutShutterStat;
	p_eOutletShutterStatus ACCESS p_Pneu2SenOutShutterStatus;
	p_bOutletShutterOpen ACCESS p_DIOutShutterOpenRS;
	p_bOutletShutterClose ACCESS p_DIOutShutterCloseRS;
	
	p_eClamp1Stat ACCESS p_Pneu2SenClamp1Stat;
	p_eClamp1Status ACCESS p_Pneu2SenClamp1Status;
	p_bClampRS1 ACCESS p_DIClampRS1;
	p_bUnClampRS1 ACCESS p_DIUnClampRS1;
	
	p_eClamp2Stat ACCESS p_Pneu2SenClamp2Stat;
	p_eClamp2Status ACCESS p_Pneu2SenClamp2Status;
	p_bClampRS2 ACCESS p_DIClampRS2;
	p_bUnClampRS2 ACCESS p_DIUnClampRS2;
	
	p_eClamp3Stat ACCESS p_Pneu2SenClamp3Stat;
	p_eClamp3Status ACCESS p_Pneu2SenClamp3Status;
	p_bClampRS3 ACCESS p_DIClampRS3;
	p_bUnClampRS3 ACCESS p_DIUnClampRS3;
	
	p_bLeftSen ACCESS p_DIConvLftSen;
	p_bRightSen ACCESS p_DIConvRgtSen;
	
	p_bClamp2Sen ACCESS p_DIClamp2Sen;
	p_bClamp3Sen ACCESS p_DIClamp3Sen;
		
	p_eAWStat ACCESS p_AWOpenStat;
	p_eAWStatus ACCESS p_AWOpenStatus;
	p_bAWWidthPosDiff ACCESS p_AWOpenWidthPosDiff;
	
	p_sProgNm ACCESS p_NtParamOpsConvProgNm;
	p_bNtSettingsLoadDone ACCESS p_StartupNtSettingsLoadDone;
	
	p_bClampDis ACCESS p_McParamClampDis;
	p_bClampPrep ACCESS p_NtParamProjClampPrep;
	p_eClampOption ACCESS p_NtParamProjClampOption;
	
	p_bInletShutterPrep ACCESS p_NtParamProjInletShutPrep;
	p_bInletShutterDis ACCESS p_McParamInShutterDis;
	p_bOutletShutterPrep ACCESS p_NtParamProjOutletShutPrep;
	p_bOutletShutterDis ACCESS p_McParamOutShutterDis;

	// Nutek Param
	p_bDBAOnRgtSen ACCESS p_NtParamProjDBAOnRgtSen;
	
	p_bMachineSafetyPrep ACCESS p_NTParamMachineSafetySig; 		// ADD
	p_bUnlockCovPrep ACCESS p_NTParamUnlockCovPrep;			  	// ADD
	p_bLinkDICoverSwitchSig2 ACCESS p_DICoverSWSig2;			// ADD
	p_bLinkUIBypsCoverSWPress1 ACCESS p_UIBypassTopCover1;		// ADD
	
	p_bLinkDIUnlockCoverSigFromDS ACCESS p_DIUnlockCoverSigFromDS;		// ADD
	p_bLinkDIUnlockCoverSigFromUS ACCESS p_DIUnlockCoverSigFromUS;		// ADD
	p_bLinkDISafetySigFromDS ACCESS p_DIUnlockSafetySigFromDS;
	p_bLinkDISafetySigFromUS ACCESS p_DIUnlockSafetySigFromUS;
	
	//InvertOnce & InvertTwice_2023_0032B01
	p_eUSComm2Mod ACCESS p_McParamUSComm2Mod;
	p_eUSSMEMA2Stat ACCESS p_USSMEMA2Stat;
	p_eUSSMEMA2Status ACCESS p_USSMEMA2Status;
	p_bUSSMEMA2Transporting ACCESS p_USSMEMA2Transporting;
	p_bUSSMEMA2ConvStart ACCESS p_USSMEMA2ConvStart;
	p_bUSSMEMA2ConvStop ACCESS p_USSMEMA2ConvStop;
	p_bUSSMEMA2USRdy ACCESS p_USSMEMA2USRdy;
	p_bUSSMEMA2USGdBrdRdy ACCESS p_USSMEMA2USGdBrdRdy;
	
	
	//Hermes Action & Route
	p_iHermesAction ACCESS p_USHermesAction;
	p_bUSReversal ACCESS p_HermesSwitchtoReverseTransport;//p_USHermes2SwitchtoReverseRcv;
	p_bHermesEntToReversePosition ACCESS p_HermesEntToReversePosition;

	
//	p_bUSHermesUSRdy ACCESS p_USHermesUSRdy;
//	p_bUSHermesUSGdRdy ACCESS p_USHermesUSGdRdy;
//	p_bDSReversal ACCESS 
	(* Always Change If Project Change *)
	
END_ACTION
