
ACTION Act_OptC0010RcyMsg:
	
	IF tyC0010RcyMsg.tyRcyMsg.tyHotspotClose.bRtCompl THEN
		fUIInRtStatHide(ADR(tyC0010RcyMsg.tyRcyMsg.tyLyr.uiRtStat));
		tyC0010RecoverMsg.tyHotspotClose.bRtCompl 	:= FALSE;
	END_IF
	
END_ACTION
