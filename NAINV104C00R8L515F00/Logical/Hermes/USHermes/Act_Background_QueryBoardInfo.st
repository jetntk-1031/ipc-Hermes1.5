(** 2021-08-01 **)
ACTION Act_Background_QueryBoardInfo:
	IF NOT(tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureSendBoardInfo = TRUE AND p_tyParam.bFeatureQueryBoardInfo AND bHandshakeDone) THEN
		bRcvBoardInfoOk              := FALSE;;
		bManuallInsertLastZone        := FALSE;
		bRcvBoardInfoIncompl := FALSE;
	ELSE
		IF eStatus2 <> Error THEN
		
			IF EDGEPOS(p_bQueryBoardInfo) THEN
	
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeQueryBoardInfo);
				
				tyQueryBoardInfo.tyData.sTopBarcode						            := p_sTopBarcode;
				tyQueryBoardInfo.tyData.sBottomBarcode							    := p_sBottomBarcode;
			
				tyQueryBoardInfo.tyAvl.bTopBarcode									:= tyQueryBoardInfo.tyData.sTopBarcode <> '';
				tyQueryBoardInfo.tyAvl.bBottomBarcode							    := tyQueryBoardInfo.tyData.sBottomBarcode <>'';

			END_IF	
		
			IF tyMsgTypeRcv.bSendBoardInfo THEN
			
				IF p_bQueryBoardInfo AND (udiStatus2 = 0) THEN //After CmpParamRcv
					IF tySendBoardInfoRcv.tyAvl.bBoardId AND tySendBoardInfoRcv.tyAvl.bBoardIdCreatedBy AND p_bManualInsertZoneHvBrd = FALSE AND p_bManualInsertEndSen = FALSE THEN //Wait Empty
				
						bRcvBoardInfoOk              := TRUE;
						tySendBoardInfoAcc          := tySendBoardInfoRcv;
						tyMsgTypeRcv.bSendBoardInfo := FALSE;
					
					ELSIF ((tySendBoardInfoRcv.tyAvl.bBoardId = FALSE) OR (tySendBoardInfoRcv.tyAvl.bBoardIdCreatedBy = FALSE)) THEN //no BoardId or BoardIdCreatedBy
						bRcvBoardInfoIncompl := TRUE;
						bManuallInsertLastZone         := FALSE;
						tyMsgTypeRcv.bSendBoardInfo := FALSE;
					END_IF
				
				ELSIF p_bQueryBoardInfo = FALSE THEN
					tyMsgTypeRcv.bSendBoardInfo     := FALSE;
				END_IF
			
			END_IF
		
		
			IF 	bRcvBoardInfoOk = TRUE THEN
				bManuallInsertLastZone        := TRUE; //Board data received from upstream, block Upstream to allow manual insert
			
				tyInfoData1.sProgNm		:= p_sProgNm;
				tyInfoData1.udiCode		:= 10000;
				tyInfoData1.eSeverity	:= AlmSeverityInfo;
				tyInfoData1.sAlmMsg		:= p_sInfoMsg1;
			
				IF p_bTransportFinished THEN

					bRcvBoardInfoOk := FALSE;
					bManuallInsertLastZone        := FALSE;
				END_IF
			
		    
			ELSIF bRcvBoardInfoIncompl = TRUE THEN //receive dummy, no need block upstream
			
				tyInfoData2.sProgNm		:= p_sProgNm;
				tyInfoData2.udiCode		:= 10000;
				tyInfoData2.eSeverity	:= AlmSeverityInfo;
				tyInfoData2.sAlmMsg		:= p_sInfoMsg2;
				
			END_IF	
        
			IF p_bQueryBoardInfo = FALSE THEN
			
				//Clear Info Message 1
				tyInfoData1.sProgNm		:= '';
				tyInfoData1.udiCode		:= 0;
				tyInfoData1.eSeverity	:= AlmSeverityNA;
				tyInfoData1.sAlmMsg		:= '';
				bRcvBoardInfoOk := FALSE;
				bManuallInsertLastZone        := FALSE;
			
				//Clear Info Message 2
				tyInfoData2.sProgNm		:= '';
				tyInfoData2.udiCode		:= 0;
				tyInfoData2.eSeverity	:= AlmSeverityNA;
				tyInfoData2.sAlmMsg		:= '';
				bRcvBoardInfoIncompl := FALSE;
			
			END_IF
		
		END_IF	
		
		
	END_IF

		
END_ACTION
