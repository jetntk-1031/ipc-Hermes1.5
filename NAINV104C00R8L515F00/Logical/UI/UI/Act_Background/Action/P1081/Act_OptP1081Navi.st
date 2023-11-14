
ACTION Act_OptP1081Navi: 
	
	IF tyP1081UsrMgmtUsrAccessRgt.tyNaviBack.tyBtnBack.bRtCompl = TRUE THEN
		tyP1081UsrMgmtUsrAccessRgt.tyNaviBack.tyBtnBack.bRtCompl	:= FALSE;
		tyP1081UsrMgmtUsrAccessRgt.tyNaviBack.tyBtnBack.bValue		:= FALSE;
		
		eChgPage	:= UIP1080UsrMgmt;
	END_IF
	
END_ACTION
