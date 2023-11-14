(** 2020-08-17 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		LibVerActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbDirCreate1(bEn := FALSE);
				fbDirCreate2(bEn := FALSE);
				fbFileRead1(bEn := FALSE);
				fbFileWrite1(bEn := FALSE);
				fbChkLibVerFile(bEn := FALSE);
				fbChkLibVer(bEn := FALSE);
				usiStep	:= 0;
				memset(ADR(a_bVerMismatch), 0, SIZEOF(a_bVerMismatch));
		
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		LibVerActCreateDir:
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
								udiStatus	:= 10000;	//Creating Private Directory Error
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
								udiStatus	:= 10001;	//Creating User Management Directory Error
							ELSE
								udiStatus	:= fbDirCreate2.udiStatus;
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
		LibVerActWrite:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileWrite1(bEn := TRUE);
				
				IF fbFileWrite1.udiStatus = 0 THEN
					eStatus	:= Done;
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
						udiStatus	:= 10013;	//Directory Does Not Exist While Writing
					ELSE
						udiStatus	:= fbFileWrite1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		LibVerActRead:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileRead1(bEn := TRUE);
				IF fbFileRead1.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileRead1.udiStatus < 65534 THEN
					eStatus		:= Error;
				
					IF fbFileRead1.udiStatus = 1900 THEN
						udiStatus	:= 10006;	//File Open Error While Reading
					ELSIF fbFileRead1.udiStatus = 1902 THEN
						udiStatus	:= 10007;	//File Read Error
					ELSIF fbFileRead1.udiStatus = 1904 THEN
						udiStatus	:= 10008;	//File Close Error While Reading
					ELSIF fbFileRead1.udiStatus = 1915 THEN
						udiStatus	:= 10014;	//File Not Found While Reading
					ELSE
						udiStatus	:= fbFileRead1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		LibVerActReadChk:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:
						fbFileRead1(bEn := TRUE);
						IF fbFileRead1.udiStatus = 0 THEN
							usiStep	:= 1;
						ELSIF fbFileRead1.udiStatus < 65534 THEN
							eStatus		:= Error;
				
							IF fbFileRead1.udiStatus = 1900 THEN
								udiStatus	:= 10009;	//File Open Error While Checking
							ELSIF fbFileRead1.udiStatus = 1902 THEN
								udiStatus	:= 10010;	//File Read Error While Checking
							ELSIF fbFileRead1.udiStatus = 1904 THEN
								udiStatus	:= 10011;	//File Close Error While Checking
							ELSIF fbFileRead1.udiStatus = 1915 THEN
								udiStatus	:= 10015;	//File Not Found While Checking
							ELSE
								udiStatus	:= fbFileRead1.udiStatus;
							END_IF
						END_IF
						
					1:				
						fbChkLibVerFile.a_tyLibraryVer := a_tyInfoOut;
						
						fbChkLibVerFile(bEn := TRUE);
						IF fbChkLibVerFile.udiStatus = 0 THEN
							usiStep	:= 2;
						ELSIF fbChkLibVerFile.udiStatus < 65534 THEN
							eStatus		:= Error;
				
							IF fbChkLibVerFile.udiStatus = 1001 THEN
								udiStatus	:= 10016;	//Libraries Version File Corrupted
							END_IF
						END_IF
					
					2:
						
						fbChkLibVer.a_tyLibraryVer := a_tyInfoOut;
						
						fbChkLibVer(bEn := TRUE);
						IF fbChkLibVer.udiStatus = 0 THEN
							eStatus	:= Done;
						ELSIF fbChkLibVer.udiStatus < 65534 THEN
							eStatus		:= Error;
				
							IF fbChkLibVer.udiStatus = 1002 THEN
								udiStatus	:= 10012;	//Libraries Version Mismatch
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
	END_CASE
	
END_ACTION
