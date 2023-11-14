
ACTION Act_OptP0002ManualCtrl: 
	
	IF EDGEPOS(bUIManualMod) THEN	
		
		IF p_tyNtParamCurr.eTLBuzMode= TLBuzModBHTC THEN
		
			tyP0910GenOut.tyGenOut.tyBtnTLWhite.bValue	:= TRUE;
		ELSE
		
			tyP0910GenOut.tyGenOut.tyBtnTLAmber.bValue	:= TRUE;

		END_IF
		
		//Mask
		fUIInRtStatOff(ADR(tyP0002Menu.tyMenu.tyGenMaskLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0002Menu.tyMenu.tySetMaskLyr.uiRtStat));
		
		//Show Reset Manual Button
		fUIInRtStatOff(ADR(tyP0002Menu.tyMenu.tyBtnMnlRst.uiRtStat));
		
	END_IF
	
	IF tyP0002Menu.tyMenu.tyBtnMnlRst.bRtCompl = TRUE THEN	
		tyP0002Menu.tyMenu.tyBtnMnlRst.bRtCompl	:= FALSE;
		
		bUIManualMod	:= FALSE;
		
		//Unmask
		fUIInRtStatHide(ADR(tyP0002Menu.tyMenu.tyGenMaskLyr.uiRtStat));
		fUIInRtStatHide(ADR(tyP0002Menu.tyMenu.tySetMaskLyr.uiRtStat));
		
		//Hide Reset Manual Button
		fUIInRtStatHide(ADR(tyP0002Menu.tyMenu.tyBtnMnlRst.uiRtStat));	
		
	END_IF
	
	bManualMod	:= bUIManualMod AND p_tyDI.bSafetyRlySig;
	
END_ACTION
