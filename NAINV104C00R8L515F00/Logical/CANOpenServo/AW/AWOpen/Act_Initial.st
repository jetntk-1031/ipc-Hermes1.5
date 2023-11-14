(** 2020-03-16 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	tyParamInMove.diBacklashDistInUM	:= p_diMoveBacklashDistInUM;
	tyParamInMove.diAcc					:= p_diMoveAcc;
	tyParamInMove.diDec					:= p_diMoveDec;
	
	//p_tyParamInConvert.diPitchInUM	:= fPitchCalc(p_diWidthOffsetInUM , p_diMaxWidthInUM , p_diMinWidthInUM , p_diPitchInUM);
	
	fbModuleOK.sDevice	:= p_sDevice;
	fbModuleOK.usiNode	:= p_usiNode;
	fbModuleOK.tDlyTm	:= T#5s;
	fbModuleOK(bEn := FALSE);
	
	fbSDOWrite.sDevice	:= p_sDevice;
	fbSDOWrite.usiNode	:= p_usiNode;
	fbSDOWrite.eMotorType	:= p_eNtParamMotorType;
	fbSDOWrite(bEn := FALSE);
	
	fbFullMovAbsBl.p_tyParamOutDriver				:= ADR(tyParamOutDriver);
	fbFullMovAbsBl.tyParamInMove.diBacklashDistInUM	:= p_diMoveBacklashDistInUM;
	fbFullMovAbsBl.tyParamInMove.diAcc				:= p_diMoveAcc;
	fbFullMovAbsBl.tyParamInMove.diDec				:= p_diMoveDec;
//	fbFullMovAbsBl.tyParamInConvert					:= p_tyParamInConvert;
	fbFullMovAbsBl.bDir								:= p_bDir;
	fbFullMovAbsBl.bDirBl							:= p_bDirBl;
	fbFullMovAbsBl.bNoIndexPulse					:= p_bNoIndexPulse;
	fbFullMovAbsBl.eMotorType						:= p_eNtParamMotorType;
	fbFullMovAbsBl(bEn := FALSE);
	
	fbFullMovAbs.p_tyParamOutDriver					:= ADR(tyParamOutDriver);
	fbFullMovAbs.tyParamInMove.diBacklashDistInUM	:= p_diMoveBacklashDistInUM;
	fbFullMovAbs.tyParamInMove.diAcc				:= p_diMoveAcc;
	fbFullMovAbs.tyParamInMove.diDec				:= p_diMoveDec;
	fbFullMovAbs.tyParamInConvert					:= p_tyParamInConvert;
	fbFullMovAbs.bDir								:= p_bDir;
	fbFullMovAbs.bNoIndexPulse						:= p_bNoIndexPulse;
	fbFullMovAbs.eMotorType							:= p_eNtParamMotorType;
	fbFullMovAbs(bEn := FALSE);
	
	fbFullHm.p_tyParamOutDriver	:= ADR(tyParamOutDriver);
	fbFullHm.bDir				:= p_bDir;
	fbFullHm.bNoIndexPulse		:= p_bNoIndexPulse;
	fbFullHm.eMotorType			:= p_eNtParamMotorType;
	fbFullHm(bEn := FALSE);
	
	fbPwrOn.p_tyParamOutDriver	:= ADR(tyParamOutDriver);
	fbPwrOn.eMotorType			:= p_eNtParamMotorType;
	fbPwrOn(bEn := FALSE);
	
	fbPwrOff.p_tyParamOutDriver	:= ADR(tyParamOutDriver);
	fbPwrOff.eMotorType			:= p_eNtParamMotorType;
	fbPwrOff(bEn := FALSE);
	
	fbHoming.p_tyParamOutDriver	:= ADR(tyParamOutDriver);
	fbHoming.bDir				:= p_bDir;
	fbHoming.bNoIndexPulse		:= p_bNoIndexPulse;
	fbHoming.eMotorType			:= p_eNtParamMotorType;
	fbHoming(bEn := FALSE);
	
	fbMovAbs.p_tyParamOutDriver					:= ADR(tyParamOutDriver);
	fbMovAbs.tyParamInMove.diBacklashDistInUM	:= p_diMoveBacklashDistInUM;
	fbMovAbs.tyParamInMove.diAcc				:= p_diMoveAcc;
	fbMovAbs.tyParamInMove.diDec				:= p_diMoveDec;
	fbMovAbs.tyParamInConvert					:= p_tyParamInConvert;
	fbMovAbs.bDir								:= p_bDir;
	fbMovAbs.eMotorType							:= p_eNtParamMotorType;
	fbMovAbs(bEn := FALSE);
	
	fbMovRel.p_tyParamOutDriver					:= ADR(tyParamOutDriver);
	fbMovRel.tyParamInMove.diBacklashDistInUM	:= p_diMoveBacklashDistInUM;
	fbMovRel.tyParamInMove.diAcc				:= p_diMoveAcc;
	fbMovRel.tyParamInMove.diDec				:= p_diMoveDec;
	fbMovRel.tyParamInConvert					:= p_tyParamInConvert;
	fbMovRel.bDir								:= p_bDir;
	fbMovRel.eMotorType							:= p_eNtParamMotorType;
	fbMovRel(bEn := FALSE);
	
	fbJog.p_tyParamOutDriver	:= ADR(tyParamOutDriver);
	fbJog.tyParamInConvert		:= p_tyParamInConvert;
	fbJog.eMotorType			:= p_eNtParamMotorType;
	fbJog(bEn := FALSE);
	
	fbRstAxisErr.p_tyParamOutDriver	:= ADR(tyParamOutDriver);
	fbRstAxisErr(bEn := FALSE);
	
	fbStop.p_tyParamOutDriver	:= ADR(tyParamOutDriver);
	fbStop(bEn := FALSE);
	
	bModuleNotOK	:= TRUE;
	
END_ACTION
