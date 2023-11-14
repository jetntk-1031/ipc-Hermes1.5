(** 2021-08-01 **)
ACTION Act_Background_TCPSend:
	
	//Message Send (Generate XML Message)
	IF a_eMsgSend[0] <> HermesMsgTypeNA THEN
		
		IF a_eMsgSend[0] = HermesMsgTypeCheckAlive THEN
			eStatus1	:= Error;
			udiStatus1	:= 10106;	//Check Alive Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCheckAlivePing THEN
			eStatus1	:= Error;
			udiStatus1	:= 10107;	//Check Alive Ping Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCheckAlivePong THEN
			eStatus1	:= Error;
			udiStatus1	:= 10108;	//Check Alive Pong Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeServiceDescription THEN
			eStatus1	:= Error;
			udiStatus1	:= 10130;	//Service Description Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeNotification THEN
			fHermesFormNotification(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyNotificationSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 14);
				
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardAvailable THEN
			eStatus1	:= Error;
			udiStatus1	:= 10131;	//Board Available Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeBoardAvl THEN
			eStatus1	:= Error;
			udiStatus1	:= 10132;	//Revoke Board Available Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeMachineReady THEN
			eStatus1	:= Error;
			udiStatus1	:= 10135;	//Machine Ready Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeMachineReady THEN
			eStatus1	:= Error;
			udiStatus1	:= 10136;	//Revoke Machine Ready Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStartTransport THEN
			eStatus1	:= Error;
			udiStatus1	:= 10137;	//Start Transport Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStopTransport THEN
			eStatus1	:= Error;
			udiStatus1	:= 10133;	//Stop Transport Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeTransportFinished THEN
			eStatus1	:= Error;
			udiStatus1	:= 10134;	//Transport Finished Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSetConfiguration THEN
			eStatus1	:= Error;
			udiStatus1	:= 10138;	//Set Configuration Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeGetConfiguration THEN
			eStatus1	:= Error;
			udiStatus1	:= 10139;	//Get Configuration Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCurrConfiguration THEN
			fHermesFormCurrentConfiguration(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyCurrentConfigurationSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 200);
			//10140
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardForecast THEN
			eStatus1	:= Error;
			udiStatus1	:= 10141;	//Board Forecast Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeQueryBoardInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10142;	//Query Board Info Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSendBoardInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10159;	//Send Board Info Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeQueryWorkOrderInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10160;	//Query Work Order Info Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSendWorkOrderInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10161;	//Send Work Order Info Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardArrived THEN
			eStatus1	:= Error;
			udiStatus1	:= 10162;	//BoardArrived Request To Send From Remote Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardDeparted THEN
			eStatus1	:= Error;
			udiStatus1	:= 10163;	//BoardDeparted Request To Send From Remote Hermes
				
		END_IF
			
		//Message Send
		fbSend.udiTCPIdent	:= udiClntIdent;
		fbSend.udiSndSize	:= udiSndMsgLen;
		fbSend(bEn := TRUE);
		
		IF fbSend.udiStatus = 0 THEN
			
			fLogDTConvert(ADR(sDT) , p_dtCurrDT);
			memset(ADR(a_sLogList[udiLogCntr]) , 0 , SIZEOF(a_sLogList[udiLogCntr]));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR(sDT) , LEN(sDT));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('$r$n') , LEN('$r$n'));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('SND_TO_RMT$r$n') , LEN('SND_TO_RMT$r$n'));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR(sSnd) , LEN(sSnd));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('$r$n$r$n') , LEN('$r$n$r$n'));
	
			udiLogCntr	:= udiLogCntr + 1;
			IF udiLogCntr = 11 THEN
				udiLogCntr	:= 1;
			END_IF
	
			Act_Background_NotificationSnd;
			fHermesRmvOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr));
			
			fbSend(bEn := FALSE);
			
		ELSIF fbSend.udiStatus = 2321 THEN
			bRstConnection	:= TRUE;
			
		ELSIF fbSend.udiStatus < 65534 THEN
			eStatus1	:= Error;
		
			IF fbSend.udiStatus = 2300 THEN
				udiStatus1	:= 10143;	//Invalid Ident While Sending Data
			ELSIF fbSend.udiStatus = 2320 THEN
				udiStatus1	:= 10144;	//TCP Retry Send Data Error While Sending Data
			ELSIF fbSend.udiStatus = 2322 THEN
				udiStatus1	:= 10145;	//TCP Send Data Error
			ELSE
				udiStatus1	:= fbSend.udiStatus;
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
