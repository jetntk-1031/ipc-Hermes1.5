
ACTION Act_OptP0922OutletShutterDC: 

	// Direct Control
	IF tyP0922InletNOutletShutter.tyOutletShutterCom.tyBtnSwitch.bValue = TRUE THEN
		IF p_bOutShutterTwoCtrlOut = FALSE THEN
			IF tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl = TRUE THEN
				tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue	:= TRUE;
				tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue	:= FALSE;
				
				eOutShutterAct	:= PneuActSetRet;
				
				IF p_eOutShutterStat = PneuActSetRet AND p_eOutShutterStatus = Done THEN
					eOutShutterAct	:= PneuActIdle;
					
					tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl	:= FALSE;
				END_IF	
					
			ELSIF tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl = TRUE THEN	
				tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue	:= TRUE;
				tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue	:= FALSE;
				
				eOutShutterAct	:= PneuActSetExt;
				
				IF p_eOutShutterStat = PneuActSetExt AND p_eOutShutterStatus = Done THEN
					eOutShutterAct	:= PneuActIdle;
					
					tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
				END_IF	
			END_IF	
			
		ELSE	
			IF (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl = TRUE) OR (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl = TRUE) THEN
				IF (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue = TRUE) AND (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue = TRUE) THEN
					eOutShutterAct	:= PneuActSetAll;
					
					IF p_eOutShutterStat = PneuActSetAll AND p_eOutShutterStatus = Done THEN
						eOutShutterAct	:= PneuActIdle;
						
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl		:= FALSE;
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
					END_IF	
					
				ELSIF (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue = TRUE) AND (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue = FALSE) THEN	
					eOutShutterAct	:= PneuActSetRet;
					
					IF p_eOutShutterStat = PneuActSetRet AND p_eOutShutterStatus = Done THEN
						eOutShutterAct	:= PneuActIdle;
						
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl		:= FALSE;
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
					END_IF
					
				ELSIF (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bValue = FALSE) AND (tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bValue = TRUE) THEN	
					eOutShutterAct	:= PneuActSetExt;
					
					IF p_eOutShutterStat = PneuActSetExt AND p_eOutShutterStatus = Done THEN
						eOutShutterAct	:= PneuActIdle;
						
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl		:= FALSE;
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
					END_IF
					
				ELSE	
					eOutShutterAct	:= PneuActRstAll;
					
					IF p_eOutShutterStat = PneuActRstAll AND p_eOutShutterStatus = Done THEN
						eOutShutterAct	:= PneuActIdle;
						
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnOpen.bRtCompl		:= FALSE;
						tyP0922InletNOutletShutter.tyOutletShutterDC.tyBtnClose.bRtCompl	:= FALSE;
					END_IF
					
				END_IF	
			END_IF	
		END_IF
		
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bRtCompl	:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnOpen.bValue	:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bRtCompl:= FALSE;
		tyP0922InletNOutletShutter.tyOutletShutterFB.tyBtnClose.bValue	:= FALSE;
			
	END_IF
	
END_ACTION
