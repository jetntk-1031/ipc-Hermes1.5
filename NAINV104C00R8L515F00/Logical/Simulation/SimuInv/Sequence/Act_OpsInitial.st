(** 2019-01-16 **)
ACTION Act_OpsInitial:
	
	IF p_bInletShutterPrep OR p_bOutletShutterPrep THEN
		eSimuInvGotoStep	:= SimuInvStepInitShutterCls;
	ELSE
		eSimuInvGotoStep	:= SimuInvStepChkCondition;
	END_IF
	
	eSimuInvStep		:= SimuInvStepNA;
	
END_ACTION
