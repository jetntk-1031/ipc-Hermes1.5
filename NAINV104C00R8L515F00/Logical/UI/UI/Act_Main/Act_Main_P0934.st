(** 2018-12-21 **)
ACTION Act_Main_P0934:
	
	tyP0934AW.tyMotionStd.tyNumTargetPos.diValue	:= 0;
	tyP0934AW.tyMotionStd.tyNumStepSize.diValue		:= 0;
	tyP0934AW.tyMotionStd.tyNumNomSpd.diValue		:= (p_tyNtParamCurr.tyUIAWNomSpd.diMax + p_tyNtParamCurr.tyUIAWNomSpd.diMin) / 2;
	tyP0934AW.tyMotionStd.tyNumSlwSpd.diValue		:= (p_tyNtParamCurr.tyUIAWSlwSpd.diMax + p_tyNtParamCurr.tyUIAWSlwSpd.diMin) / 3;
		
	tyP0934AW.tyMotionStd.tyNumTargetPos.diValueMax	:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax;
	tyP0934AW.tyMotionStd.tyNumTargetPos.diValueMin	:= p_tyNtParamCurr.tyUIAWTargetPos.diMin;
	
	tyP0934AW.tyMotionStd.tyNumStepSize.diValueMax	:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax;
	tyP0934AW.tyMotionStd.tyNumStepSize.diValueMin	:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax * -1;
	
	tyP0934AW.tyMotionStd.tyNumNomSpd.diValueMax	:= p_tyNtParamCurr.tyUIAWNomSpd.diMax;
	tyP0934AW.tyMotionStd.tyNumNomSpd.diValueMin	:= p_tyNtParamCurr.tyUIAWNomSpd.diMin;
	
	tyP0934AW.tyMotionStd.tyNumSlwSpd.diValueMax	:= p_tyNtParamCurr.tyUIAWSlwSpd.diMax;
	tyP0934AW.tyMotionStd.tyNumSlwSpd.diValueMin	:= p_tyNtParamCurr.tyUIAWSlwSpd.diMin;
	
	tyP0934AW.tyAW.tyNumNewWidth.diValueMax			:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax;
	tyP0934AW.tyAW.tyNumNewWidth.diValueMin			:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMin;
	
END_ACTION
