
ACTION Act_OptP0201AccDat: 

	IF g_tyP0200Opt.tyOpt.tyBtnAccDat.bRtCompl = TRUE THEN
		g_tyP0200Opt.tyOpt.tyBtnAccDat.bRtCompl	:= FALSE;
		tyAccData.bAccDatStart					:= TRUE;
	END_IF
	
	//Button Appearance
	IF tyAccData.bAccDatReq = TRUE THEN
		IF tyAccData.bAccDatStart = FALSE THEN
			fbAccDatBlinkTm(IN := TRUE);
			
			IF fbAccDatBlinkTm.Q THEN
				fbAccDatBlinkTm(IN := FALSE);
				
				IF g_tyP0200Opt.tyOpt.tyBitmapAccDat.usiValueIdx = 1 THEN
					g_tyP0200Opt.tyOpt.tyBitmapAccDat.usiValueIdx	:= 0;
				ELSE
					g_tyP0200Opt.tyOpt.tyBitmapAccDat.usiValueIdx	:= 1;
				END_IF
			END_IF
		ELSE
			fbAccDatBlinkTm(IN := FALSE);
			g_tyP0200Opt.tyOpt.tyBitmapAccDat.usiValueIdx			:= 1;
		END_IF
		
	ELSE
		fbAccDatBlinkTm(IN := FALSE);
		g_tyP0200Opt.tyOpt.tyBitmapAccDat.usiValueIdx				:= 0;
	END_IF
	
	//Mask
	IF tyMcParamData.tyRcpMcParam.tyUpstream.eComm = McSetCommModSMEMA THEN
		IF tyAccData.bAccDatAllow AND tyAccData.bAccDatReq AND NOT tyFollowerData.bAutoAccDatOut AND tyAccData.bAccDatStart = FALSE THEN
			fUIInRtStatHide(ADR(g_tyP0200Opt.tyOpt.tyBtnAccDat.uiMaskRtStat));
		ELSE
			fUIInRtStatOff(ADR(g_tyP0200Opt.tyOpt.tyBtnAccDat.uiMaskRtStat));
		END_IF
	ELSIF tyMcParamData.tyRcpMcParam.tyUpstream.eComm = McSetCommModHermes THEN
		IF tyAccData.bAccDatAllow AND tyAccData.bAccDatReq AND tyAccData.bAccDatStart = FALSE THEN
			fUIInRtStatHide(ADR(g_tyP0200Opt.tyOpt.tyBtnAccDat.uiMaskRtStat));
		ELSE
			fUIInRtStatOff(ADR(g_tyP0200Opt.tyOpt.tyBtnAccDat.uiMaskRtStat));
		END_IF
	END_IF
	
END_ACTION
