
ACTION Act_OptP1040Save:
	
	IF tyP1040ProdSet.tyProdSet.tyBtnSave.bRtCompl = TRUE THEN
		
		IF usiSaveProdRcpStep = 0 THEN
			//Mask
			tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat	:= FALSE;
			tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat		:= FALSE;
			tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat					:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxSaveAsk);
			
			IF tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnYes.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiSaveProdRcpStep	:= 1;
				
			ELSIF tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxSaveAsk.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiSaveProdRcpStep	:= 99;
				
			END_IF
			
		ELSIF usiSaveProdRcpStep = 1 THEN
			tyProdRcpInfoIn.sRcpNm			:= tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue;
			tyProdRcpInfoIn.diWidthInUM		:= tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue;
			tyProdRcpInfoIn.usiMcMod		:= tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx;
			tyProdRcpInfoIn.usiFlippedBrd	:= tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx;
			tyProdRcpInfoIn.sMatchCode		:= tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue;
					
			IF p_tyNtParamCurr.bLFProdWidth2Prep THEN
				tyProdRcpInfoIn.diWidthInUM2		:= tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue;// ADD 
			ELSE
				tyProdRcpInfoIn.diWidthInUM2		:= tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue;// ADD 
			END_IF
				
			eProdRcpAct	:= ProdRcpActAddEdit;
			
			IF p_eProdRcpStat = ProdRcpActAddEdit AND p_eProdRcpStatus = Done THEN
				eProdRcpAct	:= ProdRcpActIdle;
				
				IF p_bProdRcpNmEmpty = TRUE THEN
					usiSaveProdRcpStep		:= 2;
				ELSIF p_bProdRcpListFull = TRUE THEN
					usiSaveProdRcpStep		:= 3;
				ELSE
					fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat));
					tyP1040ProdSet.tyProdSet.tyBtnSort.bValue := FALSE;
					tyP1040ProdSet.tyProdSet.tyStringSearch.sValue := '';
					
					bRefreshProdRcpTable	:= TRUE;
					bRefreshProdRcpDetail	:= TRUE;
					usiSaveProdRcpStep		:= 4;
				END_IF
				
			ELSIF p_eProdRcpStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxSaveErr);
				
				IF tyP1040ProdSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxSaveErr.tyBtnNo.bValue 	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiSaveProdRcpStep	:= 99;
				END_IF
				
			END_IF
			
			//Product Recipe Parameter Error
		ELSIF usiSaveProdRcpStep = 2 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxSaveNoNm);
			
			IF tyP1040ProdSet.tyMsgBoxSaveNoNm.tyBtnNo.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxSaveNoNm.tyBtnNo.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxSaveNoNm.tyBtnNo.bValue 		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiSaveProdRcpStep	:= 99;
			END_IF
			
			//Product Recipe List Full	
		ELSIF usiSaveProdRcpStep = 3 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxListFull);
			
			IF tyP1040ProdSet.tyMsgBoxListFull.tyBtnNo.bRtCompl = TRUE THEN
				tyP1040ProdSet.tyMsgBoxListFull.tyBtnNo.bRtCompl	:= FALSE;
				tyP1040ProdSet.tyMsgBoxListFull.tyBtnNo.bValue 		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
				
				usiSaveProdRcpStep	:= 99;
			END_IF
			
		ELSIF usiSaveProdRcpStep = 4 THEN
			IF tyProdRcpInfoIn.sRcpNm = p_tyProdRcpCurrRcp0.sRcpNm THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxReloadCurrRcp);
				
				IF tyP1040ProdSet.tyMsgBoxReloadCurrRcp.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxReloadCurrRcp.tyBtnNo.bRtCompl	:= FALSE;
					tyP1040ProdSet.tyMsgBoxReloadCurrRcp.tyBtnNo.bValue 	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
					
					usiSaveProdRcpStep	:= 99;
				END_IF
			ELSE
				usiSaveProdRcpStep	:= 99;
			END_IF
			
		ELSIF usiSaveProdRcpStep = 99 THEN
			bRefreshProdRcpTable	:= FALSE;
			
			//Unmask
			tyP1040ProdSet.tyProdSet.tyStringSearch.uiMaskRtStat	:= TRUE;
			tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat		:= TRUE;
			tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat		:= TRUE;
			
			//Reset
			tyP1040ProdSet.tyProdSet.tyBtnSave.bRtCompl	:= FALSE;
			tyP1040ProdSet.tyProdSet.tyBtnSave.bValue	:= FALSE;
			
			usiSaveProdRcpStep	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
