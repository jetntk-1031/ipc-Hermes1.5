
ACTION Act_OptP0200RcyMsg:
		
	//Recovery Message
	FOR i := 1 TO c_uiP0200TableSize DO
		
		IF tyP0200OpsGen.tyOps.a_tyHotspotRcyMsg[i].bRtCompl = TRUE THEN
			tyP0200OpsGen.tyOps.a_tyHotspotRcyMsg[i].bRtCompl	:= FALSE;
			
			tyP0200OpsGen.tyRcyMsg.tyTxtMsg.udiValueIdx := p_tyAlarmRcyList[i];
			
			IF tyP0200OpsGen.tyRcyMsg.tyTxtMsg.udiValueIdx <> 0 THEN
				p_tyC0010RcyMsg ACCESS ADR(tyP0200OpsGen.tyRcyMsg);
			ELSE
				p_tyC0010RcyMsg ACCESS ADR(tyP0200OpsGen.tyRcyMsgHide);
			END_IF
			
		END_IF
		
	END_FOR
	
	// Close Recovery Message
	IF tyP0200OpsGen.tyRcyMsg.tyHotspotClose.bRtCompl = TRUE THEN
		p_tyC0010RcyMsg ACCESS ADR(tyP0200OpsGen.tyRcyMsgHide);
		
		tyP0200OpsGen.tyRcyMsg.tyHotspotClose.bRtCompl	:= FALSE;
	END_IF

END_ACTION
