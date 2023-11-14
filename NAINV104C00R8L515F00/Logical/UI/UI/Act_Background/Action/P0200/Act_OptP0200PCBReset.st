
ACTION Act_OptP0200PCBReset:

	IF p_bOpsRun THEN //Run Mode
	
		IF p_tyProdRcpCurrRcp1.usiMcMod = 2 OR p_tyProdRcpCurrRcp1.usiMcMod = 3 THEN
			IF p_bOpsInvOnceTwicePCBOut AND ((NOT p_bUSSMEMA2Transporting) AND (p_eConvStatus <> Busy) AND NOT(p_bLeftSen OR p_bRightSen)) THEN
				
				fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat));
				
			ELSIF p_bOpsInvOnceTwicePCBOut AND (p_bUSSMEMA2Transporting OR (p_eConvStatus = Busy) OR p_bLeftSen OR p_bRightSen OR (p_eInvertStatus = Busy) OR 
				p_bConvHvBrd OR (p_eClamp1Status = Busy) OR (p_eClamp2Status = Busy) OR (p_eClamp3Status = Busy )) THEN
				
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat));
				
			ELSE
				fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat));
			END_IF
		ELSE
			fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat));
		END_IF
		
	ELSIF bManualMod OR p_bOpsStatusStop THEN // Manual Mode and Stop Mode
		
		IF p_bOpsInvOnceTwicePCBOut AND ((NOT p_bLeftSen) OR (NOT p_bRightSen) OR (NOT p_bConvHvBrd)) THEN
			fUIInRtStatHide(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat));
		ELSE
			fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat));
		END_IF
		
	ELSE
		fUIInRtStatOff(ADR(tyP0200OpsGen.tyOps.tyBtnPCBReset.uiMaskRtStat));
		tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue := FALSE;
		bRtnBrdReset := FALSE;
	END_IF	
	
	IF p_bOpsRun OR bManualMod OR p_bOpsStatusStop THEN
		IF 	tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl = TRUE THEN
			
			p_tyC0008MsgBox ACCESS ADR(tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk);
				
			IF tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnYes.bRtCompl = TRUE THEN
				tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnYes.bRtCompl	:= FALSE;
				tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnYes.bValue		:= FALSE;
				
				bRtnBrdReset := TRUE;	
				p_tyC0008MsgBox ACCESS ADR(tyP0200OpsGen.tyMsgBoxHide);
				
				tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue					:= FALSE;
				tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl					:= FALSE;
				
			ELSIF tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnNo.bRtCompl = TRUE THEN
				tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnNo.bRtCompl		:= FALSE;
				tyP0200OpsGen.tyMsgBoxRstWaitingBrdAsk.tyBtnNo.bValue		:= FALSE;
				tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue					:= FALSE;
				tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl					:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0200OpsGen.tyMsgBoxHide);
				
			END_IF
				
		END_IF
		
	ELSE
		p_tyC0008MsgBox ACCESS ADR(tyP0200OpsGen.tyMsgBoxHide);
	END_IF
	
	IF bRtnBrdReset AND p_bOpsInvOnceTwicePCBOut = FALSE AND p_bOpsInvertStepUSStandby THEN
		bRtnBrdReset := FALSE;
		tyP0200OpsGen.tyOps.tyBtnPCBReset.bValue 	:= FALSE;
		tyP0200OpsGen.tyOps.tyBtnPCBReset.bRtCompl	:= FALSE;
		
	ELSIF (bRtnBrdReset) AND (bManualMod OR p_bOpsStatusStop) THEN
		IF p_bOpsInvOnceTwicePCBOut = FALSE THEN
			bRtnBrdReset := FALSE;
		END_IF		
	END_IF	
		
END_ACTION