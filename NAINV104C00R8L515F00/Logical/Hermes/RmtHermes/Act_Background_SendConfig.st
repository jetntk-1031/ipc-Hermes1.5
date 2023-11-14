(** 2021-08-01 **)
ACTION Act_Background_SendConfig:
	
	IF eStatus1 <> Error THEN
		
		IF tyMsgTypeRcv.bGetConfiguration = TRUE THEN
			
			IF bWriteConfig = FALSE AND bUpdateUIData = FALSE THEN
			
				tyCurrentConfigurationSnd.tyData.sMachineId			                        		            := p_sMcId;
				tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort	                                 	:= p_tyHermesConfiguration.tySvyParam.uiSvySvstemPort;
				
				FOR i := 0 TO (p_iInput-1) DO	
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId	            := p_tyHermesConfiguration.a_tyUSParam[i].iLaneID;
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress	                := p_tyHermesConfiguration.a_tyUSParam[i].sHostAddress;
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId        	:= p_tyHermesConfiguration.a_tyUSParam[i].sUpstreamInterfaceId;
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort                  	    := p_tyHermesConfiguration.a_tyUSParam[i].uiHostPort;
				END_FOR	
				
				FOR i := 0 TO (p_iOutput-1) DO	
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId	        := p_tyHermesConfiguration.a_tyDSParam[i].iLaneID;
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress	            := p_tyHermesConfiguration.a_tyDSParam[i].sClientAddress;
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId	    := p_tyHermesConfiguration.a_tyDSParam[i].sDownstreamInterfaceId;
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort                 	:= p_tyHermesConfiguration.a_tyDSParam[i].uiSvrPort;
			    END_FOR
		
				tyCurrentConfigurationSnd.tyAvl.bMachineId					                                	:= tyCurrentConfigurationSnd.tyData.sMachineId <> '';
				tyCurrentConfigurationSnd.tyAvl.bSupervisorySystemPort		                                 	:= tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort <> 0;
				tyCurrentConfigurationSnd.tyAvl.bUpstreamConfigurations	                                     	:= TRUE;
				tyCurrentConfigurationSnd.tyAvl.bDownstreamConfigurations	                                 	:= TRUE;
				tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations	                                     	:= p_iInput;
				tyCurrentConfigurationSnd.tyAvl.iDownstreamConfigurations	   	                                := p_iOutput;
				
				FOR i := 0 TO (p_iInput-1) DO
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId	            := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId <>0;
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bHostAddress		            := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress <>'';
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamInterfaceId	        := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId <>'';
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bPort		                    := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort <>0;
				END_FOR
				
				FOR i := 0 TO (p_iOutput-1) DO
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId	    	:= tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId <>0;
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bClientAddress		        := tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress <>'';
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamInterfaceId	    := tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId <>'';
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bPort		                := tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort <>0;
				END_FOR
				
					
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeCurrConfiguration);
				
				tyMsgTypeRcv.bGetConfiguration	:= FALSE;
				
			END_IF
			
		END_IF
		
	END_IF
		
END_ACTION
