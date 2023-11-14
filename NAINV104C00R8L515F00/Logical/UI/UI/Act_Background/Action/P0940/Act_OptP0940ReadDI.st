
ACTION Act_OptP0940ReadDI:

	tyP0940CommCtrl.tyUSSMEMA.tyBtnUBA.bValue			:= p_tyDI.bUBA;
	tyP0940CommCtrl.tyUSSMEMA.tyBtnUBAStat.bValue		:= p_tyDI.bUBAStat;
	
	tyP0940CommCtrl.tyDSSMEMA.tyBtnDSB.bValue			:= p_tyDI.bDSB;
	
	tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBA.bValue			:= p_tyDI.bUBA2;
	tyP0940CommCtrl.tyUSSMEMA2.tyBtnUBAStat.bValue		:= p_tyDI.bUBAStat2;
	
END_ACTION
