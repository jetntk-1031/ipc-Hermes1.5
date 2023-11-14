(** 2021-08-01 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbDirCreate1(bEn := FALSE);
		fbDirCreate2(bEn := FALSE);
		fbDirCreate3(bEn := FALSE);
		fbDirCreate4(bEn := FALSE);
		fbFileRead1(bEn := FALSE);
		fbFileWrite1(bEn := FALSE);
		fbFileRead2(bEn := FALSE);
		fbFileWrite2(bEn := FALSE);
		fbFileRead3(bEn := FALSE);
		fbFileWrite3(bEn := FALSE);
		fbFileRead4(bEn := FALSE);
		fbFileWrite4(bEn := FALSE);
		fbFileRead5(bEn := FALSE);
		fbFileWrite5(bEn := FALSE);
		usiStep			:= 0;
		bFileNotFound	:= FALSE;
		
		sStatTxt	:= a_sStatText[eStat];
				
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		HermesActIdle:
			eStatus	:= Idle;
		
		HermesActCreateDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
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
								udiStatus	:= 10001;	//Create Retain Directory Error
							ELSE
								udiStatus	:= fbDirCreate2.udiStatus;
							END_IF
						END_IF
					
					2:			
						fbDirCreate3(bEn := TRUE);
						IF fbDirCreate3.udiStatus = 0 THEN
							usiStep	:= 3;
						ELSIF fbDirCreate3.udiStatus < 65534 THEN
							eStatus		:= Error;
							 
							IF fbDirCreate3.udiStatus = 1908 THEN
								udiStatus	:= 10010;	//Create Log Directory Error
							ELSE
								udiStatus	:= fbDirCreate3.udiStatus;
							END_IF
						END_IF
					
					3:			
						fbDirCreate4(bEn := TRUE);
						IF fbDirCreate4.udiStatus = 0 THEN
							eStatus	:= Done;
						ELSIF fbDirCreate4.udiStatus < 65534 THEN
							eStatus		:= Error;
							 
							IF fbDirCreate4.udiStatus = 1908 THEN
								udiStatus	:= 10011;	//Create Machine Parameter Directory Error
							ELSE
								udiStatus	:= fbDirCreate4.udiStatus;
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
		HermesActReadRetainLane1:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileRead2(bEn := TRUE);
				
				IF fbFileRead2.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileRead2.udiStatus < 65534 THEN
					eStatus	:= Error;
				
					IF fbFileRead2.udiStatus = 1900 THEN
						udiStatus	:= 10002;	//File Open Error While Reading Retain File
					ELSIF fbFileRead2.udiStatus = 1902 THEN
						udiStatus	:= 10003;	//File Read Error While Reading Retain File
					ELSIF fbFileRead2.udiStatus = 1904 THEN
						udiStatus	:= 10004;	//File Close Error While Reading Retain File
					ELSIF fbFileRead2.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead2.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		HermesActWriteRetainLane1:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileWrite2(bEn := TRUE);
				
				IF fbFileWrite2.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileWrite2.udiStatus < 65534 THEN
					eStatus	:= Error;
					
					IF fbFileWrite2.udiStatus = 1900 THEN
						udiStatus	:= 10005;	//File Open Error While Writing Retain File
					ELSIF fbFileWrite2.udiStatus = 1901 THEN
						udiStatus	:= 10006;	//File Create Error While Writing Retain File
					ELSIF fbFileWrite2.udiStatus = 1903 THEN
						udiStatus	:= 10007;	//File Write Error While Writing Retain File
					ELSIF fbFileWrite2.udiStatus = 1904 THEN
						udiStatus	:= 10008;	//File Close Error While Writing Retain File
					ELSIF fbFileWrite2.udiStatus = 1914 THEN
						udiStatus	:= 10009;	//Directory Does Not Exist While Writing Retain File
					ELSE
						udiStatus	:= fbFileWrite2.udiStatus;
					END_IF
				END_IF
				
			END_IF
			
		HermesActReadRetainLane2:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileRead3(bEn := TRUE);
				
				IF fbFileRead3.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileRead3.udiStatus < 65534 THEN
					eStatus	:= Error;
				
					IF fbFileRead3.udiStatus = 1900 THEN
						udiStatus	:= 10032;	//File Open Error While Reading Retain File
					ELSIF fbFileRead3.udiStatus = 1902 THEN
						udiStatus	:= 10033;	//File Read Error While Reading Retain File
					ELSIF fbFileRead3.udiStatus = 1904 THEN
						udiStatus	:= 10034;	//File Close Error While Reading Retain File
					ELSIF fbFileRead3.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead3.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		HermesActWriteRetainLane2:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileWrite3(bEn := TRUE);
				
				IF fbFileWrite3.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileWrite3.udiStatus < 65534 THEN
					eStatus	:= Error;
					
					IF fbFileWrite3.udiStatus = 1900 THEN
						udiStatus	:= 10035;	//File Open Error While Writing Retain File
					ELSIF fbFileWrite3.udiStatus = 1901 THEN
						udiStatus	:= 10036;	//File Create Error While Writing Retain File
					ELSIF fbFileWrite3.udiStatus = 1903 THEN
						udiStatus	:= 10037;	//File Write Error While Writing Retain File
					ELSIF fbFileWrite3.udiStatus = 1904 THEN
						udiStatus	:= 10038;	//File Close Error While Writing Retain File
					ELSIF fbFileWrite3.udiStatus = 1914 THEN
						udiStatus	:= 10039;	//Directory Does Not Exist While Writing Retain File
					ELSE
						udiStatus	:= fbFileWrite3.udiStatus;
					END_IF
				END_IF
				
			END_IF
			
		HermesActReadRetainLane3:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileRead4(bEn := TRUE);
				
				IF fbFileRead4.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileRead4.udiStatus < 65534 THEN
					eStatus	:= Error;
				
					IF fbFileRead4.udiStatus = 1900 THEN
						udiStatus	:= 10042;	//File Open Error While Reading Retain File
					ELSIF fbFileRead4.udiStatus = 1902 THEN
						udiStatus	:= 10043;	//File Read Error While Reading Retain File
					ELSIF fbFileRead4.udiStatus = 1904 THEN
						udiStatus	:= 10044;	//File Close Error While Reading Retain File
					ELSIF fbFileRead4.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead4.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		HermesActWriteRetainLane3:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileWrite4(bEn := TRUE);
				
				IF fbFileWrite4.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileWrite4.udiStatus < 65534 THEN
					eStatus	:= Error;
					
					IF fbFileWrite4.udiStatus = 1900 THEN
						udiStatus	:= 10045;	//File Open Error While Writing Retain File
					ELSIF fbFileWrite4.udiStatus = 1901 THEN
						udiStatus	:= 10046;	//File Create Error While Writing Retain File
					ELSIF fbFileWrite4.udiStatus = 1903 THEN
						udiStatus	:= 10047;	//File Write Error While Writing Retain File
					ELSIF fbFileWrite4.udiStatus = 1904 THEN
						udiStatus	:= 10048;	//File Close Error While Writing Retain File
					ELSIF fbFileWrite4.udiStatus = 1914 THEN
						udiStatus	:= 10049;	//Directory Does Not Exist While Writing Retain File
					ELSE
						udiStatus	:= fbFileWrite4.udiStatus;
					END_IF
				END_IF
				
			END_IF
			
		HermesActReadRetainLane4:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileRead5(bEn := TRUE);
				
				IF fbFileRead5.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileRead5.udiStatus < 65534 THEN
					eStatus	:= Error;
				
					IF fbFileRead5.udiStatus = 1900 THEN
						udiStatus	:= 10052;	//File Open Error While Reading Retain File
					ELSIF fbFileRead5.udiStatus = 1902 THEN
						udiStatus	:= 10053;	//File Read Error While Reading Retain File
					ELSIF fbFileRead5.udiStatus = 1904 THEN
						udiStatus	:= 10054;	//File Close Error While Reading Retain File
					ELSIF fbFileRead5.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead5.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		HermesActWriteRetainLane4:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileWrite5(bEn := TRUE);
				
				IF fbFileWrite5.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileWrite5.udiStatus < 65534 THEN
					eStatus	:= Error;
					
					IF fbFileWrite5.udiStatus = 1900 THEN
						udiStatus	:= 10055;	//File Open Error While Writing Retain File
					ELSIF fbFileWrite5.udiStatus = 1901 THEN
						udiStatus	:= 10056;	//File Create Error While Writing Retain File
					ELSIF fbFileWrite5.udiStatus = 1903 THEN
						udiStatus	:= 10057;	//File Write Error While Writing Retain File
					ELSIF fbFileWrite5.udiStatus = 1904 THEN
						udiStatus	:= 10058;	//File Close Error While Writing Retain File
					ELSIF fbFileWrite5.udiStatus = 1914 THEN
						udiStatus	:= 10059;	//Directory Does Not Exist While Writing Retain File
					ELSE
						udiStatus	:= fbFileWrite5.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		HermesActReadConfig:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				fbFileRead1(bEn := TRUE);
				
				IF fbFileRead1.udiStatus = 0 THEN
					eStatus	:= Done;
					tyConfigurationWr := tyCurrConfiguration;
				ELSIF fbFileRead1.udiStatus < 65534 THEN
					eStatus	:= Error;
				     
					IF fbFileRead1.udiStatus = 1900 THEN
						udiStatus	:= 10012;	//File Open Error While Reading Config File
					ELSIF fbFileRead1.udiStatus = 1902 THEN
						udiStatus	:= 10013;	//File Read Error While Reading Config File
					ELSIF fbFileRead1.udiStatus = 1904 THEN
						udiStatus	:= 10014;	//File Close Error While Reading Config File
					ELSIF fbFileRead1.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		HermesActWriteConfig:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;	
				
				fbFileWrite1(bEn := TRUE);
				
				IF fbFileWrite1.udiStatus = 0 THEN
					eStatus	:= Done;
					tyCurrConfiguration := tyConfigurationWr;
				ELSIF fbFileWrite1.udiStatus < 65534 THEN
					eStatus	:= Error;
					
					IF fbFileWrite1.udiStatus = 1900 THEN
						udiStatus	:= 10015;	//File Open Error While Writing Config File
					ELSIF fbFileWrite1.udiStatus = 1901 THEN
						udiStatus	:= 10016;	//File Create Error While Writing Config File
					ELSIF fbFileWrite1.udiStatus = 1903 THEN
						udiStatus	:= 10017;	//File Write Error While Writing Config File
					ELSIF fbFileWrite1.udiStatus = 1904 THEN
						udiStatus	:= 10018;	//File Close Error While Writing Config File
					ELSIF fbFileWrite1.udiStatus = 1914 THEN
						udiStatus	:= 10019;	//Directory Does Not Exist While Writing Config File
					ELSE
						udiStatus	:= fbFileWrite1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		
	
		ELSE
			IF eStatus = Idle OR eStatus = Busy THEN		
				eStatus	:= Done;
			END_IF
		
	END_CASE
	
END_ACTION
