
ACTION Act_OptP1024Navi: 
	
	IF tyP1024McSetAntiGap.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		tyP1024McSetAntiGap.tyNaviBack.tyBtnBack.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP1020McSetNavi;
		
	END_IF

END_ACTION
