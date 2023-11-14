
ACTION Act_OptC0004NaviP1024: 

	IF tyP1024McSetAntiGap.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		IF usiSaveMcParamStep = 255 THEN
			eChgPage			:= eCurrPage;
			usiSaveMcParamStep	:= 0;
			
			tyP1024McSetAntiGap.tyNaviBack.tyBtnBack.bRtCompl	:= FALSE;
	
		ELSIF usiSaveMcParamStep = 99 THEN
			usiSaveMcParamStep	:= 0;
			eChgPage			:= UIP1020McSetNavi;
			
			Act_ExitC0006RstBtn;
			
			tyP1024McSetAntiGap.tyNaviBack.tyBtnBack.bRtCompl	:= FALSE;
			
		ELSE
			Act_ExitP1024Save;
			
		END_IF
	END_IF

END_ACTION
