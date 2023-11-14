
ACTION Act_OptP0002PCBReset:

	// Product Select Hide when waiting Return Board
	IF p_bOpsInvOnceTwicePCBOut THEN
				
		fUIInRtStatOff(ADR(tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.uiRtStat));
		fUIInRtStatHide(ADR(tyP0002Menu.tyMenu.tyBtnProdSel.uiRtStat));
		
		IF tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.bRtCompl = TRUE THEN
		
			p_tyC0008MsgBox ACCESS ADR(tyP0002Menu.tyMsgBoxSelRcpWaitingBrd);
				
			IF tyP0002Menu.tyMsgBoxSelRcpWaitingBrd.tyBtnNo.bRtCompl = TRUE THEN
				tyP0002Menu.tyMsgBoxSelRcpWaitingBrd.tyBtnNo.bRtCompl	:= FALSE;
				tyP0002Menu.tyMsgBoxSelRcpWaitingBrd.tyBtnNo.bValue		:= FALSE;
				
				tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.bRtCompl		 := FALSE;
				tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.bValue		 := FALSE;
					
				p_tyC0008MsgBox ACCESS ADR(tyP0002Menu.tyMsgBoxHide);
					
				//Change Page
				eChgPage	:= UIP0200OpsGen;
					
				
			END_IF
		END_IF
	ELSE
		
		fUIInRtStatHide(ADR(tyP0002Menu.tyMenu.tyHotspotRstRtnBrd.uiRtStat));
		fUIInRtStatOff(ADR(tyP0002Menu.tyMenu.tyBtnProdSel.uiRtStat));
	
	END_IF
		
END_ACTION
