(** 2019-06-10 **)
ACTION Act_Background_TCPSend:
	
	//Message Send (Generate XML Message)
	IF a_eMsgSend[0] <> HermesMsgTypeNA THEN
		
		IF a_eMsgSend[0] = HermesMsgTypeCheckAlive THEN
			fHermesFormCheckAlive(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyCheckAliveSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 12);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCheckAlivePing THEN
			fHermesFormCheckAlive(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyCheckAlivePingSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 12);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCheckAlivePong THEN
			fHermesFormCheckAlive(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyCheckAlivePongSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 12);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeServiceDescription THEN
			fHermesFormServiceDescription(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyServiceDescriptionSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 32); //changed from 30
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeNotification THEN
			fHermesFormNotification(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyNotificationSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 14);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardAvailable THEN
			eStatus1	:= Error;
			udiStatus1	:= 10135;	//Board Available Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeBoardAvl THEN
			eStatus1	:= Error;
			udiStatus1	:= 10136;	//Revoke Board Available Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeMachineReady THEN
			fHermesFormMachineReady(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyMachineReady);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			bReplyMcRdyId := FALSE;
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeMachineReady THEN
			fHermesFormRevokeMachineReady(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 8);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStartTransport THEN
			fHermesFormStartTransport(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyStartTransport);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 12);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStopTransport THEN
			fHermesFormStopTransport(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyStopTransport);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 12);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeTransportFinished THEN
			eStatus1	:= Error;
			udiStatus1	:= 10137;	//Transport Finished Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSetConfiguration THEN
			eStatus1	:= Error;
			udiStatus1	:= 10138;	//Set Configuration Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeGetConfiguration THEN
			eStatus1	:= Error;
			udiStatus1	:= 10139;	//Get Configuration Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCurrConfiguration THEN
			eStatus1	:= Error;
			udiStatus1	:= 10140;	//Current Configuration Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardForecast THEN
			eStatus1	:= Error;
			udiStatus1	:= 10141;	//Board Forecast Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeQueryBoardInfo THEN
			fHermesFormQueryBoardInfo(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyQueryBoardInfo);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 12);
			//10142
		ELSIF a_eMsgSend[0] = HermesMsgTypeSendBoardInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10159;	//Send Board Info Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeQueryWorkOrderInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10160;	//Query Work Order Info Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSendWorkOrderInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10161;	//Send Work Order Info Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardArrived THEN
			eStatus1	:= Error;
			udiStatus1	:= 10162;	//BoardArrived Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardDeparted THEN
			eStatus1	:= Error;
			udiStatus1	:= 10163;	//BoardDeparted Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCommand THEN
			fHermesFormCommand(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyCommandSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 10);
		
		END_IF
			
		//Message Send
		IF p_bInternalUse = FALSE THEN
			fbSend.udiTCPIdent	:= udiTCPIdent;
			fbSend.udiSndSize	:= udiSndMsgLen;
			fbSend(bEn := TRUE);
		ELSE
			sInternalSnd	:= sSnd;
		END_IF
		
		IF (fbSend.udiStatus = 0) OR (p_bInternalUse = TRUE) THEN
			
			fLogDTConvert(ADR(sDT) , p_dtCurrDT);
			memset(ADR(a_sLogList[udiLogCntr]) , 0 , SIZEOF(a_sLogList[udiLogCntr]));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR(sDT) , LEN(sDT));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('$r$n') , LEN('$r$n'));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('SND_TO_US$r$n') , LEN('SND_TO_US$r$n'));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR(sSnd) , LEN(sSnd));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('$r$n$r$n') , LEN('$r$n$r$n'));
	
			udiLogCntr	:= udiLogCntr + 1;
			IF udiLogCntr = 11 THEN
				udiLogCntr	:= 1;
			END_IF
	
			Act_Background_NotificationSnd;
			fHermesRmvOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr));
			
			fbSend(bEn := FALSE);
			
		ELSIF (fbSend.udiStatus = 2321) AND (p_bInternalUse = FALSE) THEN
			bRstConnection	:= TRUE;
			
		ELSIF (fbSend.udiStatus < 65534) AND (p_bInternalUse = FALSE) THEN
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
