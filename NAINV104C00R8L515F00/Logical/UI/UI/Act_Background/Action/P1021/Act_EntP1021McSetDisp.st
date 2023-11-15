
ACTION Act_EntP1021Disp: 
	
	//Access Address
	IF bTeachStopperAtLftPos = TRUE OR bTeachStopperAtRgtPos = TRUE THEN
		p_tyC0004Navi ACCESS ADR(tyP1021McSetGen.tyNaviLyr2);
	ELSE
		p_tyC0004Navi ACCESS ADR(tyP1021McSetGen.tyNaviLyr1);
	END_IF	
	
	p_tyC0005Main ACCESS ADR(tyCommon.tyMain);
	
	p_tyC0006Set ACCESS ADR(tyCommon.tySet);
	
	p_tyC0007Notif ACCESS ADR(tyCommon.tyNotif);
	
	p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
	
	p_tyC0009Info ACCESS ADR(tyCommon.tyInfo);
	
	p_tyC0011Loading ACCESS ADR(tyCommon.tyLoading);
	
	p_tyP1021McSetGen ACCESS ADR(tyP1021McSetGen.tyGen);
	
	p_tyP1021McSetNetwork ACCESS ADR(tyP1021McSetGen.tyNetwork);
	//Display
	tyP1021McSetGen.tyGen.tyLyrGen1.uiRtStat.0	:= bTeachStopperAtLftPos OR bTeachStopperAtRgtPos;
	tyP1021McSetGen.tyGen.tyLyrGen2.uiRtStat.0	:= NOT(bTeachStopperAtLftPos OR bTeachStopperAtRgtPos);
	
	//Backup Param
	IF NOT(bTeachStopperAtLftPos OR bTeachStopperAtRgtPos) THEN
		tyP1021McSetGen.tyGenBkUp	:= tyP1021McSetGen.tyGen;
	ELSE
		bTeachStopperAtLftPos	:= FALSE;
		bTeachStopperAtRgtPos	:= FALSE;
	END_IF	
	
	//Network Configuration Display
	usiNetworkModeOld := DINT_TO_USINT(p_tyMcParamCurr.eNetworkMod);
	
	fUIInRtStatHide(ADR(tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat));
		
	tyP1021McSetGen.tyGen.tyBtnLFBuzMute.uiRtStat.0 := NOT (p_tyMcParamCurr.bLFEn AND p_tyNtParamCurr.bLFPrep AND p_tyNtParamCurr.tyDOSettings.diBuz > 0);


END_ACTION
