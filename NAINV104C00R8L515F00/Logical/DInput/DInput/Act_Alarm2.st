(** 2019-03-25 **)
ACTION Act_Alarm2: 
	
	//Error
	IF EDGEPOS(eStatus2 = Error) THEN
		
		tyAlmData2.sProgNm		:= p_sProgNm;
		tyAlmData2.udiCode		:= udiStatus2;
		tyAlmData2.eSeverity	:= AlmSeverityError;
		tyAlmData2.udiRunTime	:= tyAlmData2.udiRunTime + 1;
		tyAlmData2.bAlm			:= TRUE;
		tyAlmData2.udiModuleNum := udiModuleNum;
		g_sDInputProgNm			:= p_sProgNm;	
		
		//Get Error Message
		IF tyAlmData2.udiCode < 10000 OR tyAlmData2.udiCode > 10099 THEN
			tyAlmData2.sAlmMsg	:= 'Unknown';
			tyAlmData2.sRcyMsg	:= 'Unknown';
		ELSE
			tyAlmData2.sAlmMsg	:= a_tyAlmText[tyAlmData2.udiCode].sAlmText;
			tyAlmData2.sRcyMsg	:= a_tyAlmText[tyAlmData2.udiCode].sRcyText;
		END_IF
		
	ELSIF bRstErr AND (tyAlmData2.udiCode <> 0) THEN
		
		tyAlmData2.udiCode		:= 0;
		tyAlmData2.eSeverity	:= AlmSeverityNA;
		tyAlmData2.sAlmMsg		:= '';
		tyAlmData2.sRcyMsg		:= '';
		tyAlmData2.bAlm			:= FALSE;
	END_IF
	
END_ACTION
