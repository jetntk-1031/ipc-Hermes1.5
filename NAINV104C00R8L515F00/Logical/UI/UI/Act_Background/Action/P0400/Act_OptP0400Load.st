
ACTION Act_OptP0400Load:
	
	IF tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl = TRUE THEN
		
		IF usiSelProdRcpStep = 0 THEN
			//Message Confirmation Ask - Load Product Recipe
			//Mask
			tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat		:= FALSE;
			tyP0400ProdSel.tyProdSel.tyStringSearch.uiMaskRtStat	:= FALSE;
			
			p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxSelRcpAsk);
			
			IF tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnYes.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxHide);
				
				usiSelProdRcpStep	:= 1;
				
			ELSIF tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP0400ProdSel.tyMsgBoxSelRcpAsk.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxHide);
				
				usiSelProdRcpStep	:= 99;
				
			END_IF
			
		ELSIF usiSelProdRcpStep = 1 THEN
			//Load Product Recipe
			tyProdRcpInfoIn.sRcpNm	:= tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[tyP0400Table.uiSelectedRow].sValue;
			
			eProdRcpAct	:= ProdRcpActLoadRcp;
			
			IF p_eProdRcpStat = ProdRcpActLoadRcp AND p_eProdRcpStatus = Done THEN
				eProdRcpAct	:= ProdRcpActIdle;
				
				IF p_bProdRcpNmEmpty = TRUE AND p_bProdRcpNmNotExist = TRUE THEN
					usiSelProdRcpStep	:= 2;
				ELSE
					//Update UI Current Recipe
					tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue	:= p_tyProdRcpCurrRcp0.sRcpNm;
					tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue		:= p_tyProdRcpCurrRcp0.diWidthInUM;
					tyP0400ProdSel.tyProdSel.tyNumProdWidth2.diValue	:= p_tyProdRcpCurrRcp0.diWidthInUM2;
					tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx		:= p_tyProdRcpCurrRcp0.usiMcMod;
					tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx:= p_tyProdRcpCurrRcp0.usiFlippedBrd;
					tyP0400ProdSel.tyProdSel.tyStringMatchCode.sValue	:= p_tyProdRcpCurrRcp0.sMatchCode;
					
					tyProdRcpCurrRcpWr	:= p_tyProdRcpCurrRcp0;
					
					IF ((NOT p_tyNtParamCurr.bLFUsrSetPrep AND p_tyNtParamCurr.bLeaderMc) OR (p_tyNtParamCurr.bLFUsrSetPrep AND p_tyMcParamCurr.bLFLeaderMc)) AND p_tyNtParamCurr.bLFPrep AND p_tyMcParamCurr.bLFEn AND p_tyUsrMgmtCurrAccessRgt.bLFCtrl THEN
						usiSelProdRcpStep	:= 98;
					ELSE
						usiSelProdRcpStep	:= 99;
					END_IF
					
				END_IF
				
			ELSIF p_eProdRcpStatus = Error THEN
				
				usiSelProdRcpStep	:= 99;
				
			END_IF
			
		ELSIF usiSelProdRcpStep = 2 THEN
			//Message Name Not Found
			p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxSelRcpNoNm);
			
			IF tyP0400ProdSel.tyMsgBoxSelRcpNoNm.tyBtnNo.bRtCompl = TRUE THEN
				tyP0400ProdSel.tyMsgBoxSelRcpNoNm.tyBtnNo.bRtCompl	:= FALSE;
				tyP0400ProdSel.tyMsgBoxSelRcpNoNm.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxHide);
				
				usiSelProdRcpStep	:= 99;
				
			END_IF
			
		ELSIF usiSelProdRcpStep = 98 THEN
			//Message Confirmation Ask - Go To Leader Follower Control Page
			p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk);
			
			IF tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnYes.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxHide);
				
				//Change Page
				eChgPage	:= UIP0700LFCtrl;
				
				//Start Operation
				tyCommon.tyMain.tyBtnStart.bRtCompl	:= TRUE;
				
				//Complete
				//Unmask
				tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat		:= TRUE;
				tyP0400ProdSel.tyProdSel.tyStringSearch.uiMaskRtStat	:= TRUE;
			
				//Reset
				tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl	:= FALSE;
				tyP0400ProdSel.tyProdSel.tyBtnLoad.bValue	:= FALSE;
			
				usiSelProdRcpStep	:= 0;
				
			ELSIF tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnNo.bRtCompl	:= FALSE;
				tyP0400ProdSel.tyMsgBoxGoToLFCtrlAsk.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxHide);
				
				usiSelProdRcpStep	:= 99;
				
			END_IF
			
		ELSIF usiSelProdRcpStep = 99 THEN
			//Complete
			//Unmask
			tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat		:= TRUE;
			tyP0400ProdSel.tyProdSel.tyStringSearch.uiMaskRtStat	:= TRUE;
			
			//Reset
			tyP0400ProdSel.tyProdSel.tyBtnLoad.bRtCompl	:= FALSE;
			tyP0400ProdSel.tyProdSel.tyBtnLoad.bValue	:= FALSE;
			
			usiSelProdRcpStep	:= 0;
			
		END_IF
		
	END_IF
	
END_ACTION
