(** 2021-08-01 **)
ACTION Act_Background:
	
	IF bRun = TRUE THEN
		IF udiSvrIdent = 0 THEN
			IF p_bInternalUse = FALSE THEN
				Act_Background_TCPCreateSvr;
				
				tyParamOld	:= p_tyParam;
			ELSE
				udiSvrIdent	:= 1;
			END_IF
			
		ELSE
			IF bRstConnection = FALSE THEN
				
				Act_Background_ChgConfig;
				
				IF udiClntIdent = 0 THEN
					IF p_bInternalUse = FALSE THEN
						Act_Background_TCPListen;
					ELSE
						udiClntIdent	:= 1;
					END_IF
			
				ELSE
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
					Act_Background_SendBoardInfo;
					//Act_Background_Route;
					
					Act_Background_Sequence;
					Act_Background_SequenceTO;
					Act_Background_Err;
					
					
		
					Act_Background_Command;
					
					
					
					Act_Background_TCPSend;
					
					Act_Background_Log;
			
				END_IF
					
			ELSE
				IF udiClntIdent <> 0 THEN
					Act_Background_TCPCloseClnt;
				ELSE
					IF udiSvrIdent <> 0 THEN
						Act_Background_TCPCloseSvr;
					END_IF
				END_IF
				
			END_IF
			
			//Second Client Connected
			IF udiClntIdentExtra = 0 THEN
				
			ELSE
				
			END_IF
			
		END_IF
			
		Act_Background_Stop;
		
	END_IF

		
	IF EDGENEG(bRun) OR EDGENEG(udiSvrIdent = 0) THEN
		//Reset
		fbCreateSvr(bEn := FALSE);
	END_IF
			
	IF EDGENEG(bRun) OR EDGENEG(udiClntIdent = 0) THEN
		//Reset
		fbListen(bEn := FALSE);
		
		bConnected	:= bRun;
	END_IF
	
	IF EDGENEG(bRun) OR EDGENEG(udiSvrIdent <> 0) OR EDGENEG(udiClntIdent <> 0) THEN
		fbRcv(bEn := FALSE);
		fbSequenceDS(bEn := FALSE);
		fbSequenceTO(bEn := FALSE);
		fbCheckAlive(bEn := FALSE);
		fbCheckAliveSendPing(bEn := FALSE);
		fbCheckAliveRcvPing(bEn := FALSE);
		fbSend(bEn := FALSE);
		
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
		
		bConnected		:= FALSE;
		bHandshakeDone	:= FALSE;
		bRstState		:= FALSE;
		bUSRdy			:= FALSE;
		bDSRdy			:= FALSE;
		bTransporting	:= FALSE;
		bStopTransport	:= FALSE;
		
		memset(ADR(tyMsgTypeRcv) , 0 , SIZEOF(tyMsgTypeRcv));
		memset(ADR(a_eMsgSend) , 0 , SIZEOF(a_eMsgSend));
		udiMsgSendBffr	:= 0;
	END_IF
	
	IF EDGENEG(bRun) OR EDGENEG(udiSvrIdent <> 0) THEN
		bRstConnection	:= FALSE; 
		fbCloseSvr(bEn := FALSE);
	END_IF
	
	IF EDGENEG(bRun) OR EDGENEG(udiClntIdent <> 0) THEN
		fbCloseClnt(bEn := FALSE);
	END_IF
	
	//Reset Error
	IF (eStatus1 = Error) AND bRstErr THEN
		eStatus1	:= Idle;
		udiStatus1	:= 0;
		
		fbCreateSvr(bEn := FALSE);
		fbListen(bEn := FALSE);
		fbRcv(bEn := FALSE);
		fbSequenceDS(bEn := FALSE);
		fbSend(bEn := FALSE);
		fbCloseSvr(bEn := FALSE);
		fbCloseClnt(bEn := FALSE);
		fbCheckAlive(bEn := FALSE);
		fbCheckAliveSendPing(bEn := FALSE);
		fbCheckAliveRcvPing(bEn := FALSE);
		fbSequenceTO(bEn := FALSE);
		
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
		
		bConnected		:= FALSE;
		bHandshakeDone	:= FALSE;
		bRstConnection	:= FALSE;
		bRstState		:= FALSE;
		bUSRdy			:= FALSE;
		bDSRdy			:= FALSE;
		bTransporting	:= FALSE;
		bStopTransport	:= FALSE;
		
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
	
END_ACTION
