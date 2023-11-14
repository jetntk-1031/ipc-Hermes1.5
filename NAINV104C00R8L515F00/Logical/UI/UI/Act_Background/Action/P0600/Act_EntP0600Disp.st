
ACTION Act_EntP0600Disp: 
	
	//Access Addres
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0600Alm.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0010RcyMsg ACCESS ADR(tyP0600Alm.tyRcyMsgHide);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP0600Alm ACCESS ADR(tyP0600Alm.tyAlm);
	
	tyP0600Alm.tyAlm.tyBtnCurr.bRtCompl := TRUE;
	
	//Reset
	bTeachStopperAtLftPos	:= FALSE;
	bTeachStopperAtRgtPos	:= FALSE;
	
END_ACTION
