(** 2021-08-01 **)
ACTION Act_Background_Log:
	
	IF eStatus3 <> Error THEN
			
		IF udiWriteLogCntr <> udiLogCntr THEN
			
			CASE iWriteLogStep OF
				
				0:
					dtCurrDTTemp			:= p_dtCurrDT;
					fbFileAppend1.sFile		:= DT_TO_STRING(dtCurrDTTemp);
					fbFileAppend1.sFile		:= MID(fbFileAppend1.sFile , 10 , 4);
					fbFileAppend1.sFile		:= CONCAT('_' , fbFileAppend1.sFile);
					fbFileAppend1.sFile		:= CONCAT(p_sProgNm , fbFileAppend1.sFile);
					fbFileAppend1.sFile		:= CONCAT(fbFileAppend1.sFile , '.dat');
							
					fbFileAppend1.p_Src		:= ADR(a_sLogList[udiWriteLogCntr]);
					fbFileAppend1.udiLen	:= LEN(a_sLogList[udiWriteLogCntr]);
					
					iWriteLogStep	:= 1;
					
				1:	
					fbFileAppend1(bEn := TRUE);
					IF fbFileAppend1.udiStatus = 0 THEN
						fbFileAppend1(bEn := FALSE);
						
						udiWriteLogCntr	:= udiWriteLogCntr + 1;
						IF udiWriteLogCntr = 11 THEN
							udiWriteLogCntr	:= 1;
						END_IF
						
						iWriteLogStep	:= 0;
						
					ELSIF fbFileAppend1.udiStatus < 65534 THEN
						eStatus3	:= Error;
								
						IF fbFileAppend1.udiStatus = 1900 THEN
							udiStatus3	:= 10148;	//File Open Error While Writing Log
						ELSIF fbFileAppend1.udiStatus = 1901 THEN
							udiStatus3	:= 10149;	//File Create Error While Writing Log
						ELSIF fbFileAppend1.udiStatus = 1913 THEN
							udiStatus3	:= 10150;	//Get File Info Error While Writing Log
						ELSIF fbFileAppend1.udiStatus = 1903 THEN
							udiStatus3	:= 10151;	//File Write Error While Writing Log
						ELSIF fbFileAppend1.udiStatus = 1904 THEN
							udiStatus3	:= 10152;	//File Close Error While Writing Log
						ELSIF fbFileAppend1.udiStatus = 1914 THEN
							udiStatus3	:= 10153;	//Directory Does Not Exist While Writing Log
						ELSE
							udiStatus3	:= fbFileAppend1.udiStatus;
						END_IF
						
						iWriteLogStep	:= 0;
					END_IF
					
			END_CASE
			
		END_IF
		
	END_IF
			
END_ACTION
