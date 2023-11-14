
ACTION Act_EntP1024Disp: 
	
	//Access Address
	p_tyC0004Navi ACCESS ADR(tyP1024McSetAntiGap.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0006Set ACCESS ADR(tyCommon.tySet);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1024McSetAntiGap.tyMsgBoxHide);
		
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP1024McSetAntiGap ACCESS ADR(tyP1024McSetAntiGap.tyAntiGap);
	
	//Backup Param
	tyP1024McSetAntiGap.tyAntiGapBkUp	:= tyP1024McSetAntiGap.tyAntiGap;
	
END_ACTION
