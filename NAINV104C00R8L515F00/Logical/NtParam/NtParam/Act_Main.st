(** 2020-07-27 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		NtParamActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbDirCreate1(bEn := FALSE);
				fbDirCreate2(bEn := FALSE);
				fbDirCreate3(bEn := FALSE);
				fbFileRead1(bEn := FALSE);
				fbFileWrite1(bEn := FALSE);
				fbMpNtParamRegPar(Enable := FALSE);
				fbMpNtParamXml(Enable := FALSE);
				usiStep	:= 0;
				
				bFileNotFound	:= FALSE;
				
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		NtParamActCreateDir:
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
							usiStep	:= 2;
						ELSIF fbDirCreate2.udiStatus < 65534 THEN
							eStatus		:= Error;
							
							IF fbDirCreate2.udiStatus = 1908 THEN
								udiStatus	:= 10001;	//Create Nutek Parameter Directory Error
							ELSE
								udiStatus	:= fbDirCreate2.udiStatus;
							END_IF
						END_IF
					
					2:
						fbDirCreate3(bEn := TRUE);
						IF fbDirCreate3.udiStatus = 0 THEN
							eStatus	:= Done;
						ELSIF fbDirCreate3.udiStatus < 65534 THEN
							eStatus		:= Error;
							
							IF fbDirCreate3.udiStatus = 1908 THEN
								udiStatus	:= 10014;	//Create Nutek Parameter xml Directory Error
							ELSE
								udiStatus	:= fbDirCreate3.udiStatus;
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
		NtParamActWrite:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileWrite1(bEn := TRUE);
				IF fbFileWrite1.udiStatus = 0 THEN
					eStatus			:= Done;
				ELSIF fbFileWrite1.udiStatus < 65534 THEN
					eStatus			:= Error;
					
					IF fbFileWrite1.udiStatus = 1900 THEN
						udiStatus	:= 10002;	//File Open Error While Writing
					ELSIF fbFileWrite1.udiStatus = 1901 THEN
						udiStatus	:= 10003;	//File Create Error While Writing
					ELSIF fbFileWrite1.udiStatus = 1903 THEN
						udiStatus	:= 10004;	//File Write Error
					ELSIF fbFileWrite1.udiStatus = 1904 THEN
						udiStatus	:= 10005;	//File Close Error While Writing
					ELSIF fbFileWrite1.udiStatus = 1914 THEN
						udiStatus	:= 10009;	//Directory Does Not Exist While Writing
					ELSE
						udiStatus	:= fbFileWrite1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		NtParamActRead:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileRead1(bEn := TRUE);
				IF fbFileRead1.udiStatus = 0 THEN
					eStatus			:= Done;
				ELSIF fbFileRead1.udiStatus < 65534 THEN
					eStatus		:= Error;
				
					IF fbFileRead1.udiStatus = 1900 THEN
						udiStatus	:= 10006;	//File Open Error While Reading
					ELSIF fbFileRead1.udiStatus = 1902 THEN
						udiStatus	:= 10007;	//File Read Error
					ELSIF fbFileRead1.udiStatus = 1904 THEN
						udiStatus	:= 10008;	//File Close Error While Reading
					ELSIF fbFileRead1.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead1.udiStatus;
					END_IF
				END_IF
				
			END_IF
			
		NtParamActLoad:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:
						fbMpNtParamRegPar(Enable := TRUE);
						
						IF (fbMpNtParamRegPar.Active = TRUE) AND (fbMpNtParamRegPar.StatusID = 0) THEN
							usiStep	:= 1;
						ELSIF fbMpNtParamRegPar.StatusID <> 0 THEN
							eStatus		:= Error;
							udiStatus	:= 10010;	//MpRecipeRegPar Error While Loading
						END_IF
					
					1:
						fbMpNtParamXml.Load	:= TRUE;
						fbMpNtParamXml.Save	:= FALSE;
						fbMpNtParamXml(Enable := TRUE);
					
						IF (fbMpNtParamXml.Active = TRUE) AND (fbMpNtParamXml.CommandDone = TRUE) AND (fbMpNtParamXml.StatusID = 0) THEN
							//	eStatus	:= Done;
							usiStep	:= 2;
							tyNtParamCurr	:= tyMpNtParamCurr1;
						ELSIF fbMpNtParamXml.StatusID <> 0 THEN
							eStatus		:= Error;
							udiStatus	:= 10011;	//MpRecipeXml Error While Loading
						END_IF
					
					2: 
						fbFileWrite1(bEn := TRUE);
						IF fbFileWrite1.udiStatus = 0 THEN
							eStatus			:= Done;
						ELSIF fbFileWrite1.udiStatus < 65534 THEN
							eStatus			:= Error;
					
							IF fbFileWrite1.udiStatus = 1900 THEN
								udiStatus	:= 10002;	//File Open Error While Writing
							ELSIF fbFileWrite1.udiStatus = 1901 THEN
								udiStatus	:= 10003;	//File Create Error While Writing
							ELSIF fbFileWrite1.udiStatus = 1903 THEN
								udiStatus	:= 10004;	//File Write Error
							ELSIF fbFileWrite1.udiStatus = 1904 THEN
								udiStatus	:= 10005;	//File Close Error While Writing
							ELSIF fbFileWrite1.udiStatus = 1914 THEN
								udiStatus	:= 10009;	//Directory Does Not Exist While Writing
							ELSE
								udiStatus	:= fbFileWrite1.udiStatus;
							END_IF
						END_IF
						
				END_CASE
				
			END_IF
		
		NtParamActSave:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:
						tyMpNtParamCurr1	:= tyNtParamCurr;
						fbMpNtParamRegPar(Enable := TRUE);
						
						IF (fbMpNtParamRegPar.Active = TRUE) AND (fbMpNtParamRegPar.StatusID = 0) THEN
							usiStep	:= 1;
						ELSIF fbMpNtParamRegPar.StatusID <> 0 THEN
							eStatus		:= Error;
							udiStatus	:= 10012;	//MpRecipeRegPar Error While Saving
						END_IF
					
					1:
						fbMpNtParamXml.Load	:= FALSE;
						fbMpNtParamXml.Save	:= TRUE;
						fbMpNtParamXml(Enable := TRUE);
					
						IF (fbMpNtParamXml.Active = TRUE) AND (fbMpNtParamXml.CommandDone = TRUE) AND (fbMpNtParamXml.StatusID = 0) THEN
							eStatus	:= Done;
						ELSIF fbMpNtParamXml.StatusID <> 0 THEN
							eStatus		:= Error;
							udiStatus	:= 10013;	//MpRecipeXml Error While Saving
						END_IF
						
				END_CASE
				
			END_IF
		
	END_CASE
	
	
	
END_ACTION
