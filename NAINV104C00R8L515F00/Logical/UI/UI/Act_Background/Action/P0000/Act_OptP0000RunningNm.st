
ACTION Act_OptP0000RunningNm:
	fbSSaverTm(IN := TRUE , PT := T#2s);
	
	IF EDGEPOS(fbSSaverTm.Q = FALSE) THEN
		CASE uiSSaverCnt OF
			0:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT(p_tyMcParamCurr.sMcNm , '                                        ');
			1:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT('          ' , CONCAT(p_tyMcParamCurr.sMcNm , '                              '));
			2:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT('                    ' , CONCAT(p_tyMcParamCurr.sMcNm , '                    '));
			3:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT('                              ' , CONCAT(p_tyMcParamCurr.sMcNm , '          '));
			4:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT('                                        ' , p_tyMcParamCurr.sMcNm);
			5:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT('                              ' , CONCAT(p_tyMcParamCurr.sMcNm , '          '));
			6:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT('                    ' , CONCAT(p_tyMcParamCurr.sMcNm , '                    '));
			7:
				tyP0000SSaver.tySSaver.tyTxtMcNm.sValue	:= CONCAT('          ' , CONCAT(p_tyMcParamCurr.sMcNm , '                              '));
				
		END_CASE
		
	END_IF
	
	IF fbSSaverTm.Q = TRUE THEN
		fbSSaverTm(IN := FALSE);
		uiSSaverCnt	:= uiSSaverCnt + 1;
		IF uiSSaverCnt = 8 THEN
			uiSSaverCnt	:= 0;
		END_IF
	END_IF
	
END_ACTION
