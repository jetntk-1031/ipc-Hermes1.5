(** 2020-05-26 **)
ACTION Act_Main:
	
	//Main
IF bModuleNotOK = FALSE THEN
		
		CASE eStat OF
			
			AWActIdle:
				IF eStatus <> Idle THEN	//Reset Data
					//Private
					fbStop(bEn := FALSE);
					fbRstAxisErr(bEn := FALSE);
					fbJog(bEn := FALSE);
					fbMovRel(bEn := FALSE);
					fbMovAbs(bEn := FALSE);
					fbHoming(bEn := FALSE);
					fbPwrOff(bEn := FALSE);
					fbPwrOn(bEn := FALSE);
					fbFullHm(bEn := FALSE);
					fbFullMovAbs(bEn := FALSE);
					fbFullMovAbsBl(bEn := FALSE);
					fbSDOWrite(bEn := FALSE);
					fbTm(IN := FALSE);
					usiStep				:= 0;
					usiCount			:= 0;
					bNotInterruptible	:= FALSE;
					tyParamOutDriver.uiCtrlword_6040.7	:= FALSE;
					sStatTxt	:= a_sStatText[eStat];
		
				END_IF
				
				eStatus	:= Idle;
				
				IF EDGENEG(p_bManual) THEN
					fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
				END_IF
			
			AWActGoWidth:
				IF (eStatus = Idle OR eStatus = Busy) THEN
					
					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					bNotInterruptible	:= TRUE;
					
					CASE usiStep OF
						0:	//Wait For Motion Parameter Update
							p_diMovePosInUM	:= fAWWidthToPosInUM(p_diGoWidth , p_diWidthAtHmPos);
							usiStep	:= 1;
						
						1:	//Check Position Difference
							IF tyParamOut.bPosDiff = TRUE THEN
								usiStep	:= 2;
							ELSE
								eStatus	:= Done;
							END_IF
						
						2:	//Move
							fbFullMovAbsBl.tyParamInDriver					:= tyParamInDriver;
							fbFullMovAbsBl.tyParamInMove.diPosInUM			:= p_diMovePosInUM;
							fbFullMovAbsBl.tyParamInMove.diDistInUM			:= p_diMoveDistInUM;
							fbFullMovAbsBl.tyParamInMove.diVelInUMPS		:= p_diMoveVelInUMPS;
							fbFullMovAbsBl.tyParamInMove.diAcc				:= p_diMoveAcc;
							fbFullMovAbsBl.tyParamInMove.diDec				:= p_diMoveDec;
							fbFullMovAbsBl.tyParamOut						:= tyParamOut;
							fbFullMovAbsBl(bEn := TRUE);
							
							IF fbFullMovAbsBl.udiStatus = 0 THEN
								eStatus	:= Done;
							ELSIF fbFullMovAbsBl.udiStatus < 65534 THEN
								eStatus		:= Error;
								
								IF fbFullMovAbsBl.udiStatus = 1401 THEN
									udiStatus	:= 10002;	//Power On Time Out While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1402 THEN
									udiStatus	:= 10003;	//Homing Time Out While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1403 THEN
									udiStatus	:= 10004;	//Move Absolute Time Out While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1405 THEN
									udiStatus	:= 10005;	//Stop Motion Time Out While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1408 THEN
									udiStatus	:= 10006;	//Axis Error Reset Failed While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1409 THEN
									udiStatus	:= 10007;	//Axis Error Occur In Move Absolute While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1411 THEN
									udiStatus	:= 10008;	//Axis Error Occur In Homing While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1412 THEN
									udiStatus	:= 10009;	//Homing Done But Home Flag Is Not Activated While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1413 THEN
									udiStatus	:= 10010;	//Forward Limit Activated In Homing While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1414 THEN
									udiStatus	:= 10011;	//Reverse Limit Activated In Homing While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1415 THEN
									udiStatus	:= 10012;	//Forward Limit Activated In Move Absolute While Going New Width
								ELSIF fbFullMovAbsBl.udiStatus = 1416 THEN
									udiStatus	:= 10013;	//Reverse Limit Activated In Move Absolute While Going New Width
								ELSE
									udiStatus	:= fbFullMovAbsBl.udiStatus;
								END_IF
							END_IF
						
					END_CASE
					
				END_IF
			
			AWActGoWidthOff:
				IF (eStatus = Idle OR eStatus = Busy) THEN
					
					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					bNotInterruptible	:= TRUE;
					
					CASE usiStep OF
						0:	//Wait For Motion Parameter Update
							p_diMovePosInUM	:= fAWWidthToPosInUM(p_diGoWidth , p_diWidthAtHmPos);
							usiStep	:= 1;
						
						1:	//Check Position Difference
							IF tyParamOut.bPosDiff = TRUE THEN
								usiStep	:= 2;
							ELSE
								eStatus	:= Done;
							END_IF
						
						2:	//Move
							fbFullMovAbsBl.tyParamInDriver					:= tyParamInDriver;
							fbFullMovAbsBl.tyParamInMove.diPosInUM			:= p_diMovePosInUM;
							fbFullMovAbsBl.tyParamInMove.diDistInUM			:= p_diMoveDistInUM;
							fbFullMovAbsBl.tyParamInMove.diVelInUMPS		:= p_diMoveVelInUMPS;
							fbFullMovAbsBl.tyParamInMove.diAcc				:= p_diMoveAcc;
							fbFullMovAbsBl.tyParamInMove.diDec				:= p_diMoveDec;
							fbFullMovAbsBl.tyParamOut						:= tyParamOut;
							fbFullMovAbsBl(bEn := TRUE);
							
							IF fbFullMovAbsBl.udiStatus = 0 THEN
								usiStep	:= 3;
							ELSIF fbFullMovAbsBl.udiStatus < 65534 THEN
								eStatus		:= Error;
								
								IF fbFullMovAbsBl.udiStatus = 1401 THEN
									udiStatus	:= 10035;	//Power On Time Out While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1402 THEN
									udiStatus	:= 10036;	//Homing Time Out While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1403 THEN
									udiStatus	:= 10037;	//Move Absolute Time Out While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1405 THEN
									udiStatus	:= 10038;	//Stop Motion Time Out While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1408 THEN
									udiStatus	:= 10039;	//Axis Error Reset Failed While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1409 THEN
									udiStatus	:= 10040;	//Axis Error Occur In Move Absolute While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1411 THEN
									udiStatus	:= 10041;	//Axis Error Occur In Homing While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1412 THEN
									udiStatus	:= 10042;	//Homing Done But Home Flag Is Not Activated While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1413 THEN
									udiStatus	:= 10043;	//Forward Limit Activated In Homing While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1414 THEN
									udiStatus	:= 10044;	//Reverse Limit Activated In Homing While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1415 THEN
									udiStatus	:= 10045;	//Forward Limit Activated In Move Absolute While Going New Width And Off
								ELSIF fbFullMovAbsBl.udiStatus = 1416 THEN
									udiStatus	:= 10046;	//Reverse Limit Activated In Move Absolute While Going New Width And Off
								ELSE
									udiStatus	:= fbFullMovAbsBl.udiStatus;
								END_IF
							END_IF
						
						3:	//Turn Off Motor
							fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
							eStatus	:= Done;
						
					END_CASE
					
				END_IF
			
			AWActFullHm:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					bNotInterruptible	:= TRUE;
					
					fbFullHm.tyParamInDriver	:= tyParamInDriver;
					fbFullHm.tyParamOut			:= tyParamOut;
					fbFullHm(bEn := TRUE);
					
					IF fbFullHm.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbFullHm.udiStatus < 65534 THEN
						eStatus		:= Error;
								
						IF fbFullHm.udiStatus = 1401 THEN
							udiStatus	:= 10014;	//Power On Time Out While Full Homing
						ELSIF fbFullHm.udiStatus = 1402 THEN
							udiStatus	:= 10015;	//Homing Time Out While Full Homing
						ELSIF fbFullHm.udiStatus = 1405 THEN
							udiStatus	:= 10016;	//Stop Motion Time Out While Full Homing
						ELSIF fbFullHm.udiStatus = 1408 THEN
							udiStatus	:= 10017;	//Axis Error Reset Failed While Full Homing
						ELSIF fbFullHm.udiStatus = 1411 THEN
							udiStatus	:= 10018;	//Axis Error Occur In Homing While Full Homing
						ELSIF fbFullHm.udiStatus = 1412 THEN
							udiStatus	:= 10019;	//Homing Done But Home Flag Is Not Activated While Full Homing
						ELSIF fbFullHm.udiStatus = 1413 THEN
							udiStatus	:= 10020;	//Forward Limit Activated In Homing While Full Homing
						ELSIF fbFullHm.udiStatus = 1414 THEN
							udiStatus	:= 10021;	//Reverse Limit Activated In Homing While Full Homing
						ELSE
							udiStatus	:= fbFullHm.udiStatus;
						END_IF
					END_IF
					
				END_IF
			
			AWActPwrOn:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					fbPwrOn.tyParamInDriver	:= tyParamInDriver;
					fbPwrOn(bEn := TRUE);
					
					IF fbPwrOn.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbPwrOn.udiStatus < 65534 THEN
						eStatus		:= Error;
								
						IF fbPwrOn.udiStatus = 1401 THEN
							udiStatus	:= 10022;	//Power On Time Out
						ELSE
							udiStatus	:= fbPwrOn.udiStatus;
						END_IF
					END_IF
					
				END_IF
			
			AWActPwrOff:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					fbPwrOff.tyParamInDriver	:= tyParamInDriver;
					fbPwrOff(bEn := TRUE);
					
					IF fbPwrOff.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbPwrOff.udiStatus < 65534 THEN
						eStatus		:= Error;
								
						IF fbPwrOff.udiStatus = 1400 THEN
							udiStatus	:= 10023;	//Power Off Time Out
						ELSE
							udiStatus	:= fbPwrOff.udiStatus;
						END_IF
					END_IF
					
				END_IF
			
			AWActHoming:
		
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
					
					bNotInterruptible	:= TRUE;
					
					fbHoming.tyParamInDriver	:= tyParamInDriver;
					fbHoming.tyParamOut			:= tyParamOut;
					fbHoming(bEn := TRUE);
					
					IF fbHoming.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbHoming.udiStatus < 65534 THEN
						eStatus		:= Error;
								
						IF fbHoming.udiStatus = 1402 THEN
							udiStatus	:= 10024;	//Homing Time Out
						ELSIF fbHoming.udiStatus = 1411 THEN
							udiStatus	:= 10018;	//Axis Error Occur In Homing While Full Homing

						ELSIF fbHoming.udiStatus = 1413 THEN
							udiStatus	:= 10020;	//Forward Limit Activated In Homing While Full Homing
						ELSIF fbHoming.udiStatus = 1414 THEN
							udiStatus	:= 10021;	//Reverse Limit Activated In Homing While Full Homing
						ELSE
							udiStatus	:= fbHoming.udiStatus;
						END_IF
					END_IF
					
				END_IF
			
			AWActMovAbs:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					bNotInterruptible	:= TRUE;
					
					fbMovAbs.tyParamInDriver			:= tyParamInDriver;
					fbMovAbs.tyParamInMove.diPosInUM	:= p_diMovePosInUM;
					fbMovAbs.tyParamInMove.diDistInUM	:= p_diMoveDistInUM;
					fbMovAbs.tyParamInMove.diVelInUMPS	:= p_diMoveVelInUMPS;
					fbMovAbs.tyParamInMove.diAcc		:= p_diMoveAcc;
					fbMovAbs.tyParamInMove.diDec		:= p_diMoveDec;
					fbMovAbs(bEn := TRUE);
					
					IF fbMovAbs.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbMovAbs.udiStatus < 65534 THEN
						eStatus		:= Error;
								
						IF fbMovAbs.udiStatus = 1403 THEN
							udiStatus	:= 10025;	//Move Absolute Time Out
						ELSE
							udiStatus	:= fbMovAbs.udiStatus;
						END_IF
					END_IF
					
				END_IF
			
			AWActMovRel:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					bNotInterruptible	:= TRUE;
					
					fbMovRel.tyParamInDriver			:= tyParamInDriver;
					fbMovRel.tyParamInMove.diPosInUM	:= p_diMovePosInUM;
					fbMovRel.tyParamInMove.diDistInUM	:= p_diMoveDistInUM;
					fbMovRel.tyParamInMove.diVelInUMPS	:= p_diMoveVelInUMPS;
					fbMovRel.tyParamInMove.diAcc		:= p_diMoveAcc;
					fbMovRel.tyParamInMove.diDec		:= p_diMoveDec;
					fbMovRel(bEn := TRUE);
					
					IF fbMovRel.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbMovRel.udiStatus < 65534 THEN
						eStatus		:= Error;
								
						IF fbMovRel.udiStatus = 1404 THEN
							udiStatus	:= 10026;	//Move Relative Time Out
						ELSE
							udiStatus	:= fbMovRel.udiStatus;
						END_IF
					END_IF
					
				END_IF
			
			AWActJogOpen:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					bNotInterruptible	:= TRUE;
					
					fbJog.tyParamInDriver	:= tyParamInDriver;
					fbJog.tyParamInMove.diAcc		:= p_diMoveAcc;
					fbJog.tyParamInMove.diDec		:= p_diMoveDec;
					
					IF p_bDir = TRUE THEN
						fbJog.tyParamInJog.diVelInUMPS	:= p_diJogVelInUMPS;
					ELSE
						fbJog.tyParamInJog.diVelInUMPS	:= p_diJogVelInUMPS * -1;
					END_IF
					
					fbJog(bEn := TRUE);
					
					IF fbJog.udiStatus = 0 THEN
						bJogging	:= TRUE;
						bJogOpen	:= TRUE;
						eStatus		:= Done;
					ELSIF fbJog.udiStatus < 65534 THEN
						udiStatus	:= fbJog.udiStatus;
						eStatus		:= Error;
					END_IF
					
				END_IF
			
			AWActJogClose:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					bNotInterruptible	:= TRUE;
					
					fbJog.tyParamInDriver			:= tyParamInDriver;
					fbJog.tyParamInMove.diAcc		:= p_diMoveAcc;
					fbJog.tyParamInMove.diDec		:= p_diMoveDec;
					
					
					IF p_bDir = TRUE THEN
						fbJog.tyParamInJog.diVelInUMPS	:= p_diJogVelInUMPS * -1;
					ELSE
						fbJog.tyParamInJog.diVelInUMPS	:= p_diJogVelInUMPS;
					END_IF
					
					fbJog(bEn := TRUE);
					
					IF fbJog.udiStatus = 0 THEN
						bJogging	:= TRUE;
						bJogClose	:= TRUE;
						eStatus		:= Done;
					ELSIF fbJog.udiStatus < 65534 THEN
						udiStatus	:= fbJog.udiStatus;
						eStatus		:= Error;
					END_IF
					
				END_IF
			
			AWActJogStop:
				IF (eStatus = Idle OR eStatus = Busy) THEN
					
					sStatTxt	:= a_sStatText[eStat];
		
					fMotionCANJogStop(ADR(tyParamOutDriver));
					bJogging	:= FALSE;
					bJogClose	:= FALSE;
					bJogOpen	:= FALSE;
					eStatus	:= Done;
					
				END_IF
			
			AWActRstAxisErr:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					fbRstAxisErr(bEn := TRUE);
					
					IF fbRstAxisErr.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbRstAxisErr.udiStatus < 65534 THEN
						udiStatus	:= fbRstAxisErr.udiStatus;
						eStatus		:= Error;
					END_IF
					
				END_IF
			
			AWActStop:
				IF (eStatus = Idle OR eStatus = Busy) THEN

					eStatus	:= Busy;
					
					sStatTxt	:= a_sStatText[eStat];
		
					fbStop.tyParamInDriver	:= tyParamInDriver;
					fbStop(bEn := TRUE);
					
					IF fbStop.udiStatus = 0 THEN
						bJogging	:= FALSE;
						bJogClose	:= FALSE;
						bJogOpen	:= FALSE;
						eStatus		:= Done;
					ELSIF fbStop.udiStatus < 65534 THEN
						eStatus		:= Error;
								
						IF fbStop.udiStatus = 1405 THEN
							udiStatus	:= 10027;	//Stop Motion Time Out
						ELSE
							udiStatus	:= fbStop.udiStatus;
						END_IF
					END_IF
					
				END_IF
		END_CASE
	
