
ACTION Act_EntP1000Disp:
	
	//Access Address
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1000Lang.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP1000Lang ACCESS ADR(tyP1000Lang.tyLang);
	
	//Backup Param
	tyP1000Lang.tyLangBkUp	:= tyP1000Lang.tyLang;
	
	//Display
	tyP1000Lang.tyLang.tyBtnEnglish.uiRtStat.0		:= NOT (p_tyNtParamCurr.bChinesePrep OR p_tyNtParamCurr.bGemanPrep);
	tyP1000Lang.tyLang.tyBtnChinese.uiRtStat.0		:= NOT (p_tyNtParamCurr.bChinesePrep);
	tyP1000Lang.tyLang.tyBtnGerman.uiRtStat.0		:= NOT (p_tyNtParamCurr.bGemanPrep);
	
END_ACTION
