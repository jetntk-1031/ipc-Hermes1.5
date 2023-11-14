
ACTION Act_OptP1040ToXML: 
	
	IF tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl = TRUE THEN
		
		IF usiProdRcpToXMLStep = 0 THEN
			//Confirmation Message - To XML Ask
			//Mask
			fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat));
			
			p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxToXMLAsk);
			
			IF tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnYes.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiProdRcpToXMLStep	:= 1;
				
			ELSIF tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxToXMLAsk.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiProdRcpToXMLStep	:= 99;
			END_IF
			
		ELSIF usiProdRcpToXMLStep = 1 THEN
			//Save Recipe To XML
			eMpProdRcpAct	:= MpProdRcpActSave;
			
			IF p_eMpProdRcpStat = MpProdRcpActSave AND p_eMpProdRcpStatus = Done THEN
				eMpProdRcpAct	:= MpProdRcpActIdle;
				
				tyP1040ProdSet.tyProdSet.tyBtnSort.bValue := FALSE;
				tyP1040ProdSet.tyProdSet.tyStringSearch.sValue := '';
				bRefreshProdRcpTable	:= TRUE;
				bRefreshProdRcpDetail	:= TRUE;
				
				usiProdRcpToXMLStep		:= 99;
				
			ELSIF p_eMpProdRcpStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxToXMLErr);
				
				IF tyP1040ProdSet.tyMsgBoxToXMLErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxToXMLErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxToXMLErr.tyBtnNo.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiProdRcpToXMLStep	:= 99;
				END_IF
				
			END_IF
			
		ELSIF usiProdRcpToXMLStep = 99 THEN
			//Complete Reset
			bRefreshProdRcpTable	:= FALSE;
			
			//Unmask
			fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat));
			
			tyP1040ProdSet.tyProdSet.tyBtnToXML.bRtCompl	:= FALSE;
			tyP1040ProdSet.tyProdSet.tyBtnToXML.bValue		:= FALSE;
			
			usiProdRcpToXMLStep	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