ELSE
	CASE eStat OF			
		AWActSDOWrite:
			IF (eStatus = Idle OR eStatus = Busy) THEN
					
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
					
				fbTm(IN := TRUE);
					
				IF fbTm.Q THEN
						
					fbSDOWrite.tyParamOut	:= tyParamOut;
					fbSDOWrite.tyTuning		:= p_tyTuning;
					
					fbSDOWrite(bEn := TRUE);
						
						
					IF fbSDOWrite.udiStatus = 0 THEN
						eStatus	:= Done;
					ELSIF fbSDOWrite.udiStatus < 65534 THEN
						fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
							
						IF usiCount < 5 THEN
							fbTm(IN := FALSE);
							fbSDOWrite(bEn := FALSE);
								
							usiCount	:= usiCount + 1;
						ELSE
							eStatus	:= Error;
								
							IF fbSDOWrite.udiStatus = 1406 THEN
								udiStatus	:= 10028;	//SDO Write Error
							ELSE
								udiStatus	:= fbSDOWrite.udiStatus;
							END_IF
						END_IF
							
					END_IF
						
				END_IF
					
			END_IF
			
		AWActBGStartModOKChk:
			IF (eStatus = Idle OR eStatus = Busy) THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bModuleOKChk	:= TRUE;
				eStatus			:= Done;
					
			END_IF
			
		AWActBGStopModOKChk:
			IF (eStatus = Idle OR eStatus = Busy) THEN
		
				sStatTxt	:= a_sStatText[eStat];
		
				bModuleOKChk	:= FALSE;
				eStatus			:= Done;
					
			END_IF
		
		AWActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbStop(bEn := FALSE);
				fbRstAxisErr(bEn := FALSE);
				fbJog(bEn := FALSE);
				fbMovRel(bEn := FALSE);
				fbMovAbs(bEn := FALSE);
				fbHoming(bEn := FALSE);
				fbPwrOff(bEn := FALSE);
				fbPwrOn(bEn := FALSE);
				fbFullHm(bEn := FALSE);
				fbFullMovAbs(bEn := FALSE);
				fbFullMovAbsBl(bEn := FALSE);
				fbSDOWrite(bEn := FALSE);
				fbTm(IN := FALSE);
				usiStep				:= 0;
				usiCount			:= 0;
				bNotInterruptible	:= FALSE;
				tyParamOutDriver.uiCtrlword_6040.7	:= FALSE;
				
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
				
			eStatus	:= Idle;
				
			IF EDGENEG(p_bManual) THEN
				fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			END_IF
		
		AWActRstNode:
			IF (eStatus = Idle OR eStatus = Busy) THEN
					
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
				IF bRstErr THEN
					fbModuleOK(bEn := FALSE, bModuleOK := bModuleOK);
				END_IF
				fbModuleOK(bEn := TRUE);
				IF fbModuleOK.udiStatus = 0 THEN
					fbModuleOK(bEn := FALSE);
					eStatus			:= Done;
				ELSIF fbModuleOK.udiStatus < 65534 THEN
					eStatus		:= Error;
					
					IF fbModuleOK.udiStatus = 1407 THEN
						udiStatus	:= 10001;	//CANOpen Communication Error, ModuleOK Not TRUE
						fbModuleOK(bEn := FALSE);
					ELSE
						udiStatus	:= fbModuleOK.udiStatus;
					END_IF
				END_IF
			END_IF
		
		AWActRstAxisErr:
			IF (eStatus = Idle OR eStatus = Busy) THEN

				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
				
				
				fbRstAxisErr(bEn := TRUE);
					
				IF fbRstAxisErr.udiStatus = 0 THEN
					eStatus	:= Done;
				ELSIF fbRstAxisErr.udiStatus < 65534 THEN
					udiStatus	:= fbRstAxisErr.udiStatus;
					eStatus		:= Error;
				END_IF
					
			END_IF
			
		
	END_CASE
END_IF		
	
END_ACTION
