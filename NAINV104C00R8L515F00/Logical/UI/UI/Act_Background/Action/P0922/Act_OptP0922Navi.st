
ACTION Act_OptP0922Navi:
	
	IF tyP0922InletNOutletShutter.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		eChgPage		:= UIP0920MtrNPneuCtrl;
			
		tyP0922InletNOutletShutter.tyNaviBack.tyBtnBack.bRtCompl 	:= FALSE;
		tyP0922InletNOutletShutter.tyNaviBack.tyBtnBack.bValue		:= FALSE;
	END_IF
	
END_ACTION
