
ACTION Act_OptP0002Navi: 
	
	IF (tyP0002Menu.tyMnl.tyHotspotGen.bRtCompl = TRUE) OR (tyP0002Menu.tySet.tyHotspotGen.bRtCompl = TRUE) THEN
		tyP0002Menu.tyMnl.tyHotspotGen.bRtCompl	:= FALSE;
		tyP0002Menu.tySet.tyHotspotGen.bRtCompl	:= FALSE;
		
		fUIInRtStatOff(ADR(tyP0002Menu.tyGen.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0002Menu.tyMnl.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0002Menu.tySet.tyLyr.uiRtStat));
		
	ELSIF (tyP0002Menu.tyGen.tyHotspotMnl.bRtCompl = TRUE) OR (tyP0002Menu.tySet.tyHotspotMnl.bRtCompl = TRUE) THEN
		tyP0002Menu.tyGen.tyHotspotMnl.bRtCompl	:= FALSE;
		tyP0002Menu.tySet.tyHotspotMnl.bRtCompl	:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0002Menu.tyGen.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0002Menu.tyMnl.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0002Menu.tySet.tyLyr.uiRtStat));
		
	ELSIF (tyP0002Menu.tyGen.tyHotspotSet.bRtCompl = TRUE) OR (tyP0002Menu.tyMnl.tyHotspotSet.bRtCompl = TRUE) THEN
		tyP0002Menu.tyGen.tyHotspotSet.bRtCompl	:= FALSE;
		tyP0002Menu.tyMnl.tyHotspotSet.bRtCompl	:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0002Menu.tyGen.tyLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0002Menu.tyMnl.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0002Menu.tySet.tyLyr.uiRtStat));
		
	END_IF
	
END_ACTION
