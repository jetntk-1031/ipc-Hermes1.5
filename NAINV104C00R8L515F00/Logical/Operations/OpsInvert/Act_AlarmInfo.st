(** 2019-03-25 **)
ACTION Act_AlarmInfo: 
	
	//Info
	tyAlmData1.sProgNm		:= p_sProgNm;
	tyAlmData1.udiCode		:= udiStatus1;
	tyAlmData1.eSeverity	:= AlmSeverityInfo;
	tyAlmData1.udiRunTime	:= tyAlmData1.udiRunTime + 1;
	tyAlmData.bAlm			:= TRUE;
	tyAlmData.udiModuleNum  := udiModuleNum;
	g_sOpsInvertProgNm		:= p_sProgNm;
		
	//Get Info Message
	IF tyAlmData1.udiCode < 10000 OR tyAlmData1.udiCode > 10099 THEN
		tyAlmData1.sAlmMsg	:= 'Unknown';
		tyAlmData1.sRcyMsg	:= 'Unknown';
	ELSE
		tyAlmData1.sAlmMsg	:= a_tyAlmText[tyAlmData1.udiCode].sAlmText;
		tyAlmData1.sRcyMsg	:= a_tyAlmText[tyAlmData1.udiCode].sRcyText;
	END_IF
		
END_ACTION
