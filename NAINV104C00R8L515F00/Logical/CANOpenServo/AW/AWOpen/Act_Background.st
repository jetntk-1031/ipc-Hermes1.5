(** 2020-05-26 **)
ACTION Act_Background:
	
	//Update Parameter
	IF bModuleOK = TRUE THEN
		
		tyParamInMove.diPosInUM		:= p_diMovePosInUM;
		tyParamInMove.diDistInUM	:= p_diMoveDistInUM;
		tyParamInMove.diVelInUMPS	:= p_diMoveVelInUMPS;
		tyParamInMove.diAcc			:= p_diMoveAcc;
		tyParamInMove.diDec			:= p_diMoveDec;
		
		fMotionCANUpdtDat(ADR(tyParamOut) , p_tyParamInConvert , tyParamOutDriver , tyParamInDriver , tyParamInMove , p_tyParamInHm , p_bDir, p_eNtParamMotorType);
	
		bWidthPosDiff	:= (tyParamOut.bIsHomed = FALSE) OR ((ABS((fAWWidthToPosInUM(p_diGoWidth , p_diWidthAtHmPos)) - tyParamOut.diActualPosInUM)) > 500);
		
		p_tyParamInConvert.diPitchInUM	:= fPitchCalc(p_diWidthOffsetInUM , p_diMaxWidthInUM , p_diMinWidthInUM , p_diPitchInUM);
		
		fbFullMovAbsBl.tyParamInConvert					:= p_tyParamInConvert;
		
		IF p_bDir = TRUE THEN
			bOpenSen	:= tyParamOut.bFwdLmtSen;
			bCloseSen	:= tyParamOut.bRevLmtSen;
		ELSE
			bOpenSen	:= tyParamOut.bRevLmtSen;
			bCloseSen	:= tyParamOut.bFwdLmtSen;
		END_IF
		
		CASE p_eNtParamMotorType OF
			DeltaAsdaA2:
				CASE tyParamOut.udiAxisErrID OF
					8976:	sAxisErrTxt	:= 'Over Current';
					12560:	sAxisErrTxt	:= 'Over Voltage';
					12576:	sAxisErrTxt	:= 'Under Voltage';
					12592:	sAxisErrTxt	:= 'Input Power Phase Loss';
					12816:	sAxisErrTxt	:= 'Regeneration Error';
					12848:	sAxisErrTxt	:= 'Overload';
					12849:	sAxisErrTxt	:= 'Pre-overload Warning';
					13056:	sAxisErrTxt	:= 'U,V,W Wiring Error';
					16912:	sAxisErrTxt	:= 'IGBT Temperature Error';
					21296:	sAxisErrTxt	:= 'Memory Error';
					21569:	sAxisErrTxt	:= 'Emergency Stop Activated';
					21570:	sAxisErrTxt	:= 'Forward Limit Switch Error';
					21571:	sAxisErrTxt	:= 'Reverse Limit Switch Error';
					21572:	sAxisErrTxt	:= 'Forward Software Limit';
					21573:	sAxisErrTxt	:= 'Reverse Software Limit';
					21760:	sAxisErrTxt	:= 'DSP Firmware Upgrade';
					25088:	sAxisErrTxt	:= 'CANopen SYNC Error';
					25360:	sAxisErrTxt	:= 'CANopen Data Initial Error';
					25376:	sAxisErrTxt	:= 'Adjustment Error';
					28961:	sAxisErrTxt	:= 'Motor Protection Error';
					28962:	sAxisErrTxt	:= 'Motor Error';
					29445:	sAxisErrTxt	:= 'Encoder Error';
					29446:	sAxisErrTxt	:= 'Encoder Output Error';
					29968:	sAxisErrTxt	:= 'Serial Communication Error';
					29984:	sAxisErrTxt	:= 'Serial Communication Time Out';
					33024:	sAxisErrTxt	:= 'CANbus Error (Bus-off)';
					33040:	sAxisErrTxt	:= 'CANopen SDO receive buffer overrun';
					33056:	sAxisErrTxt	:= 'CANbus Error (Warning)';
					33072:	sAxisErrTxt	:= 'Node Guarding or Heartbeat Error';
					33280:	sAxisErrTxt	:= 'CANopen PDO Object Error';
					33792:	sAxisErrTxt	:= 'Over Speed';
					34304:	sAxisErrTxt	:= 'Abnormal Pulse Control Command';
					34320:	sAxisErrTxt	:= 'Full Closed Loop Excessive Deviation';
					34321:	sAxisErrTxt	:= 'Excessive Deviation';
				END_CASE
				
			SchneiderLexium28:		
				CASE tyParamOut.udiAxisErrID OF
					8724:	sAxisErrTxt	:= 'Over Current';
					8976:	sAxisErrTxt	:= 'Motor Overload';
					8977:	sAxisErrTxt	:= 'Drive overload (foldback)';
					9088:	sAxisErrTxt	:= 'Calculated offsets for current sensors out OF range';
					9089:	sAxisErrTxt := 'Motor phase missing';
					9090:	sAxisErrTxt := 'Overcurrent detected at one OF the digital outputs';
					12560:	sAxisErrTxt	:= 'DC Bus Over Voltage';
					12576:	sAxisErrTxt	:= 'DC Bus Under Voltage';
					12672:	sAxisErrTxt	:= 'Braking Resistor Overload';
					12673:	sAxisErrTxt	:= 'Safety function Safe Torque Off (STO) triggered';
					12674:	sAxisErrTxt	:= 'DC bus voltage measurement';
					12675:	sAxisErrTxt	:= 'Missing mains supply, undervoltage mains supply';
					12676:	sAxisErrTxt := 'The encoder supply voltage has dropped under operational value';
					12677:	sAxisErrTxt := 'The multi turn encoder battery voltage has dropped under 3 Vdc';
					12678:	sAxisErrTxt := 'Internal position synchronization error	detected between the multi turn AND the single turn modules';
					12679:	sAxisErrTxt := 'Generic error code of the multi turn module is detected';
					12697:	sAxisErrTxt := 'Braking resistor overload';
					16512:	sAxisErrTxt	:= 'Drive overtemperature (IPM)';
					16513:	sAxisErrTxt	:= 'Drive overtemperature (controller)';
					16534:	sAxisErrTxt := 'Temperature sensor inoperative';
					17168:	sAxisErrTxt	:= 'Power stage overtemperature';
					17280:	sAxisErrTxt := 'The encoder temperature is too high';
					17424:	sAxisErrTxt	:= 'Motor overtemperature';
					21808:	sAxisErrTxt	:= 'System error detected (nonvolatilememory)';
					21893:	sAxisErrTxt	:= 'Error detected in non-volatile memory';
					21889:	sAxisErrTxt	:= 'System error detected (nonvolatile memory)';
					21890:	sAxisErrTxt	:= 'System error detected (CAN power supply)';
					21891:	sAxisErrTxt	:= 'System error detected (selftest)';
					21894:	sAxisErrTxt	:= 'System error detected (NV ACCESS)';
					25472:	sAxisErrTxt	:= 'Target position rejected';
					25985:	sAxisErrTxt	:= 'System error detected(FPGA)';
					28816:	sAxisErrTxt	:= 'System error detected (FPGA does NOT match firmware)';
					28817:	sAxisErrTxt	:= 'Emergency Stop Activated';
					28961:	sAxisErrTxt := 'Motor blocked';
					29080:	sAxisErrTxt := 'Commutation error detected';
					29568:  sAxisErrTxt	:= 'Error detected in communication with motor encoder';
					29574:	sAxisErrTxt	:= 'Drive is not synchronous wit master cycle';
					29581:	sAxisErrTxt := 'System error detected (encoder)';
					29587:	sAxisErrTxt	:= 'Encoder overvoltage or overcurrent';
					29592:	sAxisErrTxt := 'The returned position value are no longer considered valid';
					29593:	sAxisErrTxt := 'The multi turn encoder requires an explicit configuration command';	
					30081:	sAxisErrTxt := 'Target position rejected';
					30082:	sAxisErrTxt := 'No target values received via the fieldbus';
					33072:	sAxisErrTxt	:= 'CANopen: Heartbeat error detected';
					33296:	sAxisErrTxt := 'R_PDO is too short';
					33921:	sAxisErrTxt	:= 'Actual Motor Velocity Too High';	
					33553:	sAxisErrTxt	:= 'Motor torque too high FOR an excessive period OF time';	
					33664:	sAxisErrTxt := 'Unstable current loop';
					33922:	sAxisErrTxt := 'Velocity deviation too high';
					34321:	sAxisErrTxt	:= 'Position deviation too high';
					34432:	sAxisErrTxt := 'Position deviation via signal output function MC_OK';
					34441:	sAxisErrTxt := 'Position deviation too high (following error)';
					61568:	sAxisErrTxt	:= 'Fieldbus: Communication	error detected';
					65282:	sAxisErrTxt	:= 'Not possible to read data of electronic motor nameplate';
					65296:	sAxisErrTxt	:= 'Forward Limit Switch Error';
					65297:	sAxisErrTxt	:= 'Reverse Limit Switch Error';
					65281:	sAxisErrTxt := 'System error detected';
					65298:	sAxisErrTxt	:= 'Forward Software Limit';
					65299:	sAxisErrTxt	:= 'Reverse Software Limit';
					65301:	sAxisErrTxt := 'The encoder firmware cannot operate on the provided hardware';
				
				END_CASE
			
			EstunPronet:
				CASE tyParamOut.udiAxisErrID OF
					65281:	sAxisErrTxt	:= 'Parameter breakdown';//A01
					65282:	sAxisErrTxt	:= 'AD shift channels breakdown';
					65283:	sAxisErrTxt	:= 'Overspeed';
					65284:	sAxisErrTxt	:= 'Overload';
					65285:	sAxisErrTxt := 'Position error counteroverflow ';
					65286:	sAxisErrTxt := 'Position error pulse overflow';
					65287:	sAxisErrTxt	:= 'The setting of electronic gear or given pulse frequency is not reasonable';
					65288:	sAxisErrTxt	:= 'The 1st channel of current detection is wrong.';
					65289:	sAxisErrTxt	:= 'The 2nd channel of current detection is wrong.';
					65290:	sAxisErrTxt	:= 'Incremental Encoder is break off.';//A10
					65292:	sAxisErrTxt	:= 'Overcurrent';
					65293:	sAxisErrTxt	:= 'Overvoltage';
					65294:	sAxisErrTxt	:= 'Undervoltage';
					65295:	sAxisErrTxt := 'Bleeder resistor error';
					65296:	sAxisErrTxt := 'Regeneration error';
					65297:	sAxisErrTxt := 'Resolver error';
					65298:	sAxisErrTxt := 'IGBT superheat alarm';
					65299:	sAxisErrTxt := 'Motor overheat alarm';
					65300:	sAxisErrTxt := 'Power line phase shortage';//A20 
					65301:	sAxisErrTxt	:= 'Instantaneous power off alarm';
					65302:	sAxisErrTxt	:= 'Motor temperature detection sensor is break off.';
					65303:	sAxisErrTxt := 'Brake overcurrent alarm';//A23
					65305:	sAxisErrTxt := 'Motor power line U overcurrent';//A25
					65306:	sAxisErrTxt := 'Motor power line V overcurrent';//A26
					65307:	sAxisErrTxt := 'Motor power line W overcurrent';//A27	
					65322:	sAxisErrTxt	:= 'Servomotor type error';//A42
					65323:	sAxisErrTxt	:= 'Servo drive type error';
					65325:	sAxisErrTxt	:= 'Absolute encoder multiturn information error';
					65326:	sAxisErrTxt	:= 'Absolute encoder multiturn information overflow';
					65327:	sAxisErrTxt	:= 'Battery voltage below 2.5V';
					65328:	sAxisErrTxt	:= 'Battery voltage below 3.1V';//A48
					65330:	sAxisErrTxt := 'Serial encoder communication overtime ';//A50
					65331:	sAxisErrTxt := 'Absolute encoder overspeed alarm detected';
					65332:  sAxisErrTxt	:= 'Absolute state of serial encoder error';
					65333:	sAxisErrTxt	:= 'Serial encoder calcaution error';
					65334:	sAxisErrTxt := 'Parity bit or end bit in serial encoder control domain error';
					65335:	sAxisErrTxt	:= 'Serial encoder communication data checking error';
					65336:	sAxisErrTxt := 'End bit in serial encoder control domain error';
					65338:	sAxisErrTxt := 'Serial encoder data empty';	
					65339:	sAxisErrTxt := 'Serial encoder data format error';
					65340:	sAxisErrTxt := 'Communication module not detected ';//A60
					65341:	sAxisErrTxt := 'Communication unsuccessful';
					65342:	sAxisErrTxt := 'Servo drive can not receive the period data of communication module ';
					65343:	sAxisErrTxt := 'Communication module can not receive the servo drive response data.';
					65344:	sAxisErrTxt := 'Communication module and bus connectionless';
					65346:	sAxisErrTxt := 'CAN communication abnormal';
					65347:	sAxisErrTxt := 'Receiving heartbeat timeout';
					65349:	sAxisErrTxt := 'Synchronization signal monitoring cycle is longer than setting';
					65362: sAxisErrTxt := 'Torque output alarm';
				END_CASE
		END_CASE		
		
	ELSE
		
		tyParamOut.bAxisErr			:= FALSE;
		tyParamOut.bFwdLmtSen		:= FALSE;
		tyParamOut.bInPos			:= FALSE;
		tyParamOut.bIsHomed			:= FALSE;
		tyParamOut.bPosDiff			:= TRUE;
		tyParamOut.bPwrOn			:= FALSE;
		tyParamOut.bRevLmtSen		:= FALSE;
		tyParamOut.bStopped			:= TRUE;
		tyParamOut.diActualPosInUM	:= 0;
		tyParamOut.diHmAcc			:= 0;
		tyParamOut.diHmSpdForSwitch	:= 0;
		tyParamOut.diHmSpdForZero	:= 0;
		tyParamOut.diProfileAcc		:= 0;
		tyParamOut.diProfileDec		:= 0;
		tyParamOut.udiAxisErrID		:= 0;
	
		bWidthPosDiff				:= TRUE;
	
	END_IF
	
	//Abnormal Movement
	IF eStatus1 <> Error THEN
		IF p_bOps = TRUE AND eStatus = Idle THEN
			IF (ABS(tyParamOut.diActualPosInUM - diActualPosInUMOld) > 2000) AND (ABS(tyParamOut.diActualPosInUM - diActualPosInUMOld) < 10000) THEN
				eStatus1	:= Error;
				udiStatus1	:= 10000;	//Axis Move Abnormally By External Force
			
				fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
				p_eAct	:= AWActIdle;
				eStat	:= AWActIdle;
			END_IF
		ELSE
			diActualPosInUMOld	:= tyParamOut.diActualPosInUM;
		END_IF
	END_IF
	
	//Reset Error
	IF (eStatus1 = Error) AND bRstErr THEN
		eStatus1	:= Idle;
		udiStatus1	:= 0;
	END_IF
	
	//Request Position To Movement Out Of Range
	IF p_bOps 
		AND((tyParamInMove.diPosInUM < p_diMinAbsPosInUM) OR (tyParamInMove.diPosInUM > p_diMaxAbsPosInUM)) 
		AND (eStatus2 <> Error) THEN
		eStatus2	:= Error;
		udiStatus2	:= 10029;	//Request Absolute Position Out Of Range
		
		fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
		p_eAct	:= AWActIdle;
		eStat	:= AWActIdle;
	END_IF
	
	//Reset Error
	IF (eStatus2 = Error) AND bRstErr THEN
		eStatus2	:= Idle;
		udiStatus2	:= 0;
	END_IF
	
	//Sensor Interrupt
	IF bNotInterruptible = TRUE AND eStatus3 <> Error THEN
		
		IF p_bInletSensor = TRUE THEN
			eStatus3	:= Error;
			udiStatus3	:= 10030;	//Inlet Sensor Interrupt Auto Width Movement
		
			fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			p_eAct	:= AWActIdle;
			eStat	:= AWActIdle;
			
		ELSIF p_bOutletSensor = TRUE THEN
			eStatus3	:= Error;
			udiStatus3	:= 10031;	//Outlet Sensor Interrupt Auto Width Movement
		
			fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			p_eAct	:= AWActIdle;
			eStat	:= AWActIdle;
			
		ELSIF p_bClearSensor = TRUE THEN
			eStatus3	:= Error;
			udiStatus3	:= 10032;	//Clear Sensor Interrupt Auto Width Movement
		
			fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			p_eAct	:= AWActIdle;
			eStat	:= AWActIdle;
			
		ELSIF p_bMiddleSensor = TRUE THEN
			eStatus3	:= Error;
			udiStatus3	:= 10033;	//Middle Sensor Interrupt Auto Width Movement
		
			fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			p_eAct	:= AWActIdle;
			eStat	:= AWActIdle;
			
		ELSIF p_bInterruptSensor = TRUE THEN
			eStatus3	:= Error;
			udiStatus3	:= 10034;	//Sensor Interrupt Auto Width Movement
		
			fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			p_eAct	:= AWActIdle;
			eStat	:= AWActIdle;
			
		ELSIF p_bCloseInterruptSensor = TRUE AND bJogOpen = FALSE THEN
			eStatus3	:= Error;
			udiStatus3	:= 10047;	//Sensor Interrupt Auto Width Movement
		
			fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			p_eAct	:= AWActIdle;
			eStat	:= AWActIdle;
		
		ELSIF p_bOpenInterruptSensor = TRUE AND bJogClose = FALSE THEN
			eStatus3	:= Error;
			udiStatus3	:= 10048;	//Sensor Interrupt Auto Width Movement
		
			fMotionCANRstCtrlWord(ADR(tyParamOutDriver));
			p_eAct	:= AWActIdle;
			eStat	:= AWActIdle;
		END_IF
		
	END_IF
	
	//Reset Error
	IF (eStatus3 = Error AND bRstErr) 
		OR (p_bOpenInterruptSensor AND eStat = AWActJogClose)
		OR (p_bCloseInterruptSensor AND eStat = AWActJogOpen)
		THEN
		eStatus3	:= Idle;
		udiStatus3	:= 0;
	END_IF
	
	IF bRstErr THEN
		udiStatus	:= 0;
		bJogging	:= FALSE;
		bJogClose	:= FALSE;
		bJogOpen	:= FALSE;
	END_IF
	
	fbServoModuleOk(IN:= bModuleOK);
	fbServoModuleNotOk(IN:= bModuleOK = FALSE);
	IF fbServoModuleNotOk.Q AND udiStatus <> 10001 THEN
	
		bModuleNotOK		:= TRUE;
		bModuleNotOKLock	:= TRUE;
		usiRstStep	:= 0;
		tyParamOutDriver.uiCtrlword_6040	:= 0;
		tyParamOutDriver.siModOfOpt_6060	:= 0;
		tyParamOutDriver.diTargetPos_607A	:= 0;
		tyParamOutDriver.udiMoveSpd_6081	:= 0;
		tyParamOutDriver.siHmMethod_6098	:= 0;
		tyParamOutDriver.diJogVel_60FF		:= 0;
		
		CASE p_eNtParamMotorType OF
	
			DeltaAsdaA2:
				fbModuleOK(bModuleOK:= FALSE);
				IF eStatus = Idle THEN
					eAct	:= AWActRstNode;
				END_IF
			
				IF (eStatus = Done OR eStatus = Error)AND eStat = AWActRstNode THEN
			
					eAct	:= AWActIdle;
				END_IF
	
			EstunPronet:			
				fbModuleOK(bModuleOK:= FALSE);
				IF eStatus = Idle THEN
					eAct	:= AWActRstNode;
				END_IF
			
				IF (eStatus = Done OR eStatus = Error)AND eStat = AWActRstNode THEN
			
					eAct	:= AWActIdle;
				END_IF
		
			SchneiderLexium28:
			// Do Nothing
		END_CASE
		
	ELSIF bModuleNotOK = TRUE AND fbServoModuleOk.Q THEN
				
					
		CASE usiRstStep OF
				
			0:	
				IF eStatus = Idle THEN
					eAct	:= AWActRstAxisErr;
				END_IF
			
				IF eStatus = Done AND eStat = AWActRstAxisErr THEN
					eAct	:= AWActIdle;
					usiRstStep	:= 4;
				END_IF
		
			4: tyParamOutDriver.siModOfOpt_6060 := 1;
				usiRstStep	:= 5;
					
			5: tyParamOutDriver.siModOfOpt_6060 := 1;
				fbRstNodeTimer(IN:=TRUE);

				IF tyParamInDriver.siModOfOptDisp_6061 = 1 THEN
					usiRstStep	:= 6;
					fbRstNodeTimer(IN:=FALSE);
				ELSIF fbRstNodeTimer.Q THEN
					usiRstStep	:= 8;
					fbRstNodeTimer(IN:=FALSE);
				END_IF	
				
	
			6: tyParamOutDriver.siModOfOpt_6060 := 6;
				fbRstNodeTimer(IN:=FALSE);
				usiRstStep	:= 7;
					
			7: tyParamOutDriver.siModOfOpt_6060 := 6;
				fbRstNodeTimer(IN:=TRUE);
					
				IF tyParamInDriver.siModOfOptDisp_6061 = 6 THEN
					usiRstStep	:= 10;
					fbRstNodeTimer(IN:=FALSE);
				ELSIF fbRstNodeTimer.Q THEN
					usiRstStep	:= 9;
					fbRstNodeTimer(IN:=FALSE);
				END_IF	
			
			
						
			8:	fbModuleOK(bEn := TRUE, bModuleOK:= FALSE);
				fbRstNodeTimer(IN:=FALSE);
				usiRstStep	:= 9;
						
			9:	fbModuleOK(bModuleOK:= FALSE);
				IF eStatus = Idle THEN
					eAct	:=AWActRstNode;
				END_IF
			
				IF eStatus = Done AND eStat = AWActRstNode THEN
					usiRstStep	:= 0;
					eAct		:= AWActIdle;
				END_IF	
							
			10:IF eStatus = Idle THEN
					eAct	:= AWActRstAxisErr;
				END_IF
			
				IF eStatus = Done AND eStat = AWActRstAxisErr THEN
					eAct			:=AWActIdle;
					usiRstStep	:= 11;
				END_IF
		
					
			11:
						
				IF eStatus = Idle THEN
					eAct	:= AWActSDOWrite;
				END_IF
			
				IF eStatus = Done AND eStat = AWActSDOWrite THEN
					eAct			:= AWActIdle;
					usiRstStep	:= 13;
					
				ELSIF udiStatus = 10028 THEN
					eAct			:= AWActIdle;
					usiRstStep	:= 0;		
				END_IF
			

				
			13: bModuleNotOK	:= FALSE;
				usiRstStep	:= 0;
		END_CASE
	ELSE
		eAct	:= AWActIdle;
			
	END_IF

	IF tyParamOut.bPosDiff = FALSE THEN
		tyParamOutDriver.uiCtrlword_6040.4	:= FALSE;
	END_IF
	
END_ACTION
