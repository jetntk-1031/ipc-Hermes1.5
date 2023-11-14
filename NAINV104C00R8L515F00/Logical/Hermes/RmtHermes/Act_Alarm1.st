(** 2021-08-01 **)
ACTION Act_Alarm1: 

	//Error
	IF EDGEPOS(eStatus1 = Error) THEN
		
		tyAlmData1.sProgNm		:= p_sProgNm;
		tyAlmData1.udiCode		:= udiStatus1;
		tyAlmData1.eSeverity	:= AlmSeverityError;
		tyAlmData1.udiRunTime	:= tyAlmData1.udiRunTime + 1;
		tyAlmData1.bAlm			:= TRUE;
		tyAlmData1.udiModuleNum  := udiModuleNum;
		g_sRmtHermesProgNm		:= p_sProgNm;			
		//Get Error Message
		IF tyAlmData1.udiCode < 10000 OR tyAlmData1.udiCode > 10199 THEN
			tyAlmData1.sAlmMsg	:= 'Unknown';
			tyAlmData1.sRcyMsg	:= 'Unknown';
		ELSE
			tyAlmData1.sAlmMsg	:= a_tyAlmText[tyAlmData1.udiCode].sAlmText;
			tyAlmData1.sRcyMsg	:= a_tyAlmText[tyAlmData1.udiCode].sRcyText;
		END_IF
				
		sStatTxt	:= tyAlmData1.sAlmMsg;
		
	ELSIF bRstErr AND (tyAlmData1.udiCode <> 0) THEN
		
		tyAlmData1.udiCode		:= 0;
		tyAlmData1.eSeverity	:= AlmSeverityNA;
		tyAlmData1.sAlmMsg		:= '';
		tyAlmData1.sRcyMsg		:= '';
		tyAlmData1.bAlm			:= FALSE;
		sStatTxt	:= a_sStatText[eStat];
		
	END_IF
	
END_ACTION
