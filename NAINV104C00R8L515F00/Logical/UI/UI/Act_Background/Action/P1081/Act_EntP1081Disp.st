
ACTION Act_EntP1081Disp:
	
	//Access Address
	p_tyC0004Navi ACCESS ADR(tyP1081UsrMgmtUsrAccessRgt.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0006Set ACCESS ADR(tyCommon.tySet);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1081UsrMgmtUsrAccessRgt.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP1081UsrMgmtUsrAccessRgtSel ACCESS ADR(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel);
	p_tyP1081UsrMgmtUsrAccessRgt ACCESS ADR(tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1);
	
	//Display
	//Reset DrpDn List
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtSel.tyDrpDnLevel.usiValueIdx	:= 0;
	
	//Backup Param
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1BkUp	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl1;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2BkUp	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl2;
	tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3BkUp	:= tyP1081UsrMgmtUsrAccessRgt.tyUsrAccessRgtLvl3;
	
END_ACTION
