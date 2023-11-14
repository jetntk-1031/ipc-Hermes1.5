
ACTION Act_OptP0600RcyMsg:
	

	//Recovery Message
	FOR i := 1 TO c_uiP0600TableSize DO

		IF tyP0600Alm.tyAlm.a_tyHotspotAlm[i].bRtCompl = TRUE THEN
			tyP0600Alm.tyAlm.a_tyHotspotAlm[i].bRtCompl	:= FALSE;
			
			tyP0600Alm.tyRcyMsg.tyTxtMsg.udiValueIdx := p_tyAlarmRcyList[i];				
					
			IF tyP0600Alm.tyRcyMsg.tyTxtMsg.udiValueIdx <> 0 AND tyP0600Alm.tyAlm.tyBtnHistory.bValue = FALSE THEN
				p_tyC0010RcyMsg ACCESS ADR(tyP0600Alm.tyRcyMsg);
			ELSE
				p_tyC0010RcyMsg ACCESS ADR(tyP0600Alm.tyRcyMsgHide);
			END_IF
			
		END_IF
		
	END_FOR
	
	// Close Recovery Message
	IF tyP0600Alm.tyRcyMsg.tyHotspotClose.bRtCompl THEN
		tyP0600Alm.tyRcyMsg.tyHotspotClose.bRtCompl := FALSE;
		
		p_tyC0010RcyMsg ACCESS ADR(tyP0600Alm.tyRcyMsgHide);
	END_IF
	
	
END_ACTION
