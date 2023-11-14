(** 2021-08-01 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbFileOldDel1(bEn := FALSE);
		bFileNotFound	:= FALSE;
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
		
		ELSE
			IF eStatus = Idle OR eStatus = Busy THEN		
				eStatus	:= Done;
			END_IF
		
	END_CASE
	
END_ACTION
