
ACTION Act_OptP1040Del:
	
	IF tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl = TRUE THEN
		
		IF usiDelProdRcpStep = 0 THEN
			//Mask
			tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat	:= FALSE;
			tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat		:= FALSE;
			
			IF tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow].sValue = p_tyProdRcpCurrRcp0.sRcpNm THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk);
				
				IF tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxDelCurrRcpAsk.tyBtnNo.bValue		:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiDelProdRcpStep	:= 99;
				END_IF
				
			ELSE
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxDelAsk);
				
				IF tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnYes.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiDelProdRcpStep	:= 1;
					
				ELSIF tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxDelAsk.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiDelProdRcpStep	:= 99;
				END_IF
				
			END_IF
			
		ELSIF usiDelProdRcpStep = 1 THEN
			tyProdRcpInfoIn.sRcpNm	:= tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow].sValue;
			
			eProdRcpAct	:= ProdRcpActDel;
			
			IF p_eProdRcpStat = ProdRcpActDel AND p_eProdRcpStatus = Done THEN
				eProdRcpAct	:= ProdRcpActIdle;
				
				IF p_bProdRcpNmEmpty = TRUE THEN
					usiDelProdRcpStep		:= 2;
				ELSIF p_bProdRcpNmNotExist = TRUE THEN
					usiDelProdRcpStep		:= 3;
				ELSE
					tyP1040ProdSet.tyProdSet.tyBtnSort.bValue := FALSE;
					tyP1040ProdSet.tyProdSet.tyStringSearch.sValue := '';
					
					bRefreshProdRcpTable	:= TRUE;
					bRefreshProdRcpDetail	:= TRUE;
					usiDelProdRcpStep		:= 99;
				END_IF
				
			ELSIF p_eProdRcpStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxDelErr);
				
				IF tyP1040ProdSet.tyMsgBoxDelErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxDelErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxDelErr.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiDelProdRcpStep	:= 99;
				END_IF
				
			END_IF
			
		ELSIF usiDelProdRcpStep = 2 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxDelNmEmpty);
			
			IF tyP1040ProdSet.tyMsgBoxDelNmEmpty.tyBtnNo.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxDelNmEmpty.tyBtnNo.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxDelNmEmpty.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiDelProdRcpStep	:= 99;
			END_IF
			
		ELSIF usiDelProdRcpStep = 3 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxDelNmNotExist);
			
			IF tyP1040ProdSet.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxDelNmNotExist.tyBtnNo.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxDelNmNotExist.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiDelProdRcpStep	:= 99;
			END_IF
			
		ELSIF usiDelProdRcpStep = 99 THEN
			bRefreshProdRcpTable	:= FALSE;
			
			//Unmask
			tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat	:= TRUE;
			tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat		:= TRUE;
			
			//Reset
			tyP1040ProdSet.tyProdSet.tyBtnDelete.bRtCompl	:= FALSE;
			tyP1040ProdSet.tyProdSet.tyBtnDelete.bValue		:= FALSE;
			
			usiDelProdRcpStep	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
