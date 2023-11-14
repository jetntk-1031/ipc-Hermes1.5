
ACTION Act_OptP0201IOMonitor:

	IF tyP0201OpsConv.tyOps.tyHotspotIOMonitor.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyOps.tyHotspotIOMonitor.bRtCompl	:= FALSE;
		
		
 
		
		IF ((p_tyNtParamCurr.bProjClampPrep=FALSE) OR (p_tyNtParamCurr.bProjClampPrep=TRUE AND p_tyNtParamCurr.eProjClampOption=ClampNoRS))THEN
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat));
		ELSIF (p_tyNtParamCurr.bProjClampPrep=TRUE) AND (p_tyNtParamCurr.bUnlockCoverPrep OR p_tyNtParamCurr.bUSDSMachineSafetySig) THEN
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat));		
		ELSE
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat));
		END_IF
		
		// ADD increase when bProjClamp Prep and Machine Safety Signal
		
		
		p_tyC0004Navi ACCESS ADR(tyP0201OpsConv.tyNaviHide);
		
	ELSIF tyP0201OpsConv.tyIOMonitor.tyHotspotClose.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyIOMonitor.tyHotspotClose.bRtCompl	:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat));
		
		p_tyC0004Navi ACCESS ADR(tyP0201OpsConv.tyNaviBack);
		
	ELSIF tyP0201OpsConv.tyIOMonitorXStd.tyHotspotClose.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyIOMonitorXStd.tyHotspotClose.bRtCompl	:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat));
		
		p_tyC0004Navi ACCESS ADR(tyP0201OpsConv.tyNaviBack);
	ELSIF tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyHotspotClose.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyHotspotClose.bRtCompl	:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat));
		
		p_tyC0004Navi ACCESS ADR(tyP0201OpsConv.tyNaviBack);
	END_IF
	
	IF tyP0201OpsConv.tyIOMonitor.tyLyr.uiRtStat.0 = FALSE THEN
		//Standard
		//Digital Input
		tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlySig.bValue					:= p_tyDI.bSafetyRlySig;
		tyP0201OpsConv.tyIOMonitor.tyBtnEStop.bValue						:= p_tyDI.bEStopSig;
		tyP0201OpsConv.tyIOMonitor.tyBtnCoverSWSig.bValue					:= p_tyDI.bCoverSWSig;
		tyP0201OpsConv.tyIOMonitor.tyBtnUBA.bValue							:= p_tyDI.bUBA;
		tyP0201OpsConv.tyIOMonitor.tyBtnDSB.bValue							:= p_tyDI.bDSB;
		tyP0201OpsConv.tyIOMonitor.tyBtnUBAStat.bValue						:= p_tyDI.bUBAStat;
		tyP0201OpsConv.tyIOMonitor.tyBtnConvLftSen.bValue					:= p_tyDI.bConvLftSen;
		tyP0201OpsConv.tyIOMonitor.tyBtnConvRgtSen.bValue					:= p_tyDI.bConvRgtSen;
		tyP0201OpsConv.tyIOMonitor.tyBtnPressureSW.bValue					:= p_tyDI.bPressureSW;
		tyP0201OpsConv.tyIOMonitor.tyBtnThermalPrtSig.bValue				:= p_tyDI.bThermalPrtSig;
		tyP0201OpsConv.tyIOMonitor.tyBtnCoatingSen.bValue					:= p_tyDI.bCoatingSen;
		tyP0201OpsConv.tyIOMonitor.tyBtnUSWidthChkSen.bValue				:= p_tyDI.bUSWidthChkSen;
		tyP0201OpsConv.tyIOMonitor.tyBtnDSWidthChkSen.bValue				:= p_tyDI.bDSWidthChkSen;
		tyP0201OpsConv.tyIOMonitor.tyBtnInvertHomeSen.bValue				:= p_tyDI.bInvertHomeSen;
		tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemoteSen.bValue				:= p_tyDI.bInvertRemoteSen;
		tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterOpenRS.bValue			:= p_tyDI.bInShutterOpenRS;
		tyP0201OpsConv.tyIOMonitor.tyBtnInletShutterCloseRS.bValue			:= p_tyDI.bInShutterCloseRS;
		tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterOpenRS.bValue			:= p_tyDI.bOutShutterOpenRS;
		tyP0201OpsConv.tyIOMonitor.tyBtnOutletShutterCloseRS.bValue			:= p_tyDI.bOutShutterCloseRS;
		
		//Digital Output
		tyP0201OpsConv.tyIOMonitor.tyBtnSafetyRlyRst.bValue					:= p_tyDO.bSafetyRlyRst;
		tyP0201OpsConv.tyIOMonitor.tyBtnTLGreen.bValue						:= p_tyDO.bTLGreen;
		tyP0201OpsConv.tyIOMonitor.tyBtnTLAmber.bValue						:= p_tyDO.bTLAmber;
		tyP0201OpsConv.tyIOMonitor.tyBtnTLRed.bValue						:= p_tyDO.bTLRed;
		tyP0201OpsConv.tyIOMonitor.tyBtnTLBlue.bValue						:= p_tyDO.bTLBlue;
		tyP0201OpsConv.tyIOMonitor.tyBtnTLWhite.bValue						:= p_tyDO.bTLWhite;
		tyP0201OpsConv.tyIOMonitor.tyBtnBuzzer.bValue						:= p_tyDO.bBuz;
		tyP0201OpsConv.tyIOMonitor.tyBtnCoatingRetCtrl.bValue				:= p_tyDO.bCoatingStprRet;
		tyP0201OpsConv.tyIOMonitor.tyBtnUSB.bValue							:= p_tyDO.bUSB;
		tyP0201OpsConv.tyIOMonitor.tyBtnDBA.bValue							:= p_tyDO.bDBA;
		tyP0201OpsConv.tyIOMonitor.tyBtnDBAStat.bValue						:= p_tyDO.bDBAStat;
		tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCW.bValue					:= p_tyDO.bConvMtrCW;
		tyP0201OpsConv.tyIOMonitor.tyBtnConvMtrCCW.bValue					:= p_tyDO.bConvMtrCCW;
		tyP0201OpsConv.tyIOMonitor.tyBtnStprUnblkCtrl.bValue				:= p_tyDO.bStprUnblkCtrl;
		tyP0201OpsConv.tyIOMonitor.tyBtnStprBlkCtrl.bValue					:= p_tyDO.bStprBlkCtrl;
		tyP0201OpsConv.tyIOMonitor.tyBtnInvertHome.bValue					:= p_tyDO.bInvertHome;
		tyP0201OpsConv.tyIOMonitor.tyBtnInvertRemote.bValue					:= p_tyDO.bInvertRemote;
		tyP0201OpsConv.tyIOMonitor.tyBtnInvertBrake.bValue					:= p_tyDO.bInvertBrake;
		tyP0201OpsConv.tyIOMonitor.tyBtnClampCtrl.bValue					:= p_tyDO.bClampControl;
		tyP0201OpsConv.tyIOMonitor.tyBtnUnclampCtrl.bValue					:= p_tyDO.bUnclampControl;		
		tyP0201OpsConv.tyIOMonitor.tyBtnMtrPwrRly.bValue					:= p_tyDO.bMtrPwrRly;
		tyP0201OpsConv.tyIOMonitor.tyBtnInShutterOpenCtrl.bValue			:= p_tyDO.bInShutterOpenCtrl;
		tyP0201OpsConv.tyIOMonitor.tyBtnInShutterCloseCtrl.bValue			:= p_tyDO.bInShutterCloseCtrl;
		tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterOpenCtrl.bValue			:= p_tyDO.bOutShutterOpenCtrl;
		tyP0201OpsConv.tyIOMonitor.tyBtnOutShutterCloseCtrl.bValue			:= p_tyDO.bOutShutterCloseCtrl;
		
	END_IF
	
	IF tyP0201OpsConv.tyIOMonitorXStd.tyLyr.uiRtStat.0 = FALSE THEN
		//Non Standard
		//Digital Input
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlySig.bValue					:= p_tyDI.bSafetyRlySig;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnEStop.bValue						:= p_tyDI.bEStopSig;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoverSWSig.bValue					:= p_tyDI.bCoverSWSig;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA.bValue							:= p_tyDI.bUBA;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSB.bValue							:= p_tyDI.bDSB;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat.bValue						:= p_tyDI.bUBAStat;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBA2.bValue							:= p_tyDI.bUBA2;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUBAStat2.bValue						:= p_tyDI.bUBAStat2;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvLftSen.bValue					:= p_tyDI.bConvLftSen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvRgtSen.bValue					:= p_tyDI.bConvRgtSen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnPressureSW.bValue					:= p_tyDI.bPressureSW;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnThermalPrtSig.bValue				:= p_tyDI.bThermalPrtSig;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingSen.bValue					:= p_tyDI.bCoatingSen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSWidthChkSen.bValue				:= p_tyDI.bUSWidthChkSen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnDSWidthChkSen.bValue				:= p_tyDI.bDSWidthChkSen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHomeSen.bValue				:= p_tyDI.bInvertHomeSen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemoteSen.bValue				:= p_tyDI.bInvertRemoteSen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterOpenRS.bValue			:= p_tyDI.bInShutterOpenRS;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInletShutterCloseRS.bValue			:= p_tyDI.bInShutterCloseRS;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterOpenRS.bValue			:= p_tyDI.bOutShutterOpenRS;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutletShutterCloseRS.bValue			:= p_tyDI.bOutShutterCloseRS;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Sen.bValue					:= p_tyDI.bClamp2Sen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Sen.bValue					:= p_tyDI.bClamp3Sen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS1.bValue						:= p_tyDI.bClampRS1;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS1.bValue					:= p_tyDI.bUnClampRS1;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS2.bValue						:= p_tyDI.bClampRS2;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS2.bValue					:= p_tyDI.bUnClampRS2;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClampRS3.bValue						:= p_tyDI.bClampRS3;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnClampRS3.bValue					:= p_tyDI.bUnClampRS3;
		
		//Digital Output 
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnSafetyRlyRst.bValue					:= p_tyDO.bSafetyRlyRst;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLGreen.bValue						:= p_tyDO.bTLGreen;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLAmber.bValue						:= p_tyDO.bTLAmber;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLRed.bValue						:= p_tyDO.bTLRed;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLBlue.bValue						:= p_tyDO.bTLBlue;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnTLWhite.bValue						:= p_tyDO.bTLWhite;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnBuzzer.bValue						:= p_tyDO.bBuz;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnCoatingRetCtrl.bValue				:= p_tyDO.bCoatingStprRet;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB.bValue							:= p_tyDO.bUSB;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBA.bValue							:= p_tyDO.bDBA;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnDBAStat.bValue						:= p_tyDO.bDBAStat;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUSB2.bValue							:= p_tyDO.bUSB2;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCW.bValue					:= p_tyDO.bConvMtrCW;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnConvMtrCCW.bValue					:= p_tyDO.bConvMtrCCW;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertHome.bValue					:= p_tyDO.bInvertHome;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertRemote.bValue					:= p_tyDO.bInvertRemote;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInvertBrake.bValue					:= p_tyDO.bInvertBrake;	
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnMtrPwrRly.bValue					:= p_tyDO.bMtrPwrRly;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterOpenCtrl.bValue			:= p_tyDO.bInShutterOpenCtrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnInShutterCloseCtrl.bValue			:= p_tyDO.bInShutterCloseCtrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterOpenCtrl.bValue			:= p_tyDO.bOutShutterOpenCtrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnOutShutterCloseCtrl.bValue			:= p_tyDO.bOutShutterCloseCtrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp1Ctrl.bValue					:= p_tyDO.bClamp1Ctrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp1Ctrl.bValue					:= p_tyDO.bUnClamp1Ctrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp2Ctrl.bValue					:= p_tyDO.bClamp2Ctrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp2Ctrl.bValue					:= p_tyDO.bUnClamp2Ctrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnClamp3Ctrl.bValue					:= p_tyDO.bClamp3Ctrl;
		tyP0201OpsConv.tyIOMonitorXStd.tyBtnUnclamp3Ctrl.bValue					:= p_tyDO.bUnClamp3Ctrl;

	END_IF
	
	IF tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyLyr.uiRtStat.0 = FALSE THEN
		//Non Standard
		//Digital Input
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlySig.bValue					:= p_tyDI.bSafetyRlySig;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnEStop.bValue						:= p_tyDI.bEStopSig;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig.bValue					:= p_tyDI.bCoverSWSig;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBA.bValue							:= p_tyDI.bUBA;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSB.bValue							:= p_tyDI.bDSB;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUBAStat.bValue						:= p_tyDI.bUBAStat;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvLftSen.bValue					:= p_tyDI.bConvLftSen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvRgtSen.bValue					:= p_tyDI.bConvRgtSen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPressureSW.bValue					:= p_tyDI.bPressureSW;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnThermalPrtSig.bValue				:= p_tyDI.bThermalPrtSig;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingSen.bValue					:= p_tyDI.bCoatingSen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSWidthChkSen.bValue				:= p_tyDI.bUSWidthChkSen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDSWidthChkSen.bValue				:= p_tyDI.bDSWidthChkSen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHomeSen.bValue				:= p_tyDI.bInvertHomeSen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemoteSen.bValue				:= p_tyDI.bInvertRemoteSen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterOpenRS.bValue			:= p_tyDI.bInShutterOpenRS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInletShutterCloseRS.bValue			:= p_tyDI.bInShutterCloseRS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterOpenRS.bValue			:= p_tyDI.bOutShutterOpenRS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutletShutterCloseRS.bValue			:= p_tyDI.bOutShutterCloseRS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Sen.bValue					:= p_tyDI.bClamp2Sen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Sen.bValue					:= p_tyDI.bClamp3Sen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS1.bValue						:= p_tyDI.bClampRS1;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS1.bValue					:= p_tyDI.bUnClampRS1;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS2.bValue						:= p_tyDI.bClampRS2;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS2.bValue					:= p_tyDI.bUnClampRS2;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClampRS3.bValue						:= p_tyDI.bClampRS3;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnClampRS3.bValue					:= p_tyDI.bUnClampRS3;
		//ADD 
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverSWSig2.bValue					:= p_tyDI.bCoverSWSig2;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromUS.bValue				:= p_tyDI.bSafetySigFromUS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetySigFromDS.bValue				:= p_tyDI.bSafetySigFromDS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromUS.bValue		:= p_tyDI.bUnlockCoverSigFromUS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnlockCoverSigFromDS.bValue		:= p_tyDI.bUnlockCoverSigFromDS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoverUnlockPB1.bValue				:= p_tyDI.bCoverUnlockPB1;
		//Digital Output 
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyRlyRst.bValue					:= p_tyDO.bSafetyRlyRst;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLGreen.bValue						:= p_tyDO.bTLGreen;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLAmber.bValue						:= p_tyDO.bTLAmber;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLRed.bValue						:= p_tyDO.bTLRed;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLBlue.bValue						:= p_tyDO.bTLBlue;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTLWhite.bValue						:= p_tyDO.bTLWhite;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBuzzer.bValue						:= p_tyDO.bBuz;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnCoatingRetCtrl.bValue				:= p_tyDO.bCoatingStprRet;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUSB.bValue							:= p_tyDO.bUSB;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBA.bValue							:= p_tyDO.bDBA;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnDBAStat.bValue						:= p_tyDO.bDBAStat;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCW.bValue					:= p_tyDO.bConvMtrCW;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnConvMtrCCW.bValue					:= p_tyDO.bConvMtrCCW;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertHome.bValue					:= p_tyDO.bInvertHome;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertRemote.bValue					:= p_tyDO.bInvertRemote;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInvertBrake.bValue					:= p_tyDO.bInvertBrake;	
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMtrPwrRly.bValue					:= p_tyDO.bMtrPwrRly;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterOpenCtrl.bValue			:= p_tyDO.bInShutterOpenCtrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnInShutterCloseCtrl.bValue			:= p_tyDO.bInShutterCloseCtrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterOpenCtrl.bValue			:= p_tyDO.bOutShutterOpenCtrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnOutShutterCloseCtrl.bValue			:= p_tyDO.bOutShutterCloseCtrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp1Ctrl.bValue					:= p_tyDO.bClamp1Ctrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp1Ctrl.bValue					:= p_tyDO.bUnClamp1Ctrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp2Ctrl.bValue					:= p_tyDO.bClamp2Ctrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp2Ctrl.bValue					:= p_tyDO.bUnClamp2Ctrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnClamp3Ctrl.bValue					:= p_tyDO.bClamp3Ctrl;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnUnclamp3Ctrl.bValue					:= p_tyDO.bUnClamp3Ctrl;
		// ADD
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToDS.bValue					:= p_tyDO.bTopCvrUnlckToDS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnTopCvrUnlckToUS.bValue					:= p_tyDO.bTopCvrUnlckToUS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtniMachineSafetySigToDS.bValue			:= p_tyDO.bMachineSafetySigToDS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnMachineSafetySigToUS.bValue			:= p_tyDO.bMachineSafetySigToUS;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnPBLED1.bValue							:= p_tyDO.bCoverPBLED1;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnBypassTopCover1.bValue					:= p_tyDO.bBypassTopCover1;
		tyP0201OpsConv.tyIOMonitorXStdMachineSafety.tyBtnSafetyTopCoverSWCoil1.bValue			:= p_tyDO.bSafetyTopCoverSWCoil1;
		
	END_IF
		
	
	
	
END_ACTION
