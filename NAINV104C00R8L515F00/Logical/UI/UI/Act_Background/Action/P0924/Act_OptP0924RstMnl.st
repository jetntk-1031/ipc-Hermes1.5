ACTION Act_OptP0924RstMnl: 
	
	IF EDGEPOS(p_eClamp1Status = Error) THEN
		
		eClamp1Act	:= PneuActIdle;
		
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue	:= TRUE;
		
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue	:= FALSE;
		
	END_IF
	
	IF EDGEPOS(p_eClamp2Status = Error) THEN
		
		eClamp2Act	:= PneuActIdle;
		
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue		:= FALSE;
		
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue		:= FALSE;
		
	END_IF
	
	IF EDGEPOS(p_eClamp3Status = Error) THEN
		
		eClamp3Act	:= PneuActIdle;
		
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue		:= FALSE;
		
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue		:= FALSE;
		
	END_IF
	
	IF EDGEPOS(bManualMod = FALSE) THEN 
	
		tyP0924ClampWithRS.tyClamp1WithRSCom.tyBtnSwitch.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSCom.tyBtnSwitch.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSCom.tyBtnSwitch.bValue		:= FALSE;
		
		IF bUIManualMod=FALSE THEN
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp1WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp1WithRSFB.tyLyr.uiRtStat));
			
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp2WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp2WithRSFB.tyLyr.uiRtStat));
			
			fUIInRtStatHide(ADR(tyP0924ClampWithRS.tyClamp3WithRSDC.tyLyr.uiRtStat));
			fUIInRtStatOff(ADR(tyP0924ClampWithRS.tyClamp3WithRSFB.tyLyr.uiRtStat));
		END_IF
		
		eClamp1Act	:= PneuActIdle;
		
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnExt.bValue	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSDC.tyBtnRet.bValue	:= TRUE;
		
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnExt.bValue	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bRtCompl	:= FALSE;
		tyP0924ClampWithRS.tyClamp1WithRSFB.tyBtnRet.bValue	:= FALSE;
		
		eClamp2Act	:= PneuActIdle;
		
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSDC.tyBtnRet.bValue		:= FALSE;
		
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp2WithRSFB.tyBtnRet.bValue		:= FALSE;
		
		eClamp3Act	:= PneuActIdle;
		
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSDC.tyBtnRet.bValue		:= FALSE;
		
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnExt.bValue		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bRtCompl		:= FALSE;
		tyP0924ClampWithRS.tyClamp3WithRSFB.tyBtnRet.bValue		:= FALSE;
		
	END_IF
END_ACTION
