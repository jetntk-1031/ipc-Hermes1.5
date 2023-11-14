(** 2021-08-01 **)
ACTION Act_Alarm3: //fbFileAppend1 Error

	//Error
	IF EDGEPOS(eStatus3 = Error) THEN
		
		tyAlmData3.sProgNm		:= p_sProgNm;
		tyAlmData3.udiCode		:= udiStatus3;
		tyAlmData3.eSeverity	:= AlmSeverityError;
		tyAlmData3.udiRunTime	:= tyAlmData3.udiRunTime + 1;
		tyAlmData3.bAlm			:= TRUE;
		tyAlmData3.udiModuleNum  := udiModuleNum;
		g_sRmtHermesProgNm		:= p_sProgNm;			
		//Get Error Message
		IF tyAlmData3.udiCode < 10000 OR tyAlmData3.udiCode > 10199 THEN
			tyAlmData3.sAlmMsg	:= 'Unknown';
			tyAlmData3.sRcyMsg	:= 'Unknown';
		ELSE
			tyAlmData3.sAlmMsg	:= a_tyAlmText[tyAlmData3.udiCode].sAlmText;
			tyAlmData3.sRcyMsg	:= a_tyAlmText[tyAlmData3.udiCode].sRcyText;
		END_IF
				
		sStatTxt	:= tyAlmData3.sAlmMsg;
		
	ELSIF bRstErr AND (tyAlmData3.udiCode <> 0) THEN
		
		tyAlmData3.udiCode		:= 0;
		tyAlmData3.eSeverity	:= AlmSeverityNA;
		tyAlmData3.sAlmMsg		:= '';
		tyAlmData3.sRcyMsg		:= '';
		tyAlmData3.bAlm			:= FALSE;
		sStatTxt	:= a_sStatText[eStat];
		
	END_IF
	
END_ACTION
