(** 2019-03-25 **)
ACTION Act_LogStep:
	
//log
	IF EDGEPOS (bClsLog) THEN 
		memset(ADR(logStep),0,SIZEOF(logStep));
		logIndexStep := 0;
	END_IF
	
	blog := eOpsStep <> eGotoOpsStepDummy;
    
	IF blog THEN
		logStep[logIndexStep] := eOpsStep;
		logIndexStep := logIndexStep + 1;
		IF logIndexStep > SIZEOF(logStep)/SIZEOF(logStep[0]) -1 THEN
			logIndexStep := 0;
		END_IF
	END_IF
        
	eGotoOpsStepDummy := eOpsStep;
	
	
END_ACTION
