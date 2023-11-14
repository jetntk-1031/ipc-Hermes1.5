(** 2019-01-16 **)
ACTION Act_OpsInitial:
	
	eOpsStep			:= InvertStepNA;
	eGotoOpsStep		:= InvertStepInitChkCondition;
	
	bStepInitConv		:= FALSE;	
	bStepInitDone		:= FALSE;
	bStepUSStandby		:= FALSE;
	bStepUSCommTmr		:= FALSE;
	bStepEntToEnd		:= FALSE;
	bStepEntToInOff		:= FALSE;
	bStepRev			:= FALSE;
	bStepPreExit		:= FALSE;
	bStepDSStandby		:= FALSE;
	bStepDSCommTmr		:= FALSE;
	bStepExitBrd		:= FALSE;
	bStepSafeMode		:= FALSE;
	bStepInvRtrnEntToEnd	:= FALSE;
	bStepInvRtrnEntToInOff	:= FALSE;
	bStepInvRtrnUSStandby	:= FALSE;
	bStepInvRtrnUSCommTmr	:= FALSE;
END_ACTION
