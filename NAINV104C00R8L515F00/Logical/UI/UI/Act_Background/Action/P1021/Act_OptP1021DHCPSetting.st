
ACTION Act_OptP1021DHCPSetting:
	
	IF p_tyMcParamCurr.eNetworkMod = IPFromDHCPServer  THEN
		fUIInRtStatOff(ADR(tyP1021McSetGen.tyGen.tyStringIPAddr.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP1021McSetGen.tyGen.tyStringSubnetMask.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP1021McSetGen.tyGen.tyStringIPAddr.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP1021McSetGen.tyGen.tyStringSubnetMask.uiMaskRtStat));
	END_IF
		
	//Trigger Save Condition
	IF tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.bRtCompl THEN
		
		bSaveNetworkPriority := TRUE;
		
		usiNetworkModeNew := tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx;
		
		fUIInRtStatHide(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
		
		tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.bRtCompl := FALSE;
		
		IF usiNetworkModeOld<>usiNetworkModeNew THEN
			IF tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx = DINT_TO_USINT(SetIPManually) THEN
				
				tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue		:= p_sHWInfoIPAddr;
				tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue	:= p_sHWInfoSubnetMask;
				fUIInRtStatOff(ADR(tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat));
				
			END_IF
		END_IF
		
	END_IF
	
	// If Change from DHCP to Manual, Pop Up Detail to fill in
	IF tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat.0 = FALSE THEN		
		//IP Check
		IF tyP1021McSetGen.tyNetwork.tyStringIPAddr.bRtCompl = TRUE THEN		
			IF fIPValid(tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue , ADR(a_iIPPart1)) THEN
				
				tyP1021McSetGen.tyNetwork.tyStringIPAddr.bRtCompl	:= FALSE;						
			ELSE				
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit);
			
				IF tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit.tyBtnNo.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit.tyBtnNo.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxIPAddrInvalidEdit.tyBtnNo.bValue	:= FALSE;
				
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
				
					//Recover IP Address
					tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue	:= p_sHWInfoIPAddr;				
					tyP1021McSetGen.tyNetwork.tyStringIPAddr.bRtCompl	:= FALSE;				
				END_IF			
			END_IF		
		END_IF
		
		//Subnet Check
		IF tyP1021McSetGen.tyNetwork.tyStringSubnetMask.bRtCompl = TRUE THEN		
			IF fIPValid(tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue , ADR(a_iSubnetMaskPart1)) THEN
				
				tyP1021McSetGen.tyNetwork.tyStringSubnetMask.bRtCompl	:= FALSE;						
			ELSE				
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit);
			
				IF tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit.tyBtnNo.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit.tyBtnNo.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxSubnetInvalidEdit.tyBtnNo.bValue	:= FALSE;
				
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);				
					//Recover IP Address
					tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue	:= p_sHWInfoSubnetMask;				
					tyP1021McSetGen.tyNetwork.tyStringSubnetMask.bRtCompl	:= FALSE;
				
				END_IF			
			END_IF		
		END_IF
		
		IF tyP1021McSetGen.tyNetwork.tyBtnSave.bRtCompl = TRUE THEN
			
			tyP1021McSetGen.tyNetwork.tyBtnSave.bRtCompl	:= FALSE;
			tyP1021McSetGen.tyNetwork.tyBtnSave.bValue		:= FALSE;
			
			tyP1021McSetGen.tyGen.tyStringIPAddr.sValue 	:= tyP1021McSetGen.tyNetwork.tyStringIPAddr.sValue;	
			tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue := tyP1021McSetGen.tyNetwork.tyStringSubnetMask.sValue;
			
			fUIInRtStatHide(ADR(tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat));
			
		ELSIF tyP1021McSetGen.tyNetwork.tyBtnCancel.bRtCompl = TRUE THEN
			tyP1021McSetGen.tyNetwork.tyBtnCancel.bRtCompl	:= FALSE;
			tyP1021McSetGen.tyNetwork.tyBtnCancel.bValue	:= FALSE;
		
			fUIInRtStatHide(ADR(tyP1021McSetGen.tyNetwork.tyLyr.uiRtStat));
		
		END_IF	
		
	END_IF
	
	//Once click save, change config
	IF tyCommon.tySet.tyBtnSave.bRtCompl = TRUE AND bSaveNetworkPriority AND NOT bNetworkConfigChanged THEN
		
		IF usiNetworkModeOld<>usiNetworkModeNew THEN
			
			IF usiChgNetworkConfigStep = 0 THEN
				
				IF usiNetworkModeNew = DINT_TO_USINT(IPFromDHCPServer) THEN
					tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyTxtMsg.usiValueIdx := 189;
				ELSE
					tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyTxtMsg.usiValueIdx := 190;
				END_IF
				
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxChgNetworkAsk);
				
				IF tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnYes.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
	
					usiChgNetworkConfigStep	:= 1;				
					
				ELSIF tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnNo.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxChgNetworkAsk.tyBtnNo.bValue	:= FALSE;
					
					tyP1021McSetGen.tyGen.tyStringIPAddr.sValue		:= p_sHWInfoIPAddr;
					tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue := p_sHWInfoSubnetMask;
					
					
					//Recover Old Dropdown Value
					tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx	:= usiNetworkModeOld;
					
					//Reset Save Priority					
					bSaveNetworkPriority := FALSE;	
					
					//Reset Network Step
					usiChgNetworkConfigStep	:= 0;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
					
				END_IF
				
			ELSIF usiChgNetworkConfigStep = 1 THEN
				
				IF usiNetworkModeNew = DINT_TO_USINT(IPFromDHCPServer) THEN
					usiNetworkModeSelected := DINT_TO_USINT(IPFromDHCPServer);
				ELSE
					usiNetworkModeSelected := DINT_TO_USINT(SetIPManually);
				END_IF
			
				eHWInfoAct	:= HWInfoActSetEthConfigMode;
				
				IF p_eHWInfoStat = HWInfoActSetEthConfigMode AND p_eHWInfoStatus = Done THEN
					eHWInfoAct	:= HWInfoActIdle;
				
					usiChgNetworkConfigStep	:= 2;					
				
				ELSIF p_eHWInfoStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxSetDHCPError);
				
					IF tyP1021McSetGen.tyMsgBoxSetDHCPError.tyBtnNo.bRtCompl = TRUE THEN
						tyP1021McSetGen.tyMsgBoxSetDHCPError.tyBtnNo.bRtCompl	:= FALSE;
						tyP1021McSetGen.tyMsgBoxSetDHCPError.tyBtnNo.bValue	:= FALSE;
				
						p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
					
						//Recover Old Dropdown Value
						tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx	:= usiNetworkModeOld;
				
						//Reset Network Step
						usiChgNetworkConfigStep	:= 0;
						
						//Reset Save Priority					
						bSaveNetworkPriority := FALSE;	
				
					END_IF
				END_IF
				
			ELSIF usiChgNetworkConfigStep = 2 THEN
				
				IF p_eHWInfoStat = HWInfoActIdle THEN
										
					usiChgNetworkConfigStep := 0;
					bNetworkConfigChanged := TRUE;
					
				END_IF
				
			END_IF

		ELSE
			//Reset Save Priority					
			bSaveNetworkPriority := FALSE;	
		END_IF
		
	END_IF
	
	//Refresh/Set IP Address and Subnet Mask
	IF bNetworkConfigChanged THEN
		
		IF usiRefreshDetailStep = 0 THEN
			IF usiNetworkModeNew = DINT_TO_USINT(IPFromDHCPServer) THEN
				
				eHWInfoAct	:= HWInfoActGetIPAddr;
				
				IF p_eHWInfoStat = HWInfoActGetIPAddr AND p_eHWInfoStatus = Done THEN
					eHWInfoAct	:= HWInfoActIdle;
				
					usiRefreshDetailStep	:= 1;	
					
					//Refresh IP value
					tyP1021McSetGen.tyGen.tyStringIPAddr.sValue := p_sHWInfoIPAddr;
				
				ELSIF p_eHWInfoStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxGetIPAddrErr);
				
					IF tyP1021McSetGen.tyMsgBoxGetIPAddrErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1021McSetGen.tyMsgBoxGetIPAddrErr.tyBtnNo.bRtCompl	:= FALSE;
						tyP1021McSetGen.tyMsgBoxGetIPAddrErr.tyBtnNo.bValue	:= FALSE;
				
						p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);			
				
						//Reset Save Priority
						bSaveNetworkPriority := FALSE;
				
						//Reset Refresh Step
						usiRefreshDetailStep	:= 0;
						
						bNetworkConfigChanged	:= FALSE;
					
					END_IF
				END_IF
				
			ELSE
				eHWInfoAct	:= HWInfoActSetIPAddr;
				
				sSetIPAddr	:= tyP1021McSetGen.tyGen.tyStringIPAddr.sValue;
				
				IF p_eHWInfoStat = HWInfoActSetIPAddr AND p_eHWInfoStatus = Done THEN
					eHWInfoAct	:= HWInfoActIdle;
				
					usiRefreshDetailStep	:= 1;	
				
				ELSIF p_eHWInfoStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr);
				
					IF tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl	:= FALSE;
						tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bValue	:= FALSE;
				
						p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
						
						tyP1021McSetGen.tyGen.tyStringIPAddr.sValue := p_sHWInfoIPAddr;
				
						//Reset Save Priority
						bSaveNetworkPriority := FALSE;
				
						//Reset Refresh Step
						usiRefreshDetailStep	:= 0;
						
						bNetworkConfigChanged	:= FALSE;
				
					END_IF
				END_IF
			END_IF
			
		ELSIF usiRefreshDetailStep = 1 THEN
			
			IF p_eHWInfoStat = HWInfoActIdle THEN
				usiRefreshDetailStep := 2;
			END_IF
			
		ELSIF usiRefreshDetailStep = 2 THEN
			IF usiNetworkModeNew = DINT_TO_USINT(IPFromDHCPServer) THEN
				
				eHWInfoAct	:= HWInfoActGetSubnetMask;
				
				IF p_eHWInfoStat = HWInfoActGetSubnetMask AND p_eHWInfoStatus = Done THEN
					eHWInfoAct	:= HWInfoActIdle;	
				
					//Reset Save Priority
					bSaveNetworkPriority := FALSE;
				
					//Reset Refresh Step
					usiRefreshDetailStep	:= 0;
					
					//Refresh subnet value
					tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue := p_sHWInfoSubnetMask;
					
					bNetworkConfigChanged	:= FALSE;
				
				ELSIF p_eHWInfoStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxGetSubnetErr);
				
					IF tyP1021McSetGen.tyMsgBoxGetSubnetErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1021McSetGen.tyMsgBoxGetSubnetErr.tyBtnNo.bRtCompl	:= FALSE;
						tyP1021McSetGen.tyMsgBoxGetSubnetErr.tyBtnNo.bValue	:= FALSE;
				
						p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);			
				
						//Reset Save Priority
						bSaveNetworkPriority := FALSE;
				
						//Reset Refresh Step
						usiRefreshDetailStep	:= 0;
						
						bNetworkConfigChanged	:= FALSE;
				
					END_IF
				END_IF
				
			ELSE
				eHWInfoAct	:= HWInfoActSetSubnetMask;
				
				sSetSubnetMask	:= tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue;
				
				IF p_eHWInfoStat = HWInfoActSetSubnetMask AND p_eHWInfoStatus = Done THEN
					eHWInfoAct	:= HWInfoActIdle;
					
					//Reset Save Priority
					bSaveNetworkPriority := FALSE;
				
					//Reset Refresh Step
					usiRefreshDetailStep	:= 0;	
					
					bNetworkConfigChanged	:= FALSE;	
				
				ELSIF p_eHWInfoStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxUpdtSubnetErr);
				
					IF tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl	:= FALSE;
						tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bValue	:= FALSE;
				
						p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);	
						
						tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue := p_sHWInfoSubnetMask;
						
						//Reset Save Priority
						bSaveNetworkPriority := FALSE;
				
						//Reset Refresh Step
						usiRefreshDetailStep	:= 0;
						
						bNetworkConfigChanged	:= FALSE;
										
					END_IF
				END_IF
			END_IF
			
		END_IF
	END_IF
	
			
		
	
END_ACTION
