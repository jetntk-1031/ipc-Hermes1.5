
ACTION Act_OptP1023DSSel:
	
	IF tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue		:= TRUE;
		tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk		:= TRUE;
		
		tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue	:= FALSE;
		tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk		:= FALSE;
		
	ELSIF tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue		:= FALSE;
		tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtLk		:= FALSE;
		
		tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue	:= TRUE;
		tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtLk		:= TRUE;
	ELSIF tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue		:= TRUE;
		tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk		:= TRUE;
		
		tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue	:= FALSE;
		tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk		:= FALSE;
		
	ELSIF  tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue		:= FALSE;
		tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtLk		:= FALSE;
		
		tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue	:= TRUE;
		tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtLk		:= TRUE;
		
	END_IF
	
	//Dsstream Selection
	IF tyP1023McSetHComm.tyGen.tyDrpDnDSSel.bRtCompl THEN
		
		tyP1023McSetHComm.tyGen.tyDrpDnDSSel.bRtCompl:= FALSE;
		
		IF tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx = 0 THEN
			
			p_tyP1023McSetHCommDSSel ACCESS ADR(tyP1023McSetHComm.tyDSSel);
			p_tyP1023McSetHCommDSSMEMA ACCESS ADR(tyP1023McSetHComm.tyDSSMEMA);
			p_tyP1023McSetHCommDSHermes ACCESS ADR(tyP1023McSetHComm.tyDSHermes);
			
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat));
		
		ELSIF tyP1023McSetHComm.tyGen.tyDrpDnDSSel.usiValueIdx = 1 THEN
			
			p_tyP1023McSetHCommDSSel ACCESS ADR(tyP1023McSetHComm.tyDSSel2);
			p_tyP1023McSetHCommDSSMEMA ACCESS ADR(tyP1023McSetHComm.tyDSSMEMA2);
			p_tyP1023McSetHCommDSHermes ACCESS ADR(tyP1023McSetHComm.tyDSHermes2);
			
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyDSSel2.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyDSSel.tyLyr.uiRtStat));
			
			
		END_IF
	
	END_IF
	
END_ACTION
