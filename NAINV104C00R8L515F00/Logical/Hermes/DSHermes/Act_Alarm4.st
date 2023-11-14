(** 2021-08-01 **)
ACTION Act_Alarm4: //Not Connected Warning

	//Warning
	IF ((bConnected = FALSE) AND (p_eLinkMcParamDSCommMod= McSetCommModHermes)) THEN
		
		tyAlmData4.sProgNm		:= p_sProgNm;
		tyAlmData4.udiCode		:= udiStatus4;
		tyAlmData4.eSeverity	:= AlmSeverityWarning;
		tyAlmData4.udiRunTime	:= tyAlmData4.udiRunTime + 1;
		tyAlmData4.bWarning			:= TRUE;
		tyAlmData4.udiModuleNum := udiModuleNum;
		g_sDSHermesProgNm		:= p_sProgNm;
		
		//Get Warning Message
		IF tyAlmData4.udiCode < 10000 OR tyAlmData4.udiCode > 10199 THEN
			tyAlmData4.sAlmMsg	:= 'Unknown';
			tyAlmData4.sRcyMsg	:= 'Unknown';
		ELSE
			tyAlmData4.sAlmMsg	:= a_tyAlmText[tyAlmData4.udiCode].sAlmText;
			tyAlmData4.sRcyMsg	:= a_tyAlmText[tyAlmData4.udiCode].sRcyText;
		END_IF
				
		sStatTxt	:= tyAlmData4.sAlmMsg;
		
	ELSIF (bConnected AND (tyAlmData4.udiCode <> 0)) OR (p_eLinkMcParamDSCommMod= McSetCommModSMEMA) THEN
		
		tyAlmData4.udiCode		:= 0;
		tyAlmData4.eSeverity	:= AlmSeverityNA;
		tyAlmData4.sAlmMsg		:= '';
		tyAlmData4.sRcyMsg		:= '';
		//tyUIAlmData.bWarning[3363] := FALSE;		// (05042023)Debug Alarm Test
		tyAlmData4.bWarning		:= FALSE;
		sStatTxt	:= a_sStatText[eStat];
		
	END_IF
	
END_ACTION
