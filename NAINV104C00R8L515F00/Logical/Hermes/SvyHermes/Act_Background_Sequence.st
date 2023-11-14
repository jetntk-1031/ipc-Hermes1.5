(** 2021-08-01 **)
ACTION Act_Background_Sequence:
	
	IF eStatus1 <> Error THEN
		
		//Sequence
		fbSequenceSvy.bRstState		        := bRstState;
		fbSequenceSvy(bEn := TRUE);
		
		IF fbSequenceSvy.eState >= HermesStateConnected THEN
			bHandshakeDone	:= TRUE;
		ELSE
			bHandshakeDone	:= FALSE;
		END_IF
		
		IF fbSequenceSvy.eMsgTypeSnd = HermesMsgTypeSServiceDescription THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeSServiceDescription);
			

			tySServiceDescriptionSnd.tyData.sSystemId									        := p_sMcId;
			tySServiceDescriptionSnd.tyData.sVersion											:= p_sVersion;
			tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureCheckAliveResponse   	:= (p_tyParam.bFeatureCheckAliveResponse) AND (p_tyParam.tRcvAlive <> T#0s) AND (p_tyParam.tSndAlive <> T#0s);
			tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureConfiguration	    	:= p_tyParam.bFeatureConfiguration;
			tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureBoardTracking	    	:= p_tyParam.bFeatureBoardTracking;
			tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureQueryWorkOrderInfo	    := p_tyParam.bFeatureQueryWorkOrderInfo;
			tySServiceDescriptionSnd.tyData.tySupportedFeatures.bFeatureSendWorkOrderInfo    	:= FALSE; //p_tyParam.bFeatureSendWorkOrderInfo
			
			tySServiceDescriptionSnd.tyAvl.bSystemId										    := tySServiceDescriptionSnd.tyData.sSystemId<>'';
			tySServiceDescriptionSnd.tyAvl.bVersion											    := TRUE;
			tySServiceDescriptionSnd.tyAvl.bSupportedFeatures								    := p_tyParam.bFeatureCheckAliveResponse OR p_tyParam.bFeatureConfiguration OR p_tyParam.bFeatureBoardTracking OR p_tyParam.bFeatureQueryWorkOrderInfo OR p_tyParam.bFeatureSendWorkOrderInfo;
			tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureCheckAliveResponse	    := (p_tyParam.bFeatureCheckAliveResponse) AND (p_tyParam.tRcvAlive <> T#0s) AND (p_tyParam.tSndAlive <> T#0s);
			tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureConfiguration			:= p_tyParam.bFeatureConfiguration;
			tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureBoardTracking	        := p_tyParam.bFeatureBoardTracking;
			tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureQueryWorkOrderInfo		:= p_tyParam.bFeatureQueryWorkOrderInfo;
			tySServiceDescriptionSnd.tyAvl.tySupportedFeatures.bFeatureSendWorkOrderInfo    	:= FALSE; //p_tyParam.bFeatureSendWorkOrderInfo
			
			
		ELSIF fbSequenceSvy.eMsgTypeSnd = HermesMsgTypeCurrConfiguration AND bWriteConfig = FALSE AND bUpdateUIData = FALSE THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeCurrConfiguration);
			
			tyCurrentConfigurationSnd.tyData.sMachineId			                        		        := p_sMcId;
			tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort	                             	:= p_tyHermesConfiguration.tySvyParam.uiSvySvstemPort;
			tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId	            := p_tyHermesConfiguration.a_tyUSParam[0].iLaneID;
			tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].sHostAddress	                := p_tyHermesConfiguration.a_tyUSParam[0].sHostAddress;
			tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].sUpstreamInterfaceId        	:= p_tyHermesConfiguration.a_tyUSParam[0].sUpstreamInterfaceId;
			tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].uiPort                      	:= p_tyHermesConfiguration.a_tyUSParam[0].uiHostPort;
			
			tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId	        := p_tyHermesConfiguration.a_tyDSParam[0].iLaneID;
			tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].sClientAddress	            := p_tyHermesConfiguration.a_tyDSParam[0].sClientAddress;
			tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].sDownstreamInterfaceId	    := p_tyHermesConfiguration.a_tyDSParam[0].sDownstreamInterfaceId;
			tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].uiPort                 	:= p_tyHermesConfiguration.a_tyDSParam[0].uiSvrPort;

			tyCurrentConfigurationSnd.tyAvl.bMachineId					                              	:= tyCurrentConfigurationSnd.tyData.sMachineId <> '';
			tyCurrentConfigurationSnd.tyAvl.bSupervisorySystemPort		                            	:= tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort <> 0;
			tyCurrentConfigurationSnd.tyAvl.bUpstreamConfigurations	                            	    := TRUE;
			tyCurrentConfigurationSnd.tyAvl.bDownstreamConfigurations	                            	:= TRUE;
			tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations	                                 	:= 1;
			tyCurrentConfigurationSnd.tyAvl.iDownstreamConfigurations	                        	    := 1;
			tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[0].bUpstreamLaneId		        := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].iUpstreamLaneId <> 0;
			tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[0].bHostAddress		            := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].sHostAddress <> '';
			tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[0].bUpstreamInterfaceId	        := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].sUpstreamInterfaceId <> '';
			tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[0].bPort		                    := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[0].uiPort <>0;
			
			tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[0].bDownstreamLaneId	    	:= tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].iDownstreamLaneId <>0;
			tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[0].bClientAddress		        := tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].sClientAddress <> '';
			tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[0].bDownstreamInterfaceId	    := tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].sDownstreamInterfaceId <> '';
			tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[0].bPort		                := tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[0].uiPort <> 0;
			
		END_IF
		
	END_IF

END_ACTION
