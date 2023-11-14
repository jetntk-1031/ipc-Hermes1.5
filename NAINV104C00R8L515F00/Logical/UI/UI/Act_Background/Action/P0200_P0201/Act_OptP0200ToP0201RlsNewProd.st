
ACTION Act_OptP0200ToP0201RlsNewProd: 
	
	IF p_tyNtParamCurr.bProjRlsNewProdPrep = TRUE THEN
		
		//Control
		IF (tyP0200OpsGen.tyOps.tyBtnRlsNewProd.bRtCompl = TRUE) OR (tyP0201OpsConv.tyOps.tyBtnRlsNewProd.bRtCompl = TRUE) THEN
			tyP0200OpsGen.tyOps.tyBtnRlsNewProd.bRtCompl	:= FALSE;
			tyP0201OpsConv.tyOps.tyBtnRlsNewProd.bRtCompl	:= FALSE;
			
			bRlsNewProd	:= TRUE;
		END_IF
		
		//Button Appearance
		IF p_bOpsRun = TRUE AND  p_bFollower1WaitRlsProd = TRUE THEN
			fbRlsNewProdBlinkTm(IN := TRUE);
			
			IF fbRlsNewProdBlinkTm.Q THEN
				fbRlsNewProdBlinkTm(IN := FALSE);
				IF (tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx = 1) THEN
					tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx	:= 0;
					tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.usiValueIdx	:= 0;
				ELSE
					tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx	:= 1;
					tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.usiValueIdx	:= 1;
				END_IF
			END_IF
			
			fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBtnRlsNewProd.uiRtStat));
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBtnRlsNewProd.uiRtStat));
			
			fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.uiRtStat));
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.uiRtStat));
			
		ELSE
			bRlsNewProd	:= FALSE;
			
			fbRlsNewProdBlinkTm(IN := FALSE);
			
			tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.usiValueIdx	:= 0;
			tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.usiValueIdx	:= 0;
			
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBtnRlsNewProd.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBtnRlsNewProd.uiRtStat));
			
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBitmapRlsNewProd.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyBitmapRlsNewProd.uiRtStat));
			
		END_IF
		
	ELSE	
		
		bRlsNewProd	:= TRUE;
		
	END_IF
	
END_ACTION
