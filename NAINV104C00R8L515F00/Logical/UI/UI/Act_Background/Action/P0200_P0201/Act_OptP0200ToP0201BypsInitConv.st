
ACTION Act_OptP0200ToP0201BypsInitConv: 
	
	IF p_tyNtParamCurr.bProjBypsInitConvPrep THEN
		
		(*Display*)
		//Initializing Conveyor
		IF EDGEPOS(p_bOpsInvertStepInitConv) THEN
			fUIInRtStatOff(ADR(tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat));
		END_IF
		
		//Initializing Conveyor Done
		IF EDGENEG(p_bOpsInvertStepInitConv) THEN
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat));
			
			bOpsBypsInitConv	:= FALSE;
		END_IF
		
		//Blinking Button
		IF tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat.0 = FALSE THEN
			
			fbBypsInitConvBlinkTm(IN := TRUE);
			
			IF fbBypsInitConvBlinkTm.Q THEN
				fbBypsInitConvBlinkTm(IN := FALSE);
				
				IF tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx = 0 THEN
					tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx		:= 1;
					tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx	:= 1;
					
				ELSE
					tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx		:= 0;
					tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx	:= 0;
				END_IF
				
			END_IF
			
		ELSE
			
			fbBypsInitConvBlinkTm(IN := FALSE);
			
			tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx		:= 0;
			tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.usiBitmapIdx	:= 0;
		END_IF
		
		(*Control*)
		IF tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl OR tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl THEN
			tyP0200OpsGen.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl		:= FALSE;
			tyP0201OpsConv.tyBypsInitConv.tyBtnBypsInitConv.bRtCompl	:= FALSE;
			
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat));
			
			bOpsBypsInitConv	:= TRUE;
			
		ELSIF tyP0200OpsGen.tyBypsInitConv.tyHotspotClose.bRtCompl OR tyP0201OpsConv.tyBypsInitConv.tyHotspotClose.bRtCompl THEN
			tyP0200OpsGen.tyBypsInitConv.tyHotspotClose.bRtCompl	:= FALSE;
			tyP0201OpsConv.tyBypsInitConv.tyHotspotClose.bRtCompl	:= FALSE;
			
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyBypsInitConv.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyBypsInitConv.tyLyr.uiRtStat));
			
		END_IF
		
	END_IF
	
END_ACTION
