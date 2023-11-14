(** 2019-03-29 **)
ACTION Act_Link:
	
//	IF p_bLinkUIInvertDCCtrl THEN
//		p_bInvertBrake ACCESS p_UIInvertDCModBrakePress;
//	ELSE
//		p_bInvertBrake ACCESS p_MotorBrkMtrBrkRls;
//	END_IF
	IF p_bManual THEN 
		p_bBypsCoverSW1 ACCESS p_UIMnlModBypassTopCover1;			// ADD
		p_bTopCvrUnlckToDS ACCESS p_UIMnlModTopCvrUnlckToDS;			//
		p_bTopCvrUnlckToUS ACCESS p_UIMnlModTopCvrUnlckToUS;			//
		p_bMachineSafetySigToDS ACCESS p_UIMnlModMachineSafetySigToDS;	// ADD
		p_bMachineSafetySigToUS ACCESS p_UIMnlModMachineSafetySigToUS;	// ADD
		p_bSafetyTopCoverSWCoil1 ACCESS p_UIMnlModSafetyTopCoverSWCoil1;	//
		p_bCoverPBLED1 ACCESS p_UIMnlModCoverPBLED1;				//
	ELSE	
		p_bBypsCoverSW1 ACCESS p_UIBypassTopCover1 ;			// ADD
		p_bMachineSafetySigToDS ACCESS p_UIMachineSafetySigToDS ;			//
		p_bMachineSafetySigToUS ACCESS  p_UIMachineSafetySigToUS ;			//
		p_bTopCvrUnlckToDS ACCESS p_UITopCvrUnlckToDS;	// ADD  
		p_bTopCvrUnlckToUS ACCESS p_UITopCvrUnlckToUS ;	// ADD  
		p_bSafetyTopCoverSWCoil1 ACCESS p_UISafetyTopCoverSWCoil1;	//
		p_bCoverPBLED1 ACCESS p_UICoverPBLED1;				//	
	END_IF
		
	
	IF p_eLinkOpsInvertInvertCurrPos = InvertCurrPosAtRemote THEN
		
		IF p_eConvStatus = Busy THEN	
			p_bConvMtrCW	:= p_bLinkConvMtrDirOrRToL;
			p_bConvMtrCCW  := p_bLinkConvMtrSigOnOrLToR;		
		ELSE
			IF p_bManual = TRUE AND p_bLinkUIConvDCCtrl = TRUE THEN
				p_bConvMtrCW	:= p_bLinkConvMtrSigOnOrLToR;
				p_bConvMtrCCW	:= p_bLinkConvMtrDirOrRToL;
			ELSE
				p_bConvMtrCW	:= FALSE;
				p_bConvMtrCCW	:= FALSE;
			END_IF	
			
		END_IF
			
	ELSIF p_eLinkOpsInvertInvertCurrPos = InvertCurrPosAtHome THEN
		
		IF p_eConvStatus = Busy THEN
			p_bConvMtrCW	:= p_bLinkConvMtrSigOnOrLToR;
			p_bConvMtrCCW	:= p_bLinkConvMtrDirOrRToL;	
		ELSE
			IF p_bManual = TRUE AND p_bLinkUIConvDCCtrl = TRUE THEN
				p_bConvMtrCW	:= p_bLinkConvMtrSigOnOrLToR;
				p_bConvMtrCCW	:= p_bLinkConvMtrDirOrRToL;
			ELSE
				p_bConvMtrCW	:= FALSE;
				p_bConvMtrCCW	:= FALSE;
			END_IF	
			
		END_IF	
		
	ELSE	
		p_bConvMtrCW	:= p_bLinkConvMtrSigOnOrLToR;
		p_bConvMtrCCW	:= p_bLinkConvMtrDirOrRToL;
	END_IF	
		
	//Output Invert Bypass/Invert Signal
//	p_bInvertBypsMod	:= p_usiLinkProdRcpCurrRcpMcMod = 0;
//	p_bInvertInvertMod	:= p_usiLinkProdRcpCurrRcpMcMod = 1;
	
	IF p_tyDI.bSafetyRlySig AND p_tyDI.bCoverSWSig AND p_tyDI.bEStopSig AND p_tyDI.bThermalPrtSig THEN  
		p_bMtrPwrRly := TRUE ;
	ELSE
		p_bMtrPwrRly := FALSE;
	END_IF
	
END_ACTION
