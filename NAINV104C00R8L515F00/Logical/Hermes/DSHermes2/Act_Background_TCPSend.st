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
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 30);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeNotification THEN
			fHermesFormNotification(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyNotificationSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 14);
				
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardAvailable THEN
			fHermesFormBoardAvailable(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardAvailableSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 88);//50
				
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeBoardAvl THEN
			fHermesFormRevokeBoardAvailable(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 8);
				
		ELSIF a_eMsgSend[0] = HermesMsgTypeMachineReady THEN
			eStatus1	:= Error;
			udiStatus1	:= 10135;	//Machine Ready Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeMachineReady THEN
			eStatus1	:= Error;
			udiStatus1	:= 10136;	//Revoke Machine Ready Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStartTransport THEN
			eStatus1	:= Error;
			udiStatus1	:= 10137;	//Start Transport Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStopTransport THEN
			eStatus1	:= Error;
			udiStatus1	:= 10110;	//Stop Transport Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeTransportFinished THEN
			fHermesFormTransportFinished(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyTransportFinished);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 12);
			
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
			fHermesFormBoardForecast(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardForecastSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
		
		ELSIF a_eMsgSend[0] = HermesMsgTypeQueryBoardInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10142;	//Query Board Info Request To Send From Upstream Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSendBoardInfo THEN
			fHermesFormSendBoardInfo(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tySendBoardInfo);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 34);
		
		ELSIF a_eMsgSend[0] = HermesMsgTypeCommand THEN
			fHermesFormCommand(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyCommandSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 10);
		
		END_IF
			
		//Message Send
		IF p_bInternalUse = FALSE THEN
			fbSend.udiTCPIdent	:= udiClntIdent;
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
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('SND_TO_DS$r$n') , LEN('SND_TO_DS$r$n'));
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
