(** 2018-12-21 **)
ACTION Act_Main_P0200:
	
	//Direction
	CASE p_tyNtParamCurr.eProjConvDir OF
		ConvDirLToR:
			tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx	:= 0;	// -->>
			tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx	:= 0;	// -->>
		ConvDirRToL:
			tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx	:= 1;	// <<--
			tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx	:= 1;	// <<--
		ConvDirLToL:
			tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx	:= 0;	// -->>
			tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx	:= 1;	// <<--
		ConvDirRToR:
			tyP0200OpsGen.tyOps.tyBitmapDir2.usiValueIdx	:= 1;	// <<--
			tyP0200OpsGen.tyOps.tyBitmapDir1.usiValueIdx	:= 0;	// -->>
	END_CASE
	
	IF p_tyNtParamCurr.tyDOSettings.diTLGreen<>0 OR p_tyNtParamCurr.tyDOSettings.diTLAmber<>0 OR p_tyNtParamCurr.tyDOSettings.diTLRed<>0 THEN
		IF p_tyNtParamCurr.eTLBuzMode=TLBuzModBHTC THEN
			tyP0200OpsGen.tyOps.tyBitmapMc.usiValueIdx := 200;
		ELSE
			tyP0200OpsGen.tyOps.tyBitmapMc.usiValueIdx := 100;
		END_IF
	ELSE
		tyP0200OpsGen.tyOps.tyBitmapMc.usiValueIdx := 0;
	END_IF
	
	//Hide Warning Bitmap for LF
	fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
	fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyTxtLdrInActiveCtrl.uiRtStat));
	fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapWarningLF.uiRtStat));
	fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBitmapWarningLF.uiRtStat));
	
	
	tyP0200OpsGen.tyOps.tyBtnBypassTopCover1.uiRtStat.0 	:= NOT(p_tyNtParamCurr.bUnlockCoverPrep);
	
	IF NOT(p_tyNtParamCurr.bProjInvertOncePrep AND p_tyNtParamCurr.bProjInvertTwicePrep) THEN
		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyTxtUS2.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIcon2.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommIn2.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapUSCommOut2.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyHotspotUSVirtual2.uiRtStat));
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyUSVSMEMA2.tyLyr.uiRtStat));		
		fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiRtStat));
		
	END_IF
	
	
END_ACTION
