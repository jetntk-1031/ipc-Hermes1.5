
ACTION Act_OptP0923RstMnl:

	IF EDGEPOS(p_eStopperStatus = Error) THEN
		
		eStopperAct	:= PneuActIdle;
		
		tyP0923Stopper.tyDC.tyBtnRetract.bValue 	:= FALSE;
		tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl 	:= FALSE;
			
		tyP0923Stopper.tyDC.tyBtnExtend.bValue 		:= FALSE;
		tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl 	:= FALSE;
		
		tyP0923Stopper.tyFB.tyBtnRetract.bValue 	:= FALSE;
		tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl 	:= FALSE;
			
		tyP0923Stopper.tyFB.tyBtnExtend.bValue 		:= FALSE;
		tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl 	:= FALSE;
	
	END_IF
	
	//Reset to Function Block Layer
	IF EDGEPOS(bManualMod = FALSE) THEN
		tyP0923Stopper.tyCom.tyBtnDCCtrl.bValue := FALSE;
		
		fUIInRtStatHide(ADR(tyP0923Stopper.tyDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0923Stopper.tyFB.tyLyr.uiRtStat));
		
		eStopperAct	:= PneuActIdle;
		
		tyP0923Stopper.tyDC.tyBtnRetract.bValue 	:= FALSE;
		tyP0923Stopper.tyDC.tyBtnRetract.bRtCompl 	:= FALSE;
			
		tyP0923Stopper.tyDC.tyBtnExtend.bValue 		:= FALSE;
		tyP0923Stopper.tyDC.tyBtnExtend.bRtCompl 	:= FALSE;
		
		tyP0923Stopper.tyFB.tyBtnRetract.bValue 	:= FALSE;
		tyP0923Stopper.tyFB.tyBtnRetract.bRtCompl 	:= FALSE;
			
		tyP0923Stopper.tyFB.tyBtnExtend.bValue 		:= FALSE;
		tyP0923Stopper.tyFB.tyBtnExtend.bRtCompl 	:= FALSE;
	
	END_IF
	
END_ACTION
