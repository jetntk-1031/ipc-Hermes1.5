(*2020-10-08*)
(**)
(*Common Layer*)

TYPE
	tyLyrC0001MotionStd : 	STRUCT 
		tyBitmapOrigin : tyUIBitmap;
		tyBitmapPwr : tyUIBitmap;
		tyBitmapRst : tyUIBitmap;
		tyBitmapStop : tyUIBitmap;
		tyBitmapMc : tyUIBitmap;
		tyBtnPosLmtSen : tyUIBtn;
		tyBtnNegLmtSen : tyUIBtn;
		tyBtnJogPos : tyUIBtn;
		tyBtnJogNeg : tyUIBtn;
		tyBtnMovAbs : tyUIBtn;
		tyBtnMovRel : tyUIBtn;
		tyBtnOrigin : tyUIBtn;
		tyBtnPwr : tyUIBtn;
		tyBtnRst : tyUIBtn;
		tyBtnStop : tyUIBtn;
		tyNumCurrPos : tyUINum;
		tyNumErrCode : tyUINum;
		tyNumNomSpd : tyUINum;
		tyNumSlwSpd : tyUINum;
		tyNumStepSize : tyUINum;
		tyNumTargetPos : tyUINum;
		tyStringStat : tyUILString;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0001MotionStdAW : 	STRUCT 
		tyBitmapOrigin : tyUIBitmap;
		tyBitmapPwr : tyUIBitmap;
		tyBitmapRst : tyUIBitmap;
		tyBitmapStop : tyUIBitmap;
		tyBitmapMc : tyUIBitmap;
		tyBtnOpenLmtSen : tyUIBtn;
		tyBtnCloseLmtSen : tyUIBtn;
		tyBtnJogOpen : tyUIBtn;
		tyBtnJogClose : tyUIBtn;
		tyBtnMovAbs : tyUIBtn;
		tyBtnMovRel : tyUIBtn;
		tyBtnOrigin : tyUIBtn;
		tyBtnPwr : tyUIBtn;
		tyBtnRst : tyUIBtn;
		tyBtnStop : tyUIBtn;
		tyNumCurrPos : tyUINum;
		tyNumErrCode : tyUINum;
		tyNumNomSpd : tyUINum;
		tyNumSlwSpd : tyUINum;
		tyNumStepSize : tyUINum;
		tyNumTargetPos : tyUINum;
		tyStringStat : tyUILString;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0001MotionStdInvert : 	STRUCT 
		tyBitmapOrigin : tyUIBitmap;
		tyBitmapPwr : tyUIBitmap;
		tyBitmapRst : tyUIBitmap;
		tyBitmapStop : tyUIBitmap;
		tyBitmapMc : tyUIBitmap;
		tyBtnHmLmtSen : tyUIBtn;
		tyBtnRmtLmtSen : tyUIBtn;
		tyBtnJogHm : tyUIBtn;
		tyBtnJogRmt : tyUIBtn;
		tyBtnMovAbs : tyUIBtn;
		tyBtnMovRel : tyUIBtn;
		tyBtnOrigin : tyUIBtn;
		tyBtnPwr : tyUIBtn;
		tyBtnRst : tyUIBtn;
		tyBtnStop : tyUIBtn;
		tyNumCurrPos : tyUINum;
		tyNumErrCode : tyUINum;
		tyNumNomSpd : tyUINum;
		tyNumSlwSpd : tyUINum;
		tyNumStepSize : tyUINum;
		tyNumTargetPos : tyUINum;
		tyStringStat : tyUILString;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0002FullMask : 	STRUCT 
		tyBtnMask : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0003DualMask : 	STRUCT 
		tyBtnLeftMask : tyUIBtn;
		tyBtnRgtMask : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0004Navi : 	STRUCT 
		tyBtnLeft : tyUIBtn;
		tyBtnRgt : tyUIBtn;
		tyBtnBack : tyUIBtn;
		tyBitmapPageDisp : tyUIBitmap;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0005Main : 	STRUCT 
		tyBtnHome : tyUIBtn;
		tyBtnNotification : tyUIBtn;
		tyBtnStart : tyUIBtn;
		tyBtnStop : tyUIBtn;
		tyBtnStep : tyUIBtn;
		tyBtnReset : tyUIBtn;
		tyBitmapStatBar : tyUIBitmap;
		tyBtnMuteBuz : tyUIBtn := (uiMaskRtStat:=0);
		tyHotspotNaviStart : tyUIHotspot;
		tyBtnAlarm : tyUIBtn;
	END_STRUCT;
	tyLyrC0006Set : 	STRUCT 
		tyBtnSave : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0007Notif : 	STRUCT 
		tyTxtUsrLv : tyUITxt;
		tyTxtLFMc : tyUITxt;
		tyStringUsrNm : tyUIString;
		tyHotspotClose : tyUIHotspot;
		tyHotspotShowInfo : tyUIHotspot;
		tyBitmapShowInfo : tyUIBitmap;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0008MsgBox : 	STRUCT 
		tyBitmapIcon : tyUIBitmap;
		tyTxtTitle : tyUITxt;
		tyTxtMsg : tyUITxt;
		tyBtnYes : tyUIBtn;
		tyBtnNo : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0009Info : 	STRUCT 
		tyStringInfo : tyUILString;
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0010RcyMsg : 	STRUCT 
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
		tyTxtMsg : tyUIAlmTxt;
	END_STRUCT;
	tyLyrC0011Loading : 	STRUCT 
		tyUILoad : tyUIBitmap;
		tyStringMsg : tyUILString;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrC0012RcpPopUp : 	STRUCT 
		tyStringInfo : tyUILString;
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)
(*Layer*)

