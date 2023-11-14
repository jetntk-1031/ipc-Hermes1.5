(** 2019-06-10 **)
ACTION Act_Background:
	Act_Background_Info;
	IF bRun = TRUE THEN
		IF udiTCPIdent = 0 THEN
			IF p_bInternalUse = FALSE THEN
				Act_Background_TCPConnect;
				
				tyParamOld	:= p_tyParam;
			ELSE
				udiTCPIdent	:= 1;
			END_IF
			
		ELSE
			IF bRstConnection = FALSE THEN
				Act_Background_TCPRcv;
				
				Act_Background_NotificationRcv;
			
				Act_Background_IllegalMsg;
				Act_Background_ChkParamRcv;
				Act_Background_CmpParamRcv;
				
				IF bHandshakeDone = TRUE THEN
					IF (p_tyParam.tSndAlive <> T#0s) AND (p_tyParam.tRcvAlive <> T#0s) THEN
						IF tyServiceDescriptionRcv.tyData.tySupportedFeatures.bFeatureCheckAliveResponse = TRUE AND p_tyParam.bFeatureCheckAliveResponse = TRUE THEN
							Act_Background_ChkAliveSendPing;
							Act_Background_ChkAliveRcvPing;
						ELSE
							Act_Background_ChkAlive;
						END_IF
					ELSE
						fbCheckAlive(bEn := FALSE);
						fbCheckAliveSendPing(bEn := FALSE);
						fbCheckAliveRcvPing(bEn := FALSE);
					END_IF
				END_IF
				Act_Background_BoardForecast;
				//Act_Background_BoardAvailableChk;
				Act_Background_RequestedBoardChk;
				//Act_Background_Route;
				Act_Background_Sequence;
				Act_Background_SequenceTO;
				Act_Background_Err;
				
				
				Act_Background_ProcessData;
				Act_Background_QueryBoardInfo;
				
				
			
				Act_Background_Command;
				
				Act_Background_ChgConfig;
				
				Act_Background_TCPSend;
				
				Act_Background_Log;
				
			ELSE
				Act_Background_TCPClose;
				
			END_IF
			
		END_IF
		
		Act_Background_Stop;
		
	END_IF
		
	IF EDGENEG(bRun) OR EDGENEG(udiTCPIdent = 0) THEN
		//Reset
		fbClntConnect(bEn := FALSE);
		
		bConnected	:= bRun;
	END_IF
	
	IF EDGENEG(bRun) OR EDGENEG(udiTCPIdent <> 0) THEN
		fbRcv(bEn := FALSE);
		fbSequenceUS(bEn := FALSE);
		fbSequenceTO(bEn := FALSE);
		fbCheckAlive(bEn := FALSE);
		fbCheckAliveSendPing(bEn := FALSE);
		fbCheckAliveRcvPing(bEn := FALSE);
		fbSend(bEn := FALSE);
		fbClose(bEn := FALSE);
		
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
		
		bConnected		    := FALSE;
		bHandshakeDone	    := FALSE;
		bBlkUS			    := FALSE;
		bBABlkUS			:= FALSE;
		bBFBlkUS			:= FALSE;
		bManuallInsertLastZone	:= FALSE;
		bAccDataReq		    := FALSE;
		bBFAccDataReq	    := FALSE;
		bOverWriteSlt    	:= FALSE;
		bOverWriteWidth	    := FALSE;
		bBFOverWriteSlt	    := FALSE;
		bBFOverWriteWidth	:= FALSE;
		bRstConnection    	:= FALSE;
		bRstState	    	:= FALSE;
		bUSRdy	    		:= FALSE;
		bDSRdy		    	:= FALSE;
		bTransporting    	:= FALSE;
		bStopTransport   	:= FALSE;
		
		memset(ADR(tyMsgTypeRcv) , 0 , SIZEOF(tyMsgTypeRcv));
		memset(ADR(a_eMsgSend) , 0 , SIZEOF(a_eMsgSend));
		udiMsgSendBffr	:= 0;
	END_IF
	
	//Reset Error
	IF (eStatus1 = Error) AND bRstErr THEN
		eStatus1	:= Idle;
		udiStatus1	:= 0;
		
		fbClntConnect(bEn := FALSE);
		fbRcv(bEn := FALSE);
		fbSequenceUS(bEn := FALSE);
		fbSend(bEn := FALSE);
		fbClose(bEn := FALSE);
		fbCheckAlive(bEn := FALSE);
		fbCheckAliveSendPing(bEn := FALSE);
		fbCheckAliveRcvPing(bEn := FALSE);
		fbSequenceTO(bEn := FALSE);
		
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
		
		bConnected		    := FALSE;
		bHandshakeDone	    := FALSE;
		bBlkUS			    := FALSE;
		bBABlkUS			:= FALSE;
		bBFBlkUS			:= FALSE;
		bManuallInsertLastZone	:= FALSE;
		bAccDataReq		    := FALSE;
		bBFAccDataReq	    := FALSE;
		bOverWriteSlt    	:= FALSE;
		bOverWriteWidth	    := FALSE;
		bBFOverWriteSlt	    := FALSE;
		bBFOverWriteWidth	:= FALSE;
		bRstConnection    	:= FALSE;
		bRstState	    	:= FALSE;
		bUSRdy	    		:= FALSE;
		bDSRdy		    	:= FALSE;
		bTransporting    	:= FALSE;
		bStopTransport   	:= FALSE;
		bBoardChkReq		:= FALSE; //Added
		
		memset(ADR(tyMsgTypeRcv) , 0 , SIZEOF(tyMsgTypeRcv));
		memset(ADR(a_eMsgSend) , 0 , SIZEOF(a_eMsgSend));
		udiMsgSendBffr	:= 0;
	END_IF
	
	IF (eStatus2 = Error) AND bRstErr THEN
		eStatus2	:= Idle;
		udiStatus2	:= 0;
		
		fbSequenceTO(bEn := FALSE);
		
	END_IF
	
	IF (eStatus3 = Error) AND bRstErr THEN
		eStatus3	:= Idle;
		udiStatus3	:= 0;
		
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
	END_IF
	
	IF (eStatus4 = Error) AND bRstErr THEN
		eStatus4	:= Idle;
		udiStatus4	:= 0;
	END_IF

	Act_Background_AccData;
	//Act_Background_BFAccData;
	
END_ACTION
