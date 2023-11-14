
ACTION Act_OptP0001Startup:
	
	//Screen Saver
	p_tyP0000SSaver ACCESS ADR(tyP0000SSaver.tySSaver);
	
	IF (eChgPage = UIP0001Startup) OR (eCurrPage = UIP0001Startup) THEN
		
		eStartupAct		:= StartupActRun;
		
		IF p_eStartupStat = StartupActRun AND p_eStartupStatus = Done THEN
			eStartupAct	:= StartupActIdle;
			
			IF p_bAlarmErr OR p_bAlarmWarning THEN
				eChgPage	:= UIP0600Alm;
			ELSE
				eChgPage	:= UIP0002Menu;
			END_IF
			
		END_IF
		
	END_IF
	
	tyP0001Startup.tyStartup.tyBarGraphStartup.iValue	:= DINT_TO_INT(p_eStartupStep + 1);
	tyP0001Startup.tyStartup.tyTxtStartupStat.sTxt		:= p_sStartupStepTxt;
	
	//IP Config
	IF DiagCpuIsSimulated() = FALSE THEN
		IF p_eStartupStep>1 THEN
			
			IF p_bStartupGetConfigDone THEN
				IF bTempAddrFillDone=FALSE THEN
					
					tyMcParamWr:= p_tyMcParamCurr;
					
					sTempIPAddr 	:= p_sHWInfoIPAddr;
					sTempSubnetMask	:= p_sHWInfoSubnetMask;
					udiTempEthMode	:= p_udiHWInfoEthMode;
									
					bTempAddrFillDone	:= TRUE;	
				END_IF
			END_IF
			
			IF bTempAddrFillDone THEN
				
				IF bIPConfigChgDone=FALSE THEN
						
					IF  (p_tyMcParamCurr.eNetworkMod = UDINT_TO_DINT(udiTempEthMode)) AND (p_tyMcParamCurr.sIPAddr = sTempIPAddr) AND (p_tyMcParamCurr.sSubnetMask = sTempSubnetMask) THEN
							
						p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);
					ELSE	
						IF p_bStartupMismatchSetConfigDone THEN
							
							IF (p_tyMcParamCurr.eNetworkMod <> UDINT_TO_DINT(udiTempEthMode)) THEN
								tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx := 194;	
							ELSIF (p_tyMcParamCurr.sIPAddr <> sTempIPAddr) AND (p_tyMcParamCurr.sSubnetMask <> sTempSubnetMask) THEN
								tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx := 193;
							ELSIF (p_tyMcParamCurr.sIPAddr <> sTempIPAddr) THEN
								tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx := 191;
							ELSE
								tyP0001Startup.tyMsgBoxIPConfig.tyTxtMsg.usiValueIdx := 192;
							END_IF
								
							p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxIPConfig);
							
						ELSE
							sSetIPAddr				:= p_tyMcParamCurr.sIPAddr;
							sSetSubnetMask			:= p_tyMcParamCurr.sSubnetMask;
							usiNetworkModeSelected	:= DINT_TO_USINT(p_tyMcParamCurr.eNetworkMod);
								
							bMismatchOverWriteConfig			:= TRUE;
						END_IF
							
					END_IF
				END_IF
			END_IF
		END_IF
	END_IF
	
	IF tyP0001Startup.tyMsgBoxIPConfig.tyBtnYes.bRtCompl = TRUE THEN
		tyP0001Startup.tyMsgBoxIPConfig.tyBtnYes.bRtCompl	:= FALSE;
		tyP0001Startup.tyMsgBoxIPConfig.tyBtnYes.bValue	:= FALSE;
		
		bIPConfigChgDone	:= TRUE;

		p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);
										
	ELSIF tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl = TRUE THEN
		
		IF (p_tyMcParamCurr.eNetworkMod <> UDINT_TO_DINT(udiTempEthMode))  THEN
			
			IF udiTempEthMode = DINT_TO_UDINT(IPFromDHCPServer) THEN
				
				bOverwriteEthMode	:= TRUE;
				bOverwriteIP 		:= FALSE;
				bOverwriteSubnet	:= FALSE;
				
				usiNetworkModeSelected	:= UDINT_TO_USINT(udiTempEthMode);
				
				tyMcParamWr.eNetworkMod	:= UDINT_TO_DINT(udiTempEthMode);
				
				bIPConfigChgDone	:= TRUE;
				
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl:= FALSE;
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);
			ELSE
				bOverwriteEthMode	:= TRUE;
				bOverwriteIP 		:= TRUE;
				bOverwriteSubnet	:= TRUE;
				
				usiNetworkModeSelected	:= UDINT_TO_USINT(udiTempEthMode);
				sSetIPAddr				:= sTempIPAddr;
				sSetSubnetMask			:= sTempSubnetMask;
				
				tyMcParamWr.eNetworkMod			:= UDINT_TO_DINT(udiTempEthMode);
				tyMcParamWr.sIPAddr				:= sTempIPAddr;
				tyMcParamWr.sSubnetMask			:= sTempSubnetMask;
				
				bIPConfigChgDone	:= TRUE;
				
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl:= FALSE;
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);
			END_IF
			
		ELSE
			
			IF (p_tyMcParamCurr.sIPAddr <> sTempIPAddr) AND (p_tyMcParamCurr.sSubnetMask <> sTempSubnetMask) THEN
				
				bOverwriteEthMode	:= FALSE;
				bOverwriteIP 		:= TRUE;
				bOverwriteSubnet	:= TRUE;
					
				sSetIPAddr		:= sTempIPAddr;
				sSetSubnetMask	:= sTempSubnetMask;
					
				tyMcParamWr.sIPAddr				:= sTempIPAddr;
				tyMcParamWr.sSubnetMask			:= sTempSubnetMask;
					
				bIPConfigChgDone	:= TRUE;
					
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl	:= FALSE;
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue	:= FALSE;
					
				p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);
					
			ELSIF (p_tyMcParamCurr.sIPAddr <> sTempIPAddr) THEN
				
				bOverwriteEthMode	:= FALSE;
				bOverwriteIP 		:= TRUE;
				bOverwriteSubnet	:= FALSE;
					
				sSetIPAddr			:= sTempIPAddr;
					
				tyMcParamWr.sIPAddr	:= sTempIPAddr;
					
				bIPConfigChgDone	:= TRUE;
					
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl	:= FALSE;
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue	:= FALSE;
					
				p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);
			ELSE
				
				bOverwriteEthMode	:= FALSE;
				bOverwriteIP 		:= FALSE;
				bOverwriteSubnet	:= TRUE;
				
				sSetSubnetMask	:= sTempSubnetMask;
				
				tyMcParamWr.sSubnetMask			:= sTempSubnetMask;
				
				bIPConfigChgDone				:= TRUE;
				
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bRtCompl	:= FALSE;
				tyP0001Startup.tyMsgBoxIPConfig.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);
			END_IF
		END_IF
	END_IF
	
	
	
	
END_ACTION
