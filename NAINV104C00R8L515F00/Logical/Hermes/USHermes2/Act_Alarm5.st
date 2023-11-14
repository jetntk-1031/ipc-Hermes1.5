(** 2022-12-20 **)
ACTION Act_Alarm5: //Not Connected Warning

	//Warning
	IF ((bConnected = FALSE) AND (p_eLinkMcParamUSCommMod= McSetCommModHermes)) THEN
		
		tyAlmData5.sProgNm		:= p_sProgNm;
		tyAlmData5.udiCode		:= udiStatus5;
		tyAlmData5.eSeverity	:= AlmSeverityWarning;
		tyAlmData5.udiRunTime	:= tyAlmData5.udiRunTime + 1;
		tyAlmData5.bWarning		:= TRUE;
		tyAlmData5.udiModuleNum := udiModuleNum;
		g_sUSHermesProgNm		:= p_sProgNm;


		//Get Warning Message
		IF tyAlmData5.udiCode < 10000 OR tyAlmData5.udiCode > 10199 THEN
			tyAlmData5.sAlmMsg	:= 'Unknown';
			tyAlmData5.sRcyMsg	:= 'Unknown';
		ELSE
			tyAlmData5.sAlmMsg	:= a_tyAlmText[tyAlmData5.udiCode].sAlmText;
			tyAlmData5.sRcyMsg	:= a_tyAlmText[tyAlmData5.udiCode].sRcyText;
		END_IF
				
		sStatTxt	:= tyAlmData5.sAlmMsg;
		
	ELSIF (bConnected AND (tyAlmData5.udiCode <> 0)) OR (p_eLinkMcParamUSCommMod = McSetCommModSMEMA)  THEN
		
		tyAlmData5.udiCode			:= 0;
		tyAlmData5.eSeverity		:= AlmSeverityNA;
		tyAlmData5.sAlmMsg			:= '';
		tyAlmData5.sRcyMsg			:= '';
		tyAlmData5.bWarning		   := FALSE;	
	
		sStatTxt	:= a_sStatText[eStat];
		
	END_IF
	
END_ACTION
