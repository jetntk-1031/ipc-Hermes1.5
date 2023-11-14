
TYPE
	tyMotionCANTuning : 	STRUCT 
		diAsdaA2Inertia : DINT; (*Inertia*)
		diAsdaA2PosLoopGain : DINT; (*Position Loop Gain*)
		diAsdaA2PosFFGain : DINT; (*Position Feed Forward Gain*)
		diAsdaA2SpdLoopGain : DINT; (*Speed Loop Gain*)
		diAsdaA2SpdIntegral : DINT; (*Speed Integral Compensation / Speed Loop Integral Time Constant*)
		diAsdaA2LowPassFltr : DINT; (*Low-pass Filter of Resonance Suppression*)
		diAsdaA2AntiInterGain : DINT; (*Anti-interference Gain*)
		diAsdaA2FirstTorqueCmd : DINT; (*Anti-interference Gain*)
		diLex28LTNDderivativeGain_P800 : DINT; (*Inertia*)
		diLex28LTNIintegralGain_P801 : DINT; (*Position Loop Gain*)
		diLex28LTNIVdeIntlGain_P802 : DINT; (*Position Feed Forward Gain*)
		diLex28LTNPpropotionalGain_P803 : DINT; (*Speed Loop Gain*)
		diLex28LTNUSERGAIN_P804 : DINT; (*Speed Integral Compensation / Speed Loop Integral Time Constant*)
		diLex28NLAFFLPFHZspringFil_P805 : DINT; (*Low-pass Filter of Resonance Suppression*)
		diLex28NLFILTDAMPING_P814 : DINT; (*Anti-interference Gain*)
		diLex28NLFILTT1_P815 : DINT; (*Anti-interference Gain*)
		diPronetInertia : DINT; (*Inertia*)
		diPronetRealTimeAutoAdjSet : DINT; (*Position Loop Gain*)
		diPronetPosLoopGain : DINT; (*Position Loop Gain*)
		diPronetSpdLoopGain : DINT; (*Speed Loop Gain*)
		diPronetSpdIntegral : DINT; (*Speed Integral Compensation / Speed Loop Integral Time Constant*)
		diPronetTorqueFilter : DINT; (*Torque Filter*)
		diPronetPosFeedForward : DINT; (*Position Feed Forward*)
		diPronetLowSpeedTestFiltering : DINT; (*Low Speed Testing Filter*)
		diPronetStopMode : DINT; (*StopMode*)
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyMotionCANInternal : 	STRUCT  (*Local Variables*)
		usiStep : USINT;
		udiErrStatus : UDINT;
		fbHomeSenTO : TON := (PT:=T#3s);
		fbTO : TON;
		fbTO1 : TON := (PT:=T#500ms);
		fbTm : TON;
		fbTm1 : TON;
		fbTm2 : TON;
		diMovPosInUM : DINT;
		fbRstNode : CANopenNMT; (*Reset CANopen Node*)
		usiCntr : USINT;
	END_STRUCT;
	tyMotionCANInternal1 : 	STRUCT  (*Local Variables*)
		usiStep : USINT;
		usiAxisErrCnt : USINT;
		usiPwrOnCnt : USINT;
		fbMotionCANRstAxisErr : fbMotionCANRstAxisErr;
		fbMotionCANPwrOn : fbMotionCANPwrOn;
	END_STRUCT;
	tyMotionCANInternal2 : 	STRUCT  (*Local Variables*)
		usiStep : USINT;
		udiErrStatus : UDINT;
		fbTO : TON := (PT:=T#1000ms);
		fbMotionCANFullPwrOn : fbMotionCANFullPwrOn;
		fbMotionCANHoming : fbMotionCANHoming;
		fbMotionCANMovRel : fbMotionCANMovRel;
		fbMotionCANStop : fbMotionCANStop;
	END_STRUCT;
	tyMotionCANInternal3 : 	STRUCT  (*Local Variables*)
		bLimitMoveAllowed : BOOL;
		usiStep : USINT;
		udiErrStatus : UDINT;
		diMovePosInUM : DINT;
		fbMotionCANFullHm : fbMotionCANFullHm;
		fbMotionCANMovAbs : fbMotionCANMovAbs;
		fbMotionCANMovAbsBl : fbMotionCANMovAbs;
		fbMotionCANStop : fbMotionCANStop;
	END_STRUCT;
	tyMotionCANInternal4 : 	STRUCT  (*Local Variables*)
		fbMotionCANMovAbs : fbMotionCANMovAbs;
		fbMotionCANMovRel : fbMotionCANMovRel;
	END_STRUCT;
END_TYPE

(**)
(*SDO Read & Write*)

TYPE
	tyCANSDOWriteArrayInternal1 : 	STRUCT  (*Local Variables*)
		fbCANSDOWriteArray : fbCANSDOWriteArray;
	END_STRUCT;
	tyCANSDOReadArrayInternal : 	STRUCT  (*Local Variables*)
		usiLoopIdx : USINT;
		fbCANSDORead : CANopenSDORead8; (*Read a node's object entries*)
	END_STRUCT;
	tyCANSDOWriteArrayInternal : 	STRUCT  (*Local Variables*)
		usiLoopIdx : USINT;
		fbCANSDOWrite : CANopenSDOWrite8; (*Read a node's object entries*)
	END_STRUCT;
	tyCANSDOReadArrayParamIn : 	STRUCT 
		uiIdx : UINT := 0; (*Number of the index entry to be read*)
		usiSubIdx : USINT := 0; (*Number of the subindex entry to be read*)
	END_STRUCT;
	tyCANSDOReadArrayParamOut : 	STRUCT 
		udiDat : UDINT := 0; (*Write data*)
		usiDatLen : USINT := 0; (*Length of the entry write*)
	END_STRUCT;
	tyCANSDOWriteArrayParamIn : 	STRUCT 
		uiIdx : UINT := 0; (*Number of the index entry to be write*)
		usiSubIdx : USINT := 0; (*Number of the subindex entry to be write*)
		udiDat : UDINT := 0; (*Write data*)
		usiDatLen : USINT := 0; (*Length of the entry write*)
	END_STRUCT;
END_TYPE

(**)
(*Motion CAN Parameter*)

TYPE
	tyMotionCANParamOut : 	STRUCT  (*Output Parameters*)
		bPwrOn : BOOL := FALSE; (*Motor Power Turned On*)
		bIsHomed : BOOL := FALSE; (*Motor Homing Done*)
		bInPos : BOOL := FALSE; (*Motor In Position*)
		bStopped : BOOL := FALSE; (*Motor Stopped*)
		bFwdLmtSen : BOOL := FALSE; (*Forward Limit Sensor On*)
		bRevLmtSen : BOOL := FALSE; (*Reverse Limit Sensor On*)
		bAxisErr : BOOL := FALSE; (*Motor Axis Error*)
		bPosDiff : BOOL := FALSE; (*Actual Position and Required Position Is Different*)
		diActualPosInUM : DINT := 0; (*Actual Position in um*)
		udiAxisErrID : UDINT := 0; (*Axis Error ID*)
		diHmSpdForSwitch : DINT := 0; (*Homing Speed During Search For Switch*)
		diHmSpdForZero : DINT := 0; (*Homing Speed During Search For Zero*)
		diProfileAcc : DINT := 0; (*Profile Acceleration*)
		diProfileDec : DINT := 0; (*Profile Deceleration*)
		diHmAcc : DINT := 0; (*Homing Acceleration*)
		diSchProfileAcc : UDINT := 0; (*Profile Acceleration*)
		diSchProfileDec : UDINT := 0; (*Profile Deceleration*)
		diSchHmMode : DINT := 0; (*Homing Acceleration*)
	END_STRUCT;
	tyMotionCANDriverIn : 	STRUCT  (*Parameters Input From Driver*)
		diActualPos_6064 : DINT := 0; (*Actual Position 6064*)
		siModOfOptDisp_6061 : SINT := 0; (*Mode of Operation Display 6061*)
		uiErrCode_603F : UINT := 0; (*Error Code 603F*)
		uiStatword_6041 : UINT := 0; (*Statusword 6041*)
		udiDigitalInputs_60FD : UDINT := 0; (*Digital Inputs 60FD*)
	END_STRUCT;
	tyMotionCANDriverOut : 	STRUCT  (*Parameters Output To Driver*)
		diJogVel_60FF : DINT := 0; (*Jogging Velocity 60FF*)
		diTargetPos_607A : DINT := 0; (*Target Position For Move 607A*)
		siHmMethod_6098 : SINT := 0; (*Homing Method 6098*)
		siModOfOpt_6060 : SINT := 0; (*Mode Of Operation 6060*)
		udiMoveSpd_6081 : UDINT := 0; (*Moving Speed 6081*)
		uiCtrlword_6040 : UINT := 0; (*Controlword 6040*)
		udiSchProfileAcc_6083 : UDINT := 0; (*Profile Acceleration 6083*)
		udiSchProfileDec_6084 : UDINT := 0; (*Profile Deceleration 6084*)
		siSchHmMethod_6098 : UINT := 0; (*Homing Method 6098*)
	END_STRUCT;
	tyMotionCANParamInMove : 	STRUCT  (*Input Parameters For Move*)
		diPosInUM : DINT := 10000; (*Moving Position in um*)
		diDistInUM : DINT := 10000; (*Moving Distance in um*)
		diBacklashDistInUM : DINT := 3000; (*Backlash Distance in um*)
		diVelInUMPS : DINT := 50000; (*Moving Velocity in um/s*)
		diAcc : DINT := 500; (*Moving Acceleration in ms*)
		diDec : DINT := 500; (*Moving Deceleration in ms*)
	END_STRUCT;
	tyMotionCANParamInHm : 	STRUCT  (*Input Parameters For Homing*)
		siMode : SINT := 1; (*Homing Method*)
		diStartVelInUMPS : DINT := 50000; (*Homing Start Velocity in um/s*)
		diOffsetVelInUMPS : DINT := 3000; (*Homing Offset Velocity in um/s*)
		diAcc : DINT := 500; (*Homing Acceleration in ms*)
	END_STRUCT;
	tyMotionCANParamInJog : 	STRUCT  (*Input Parameters For Jogging*)
		diVelInUMPS : DINT := 5000; (*Jogging Velocity in um/s*)
	END_STRUCT;
	tyMotionCANParamInConvert : 	STRUCT  (*Input Parameters For mm & Pulse Conversion*)
		diPitchInUM : DINT := 10000; (*Pitch in um*)
		diPulsePerRev : DINT := 1280000; (*Pulse Per Revolution*)
		diPrimaryGearRatio : DINT := 1; (*Primary Gear Ratio*)
		diSecondaryGearRatio : DINT := 1; (*Secondary Gear Ratio*)
	END_STRUCT;
END_TYPE

(**)
(*Convert*)

TYPE
	tyUMPulseConvertInternal : 	STRUCT  (*Local Variables*)
		rMicrometer : REAL := 0;
		rPitchInUM : REAL := 0;
		rPrimaryGearRatio : REAL := 0;
		rPulse : REAL := 0;
		rPulsePerRev : REAL := 0;
		rSecondaryGearRatio : REAL := 0;
	END_STRUCT;
	tyUMPS100mRPMConvertInternal : 	STRUCT  (*Local Variables*)
		rUMPS : REAL := 0;
		rPitchInUM : REAL := 0;
		rPrimaryGearRatio : REAL := 0;
		r100mRPM : REAL := 0;
		rSecondaryGearRatio : REAL := 0;
	END_STRUCT;
	tySltPosConvertInternal : 	STRUCT  (*Local Variables*)
		rPosInUM : REAL := 0;
		rSlt : REAL := 0;
		rMinSltPosInUM : REAL := 0;
		rSltToSltInUM : REAL := 0;
	END_STRUCT;
	tyMSAccConvertInternal : 	STRUCT  (*Local Variables*)
		rAccDecInMSOut : REAL := 0;
		rAccDecInMSIn : REAL := 0;
		rPitchInMM : REAL := 0;
		rGearRatio : REAL := 0;
		rVelInMMPS : REAL := 0;
		rVelInRPM : REAL := 0;
		rVelIn100mRPM : REAL := 0.0;
		rAccDecIn100mRPMPS : REAL := 0;
		rPulsePerRev : REAL := 0;
	END_STRUCT;
END_TYPE

(**)
(*Servo Motor type*)

TYPE
	eServoMotorType : 
		(
		DeltaAsdaA2,
		SchneiderLexium28,
		EstunPronet
		);
END_TYPE
