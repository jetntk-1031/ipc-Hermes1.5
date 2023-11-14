(** 2018-12-21 **)
ACTION Act_Main_P1024:
		
	//Display
	IF p_tyNtParamCurr.tyDISettings.diConvLftSen = 0 THEN
		fUIInRtStatHide(ADR(tyP1024McSetAntiGap.tyAntiGap.tyTxtLftSen.uiRtStat));
		fUIInRtStatHide(ADR(tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.uiRtStat));
	ELSE
		fUIInRtStatOff(ADR(tyP1024McSetAntiGap.tyAntiGap.tyTxtLftSen.uiRtStat));
		fUIInRtStatOff(ADR(tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.uiRtStat));
	END_IF
	
	IF p_tyNtParamCurr.tyDISettings.diConvRgtSen = 0 THEN
		fUIInRtStatHide(ADR(tyP1024McSetAntiGap.tyAntiGap.tyTxtRgtSen.uiRtStat));
		fUIInRtStatHide(ADR(tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.uiRtStat));
	ELSE
		fUIInRtStatOff(ADR(tyP1024McSetAntiGap.tyAntiGap.tyTxtRgtSen.uiRtStat));
		fUIInRtStatOff(ADR(tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.uiRtStat));
	END_IF
	
	//Machine Setting - Anti Gap Sensor Filter
	tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValueMin		:= p_tyNtParamCurr.tyUIAntiGapSenOffTm.diMin;
	tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValueMax		:= p_tyNtParamCurr.tyUIAntiGapSenOffTm.diMax;
	
	tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValueMin		:= p_tyNtParamCurr.tyUIAntiGapSenOffTm.diMin; 
	tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValueMax		:= p_tyNtParamCurr.tyUIAntiGapSenOffTm.diMax;
	
	//Parameter
	tyP1024McSetAntiGap.tyAntiGap.tyNumLftSenOff.diValue		:= p_tyMcParamCurr.tyConvLftSenAntiGapDly.diSigOffTm;
	
	tyP1024McSetAntiGap.tyAntiGap.tyNumRgtSenOff.diValue		:= p_tyMcParamCurr.tyConvRgtSenAntiGapDly.diSigOffTm;
	
END_ACTION
