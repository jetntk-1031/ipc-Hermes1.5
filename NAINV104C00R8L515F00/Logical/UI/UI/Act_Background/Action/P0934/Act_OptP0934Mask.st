
ACTION Act_OptP0934Mask: 

	//Interlock Power
	IF p_bAWOpenAxisErr = TRUE AND p_bAWOpenPwrOn = FALSE THEN
		tyP0934AW.tyMotionStd.tyBtnPwr.bValue		:= FALSE;
		
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnPwr.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0934AW.tyMotionStd.tyBtnPwr.uiMaskRtStat));
	END_IF
	
	//Interlock Others Move
	IF p_bAWOpenAxisErr = TRUE OR p_bAWOpenPwrOn = FALSE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
	END_IF
	
	//Interlock Move Absolute
	IF p_bAWOpenAxisErr = TRUE OR p_bAWOpenPwrOn = FALSE OR p_bAWOpenIsHomed = FALSE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat));
	END_IF
	
	//Interlock Limit Sensor
	IF tyP0934AW.tyMotionStd.tyBtnOpenLmtSen.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
	END_IF
	
	IF tyP0934AW.tyMotionStd.tyBtnCloseLmtSen.bValue = TRUE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
	END_IF
	
	//Interlock When Moving
	IF tyP0934AW.tyMotionStd.tyBtnOrigin.bRtCompl = TRUE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat));
		
	ELSIF tyP0934AW.tyMotionStd.tyBtnMovAbs.bRtCompl = TRUE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat));
		
	ELSIF tyP0934AW.tyMotionStd.tyBtnMovRel.bRtCompl = TRUE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat));
		
	ELSIF (tyP0934AW.tyMotionStd.tyBtnJogOpen.bRtCompl = TRUE) OR (tyP0934AW.tyMotionStd.tyBtnJogOpen.bValue = TRUE) THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat));
		
	ELSIF (tyP0934AW.tyMotionStd.tyBtnJogClose.bRtCompl = TRUE) OR (tyP0934AW.tyMotionStd.tyBtnJogClose.bValue = TRUE) THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyAW.tyBtnGo.uiMaskRtStat));
		
	ELSIF tyP0934AW.tyAW.tyBtnGo.bRtCompl = TRUE THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnOrigin.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovAbs.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnMovRel.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogOpen.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnJogClose.uiMaskRtStat));
		
	END_IF
	
	//Axis Error
	IF tyP0934AW.tyMotionStd.tyBtnPwr.bRtCompl = TRUE  THEN
		fUIInRtStatOff(ADR(tyP0934AW.tyMotionStd.tyBtnRst.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP0934AW.tyMotionStd.tyBtnRst.uiMaskRtStat));
	END_IF
	
END_ACTION
