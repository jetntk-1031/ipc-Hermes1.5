
ACTION Act_EntP1040Disp:
	
	//Access Address
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1040ProdSet.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyC0012RcpPopUp ACCESS ADR(tyP1040ProdSet.tyRcpPopUp);
	
	p_tyP1040ProdSet ACCESS ADR(tyP1040ProdSet.tyProdSet);
	
	//Display
	tyP1040ProdSet.tyProdSet.tyStringSearch.sValue	:= '';
	udiP1040SelectedRowOld	 := 0;
	
	fUIInRtStatHide(ADR(tyP1040ProdSet.tyRcpPopUp.tyLyr.uiRtStat));
	
	tyP1040ProdSet.tyProdSet.tyBtnSort.bValue := FALSE;
	tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl := FALSE;
	
	
	
END_ACTION
