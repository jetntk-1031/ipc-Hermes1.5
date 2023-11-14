(** 2021-08-01 **)
ACTION Act_Background_Command:
	//tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureCommand = TRUE AND p_tyParam.bFeatureCommand AND
	
	IF NOT(p_tyParam.bFeatureCommand AND tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureCommand AND bHandshakeDone) THEN
		IF tyCommandParam.a_eCommandSndQ[0] <> HermesCommandUndefined THEN 
			fHermesRmvOneCmdTyp(ADR(tyCommandParam.a_eCommandSndQ),ADR(tyCommandParam.udiMsgCmdBffr));
		END_IF
	ELSE
		IF eStatus2 <> Error THEN
			//receive command

			IF tyMsgTypeRcv.bCommand THEN
				tyCommandParam.usiCommandIdx :=  tyCommandParam.usiCommandIdx + 1; 
				tyCommandParam.eCommand := tyCommandRcv.tyData.eCommand;
				tyMsgTypeRcv.bCommand  := FALSE;
			END_IF
			
			//sending
			IF  tyCommandParam.a_eCommandSndQ[0] <> HermesCommandUndefined THEN 
				//Queuing for sending command
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeCommand);
				tyCommandSnd.tyData.eCommand :=  tyCommandParam.a_eCommandSndQ[0]; 
				tyCommandSnd.tyAvl.bCommand :=  TRUE; 
				fHermesRmvOneCmdTyp(ADR(tyCommandParam.a_eCommandSndQ),ADR(tyCommandParam.udiMsgCmdBffr));
			END_IF
		END_IF			
	END_IF
	
END_ACTION