(** 2021-05-18 **)
ACTION Act_Main_Disable:
	
	bUSAllow			:= TRUE;
	bDSAllow			:= TRUE;
	bProdAccDataMnl		:= FALSE;
	bProdUpdtDataMnl	:= FALSE;
	bMagAccDataMnl		:= FALSE;
	bWaitRlsBrd			:= FALSE;
	
	usiProdAccDatStep		:= 0;
	usiProdUpdtDatStep		:= 0;
	tyInfoData.sProgNm		:= '';
	tyInfoData.udiCode		:= 0;
	tyInfoData.eSeverity	:= AlmSeverityNA;
	tyInfoData.sAlmMsg		:= '';
	
	usiMagAccDatStep		:= 0;
	tyInfoData1.sProgNm		:= '';
	tyInfoData1.udiCode		:= 0;
	tyInfoData1.eSeverity	:= AlmSeverityNA;
	tyInfoData1.sAlmMsg		:= '';
	
	bSetTm		:= FALSE;
	
	eStatus		:= Idle;
	udiStatus	:= 0;
	bProdRcpErr	:= FALSE;
	bMagRcpErr	:= FALSE;
	bLeaderSeqCtrlInActive	:= FALSE;
	
	bProdRcpErrNotExist		:= FALSE;
	bProdRcpErrWidthMismatch:= FALSE;
	
	
END_ACTION
