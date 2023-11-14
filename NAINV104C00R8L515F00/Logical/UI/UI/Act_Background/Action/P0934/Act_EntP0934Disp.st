
ACTION Act_EntP0934Disp: 
	
	//Access Address
	p_tyC0001MotionStd ACCESS ADR(tyP0934AW.tyMotionStd);
	
	p_tyC0002FullMask ACCESS ADR(tyP0934AW.tyFullMaskHide);
	
	p_tyC0004Navi ACCESS ADR(tyP0934AW.tyNaviBack);
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0934AW.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0934AW ACCESS ADR(tyP0934AW.tyAW);
	
	//Display
	tyP0934AW.tyAW.tyNumNewWidth.diValue	:= p_tyProdRcpCurrRcp0.diWidthInUM;
	
	tyP0934AW.tyMotionStd.tyBtnPwr.bValue	:= p_bAWOpenPwrOn;

	fbLmtRstTm(IN := FALSE);

END_ACTION
