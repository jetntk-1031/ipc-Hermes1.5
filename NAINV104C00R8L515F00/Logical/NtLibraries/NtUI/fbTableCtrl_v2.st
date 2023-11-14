
(* Table Control Version 2 *)
FUNCTION_BLOCK fbTableCtrl_v2
		
	p_bSliderActive	:= FALSE;
	
	FOR tyInternal.i := 1 TO 15 DO
		IF pa_tyUIHotspot[tyInternal.i].bRtCompl THEN
			p_bTableActive	:= TRUE;
		END_IF
		
	END_FOR
	
	tyInternal.fbSliderRelease(CLK := p_uiSliderStatus.15);
	
	IF p_uiSliderStatus.15 THEN
		tyInternal.fbSliderOffTm(IN := FALSE);
		
		tyInternal.iTablePos	:= p_iSliderPos;
		
		IF tyInternal.iTablePos > (iTotalData - iTotalRow + 1) THEN
			IF (iTotalData - iTotalRow + 1) < 1 THEN
				tyInternal.iTablePos	:= 1;
			ELSE
				tyInternal.iTablePos	:= iTotalData - iTotalRow + 1;
			END_IF
				
		ELSIF tyInternal.iTablePos < 1 THEN
			tyInternal.iTablePos	:= 1;
				
		END_IF
			
		p_uiTablePos	:= INT_TO_UINT(tyInternal.iTablePos);
		p_iSliderPos	:= UINT_TO_INT(p_uiTablePos);
		
		tyInternal.iTablePosTemp	:= UINT_TO_INT(p_uiTablePos);
		
		p_bSliderActive	:= TRUE;
		
	ELSIF tyInternal.fbSliderRelease.Q = TRUE THEN
		p_bSliderActive	:= TRUE;
		p_iSliderPos	:= UINT_TO_INT(p_uiTablePos);
		
	ELSIF p_bTableActive THEN
		//Get Touch Coordinate
		tyInternal.fbTouchGetAction.sVisuNm	:= sVisuNm;
		tyInternal.fbTouchGetAction;
		
		//Touch Filter
		tyInternal.fbTouchFilter.bPressedIn	:= tyInternal.fbTouchGetAction.bPressed;
		tyInternal.fbTouchFilter.udiXIn		:= tyInternal.fbTouchGetAction.udiX;
		tyInternal.fbTouchFilter.udiYIn		:= tyInternal.fbTouchGetAction.udiY;
		tyInternal.fbTouchFilter;
	
		//Get Slide Function Block
		tyInternal.fbTouchGetSlideDist.udiWorkAreaStartX	:= udiWorkAreaStartX;
		tyInternal.fbTouchGetSlideDist.udiWorkAreaStartY	:= udiWorkAreaStartY;
		tyInternal.fbTouchGetSlideDist.udiWorkAreaEndX		:= udiWorkAreaEndX;
		tyInternal.fbTouchGetSlideDist.udiWorkAreaEndY		:= udiWorkAreaEndY;
		tyInternal.fbTouchGetSlideDist.udiMinXDist			:= udiMinXDist;
		tyInternal.fbTouchGetSlideDist.udiMinYDist			:= udiMinYDist;
		tyInternal.fbTouchGetSlideDist.bPressed				:= tyInternal.fbTouchFilter.bPressedOut;
		tyInternal.fbTouchGetSlideDist.udiX					:= tyInternal.fbTouchFilter.udiXOut;
		tyInternal.fbTouchGetSlideDist.udiY					:= tyInternal.fbTouchFilter.udiYOut;
		tyInternal.fbTouchGetSlideDist;
	
		//Get Tap Function Block
		tyInternal.fbTouchGetTap.udiWorkAreaStartX		:= udiWorkAreaStartX;
		tyInternal.fbTouchGetTap.udiWorkAreaStartY		:= udiWorkAreaStartY;
		tyInternal.fbTouchGetTap.udiWorkAreaEndX		:= udiWorkAreaEndX;
		tyInternal.fbTouchGetTap.udiWorkAreaEndY		:= udiWorkAreaEndY;
		tyInternal.fbTouchGetTap.udiMinSingleTapXDiff	:= udiMinXDist;
		tyInternal.fbTouchGetTap.udiMinSingleTapYDiff	:= udiMinYDist;
		tyInternal.fbTouchGetTap.bPressed				:= tyInternal.fbTouchFilter.bPressedOut;
		tyInternal.fbTouchGetTap.udiX					:= tyInternal.fbTouchFilter.udiXOut;
		tyInternal.fbTouchGetTap.udiY					:= tyInternal.fbTouchFilter.udiYOut;
		tyInternal.fbTouchGetTap;
		
		fUIInRtStatOff(ADR(p_uiSliderStatus));
		
		IF tyInternal.fbTouchFilter.bPressedOut = TRUE THEN
			tyInternal.fbSliderOffTm(IN := FALSE);
			tyInternal.fbSingleTapChkDlyTm(IN := FALSE);
			
			IF uiSlideScale < 1 THEN
				uiSlideScale	:= 1;
			END_IF
			
			tyInternal.iTablePos	:= tyInternal.iTablePosTemp - DINT_TO_INT(tyInternal.fbTouchGetSlideDist.diYDist) / UINT_TO_INT(uiSlideScale);
			
			IF tyInternal.iTablePos > (iTotalData - iTotalRow + 1) THEN
				IF (iTotalData - iTotalRow + 1) < 1 THEN
					tyInternal.iTablePos	:= 1;
				ELSE
					tyInternal.iTablePos	:= iTotalData - iTotalRow + 1;
				END_IF
				
			ELSIF tyInternal.iTablePos < 1 THEN
				tyInternal.iTablePos	:= 1;
				
			END_IF
			
			p_uiTablePos	:= INT_TO_UINT(tyInternal.iTablePos);
			p_iSliderPos	:= UINT_TO_INT(p_uiTablePos);
			
		ELSE
			tyInternal.iTablePosTemp	:= tyInternal.iTablePos;
			
			tyInternal.fbSingleTapChkDlyTm(IN := TRUE);
			
			IF tyInternal.fbSingleTapChkDlyTm.Q = TRUE THEN
				FOR tyInternal.i := 1 TO 15 DO
					pa_tyUIHotspot[tyInternal.i].bRtCompl	:= FALSE;
				END_FOR
			
				p_bTableActive	:= FALSE;
				
			ELSE
				FOR tyInternal.i := 1 TO 15 DO
					IF pa_tyUIHotspot[tyInternal.i].bValue = TRUE THEN
						IF tyInternal.fbTouchGetTap.bSingleTap = TRUE THEN
							p_uiSelectedRow	:= tyInternal.i;
						END_IF
						
						pa_tyUIHotspot[tyInternal.i].bValue	:= FALSE;
						
					END_IF
					
				END_FOR
				
			END_IF
			
		END_IF
		
	ELSIF p_uiSliderStatus.0 = FALSE THEN
		tyInternal.fbSliderOffTm(IN := TRUE);
		
		IF tyInternal.fbSliderOffTm.Q = TRUE THEN
			fUIInRtStatHide(ADR(p_uiSliderStatus));
			tyInternal.fbSliderOffTm(IN := FALSE);
			
		END_IF
		
	END_IF
	
	tyInternal.fbSelectedRowMnlRise(CLK := bSelectedRowMnl);
	IF tyInternal.fbSelectedRowMnlRise.Q THEN
		p_uiSelectedRow	:= uiSelectedRowMnl;
	END_IF
	
	tyInternal.fbTablePosUpRise(CLK := bTablePosPlus);
	IF tyInternal.fbTablePosUpRise.Q THEN
		p_uiTablePos				:= p_uiTablePos + 1;
		p_iSliderPos				:= p_iSliderPos + 1;
		tyInternal.iTablePos		:= tyInternal.iTablePos + 1;
		tyInternal.iTablePosTemp	:= tyInternal.iTablePosTemp + 1;
		
	END_IF
	
	tyInternal.fbTablePosDownRise(CLK := bTablePosMinus);
	IF tyInternal.fbTablePosDownRise.Q THEN
		p_uiTablePos				:= p_uiTablePos - 1;
		p_iSliderPos				:= p_iSliderPos - 1;
		tyInternal.iTablePos		:= tyInternal.iTablePos - 1;
		tyInternal.iTablePosTemp	:= tyInternal.iTablePosTemp - 1;
		
	END_IF
	
END_FUNCTION_BLOCK
