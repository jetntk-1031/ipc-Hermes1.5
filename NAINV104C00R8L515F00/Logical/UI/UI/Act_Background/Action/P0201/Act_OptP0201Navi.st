
ACTION Act_OptP0201Navi: 
	
	IF tyP0201OpsConv.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		tyP0201OpsConv.tyNaviBack.tyBtnBack.bRtCompl	:= FALSE;
		tyP0201OpsConv.tyNaviBack.tyBtnBack.bValue		:= FALSE;
		
		eChgPage	:= UIP0200OpsGen;
	END_IF
	
END_ACTION
