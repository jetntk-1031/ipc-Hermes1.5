
ACTION Act_OptP0922RstMnl: 
	
	IF EDGEPOS(p_eInShutterStatus = Error) THEN
		
		eInShutterAct	:= PneuActIdle;
		
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue	:= TRUE;
		
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue	:= FALSE;
		
	END_IF
	
	IF EDGEPOS(p_eOutShutterStatus = Error) THEN
		
		eOutShutterAct	:= PneuActIdle;
		
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue		:= FALSE;
		
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue		:= FALSE;
		
	END_IF
	
	IF EDGEPOS(bManualMod = FALSE) THEN 
	
		tyP0922InletNOutletShutter.tyInletShutterCom.tyBtnSwitch.bValue		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue	:= FALSE;
		
		fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyInletShutterDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyInletShutterFB.tyLyr.uiRtStat));
		
		fUIInRtStatHide(ADR(tyP0922InletNOutletShutter.tyOutletShutterDC.tyLyr.uiRtStat));
		fUIInRtStatOff(ADR(tyP0922InletNOutletShutter.tyOutletShutterFB.tyLyr.uiRtStat));
		
		eInShutterAct	:= PneuActIdle;
		
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnClose.bValue	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterDC.tyBtnOpen.bValue	:= TRUE;
		
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnClose.bValue	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyInletShutterFB.tyBtnOpen.bValue	:= FALSE;
		
		eOutShutterAct	:= PneuActIdle;
		
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue		:= FALSE;
		
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl		:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue		:= FALSE;
		
	END_IF
	
END_ACTION
