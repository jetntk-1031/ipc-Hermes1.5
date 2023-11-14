(** 2021-08-01 **)
ACTION Act_Alarm2: //IllegalMsg Check, ChkParamRcv, CmpParamRcv, SequenceTO, B.A Check, B.F Check, bStopTransport

	//Error
	IF EDGEPOS(eStatus2 = Error) THEN
		
		tyAlmData2.sProgNm		:= p_sProgNm;
		tyAlmData2.udiCode		:= udiStatus2;
		tyAlmData2.eSeverity	:= AlmSeverityError;
		tyAlmData2.udiRunTime	:= tyAlmData2.udiRunTime + 1;
		tyAlmData2.bAlm			:= TRUE;
		tyAlmData2.udiModuleNum := udiModuleNum;
		g_sDSHermesProgNm		:= p_sProgNm;
		
		//Get Error Message
		IF tyAlmData2.udiCode < 10000 OR tyAlmData2.udiCode > 10199 THEN
			tyAlmData2.sAlmMsg	:= 'Unknown';
			tyAlmData2.sRcyMsg	:= 'Unknown';
		ELSE
			tyAlmData2.sAlmMsg	:= a_tyAlmText[tyAlmData2.udiCode].sAlmText;
			tyAlmData2.sRcyMsg	:= a_tyAlmText[tyAlmData2.udiCode].sRcyText;
		END_IF
				
		sStatTxt	:= tyAlmData2.sAlmMsg;
		
	ELSIF bRstErr AND (tyAlmData2.udiCode <> 0) THEN
		
		tyAlmData2.udiCode		:= 0;
		tyAlmData2.eSeverity	:= AlmSeverityNA;
		tyAlmData2.sAlmMsg		:= '';
		tyAlmData2.sRcyMsg		:= '';
		tyAlmData2.bAlm			:= FALSE;
		sStatTxt	:= a_sStatText[eStat];
		
	END_IF
	
END_ACTION