TYPE
	tyLyrP0000SSaver : 	STRUCT 
		tyTxtMcStat : tyUITxt;
		tyTxtMcNm : tyUILString;
		tyBitmapStat : tyUIBitmap;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0001Startup : 	STRUCT 
		tyBarGraphStartup : tyUIBarGraph;
		tyTxtStartupStat : tyUITxt;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0001Initial : 	STRUCT 
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0002Menu : 	STRUCT 
		tyBtnAlm : tyUIBtn;
		tyBtnCommCtrl : tyUIBtn;
		tyBtnGenInput : tyUIBtn;
		tyBtnGenOutput : tyUIBtn;
		tyBtnLang : tyUIBtn;
		tyBtnLFCtrl : tyUIBtn;
		tyBtnLFSet : tyUIBtn;
		tyBtnLogin : tyUIBtn;
		tyBtnMcInfo : tyUIBtn;
		tyBtnMcSet : tyUIBtn;
		tyBtnMnlRst : tyUIBtn;
		tyBtnMovCtrl : tyUIBtn;
		tyBtnOpt : tyUIBtn;
		tyBtnProdSel : tyUIBtn;
		tyBtnProdSet : tyUIBtn;
		tyBtnSimu : tyUIBtn;
		tyBtnUsrMgmt : tyUIBtn;
		tyBitmapMaskProdSetLCS : tyUIBitmap;
		tyGenMaskLyr : tyUILyr;
		tySetMaskLyr : tyUILyr;
		tyHotspotRstRtnBrd : tyUIHotspot;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0100Login : 	STRUCT 
		tyBtnLogin : tyUIBtn;
		tyHotspotShowLoginLvl : tyUIHotspot;
		tyHotspotBypassLogin : tyUIHotspot;
		tyStringPw : tyUIString;
		tyStringUsrNm : tyUIString;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0100Logout : 	STRUCT 
		tyBtnLogout : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0200OpsGen : 	STRUCT 
		a_tyHotspotRcyMsg : ARRAY[1..c_uiP0200TableSize]OF tyUIHotspot;
		a_tyStringAlm : ARRAY[1..c_uiP0200TableSize]OF tyUILString;
		tyBitmapDSCommIcon : tyUIBitmap;
		tyBitmapDSCommIn : tyUIBitmap;
		tyBitmapDSCommOut : tyUIBitmap;
		tyBitmapDSCommIn1 : tyUIBitmap;
		tyBitmapDSCommOut1 : tyUIBitmap;
		tyBitmapUSCommIcon : tyUIBitmap;
		tyBitmapUSCommIn : tyUIBitmap;
		tyBitmapUSCommOut : tyUIBitmap;
		tyBitmapUSCommIn1 : tyUIBitmap;
		tyBitmapUSCommOut1 : tyUIBitmap;
		tyBitmapUSCommIcon2 : tyUIBitmap;
		tyBitmapUSCommIn2 : tyUIBitmap;
		tyBitmapUSCommOut2 : tyUIBitmap;
		tyBitmapDir1 : tyUIBitmap;
		tyBitmapDir2 : tyUIBitmap;
		tyBitmapConvPCB : tyUIBitmap;
		tyBitmapStackerPCB : tyUIBitmap;
		tyBitmapAccDat : tyUIBitmap;
		tyBitmapRlsNewProd : tyUIBitmap;
		tyBitmapMc : tyUIBitmap;
		tyBitmapBypassTopCover1 : tyUIBitmap;
		tyBtnBypassTopCover1 : tyUIBtn;
		tyBtnAccDat : tyUIBtn;
		tyBtnRlsNewProd : tyUIBtn;
		tyBtnPCBReset : tyUIBtn;
		tyHotspotMc : tyUIHotspot;
		tyHotspotDSVirtual : tyUIHotspot;
		tyHotspotUSVirtual : tyUIHotspot;
		tyHotspotDSVirtual1 : tyUIHotspot;
		tyHotspotUSVirtual1 : tyUIHotspot;
		tyHotspotUSVirtual2 : tyUIHotspot;
		tyTxtUS : tyUITxt;
		tyTxtUS1 : tyUITxt;
		tyTxtUS2 : tyUITxt;
		tyTxtDS : tyUITxt;
		tyTxtDS1 : tyUITxt;
		tyTxtLdrInActiveCtrl : tyUITxt;
		tyBitmapWarningLF : tyUIBitmap;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0200OpsUSVSMEMA : 	STRUCT 
		tyBtnUBAStat : tyUIBtn;
		tyBtnUBA : tyUIBtn;
		tyBtnDual : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0200OpsDSVSMEMA : 	STRUCT 
		tyBtnDSBStat : tyUIBtn;
		tyBtnDSB : tyUIBtn;
		tyBtnDual : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0200OpsUSVSMEMA1 : 	STRUCT 
		tyBtnUBAStat : tyUIBtn;
		tyBtnUBA : tyUIBtn;
		tyBtnDual : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0200OpsDSVSMEMA1 : 	STRUCT 
		tyBtnDSBStat : tyUIBtn;
		tyBtnDSB : tyUIBtn;
		tyBtnDual : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0200OpsUSVSMEMA2 : 	STRUCT 
		tyBtnUBAStat : tyUIBtn;
		tyBtnUBA : tyUIBtn;
		tyBtnDual : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0200OpsBypsInitConv : 	STRUCT 
		tyBtnBypsInitConv : tyUIBtn;
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0201OpsConv : 	STRUCT 
		tyBitmapAccDat : tyUIBitmap;
		tyBitmapRlsNewProd : tyUIBitmap;
		tyBitmapConvPCB : tyUIBitmap;
		tyBitmapBypassTopCover1 : tyUIBitmap;
		tyBtnAccDat : tyUIBtn;
		tyBtnRlsNewProd : tyUIBtn;
		tyBtnChgParam : tyUIBtn;
		tyBtnBypassTopCover1 : tyUIBtn;
		tyHotspotIOMonitor : tyUIHotspot;
		tyNumProdWidth : tyUINum;
		tyNumProdWidth2 : tyUINum;
		tyStringProdNm : tyUILString;
		tyStringMcStatus : tyUILString;
		tyTxtMod : tyUITxt;
		tyLblFlippedBrd : tyUITxt;
		tyTxtFlippedBrd : tyUITxt;
		tyStringMatchCode : tyUIString;
		tyTxtLdrInActiveCtrl : tyUITxt;
		tyBitmapWarningLF : tyUIBitmap;
		tyBitmapMc : tyUIBitmap;
		tyLyr : tyUILyr;
		tyHotspotShowLRcp : tyUIHotspot;
	END_STRUCT;
	tyLyrP0201OpsConvIOMonitor : 	STRUCT 
		tyBtnSafetyRlySig : tyUIBtn;
		tyBtnEStop : tyUIBtn;
		tyBtnCoverSWSig : tyUIBtn;
		tyBtnUBA : tyUIBtn;
		tyBtnUBAStat : tyUIBtn;
		tyBtnDSB : tyUIBtn;
		tyBtnConvLftSen : tyUIBtn;
		tyBtnConvRgtSen : tyUIBtn;
		tyBtnPressureSW : tyUIBtn;
		tyBtnThermalPrtSig : tyUIBtn;
		tyBtnCoatingSen : tyUIBtn;
		tyBtnUSWidthChkSen : tyUIBtn;
		tyBtnDSWidthChkSen : tyUIBtn;
		tyBtnInvertHomeSen : tyUIBtn;
		tyBtnInvertRemoteSen : tyUIBtn;
		tyBtnInletShutterOpenRS : tyUIBtn;
		tyBtnInletShutterCloseRS : tyUIBtn;
		tyBtnOutletShutterOpenRS : tyUIBtn;
		tyBtnOutletShutterCloseRS : tyUIBtn;
		tyBtnSafetyRlyRst : tyUIBtn;
		tyBtnTLGreen : tyUIBtn;
		tyBtnTLAmber : tyUIBtn;
		tyBtnTLRed : tyUIBtn;
		tyBtnTLWhite : tyUIBtn;
		tyBtnTLBlue : tyUIBtn;
		tyBtnBuzzer : tyUIBtn;
		tyBtnCoatingRetCtrl : tyUIBtn;
		tyBtnUSB : tyUIBtn;
		tyBtnDBA : tyUIBtn;
		tyBtnDBAStat : tyUIBtn;
		tyBtnConvMtrCW : tyUIBtn;
		tyBtnConvMtrCCW : tyUIBtn;
		tyBtnStprUnblkCtrl : tyUIBtn;
		tyBtnStprBlkCtrl : tyUIBtn;
		tyBtnInvertHome : tyUIBtn;
		tyBtnInvertRemote : tyUIBtn;
		tyBtnInvertBrake : tyUIBtn;
		tyBtnMtrPwrRly : tyUIBtn;
		tyBtnClampCtrl : tyUIBtn;
		tyBtnUnclampCtrl : tyUIBtn;
		tyBtnInShutterOpenCtrl : tyUIBtn;
		tyBtnInShutterCloseCtrl : tyUIBtn;
		tyBtnOutShutterOpenCtrl : tyUIBtn;
		tyBtnOutShutterCloseCtrl : tyUIBtn;
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0201OpsConvIOMonitorMSafe : 	STRUCT 
		tyBtnSafetyRlySig : tyUIBtn;
		tyBtnEStop : tyUIBtn;
		tyBtnCoverSWSig : tyUIBtn;
		tyBtnUBA : tyUIBtn;
		tyBtnUBAStat : tyUIBtn;
		tyBtnDSB : tyUIBtn;
		tyBtnConvLftSen : tyUIBtn;
		tyBtnConvRgtSen : tyUIBtn;
		tyBtnPressureSW : tyUIBtn;
		tyBtnThermalPrtSig : tyUIBtn;
		tyBtnCoatingSen : tyUIBtn;
		tyBtnUSWidthChkSen : tyUIBtn;
		tyBtnDSWidthChkSen : tyUIBtn;
		tyBtnInvertHomeSen : tyUIBtn;
		tyBtnInvertRemoteSen : tyUIBtn;
		tyBtnInletShutterOpenRS : tyUIBtn;
		tyBtnInletShutterCloseRS : tyUIBtn;
		tyBtnOutletShutterOpenRS : tyUIBtn;
		tyBtnOutletShutterCloseRS : tyUIBtn;
		tyBtnClamp2Sen : tyUIBtn;
		tyBtnClamp3Sen : tyUIBtn;
		tyBtnClampRS1 : tyUIBtn;
		tyBtnUnClampRS1 : tyUIBtn;
		tyBtnClampRS2 : tyUIBtn;
		tyBtnUnClampRS2 : tyUIBtn;
		tyBtnClampRS3 : tyUIBtn;
		tyBtnUnClampRS3 : tyUIBtn;
		tyBtnCoverSWSig2 : tyUIBtn;
		tyBtnSafetySigFromUS : tyUIBtn;
		tyBtnSafetySigFromDS : tyUIBtn;
		tyBtnUnlockCoverSigFromUS : tyUIBtn;
		tyBtnUnlockCoverSigFromDS : tyUIBtn;
		tyBtnCoverUnlockPB1 : tyUIBtn;
		tyBtnSafetyRlyRst : tyUIBtn;
		tyBtnTLGreen : tyUIBtn;
		tyBtnTLAmber : tyUIBtn;
		tyBtnTLRed : tyUIBtn;
		tyBtnTLWhite : tyUIBtn;
		tyBtnTLBlue : tyUIBtn;
		tyBtnBuzzer : tyUIBtn;
		tyBtnCoatingRetCtrl : tyUIBtn;
		tyBtnUSB : tyUIBtn;
		tyBtnDBA : tyUIBtn;
		tyBtnDBAStat : tyUIBtn;
		tyBtnConvMtrCW : tyUIBtn;
		tyBtnConvMtrCCW : tyUIBtn;
		tyBtnInvertHome : tyUIBtn;
		tyBtnInvertRemote : tyUIBtn;
		tyBtnInvertBrake : tyUIBtn;
		tyBtnMtrPwrRly : tyUIBtn;
		tyBtnInShutterOpenCtrl : tyUIBtn;
		tyBtnInShutterCloseCtrl : tyUIBtn;
		tyBtnOutShutterOpenCtrl : tyUIBtn;
		tyBtnOutShutterCloseCtrl : tyUIBtn;
		tyBtnClamp1Ctrl : tyUIBtn;
		tyBtnUnclamp1Ctrl : tyUIBtn;
		tyBtnClamp2Ctrl : tyUIBtn;
		tyBtnUnclamp2Ctrl : tyUIBtn;
		tyBtnClamp3Ctrl : tyUIBtn;
		tyBtnUnclamp3Ctrl : tyUIBtn;
		tyBtnTopCvrUnlckToDS : tyUIBtn;
		tyBtnTopCvrUnlckToUS : tyUIBtn;
		tyBtniMachineSafetySigToDS : tyUIBtn;
		tyBtnMachineSafetySigToUS : tyUIBtn;
		tyBtnPBLED1 : tyUIBtn;
		tyBtnBypassTopCover1 : tyUIBtn;
		tyBtnSafetyTopCoverSWCoil1 : tyUIBtn;
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0201OpsConvIOMonitorXStd : 	STRUCT 
		tyBtnSafetyRlySig : tyUIBtn;
		tyBtnEStop : tyUIBtn;
		tyBtnCoverSWSig : tyUIBtn;
		tyBtnUBA : tyUIBtn;
		tyBtnUBAStat : tyUIBtn;
		tyBtnDSB : tyUIBtn;
		tyBtnUBA2 : tyUIBtn;
		tyBtnUBAStat2 : tyUIBtn;
		tyBtnConvLftSen : tyUIBtn;
		tyBtnConvRgtSen : tyUIBtn;
		tyBtnPressureSW : tyUIBtn;
		tyBtnThermalPrtSig : tyUIBtn;
		tyBtnCoatingSen : tyUIBtn;
		tyBtnUSWidthChkSen : tyUIBtn;
		tyBtnDSWidthChkSen : tyUIBtn;
		tyBtnInvertHomeSen : tyUIBtn;
		tyBtnInvertRemoteSen : tyUIBtn;
		tyBtnInletShutterOpenRS : tyUIBtn;
		tyBtnInletShutterCloseRS : tyUIBtn;
		tyBtnOutletShutterOpenRS : tyUIBtn;
		tyBtnOutletShutterCloseRS : tyUIBtn;
		tyBtnClamp2Sen : tyUIBtn;
		tyBtnClamp3Sen : tyUIBtn;
		tyBtnClampRS1 : tyUIBtn;
		tyBtnUnClampRS1 : tyUIBtn;
		tyBtnClampRS2 : tyUIBtn;
		tyBtnUnClampRS2 : tyUIBtn;
		tyBtnClampRS3 : tyUIBtn;
		tyBtnUnClampRS3 : tyUIBtn;
		tyBtnSafetyRlyRst : tyUIBtn;
		tyBtnTLGreen : tyUIBtn;
		tyBtnTLAmber : tyUIBtn;
		tyBtnTLRed : tyUIBtn;
		tyBtnTLWhite : tyUIBtn;
		tyBtnTLBlue : tyUIBtn;
		tyBtnBuzzer : tyUIBtn;
		tyBtnCoatingRetCtrl : tyUIBtn;
		tyBtnUSB : tyUIBtn;
		tyBtnDBA : tyUIBtn;
		tyBtnDBAStat : tyUIBtn;
		tyBtnUSB2 : tyUIBtn;
		tyBtnConvMtrCW : tyUIBtn;
		tyBtnConvMtrCCW : tyUIBtn;
		tyBtnInvertHome : tyUIBtn;
		tyBtnInvertRemote : tyUIBtn;
		tyBtnInvertBrake : tyUIBtn;
		tyBtnMtrPwrRly : tyUIBtn;
		tyBtnInShutterOpenCtrl : tyUIBtn;
		tyBtnInShutterCloseCtrl : tyUIBtn;
		tyBtnOutShutterOpenCtrl : tyUIBtn;
		tyBtnOutShutterCloseCtrl : tyUIBtn;
		tyBtnClamp1Ctrl : tyUIBtn;
		tyBtnUnclamp1Ctrl : tyUIBtn;
		tyBtnClamp2Ctrl : tyUIBtn;
		tyBtnUnclamp2Ctrl : tyUIBtn;
		tyBtnClamp3Ctrl : tyUIBtn;
		tyBtnUnclamp3Ctrl : tyUIBtn;
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0201OpsConvChgParam : 	STRUCT 
		tyDrpDnMcMode : tyUIDrpDn;
		tyDrpDnFlippedBrd : tyUIDrpDn;
		tyNumProdWidth : tyUINum;
		tyBtnSave : tyUIBtn;
		tyBtnCancel : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0201OpsConvBypsInitConv : 	STRUCT 
		tyBtnBypsInitConv : tyUIBtn;
		tyHotspotClose : tyUIHotspot;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0300McInfo : 	STRUCT 
		tyTxtNtAddr : tyUITxt;
		tyStringMcNm : tyUIString;
		tyStringJobNo : tyUIString;
		tyStringSoftwareVer : tyUIString;
		tyBtnPlaySong : tyUIBtn;
		tyDrpDnSong : tyUIDrpDn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0400ProdSel : 	STRUCT 
		tyBtnLoad : tyUIBtn;
		tyBtnPreview : tyUIBtn;
		tyNumProdWidth : tyUINum;
		tyNumProdWidth2 : tyUINum;
		tyStringRecipeNm : tyUILString;
		tyStringSearch : tyUILString;
		tyTableRecipe : tyUITable;
		tyTxtMcMod : tyUITxt;
		tyTxtFlippedBrd : tyUITxt;
		tyTxtMatchCodeLbl : tyUITxt;
		tyStringMatchCode : tyUIString;
		tyBtnSort : tyUIBtn;
		tyLyr : tyUILyr;
		tyHotspotShowLRcp : tyUIHotspot;
	END_STRUCT;
	tyLyrP0400RcpDet : 	STRUCT 
		tyHotspotClose : tyUIHotspot;
		tyNumProdWidth : tyUINum;
		tyNumProdWidth2 : tyUINum;
		tyStringRecipeNm : tyUILString;
		tyTxtMcMod : tyUITxt;
		tyTxtFlippedBrd : tyUITxt;
		tyTxtMatchCodeLbl : tyUITxt;
		tyStringMatchCode : tyUIString;
		tyLyr : tyUILyr;
		tyHotspotShowLRcp : tyUIHotspot;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0600Alm : 	STRUCT 
		tyBtnHistory : tyUIBtn;
		tyBtnCurr : tyUIBtn;
		a_tyStringAlm : ARRAY[0..c_uiP0600TableSize]OF tyUILString;
		a_tyHotspotAlm : ARRAY[0..c_uiP0600TableSize]OF tyUIHotspot;
		tyLyr : tyUILyr;
		tyAlarm : tyUIAlarm;
		tyBtnHistoryUp : tyUIBtn;
		tyBtnHistoryDown : tyUIBtn;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0700LFCtrl : 	STRUCT 
		tyBtnChgAll : tyUIBtn;
		tyBtnChgSeqAuto : tyUIBtn := (uiMaskRtStat:=0);
		tyBtnChgSeqMnl : tyUIBtn := (uiMaskRtStat:=0);
		tyBtnSyncTm : tyUIBtn;
		tyBitmapChgAll : tyUIBitmap;
		tyBitmapChgSeqAuto : tyUIBitmap;
		tyBitmapChgSeqMnl : tyUIBitmap;
		tyBitmapSyncTm : tyUIBitmap;
		tyTable1List : tyUITable1;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0900GenIn : 	STRUCT 
		tyBtnEStop : tyUIBtn;
		tyBtnCoverSW : tyUIBtn;
		tyBtnSafety : tyUIBtn;
		tyLyr : tyUILyr;
		tyBtnUSWidthChkSen : tyUIBtn;
		tyBtnDSWidthChkSen : tyUIBtn;
		tyBtnPressureSW : tyUIBtn;
		tyBtnThermalPrtSig : tyUIBtn;
		tyBtnUnlkCovPB : tyUIBtn;
		tyBtnSafetySigFromUS : tyUIBtn;
		tyBtnSafetySigFromDS : tyUIBtn;
		tyBtnUlkCoverFromDS : tyUIBtn;
		tyBtnUlkCoverFromUS : tyUIBtn;
		tyBtnTopCovSwSIg : tyUIBtn;
		tySigLyr : tyUILyr;
		tyWidthChkLyr : tyUILyr;
		tyMachSafetyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0910GenOut : 	STRUCT 
		tyBtnTLGreen : tyUIBtn;
		tyBtnTLAmber : tyUIBtn;
		tyBtnTLRed : tyUIBtn;
		tyBtnTLRed1 : tyUIBtn;
		tyBtnTLBlue : tyUIBtn;
		tyBtnTLWhite : tyUIBtn;
		tyBtnBuzzer : tyUIBtn;
		tyBtnSafety : tyUIBtn;
		tyBtnUlkCovPBLED : tyUIBtn;
		tyBtnUlkCovHoldRely : tyUIBtn;
		tyBtnSftUlkCovSWCoil : tyUIBtn;
		tyBtnTopCovUlkUSDS : tyUIBtn;
		tyBtnSftSigToUSDS : tyUIBtn;
		tyUlkCovLyr : tyUILyr;
		tyMacSafetyLyr : tyUILyr;
		tyLyr : tyUILyr;
		tyTLLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0920MtrNPneuCtrl : 	STRUCT 
		tyBtnAW : tyUIBtn;
		tyBitmapAW : tyUIBitmap;
		tyBtnShutter : tyUIBtn;
		tyBitmapShutter : tyUIBitmap;
		tyBtnClampNoRS : tyUIBtn;
		tyBtnClampWithRS : tyUIBtn;
		tyBtnStopper : tyUIBtn;
		tyBtnConv : tyUIBtn;
		tyBitmapConv : tyUIBitmap;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0921ClampNoRSCom : 	STRUCT 
		tyBitmapMc : tyUIBitmap;
		tyBtnDCCtrl : tyUIBtn;
		tyBtnExtRS : tyUIBtn;
		tyBtnRetRS : tyUIBtn;
		tyTxtSubTitle : tyUITxt;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0921ClampNoRSDC : 	STRUCT 
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0921ClampNoRSFB : 	STRUCT 
		tyStringStat : tyUILString;
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0922InletShutterCom : 	STRUCT 
		tyBtnSwitch : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
		tyBtnOpenRS : tyUIBtn;
		tyBtnCloseRS : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0922InletShutterDC : 	STRUCT 
		tyBtnOpen : tyUIBtn;
		tyBtnClose : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0922InletShutterFB : 	STRUCT 
		tyStringStat : tyUILString;
		tyBtnOpen : tyUIBtn;
		tyBtnClose : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0922InletShutterDis : 	STRUCT 
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0922OutletShutterCom : 	STRUCT 
		tyBtnSwitch : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
		tyBtnOpenRS : tyUIBtn;
		tyBtnCloseRS : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0922OutletShutterDC : 	STRUCT 
		tyBtnOpen : tyUIBtn;
		tyBtnClose : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0922OutletShutterFB : 	STRUCT 
		tyStringStat : tyUILString;
		tyBtnOpen : tyUIBtn;
		tyBtnClose : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0922OutletShutterDis : 	STRUCT 
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0923StopperCom : 	STRUCT 
		tyBtnDCCtrl : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0923StopperDC : 	STRUCT 
		tyBtnExtend : tyUIBtn;
		tyBtnRetract : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0923StopperFB : 	STRUCT 
		tyBtnExtend : tyUIBtn;
		tyBtnRetract : tyUIBtn;
		tyStringStat : tyUILString;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0924Clamp1WithRSCom : 	STRUCT 
		tyBtnSwitch : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
		tyBtnClampRS : tyUIBtn;
		tyBtnUnClampRS : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp1WithRSDC : 	STRUCT 
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp1WithRSDis : 	STRUCT 
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp1WithRSFB : 	STRUCT 
		tyStringStat : tyUILString;
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp2WithRSCom : 	STRUCT 
		tyBtnSwitch : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
		tyBtnClampRS : tyUIBtn;
		tyBtnUnClampRS : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp2WithRSDC : 	STRUCT 
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp2WithRSDis : 	STRUCT 
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp2WithRSFB : 	STRUCT 
		tyStringStat : tyUILString;
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp3WithRSCom : 	STRUCT 
		tyBtnSwitch : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
		tyBtnClampRS : tyUIBtn;
		tyBtnUnClampRS : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp3WithRSDC : 	STRUCT 
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp3WithRSDis : 	STRUCT 
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0924Clamp3WithRSFB : 	STRUCT 
		tyStringStat : tyUILString;
		tyBtnExt : tyUIBtn;
		tyBtnRet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0931ConvCom : 	STRUCT 
		tyBtnLft : tyUIBtn;
		tyBtnRgt : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
		tyBtnDCCtrl : tyUIBtn;
	END_STRUCT;
	tyLyrP0931ConvDC : 	STRUCT 
		tyBtnConvLToR : tyUIBtn;
		tyBtnConvRToL : tyUIBtn;
		tyBtnStop : tyUIBtn := (bRtLk:=TRUE,bValue:=TRUE);
		tyLyr : tyUILyr := (uiRtStat:=1);
	END_STRUCT;
	tyLyrP0931ConvFB : 	STRUCT 
		tyBtnEnt : tyUIBtn;
		tyBtnExit : tyUIBtn;
		tyBtnPreExit : tyUIBtn;
		tyBtnStop : tyUIBtn := (bRtLk:=TRUE,bValue:=TRUE);
		tyLyr : tyUILyr;
		tyStringStat : tyUILString;
	END_STRUCT;
	tyLyrP0931InvCom : 	STRUCT 
		tyBtnHomeSen : tyUIBtn;
		tyBtnRemoteSen : tyUIBtn;
		tyBtnDCCtrl : tyUIBtn;
		tyBitmapMc : tyUIBitmap;
	END_STRUCT;
	tyLyrP0931InvDC : 	STRUCT 
		tyBtnBrake : tyUIBtn;
		tyBtnCCW : tyUIBtn;
		tyBtnCW : tyUIBtn;
		tyLyr : tyUILyr := (uiRtStat:=1);
	END_STRUCT;
	tyLyrP0931InvFB : 	STRUCT 
		tyBtnCCW : tyUIBtn;
		tyBtnCW : tyUIBtn;
		tyBtnStop : tyUIBtn := (bRtLk:=TRUE,bValue:=TRUE);
		tyLyr : tyUILyr;
		tyStringStat : tyUILString;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0934AW : 	STRUCT 
		tyBitmapMc : tyUIBitmap;
		tyBtnGo : tyUIBtn;
		tyNumNewWidth : tyUINum;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)
