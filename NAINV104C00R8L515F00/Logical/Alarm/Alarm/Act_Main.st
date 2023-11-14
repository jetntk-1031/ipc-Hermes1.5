(** 2019-02-23 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		AlarmActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbDirCreate1(bEn := FALSE);
				fbDirCreate2(bEn := FALSE);
				fbFileOldDel1(bEn := FALSE);
				fbFileRead1(bEn := FALSE);
				fbFileAppend1(bEn := FALSE);
				fbFileWrite1(bEn := FALSE);
				usiStep	:= 0;
				
				bHistoryFileNotFound	:= FALSE;
				udiWriteLogCntr			:= 1;
		
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		AlarmActCreateDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:			
						fbDirCreate1(bEn := TRUE);
						IF fbDirCreate1.udiStatus = 0 THEN
							usiStep	:= 1;
						ELSIF fbDirCreate1.udiStatus < 65534 THEN
							eStatus		:= Error;
							
							IF fbDirCreate1.udiStatus = 1908 THEN
								udiStatus	:= 10000;	//Create User Directory Error
							ELSE
								udiStatus	:= fbDirCreate1.udiStatus;
							END_IF
						END_IF
						
					1:			
						fbDirCreate2(bEn := TRUE);
						IF fbDirCreate2.udiStatus = 0 THEN
							eStatus	:= Done;
						ELSIF fbDirCreate2.udiStatus < 65534 THEN
							eStatus		:= Error;
							
							IF fbDirCreate2.udiStatus = 1908 THEN
								udiStatus	:= 10001;	//Create Alarm Directory Error
							ELSE
								udiStatus	:= fbDirCreate2.udiStatus;
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
		AlarmActDeleteOldLog:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileOldDel1.dtDTNow			:= p_dtCurrDT;
				fbFileOldDel1.udiFileKeepDay	:= p_udiFileKeepDay;
				fbFileOldDel1(bEn := TRUE);
				IF fbFileOldDel1.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileOldDel1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileOldDel1.udiStatus = 1910 THEN
						udiStatus	:= 10002;	//Get Directory Info Error While Deleting Old Log
					ELSIF fbFileOldDel1.udiStatus = 1911 THEN
						udiStatus	:= 10003;	//Directory Read Error While Deleting Old Log
					ELSIF fbFileOldDel1.udiStatus = 1912 THEN
						udiStatus	:= 10004;	//File Delete Error While Deleting Old Log
					ELSE
						udiStatus	:= fbFileOldDel1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		
		AlarmActReadHistory:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileRead1(bEn := TRUE);
				IF fbFileRead1.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileRead1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileRead1.udiStatus = 1900 THEN
						udiStatus	:= 10005;	//File Open Error While Reading Alarm History
					ELSIF fbFileRead1.udiStatus = 1902 THEN
						udiStatus	:= 10006;	//File Read Error While Reading Alarm History
					ELSIF fbFileRead1.udiStatus = 1904 THEN
						udiStatus	:= 10007;	//File Close Error While Reading Alarm History
					ELSIF fbFileRead1.udiStatus = 1915 THEN
						eStatus					:= Done;
						bHistoryFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		
		AlarmActWriteHistory:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileWrite1(bEn := TRUE);
				IF fbFileWrite1.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileWrite1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileWrite1.udiStatus = 1900 THEN
						udiStatus	:= 10008;	//File Open Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1901 THEN
						udiStatus	:= 10009;	//File Create Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1903 THEN
						udiStatus	:= 10010;	//File Write Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1904 THEN
						udiStatus	:= 10011;	//File Close Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1914 THEN
						udiStatus	:= 10012;	//Directory Does Not Exist While Writing Alarm History
					ELSE
						udiStatus	:= fbFileWrite1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		
		AlarmActAppendLog:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				dtCurrDTTemp			:= p_dtCurrDT;
				fbFileAppend1.sFile		:= DT_TO_STRING(dtCurrDTTemp);
				fbFileAppend1.sFile		:= MID(fbFileAppend1.sFile , 10 , 4);
				fbFileAppend1.sFile		:= CONCAT('ALARM_' , fbFileAppend1.sFile);
				fbFileAppend1.sFile		:= CONCAT(fbFileAppend1.sFile , '.dat');
				
				fbFileAppend1.p_Src		:= ADR(a_sLogList[udiWriteLogCntr]);
				fbFileAppend1.udiLen	:= LEN(a_sLogList[udiWriteLogCntr]);
				
				fbFileAppend1(bEn := TRUE);
				IF fbFileAppend1.udiStatus = 0 THEN
					IF udiWriteLogCntr >= udiLogCntr THEN
						eStatus	:= Done;
					ELSE
						udiWriteLogCntr	:= udiWriteLogCntr + 1;
						fbFileAppend1(bEn := FALSE);
					END_IF
					
				ELSIF fbFileAppend1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileAppend1.udiStatus = 1900 THEN
						udiStatus	:= 10013;	//File Open Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1901 THEN
						udiStatus	:= 10014;	//File Create Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1913 THEN
						udiStatus	:= 10015;	//Get File Info Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1903 THEN
						udiStatus	:= 10016;	//File Write Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1904 THEN
						udiStatus	:= 10017;	//File Close Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1914 THEN
						udiStatus	:= 10018;	//Directory Does Not Exist While Writing Alarm Log
					ELSE
						udiStatus	:= fbFileAppend1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		
		AlarmActAppendLogWriteHistory:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				dtCurrDTTemp			:= p_dtCurrDT;
				fbFileAppend1.sFile		:= DT_TO_STRING(dtCurrDTTemp);
				fbFileAppend1.sFile		:= MID(fbFileAppend1.sFile , 10 , 4);
				fbFileAppend1.sFile		:= CONCAT('ALARM_' , fbFileAppend1.sFile);
				fbFileAppend1.sFile		:= CONCAT(fbFileAppend1.sFile , '.dat');
				
				fbFileAppend1.p_Src		:= ADR(a_sLogList[udiWriteLogCntr]);
				fbFileAppend1.udiLen	:= LEN(a_sLogList[udiWriteLogCntr]);
				
				fbFileAppend1(bEn := TRUE);
				fbFileWrite1(bEn := TRUE);
				
				IF (fbFileAppend1.udiStatus = 0) AND (udiWriteLogCntr >= udiLogCntr) AND fbFileWrite1.udiStatus = 0 THEN
					eStatus	:= Done;
					
				ELSIF fbFileAppend1.udiStatus = 0 AND udiWriteLogCntr < udiLogCntr THEN
					udiWriteLogCntr	:= udiWriteLogCntr + 1;
					fbFileAppend1(bEn := FALSE);
					
				ELSIF fbFileWrite1.udiStatus > 0 AND fbFileWrite1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileWrite1.udiStatus = 1900 THEN
						udiStatus	:= 10019;	//File Open Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1901 THEN
						udiStatus	:= 10020;	//File Create Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1903 THEN
						udiStatus	:= 10021;	//File Write Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1904 THEN
						udiStatus	:= 10022;	//File Close Error While Writing Alarm History
					ELSIF fbFileWrite1.udiStatus = 1914 THEN
						udiStatus	:= 10023;	//Directory Does Not Exist While Writing Alarm History
					ELSE
						udiStatus	:= fbFileWrite1.udiStatus;
					END_IF
				
				ELSIF fbFileAppend1.udiStatus > 0 AND fbFileAppend1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileAppend1.udiStatus = 1900 THEN
						udiStatus	:= 10024;	//File Open Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1901 THEN
						udiStatus	:= 10025;	//File Create Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1913 THEN
						udiStatus	:= 10026;	//Get File Info Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1903 THEN
						udiStatus	:= 10027;	//File Write Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1904 THEN
						udiStatus	:= 10028;	//File Close Error While Writing Alarm Log
					ELSIF fbFileAppend1.udiStatus = 1914 THEN
						udiStatus	:= 10029;	//Directory Does Not Exist While Writing Alarm Log
					ELSE
						udiStatus	:= fbFileAppend1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		
		AlarmActResetHistory:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				memset(ADR(a_tyHistoryList) , 0 , SIZEOF(a_tyHistoryList));
				
				fbFileWrite1(bEn := TRUE);
				IF fbFileWrite1.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileWrite1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileWrite1.udiStatus = 1900 THEN
						udiStatus	:= 10030;	//File Open Error While Resetting Alarm History
					ELSIF fbFileWrite1.udiStatus = 1901 THEN
						udiStatus	:= 10031;	//File Create Error While Resetting Alarm History
					ELSIF fbFileWrite1.udiStatus = 1903 THEN
						udiStatus	:= 10032;	//File Write Error While Resetting Alarm History
					ELSIF fbFileWrite1.udiStatus = 1904 THEN
						udiStatus	:= 10033;	//File Close Error While Resetting Alarm History
					ELSIF fbFileWrite1.udiStatus = 1914 THEN
						udiStatus	:= 10034;	//Directory Does Not Exist While Resetting Alarm History
					ELSE
						udiStatus	:= fbFileWrite1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		
		AlarmActBGStartLog:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bAlarmLog	:= TRUE;
				eStatus		:= Done;
				
			END_IF
		
		AlarmActBGStopLog:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bAlarmLog	:= FALSE;
				eStatus		:= Done;
				
			END_IF
		
	END_CASE
	
END_ACTION
