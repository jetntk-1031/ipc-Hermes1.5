
ACTION Act_OptP0921DCCtrl: 
	
	IF tyP0921ClampNoRS.tyCom.tyBtnDCCtrl.bValue = TRUE THEN
		
		IF p_bClampTwoCtrlOut = FALSE THEN
			
			IF tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl = TRUE THEN
				tyP0921ClampNoRS.tyDC.tyBtnRet.bValue	:= TRUE;
				tyP0921ClampNoRS.tyDC.tyBtnExt.bValue	:= FALSE;
				
				eClampAct	:= PneuActSetRet;
				
				IF p_eClampStat = PneuActSetRet AND p_eClampStatus = Done THEN
					eClampAct	:= PneuActIdle;
					
					tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 0;
					tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl	:= FALSE;
				END_IF
				
			ELSIF tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl = TRUE THEN
				tyP0921ClampNoRS.tyDC.tyBtnExt.bValue	:= TRUE;
				tyP0921ClampNoRS.tyDC.tyBtnRet.bValue	:= FALSE;
				
				eClampAct	:= PneuActSetExt;
				
				IF p_eClampStat = PneuActSetExt AND p_eClampStatus = Done THEN
					eClampAct	:= PneuActIdle;
					
					tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 1;
					tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl	:= FALSE;
				END_IF
				
			END_IF	
					
		ELSE
			
			IF (tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl = TRUE) OR (tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl = TRUE) THEN
				
				IF (tyP0921ClampNoRS.tyDC.tyBtnRet.bValue = TRUE) AND (tyP0921ClampNoRS.tyDC.tyBtnExt.bValue = TRUE) THEN
					eClampAct	:= PneuActSetAll;
					
					IF p_eClampStat = PneuActSetAll AND p_eClampStatus = Done THEN
						eClampAct	:= PneuActIdle;
						
						tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl	:= FALSE;
						tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl	:= FALSE;
					END_IF	
					
				ELSIF (tyP0921ClampNoRS.tyDC.tyBtnRet.bValue = TRUE) AND (tyP0921ClampNoRS.tyDC.tyBtnExt.bValue = FALSE) THEN	
					eClampAct	:= PneuActSetRet;
					
					IF p_eClampStat = PneuActSetRet AND p_eClampStatus = Done THEN
						eClampAct	:= PneuActIdle;
						
						tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 0;
						tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl	:= FALSE;
						tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl	:= FALSE;
					END_IF
					
				ELSIF (tyP0921ClampNoRS.tyDC.tyBtnRet.bValue = FALSE) AND (tyP0921ClampNoRS.tyDC.tyBtnExt.bValue = TRUE) THEN	
					eClampAct	:= PneuActSetExt;
					
					IF p_eClampStat = PneuActSetExt AND p_eClampStatus = Done THEN
						eClampAct	:= PneuActIdle;
						
						tyP0921ClampNoRS.tyCom.tyBitmapMc.usiValueIdx	:= 1;
						tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl	:= FALSE;
						tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl	:= FALSE;
					END_IF
					
				ELSE	
					eClampAct	:= PneuActRstAll;
					
					IF p_eClampStat = PneuActRstAll AND p_eClampStatus = Done THEN
						eClampAct	:= PneuActIdle;
						
						tyP0921ClampNoRS.tyDC.tyBtnRet.bRtCompl	:= FALSE;
						tyP0921ClampNoRS.tyDC.tyBtnExt.bRtCompl	:= FALSE;
					END_IF
					
				END_IF
				
			END_IF	
			
		END_IF
		
		tyP0921ClampNoRS.tyFB.tyBtnExt.bRtCompl	:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnExt.bValue		:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnRet.bRtCompl	:= FALSE;
		tyP0921ClampNoRS.tyFB.tyBtnRet.bValue		:= FALSE;
		
	END_IF
	

END_ACTION
