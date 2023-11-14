(** 2019-05-09 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		UsrFolderActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbDirCreate1(bEn := FALSE);
				fbDirCreate2(bEn := FALSE);
				fbDirCreate3(bEn := FALSE);
				fbDirCreate4(bEn := FALSE);
						
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		UsrFolderActCreateUsrDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				fbDirCreate1(bEn := TRUE);
				IF fbDirCreate1.udiStatus = 0 THEN
					eStatus		:= Done;
				ELSIF fbDirCreate1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbDirCreate1.udiStatus = 1908 THEN
						udiStatus	:= 10000;	//Creating User Directory Error
					ELSE
						udiStatus	:= fbDirCreate1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		UsrFolderActCreatePrivateDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				fbDirCreate2(bEn := TRUE);
				IF fbDirCreate2.udiStatus = 0 THEN
					eStatus		:= Done;
				ELSIF fbDirCreate2.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbDirCreate2.udiStatus = 1908 THEN
						udiStatus	:= 10001;	//Creating Private Directory Error
					ELSE
						udiStatus	:= fbDirCreate2.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		UsrFolderActCreateLogDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				fbDirCreate3(bEn := TRUE);
				IF fbDirCreate3.udiStatus = 0 THEN
					eStatus		:= Done;
				ELSIF fbDirCreate3.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbDirCreate3.udiStatus = 1908 THEN
						udiStatus	:= 10002;	//Creating Log Directory Error
					ELSE
						udiStatus	:= fbDirCreate3.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		UsrFolderActCreateLCSDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				fbDirCreate4(bEn := TRUE);
				IF fbDirCreate4.udiStatus = 0 THEN
					eStatus		:= Done;
				ELSIF fbDirCreate4.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbDirCreate4.udiStatus = 1908 THEN
						udiStatus	:= 10003;	//Creating LCS Directory Error
					ELSE
						udiStatus	:= fbDirCreate4.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
	END_CASE
	
END_ACTION
