
ACTION Act_OptP0921Navi:
	
	IF tyP0921ClampNoRS.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		tyP0921ClampNoRS.tyNaviBack.tyBtnBack.bRtCompl 	:= FALSE;
		tyP0921ClampNoRS.tyNaviBack.tyBtnBack.bValue		:= FALSE;
		
		eChgPage	:= UIP0920MtrNPneuCtrl;
		
	END_IF
	
END_ACTION
