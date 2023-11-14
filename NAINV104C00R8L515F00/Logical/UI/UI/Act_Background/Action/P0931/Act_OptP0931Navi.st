
ACTION Act_OptP0931Navi:
	
	IF tyP0931ConvInv.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		tyP0931ConvInv.tyNaviBack.tyBtnBack.bRtCompl 	:= FALSE;
		tyP0931ConvInv.tyNaviBack.tyBtnBack.bValue		:= FALSE;
		
		eChgPage	:= UIP0920MtrNPneuCtrl;
		
	END_IF
	
END_ACTION
