(** 2019-03-22 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbRotCW(bEn := FALSE);
		fbRotCCW(bEn := FALSE);
		fbStop(bEn := FALSE);
		fbMtrBrkRlsOn(bEn := FALSE);
		fbMtrBrkRlsOff(bEn := FALSE);
		fbMtrSigOnDlyTm(IN := FALSE);
		fbMtrDirOffDlyTm(IN := FALSE); 
		
		IF eStatOld <> MotorBrkActIdle
			AND eStatOld <> MotorBrkActSetMtrSigOnOrCW
			AND eStatOld <> MotorBrkActSetMtrDirOrCCW
			AND eStatOld <> MotorBrkActSetMtrBrkRls
			AND eStatOld <> MotorBrkActRstMtrSigOnOrCW
			AND eStatOld <> MotorBrkActRstMtrDirOrCCW
			AND eStatOld <> MotorBrkActRstMtrBrkRls
			AND eStatOld <> MotorBrkActSetMtrAll
			AND eStatOld <> MotorBrkActRstMtrAll 
			AND eStatOld <> MotorBrkActSetMtrDirOrCCW1
			AND eStatOld <> MotorBrkActRstMtrDirOrCCW1
			THEN
			
			bMtrSigOnOrCW	:= FALSE;
			bMtrDirOrCCW	:= FALSE;
			bMtrBrkRls		:= FALSE;
			
		END_IF
			
		sStatTxt	:= a_sStatText[eStat];
				
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		MotorBrkActIdle:
			IF EDGENEG(p_bManual) THEN
				bMtrSigOnOrCW	:= FALSE;
				bMtrDirOrCCW	:= FALSE;
				bMtrBrkRls		:= FALSE;
			END_IF
			
			eStatus	:= Idle;
			bNotInterruptible := FALSE ;
			
		MotorBrkActCW:
			
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				bNotInterruptible := TRUE;
		
				//Motor Run
				fbRotCW.bEndSen			:= p_bCWSen;
				fbRotCW.bLmtSen			:= FALSE;
				
				fbRotCW(bEn := TRUE);
				
				bMtrSigOnOrCW	:= fbRotCW.bMtrSigOnOrLToR;
				bMtrDirOrCCW	:= fbRotCW.bMtrDirOrRToL;
				bMtrBrkRls		:= fbRotCW.bMtrBrk;
				
				IF fbRotCW.udiStatus = 0 THEN
					IF fbRotCW.bEndSen = TRUE THEN
						eStatus		:= Done;
					ELSE
						udiStatus	:= 10000;	//Motor Time Out While Turning Clockwise
						eStatus		:= Error;
					END_IF
				ELSIF fbRotCW.udiStatus < 65534 THEN	
					udiStatus	:= fbRotCW.udiStatus;
					eStatus		:= Error;
				END_IF	
			END_IF	
			
		MotorBrkActCCW:
			
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				bNotInterruptible := TRUE;
		
				//Motor Run
				fbRotCCW.bEndSen		:= p_bCCWSen;
				fbRotCCW.bLmtSen		:= FALSE;
				
				fbRotCCW(bEn := TRUE);
				
				bMtrSigOnOrCW	:= fbRotCCW.bMtrSigOnOrLToR;
				bMtrDirOrCCW	:= fbRotCCW.bMtrDirOrRToL;
				bMtrBrkRls		:= fbRotCCW.bMtrBrk;
				
				IF fbRotCCW.udiStatus = 0 THEN
					IF fbRotCCW.bEndSen = TRUE THEN
						eStatus		:= Done;
					ELSE
						udiStatus	:= 10001;	//Motor Time Out While Turning Counter Clockwise
						eStatus		:= Error;
					END_IF
				ELSIF fbRotCCW.udiStatus < 65534 THEN	
					udiStatus	:= fbRotCCW.udiStatus;
					eStatus		:= Error;
				END_IF	
			END_IF	
			
		MotorBrkActCCWSenToMidSen:
			bNotInterruptible := TRUE;
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				bNotInterruptible := TRUE;
		
				//Motor Run
				fbRotCW.bEndSen			:= p_bMidSen;
				fbRotCW.bLmtSen			:= p_bCWSen;
				
				fbRotCW(bEn := TRUE);
				
				bMtrSigOnOrCW	:= fbRotCW.bMtrSigOnOrLToR;
				bMtrDirOrCCW	:= fbRotCW.bMtrDirOrRToL;
				bMtrBrkRls		:= fbRotCW.bMtrBrk;
				
				IF fbRotCW.udiStatus = 0 THEN
					IF fbRotCW.bLmtActivated = TRUE THEN
						udiStatus	:= 10002;	//Clockwise Sensor Activated While Turning Clockwise To Middle Sensor
						eStatus		:= Error;
					ELSIF fbRotCW.bEndSen = TRUE THEN
						eStatus		:= Done;
					ELSE
						udiStatus	:= 10003;	//Motor Time Out While Turning Clockwise To Middle Sensor
						eStatus		:= Error;
					END_IF
				ELSIF fbRotCW.udiStatus < 65534 THEN	
					udiStatus	:= fbRotCW.udiStatus;
					eStatus		:= Error;
				END_IF	
			END_IF	
			
		MotorBrkActMidSenToCWSen:
			
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				bNotInterruptible := TRUE;
		
				//Motor Run
				fbRotCW.bEndSen			:= p_bCWSen;
				fbRotCW.bLmtSen			:= FALSE;
				
				fbRotCW(bEn := TRUE);
				
				bMtrSigOnOrCW	:= fbRotCW.bMtrSigOnOrLToR;
				bMtrDirOrCCW	:= fbRotCW.bMtrDirOrRToL;
				bMtrBrkRls		:= fbRotCW.bMtrBrk;
				
				IF fbRotCW.udiStatus = 0 THEN
					IF fbRotCW.bEndSen = TRUE THEN
						eStatus		:= Done;
					ELSE
						udiStatus	:= 10004;	//Motor Time Out While Turning Clockwise From Middle Sensor
						eStatus		:= Error;
					END_IF
				ELSIF fbRotCW.udiStatus < 65534 THEN
					udiStatus	:= fbRotCW.udiStatus;
					eStatus		:= Error;
				END_IF
			END_IF
			
		MotorBrkActCWSenToMidSen:
		
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				bNotInterruptible := TRUE;
		
				//Motor Run
				fbRotCCW.bEndSen		:= p_bMidSen;
				fbRotCCW.bLmtSen		:= p_bCCWSen;
				
				fbRotCCW(bEn := TRUE);
				
				bMtrSigOnOrCW	:= fbRotCCW.bMtrSigOnOrLToR;
				bMtrDirOrCCW	:= fbRotCCW.bMtrDirOrRToL;
				bMtrBrkRls		:= fbRotCCW.bMtrBrk;
				
				IF fbRotCCW.udiStatus = 0 THEN
					IF fbRotCCW.bLmtActivated = TRUE THEN
						udiStatus	:= 10005;	//Counter Clockwise Sensor Activated While Turning Counter Clockwise To Middle Sensor
						eStatus		:= Error;
					ELSIF fbRotCCW.bEndSen = TRUE THEN
						eStatus		:= Done;
					ELSE
						udiStatus	:= 10006;	//Motor Time Out While Turning Counter Clockwise To Middle Sensor
						eStatus		:= Error;
					END_IF
				ELSIF fbRotCCW.udiStatus < 65534 THEN	
					udiStatus	:= fbRotCCW.udiStatus;
					eStatus		:= Error;
				END_IF	
			END_IF	
			
		MotorBrkActMidSenToCCWSen:	
	
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				bNotInterruptible := TRUE;
		
				//Motor Run
				fbRotCCW.bEndSen		:= p_bCCWSen;
				fbRotCCW.bLmtSen		:= FALSE;
				
				fbRotCCW(bEn := TRUE);
				
				bMtrSigOnOrCW	:= fbRotCCW.bMtrSigOnOrLToR;
				bMtrDirOrCCW	:= fbRotCCW.bMtrDirOrRToL;
				bMtrBrkRls		:= fbRotCCW.bMtrBrk;
				
				IF fbRotCCW.udiStatus = 0 THEN
					IF fbRotCCW.bEndSen = TRUE THEN
						eStatus		:= Done;
					ELSE
						udiStatus	:= 10007;	//Motor Time Out While Turning Counter Clockwise From Middle Sensor
						eStatus		:= Error;
					END_IF
				ELSIF fbRotCCW.udiStatus < 65534 THEN	
					udiStatus	:= fbRotCCW.udiStatus;
					eStatus		:= Error;
				END_IF	
			END_IF	
			
		MotorBrkActBrkRlsOn:
			
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Motor Run
				fbMtrBrkRlsOn(bEn := TRUE);
				
				bMtrBrkRls	:= fbMtrBrkRlsOn.bMtrBrk;
				
				IF fbMtrBrkRlsOn.udiStatus = 0 THEN 
					eStatus		:= Done;
				ELSIF fbMtrBrkRlsOn.udiStatus < 65534 THEN	
					udiStatus	:= fbMtrBrkRlsOn.udiStatus;
					eStatus		:= Error;
				END_IF	
			END_IF	
				
		MotorBrkActBrkRlsOff:	
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Motor Run
				fbMtrBrkRlsOff(bEn := TRUE);
				
				bMtrBrkRls	:= fbMtrBrkRlsOff.bMtrBrk;
				
				IF fbMtrBrkRlsOff.udiStatus = 0 THEN 
					eStatus		:= Done;
				ELSIF fbMtrBrkRlsOff.udiStatus < 65534 THEN	
					udiStatus	:= fbMtrBrkRlsOff.udiStatus;
					eStatus		:= Error;
				END_IF	
			END_IF	
			
		MotorBrkActStop:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Motor Run
				fbStop(bEn := TRUE);
				fbMtrBrkRlsOff(bEn := TRUE);
				
				bMtrSigOnOrCW	:= fbStop.bMtrSigOnOrLToR;
				bMtrDirOrCCW	:= fbStop.bMtrDirOrRToL;
				bMtrBrkRls		:= fbMtrBrkRlsOff.bMtrBrk;
				
				IF fbStop.udiStatus = 0 AND fbMtrBrkRlsOff.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbStop.udiStatus < 65534 AND fbStop.udiStatus > 0 THEN
					udiStatus	:= fbStop.udiStatus;
					eStatus		:= Error;
				ELSIF fbMtrBrkRlsOff.udiStatus < 65534 AND fbMtrBrkRlsOff.udiStatus > 0 THEN
					udiStatus	:= fbMtrBrkRlsOff.udiStatus;
					eStatus		:= Error;
				END_IF
			END_IF	
		
		MotorBrkActSetMtrSigOnOrCW:
			
			IF eStatus = Idle OR eStatus = Busy THEN
				
				bNotInterruptible := TRUE;
		
				bMtrSigOnOrCW	:= TRUE;
				eStatus			:= Done;
				
			END_IF
		
		MotorBrkActSetMtrDirOrCCW:

			IF eStatus = Idle OR eStatus = Busy THEN
				
				bNotInterruptible := TRUE;
		
				bMtrDirOrCCW	:= TRUE;
				eStatus			:= Done;
				
			END_IF
		
		MotorBrkActSetMtrDirOrCCW1:
		
			IF eStatus = Idle OR eStatus = Busy THEN
				
				bNotInterruptible := TRUE;
		
				bMtrDirOrCCW	:= TRUE;
				fbMtrSigOnDlyTm (IN:= TRUE);
				
				IF fbMtrSigOnDlyTm.Q THEN
					bMtrSigOnOrCW	:= TRUE;
					fbMtrSigOnDlyTm (IN:= FALSE);
					eStatus			:= Done;
				END_IF
//				bMtrSigOnOrCW	:= TRUE;
//				bMtrDirOrCCW	:= TRUE;
//				eStatus			:= Done;
			END_IF
		
		MotorBrkActSetMtrBrkRls:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrBrkRls		:= TRUE;
				eStatus			:= Done;
				
			END_IF
		
		MotorBrkActRstMtrSigOnOrCW:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrSigOnOrCW	:= FALSE;
				eStatus			:= Done;
				
			END_IF
		
		MotorBrkActRstMtrDirOrCCW:
			
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrDirOrCCW	:= FALSE;
				eStatus			:= Done;
				
			END_IF
		
		MotorBrkActRstMtrDirOrCCW1:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				fbMtrDirOffDlyTm (IN:=TRUE);
				IF 	fbMtrDirOffDlyTm.Q THEN
					fbMtrDirOffDlyTm (IN:=FALSE);
					bMtrDirOrCCW	:= FALSE;
					eStatus			:= Done;
				END_IF
				bMtrSigOnOrCW	:= FALSE;
				
				
			END_IF
			
		MotorBrkActRstMtrBrkRls:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrBrkRls		:= FALSE;
				eStatus			:= Done;
				
			END_IF
		
		MotorBrkActSetMtrAll:
		
			IF eStatus = Idle OR eStatus = Busy THEN
				
				bNotInterruptible := TRUE;
		
				bMtrSigOnOrCW	:= TRUE;
				bMtrDirOrCCW	:= TRUE;
				bMtrBrkRls		:= TRUE;
				eStatus			:= Done;
				
			END_IF
		
		MotorBrkActRstMtrAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrSigOnOrCW	:= FALSE;
				bMtrDirOrCCW	:= FALSE;
				bMtrBrkRls		:= FALSE;
				eStatus			:= Done;
				
			END_IF
		
	END_CASE
	
END_ACTION
