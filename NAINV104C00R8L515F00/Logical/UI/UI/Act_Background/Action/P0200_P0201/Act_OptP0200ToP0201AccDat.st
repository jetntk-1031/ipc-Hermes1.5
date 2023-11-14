
ACTION Act_OptP0200ToP0201AccDat: 
	
	//Control
	IF (tyP0200OpsGen.tyOps.tyBtnAccDat.bRtCompl = TRUE) OR (tyP0201OpsConv.tyOps.tyBtnAccDat.bRtCompl = TRUE) THEN
		tyP0200OpsGen.tyOps.tyBtnAccDat.bRtCompl	:= FALSE;
		tyP0201OpsConv.tyOps.tyBtnAccDat.bRtCompl	:= FALSE;
		
		bProdAccData	:= TRUE;
	END_IF
	
	//Button Appearance
	IF (p_bLFFollowerProdAccDataMnl = TRUE) OR (p_bUSHermesAccDataMnl = TRUE) OR (p_bLCSLFAccDataMnl = TRUE) THEN
		
		fbAccDatBlinkTm(IN := TRUE);
		
		IF fbAccDatBlinkTm.Q THEN
			fbAccDatBlinkTm(IN := FALSE);
			IF tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx = 1 THEN
				tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx		:= 0;
				tyP0201OpsConv.tyOps.tyBitmapAccDat.usiValueIdx	:= 0;
			ELSE
				tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx		:= 1;
				tyP0201OpsConv.tyOps.tyBitmapAccDat.usiValueIdx	:= 1;
			END_IF
		END_IF
		
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBtnAccDat.uiRtStat));
		fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBtnAccDat.uiRtStat));
		
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapAccDat.uiRtStat));
		fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBitmapAccDat.uiRtStat));
		
	ELSE
		
		fbAccDatBlinkTm(IN := FALSE);
		
		tyP0200OpsGen.tyOps.tyBitmapAccDat.usiValueIdx	:= 0;
		tyP0201OpsConv.tyOps.tyBitmapAccDat.usiValueIdx	:= 0;
		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBtnAccDat.uiRtStat));
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBtnAccDat.uiRtStat));
		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapAccDat.uiRtStat));
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBitmapAccDat.uiRtStat));
		
	END_IF
	
//	IF p_tyNtParamCurr.bLFPrep THEN
//		IF p_bLFFollowerDSAllow=FALSE THEN
//			tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 0;
//			tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 0;
//			
//			fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//			fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//			fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
//			fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
//			
//		ELSIF p_bLFFollowerUSAllow=FALSE THEN
//			IF p_tyMcParamCurr.bSectionLeader THEN
//				tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 3;
//				tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 3;
//				
//				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
//			ELSE
//				tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 2;
//				tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 2;
//				
//				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
//			END_IF
//		ELSE
//			IF p_bLFFollowerLdrSeqCtrlInActive THEN
//				tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 1;
//				tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.usiValueIdx	:= 1;
//				
//				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
//				fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
//			ELSE
//				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
//				fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
//			END_IF
//		END_IF
//	ELSE
//		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
//		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
//		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
//	END_IF
	
END_ACTION
