(** 2021-08-01 **)
ACTION Act_Background_QueryWorkOrderInfo:
	
	IF eStatus2 <> Error THEN
		
		IF EDGEPOS(p_bQueryWorkOrderInfo OR p_bReinsertBrd) AND p_bAcceptCondition THEN //Hermes 1.3 Board Reinsert Function
	
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeQueryWorkOrderInfo);
				
			fHermesGenerateUUID(ADR(tyQueryWorkOrderInfo.tyData.sQueryId) , p_tyDTStructure , pa_usiMacAddr); //Generate QueryID

			tyQueryWorkOrderInfo.tyData.sMachineId							:= p_sMcId;
			tyQueryWorkOrderInfo.tyData.sMagazineId							:= p_sMagazineId;
			tyQueryWorkOrderInfo.tyData.iSlotId								:= p_iSlotId;
			tyQueryWorkOrderInfo.tyData.sBarcode						    := p_sBarcode;
				
			tyQueryWorkOrderInfo.tyAvl.bQueryId							    := tyQueryWorkOrderInfo.tyData.sQueryId <> '';
			tyQueryWorkOrderInfo.tyAvl.bMachineId							:= tyQueryWorkOrderInfo.tyData.sMachineId <> '';
			tyQueryWorkOrderInfo.tyAvl.bMagazineId							:= tyQueryWorkOrderInfo.tyData.sMagazineId <> '';
			tyQueryWorkOrderInfo.tyAvl.bSlotId								:= tyQueryWorkOrderInfo.tyData.iSlotId <> 0;
			tyQueryWorkOrderInfo.tyAvl.bBarcode								:= tyQueryWorkOrderInfo.tyData.sBarcode <> '';
			bQueryInsertBoard   	:= TRUE;	//Hermes 1.3 Board Reinsert Function
			bRcvInsertBoardInfo		:= FALSE;	//Hermes 1.3 Board Reinsert Function
			bManualInsertData       := FALSE;	//Hermes 1.3 Board Reinsert Function
			bReplyWorkOrderInfo     := FALSE;
			bRcvWorkOrderInfo2      := FALSE; 
		END_IF
		
		IF (p_bQueryWorkOrderInfo OR p_bReinsertBrd) AND p_bAcceptCondition = FALSE THEN
			bRstWorkOrderInfo := TRUE;
		END_IF
		
		IF tyMsgTypeRcv.bSendWorkOrderInfo THEN
			
			IF (p_bQueryWorkOrderInfo OR p_bReinsertBrd) AND (udiStatus2 = 0) THEN //After CmpParamRcv
				IF tySendWorkOrderInfoRcv.tyAvl.bWorkOrderId AND tySendWorkOrderInfoRcv.tyData.sWorkOrderId <> '' AND p_bAcceptCondition AND 
					tySendWorkOrderInfoRcv.tyData.rWidth >= 50.0 AND tySendWorkOrderInfoRcv.tyData.rWidth <= 460.0 THEN //Wait Accept Conditon On
				
					//bRcvWorkOrderInfo1 := TRUE;
					bRcvWorkOrderInfo2  := FALSE; 
					bRcvInsertBoardInfo := TRUE;
					tySendWorkOrderInfoAcc := tySendWorkOrderInfoRcv;
					tyMsgTypeRcv.bSendWorkOrderInfo := FALSE;
					sWorkOrderId := tySendWorkOrderInfoAcc.tyData.sWorkOrderId;
					
					
				ELSIF (tySendWorkOrderInfoRcv.tyAvl.bWorkOrderId = FALSE OR tySendWorkOrderInfoRcv.tyData.sWorkOrderId = '') OR
					tySendWorkOrderInfoRcv.tyData.rWidth < 50.0 OR tySendWorkOrderInfoRcv.tyData.rWidth > 460.0THEN
					bRcvWorkOrderInfo2 := TRUE;
					bRcvInsertBoardInfo := FALSE;
					tyMsgTypeRcv.bSendWorkOrderInfo := FALSE;
				END_IF
				
			ELSIF (p_bQueryWorkOrderInfo = FALSE OR p_bReinsertBrd = FALSE) THEN
				tyMsgTypeRcv.bSendWorkOrderInfo := FALSE;
			END_IF
			
		END_IF
		
		IF 	bRcvWorkOrderInfo1 = TRUE THEN //AND NOT(p_bHermesSvyQueryBoardInfo OR p_bReinsertBrd) THEN
			
			tyInfoData1.sProgNm		:= p_sProgNm;
			tyInfoData1.udiCode		:= 10000;
			tyInfoData1.eSeverity	:= AlmSeverityInfo;
			tyInfoData1.sAlmMsg		:= p_sInfoMsg1;
			
		ELSIF bRcvWorkOrderInfo2 = TRUE THEN
			
			tyInfoData2.sProgNm		:= p_sProgNm;
			tyInfoData2.udiCode		:= 10000;
			tyInfoData2.eSeverity	:= AlmSeverityInfo;
			tyInfoData2.sAlmMsg		:= p_sInfoMsg2;
			
		END_IF
		
			
		IF  bRstWorkOrderInfo = TRUE THEN
			
			tyInfoData3.sProgNm		:= p_sProgNm;
			tyInfoData3.udiCode		:= 10000;
			tyInfoData3.eSeverity	:= AlmSeverityInfo;
			tyInfoData3.sAlmMsg		:= p_sInfoMsg3;		
				
		END_IF
		
		IF 	EDGEPOS(bQueryInsertBoard) THEN
			
			tyInfoData4.sProgNm		:= p_sProgNm;
			tyInfoData4.udiCode		:= 10000;
			tyInfoData4.eSeverity	:= AlmSeverityInfo;
			tyInfoData4.sAlmMsg		:= p_sInfoMsg4;
		 
		ELSIF EDGEPOS(p_bAcceptCondition = TRUE AND bManualInsertData AND p_bAWWidthPosDiff = FALSE) THEN
			tyInfoData4.sProgNm		:= '';                   //Clear previous message
			tyInfoData4.udiCode		:= 0;
			tyInfoData4.eSeverity	:= AlmSeverityNA;
			tyInfoData4.sAlmMsg		:= '';
			
			tyInfoData5.sProgNm		:= p_sProgNm;
			tyInfoData5.udiCode		:= 10000;
			tyInfoData5.eSeverity	:= AlmSeverityInfo;
			tyInfoData5.sAlmMsg		:= p_sInfoMsg5;
			                                                                                                                                                                                                                                                                                       //Debug
