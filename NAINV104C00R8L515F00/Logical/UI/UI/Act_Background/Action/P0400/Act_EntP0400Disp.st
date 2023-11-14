
ACTION Act_EntP0400Disp: 
	
	//Access Addres
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP0400ProdSel.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyC0012RcpPopUp ACCESS ADR(tyP0400ProdSel.tyRcpPopUp);
	
	p_tyP0400ProdSel ACCESS ADR(tyP0400ProdSel.tyProdSel);
	p_tyP0400RcpDet ACCESS ADR(tyP0400ProdSel.tyRcpDet);
	
	//Display
	tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl			:= FALSE;
	tyP1040ProdSet.tyProdSet.tyBtnSort.bValue			:= FALSE;
	tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl	:= TRUE;
	tyP0400ProdSel.tyProdSel.tyStringSearch.sValue		:= '';
	fUIInRtStatHide(ADR(tyP0400ProdSel.tyRcpDet.tyLyr.uiRtStat));
	
	fUIInRtStatHide(ADR(tyP0400ProdSel.tyRcpPopUp.tyLyr.uiRtStat)); // Hide Pop Up Layer
	
	//Product Selection
	tyP0400ProdSel.tyProdSel.tyStringRecipeNm.sValue		:= p_tyProdRcpCurrRcp0.sRcpNm;
	tyP0400ProdSel.tyProdSel.tyNumProdWidth.diValue			:= p_tyProdRcpCurrRcp0.diWidthInUM;
	tyP0400ProdSel.tyProdSel.tyNumProdWidth2.diValue	:= p_tyProdRcpCurrRcp0.diWidthInUM2;
	tyP0400ProdSel.tyProdSel.tyTxtMcMod.usiValueIdx			:= p_tyProdRcpCurrRcp0.usiMcMod;
	tyP0400ProdSel.tyProdSel.tyTxtFlippedBrd.usiValueIdx	:= p_tyProdRcpCurrRcp0.usiFlippedBrd;
	tyP0400ProdSel.tyProdSel.tyStringMatchCode.sValue		:= p_tyProdRcpCurrRcp0.sMatchCode;
	
END_ACTION