(**)

TYPE
	tyLyrP0940CommCtrlDSSMEMA : 	STRUCT 
		tyBtnDBA : tyUIBtn;
		tyBtnDBAStat : tyUIBtn;
		tyBtnDSB : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0940CommCtrlUSSMEMA : 	STRUCT 
		tyBtnUBA : tyUIBtn;
		tyBtnUBAStat : tyUIBtn;
		tyBtnUSB : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP0940CommCtrlUSSMEMA2 : 	STRUCT 
		tyBtnUBA : tyUIBtn;
		tyBtnUBAStat : tyUIBtn;
		tyBtnUSB : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP0950Simu : 	STRUCT 
		tyBtnSimu : tyUIBtn := (bRtLk:=TRUE,bValue:=TRUE);
		tyBtnStart : tyUIBtn;
		tyBtnStop : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1000Lang : 	STRUCT 
		tyBtnChinese : tyUIBtn;
		tyBtnEnglish : tyUIBtn;
		tyBtnGerman : tyUIBtn;
		tyNumYear : tyUINum;
		tyNumMonth : tyUINum;
		tyNumDay : tyUINum;
		tyNumHour : tyUINum;
		tyNumMinute : tyUINum;
		tyNumSecond : tyUINum;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1020McSetNavi : 	STRUCT 
		tyBtnMcSet : tyUIBtn;
		tyBtnVCommSet : tyUIBtn;
		tyBtnHCommSet : tyUIBtn;
		tyBtnAntiGapSet : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1021McSetGen : 	STRUCT 
		tyBtnAutoStepEn : tyUIBtn;
		tyBtnAWDis : tyUIBtn;
		tyBtnChgParamEn : tyUIBtn;
		tyBtnHermesRmtEn : tyUIBtn;
		tyBtnMnlAccDat : tyUIBtn;
		tyBtnVSMEMAEn : tyUIBtn;
		tyDrpDnDefaultMcMod : tyUIDrpDn;
		tyDrpDnDefaultFlippedBrd : tyUIDrpDn;
		tyDrpDnNetworkMod : tyUIDrpDn;
		tyTxtLblFlippedBrd : tyUITxt;
		tyHermesRemoteEn : tyUIBtn;
		tyBtnHermesSvyEn : tyUIBtn;
		tyLyrGen1 : tyUILyr;
		tyLyrGen2 : tyUILyr;
		tyNumConvInitTm : tyUINum;
		tyNumTranInErrDlyTm : tyUINum;
		tyNumTranOutErrDlyTm : tyUINum;
		tyNumWidthAtHm : tyUINum;
		tyTxtWidthOffset : tyUITxt;
		tyNumWidthOffset : tyUINum;
		tyStringMcNm : tyUIString;
		tyTxtWidthAtHm : tyUITxt;
		tyBtnSSaverEn : tyUIBtn;
		tyNumSSaverTm : tyUINum;
		tyTxtSSaverTm : tyUITxt;
		tyStringSubnetMask : tyUIString;
		tyStringIPAddr : tyUIString;
		tyNumStopperAtLftPos : tyUINum;
		tyNumStopperAtRgtPos : tyUINum;
		tyBtnStopperAtLftPosTeach : tyUIBtn;
		tyBtnStopperAtRgtPosTeach : tyUIBtn;
		tyBtnClampDis : tyUIBtn;
		tyBtnStopperDis : tyUIBtn;
		tyNumAutoLogoutTm : tyUINum;
		tyTxtLblAutoLogoutTm : tyUITxt;
		tyBtnAutoLogoutEn : tyUIBtn;
		tyBtnLFBuzMute : tyUIBtn;
	END_STRUCT;
	tyLyrP1021McSetNetwork : 	STRUCT 
		tyStringIPAddr : tyUIString;
		tyStringSubnetMask : tyUIString;
		tyBtnSave : tyUIBtn;
		tyBtnCancel : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1022McSetVCommSel : 	STRUCT 
		tyBtnLF : tyUIBtn;
		tyBtnLCSLF : tyUIBtn;
		tyBtnLCSReqRcp : tyUIBtn;
		tyBtnLCSManageRcp : tyUIBtn;
		tyBtnLCSLiveDat : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP1022McSetVCommLF : 	STRUCT 
		tyBtnLeaderMc : tyUIBtn;
		tyBtnSectionLdr : tyUIBtn;
		tyBtnDBAOnWOAlign : tyUIBtn;
		tyBtnUSWidthChkEn : tyUIBtn;
		tyBtnDSWidthChkEn : tyUIBtn;
		tyBtnSeqStayActive : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP1022McSetVCommSvy : 	STRUCT 
		tyNumSndAliveTm : tyUINum;
		tyNumSvySystemPort : tyUINum;
		tyBtnConfiguration : tyUIBtn;
		tyBtnCheckAliveResponse : tyUIBtn;
		tyBtnBoardTracking : tyUIBtn;
		tyBtnQueryWorkOrderInfo : tyUIBtn;
		tyBtnSendWorkOrderInfo : tyUIBtn;
		tyBtnInsertBrd : tyUIBtn;
		tyBitmapMask : tyUIBitmap;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1023McSetHCommSel : 	STRUCT 
		tyBtnSMEMA : tyUIBtn := (bRtLk:=TRUE,bValue:=TRUE);
		tyBtnHermes : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP1023McSetHCommSMEMA : 	STRUCT 
		tyDrpDnSMEMAMod : tyUIDrpDn;
		tyBtnGdSig : tyUIBtn;
		tyLyr : tyUILyr := (uiRtStat:=1);
	END_STRUCT;
	tyLyrP1023McSetHCommUSHermes : 	STRUCT 
		tyNumSndAliveTm : tyUINum;
		tyNumLaneID : tyUINum;
		tyNumHostPort : tyUINum;
		tyStringHostAddr : tyUIString;
		tyBtnCheckAliveResponse : tyUIBtn;
		tyBtnOverWrite : tyUIBtn;
		tyBtnCmpParam : tyUIBtn;
		tyBtnCmpTypeId : tyUIBtn;
		tyBtnCommand : tyUIBtn;
		tyBtnBoardForecast : tyUIBtn;
		tyBtnQueryBoardInfo : tyUIBtn;
		tyBitmapMask : tyUIBitmap;
		tyLyr : tyUILyr := (uiRtStat:=1);
	END_STRUCT;
	tyLyrP1023McSetHCommDSHermes : 	STRUCT 
		tyNumLaneID : tyUINum;
		tyNumSvrPort : tyUINum;
		tyNumSndAliveTm : tyUINum;
		tyBtnCheckAliveResponse : tyUIBtn;
		tyBtnCommand : tyUIBtn;
		tyBtnBoardForecast : tyUIBtn;
		tyBtnSendBoardInfo : tyUIBtn;
		tyBitmapMask : tyUIBitmap;
		tyLyr : tyUILyr := (uiRtStat:=1);
	END_STRUCT;
	tyLyrP1023McSetHCommGen : 	STRUCT 
		tyTxtLblUSSel : tyUITxt;
		tyDrpDnUSSel : tyUIDrpDn;
		tyTxtLblDSSel : tyUITxt;
		tyDrpDnDSSel : tyUIDrpDn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1024McSetAntiGap : 	STRUCT 
		tyTxtLftSen : tyUITxt;
		tyTxtRgtSen : tyUITxt;
		tyNumLftSenOff : tyUINum;
		tyNumRgtSenOff : tyUINum;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1026McSetTeach : 	STRUCT 
		tyBtnGet : tyUIBtn;
		tyBtnGo : tyUIBtn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1040ProdSet : 	STRUCT 
		tyBtnDelete : tyUIBtn;
		tyBtnSave : tyUIBtn;
		tyNumProdWidth : tyUINum;
		tyNumProdWidth2 : tyUINum;
		tyStringRecipeNm : tyUILString;
		tyStringSearch : tyUILString;
		tyTableRecipe : tyUITable;
		tyDrpDnMcMode : tyUIDrpDn;
		tyDrpDnFlippedBrd : tyUIDrpDn;
		tyTxtDrpDnFlippedBrd : tyUITxt;
		tyTxtMatchCode : tyUITxt;
		tyStringMatchCode : tyUIString;
		tyLyr : tyUILyr;
		tyBtnToXML : tyUIBtn;
		tyBtnFromXML : tyUIBtn;
		tyBtnSort : tyUIBtn;
		tyHotspotShowLRcp : tyUIHotspot;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1050LFSetLdr : 	STRUCT 
		tyTable1List : tyUITable1;
		tyBtnEdit : tyUIBtn;
		tyBtnDelete : tyUIBtn;
		tyBtnOnline : tyUIBtn;
		tyBtnOffline : tyUIBtn;
		tyBtnShftUp : tyUIBtn;
		tyBtnShftDwn : tyUIBtn;
		tyNumBeforeOven : tyUINum;
		tyNumBeforeOven2 : tyUINum;
		tyNumAfterOven : tyUINum;
		tyNumAfterOven2 : tyUINum;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP1050LFSetLdrEdit : 	STRUCT 
		tyNumMcNum : tyUINum;
		tyStringIPAddr : tyUIString;
		tyBtnOk : tyUIBtn;
		tyBtnCancel : tyUIBtn;
		tyTxtLblInfoThirdParty : tyUITxt;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1080UsrMgmt : 	STRUCT 
		tyBtnEditDetail : tyUIBtn;
		tyBtnEditAccess : tyUIBtn;
		tyBtnNewUsr : tyUIBtn;
		tyBtnDeleteUsr : tyUIBtn;
		tyDrpDnLvl : tyUIDrpDn;
		tyTableList : tyUITable1;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP1080UsrMgmtAct : 	STRUCT 
		tyBtnOk : tyUIBtn;
		tyBtnCancel : tyUIBtn;
		tyStringPw : tyUIString;
		tyStringUsrNm : tyUIString;
		tyDrpDnLvl : tyUIDrpDn;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLyrP1081UsrMgmtUsrAccessRgtSel : 	STRUCT 
		tyDrpDnLevel : tyUIDrpDn;
		tyLyr : tyUILyr;
	END_STRUCT;
	tyLyrP1081UsrMgmtUsrAccessRgt : 	STRUCT 
		tyBtnOps : tyUIBtn;
		tyBtnProdSel : tyUIBtn;
		tyBtnMagSel : tyUIBtn;
		tyBtnMcInfo : tyUIBtn;
		tyBtnAlm : tyUIBtn;
		tyBtnBffrInfo : tyUIBtn;
		tyBtnOvenInfo : tyUIBtn;
		tyBtnMagInfo : tyUIBtn;
		tyBtnLFCtrl : tyUIBtn;
		tyBtnManual : tyUIBtn;
		tyBtnManualFBOnly : tyUIBtn;
		tyBtnSimu : tyUIBtn;
		tyBtnChgParam : tyUIBtn;
		tyBtnLFSet : tyUIBtn;
		tyBtnLang : tyUIBtn;
		tyBtnMcSet : tyUIBtn;
		tyBtnProdSet : tyUIBtn;
		tyBtnMagSet : tyUIBtn;
		tyStringNm : tyUIString;
		tyTxtTitle : tyUITxt;
		tyLyr : tyUILyr;
	END_STRUCT;
END_TYPE

(**)
(*Visu Property*)

TYPE
	tyVisu : 	STRUCT 
		uiChgPage : UINT;
		uiCurrPage : UINT;
		uiSSaverTm : UINT;
		uiSSaverRemainTm : UINT;
		usiChgLang : USINT;
		usiCurrLang : USINT;
	END_STRUCT;
	tyKeypad : 	STRUCT 
		tyTxtTitle : tyUITxt;
	END_STRUCT;
	tyTxtSnippets : 	STRUCT 
		sLibraryNm : STRING[10];
		sUsrMgmtUsrLv1Nm : STRING[80];
		sUsrMgmtUsrLv2Nm : STRING[80];
		sUsrMgmtUsrLv3Nm : STRING[80];
	END_STRUCT;
END_TYPE
