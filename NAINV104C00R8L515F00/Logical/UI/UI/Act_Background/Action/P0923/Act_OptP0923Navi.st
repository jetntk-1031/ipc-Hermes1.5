
ACTION Act_OptP0923Navi:
	
	IF tyP0923Stopper.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		tyP0923Stopper.tyNaviBack.tyBtnBack.bRtCompl 	:= FALSE;
		tyP0923Stopper.tyNaviBack.tyBtnBack.bValue		:= FALSE;
		
		eChgPage	:= UIP0920MtrNPneuCtrl;
		
	END_IF
	
END_ACTION
