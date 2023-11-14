
ACTION Act_OptP0002ChgPage:
	
	//General
	IF tyP0002Menu.tyMenu.tyBtnOpt.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnOpt.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP0200OpsGen;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnProdSel.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnProdSel.bRtCompl:= FALSE;
		
		eChgPage	:= UIP0400ProdSel;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnMcInfo.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnMcInfo.bRtCompl	:= FALSE;
		
		eChgPage := UIP0300McInfo;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnAlm.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnAlm.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP0600Alm;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnLogin.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnLogin.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP0100Login;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnLFCtrl.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnLFCtrl.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP0700LFCtrl;

	//Manual
	ELSIF tyP0002Menu.tyMenu.tyBtnGenInput.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnGenInput.bRtCompl	:= FALSE;
		
		bUIManualMod	:= TRUE;
		
		eChgPage	:= UIP0900GenIn;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnGenOutput.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnGenOutput.bRtCompl	:= FALSE;
		
		bUIManualMod	:= TRUE;
		
		eChgPage	:= UIP0910GenOut;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnMovCtrl.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnMovCtrl.bRtCompl	:= FALSE;
		
		bUIManualMod	:= TRUE;
		
		eChgPage	:= UIP0920MtrNPneuCtrl;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnCommCtrl.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnCommCtrl.bRtCompl	:= FALSE;
		
		bUIManualMod	:= TRUE;
		
		eChgPage	:= UIP0940CommCtrl;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnSimu.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnSimu.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP0950Simu;
		
	//Settings
	ELSIF tyP0002Menu.tyMenu.tyBtnLang.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnLang.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP1000Lang;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnMcSet.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnMcSet.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP1020McSetNavi;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnProdSet.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnProdSet.bRtCompl:= FALSE;
		
		eChgPage	:= UIP1040ProdSet;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnLFSet.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnLFSet.bRtCompl	:= FALSE;
		
		eChgPage	:= UIP1050LFSet;
		
	ELSIF tyP0002Menu.tyMenu.tyBtnUsrMgmt.bRtCompl = TRUE THEN
		tyP0002Menu.tyMenu.tyBtnUsrMgmt.bRtCompl:= FALSE;
		
		eChgPage	:= UIP1080UsrMgmt;
		
	END_IF
	
END_ACTION
