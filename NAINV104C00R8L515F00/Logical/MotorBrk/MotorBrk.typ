(*2018-12-14*)
(**)
(*Action*)

TYPE
	eMotorBrkAction : 
		(
		MotorBrkActIdle,
		MotorBrkActCW,
		MotorBrkActCCW,
		MotorBrkActCCWSenToMidSen,
		MotorBrkActMidSenToCWSen,
		MotorBrkActCWSenToMidSen,
		MotorBrkActMidSenToCCWSen,
		MotorBrkActBrkRlsOn,
		MotorBrkActBrkRlsOff,
		MotorBrkActStop,
		MotorBrkActSetMtrSigOnOrCW,
		MotorBrkActSetMtrDirOrCCW,
		MotorBrkActSetMtrBrkRls,
		MotorBrkActRstMtrSigOnOrCW,
		MotorBrkActRstMtrDirOrCCW,
		MotorBrkActRstMtrBrkRls,
		MotorBrkActSetMtrAll,
		MotorBrkActRstMtrAll,
		MotorBrkActSetMtrDirOrCCW1,
		MotorBrkActRstMtrDirOrCCW1
		);
END_TYPE