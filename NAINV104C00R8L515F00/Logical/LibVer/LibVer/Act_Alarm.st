(** 2022-12-20 **)
ACTION Act_Alarm: 
	
	//Error
	IF EDGEPOS(eStatus = Error) THEN
		
		tyAlmData.sProgNm		:= p_sProgNm;
		tyAlmData.udiCode		:= udiStatus;
		tyAlmData.udiRunTime	:= tyAlmData.udiRunTime + 1;
		
		tyAlmData.udiModuleNum  := udiModuleNum;
		g_sLibVerProgNm			:= p_sProgNm;
		
		IF tyAlmData.udiCode = 10012 THEN
			tyAlmData.eSeverity	:= AlmSeverityWarning;
			tyAlmData.bWarning		:= TRUE;
			//Get Error Message
			tyAlmData.sAlmMsg	:= a_tyAlmText[tyAlmData.udiCode].sAlmText;
			
			FOR di := 0 TO c_diLibNum DO
				IF a_bVerMismatch[di] = TRUE THEN
					tyAlmData.sAlmMsg	:= CONCAT(tyAlmData.sAlmMsg , ' (');
					tyAlmData.sAlmMsg	:= CONCAT(tyAlmData.sAlmMsg , a_tyInfoOut[di].sName);
					tyAlmData.sAlmMsg	:= CONCAT(tyAlmData.sAlmMsg , ')');
					g_sLiberWarnName    := a_tyInfoOut[di].sName;
					EXIT;
				END_IF
			END_FOR
			
			tyAlmData.sRcyMsg	:= a_tyAlmText[tyAlmData.udiCode].sRcyText;
			
		ELSE
			tyAlmData.eSeverity	:= AlmSeverityError;
			tyAlmData.bAlm			:= TRUE;
			//Get Error Message
			IF tyAlmData.udiCode < 10000 OR tyAlmData.udiCode > 10099 THEN
				tyAlmData.sAlmMsg	:= 'Unknown';
				tyAlmData.sRcyMsg	:= 'Unknown';
			ELSE
				tyAlmData.sAlmMsg	:= a_tyAlmText[tyAlmData.udiCode].sAlmText;
				tyAlmData.sRcyMsg	:= a_tyAlmText[tyAlmData.udiCode].sRcyText;
			END_IF
		
			sStatTxt	:= tyAlmData.sAlmMsg;
		
		END_IF
		
	ELSIF bRstErr AND (tyAlmData.udiCode <> 0) THEN
		
		tyAlmData.udiCode	:= 0;
		tyAlmData.eSeverity	:= AlmSeverityNA;
		tyAlmData.sAlmMsg	:= '';
		tyAlmData.sRcyMsg	:= '';
		tyAlmData.bAlm			:= FALSE;
		tyAlmData.bWarning		:= FALSE;
		sStatTxt	:= a_sStatText[eStat];
		
	END_IF
	
END_ACTION
