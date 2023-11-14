
ACTION Act_OptP1023USSel:
	
	IF tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue		:= TRUE;
		tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk		:= TRUE;
		
		tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue	:= FALSE;
		tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk		:= FALSE;
		
	ELSIF tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue	:= TRUE;
		tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk		:= TRUE;
		
		tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue	:= FALSE;
		tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk	:= FALSE;
		
	ELSIF tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtCompl = TRUE THEN
		tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue		:= FALSE;
		tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtLk		:= FALSE;
		
		tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue	:= TRUE;
		tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtLk		:= TRUE;
	
	ELSIF tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtCompl = TRUE THEN //Added
		tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtCompl	:= FALSE;
		
		tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue	:= FALSE;
		tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtLk		:= FALSE;
		
		tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue	:= TRUE;
		tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtLk	:= TRUE;
		
		
	END_IF
	
	//Upstream Selection
	
	IF tyP1023McSetHComm.tyGen.tyDrpDnUSSel.bRtCompl THEN
		
		tyP1023McSetHComm.tyGen.tyDrpDnUSSel.bRtCompl:= FALSE;
		
		IF tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx = 0 THEN
			
			p_tyP1023McSetHCommUSSel ACCESS ADR(tyP1023McSetHComm.tyUSSel);
			p_tyP1023McSetHCommUSSMEMA ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA);
			p_tyP1023McSetHCommUSHermes ACCESS ADR(tyP1023McSetHComm.tyUSHermes);
			
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
		
		ELSIF tyP1023McSetHComm.tyGen.tyDrpDnUSSel.usiValueIdx = 1 THEN
			
			p_tyP1023McSetHCommUSSel ACCESS ADR(tyP1023McSetHComm.tyUSSel2);
			p_tyP1023McSetHCommUSSMEMA ACCESS ADR(tyP1023McSetHComm.tyUSSMEMA2);
			p_tyP1023McSetHCommUSHermes ACCESS ADR(tyP1023McSetHComm.tyUSHermes2);
			
			fUIInRtStatOff(ADR(tyP1023McSetHComm.tyUSSel2.tyLyr.uiRtStat));
			fUIInRtStatHide(ADR(tyP1023McSetHComm.tyUSSel.tyLyr.uiRtStat));
			
			
		END_IF
	
	END_IF
	
END_ACTION
