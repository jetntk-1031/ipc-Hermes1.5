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
			

			tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations	                                 	:= 2;
			tyCurrentConfigurationSnd.tyAvl.iDownstreamConfigurations	                        	    := 2;
			tyCurrentConfigurationSnd.tyAvl.bUpstreamConfigurations	                            	    := tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations>0;
			tyCurrentConfigurationSnd.tyAvl.bDownstreamConfigurations	                            	:= tyCurrentConfigurationSnd.tyAvl.bUpstreamConfigurations>0;
			
			tyCurrentConfigurationSnd.tyData.sMachineId			                        		        := p_sMcId;
			tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort	                             	:= p_tyHermesConfiguration.tySvyParam.uiSvySvstemPort;
			tyCurrentConfigurationSnd.tyAvl.bMachineId					                              	:= tyCurrentConfigurationSnd.tyData.sMachineId <> '';
			tyCurrentConfigurationSnd.tyAvl.bSupervisorySystemPort		                            	:= tyCurrentConfigurationSnd.tyData.uiSupervisorySystemPort <> 0;
			
			IF tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations -1 >= 0 THEN
				FOR i := 0 TO tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations -1  DO
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId	            := p_tyHermesConfiguration.a_tyUSParam[i].iLaneID;
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress	                := p_tyHermesConfiguration.a_tyUSParam[i].sHostAddress;
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId        	:= p_tyHermesConfiguration.a_tyUSParam[i].sUpstreamInterfaceId;
					tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort                      	:= p_tyHermesConfiguration.a_tyUSParam[i].uiHostPort;
				
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamLaneId		        := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].iUpstreamLaneId <> 0;
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bHostAddress		            := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sHostAddress <> '';
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bUpstreamInterfaceId	        := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].sUpstreamInterfaceId <> '';
					tyCurrentConfigurationSnd.tyAvl.a_tyUpstreamConfigurations[i].bPort		                    := tyCurrentConfigurationSnd.tyData.a_tyUpstreamConfigurations[i].uiPort <>0;
				END_FOR
			END_IF

			
			IF tyCurrentConfigurationSnd.tyAvl.iDownstreamConfigurations -1 >= 0 THEN
				FOR i := 0 TO tyCurrentConfigurationSnd.tyAvl.iUpstreamConfigurations -1  DO
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId	            := p_tyHermesConfiguration.a_tyDSParam[i].iLaneID;
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress	                := p_tyHermesConfiguration.a_tyDSParam[i].sClientAddress;
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId        	:= p_tyHermesConfiguration.a_tyDSParam[i].sDownstreamInterfaceId;
					tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort                      	:= p_tyHermesConfiguration.a_tyDSParam[i].uiSvrPort;
				
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamLaneId	    		:= tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].iDownstreamLaneId <>0;
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bClientAddress		       		 := tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sClientAddress <> '';
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bDownstreamInterfaceId	    	:= tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].sDownstreamInterfaceId <> '';
					tyCurrentConfigurationSnd.tyAvl.a_tyDownstreamConfigurations[i].bPort							:= tyCurrentConfigurationSnd.tyData.a_tyDownstreamConfigurations[i].uiPort <> 0;
				END_FOR
			END_IF
			

		
			
		END_IF
		
	END_IF

END_ACTION
