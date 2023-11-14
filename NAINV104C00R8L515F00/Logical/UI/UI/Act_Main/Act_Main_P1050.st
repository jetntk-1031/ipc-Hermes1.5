(** 2018-12-21 **)
ACTION Act_Main_P1050:
	
	//Leader
	//Display
	tyP1050LFSet.tyLdr.tyNumAfterOven.diValueMax	:= p_tyNtParamCurr.tyUILFIndexAfterOven.diMax;
	tyP1050LFSet.tyLdr.tyNumAfterOven.diValueMin	:= p_tyNtParamCurr.tyUILFIndexAfterOven.diMin;
	
	tyP1050LFSet.tyLdr.tyNumBeforeOven.diValueMax	:= p_tyNtParamCurr.tyUILFIndexBeforeOven.diMax;
	tyP1050LFSet.tyLdr.tyNumBeforeOven.diValueMin	:= p_tyNtParamCurr.tyUILFIndexBeforeOven.diMin;
	
	tyP1050LFSet.tyLdr.tyNumAfterOven2.diValueMax	:= p_tyNtParamCurr.tyUILFIndexAfterOven.diMax;
	tyP1050LFSet.tyLdr.tyNumAfterOven2.diValueMin	:= p_tyNtParamCurr.tyUILFIndexAfterOven.diMin;
	
	tyP1050LFSet.tyLdr.tyNumBeforeOven2.diValueMax	:= p_tyNtParamCurr.tyUILFIndexBeforeOven.diMax;
	tyP1050LFSet.tyLdr.tyNumBeforeOven2.diValueMin	:= p_tyNtParamCurr.tyUILFIndexBeforeOven.diMin;
	
	FOR i := 1 TO c_uiP1050TableSize DO
		tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue	:= p_tyMcParamCurr.a_sLFIPAddr[i];
		tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= (BOOL_TO_USINT(p_tyMcParamCurr.a_bLFOnline[i])) + 1;
	END_FOR
	
	//Parameter
	tyP1050LFSet.tyLdr.tyNumAfterOven.diValue	:= p_tyMcParamCurr.diLFMcIdxAfterOven;
	tyP1050LFSet.tyLdr.tyNumBeforeOven.diValue	:= p_tyMcParamCurr.diLFMcIdxBeforeOven;
	tyP1050LFSet.tyLdr.tyNumAfterOven2.diValue	:= p_tyMcParamCurr.diLFMcIdxAfterOven2;
	tyP1050LFSet.tyLdr.tyNumBeforeOven2.diValue	:= p_tyMcParamCurr.diLFMcIdxBeforeOven2;
	
END_ACTION
