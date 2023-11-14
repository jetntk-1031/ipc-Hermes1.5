
ACTION Act_EntP0700Disp: 
	
	//Access Address
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0700LFCtrl.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0700LFCtrl ACCESS ADR(tyP0700LFCtrl.tyLdr);
	
	//Run
	bLeaderRun	:= TRUE;
	
END_ACTION
