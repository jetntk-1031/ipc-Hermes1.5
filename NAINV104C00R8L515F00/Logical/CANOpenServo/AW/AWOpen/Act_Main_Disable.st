(** 2020-03-16 **)
ACTION Act_Main_Disable:
	
	tyParamOut.bAxisErr			:= FALSE;
	tyParamOut.bFwdLmtSen		:= FALSE;
	tyParamOut.bInPos			:= TRUE;
	tyParamOut.bIsHomed			:= TRUE;
	tyParamOut.bPosDiff			:= FALSE;
	tyParamOut.bPwrOn			:= TRUE;
	tyParamOut.bRevLmtSen		:= FALSE;
	tyParamOut.bStopped			:= TRUE;
	tyParamOut.diActualPosInUM	:= 0;
	tyParamOut.diHmAcc			:= 0;
	tyParamOut.diHmSpdForSwitch	:= 0;
	tyParamOut.diHmSpdForZero	:= 0;
	tyParamOut.diProfileAcc		:= 0;
	tyParamOut.diProfileDec		:= 0;
	tyParamOut.udiAxisErrID		:= 0;
	
	bWidthPosDiff				:= FALSE;
	bModuleNotOK				:= FALSE;
END_ACTION
