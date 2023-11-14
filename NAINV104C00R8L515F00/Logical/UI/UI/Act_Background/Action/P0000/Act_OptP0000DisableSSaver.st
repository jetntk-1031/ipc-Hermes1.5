
ACTION Act_OptP0000DisableSSaver:
	
	IF p_tyNtParamCurr.bSSaverPrep = FALSE OR p_tyMcParamCurr.bSSaverEn = FALSE THEN
		
		IF tyProperty.tyVisu.uiSSaverRemainTm < 5 THEN
			tyProperty.tyVisu.uiSSaverTm	:= 9;
		ELSE
			tyProperty.tyVisu.uiSSaverTm	:= 10;
		END_IF
		
	END_IF
	
	IF EDGEPOS(p_tyNtParamCurr.bSSaverPrep AND p_tyMcParamCurr.bSSaverEn) THEN
		tyProperty.tyVisu.uiSSaverTm	:= p_tyMcParamCurr.uiSSaverTmInSec;
	END_IF
	
END_ACTION