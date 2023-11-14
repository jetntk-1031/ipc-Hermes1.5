
ACTION Act_OptP0201UpdtDat: 
	
	//Machine Status
	fbMcStatUpdtTm(IN := TRUE);
	IF fbMcStatUpdtTm.Q = TRUE THEN
		fbMcStatUpdtTm(IN := FALSE);
		
		IF p_bOpsUSStandby = TRUE THEN
			IF p_tyNtParamCurr.bUSWidthChkPrep AND p_tyMcParamCurr.bUSWidthChkEn AND p_tyDI.bUSWidthChkSen=FALSE THEN				
				tyP0201OpsConv.tyOps.tyStringMcStatus.sValue	:= 'Width Check Sensor Block Upstream';
			ELSIF p_tyNtParamCurr.bLFPrep AND p_tyMcParamCurr.bLFEn AND p_bLFFollowerUSAllow=FALSE THEN				
				tyP0201OpsConv.tyOps.tyStringMcStatus.sValue	:= 'Leader Issue Block Upstream';
			ELSE
				tyP0201OpsConv.tyOps.tyStringMcStatus.sValue	:= p_sOpsInvertStepTxt;
			END_IF				
		ELSIF p_bOpsDSStandby = TRUE THEN
			IF p_tyNtParamCurr.bDSWidthChkPrep AND p_tyMcParamCurr.bDSWidthChkEn AND p_tyDI.bDSWidthChkSen=FALSE THEN				
				tyP0201OpsConv.tyOps.tyStringMcStatus.sValue	:= 'Width Check Sensor Block Downstream';
			ELSIF p_tyNtParamCurr.bLFPrep AND p_tyMcParamCurr.bLFEn AND p_bLFFollowerDSAllow=FALSE THEN				
				tyP0201OpsConv.tyOps.tyStringMcStatus.sValue	:= 'Leader Issue Block Downstream';
			ELSE
				tyP0201OpsConv.tyOps.tyStringMcStatus.sValue	:= p_sOpsInvertStepTxt;
			END_IF
		ELSE
			tyP0201OpsConv.tyOps.tyStringMcStatus.sValue	:= p_sOpsInvertStepTxt;
		END_IF
				
	END_IF
	
	//Mode
	tyP0201OpsConv.tyOps.tyTxtMod.usiValueIdx	:= p_tyProdRcpCurrRcp1.usiMcMod;
	
	//Width
	IF p_tyNtParamCurr.bAWPrep = FALSE OR p_tyMcParamCurr.bAWDis = TRUE THEN
		tyP0201OpsConv.tyOps.tyNumProdWidth.diValue	:= p_tyProdRcpCurrRcp1.diWidthInUM;
	ELSE
		tyP0201OpsConv.tyOps.tyNumProdWidth.diValue	:= p_tyMcParamCurr.diWidthAtHmPosInUM - p_diAWOpenActualPos;
	END_IF
	
	//Program Info
	tyP0201OpsConv.tyOps.tyStringProdNm.sValue			:= p_tyProdRcpCurrRcp1.sRcpNm;
	tyP0201OpsConv.tyOps.tyTxtFlippedBrd.usiValueIdx	:= p_tyProdRcpCurrRcp1.usiFlippedBrd;
	tyP0201OpsConv.tyOps.tyStringMatchCode.sValue		:= p_tyProdRcpCurrRcp1.sMatchCode;
	
	//Conveyor PCB Status
	IF p_bConvHvBrd = TRUE THEN
		IF p_bConvGdBrd = TRUE THEN
			tyP0201OpsConv.tyOps.tyBitmapConvPCB.usiValueIdx	:= 1;
		ELSE	
			tyP0201OpsConv.tyOps.tyBitmapConvPCB.usiValueIdx	:= 2;
		END_IF	
	ELSE
		tyP0201OpsConv.tyOps.tyBitmapConvPCB.usiValueIdx	:= 0;
	END_IF
	
	IF p_tyNtParamCurr.bHermesPrep=TRUE THEN
		IF p_tyMcParamCurr.eUSComm = McSetCommModSMEMA AND p_tyMcParamCurr.eDSComm = McSetCommModSMEMA THEN
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat));
			fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat));
		ELSE
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat));
			fUIInRtStatOff(ADR(tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat));
		END_IF
	ELSE
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyTxtFlippedBrd.uiRtStat));
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyOps.tyLblFlippedBrd.uiRtStat));
	END_IF
	
	//Product Recipe 254
	tyP0201OpsConv.tyOps.tyHotspotShowLRcp.uiRtStat.0 := NOT(tyP0201OpsConv.tyOps.tyStringProdNm.sValue <> '');
	
	IF tyP0201OpsConv.tyOps.tyHotspotShowLRcp.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyOps.tyHotspotShowLRcp.bRtCompl := FALSE;
		
		fUIInRtStatOff(ADR(tyP0201OpsConv.tyRcpPopUp.tyLyr.uiRtStat));
		
		tyP0201OpsConv.tyRcpPopUp.tyStringInfo.sValue  := p_tyProdRcpCurrRcp1.sRcpNm;
		
	ELSIF tyP0201OpsConv.tyRcpPopUp.tyHotspotClose.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyRcpPopUp.tyHotspotClose.bRtCompl := FALSE;
		
		fUIInRtStatHide(ADR(tyP0201OpsConv.tyRcpPopUp.tyLyr.uiRtStat));
		
	END_IF
	
END_ACTION
