(** 2019-01-10 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbPneuExtChk(bEn := FALSE);
		fbPneuRetChk(bEn := FALSE);
						
		sStatTxt	:= a_sStatText[eStat];
			
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		PneuActIdle:
			eStatus	:= Idle;
		
		PneuActSetAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbPneuExtChk(bEn := FALSE);
				fbPneuRetChk(bEn := FALSE);
				
				bExtCtrl	:= TRUE;
				bRetCtrl	:= TRUE;
				
				eStatus	:= Done;
				
			END_IF
		
		PneuActRstAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbPneuExtChk(bEn := FALSE);
				fbPneuRetChk(bEn := FALSE);
				
				bExtCtrl	:= FALSE;
				bRetCtrl	:= FALSE;
				
				eStatus	:= Done;
				
			END_IF
		
		PneuActSetExt:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbPneuExtChk(bEn := FALSE);
				fbPneuRetChk(bEn := FALSE);
				
				bExtCtrl	:= TRUE;
				bRetCtrl	:= FALSE;
				
				bExtended	:= TRUE;
				
				eStatus	:= Done;
				
			END_IF
		
		PneuActSetRet:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				//Reset
				fbPneuExtChk(bEn := FALSE);
				fbPneuRetChk(bEn := FALSE);
				
				bExtCtrl	:= FALSE;
				bRetCtrl	:= TRUE;
				
				bRetracted	:= TRUE;
				
				eStatus	:= Done;
				
			END_IF
		
		PneuActExt:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Reset
				fbPneuRetChk(bEn := FALSE);
				
				bExtCtrl	:= TRUE;
				bRetCtrl	:= FALSE;
				
				fbPneuExtChk.bExtSen	:= p_bExtSen;
				fbPneuExtChk.bRetSen	:= p_bRetSen;
				fbPneuExtChk.bExtSafety	:= p_bExtSafetySen;
				fbPneuExtChk(bEn := TRUE);
				
				IF fbPneuExtChk.udiStatus = 0 THEN
					bExtended	:= TRUE;
					eStatus		:= Done;
				ELSIF fbPneuExtChk.udiStatus < 65534 THEN
					IF p_bTwoCtrlIn = TRUE THEN
						bExtCtrl	:= FALSE;
						bRetCtrl	:= FALSE;
					ELSE
						bExtCtrl	:= FALSE;
						bRetCtrl	:= TRUE;
					END_IF
					
					eStatus		:= Error;
					
					IF fbPneuExtChk.udiStatus = 1507 THEN
						udiStatus	:= 10000;	//Safety Check Error While Extending
					ELSIF fbPneuExtChk.udiStatus = 1503 THEN
						udiStatus	:= 10001;	//Extend Sensor On Checking Time Out While Extending
					ELSIF fbPneuExtChk.udiStatus = 1506 THEN
						udiStatus	:= 10002;	//Retract Sensor Off Checking Time Out While Extending
					ELSE
						udiStatus	:= fbPneuExtChk.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		PneuActRet:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Reset
				fbPneuExtChk(bEn := FALSE);
				
				bExtCtrl	:= FALSE;
				bRetCtrl	:= TRUE;
				
				fbPneuRetChk.bExtSen	:= p_bExtSen;
				fbPneuRetChk.bRetSen	:= p_bRetSen;
				fbPneuRetChk.bRetSafety	:= p_bRetSafetySen;
				fbPneuRetChk(bEn := TRUE);
				
				IF fbPneuRetChk.udiStatus = 0 THEN
					bRetracted	:= TRUE;
					eStatus		:= Done;
				ELSIF fbPneuRetChk.udiStatus < 65534 THEN
					IF p_bTwoCtrlIn = TRUE THEN
						bExtCtrl	:= FALSE;
						bRetCtrl	:= FALSE;
					ELSE
						bExtCtrl	:= TRUE;
						bRetCtrl	:= FALSE;
					END_IF
					
					eStatus		:= Error;
					
					IF fbPneuRetChk.udiStatus = 1508 THEN
						udiStatus	:= 10003;	//Safety Check Error While Retracting
					ELSIF fbPneuRetChk.udiStatus = 1505 THEN
						udiStatus	:= 10004;	//Retract Sensor On Checking Time Out While Retracting
					ELSIF fbPneuRetChk.udiStatus = 1504 THEN
						udiStatus	:= 10005;	//Extend Sensor Off Checking Time Out While Retracting
					ELSE
						udiStatus	:= fbPneuRetChk.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ELSE
			IF eStatus = Idle OR eStatus = Busy THEN		
				eStatus	:= Done;
			END_IF
		
	END_CASE
	
END_ACTION
