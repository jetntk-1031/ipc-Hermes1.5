
ACTION Act_OptP0940WriteDO:
	
	// USB
	IF tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bRtCompl = TRUE THEN
		IF tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bValue = TRUE THEN
			eUSSMEMAAct	:= SMEMAActSetSig;
			
			IF p_eUSSMEMAStat = SMEMAActSetSig AND p_eUSSMEMAStatus = Done THEN
				eUSSMEMAAct	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bRtCompl	:= FALSE;
			END_IF	
		ELSE
			eUSSMEMAAct	:= SMEMAActRstSig;
			
			IF p_eUSSMEMAStat = SMEMAActRstSig AND p_eUSSMEMAStatus = Done THEN
				eUSSMEMAAct	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyUSSMEMA.tyBtnUSB.bRtCompl	:= FALSE;
			END_IF	
		END_IF	
	END_IF	
	
	// USB2
	IF tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bRtCompl = TRUE THEN
		IF tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bValue = TRUE THEN
			eUSSMEMA2Act	:= SMEMAActSetSig;
			
			IF p_eUSSMEMA2Stat = SMEMAActSetSig AND p_eUSSMEMA2Status = Done THEN
				eUSSMEMA2Act	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bRtCompl	:= FALSE;
			END_IF	
		ELSE
			eUSSMEMA2Act	:= SMEMAActRstSig;
			
			IF p_eUSSMEMA2Stat = SMEMAActRstSig AND p_eUSSMEMA2Status = Done THEN
				eUSSMEMA2Act	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyUSSMEMA2.tyBtnUSB.bRtCompl	:= FALSE;
			END_IF	
		END_IF	
	END_IF	
	
	// DBA
	IF tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bRtCompl = TRUE THEN
		IF tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bValue = TRUE THEN
			eDSSMEMAAct	:= SMEMAActSetSig;
			
			IF p_eDSSMEMAStat = SMEMAActSetSig AND p_eDSSMEMAStatus = Done THEN
				eDSSMEMAAct	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bRtCompl	:= FALSE;
			END_IF	
		ELSE
			eDSSMEMAAct	:= SMEMAActRstSig;
			
			IF p_eDSSMEMAStat = SMEMAActRstSig AND p_eDSSMEMAStatus = Done THEN
				eDSSMEMAAct	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyDSSMEMA.tyBtnDBA.bRtCompl	:= FALSE;
			END_IF	
		END_IF	
	END_IF	
	
	// DBA Stat
	IF tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bRtCompl = TRUE THEN
		IF tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bValue = TRUE THEN
			eDSSMEMAAct	:= SMEMAActSetStatSig;
			
			IF p_eDSSMEMAStat = SMEMAActSetStatSig AND p_eDSSMEMAStatus = Done THEN
				eDSSMEMAAct	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bRtCompl	:= FALSE;
			END_IF	
		ELSE
			eDSSMEMAAct	:= SMEMAActRstStatSig;
			
			IF p_eDSSMEMAStat = SMEMAActRstStatSig AND p_eDSSMEMAStatus = Done THEN
				eDSSMEMAAct	:= SMEMAActIdle;
				
				tyP0940CommCtrl.tyDSSMEMA.tyBtnDBAStat.bRtCompl	:= FALSE;
			END_IF	
		END_IF	
	END_IF	
	
END_ACTION