//		ELSIF (EDGEPOS (bQueryInsertBoard AND (p_bConvRgtSen OR p_bConvLftSen)) OR EDGEPOS(bRcvInsertBoardInfo= FALSE AND p_eLinkMcParamDSCommMod = McSetCommModHermes AND p_tyMcParamCurr.bHermesSvyEn AND p_tyNtParamCurr.bHermesBrdReInsertPrep AND (p_bConvRgtSen OR p_bConvLftSen)) OR EDGEPOS(bManualInsertData AND p_bConvLftSen))  AND NOT p_bOpsGConvStepDSTmr AND NOT p_bOpsGConvStepDSCommTmr AND NOT p_bOpsGConvStepEntBrd AND p_bOpsRun THEN
//			tyInfoData6.sProgNm		:= p_sProgNm;
//			tyInfoData6.udiCode		:= 10000;
//			tyInfoData6.eSeverity	:= AlmSeverityInfo;
//			tyInfoData6.sAlmMsg		:= p_sInfoMsg6;			
			
		END_IF
		
		IF EDGEPOS(bRcvInsertBoardInfo OR bRcvWorkOrderInfo2) AND udiStatus2 = 0 THEN
			fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeReplyWorkOrderInfo);
			
			IF  bRcvInsertBoardInfo AND p_bAcceptCondition  THEN 
				tyReplyWorkOrderInfo.tyData.sWorkOrderId					    := tySendWorkOrderInfoAcc.tyData.sWorkOrderId;
				tyReplyWorkOrderInfo.tyData.sBatchId					      	:= tySendWorkOrderInfoAcc.tyData.sBatchId;
				tyReplyWorkOrderInfo.tyData.iStatus							    := 1;          //WorkOrder accepted
				bReplyWorkOrderInfo                                             := TRUE; 
			ELSIF bRcvWorkOrderInfo2 THEN   
				tyReplyWorkOrderInfo.tyData.sWorkOrderId					    := tySendWorkOrderInfoRcv.tyData.sWorkOrderId;
				tyReplyWorkOrderInfo.tyData.sBatchId					      	:= tySendWorkOrderInfoRcv.tyData.sBatchId;
				tyReplyWorkOrderInfo.tyData.iStatus							    := 0;         //WorkOrder Rejected
				bRcvWorkOrderInfo2                                              := FALSE;
			ELSE
				tyReplyWorkOrderInfo.tyData.sWorkOrderId					    := tySendWorkOrderInfoAcc.tyData.sWorkOrderId;
				tyReplyWorkOrderInfo.tyData.sBatchId					      	:= tySendWorkOrderInfoAcc.tyData.sBatchId;
				tyReplyWorkOrderInfo.tyData.iStatus							    := 2;          //WorkOrder accepted and queue
				bReplyWorkOrderInfo                                             := TRUE;
			END_IF
			
			tyReplyWorkOrderInfo.tyAvl.bWorkOrderId					:= tyReplyWorkOrderInfo.tyData.sWorkOrderId <> '';
			tyReplyWorkOrderInfo.tyAvl.bBatchId                     := tyReplyWorkOrderInfo.tyData.sBatchId <> '';
			tyReplyWorkOrderInfo.tyAvl.bStatus                      :=  TRUE; 
		END_IF 
		
		//Hermes 1.3 Board Reinsert Function
		IF (p_bQueryWorkOrderInfo OR p_bReinsertBrd) AND p_bAcceptCondition AND tySendWorkOrderInfoRcv.tyAvl.bWidth AND bRcvInsertBoardInfo THEN                  // ADD for 2023-0061E01SSJob
			//tySendWorkOrderInfoNewRcv := tySendWorkOrderInfoRcv;
			diReqWidthInUM := REAL_TO_DINT(tySendWorkOrderInfoRcv.tyData.rWidth*1000);
			sWorkOrderId := tySendWorkOrderInfoRcv.tyData.sWorkOrderId;
			sBatchId := tySendWorkOrderInfoRcv.tyData.sBatchId;
			//sRecipeNm	:= tySendWorkOrderInfoRcv.tyData.sProductTypeId;	//Add On
			p_tyProdRcpCurrRcp.diWidthInUM	:= diReqWidthInUM;
			bQueryInsertBoard   := FALSE;
			//bRcvInsertBoardInfo := FALSE;
			bManualInsertData := TRUE;
			tySendWorkOrderInfoRcv.tyAvl.bWidth:= FALSE;
		END_IF
        
		IF ((p_bQueryWorkOrderInfo = FALSE AND bQueryInsertBoard = FALSE) AND NOT(p_bConvRgtSen)) THEN	//Hermes 1.3 Board Reinsert Function
			
			//Clear Info Message 1
			tyInfoData1.sProgNm		:= '';
			tyInfoData1.udiCode		:= 0;
			tyInfoData1.eSeverity	:= AlmSeverityNA;
			tyInfoData1.sAlmMsg		:= '';
			bRcvWorkOrderInfo1 := FALSE;
			
			//Clear Info Message 2
			tyInfoData2.sProgNm		:= '';
			tyInfoData2.udiCode		:= 0;
			tyInfoData2.eSeverity	:= AlmSeverityNA;
			tyInfoData2.sAlmMsg		:= '';
			bRcvWorkOrderInfo2 := FALSE;
			
			//Clear Info Message 3
			tyInfoData3.sProgNm		:= '';
			tyInfoData3.udiCode		:= 0;
			tyInfoData3.eSeverity	:= AlmSeverityNA;
			tyInfoData3.sAlmMsg		:= '';
			bRstWorkOrderInfo := FALSE;
			
			//Clear Info Message 4
			tyInfoData4.sProgNm		:= '';
			tyInfoData4.udiCode		:= 0;
			tyInfoData4.eSeverity	:= AlmSeverityNA;
			tyInfoData4.sAlmMsg		:= '';
			
		ELSIF (p_bReinsertBrd = FALSE AND p_bConvRgtSen) THEN
			//Clear Info Message 5
			tyInfoData5.sProgNm		:= '';
			tyInfoData5.udiCode		:= 0;
			tyInfoData5.eSeverity	:= AlmSeverityNA;
			tyInfoData5.sAlmMsg		:= '';
			bQueryInsertBoard   	:= FALSE;
			//bRcvInsertBoardInfo		:= FALSE;
		ELSIF EDGENEG(p_bConvRgtSen) AND p_bHermesSvyQueryBoardInfo  THEN
			bRcvWorkOrderInfo1 := FALSE;
		END_IF
		
		IF (EDGENEG (p_bConvRgtSen OR p_bConvLftSen)) AND  tyInfoData6.udiCode <> 0  THEN 
			//Clear Info Message 6
			tyInfoData6.sProgNm		:= '';
			tyInfoData6.udiCode		:= 0;
			tyInfoData6.eSeverity	:= AlmSeverityNA;
			tyInfoData6.sAlmMsg		:= '';
		END_IF
		
		//Hermes 1.3 Board Reinsert Function		//Distrigger Insert Brd Btn
		IF EDGENEG (p_bConvRgtSen) OR NOT p_bOpsRun OR (EDGENEG(p_bInsertBoard) AND NOT(p_bConvRgtSen)) THEN
			bRcvInsertBoardInfo		:= FALSE;
			bManualInsertData       := FALSE;
			tyInfoData5.sProgNm		:= '';
			tyInfoData5.udiCode		:= 0;
			tyInfoData5.eSeverity	:= AlmSeverityNA;
			tyInfoData5.sAlmMsg		:= '';
			bQueryInsertBoard   	:= FALSE;
			
		END_IF
		
		//Hermes 1.3 Board Reinsert Function
		IF p_bInsertBoard= FALSE THEN
			bQueryInsertBoard := FALSE;
		END_IF
				
	END_IF
		
	IF p_bOpsRun = FALSE OR eStatus2 = Error (*OR eStatus1 = Error OR eStatus3 = Error*) THEN	//Debug
		//Clear Info Message 5
		tyInfoData5.sProgNm		:= '';
		tyInfoData5.udiCode		:= 0;
		tyInfoData5.eSeverity	:= AlmSeverityNA;
		tyInfoData5.sAlmMsg		:= '';
		bQueryInsertBoard   	:= FALSE;
			
		tyInfoData4.sProgNm		:= '';
		tyInfoData4.udiCode		:= 0;
		tyInfoData4.eSeverity	:= AlmSeverityNA;
		tyInfoData4.sAlmMsg		:= '';
		tySendWorkOrderInfoRcv.tyAvl.bWidth := FALSE; 
	END_IF
	
END_ACTION
