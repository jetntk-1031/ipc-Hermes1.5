
ACTION Act_OptP1040FromXML: 
	
	IF tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl = TRUE THEN
		
		IF usiProdRcpFromXMLStep = 0 THEN
			//Confirmation Message - From XML Ask
			//Mask
			fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat));
			fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat));
			
			p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxFromXMLAsk);
			
			IF tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnYes.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiProdRcpFromXMLStep	:= 1;
				
			ELSIF tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxFromXMLAsk.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiProdRcpFromXMLStep	:= 99;
			END_IF
			
		ELSIF usiProdRcpFromXMLStep = 1 THEN
			//Load Recipe From XML
			eMpProdRcpAct	:= MpProdRcpActLoad;
			
			IF p_eMpProdRcpStat = MpProdRcpActLoad AND p_eMpProdRcpStatus = Done THEN
				eMpProdRcpAct	:= MpProdRcpActIdle;
				
				tyP1040ProdSet.tyProdSet.tyBtnSort.bValue := FALSE;
				tyP1040ProdSet.tyProdSet.tyStringSearch.sValue := '';
				bRefreshProdRcpTable	:= TRUE;
				bRefreshProdRcpDetail	:= TRUE;
				
				usiProdRcpFromXMLStep	:= 2;
				
			ELSIF p_eMpProdRcpStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxFromXMLErr);
				
				IF tyP1040ProdSet.tyMsgBoxFromXMLErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxFromXMLErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxFromXMLErr.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiProdRcpFromXMLStep	:= 99;
				END_IF
				
			END_IF
			
		ELSIF usiProdRcpFromXMLStep = 2 THEN
			//Save Product Recipe List
			eProdRcpAct	:= ProdRcpActSaveList;
			
			IF p_eProdRcpStat = ProdRcpActSaveList AND p_eProdRcpStatus = Done THEN
				eProdRcpAct	:= ProdRcpActIdle;
				
				usiProdRcpFromXMLStep	:= 99;
				
			ELSIF p_eProdRcpStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxSaveListErr);
				
				IF tyP1040ProdSet.tyMsgBoxSaveListErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxSaveListErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxSaveListErr.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiProdRcpFromXMLStep	:= 99;
				END_IF
				
			END_IF
			
		ELSIF usiProdRcpFromXMLStep = 99 THEN
			//Complete Reset
			bRefreshProdRcpTable	:= FALSE;
			
			//Unmask
			fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat));
			fUIInRtStatHide(ADR(tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat));
			
			tyP1040ProdSet.tyProdSet.tyBtnFromXML.bRtCompl	:= FALSE;
			tyP1040ProdSet.tyProdSet.tyBtnFromXML.bValue	:= FALSE;
			
			usiProdRcpFromXMLStep	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
