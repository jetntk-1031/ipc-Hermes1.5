(** 2020-10-06 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_UIStat	:= ADR(eStat);
	p_UIStatus	:= ADR(eStatus);
	p_UIStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	
	//Output
	p_UIStartupAct					:= ADR(eStartupAct);
	p_UIHWInfoAct					:= ADR(eHWInfoAct);
	p_UITLBuzAct					:= ADR(eTLBuzAct);
	p_UIRstErrAct					:= ADR(eRstErrAct);
	p_UIProdRcpAct					:= ADR(eProdRcpAct);
	p_UIMpProdRcpAct				:= ADR(eMpProdRcpAct);
	p_UIMcParamAct					:= ADR(eMcParamAct);
	p_UIUsrMgmtAct					:= ADR(eUsrMgmtAct);
	p_UIUSSMEMAAct					:= ADR(eUSSMEMAAct);
	p_UIDSSMEMAAct					:= ADR(eDSSMEMAAct);
	p_UIUSSMEMA2Act					:= ADR(eUSSMEMA2Act);
	p_UIStopperAct					:= ADR(eStopperAct);
	p_UIConvAct						:= ADR(eConvAct);
	p_UIAWOpenAct					:= ADR(eAWOpenAct);
	p_UIInvertAct					:= ADR(eInvertAct);
	p_UIOpsAct						:= ADR(eOpsAct);
	p_UIHermesAct					:= ADR(eHermesAct);
	p_UILFLeaderAct					:= ADR(eLFLeaderAct);
	p_UIDOAct						:= ADR(eDOAct);
	p_UIClampAct					:= ADR(eClampAct);
	p_UIInShutterAct 				:= ADR(eInShutterAct);
	p_UIOutShutterAct 				:= ADR(eOutShutterAct);
	p_UIClamp1Act	 				:= ADR(eClamp1Act);
	p_UIClamp2Act	 				:= ADR(eClamp2Act);
	p_UIClamp3Act	 				:= ADR(eClamp3Act);
	
	p_UIMcParamWr					:= ADR(tyMcParamWr);
	
	p_UIProdRcpInfoIn				:= ADR(tyProdRcpInfoIn);
	p_UIProdRcpSearch				:= ADR(sProdRcpSearch);
	p_UIProdRcpScan					:= ADR(sProdRcpScan);
	p_UIProdRcpCurrRcpWr			:= ADR(tyProdRcpCurrRcpWr);
	
	p_UIUsrMgmtInfoIn				:= ADR(tyUsrMgmtInfoIn);
	p_UIUsrMgmtAccessRightLvl1Wr	:= ADR(tyUsrMgmtAccessRightLvl1Wr);
	p_UIUsrMgmtAccessRightLvl2Wr	:= ADR(tyUsrMgmtAccessRightLvl2Wr);
	p_UIUsrMgmtAccessRightLvl3Wr	:= ADR(tyUsrMgmtAccessRightLvl3Wr);
	
	p_UIHermesUSParamWr				:= ADR(a_tyHermesUSParamWr);
	p_UIHermesDSParamWr				:= ADR(a_tyHermesDSParamWr);
	p_UIHermesSvyParamWr			:= ADR(tyHermesSvyParamWr); 
	
	p_UISetIPAddr					:= ADR(sSetIPAddr);
	p_UISetSubnetMask				:= ADR(sSetSubnetMask);
	p_UINetworkMode					:= ADR(usiNetworkModeSelected);
	
	p_UIMnlMod						:= ADR(bManualMod);
	p_UIUIMnlMod					:= ADR(bUIManualMod);
	p_UIMuteBuz						:= ADR(bMuteBuz);
	
	p_UIMnlAWGoWidth				:= ADR(diMnlAWGoWidth);
	p_UIMnlAWNomSpd					:= ADR(diMnlAWNomSpd);
	p_UIMnlAWTargetPos				:= ADR(diMnlAWTargetPos);
	p_UIMnlAWStepSize				:= ADR(diMnlAWStepSize);
	p_UIMnlAWJogSpd					:= ADR(diMnlAWJogSpd);
	
	p_UIMnlInvertNomSpd				:= ADR(diMnlInvertNomSpd);
	p_UIMnlInvertTargetPos			:= ADR(diMnlInvertTargetPos);
	p_UIMnlInvertStepSize			:= ADR(diMnlInvertStepSize);
	p_UIMnlInvertJogSpd				:= ADR(diMnlInvertJogSpd);
	
	p_UIVSMEMAUSEn					:= ADR(bVSMEMAUSEn);
	p_UIVSMEMADSEn					:= ADR(bVSMEMADSEn);
	p_UIVSMEMAUBA					:= ADR(bVSMEMAUBA);
	p_UIVSMEMAUBAStat				:= ADR(bVSMEMAUBAStat);
	p_UIVSMEMADSB					:= ADR(bVSMEMADSB);

	p_UIVSMEMAUS2En					:= ADR(bVSMEMAUS2En);
	p_UIVSMEMAUBA2					:= ADR(bVSMEMAUBA2);
	p_UIVSMEMAUBAStat2				:= ADR(bVSMEMAUBAStat2);
	
	p_UILeaderRun					:= ADR(bLeaderRun);
	
	p_UIProdAccData					:= ADR(bProdAccData);
	
	p_UIOpsBypsInitConv				:= ADR(bOpsBypsInitConv);
	
	p_UIRlsNewProd					:= ADR(bRlsNewProd);
	
	p_UIConvDCCtrl					:= ADR(tyP0931ConvInv.tyConvCom.tyBtnDCCtrl.bValue);
	
	//	p_UIInvertDCCtrl				:= ADR(tyP0931ConvInv.tyInvCom.tyBtnDCCtrl.bValue);
	
	//	p_UIInvertDCModBrakePress		:= ADR(tyP0931ConvInv.tyInvDC.tyBtnBrake.bValue);
	
	
	p_UIMismatchOverWriteConfig		:= ADR(bMismatchOverWriteConfig);
	p_UITempAddrFillDone			:= ADR(bTempAddrFillDone);
	p_UIIPConfigChgDone				:= ADR(bIPConfigChgDone);
	p_UIOverwriteIP					:= ADR(bOverwriteIP);
	p_UIOverwriteSubnet				:= ADR(bOverwriteSubnet);
	p_UIOverwriteEthMode			:= ADR(bOverwriteEthMode);
	(* Always Change If Project Change *)
	
	p_UISongTitile					:= ADR(uiSongIndex);
	p_UISongPlay					:= ADR(bSongEn);
	
	// ADD
	p_UIBypassTopCover1				:= ADR(bBypassTopCover1);		
	p_UIMachineSafetySigToDS		:= ADR(bMachineSafetySigToDS);			
	p_UIMachineSafetySigToUS		:= ADR(bMachineSafetySigToUS);		
	p_UISafetyTopCoverSWCoil1		:= ADR(bTopCoverSwitchCoil1);	
	p_UITopCvrUnlckToUS				:= ADR(bUnlockCover1Req); 
	p_UITopCvrUnlckToDS				:= ADR(bUnlockCover1Req); 
	p_UICoverPBLED1					:= ADR(bCoverPBLED1);			
	
	p_UIMnlModBypassTopCover1		:= ADR(bMnlModBypassTopCover1);		
	p_UIMnlModMachineSafetySigToDS	:= ADR(bMnlModMachineSafetySigToDS);			
	p_UIMnlModMachineSafetySigToUS	:= ADR(bMnlModMachineSafetySigToDS);			
	p_UIMnlModSafetyTopCoverSWCoil1	:= ADR(bMnlModTopCoverSwitch1);		
	p_UIMnlModTopCvrUnlckToUS		:= ADR(bMnlModUnlockCover1Req); 
	p_UIMnlModTopCvrUnlckToDS		:= ADR(bMnlModUnlockCover1Req);
	p_UIMnlModCoverPBLED1			:= ADR(bMnlModCoverPBLED1);	
	
	
	// ADD
	p_UIDSTranErr 					:= ADR(bDSTranErr);
	
	//Reset Waiting Return Board
	p_UIRtnBrdReset					:= ADR(bRtnBrdReset);
	p_UIRtnBrdResetBtn				:= ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue);
	
	p_UISimuAct						:= ADR(eSimuAct);
	p_UIMnlSimu						:= ADR(bSimuMod);
	
	P_UISectionLdr					:= ADR(tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bValue);
	
	
	p_UISaveHMIConfigure            := ADR(bSaveHMIConfigure);
	p_UISaveHMISvyConfig            := ADR(bSaveHMISvyConfig);
	p_UIQueryBoardInfo				:= ADR(bQueryBoardInfo);
	//p_UITopBarcode                  := ADR(tyP0201OpsConv.tyQueryBoardInfo.tyStringTopBarcode.sValue);
	//p_UIBottomBarcode               := ADR(tyP0201OpsConv.tyQueryBoardInfo.tyStringBottomBarcode.sValue);
	
END_PROGRAM