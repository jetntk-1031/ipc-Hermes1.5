
ACTION Act_OptP1080EditAccess:

	IF tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.bRtCompl = TRUE THEN
		tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.bRtCompl				:= FALSE;
		tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditAccess.bValue					:= FALSE;
		
		tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.bRtCompl := TRUE;
	
		eChgPage		:= UIP1081UsrMgmtUsrAccessRgt;
		
	END_IF
	
END_ACTION
