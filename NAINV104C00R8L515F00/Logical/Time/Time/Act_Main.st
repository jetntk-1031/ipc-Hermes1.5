(** 2019-01-02 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		TimeActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbSetTime(enable := FALSE);
				fbSetTimeZone(enable := FALSE);
				fbGetTime(enable := FALSE);
				fbGetTimeDT(enable := FALSE);
				fbGetTimeZone(enable := FALSE);
				
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		TimeActSetTime:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
		
				fbSetTime.DT1	:= p_dtSetDT;
				fbSetTime(enable := TRUE);
				
				IF fbSetTime.status = 0 THEN
					eStatus	:= Done;
				ELSIF fbSetTime.status < 65534 THEN
					udiStatus	:= 10000;	//Set Time Error
					eStatus		:= Error;
				END_IF
				
			END_IF
		
		TimeActSetTimeZone:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
		
				fbSetTimeZone.timezoneID	:= p_uiSetTimeZone;
				fbSetTimeZone(enable := TRUE);
				
				IF fbSetTimeZone.status = 0 THEN
					eStatus	:= Done;
				ELSIF fbSetTimeZone.status < 65534 THEN
					udiStatus	:= 10001;	//Set Time Zone Error
					eStatus		:= Error;
				END_IF
				
			END_IF
		
		TimeActGetTime:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
		
				fbGetTime(enable := TRUE);
				fbGetTimeDT(enable := TRUE);
				
				IF fbGetTime.status = 0 AND fbGetTimeDT.status = 0 THEN
					dtCurrDT	:= fbGetTime.DT1;
					eStatus		:= Done;
				ELSIF fbGetTime.status > 0 AND fbGetTime.status < 65534 THEN
					udiStatus	:= 10002;	//Get Time Error
					eStatus		:= Error;
				ELSIF fbGetTimeDT.status > 0 AND fbGetTimeDT.status < 65534 THEN
					udiStatus	:= 10003;	//Get Time Structure Error
					eStatus		:= Error;
				END_IF
				
			END_IF
		
		TimeActGetTimeZone:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
		
				fbGetTimeZone(enable := TRUE);
				
				IF fbGetTimeZone.status = 0 THEN
					uiCurrTimeZone	:= fbGetTimeZone.timezoneID;
					eStatus			:= Done;
				ELSIF fbGetTimeZone.status < 65534 THEN
					udiStatus	:= 10004;	//Get Time Zone Error
					eStatus		:= Error;
				END_IF
				
			END_IF
		
	END_CASE
	
END_ACTION
