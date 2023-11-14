(** 2021-08-01 **)
ACTION Act_Background:
	
	IF bRun = TRUE THEN
		IF udiSvrIdent = 0 THEN
			Act_Background_TCPCreateSvr;
			
			tyParamOld	:= p_tyParam;
			
		ELSE
			IF bRstConnection = FALSE THEN
				
				IF udiClntIdent = 0 THEN
					Act_Background_TCPListen;
				END_IF
				
				IF udiClntIdent <> 0 THEN
					Act_Background_TCPRcv;
				END_IF
				
				Act_Background_NotificationRcv;
			
				Act_Background_IllegalMsg;
				Act_Background_UpdtConfig;
				
				Act_Background_SendConfig;
				
				Act_Background_Err;
				
				IF udiClntIdent <> 0 THEN
					Act_Background_TCPSend;
				END_IF
				
				Act_Background_Log;
					
			ELSE
				IF udiClntIdent <> 0 THEN
					Act_Background_TCPCloseClnt;
				ELSE
					IF udiSvrIdent <> 0 THEN
						Act_Background_TCPCloseSvr;
					END_IF
				END_IF
				
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
		fbSend(bEn := FALSE);
		
		bConnected		:= FALSE;
		
		memset(ADR(a_eMsgSend) , 0 , SIZEOF(a_eMsgSend));
		udiMsgSendBffr	:= 0;
	END_IF
	
	IF EDGENEG(bRun) THEN
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
		
		memset(ADR(tyMsgTypeRcv) , 0 , SIZEOF(tyMsgTypeRcv));
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
		fbSend(bEn := FALSE);
		fbCloseSvr(bEn := FALSE);
		fbCloseClnt(bEn := FALSE);
		
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
		
		bConnected		:= FALSE;
		bRstConnection	:= FALSE;
		
		memset(ADR(tyMsgTypeRcv) , 0 , SIZEOF(tyMsgTypeRcv));
		memset(ADR(a_eMsgSend) , 0 , SIZEOF(a_eMsgSend));
		udiMsgSendBffr	:= 0;
	END_IF
	
	IF (eStatus2 = Error) AND bRstErr THEN
		eStatus2	:= Idle;
		udiStatus2	:= 0;		
	
		
	END_IF
	
	IF (eStatus3 = Error) AND bRstErr THEN
		eStatus3	:= Idle;
		udiStatus3	:= 0;
		
		fbFileAppend1(bEn := FALSE);
		iWriteLogStep	:= 0;
	END_IF
	
END_ACTION
