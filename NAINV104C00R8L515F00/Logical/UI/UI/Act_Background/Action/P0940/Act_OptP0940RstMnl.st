
ACTION Act_OptP0940RstMnl:
	
	IF EDGEPOS((bManualMod = FALSE) OR (p_eUSSMEMAStatus = Error OR p_eDSSMEMAStatus = Error)) THEN
	
		eUSSMEMAAct		:= SMEMAActIdle;
		eDSSMEMAAct		:= SMEMAActIdle;
		eUSSMEMA2Act	:= SMEMAActIdle;
		
		//SMEMA
		tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bValue			:= FALSE;
		tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bValue			:= FALSE;
		tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bValue		:= FALSE;
		tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBA.bValue			:= FALSE;
	
	END_IF	

END_ACTION
