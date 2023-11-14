(** 2019-06-17 **)
ACTION Act_Main:
	
	IF eStatOld <> eStat THEN
		fbInit(bEn := FALSE);
		fbEnt(bEn := FALSE);
		fbRev(bEn := FALSE);
		fbPreExit(bEn := FALSE);
		fbExit(bEn := FALSE);
		fbExit1(bEn := FALSE);
		fbStop(bEn := FALSE);
		fbPshrExtChk(bEn := FALSE);
		fbPshrRetChk(bEn := FALSE);
		fbPullerExtChk(bEn := FALSE);
		fbPullerRetChk(bEn := FALSE);
		fbRotHomeChk(bEn := FALSE);
		fbRotRemoteChk(bEn := FALSE);
		fbRejectUpChk(bEn := FALSE);
		fbRejectDownChk(bEn := FALSE);
		fbWaitTm(IN := FALSE);
			
		IF eStatOld <> ConvActIdle
			AND eStatOld <> ConvActSetMtrSigOnOrLToR
			AND eStatOld <> ConvActRstMtrSigOnOrLToR
			AND eStatOld <> ConvActSetMtrDirOrRToL
			AND eStatOld <> ConvActRstMtrDirOrRToL
			AND eStatOld <> ConvActSetMtrAll
			AND eStatOld <> ConvActRstMtrAll THEN
			
			bMtrSigOnOrLToR	:= FALSE;
			bMtrDirOrRToL	:= FALSE;
			
		END_IF
		
		bLmtSenActivated	:= FALSE;
		bInletOff			:= FALSE;
		usiStep				:= 0;
		
		sStatTxt	:= a_sStatText[eStat];
		
		eStatOld	:= eStat;
		
		eStatus		:= Busy;
	END_IF
	
	//Main
	CASE eStat OF
		
		ConvActIdle:
			IF EDGENEG(p_bManual) THEN
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
			END_IF
			
			eStatus	:= Idle;
		
		ConvActInit:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					
					0:	//Reset
						bHvBrd	:= FALSE;
						usiStep	:= 1;
						
					1:	//Conveyor Initial Run
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
							
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus	:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10000;	//Multi Board Detected While Conveyor Initial
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
						
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen THEN
							bHvBrd	:= TRUE;
							bGdBrd	:= p_bGdBrdInit;
						END_IF
						
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
						
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen;
						END_IF
						
						fbInit(bEn := TRUE);
						
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
						
						IF fbInit.udiStatus = 0 THEN
							
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE THEN
									udiStatus	:= 10001;	//Board Not Present At Outlet Sensor (L - R) While Conveyor Initial
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE THEN
									udiStatus	:= 10002;	//Board Not Present At Outlet Sensor (R - L) While Conveyor Initial
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							END_IF
							
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
						
				END_CASE
					
			END_IF	
		
		ConvActInitRev:	
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					0:	//Reset
						bHvBrd	:= FALSE;
						usiStep	:= 1;
						
					1:	//Conveyor Initial Run
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10003;	//Multi Board Detected While Conveyor Initial With Reverse
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen THEN
							bHvBrd	:= TRUE;
							bGdBrd	:= p_bGdBrdInit;
						END_IF
				
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
				
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen;
						END_IF
				
						fbInit(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
				
						IF fbInit.udiStatus = 0 THEN
					
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE THEN
									udiStatus	:= 10004;	//Board Not Present At Outlet Sensor (L - R) While Conveyor Initial With Reverse
									eStatus		:= Error;
								ELSE
									usiStep		:= 2;
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE THEN
									udiStatus	:= 10005;	//Board Not Present At Outlet Sensor (R - L) While Conveyor Initial With Reverse
									eStatus		:= Error;
								ELSE
									usiStep		:= 2;
								END_IF
							END_IF
					
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
						
					2:	//Check Have Board
						IF bHvBrd = TRUE THEN
							usiStep		:= 3;
						ELSE	
							eStatus		:= Done;
						END_IF	
							
					3:	//Delay
						fbWaitTm(IN := TRUE , PT := T#500ms);
					
						IF fbWaitTm.Q = TRUE THEN
							fbWaitTm(IN := FALSE);
							
							usiStep	:= 4;
						END_IF	
						
					4:	//Reverse
						//Conveyor Run
						fbRev.bConvLToR		:= (p_eDirection = ConvDirRToL) OR (p_eDirection = ConvDirRToR);
					
						IF fbRev.bConvLToR = TRUE THEN
							fbRev.bStartSen	:= p_bLeftSen;
							fbRev.bEndSen	:= p_bRightSen;
						ELSE	
							fbRev.bStartSen	:= p_bRightSen;
							fbRev.bEndSen	:= p_bLeftSen;
						END_IF	
				
						fbRev(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbRev.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbRev.bMtrDirOrRToL;
				
						IF fbRev.udiStatus = 0 THEN
							eStatus		:= Done;
						ELSIF fbRev.udiStatus < 65534 THEN	
							udiStatus	:= fbRev.udiStatus;
							eStatus		:= Error;
						END_IF		
					
				END_CASE	
			END_IF	
			
		ConvActInitPshr:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					0:	//Reset
						bHvBrd	:= FALSE;
						usiStep	:= 1;
						
					1:	//Pusher Retract
						bPshrExtCtrl	:= FALSE;
				
						fbPshrRetChk.bExtSen	:= p_bPshrExtSen;
						fbPshrRetChk.bRetSen	:= p_bPshrRetSen;
						fbPshrRetChk.bRetSafety	:= p_bPshrRetSafetySen;
						fbPshrRetChk(bEn := TRUE);
					
						IF fbPshrRetChk.udiStatus = 0 THEN
							bPshrRetracted	:= TRUE;
							usiStep			:= 2;
						ELSIF fbPshrRetChk.udiStatus < 65534 THEN
							bPshrExtCtrl	:= TRUE;
					
							eStatus			:= Error;
							
							IF fbPshrRetChk.udiStatus = 1504 THEN
								udiStatus	:= 10006;	//Pusher Extend Sensor Off Time Out In Retract Check While Conveyor Initial With Pusher
							ELSIF fbPshrRetChk.udiStatus = 1505 THEN
								udiStatus	:= 10007;	//Pusher Retract Sensor On Time Out In Retract Check While Conveyor Initial With Pusher
							ELSIF fbPshrRetChk.udiStatus = 1508 THEN
								udiStatus	:= 10008;	//Pusher Retract Safety Sensor Error In Retract Check While Conveyor Initial With Pusher
							ELSE
								udiStatus	:= fbPshrRetChk.udiStatus;
							END_IF
						END_IF
						
					2:	//Conveyor Init Run
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10009;	//Multi Board Detected While Conveyor Initial With Pusher
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen THEN
							bHvBrd	:= TRUE;
							bGdBrd	:= p_bGdBrdInit;
						END_IF
				
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
				
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen;
						END_IF
				
						fbInit(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
				
						IF fbInit.udiStatus = 0 THEN
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE THEN
									udiStatus	:= 10010;	//Board Not Present At Outlet Sensor (L - R) While Conveyor Initial With Pusher
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE THEN
									udiStatus	:= 10011;	//Board Not Present At Outlet Sensor (R - L) While Conveyor Initial With Pusher
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							END_IF
					
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
				END_CASE	
			END_IF	
		
		ConvActInitPuller:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					0:	//Reset
						bHvBrd	:= FALSE;
						usiStep	:= 1;
						
					1:	//Rotate Home
						bRotRemoteCtrl	:= FALSE;
				
						fbRotHomeChk.bExtSen	:= p_bRotHomeSen;
						fbRotHomeChk.bRetSen	:= p_bRotRemoteSen;
						fbRotHomeChk.bExtSafety	:= p_bRotHomeSafetySen;
						fbRotHomeChk(bEn := TRUE);
					
						IF fbRotHomeChk.udiStatus = 0 THEN
							bRotAtHome	:= TRUE;
							usiStep		:= 2;
						ELSIF fbRotHomeChk.udiStatus < 65534 THEN
							bRotRemoteCtrl	:= TRUE;
					
							eStatus			:= Error;
							
							IF fbRotHomeChk.udiStatus = 1503 THEN
								udiStatus	:= 10012;	//Rotator Home Sensor On Time Out In Home Check While Conveyor Initial With Puller
							ELSIF fbRotHomeChk.udiStatus = 1506 THEN
								udiStatus	:= 10013;	//Rotator Remote Sensor Off Time Out In Home Check While Conveyor Initial With Puller
							ELSIF fbRotHomeChk.udiStatus = 1507 THEN
								udiStatus	:= 10014;	//Rotator Home Safety Sensor Error In Home Check While Conveyor Initial With Puller
							ELSE
								udiStatus	:= fbRotHomeChk.udiStatus;
							END_IF
						END_IF
					
					2: //Puller Retract
						bPullerExtCtrl	:= FALSE;
						bPullerRetCtrl	:= TRUE;
					
						fbPullerRetChk.bExtSen		:= p_bPullerExtSen;
						fbPullerRetChk.bRetSen		:= p_bPullerRetSen;
						fbPullerRetChk.bRetSafety	:= p_bPullerRetSafetySen;
						fbPullerRetChk(bEn := TRUE);
						
						IF fbPullerRetChk.udiStatus = 0 THEN
							bPullerRetracted	:= TRUE;
							usiStep				:= 3;	
						ELSIF fbPullerRetChk.udiStatus < 65534 THEN	
							bPullerExtCtrl	:= TRUE;
							bPullerRetCtrl	:= FALSE;
							
							eStatus			:= Error;
							
							IF fbPullerRetChk.udiStatus = 1504 THEN
								udiStatus	:= 10015;	//Puller Extend Sensor Off Time Out In Retract Check While Conveyor Initial With Puller
							ELSIF fbPullerRetChk.udiStatus = 1505 THEN
								udiStatus	:= 10016;	//Puller Retract Sensor On Time Out In Retract Check While Conveyor Initial With Puller
							ELSIF fbPullerRetChk.udiStatus = 1508 THEN
								udiStatus	:= 10017;	//Puller Retract Safety Sensor Error In Retract Check While Conveyor Initial With Puller
							ELSE
								udiStatus	:= fbPullerRetChk.udiStatus;
							END_IF
						END_IF	
					
					3: //Conveyor Init Run	
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10018;	//Multi Board Detected While Conveyor Initial With Puller
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen THEN
							bHvBrd	:= TRUE;
							bGdBrd	:= p_bGdBrdInit;
						END_IF
				
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
				
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen;
						END_IF
				
						fbInit(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
				
						IF fbInit.udiStatus = 0 THEN
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE THEN
									udiStatus	:= 10019;	//Board Not Present At Outlet Sensor (L - R) While Conveyor Initial With Puller
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE THEN
									udiStatus	:= 10020;	//Board Not Present At Outlet Sensor (L - R) While Conveyor Initial With Puller
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							END_IF
					
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
				END_CASE	
			END_IF
			
		ConvActInitRej:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					0:	//Reset
						bHvBrd		:= FALSE;
						bRejHvBrd	:= FALSE;
						usiStep		:= 1;
						
					1:	//Check Reject Sensor
						IF p_bRejectDownSen = TRUE THEN
							usiStep	:= 2;
						ELSE
							usiStep	:= 4;
						END_IF
						
					2:	//Initial Run Conveyor
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10079;	//Multi Board Detected While Conveyor Initial With Reject
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen OR p_bMiddleSen THEN
							bHvBrd	:= TRUE;
							bGdBrd	:= p_bGdBrdInit;
						END_IF
				
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
				
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen OR p_bMiddleSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen OR p_bMiddleSen;
						END_IF
				
						fbInit(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
				
						IF fbInit.udiStatus = 0 THEN
					
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE AND p_bMiddleSen = FALSE THEN
									udiStatus	:= 10080;	//Board Not Present At Outlet Or Middle Sensor (L - R) While Conveyor Initial With Reject
									eStatus		:= Error;
									
								ELSE
									IF p_bRightSen = TRUE THEN
										bLmtSenActivated	:= TRUE;
										eStatus				:= Done;
									ELSIF p_bMiddleSen = TRUE THEN
										usiStep	:= 3;
									ELSE
										eStatus	:= Done;
									END_IF
									
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE AND p_bMiddleSen = FALSE THEN
									udiStatus	:= 10081;	//Board Not Present At Outlet Or Middle Sensor (R - L) While Conveyor Initial With Reject
									eStatus		:= Error;
									
								ELSE
									IF p_bLeftSen = TRUE THEN
										bLmtSenActivated	:= TRUE;
										eStatus				:= Done;
									ELSIF p_bMiddleSen = TRUE THEN
										usiStep	:= 3;
									ELSE
										eStatus	:= Done;
									END_IF
									
								END_IF
							END_IF
					
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
						
					3: 	//Reject Up
						bRejectUpCtrl	:= TRUE;
						bRejectDownCtrl	:= FALSE;
				
						fbRejectUpChk.bExtSen		:= p_bRejectUpSen;
						fbRejectUpChk.bRetSen		:= p_bRejectDownSen;
						fbRejectUpChk.bExtSafety	:= p_bRejectUpSafetySen;
						fbRejectUpChk(bEn := TRUE);
						
						IF fbRejectUpChk.udiStatus = 0 THEN
							bRejectAtUp	:= TRUE;
							bRejHvBrd	:= TRUE;
							bHvBrd		:= FALSE;
							eStatus		:= Done;
						ELSIF fbRejectUpChk.udiStatus < 65534 THEN	
							bRejectUpCtrl	:= FALSE;
							bRejectDownCtrl	:= FALSE;
					
							eStatus			:= Error;
						
							IF fbRejectUpChk.udiStatus = 1503 THEN
								udiStatus	:= 10082;	//Reject Up Sensor On Time Out In Up Check While Conveyor Initial With Reject
							ELSIF fbRejectUpChk.udiStatus = 1506 THEN
								udiStatus	:= 10083;	//Reject Down Sensor Off Time Out In Up Check While Conveyor Initial With Reject
							ELSIF fbRejectUpChk.udiStatus = 1507 THEN
								udiStatus	:= 10084;	//Reject Up Safety Sensor Error In Up Check While Conveyor Initial With Reject
							ELSE
								udiStatus	:= fbRejectUpChk.udiStatus;
							END_IF
						END_IF
					
					4: 	//Reject Up
						bRejectUpCtrl	:= TRUE;
						bRejectDownCtrl	:= FALSE;
				
						fbRejectUpChk.bExtSen		:= p_bRejectUpSen;
						fbRejectUpChk.bRetSen		:= p_bRejectDownSen;
						fbRejectUpChk.bExtSafety	:= p_bRejectUpSafetySen;
						fbRejectUpChk(bEn := TRUE);
						
						IF fbRejectUpChk.udiStatus = 0 THEN
							bRejectAtUp	:= TRUE;
							bRejHvBrd	:= TRUE;
							usiStep		:= 5;
						ELSIF fbRejectUpChk.udiStatus < 65534 THEN	
							bRejectUpCtrl	:= FALSE;
							bRejectDownCtrl	:= FALSE;
					
							eStatus			:= Error;
						
							IF fbRejectUpChk.udiStatus = 1503 THEN
								udiStatus	:= 10088;	//Reject Up Sensor On Time Out In Up Check While Conveyor Initial With Reject
							ELSIF fbRejectUpChk.udiStatus = 1506 THEN
								udiStatus	:= 10089;	//Reject Down Sensor Off Time Out In Up Check While Conveyor Initial With Reject
							ELSIF fbRejectUpChk.udiStatus = 1507 THEN
								udiStatus	:= 10090;	//Reject Up Safety Sensor Error In Up Check While Conveyor Initial With Reject
							ELSE
								udiStatus	:= fbRejectUpChk.udiStatus;
							END_IF
						END_IF
					
					5:	//Initial Run Conveyor
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10091;	//Multi Board Detected While Conveyor Initial With Reject
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen OR p_bMiddleSen THEN
							bHvBrd	:= TRUE;
							bGdBrd	:= p_bGdBrdInit;
						END_IF
				
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
				
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen;
						END_IF
				
						fbInit(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
				
						IF fbInit.udiStatus = 0 THEN
					
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE THEN
									udiStatus	:= 10092;	//Board Not Present At Outlet Sensor (L - R) While Conveyor Initial With Reject
									eStatus		:= Error;
								ELSE
									eStatus		:= Done;
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE THEN
									udiStatus	:= 10093;	//Board Not Present At Outlet Sensor (R - L) While Conveyor Initial With Reject
									eStatus		:= Error;
								ELSE
									eStatus		:= Done;
								END_IF
							END_IF
					
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
						
				END_CASE
				
			END_IF
			
		ConvActInitInsp:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					0:	//Reset
						bHvBrd		:= FALSE;
						bInspHvBrd	:= FALSE;
						usiStep		:= 1;
						
					1:	//Initial Run Conveyor
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10085;	//Multi Board Detected While Conveyor Initial With Inspection
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen OR p_bMiddleSen THEN
							bHvBrd	:= TRUE;
							bGdBrd	:= p_bGdBrdInit;
						END_IF
				
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
				
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen OR p_bMiddleSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen OR p_bMiddleSen;
						END_IF
				
						fbInit(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
				
						IF fbInit.udiStatus = 0 THEN
					
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE AND p_bMiddleSen = FALSE THEN
									udiStatus	:= 10086;	//Board Not Present At Outlet Or Middle Sensor (L - R) While Conveyor Initial With Inspection
									eStatus		:= Error;
									
								ELSE
									IF p_bRightSen = TRUE THEN
										bLmtSenActivated	:= TRUE;
										eStatus				:= Done;
									ELSIF p_bMiddleSen = TRUE THEN
										bInspHvBrd	:= TRUE;
										eStatus		:= Done;
									ELSE
										eStatus	:= Done;
									END_IF
									
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE AND p_bMiddleSen = FALSE THEN
									udiStatus	:= 10087;	//Board Not Present At Outlet Or Middle Sensor (R - L) While Conveyor Initial With Inspection
									eStatus		:= Error;
									
								ELSE
									IF p_bLeftSen = TRUE THEN
										bLmtSenActivated	:= TRUE;
										eStatus				:= Done;
									ELSIF p_bMiddleSen = TRUE THEN
										bInspHvBrd	:= TRUE;
										eStatus		:= Done;
									ELSE
										eStatus	:= Done;
									END_IF
									
								END_IF
							END_IF
					
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
				
				END_CASE
				
			END_IF
			
		ConvActEnt:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;
					
					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10021;	//Multi Board Detected While Conveyor Enter Board
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
				
				//Detect Have Board
				IF p_bLeftSen OR p_bRightSen THEN
					bHvBrd	:= TRUE;
				END_IF
				
				//Good Board Status
				bGdBrd	:= p_bGdBrdEnt;
				
				//Conveyor Run
				fbEnt.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
				fbEnt.tTimeOut		:= DINT_TO_TIME(p_diTxInTimeOut);
				
				IF fbEnt.bConvLToR = TRUE THEN
					fbEnt.bEndSen	:= p_bRightSen;
				ELSE
					fbEnt.bEndSen	:= p_bLeftSen;
				END_IF
				
				fbEnt(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbEnt.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbEnt.bMtrDirOrRToL;
				
				IF fbEnt.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbEnt.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbEnt.udiStatus = 1101 THEN
						udiStatus	:= 10114;	//Transfer In Time Out While Conveyor Enter Board
					ELSE
						udiStatus	:= fbEnt.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ConvActEntToInOff:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;
					
					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10123;	//Multi Board Detected While Conveyor Enter Board To Inlet Off
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
				
				//Detect Have Board
				IF p_bLeftSen OR p_bRightSen THEN
					bHvBrd	:= TRUE;
				END_IF
				
				//Good Board Status
				bGdBrd	:= p_bGdBrdEnt;
				
				//Conveyor Run
				fbEnt.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
				fbEnt.tTimeOut		:= DINT_TO_TIME(p_diTxInTimeOut);
				
				IF fbEnt.bConvLToR = TRUE THEN
					IF EDGENEG(p_bLeftSen) THEN
						bInletOff	:= TRUE;
					END_IF
					
					fbEnt.bEndSen	:= p_bRightSen OR bInletOff;
				ELSE
					IF EDGENEG(p_bRightSen) THEN
						bInletOff	:= TRUE;
					END_IF
					
					fbEnt.bEndSen	:= p_bLeftSen OR bInletOff;
				END_IF
				
				fbEnt(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbEnt.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbEnt.bMtrDirOrRToL;
				
				IF fbEnt.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbEnt.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbEnt.udiStatus = 1101 THEN
						udiStatus	:= 10124;	//Transfer In Time Out While Conveyor Enter Board To Inlet Off
					ELSE
						udiStatus	:= fbEnt.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ConvActEntRev:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF 
					0:	//Enter
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10022;	//Multi Board Detected While Conveyor Enter Board With Reverse
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen THEN
							bHvBrd	:= TRUE;
						END_IF
				
						//Good Board Status
						bGdBrd	:= p_bGdBrdEnt;
				
						//Conveyor Run
						fbEnt.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbEnt.tTimeOut		:= DINT_TO_TIME(p_diTxInTimeOut);
				
						IF fbEnt.bConvLToR = TRUE THEN
							fbEnt.bEndSen	:= p_bRightSen;
						ELSE
							fbEnt.bEndSen	:= p_bLeftSen;
						END_IF
				
						fbEnt(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbEnt.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbEnt.bMtrDirOrRToL;
				
						IF fbEnt.udiStatus = 0 THEN
							usiStep		:= 1;
						ELSIF fbEnt.udiStatus < 65534 THEN
							eStatus		:= Error;
					
							IF fbEnt.udiStatus = 1101 THEN
								udiStatus	:= 10115;	//Transfer In Time Out While Conveyor Enter Board With Reverse
							ELSE
								udiStatus	:= fbEnt.udiStatus;
							END_IF
						END_IF
						
					1:	
						IF bHvBrd = TRUE THEN
							usiStep		:= 2;
						ELSE	
							eStatus		:= Done;
						END_IF	
							
					2:	//Delay
						fbWaitTm(IN := TRUE , PT := T#500ms);
					
						IF fbWaitTm.Q = TRUE THEN
							fbWaitTm(IN := FALSE);
							
							usiStep	:= 3;
						END_IF	
							
					3:	//Reverse
						//Conveyor Run
						fbRev.bConvLToR		:= (p_eDirection = ConvDirRToL) OR (p_eDirection = ConvDirRToR);
					
						IF fbRev.bConvLToR = TRUE THEN
							fbRev.bStartSen	:= p_bLeftSen;
							fbRev.bEndSen	:= p_bRightSen;
						ELSE	
							fbRev.bStartSen	:= p_bRightSen;
							fbRev.bEndSen	:= p_bLeftSen;
						END_IF	
				
						fbRev(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbRev.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbRev.bMtrDirOrRToL;
				
						IF fbRev.udiStatus = 0 THEN
							eStatus		:= Done;
						ELSIF fbRev.udiStatus < 65534 THEN	
							udiStatus	:= fbRev.udiStatus;
							eStatus		:= Error;
						END_IF	
					
				END_CASE	
			END_IF	
			
		ConvActRev:	
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Conveyor Run
				fbRev.bConvLToR		:= (p_eDirection = ConvDirRToL) OR (p_eDirection = ConvDirRToR);
					
				IF fbRev.bConvLToR = TRUE THEN
					fbRev.bStartSen	:= p_bLeftSen;
					fbRev.bEndSen	:= p_bRightSen;
				ELSE	
					fbRev.bStartSen	:= p_bRightSen;
					fbRev.bEndSen	:= p_bLeftSen;
				END_IF	
				
				fbRev(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbRev.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbRev.bMtrDirOrRToL;
				
				IF fbRev.udiStatus = 0 THEN
					eStatus		:= Done;
				ELSIF fbRev.udiStatus < 65534 THEN	
					udiStatus	:= fbRev.udiStatus;
					eStatus		:= Error;
				END_IF	
				
			END_IF	
			
		ConvActRevImmedStart:	
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Conveyor Run
				fbRev.bStartSen		:= TRUE;
				fbRev.bConvLToR		:= (p_eDirection = ConvDirRToL) OR (p_eDirection = ConvDirRToR);
					
				IF fbRev.bConvLToR = TRUE THEN
					fbRev.bEndSen	:= p_bRightSen;
				ELSE	
					fbRev.bEndSen	:= p_bLeftSen;
				END_IF	
				
				fbRev(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbRev.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbRev.bMtrDirOrRToL;
				
				IF fbRev.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbRev.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbRev.udiStatus = 1101 THEN
						udiStatus	:= 10125;	//Transfer In Time Out While Conveyor Reversing Board
					ELSE
						udiStatus	:= fbRev.udiStatus;
					END_IF
				END_IF
				
			END_IF	
			
		ConvActEntPuller:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					0: //Puller Extend
						bPullerExtCtrl	:= TRUE;
						bPullerRetCtrl	:= FALSE;
					
						fbPullerExtChk.bExtSen		:= p_bPullerExtSen;
						fbPullerExtChk.bRetSen		:= p_bPullerRetSen;
						fbPullerExtChk.bExtSafety	:= p_bPullerExtSafetySen;
						fbPullerExtChk(bEn := TRUE);
						
						IF fbPullerExtChk.udiStatus = 0 THEN
							bPullerExtended	:= TRUE;
							usiStep			:= 1;
						ELSIF fbPullerExtChk.udiStatus < 65534 THEN	
							bPullerExtCtrl	:= FALSE;
							bPullerRetCtrl	:= TRUE;
									
							eStatus			:= Error;
						
							IF fbPullerExtChk.udiStatus = 1503 THEN
								udiStatus	:= 10023;	//Puller Extend Sensor On Time Out In Extend Check While Conveyor Enter With Puller
							ELSIF fbPullerExtChk.udiStatus = 1506 THEN
								udiStatus	:= 10024;	//Puller Retract Sensor Off Time Out In Extend Check While Conveyor Enter With Puller
							ELSIF fbPullerExtChk.udiStatus = 1507 THEN
								udiStatus	:= 10025;	//Puller Extend Safety Sensor Error In Extend Check While Conveyor Enter With Puller
							ELSE
								udiStatus	:= fbPullerExtChk.udiStatus;
							END_IF
						END_IF	
					
					1: //Rotate Remote
						bRotRemoteCtrl	:= TRUE;
					
						fbRotRemoteChk.bExtSen		:= p_bRotHomeSen;
						fbRotRemoteChk.bRetSen		:= p_bRotRemoteSen;
						fbRotRemoteChk.bRetSafety	:= p_bRotRemoteSafetySen;
						fbRotRemoteChk(bEn := TRUE);
						
						IF fbRotRemoteChk.udiStatus = 0 THEN
							bRotAtRemote	:= TRUE;
							usiStep			:= 2;
						ELSIF fbRotRemoteChk.udiStatus < 65534 THEN	
							bRotRemoteCtrl	:= FALSE;
							
							eStatus			:= Error;
							
							IF fbRotRemoteChk.udiStatus = 1504 THEN
								udiStatus	:= 10026;	//Rotator Home Sensor Off Time Out In Remote Check While Conveyor Enter With Puller
							ELSIF fbRotRemoteChk.udiStatus = 1505 THEN
								udiStatus	:= 10027;	//Rotator Remote Sensor On Time Out In Remote Check While Conveyor Enter With Puller
							ELSIF fbRotRemoteChk.udiStatus = 1508 THEN
								udiStatus	:= 10028;	//Rotator Remote Safety Sensor Error In Remote Check While Conveyor Enter With Puller
							ELSE
								udiStatus	:= fbRotRemoteChk.udiStatus;
							END_IF
						END_IF	
					
					2: //Puller Retract
						bPullerExtCtrl	:= FALSE;
						bPullerRetCtrl	:= TRUE;
					
						fbPullerRetChk.bExtSen		:= p_bPullerExtSen;
						fbPullerRetChk.bRetSen		:= p_bPullerRetSen;
						fbPullerRetChk.bRetSafety	:= p_bPullerRetSafetySen;
						fbPullerRetChk(bEn := TRUE);
					
						IF fbPullerRetChk.udiStatus = 0 THEN
							bPullerRetracted	:= TRUE;
							usiStep				:= 3;
						ELSIF fbPullerRetChk.udiStatus < 65534 THEN
							bPullerExtCtrl	:= TRUE;
							bPullerRetCtrl	:= FALSE;
							
							eStatus			:= Error;
							
							IF fbPullerRetChk.udiStatus = 1504 THEN
								udiStatus	:= 10029;	//Puller Extend Sensor Off Time Out In Retract Check While Conveyor Enter With Puller
							ELSIF fbPullerRetChk.udiStatus = 1505 THEN
								udiStatus	:= 10030;	//Puller Retract Sensor On Time Out In Retract Check While Conveyor Enter With Puller
							ELSIF fbPullerRetChk.udiStatus = 1508 THEN
								udiStatus	:= 10031;	//Puller Retract Safety Sensor Error In Retract Check While Conveyor Enter With Puller
							ELSE
								udiStatus	:= fbPullerRetChk.udiStatus;
							END_IF
						END_IF	
							
					3: //Rotate Home
						bRotRemoteCtrl	:= FALSE;
					
						fbRotHomeChk.bExtSen	:= p_bRotHomeSen;
						fbRotHomeChk.bRetSen	:= p_bRotRemoteSen;
						fbRotHomeChk.bExtSafety	:= p_bRotHomeSafetySen;
						fbRotHomeChk(bEn := TRUE);
						
						IF fbRotHomeChk.udiStatus = 0 AND fbEnt.udiStatus = 0 THEN
							bRotAtHome	:= TRUE;
							eStatus		:= Done;
						ELSIF fbRotHomeChk.udiStatus < 65534 AND fbRotHomeChk.udiStatus > 0 THEN	
							bRotRemoteCtrl	:= TRUE;
							
							eStatus			:= Error;
							
							IF fbRotHomeChk.udiStatus = 1503 THEN
								udiStatus	:= 10032;	//Rotator Home Sensor On Time Out In Home Check While Conveyor Enter With Puller
							ELSIF fbRotHomeChk.udiStatus = 1506 THEN
								udiStatus	:= 10033;	//Rotator Remote Sensor Off Time Out In Home Check While Conveyor Enter With Puller
							ELSIF fbRotHomeChk.udiStatus = 1507 THEN
								udiStatus	:= 10034;	//Rotator Home Safety Sensor Error In Home Check While Conveyor Enter With Puller
							ELSE
								udiStatus	:= fbRotHomeChk.udiStatus;
							END_IF
						END_IF	
				END_CASE
				
				IF usiStep >= 2 THEN
					//Conveyor Run
					//Long Board Detection
					IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
						fbLongBrd.bSen1	:= p_bLeftSen;
						fbLongBrd.bSen2	:= p_bRightSen;
						fbLongBrd;
						
						IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
							eStatus		:= Error;
							IF fbLongBrd.udiStatus = 1100 THEN
								udiStatus	:= 10035;	//Multi Board Detected While Conveyor Enter With Puller
							ELSE
								udiStatus	:= fbLongBrd.udiStatus;
							END_IF
						END_IF
					END_IF
					
					//Detect Have Board
					IF p_bLeftSen OR p_bRightSen THEN
						bHvBrd	:= TRUE;
					END_IF
					
					//Good Board Status
					bGdBrd	:= p_bGdBrdEnt;
					
					//Conveyor Run
					fbEnt.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
					fbEnt.tTimeOut		:= DINT_TO_TIME(p_diTxInTimeOut);
					
					IF fbEnt.bConvLToR = TRUE THEN
						fbEnt.bEndSen	:= p_bRightSen;
					ELSE
						fbEnt.bEndSen	:= p_bLeftSen;
					END_IF
					
					fbEnt(bEn := TRUE);
					
					bMtrSigOnOrLToR	:= fbEnt.bMtrSigOnOrLToR;
					bMtrDirOrRToL	:= fbEnt.bMtrDirOrRToL;
					
					IF fbEnt.udiStatus < 65534 AND fbEnt.udiStatus > 0 THEN
						eStatus		:= Error;
					
						IF fbEnt.udiStatus = 1101 THEN
							udiStatus	:= 10116;	//Transfer In Time Out While Conveyor Enter With Puller
						ELSE
							udiStatus	:= fbEnt.udiStatus;
						END_IF
					END_IF
				END_IF
			END_IF
			
		ConvActEntRej:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				CASE usiStep OF
					0:	//Initial Run Conveyor
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
					
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus		:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10094;	//Multi Board Detected While Conveyor Entering With Reject
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
				
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen OR p_bMiddleSen THEN
							bHvBrd	:= TRUE;
						END_IF
				
						//Conveyor Run
						fbEnt.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbEnt.tTimeOut		:= DINT_TO_TIME(p_diTxInTimeOut);
				
						bGdBrd	:= p_bGdBrdEnt;
						
						IF fbEnt.bConvLToR = TRUE THEN
							fbEnt.bEndSen	:= p_bRightSen OR p_bMiddleSen;
						ELSE
							fbEnt.bEndSen	:= p_bLeftSen OR p_bMiddleSen;
						END_IF
				
						fbEnt(bEn := TRUE);
				
						bMtrSigOnOrLToR	:= fbEnt.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbEnt.bMtrDirOrRToL;
				
						IF fbEnt.udiStatus = 0 THEN
					
							IF fbEnt.bConvLToR = TRUE THEN
								IF p_bRightSen = TRUE THEN
									bLmtSenActivated	:= TRUE;
									eStatus				:= Done;
								ELSE
									usiStep	:= 1;
								END_IF
								
							ELSE
								IF p_bLeftSen = TRUE THEN
									bLmtSenActivated	:= TRUE;
									eStatus				:= Done;
								ELSE
									usiStep	:= 1;

								END_IF
							END_IF
					
						ELSIF fbEnt.udiStatus < 65534 THEN
							eStatus		:= Error;
					
							IF fbEnt.udiStatus = 1101 THEN
								udiStatus	:= 10117;	//Transfer In Time Out While Conveyor Entering With Reject
							ELSE
								udiStatus	:= fbEnt.udiStatus;
							END_IF
						END_IF
						
					1: 	//Reject Up
						bRejectUpCtrl	:= TRUE;
						bRejectDownCtrl	:= FALSE;
				
						fbRejectUpChk.bExtSen		:= p_bRejectUpSen;
						fbRejectUpChk.bRetSen		:= p_bRejectDownSen;
						fbRejectUpChk.bExtSafety	:= p_bRejectUpSafetySen;
						fbRejectUpChk(bEn := TRUE);
						
						IF fbRejectUpChk.udiStatus = 0 THEN
							bRejectAtUp	:= TRUE;
							bRejHvBrd	:= TRUE;
							bHvBrd		:= FALSE;
							eStatus		:= Done;
						ELSIF fbRejectUpChk.udiStatus < 65534 THEN	
							bRejectUpCtrl	:= FALSE;
							bRejectDownCtrl	:= FALSE;
					
							eStatus			:= Error;
						
							IF fbRejectUpChk.udiStatus = 1503 THEN
								udiStatus	:= 10095;	//Reject Up Sensor On Time Out In Up Check While Conveyor Entering With Reject
							ELSIF fbRejectUpChk.udiStatus = 1506 THEN
								udiStatus	:= 10096;	//Reject Down Sensor Off Time Out In Up Check While Conveyor Entering With Reject
							ELSIF fbRejectUpChk.udiStatus = 1507 THEN
								udiStatus	:= 10097;	//Reject Up Safety Sensor Error In Up Check While Conveyor Entering With Reject
							ELSE
								udiStatus	:= fbRejectUpChk.udiStatus;
							END_IF
						END_IF
				END_CASE
				
			END_IF
		
		ConvActEntInsp:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;
			
					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10098;	//Multi Board Detected While Conveyor Entering With Inspection
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
		
				//Detect Have Board
				IF p_bLeftSen OR p_bRightSen OR p_bMiddleSen THEN
					bHvBrd	:= TRUE;
				END_IF
		
				//Conveyor Run
				fbEnt.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
				fbEnt.tTimeOut		:= DINT_TO_TIME(p_diTxInTimeOut);
		
				bGdBrd	:= p_bGdBrdEnt;
				
				IF fbEnt.bConvLToR = TRUE THEN
					fbEnt.bEndSen	:= p_bRightSen OR p_bMiddleSen;
				ELSE
					fbEnt.bEndSen	:= p_bLeftSen OR p_bMiddleSen;
				END_IF
		
				fbEnt(bEn := TRUE);
		
				bMtrSigOnOrLToR	:= fbEnt.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbEnt.bMtrDirOrRToL;
		
				IF fbEnt.udiStatus = 0 THEN
			
					IF fbEnt.bConvLToR = TRUE THEN
						IF p_bRightSen = TRUE THEN
							bLmtSenActivated	:= TRUE;
						END_IF
						
						eStatus	:= Done;
						
					ELSE
						IF p_bLeftSen = TRUE THEN
							bLmtSenActivated	:= TRUE;
						END_IF
						
						eStatus	:= Done;
						
					END_IF
			
				ELSIF fbEnt.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbEnt.udiStatus = 1101 THEN
						udiStatus	:= 10118;	//Transfer In Time Out While Conveyor Entering With Inspection
					ELSE
						udiStatus	:= fbEnt.udiStatus;
					END_IF
				END_IF
					
			END_IF
		
		ConvActPreExit:
			IF eStatus = Idle OR eStatus = Busy THEN

				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;

					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10036;	//Multi Board Detected While Conveyor Pre-Exit Board
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
				
				//Conveyor Run
				fbPreExit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
				fbPreExit.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirRToR);
				
				IF fbPreExit.bConvLToR = TRUE THEN
					fbPreExit.bEndSen	:= p_bRightSen;
				ELSE
					fbPreExit.bEndSen	:= p_bLeftSen;
				END_IF
				
				fbPreExit(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbPreExit.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbPreExit.bMtrDirOrRToL;
				
				IF fbPreExit.udiStatus = 0 THEN
					IF fbPreExit.bEndSen = TRUE THEN
						eStatus	:= Done;
					ELSE
						udiStatus	:= 10037;	//Board Missing While Conveyor Pre-Exit Board
						eStatus		:= Error;
					END_IF
				ELSIF fbPreExit.udiStatus < 65534 THEN
					udiStatus	:= fbPreExit.udiStatus;
					eStatus		:= Error;
				END_IF
				
			END_IF
			
		ConvActRejResume:
			IF eStatus = Idle OR eStatus = Busy THEN
			
				eStatus	:= Busy;
		
				CASE usiStep OF
					0:	//Check Condition
						IF p_bRejectDownSen = FALSE AND p_bMiddleSen = TRUE THEN
							eStatus		:= Error;
							udiStatus	:= 10099;	//Board Detect In Middle Sensor While Resuming Rejected Board
						ELSE
							usiStep	:= 1;
						END_IF
					
					1:	//Reject Down
						bRejectUpCtrl	:= FALSE;
						bRejectDownCtrl	:= TRUE;
				
						fbRejectDownChk.bExtSen		:= p_bRejectUpSen;
						fbRejectDownChk.bRetSen		:= p_bRejectDownSen;
						fbRejectDownChk.bRetSafety	:= p_bRejectDownSafetySen;
						fbRejectDownChk(bEn := TRUE);
				
						IF fbRejectDownChk.udiStatus = 0 THEN
							usiStep	:= 2;
						ELSIF fbRejectDownChk.udiStatus < 65534 THEN
							bRejectUpCtrl	:= FALSE;
							bRejectDownCtrl	:= FALSE;
					
							eStatus			:= Error;
							
							IF fbRejectDownChk.udiStatus = 1504 THEN
								udiStatus	:= 10100;	//Reject Up Sensor Off Time Out In Down Check While Resuming Rejected Board
							ELSIF fbRejectDownChk.udiStatus = 1505 THEN
								udiStatus	:= 10101;	//Reject Down Sensor On Time Out In Down Check While Resuming Rejected Board
							ELSIF fbRejectDownChk.udiStatus = 1508 THEN
								udiStatus	:= 10102;	//Reject Down Safety Sensor Error In Down Check While Resuming Rejected Board
							ELSE
								udiStatus	:= fbRejectDownChk.udiStatus;
							END_IF
						END_IF
					
					2:	//Reset
						bRejHvBrd	:= FALSE;
						bHvBrd		:= FALSE;
						usiStep		:= 3;
						
					3:	//Conveyor Run
						//Long Board Detection
						IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
							fbLongBrd.bSen1	:= p_bLeftSen;
							fbLongBrd.bSen2	:= p_bRightSen;
							fbLongBrd;
							
							IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
								eStatus	:= Error;
								IF fbLongBrd.udiStatus = 1100 THEN
									udiStatus	:= 10103;	//Multi Board Detected While Resuming Rejected Board
								ELSE
									udiStatus	:= fbLongBrd.udiStatus;
								END_IF
							END_IF
						END_IF
						
						//Detect Have Board
						IF p_bLeftSen OR p_bRightSen OR p_bMiddleSen THEN
							bHvBrd	:= TRUE;
						END_IF
						
						//Conveyor Run
						fbInit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirLToL);
						fbInit.tTxDlyTm		:= DINT_TO_TIME(p_diInitTm);
						
						IF fbInit.bConvLToR = TRUE THEN
							fbInit.bEndSen	:= p_bRightSen;
						ELSE
							fbInit.bEndSen	:= p_bLeftSen;
						END_IF
						
						fbInit(bEn := TRUE);
						
						bMtrSigOnOrLToR	:= fbInit.bMtrSigOnOrLToR;
						bMtrDirOrRToL	:= fbInit.bMtrDirOrRToL;
						
						IF fbInit.udiStatus = 0 THEN
							
							IF fbInit.bConvLToR = TRUE THEN
								IF bHvBrd = TRUE AND p_bRightSen = FALSE THEN
									udiStatus	:= 10104;	//Board Not Present At Outlet Sensor (L - R) While Resuming Rejected Board
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							ELSE
								IF bHvBrd = TRUE AND p_bLeftSen = FALSE THEN
									udiStatus	:= 10105;	//Board Not Present At Outlet Sensor (R - L) While Resuming Rejected Board
									eStatus		:= Error;
								ELSE
									eStatus	:= Done;
								END_IF
							END_IF
							
						ELSIF fbInit.udiStatus < 65534 THEN
							udiStatus	:= fbInit.udiStatus;
							eStatus		:= Error;
						END_IF
						
				END_CASE
				
			END_IF
		
		ConvActExit:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;
					
					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10038;	//Multi Board Detected While Conveyor Exit Board
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
				
				//Conveyor Run
				fbExit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirRToR);
				fbExit.tTimeOut		:= DINT_TO_TIME(p_diTxOutTimeOut);
				
				IF fbExit.bConvLToR = TRUE THEN
					fbExit.bEndSen	:= p_bRightSen;
				ELSE
					fbExit.bEndSen	:= p_bLeftSen;
				END_IF
				
				fbExit(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbExit.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbExit.bMtrDirOrRToL;
				
				IF fbExit.udiStatus = 0 THEN
					bHvBrd	:= FALSE;	//Reset Have Board
					eStatus	:= Done;
				ELSIF fbExit.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbExit.udiStatus = 1101 THEN
						udiStatus	:= 10119;	//Transfer Out Time Out While Conveyor Exit Board
					ELSE
						udiStatus	:= fbExit.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ConvActExit1:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;
					
					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10106;	//Multi Board Detected While Conveyor Exit Board
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
				
				//Conveyor Run
				fbExit1.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirRToR);
				fbExit1.tTimeOut		:= DINT_TO_TIME(p_diTxOutTimeOut);
				
				IF fbExit1.bConvLToR = TRUE THEN
					fbExit1.bEndSen	:= p_bRightSen;
				ELSE
					fbExit1.bEndSen	:= p_bLeftSen;
				END_IF
				
				fbExit1(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbExit1.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbExit1.bMtrDirOrRToL;
				
				IF fbExit1.udiStatus = 0 THEN
					bHvBrd	:= FALSE;	//Reset Have Board
					eStatus	:= Done;
				ELSIF fbExit1.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbExit1.udiStatus = 1101 THEN
						udiStatus	:= 10121;	//Transfer Out Time Out While Conveyor Exit Board
					ELSE
						udiStatus	:= fbExit1.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ConvActExitPshr:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;
					
					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10039;	//Multi Board Detected While Conveyor Exit Board With Pusher
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
				
				//Conveyor Run
				fbExit.bConvLToR	:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirRToR);
				fbExit.tTimeOut		:= DINT_TO_TIME(p_diTxOutTimeOut);
				
				IF fbExit.bConvLToR = TRUE THEN
					fbExit.bEndSen	:= p_bRightSen;
				ELSE
					fbExit.bEndSen	:= p_bLeftSen;
				END_IF
				
				fbExit(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbExit.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbExit.bMtrDirOrRToL;
				
				IF fbExit.udiStatus < 65534 AND fbExit.udiStatus > 0 THEN
					eStatus		:= Error;
					
					IF fbExit.udiStatus = 1101 THEN
						udiStatus	:= 10120;	//Transfer Out Time Out While Conveyor Exit Board With Pusher
					ELSE
						udiStatus	:= fbExit.udiStatus;
					END_IF
				END_IF
				
				//Wait for 1s After Conveyor Running, then to Extend Pusher
				IF p_bMiddleSen = FALSE THEN
					fbWaitTm(IN := TRUE , PT := T#1s);
				END_IF
					
				IF fbWaitTm.Q = TRUE THEN
					CASE usiStep OF
						0: 
							bPshrExtCtrl	:= TRUE;
				
							fbPshrExtChk.bExtSen	:= p_bPshrExtSen;
							fbPshrExtChk.bRetSen	:= p_bPshrRetSen;
							fbPshrExtChk.bExtSafety	:= p_bPshrExtSafetySen;
							fbPshrExtChk(bEn := TRUE);
						
							IF fbPshrExtChk.udiStatus = 0 THEN
								bPshrExtended	:= TRUE;
								bHvBrd			:= FALSE;	//Reset Have Board
								usiStep			:= 1;
							ELSIF fbPshrExtChk.udiStatus < 65534 THEN	
								bPshrExtCtrl	:= FALSE;
					
								eStatus			:= Error;
						
								IF fbPshrExtChk.udiStatus = 1503 THEN
									udiStatus	:= 10040;	//Pusher Extend Sensor On Time Out In Extend Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrExtChk.udiStatus = 1506 THEN
									udiStatus	:= 10041;	//Pusher Retract Sensor Off Time Out In Extend Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrExtChk.udiStatus = 1507 THEN
									udiStatus	:= 10042;	//Pusher Extend Safety Sensor Error In Extend Check While Conveyor Exit Board With Pusher
								ELSE
									udiStatus	:= fbPshrExtChk.udiStatus;
								END_IF
							END_IF
						
						1:
							bPshrExtCtrl	:= FALSE;
				
							fbPshrRetChk.bExtSen	:= p_bPshrExtSen;
							fbPshrRetChk.bRetSen	:= p_bPshrRetSen;
							fbPshrRetChk.bRetSafety	:= p_bPshrRetSafetySen;
							fbPshrRetChk(bEn := TRUE);
				
							IF fbPshrRetChk.udiStatus = 0 AND fbExit.udiStatus = 0 THEN
								bPshrRetracted	:= TRUE;
								eStatus			:= Done;
							ELSIF fbPshrRetChk.udiStatus < 65534 AND fbPshrRetChk.udiStatus > 0 THEN
								bPshrExtCtrl	:= TRUE;
					
								eStatus			:= Error;
							
								IF fbPshrRetChk.udiStatus = 1504 THEN
									udiStatus	:= 10043;	//Pusher Extend Sensor Off Time Out In Retract Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrRetChk.udiStatus = 1505 THEN
									udiStatus	:= 10044;	//Pusher Retract Sensor On Time Out In Retract Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrRetChk.udiStatus = 1508 THEN
									udiStatus	:= 10045;	//Pusher Retract Safety Sensor Error In Retract Check While Conveyor Exit Board With Pusher
								ELSE
									udiStatus	:= fbPshrRetChk.udiStatus;
								END_IF
							END_IF
					
					END_CASE	
				END_IF	
	
			END_IF
		
		ConvActExit1Pshr:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Long Board Detection
				IF p_bLongBrdPrep = FALSE OR p_bLongBrdEn = FALSE THEN
					fbLongBrd.bSen1	:= p_bLeftSen;
					fbLongBrd.bSen2	:= p_bRightSen;
					fbLongBrd;
					
					IF fbLongBrd.udiStatus > 0 AND fbLongBrd.udiStatus < 65534 THEN
						eStatus		:= Error;
						IF fbLongBrd.udiStatus = 1100 THEN
							udiStatus	:= 10107;	//Multi Board Detected While Conveyor Exit Board With Pusher
						ELSE
							udiStatus	:= fbLongBrd.udiStatus;
						END_IF
					END_IF
				END_IF
				
				//Conveyor Run
				fbExit1.bConvLToR		:= (p_eDirection = ConvDirLToR) OR (p_eDirection = ConvDirRToR);
				fbExit1.tTimeOut		:= DINT_TO_TIME(p_diTxOutTimeOut);
				
				IF fbExit1.bConvLToR = TRUE THEN
					fbExit1.bEndSen	:= p_bRightSen;
				ELSE
					fbExit1.bEndSen	:= p_bLeftSen;
				END_IF
				
				fbExit1(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbExit1.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbExit1.bMtrDirOrRToL;
				
				IF fbExit1.udiStatus < 65534 AND fbExit1.udiStatus > 0 THEN
					eStatus		:= Error;
					
					IF fbExit1.udiStatus = 1101 THEN
						udiStatus	:= 10122;	//Transfer Out Time Out While Conveyor Exit Board With Pusher
					ELSE
						udiStatus	:= fbExit1.udiStatus;
					END_IF
				END_IF
				
				//Wait for 1s After Conveyor Running, then to Extend Pusher
				IF p_bMiddleSen = FALSE THEN
					fbWaitTm(IN := TRUE , PT := T#1s);
				END_IF
					
				IF fbWaitTm.Q = TRUE THEN
					CASE usiStep OF
						0: 
							bPshrExtCtrl	:= TRUE;
				
							fbPshrExtChk.bExtSen	:= p_bPshrExtSen;
							fbPshrExtChk.bRetSen	:= p_bPshrRetSen;
							fbPshrExtChk.bExtSafety	:= p_bPshrExtSafetySen;
							fbPshrExtChk(bEn := TRUE);
						
							IF fbPshrExtChk.udiStatus = 0 THEN
								bPshrExtended	:= TRUE;
								bHvBrd			:= FALSE;	//Reset Have Board
								usiStep			:= 1;
							ELSIF fbPshrExtChk.udiStatus < 65534 THEN	
								bPshrExtCtrl	:= FALSE;
					
								eStatus			:= Error;
						
								IF fbPshrExtChk.udiStatus = 1503 THEN
									udiStatus	:= 10108;	//Pusher Extend Sensor On Time Out In Extend Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrExtChk.udiStatus = 1506 THEN
									udiStatus	:= 10109;	//Pusher Retract Sensor Off Time Out In Extend Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrExtChk.udiStatus = 1507 THEN
									udiStatus	:= 10110;	//Pusher Extend Safety Sensor Error In Extend Check While Conveyor Exit Board With Pusher
								ELSE
									udiStatus	:= fbPshrExtChk.udiStatus;
								END_IF
							END_IF
						
						1:
							bPshrExtCtrl	:= FALSE;
				
							fbPshrRetChk.bExtSen	:= p_bPshrExtSen;
							fbPshrRetChk.bRetSen	:= p_bPshrRetSen;
							fbPshrRetChk.bRetSafety	:= p_bPshrRetSafetySen;
							fbPshrRetChk(bEn := TRUE);
				
							IF fbPshrRetChk.udiStatus = 0 AND fbExit1.udiStatus = 0 THEN
								bPshrRetracted	:= TRUE;
								eStatus			:= Done;
							ELSIF fbPshrRetChk.udiStatus < 65534 AND fbPshrRetChk.udiStatus > 0 THEN
								bPshrExtCtrl	:= TRUE;
					
								eStatus			:= Error;
							
								IF fbPshrRetChk.udiStatus = 1504 THEN
									udiStatus	:= 10111;	//Pusher Extend Sensor Off Time Out In Retract Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrRetChk.udiStatus = 1505 THEN
									udiStatus	:= 10112;	//Pusher Retract Sensor On Time Out In Retract Check While Conveyor Exit Board With Pusher
								ELSIF fbPshrRetChk.udiStatus = 1508 THEN
									udiStatus	:= 10113;	//Pusher Retract Safety Sensor Error In Retract Check While Conveyor Exit Board With Pusher
								ELSE
									udiStatus	:= fbPshrRetChk.udiStatus;
								END_IF
							END_IF
					
					END_CASE	
				END_IF	
	
			END_IF
		
		ConvActPshrSetAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPshrExtCtrl	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPshrRstAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPshrExtCtrl	:= FALSE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPshrSetExt:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPshrExtCtrl	:= TRUE;
				bPshrExtended	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPshrSetRet:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPshrExtCtrl	:= FALSE;
				bPshrRetracted	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPshrExt:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPshrExtCtrl	:= TRUE;
				
				fbPshrExtChk.bExtSen	:= p_bPshrExtSen;
				fbPshrExtChk.bRetSen	:= p_bPshrRetSen;
				fbPshrExtChk.bExtSafety	:= p_bPshrExtSafetySen;
				fbPshrExtChk(bEn := TRUE);
						
				IF fbPshrExtChk.udiStatus = 0 THEN
					bPshrExtended	:= TRUE;
					eStatus			:= Done;
				ELSIF fbPshrExtChk.udiStatus < 65534 THEN	
					bPshrExtCtrl	:= FALSE;
					
					eStatus			:= Error;
						
					IF fbPshrExtChk.udiStatus = 1503 THEN
						udiStatus	:= 10046;	//Pusher Extend Sensor On Time Out In Extend Check While Pusher Extend
					ELSIF fbPshrExtChk.udiStatus = 1506 THEN
						udiStatus	:= 10047;	//Pusher Retract Sensor Off Time Out In Extend Check While Pusher Extend
					ELSIF fbPshrExtChk.udiStatus = 1507 THEN
						udiStatus	:= 10048;	//Pusher Extend Safety Sensor Error In Extend Check While Pusher Extend
					ELSE
						udiStatus	:= fbPshrExtChk.udiStatus;
					END_IF
				END_IF
			END_IF
			
		ConvActPshrRet:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPshrExtCtrl	:= FALSE;
				
				fbPshrRetChk.bExtSen	:= p_bPshrExtSen;
				fbPshrRetChk.bRetSen	:= p_bPshrRetSen;
				fbPshrRetChk.bRetSafety	:= p_bPshrRetSafetySen;
				fbPshrRetChk(bEn := TRUE);
				
				IF fbPshrRetChk.udiStatus = 0 THEN
					bPshrRetracted	:= TRUE;
					eStatus			:= Done;
				ELSIF fbPshrRetChk.udiStatus < 65534 THEN
					bPshrExtCtrl	:= TRUE;
					
					eStatus			:= Error;
							
					IF fbPshrRetChk.udiStatus = 1504 THEN
						udiStatus	:= 10049;	//Pusher Extend Sensor Off Time Out In Retract Check While Pusher Retract
					ELSIF fbPshrRetChk.udiStatus = 1505 THEN
						udiStatus	:= 10050;	//Pusher Retract Sensor On Time Out In Retract Check While Pusher Retract
					ELSIF fbPshrRetChk.udiStatus = 1508 THEN
						udiStatus	:= 10051;	//Pusher Retract Safety Sensor Error In Retract Check While Pusher Retract
					ELSE
						udiStatus	:= fbPshrRetChk.udiStatus;
					END_IF
				END_IF
			END_IF		
			
		ConvActPullerSetAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPullerExtCtrl	:= TRUE;
				bPullerRetCtrl	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPullerRstAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPullerExtCtrl	:= FALSE;
				bPullerRetCtrl	:= FALSE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPullerSetExt:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPullerExtCtrl	:= TRUE;
				bPullerRetCtrl	:= FALSE;
				bPullerExtended	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPullerSetRet:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPullerExtCtrl		:= FALSE;
				bPullerRetCtrl		:= TRUE;
				bPullerRetracted	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActPullerExt:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPullerExtCtrl	:= TRUE;
				bPullerRetCtrl	:= FALSE;
				
				fbPullerExtChk.bExtSen		:= p_bPullerExtSen;
				fbPullerExtChk.bRetSen		:= p_bPullerRetSen;
				fbPullerExtChk.bExtSafety	:= p_bPullerExtSafetySen;
				fbPullerExtChk(bEn := TRUE);
						
				IF fbPullerExtChk.udiStatus = 0 THEN
					bPullerExtended	:= TRUE;
					eStatus			:= Done;
				ELSIF fbPullerExtChk.udiStatus < 65534 THEN	
					bPullerExtCtrl	:= FALSE;
					bPullerRetCtrl	:= FALSE;
					
					eStatus			:= Error;
						
					IF fbPullerExtChk.udiStatus = 1503 THEN
						udiStatus	:= 10052;	//Puller Extend Sensor On Time Out In Extend Check While Puller Extend
					ELSIF fbPullerExtChk.udiStatus = 1506 THEN
						udiStatus	:= 10053;	//Puller Retract Sensor Off Time Out In Extend Check While Puller Extend
					ELSIF fbPullerExtChk.udiStatus = 1507 THEN
						udiStatus	:= 10054;	//Puller Extend Safety Sensor Error In Extend Check While Puller Extend
					ELSE
						udiStatus	:= fbPullerExtChk.udiStatus;
					END_IF
				END_IF
			END_IF
			
		ConvActPullerRet:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bPullerExtCtrl	:= FALSE;
				bPullerRetCtrl	:= TRUE;
				
				fbPullerRetChk.bExtSen		:= p_bPullerExtSen;
				fbPullerRetChk.bRetSen		:= p_bPullerRetSen;
				fbPullerRetChk.bRetSafety	:= p_bPullerRetSafetySen;
				fbPullerRetChk(bEn := TRUE);
				
				IF fbPullerRetChk.udiStatus = 0 THEN
					bPullerRetracted	:= TRUE;
					eStatus				:= Done;
				ELSIF fbPullerRetChk.udiStatus < 65534 THEN
					bPullerExtCtrl	:= FALSE;
					bPullerRetCtrl	:= FALSE;
					
					eStatus			:= Error;
							
					IF fbPullerRetChk.udiStatus = 1504 THEN
						udiStatus	:= 10055;	//Puller Extend Sensor Off Time Out In Retract Check While Puller Retract
					ELSIF fbPullerRetChk.udiStatus = 1505 THEN
						udiStatus	:= 10056;	//Puller Retract Sensor On Time Out In Retract Check While Puller Retract
					ELSIF fbPullerRetChk.udiStatus = 1508 THEN
						udiStatus	:= 10057;	//Puller Retract Safety Sensor Error In Retract Check While Puller Retract
					ELSE
						udiStatus	:= fbPullerRetChk.udiStatus;
					END_IF
				END_IF
			END_IF		
			
		ConvActRotSetAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRotRemoteCtrl	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRotRstAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRotRemoteCtrl	:= FALSE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRotSetHome:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRotRemoteCtrl	:= FALSE;
				bRotAtHome		:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRotSetRmt:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRotRemoteCtrl	:= TRUE;
				bRotAtRemote	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRotHome:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRotRemoteCtrl	:= FALSE;
				
				fbRotHomeChk.bExtSen	:= p_bRotHomeSen;
				fbRotHomeChk.bRetSen	:= p_bRotRemoteSen;
				fbRotHomeChk.bExtSafety	:= p_bRotHomeSafetySen;
				fbRotHomeChk(bEn := TRUE);
						
				IF fbRotHomeChk.udiStatus = 0 THEN
					bRotAtHome	:= TRUE;
					eStatus		:= Done;
				ELSIF fbRotHomeChk.udiStatus < 65534 THEN	
					bRotRemoteCtrl	:= TRUE;
					
					eStatus			:= Error;
							
					IF fbRotHomeChk.udiStatus = 1503 THEN
						udiStatus	:= 10058;	//Rotator Home Sensor On Time Out In Home Check While Rotator Home
					ELSIF fbRotHomeChk.udiStatus = 1506 THEN
						udiStatus	:= 10059;	//Rotator Remote Sensor Off Time Out In Home Check While Rotator Home
					ELSIF fbRotHomeChk.udiStatus = 1507 THEN
						udiStatus	:= 10060;	//Rotator Home Safety Sensor Error In Home Check While Rotator Home
					ELSE
						udiStatus	:= fbRotHomeChk.udiStatus;
					END_IF
				END_IF
			END_IF
			
		ConvActRotRemote:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRotRemoteCtrl	:= TRUE;
				
				fbRotRemoteChk.bExtSen		:= p_bRotHomeSen;
				fbRotRemoteChk.bRetSen		:= p_bRotRemoteSen;
				fbRotRemoteChk.bRetSafety	:= p_bRotRemoteSafetySen;
				fbRotRemoteChk(bEn := TRUE);
				
				IF fbRotRemoteChk.udiStatus = 0 THEN
					bRotAtRemote	:= TRUE;
					eStatus			:= Done;
				ELSIF fbRotRemoteChk.udiStatus < 65534 THEN
					bRotRemoteCtrl	:= FALSE;
					
					eStatus			:= Error;
							
					IF fbRotRemoteChk.udiStatus = 1504 THEN
						udiStatus	:= 10061;	//Rotator Home Sensor Off Time Out In Remote Check While Rotator Remote
					ELSIF fbRotRemoteChk.udiStatus = 1505 THEN
						udiStatus	:= 10062;	//Rotator Remote Sensor On Time Out In Remote Check While Rotator Remote
					ELSIF fbRotRemoteChk.udiStatus = 1508 THEN
						udiStatus	:= 10063;	//Rotator Remote Safety Sensor Error In Remote Check While Rotator Remote
					ELSE
						udiStatus	:= fbRotRemoteChk.udiStatus;
					END_IF
				END_IF
			END_IF		
			
		ConvActRejSetAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRejectUpCtrl	:= TRUE;
				bRejectDownCtrl	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRejRstAll:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRejectUpCtrl	:= FALSE;
				bRejectDownCtrl	:= FALSE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRejSetUp:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRejectUpCtrl	:= TRUE;
				bRejectDownCtrl	:= FALSE;
				bRejectAtUp		:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRejSetDown:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRejectUpCtrl	:= FALSE;
				bRejectDownCtrl	:= TRUE;
				bRejectAtDown	:= TRUE;
				
				eStatus		:= Done;

			END_IF
			
		ConvActRejUp:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRejectUpCtrl	:= TRUE;
				bRejectDownCtrl	:= FALSE;
				
				fbRejectUpChk.bExtSen		:= p_bRejectUpSen;
				fbRejectUpChk.bRetSen		:= p_bRejectDownSen;
				fbRejectUpChk.bExtSafety	:= p_bRejectUpSafetySen;
				fbRejectUpChk(bEn := TRUE);
						
				IF fbRejectUpChk.udiStatus = 0 THEN
					bRejectAtUp	:= TRUE;
					eStatus		:= Done;
				ELSIF fbRejectUpChk.udiStatus < 65534 THEN	
					bRejectUpCtrl	:= FALSE;
					bRejectDownCtrl	:= FALSE;
					
					eStatus			:= Error;
						
					IF fbRejectUpChk.udiStatus = 1503 THEN
						udiStatus	:= 10073;	//Reject Up Sensor On Time Out In Up Check While Reject Up
					ELSIF fbRejectUpChk.udiStatus = 1506 THEN
						udiStatus	:= 10074;	//Reject Down Sensor Off Time Out In Up Check While Reject Up
					ELSIF fbRejectUpChk.udiStatus = 1507 THEN
						udiStatus	:= 10075;	//Reject Up Safety Sensor Error In Up Check While Reject Up
					ELSE
						udiStatus	:= fbRejectUpChk.udiStatus;
					END_IF
				END_IF
			END_IF
			
		ConvActRejDown:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				
				
				bRejectUpCtrl	:= FALSE;
				bRejectDownCtrl	:= TRUE;
				
				fbRejectDownChk.bExtSen		:= p_bRejectUpSen;
				fbRejectDownChk.bRetSen		:= p_bRejectDownSen;
				fbRejectDownChk.bRetSafety	:= p_bRejectDownSafetySen;
				fbRejectDownChk(bEn := TRUE);
				
				IF fbRejectDownChk.udiStatus = 0 THEN
					bRejectAtDown	:= TRUE;
					eStatus			:= Done;
				ELSIF fbRejectDownChk.udiStatus < 65534 THEN
					bRejectUpCtrl	:= FALSE;
					bRejectDownCtrl	:= FALSE;
					
					eStatus			:= Error;
							
					IF fbRejectDownChk.udiStatus = 1504 THEN
						udiStatus	:= 10076;	//Reject Up Sensor Off Time Out In Down Check While Reject Down
					ELSIF fbRejectDownChk.udiStatus = 1505 THEN
						udiStatus	:= 10077;	//Reject Down Sensor On Time Out In Down Check While Reject Down
					ELSIF fbRejectDownChk.udiStatus = 1508 THEN
						udiStatus	:= 10078;	//Reject Down Safety Sensor Error In Down Check While Reject Down
					ELSE
						udiStatus	:= fbRejectDownChk.udiStatus;
					END_IF
				END_IF
			END_IF		
			
		ConvActStop:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Conveyor Run
				fbStop(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbStop.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbStop.bMtrDirOrRToL;
				
				IF fbStop.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbStop.udiStatus < 65534 THEN
					udiStatus	:= fbStop.udiStatus;
					eStatus		:= Error;
				END_IF
				
			END_IF
		
		ConvActStopPshr:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Conveyor Run
				fbStop(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbStop.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbStop.bMtrDirOrRToL;
				
				//Pneumatic Run
				bPshrExtCtrl	:= FALSE;
				
				fbPshrRetChk.bExtSen	:= p_bPshrExtSen;
				fbPshrRetChk.bRetSen	:= p_bPshrRetSen;
				fbPshrRetChk.bRetSafety	:= p_bPshrRetSafetySen;
				fbPshrRetChk(bEn := TRUE);
				
				IF fbStop.udiStatus = 0 AND fbPshrRetChk.udiStatus = 0 THEN
					bPshrRetracted	:= TRUE;
					eStatus			:= Done;
				ELSIF fbStop.udiStatus < 65534 AND fbStop.udiStatus > 0 THEN
					udiStatus	:= fbStop.udiStatus;
					eStatus		:= Error;
				ELSIF fbPshrRetChk.udiStatus < 65534 AND fbPshrRetChk.udiStatus > 0 THEN 
					bPshrExtCtrl	:= TRUE;
					
					eStatus			:= Error;
							
					IF fbPshrRetChk.udiStatus = 1504 THEN
						udiStatus	:= 10064;	//Pusher Extend Sensor Off Time Out In Retract Check While Stop With Pusher
					ELSIF fbPshrRetChk.udiStatus = 1505 THEN
						udiStatus	:= 10065;	//Pusher Retract Sensor On Time Out In Retract Check While Stop With Pusher
					ELSIF fbPshrRetChk.udiStatus = 1508 THEN
						udiStatus	:= 10066;	//Pusher Retract Safety Sensor Error In Retract Check While Stop With Pusher
					ELSE
						udiStatus	:= fbPshrRetChk.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ConvActStopPuller:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Conveyor Run
				fbStop(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbStop.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbStop.bMtrDirOrRToL;
				
				IF fbStop.udiStatus < 65534 AND fbStop.udiStatus > 0 THEN
					udiStatus	:= fbStop.udiStatus;
					eStatus		:= Error;
				END_IF
					
				CASE usiStep OF
					0: //Rotate Home
						bRotRemoteCtrl	:= FALSE;
				
						fbRotHomeChk.bExtSen	:= p_bRotHomeSen;
						fbRotHomeChk.bRetSen	:= p_bRotRemoteSen;
						fbRotHomeChk.bExtSafety	:= p_bRotHomeSafetySen;
						fbRotHomeChk(bEn := TRUE);
					
						IF fbRotHomeChk.udiStatus = 0 THEN
							bRotAtHome	:= TRUE;
							usiStep		:= 1;
						ELSIF fbRotHomeChk.udiStatus < 65534 THEN
							bRotRemoteCtrl	:= TRUE;
					
							eStatus			:= Error;
							
							IF fbRotHomeChk.udiStatus = 1503 THEN
								udiStatus	:= 10067;	//Rotator Home Sensor On Time Out In Home Check While Stop With Puller
							ELSIF fbRotHomeChk.udiStatus = 1506 THEN
								udiStatus	:= 10068;	//Rotator Remote Sensor Off Time Out In Home Check While Stop With Puller
							ELSIF fbRotHomeChk.udiStatus = 1507 THEN
								udiStatus	:= 10069;	//Rotator Home Safety Sensor Error In Home Check While Stop With Puller
							ELSE
								udiStatus	:= fbRotHomeChk.udiStatus;
							END_IF
						END_IF
					
					1: //Puller Retract
						bPullerExtCtrl	:= FALSE;
						bPullerRetCtrl	:= TRUE;
					
						fbPullerRetChk.bExtSen		:= p_bPullerExtSen;
						fbPullerRetChk.bRetSen		:= p_bPullerRetSen;
						fbPullerRetChk.bRetSafety	:= p_bPullerRetSafetySen;
						fbPullerRetChk(bEn := TRUE);
						
						IF fbPullerRetChk.udiStatus = 0 AND fbStop.udiStatus = 0 THEN
							bPullerRetracted	:= TRUE;
							eStatus				:= Done;
						ELSIF fbPullerRetChk.udiStatus < 65534 AND fbPullerRetChk.udiStatus > 0 THEN	
							bPullerExtCtrl	:= TRUE;
							bPullerRetCtrl	:= FALSE;
							
							eStatus			:= Error;
							
							IF fbPullerRetChk.udiStatus = 1504 THEN
								udiStatus	:= 10070;	//Puller Extend Sensor Off Time Out In Retract Check While Stop With Puller
							ELSIF fbPullerRetChk.udiStatus = 1505 THEN
								udiStatus	:= 10071;	//Puller Retract Sensor On Time Out In Retract Check While Stop With Puller
							ELSIF fbPullerRetChk.udiStatus = 1508 THEN
								udiStatus	:= 10072;	//Puller Retract Safety Sensor Error In Retract Check While Stop With Puller
							ELSE
								udiStatus	:= fbPullerRetChk.udiStatus;
							END_IF
						END_IF	
					
				END_CASE
				
			END_IF
	
		ConvActStopRej:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				//Conveyor Run
				fbStop(bEn := TRUE);
				
				bMtrSigOnOrLToR	:= fbStop.bMtrSigOnOrLToR;
				bMtrDirOrRToL	:= fbStop.bMtrDirOrRToL;
				
				//Pneumatic Run
				bRejectUpCtrl	:= FALSE;
				bRejectDownCtrl	:= FALSE;
				
				IF fbStop.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbStop.udiStatus < 65534 THEN
					udiStatus	:= fbStop.udiStatus;
					eStatus		:= Error;
				END_IF
				
			END_IF
		
		ConvActSetMtrSigOnOrLToR:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrSigOnOrLToR	:= TRUE;
				eStatus			:= Done;

			END_IF
		
		ConvActSetMtrDirOrRToL:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrDirOrRToL	:= TRUE;
				eStatus			:= Done;

			END_IF
		
		ConvActRstMtrSigOnOrLToR:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrSigOnOrLToR	:= FALSE;
				eStatus			:= Done;

			END_IF
		
		ConvActRstMtrDirOrRToL:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrDirOrRToL	:= FALSE;
				eStatus			:= Done;

			END_IF
		
		ConvActSetMtrAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrSigOnOrLToR	:= TRUE;
				bMtrDirOrRToL	:= TRUE;
				eStatus			:= Done;

			END_IF
		
		ConvActRstMtrAll:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				bMtrSigOnOrLToR	:= FALSE;
				bMtrDirOrRToL	:= FALSE;
				eStatus			:= Done;
				
			END_IF
		
	END_CASE
	
END_ACTION
