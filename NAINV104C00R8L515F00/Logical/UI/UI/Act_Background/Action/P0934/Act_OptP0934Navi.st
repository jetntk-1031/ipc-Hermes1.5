
ACTION Act_OptP0934Navi:
	
	IF tyP0934AW.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		tyP0934AW.tyNaviBack.tyBtnBack.bRtCompl	:= FALSE;
		tyP0934AW.tyNaviBack.tyBtnBack.bValue	:= FALSE;
		
		eChgPage	:= UIP0920MtrNPneuCtrl;
		
	END_IF
	
END_ACTION
