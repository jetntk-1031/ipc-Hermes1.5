(** 2019-04-08 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbFileOldDel1(bEn := FALSE);
		fbFileRead1(bEn := FALSE);
		fbFileWrite1(bEn := FALSE);
		
		sStatTxt	:= a_sStatText[eStat];
				
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		HermesActIdle:
			eStatus	:= Idle;
		
		HermesActBGStartRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				bRun	:= TRUE;
				bStop	:= FALSE;
				eStatus	:= Done;
				
			END_IF
		
		HermesActBGStopRun:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				bStop	:= TRUE;
				eStatus	:= Done;
				
			END_IF
		
		HermesActDeleteOldLog:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				fbFileOldDel1.dtDTNow	:= p_dtCurrDT;
				fbFileOldDel1(bEn := TRUE);
				IF fbFileOldDel1.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileOldDel1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbFileOldDel1.udiStatus = 1910 THEN
						udiStatus	:= 10111;	//Get Directory Info Error While Deleting Old Log
					ELSIF fbFileOldDel1.udiStatus = 1911 THEN
						udiStatus	:= 10112;	//Directory Read Error While Deleting Old Log
					ELSIF fbFileOldDel1.udiStatus = 1912 THEN
						udiStatus	:= 10113;	//File Delete Error While Deleting Old Log
					ELSE
						udiStatus	:= fbFileOldDel1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		HermesActReadRetain:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileRead1(bEn := TRUE);
				
				IF fbFileRead1.udiStatus = 0 THEN
					eStatus	:= Done;
				
					a_tyBoardDepartedInfoWr := a_tyBoardDepartedInfo;
				ELSIF fbFileRead1.udiStatus < 65534 THEN
					eStatus	:= Error;
				
					IF fbFileRead1.udiStatus = 1900 THEN
						udiStatus	:= 10114;	//File Open Error While Reading Retain File
					ELSIF fbFileRead1.udiStatus = 1902 THEN
						udiStatus	:= 10115;	//File Read Error While Reading Retain File
					ELSIF fbFileRead1.udiStatus = 1904 THEN
						udiStatus	:= 10116;	//File Close Error While Reading Retain File
					ELSIF fbFileRead1.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		HermesActWriteRetain:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		

				fbFileWrite1(bEn := TRUE);
				
				IF fbFileWrite1.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbFileWrite1.udiStatus < 65534 THEN
					eStatus	:= Error;
					
					IF fbFileWrite1.udiStatus = 1900 THEN
						udiStatus	:= 10117;	//File Open Error While Writing Retain File
					ELSIF fbFileWrite1.udiStatus = 1901 THEN
						udiStatus	:= 10118;	//File Create Error While Writing Retain File
					ELSIF fbFileWrite1.udiStatus = 1903 THEN
						udiStatus	:= 10119;	//File Write Error While Writing Retain File
					ELSIF fbFileWrite1.udiStatus = 1904 THEN
						udiStatus	:= 10120;	//File Close Error While Writing Retain File
					ELSIF fbFileWrite1.udiStatus = 1914 THEN
						udiStatus	:= 10121;	//Directory Does Not Exist While Writing Retain File
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
