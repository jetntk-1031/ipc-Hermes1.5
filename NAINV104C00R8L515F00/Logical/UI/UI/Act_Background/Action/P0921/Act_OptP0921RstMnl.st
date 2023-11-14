
ACTION Act_OptP0921RstMnl: 
	
	IF EDGEPOS(p_eClampStatus = Error) THEN
		
		eClampAct	:= PneuActIdle;
		
		tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnRet.bValue		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnExt.bValue		:= FALSE;
		
		tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnRet.bValue		:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnExt.bValue		:= FALSE;
		
	END_IF
	
	IF EDGEPOS(bManualMod = FALSE) THEN 
	
		tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue		:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0921ClampNoRS.tyDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0921ClampNoRS.tyFB.tyLyr.uiRtStat));
		
		eClampAct	:= PneuActIdle;
		
		tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnRet.bValue		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyDC.tyBtnExt.bValue		:= FALSE;
		
		tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnRet.bValue		:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl		:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnExt.bValue		:= FALSE;
		
	END_IF	
		
END_ACTION
