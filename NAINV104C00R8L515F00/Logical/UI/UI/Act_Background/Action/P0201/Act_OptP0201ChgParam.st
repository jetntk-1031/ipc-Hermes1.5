
ACTION Act_OptP0201ChgParam: 
	
	tyP0201OpsConv.tyOps.tyBtnChgParam.uiRtStat.0	:= NOT(p_tyMcParamCurr.bChgParamEn);
	
	//Control
	IF tyP0201OpsConv.tyOps.tyBtnChgParam.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyOps.tyBtnChgParam.bRtCompl	:= FALSE;
		
		tyProdRcpCurrRcpWr	:= p_tyProdRcpCurrRcp0;
		
		tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueIdx		:= p_tyProdRcpCurrRcp0.usiMcMod;
		tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueIdx	:= p_tyProdRcpCurrRcp0.usiFlippedBrd;
		tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValue		:= p_tyProdRcpCurrRcp0.diWidthInUM;
		
		fUIInRtStatOff(ADR(tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat));
		
	END_IF		
	
	tyP0201OpsConv.tyOps.tyBtnChgParam.bValue	:= tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat.0 = FALSE;
	
	IF tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat.0 = FALSE THEN
		
		IF tyP0201OpsConv.tyChgParam.tyBtnSave.bRtCompl = TRUE THEN
		
			tyProdRcpCurrRcpWr.usiMcMod			:= tyP0201OpsConv.tyChgParam.tyDrpDnMcMode.usiValueIdx;
			tyProdRcpCurrRcpWr.usiFlippedBrd	:= tyP0201OpsConv.tyChgParam.tyDrpDnFlippedBrd.usiValueIdx;
			tyProdRcpCurrRcpWr.diWidthInUM		:= tyP0201OpsConv.tyChgParam.tyNumProdWidth.diValue;
			
			eProdRcpAct	:= ProdRcpActWriteCurrRcpParam;
		
			IF p_eProdRcpStatus = Done AND p_eProdRcpStat = ProdRcpActWriteCurrRcpParam THEN
				eProdRcpAct	:= ProdRcpActIdle;
					
				//UIP0400
				tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx			:= p_tyProdRcpCurrRcp0.usiMcMod;
				tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx	:= p_tyProdRcpCurrRcp0.usiFlippedBrd;
				tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue			:= p_tyProdRcpCurrRcp0.diWidthInUM;
				
				tyP0201OpsConv.tyChgParam.tyBtnSave.bRtCompl	:= FALSE;
				tyP0201OpsConv.tyChgParam.tyBtnSave.bValue		:= FALSE;
				
				fUIInRtStatHide(ADR(tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat));
			
			ELSIF p_eProdRcpStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP0201OpsConv.tyMsgBoxSaveErr);
				
				IF tyP0201OpsConv.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP0201OpsConv.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP0201OpsConv.tyMsgBoxSaveErr.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP0201OpsConv.tyMsgBoxHide);
					
					//Restore Param
					tyProdRcpCurrRcpWr	:= p_tyProdRcpCurrRcp0;
					
					tyP0201OpsConv.tyChgParam.tyBtnSave.bRtCompl	:= FALSE;
					tyP0201OpsConv.tyChgParam.tyBtnSave.bValue	:= FALSE;
				
					fUIInRtStatHide(ADR(tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat));
					
				END_IF	
				
			END_IF
		
		ELSIF tyP0201OpsConv.tyChgParam.tyBtnCancel.bRtCompl = TRUE THEN
			tyP0201OpsConv.tyChgParam.tyBtnCancel.bRtCompl	:= FALSE;
			tyP0201OpsConv.tyChgParam.tyBtnCancel.bValue		:= FALSE;
			
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyChgParam.tyLyr.uiRtStat));
		END_IF
		
	END_IF
	
	//Mask
	tyP0201OpsConv.tyOps.tyBtnChgParam.uiMaskRtStat.0	:= p_tyUsrMgmtCurrAccessRgt.bChgParam AND p_bOpsStatusStop;
	
END_ACTION
