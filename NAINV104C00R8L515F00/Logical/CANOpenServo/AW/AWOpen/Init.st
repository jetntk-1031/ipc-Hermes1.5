(** 2019-04-24 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_AWOpenStat	:= ADR(eStat);
	p_AWOpenStatus	:= ADR(eMainStatus);
	p_AWOpenStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_AWOpenAlmData		:= ADR(tyAlmData);
	p_AWOpenAlmData1	:= ADR(tyAlmData1);
	p_AWOpenAlmData2	:= ADR(tyAlmData2);
	p_AWOpenAlmData3	:= ADR(tyAlmData3);
	
	//Output
	p_AWOpenParamOut		:= ADR(tyParamOut);
	p_AWOpenPwrOn			:= ADR(tyParamOut.bPwrOn);
	p_AWOpenIsHomed			:= ADR(tyParamOut.bIsHomed);
	p_AWOpenPosDiff			:= ADR(tyParamOut.bPosDiff);
	p_AWOpenAxisErr			:= ADR(tyParamOut.bAxisErr);
	p_AWOpenAxisErrID		:= ADR(tyParamOut.udiAxisErrID);
	p_AWOpenFwdLmtSen		:= ADR(tyParamOut.bFwdLmtSen);
	p_AWOpenRevLmtSen		:= ADR(tyParamOut.bRevLmtSen);
	p_AWOpenActualPos		:= ADR(tyParamOut.diActualPosInUM);
	p_AWOpenAxisErrTxt		:= ADR(sAxisErrTxt);
	p_AWOpenWidthPosDiff	:= ADR(bWidthPosDiff);
	p_AWOpenJogging			:= ADR(bJogging);
	p_AWOpenOpenSen			:= ADR(bOpenSen);
	p_AWOpenCloseSen		:= ADR(bCloseSen);
	
	(* Always Change If Project Change *)
	
END_PROGRAM