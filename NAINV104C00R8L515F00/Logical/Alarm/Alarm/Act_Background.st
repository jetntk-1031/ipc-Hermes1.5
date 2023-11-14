(** 2022-12-20 **)
ACTION Act_Background:
	
	pa_tyAlmData[1]	:= tyAlmData;

	IF (bRstErr = TRUE) THEN	
		
		bErr		:= FALSE;
		bWarning	:= FALSE;
			
		//Reset Warning
		memset(ADR(a_tyWarningCurrList) , 0 , SIZEOF(a_tyWarningCurrList));
		udiWarningMax	:=1;
			
		memset(ADR(a_tyCurrList) , 0 , SIZEOF(a_tyCurrList));
		memset(ADR(a_sRecoveryList) , 0 , SIZEOF(a_sRecoveryList));
		memset(ADR(a_udiRecoveryList),0,SIZEOF(a_udiRecoveryList));

		
		udiAlmCntr	:= 0;
		
		bAlmUpdt	:= FALSE;
		
	END_IF
		
	IF (bRstWarning = TRUE) THEN
		
		IF bErr =FALSE AND bWarning= TRUE THEN
			//Reset Warning
			memset(ADR(a_tyWarningCurrList) , 0 , SIZEOF(a_tyWarningCurrList));
			udiWarningMax	:=1;
			
			memset(ADR(a_tyCurrList) , 0 , SIZEOF(a_tyCurrList));
			memset(ADR(a_sRecoveryList) , 0 , SIZEOF(a_sRecoveryList));
			memset(ADR(a_udiRecoveryList),0,SIZEOF(a_udiRecoveryList));
			udiAlmCntr	:= 0;
			bWarning := FALSE;
		END_IF
		
		bAlmUpdt	:= FALSE;
		
	END_IF
	
	
	IF bAlarmLog = TRUE  AND p_bStartupUISettingsLoadDone THEN
		
		IF (bAlmUpdt = FALSE) OR (eStatus = Error) THEN
			
			
			bInfo		:= FALSE;
			bInfoLF		:= FALSE;
			sInfoMsg	:= '';
			iInfoCntr	:= 0;
		
			FOR udi := 1 TO p_udiCurrMax DO
			
				IF (pa_tyAlmData[udi].udiRunTime <> a_udiRunTimeOld[udi]) AND pa_tyAlmData[udi].udiCode <> 0 
					AND ((pa_tyAlmData[udi].eSeverity = AlmSeverityError ) ) THEN
					
					
					a_udiRunTimeOld[udi]	:= pa_tyAlmData[udi].udiRunTime;
					
					bAlmUpdt	:= TRUE;
					
					udiAlmCntr	:= udiAlmCntr + 1;
					IF udiAlmCntr > p_udiCurrMax THEN
						udiAlmCntr	:= p_udiCurrMax;
					END_IF
					
					udiLogCntr	:= udiLogCntr + 1;
					IF udiLogCntr > p_udiCurrMax THEN
						udiLogCntr	:= p_udiCurrMax;
					END_IF
					
					fLogDTConvert(ADR(sDT) , p_dtCurrDT);
					udiErrorCode := (pa_tyAlmData[udi].udiCode - 10000) + (pa_tyAlmData[udi].udiModuleNum);//*For HMI Text Group*
					
					//In this case, Program Name/Data Time/
					//Current List
					a_tyCurrList[udiAlmCntr].eSeverity		:= pa_tyAlmData[udi].eSeverity;
					a_tyCurrList[udiAlmCntr].sProgNm		:= pa_tyAlmData[udi].sProgNm;
					a_tyCurrList[udiAlmCntr].sDT			:= sDT;

					//To HMI Text Group 
					a_tyCurrList[udiAlmCntr].udiErrorCode	:= udiErrorCode;
					a_tyCurrList[udiAlmCntr].bAlm			:= pa_tyAlmData[udi].bAlm;
					
					//Recovery List
					a_sRecoveryList[udiAlmCntr]	 			:= pa_tyAlmData[udi].sRcyMsg;
					a_udiRecoveryList[udiAlmCntr]			:= udiErrorCode; //*For HMI Text Group **It will be the same procedure with the above**
				
					//History List
					memmove(ADR(a_tyHistoryList[2]) , ADR(a_tyHistoryList[1]) , SIZEOF(a_tyHistoryList[1]) * (p_udiHistoryMax - 1));
				
					a_tyHistoryList[1].sProgNm			:= pa_tyAlmData[udi].sProgNm;
					a_tyHistoryList[1].sDT				:= sDT;
					a_tyHistoryList[1].udiModErrCode	:= pa_tyAlmData[udi].udiCode;
					a_tyHistoryList[1].udiErrorCode		:= udiErrorCode;

								
					//Log List
					fLogAlmDispMsg(ADR(sAlmMsg) , p_dtCurrDT , pa_tyAlmData[udi].sProgNm , pa_tyAlmData[udi].udiCode , pa_tyAlmData[udi].sAlmMsg); // *For Log files*
					a_sLogList[udiLogCntr]	:= sAlmMsg;
					a_sLogList[udiLogCntr]	:= CONCAT(a_sLogList[udiLogCntr] , '$r$n');
					
					//Severity
					IF pa_tyAlmData[udi].eSeverity = AlmSeverityError THEN
						bErr		:= TRUE;
					END_IF
				
			
					// Alarm warning	
				ELSIF (( pa_tyAlmData[udi].eSeverity = AlmSeverityWarning) AND  (pa_tyAlmData[udi].udiCode <> 0 )) THEN
			
				
					//Used to compare
					memset(ADR(sWarningCompareMsg) , 0 , SIZEOF(sWarningCompareMsg));
				
					sWarningCompareMsg	:= CONCAT(sWarningCompareMsg , pa_tyAlmData[udi].sProgNm);
					sWarningCompareMsg	:= CONCAT(sWarningCompareMsg , ' | ');
					sWarningID := UDINT_TO_STRING(pa_tyAlmData[udi].udiCode);	
					sWarningCompareMsg	:= CONCAT(sWarningCompareMsg , sWarningID);
					sWarningCompareMsg	:= CONCAT(sWarningCompareMsg , ' | ');
					sWarningCompareMsg	:= CONCAT(sWarningCompareMsg , pa_tyAlmData[udi].sAlmMsg);
				
					//Checking whether it is recorded in the alarm list
					FOR udi1 := 0 TO  udiWarningMax DO 
						WarningListOccur := (memcmp(ADR(sWarningCompareMsg),ADR(a_tyWarningCurrList[udi1].sMsg),SIZEOF(sWarningCompareMsg) )= 0);
					
						IF WarningListOccur THEN
							EXIT;
						END_IF
		
					END_FOR	
				
					//IF warning message is no recorded in alarm list 
					IF 	WarningListOccur =FALSE THEN 
						
						bAlmUpdt	:= TRUE;	
						udiWarningMax := udiWarningMax +1;
						
						udiAlmCntr	:= udiAlmCntr + 1;
						
						IF udiAlmCntr > p_udiCurrMax THEN
							udiAlmCntr	:= p_udiCurrMax;
						END_IF
					
						udiRecorded[udiWarningMax-1]:= udi;
							
						udiLogCntr	:= udiLogCntr + 1;
						
						IF udiLogCntr > p_udiCurrMax THEN
							udiLogCntr	:= p_udiCurrMax;
						END_IF
					
						//Warning List
						a_tyWarningCurrList[udiWarningMax-1].sMsg		:= sWarningCompareMsg;
					
						
						fLogDTConvert(ADR(sDT) , p_dtCurrDT);
						udiErrorCode := (pa_tyAlmData[udi].udiCode - 10000) + pa_tyAlmData[udi].udiModuleNum; //*For HMI Text Group*
					
						//Current List
						a_tyCurrList[udiAlmCntr].eSeverity		:= pa_tyAlmData[udi].eSeverity;
						a_tyCurrList[udiAlmCntr].sProgNm		:= pa_tyAlmData[udi].sProgNm;
						a_tyCurrList[udiAlmCntr].sDT			:= sDT;
						a_tyCurrList[udiAlmCntr].udiModErrCode	:= pa_tyAlmData[udi].udiCode;
					
						//To HMI Text Group 
						a_tyCurrList[udiAlmCntr].udiErrorCode	:= udiErrorCode;
						a_tyCurrList[udiAlmCntr].bWarning		:= pa_tyAlmData[udi].bWarning;
							
						//Recovery List
						a_sRecoveryList[udiAlmCntr]	 	:= pa_tyAlmData[udi].sRcyMsg;
						a_udiRecoveryList[udiAlmCntr]	:= udiErrorCode;
						
						//History List
						memmove(ADR(a_tyHistoryList[2]) , ADR(a_tyHistoryList[1]) , SIZEOF(a_tyHistoryList[1]) * (p_udiHistoryMax - 1));
				
						a_tyHistoryList[1].sProgNm			:= pa_tyAlmData[udi].sProgNm;
						a_tyHistoryList[1].sDT				:= sDT;
						a_tyHistoryList[1].udiModErrCode	:= pa_tyAlmData[udi].udiCode;
						a_tyHistoryList[1].udiErrorCode		:= udiErrorCode;
							
						//Log List
						//Info Message
						fLogAlmDispMsg(ADR(sWarningMsg) , p_dtCurrDT , pa_tyAlmData[udi].sProgNm , pa_tyAlmData[udi].udiCode , pa_tyAlmData[udi].sAlmMsg);
						
						a_sLogList[udiLogCntr]	:= sWarningMsg;
						a_sLogList[udiLogCntr]	:= CONCAT(a_sLogList[udiLogCntr] , '$r$n');
					
						bWarning	:= TRUE;

					END_IF
			
				
					// Show Info Message
				ELSIF  ((pa_tyAlmData[udi].udiCode <> 0) AND (pa_tyAlmData[udi].eSeverity = AlmSeverityInfo)) THEN
										
					iInfoCntr	:= iInfoCntr + 1;
										
					IF iInfoCntr = 1 THEN
						sInfoMsg	:= pa_tyAlmData[udi].sAlmMsg;
						
						IF pa_tyAlmData[udi].sProgNm = 'Follower' AND pa_tyAlmData[udi].sAlmMsg <>'' THEN
						
							bInfoLF	:= TRUE;
							bInfo	:= TRUE;
							
						ELSE
							bInfoLF	:= FALSE;
							bInfo	:= TRUE;
						END_IF
							
		
					ELSIF iInfoCntr = 2 THEN
						sInfoMsg	:= CONCAT(sInfoMsg , '$r$n$r$n');
						sInfoMsg	:= CONCAT(sInfoMsg , pa_tyAlmData[udi].sAlmMsg);
						
					END_IF	
				
				END_IF
				
			END_FOR
			
		ELSE
			
			p_eAct	:= AlarmActAppendLogWriteHistory;
			IF eStatus = Done AND eStat = AlarmActAppendLogWriteHistory THEN
				p_eAct		:= AlarmActIdle;
				bAlmUpdt	:= FALSE;
				udiLogCntr	:= 0;
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION