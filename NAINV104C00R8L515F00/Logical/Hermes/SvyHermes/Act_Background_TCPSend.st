(** 2021-08-01 **)
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
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSServiceDescription THEN
			fHermesFormSServiceDescription(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tySServiceDescriptionSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) ,32);
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeNotification THEN
			fHermesFormNotification(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyNotificationSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 14);
				
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardAvailable THEN
			eStatus1	:= Error;
			udiStatus1	:= 10125;	//Board Available Request To Send From Supervisory Hermes
				
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeBoardAvl THEN
			eStatus1	:= Error;
			udiStatus1	:= 10122;	//Revoke Board Available Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeMachineReady THEN
			eStatus1	:= Error;
			udiStatus1	:= 10135;	//Machine Ready Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeRevokeMachineReady THEN
			eStatus1	:= Error;
			udiStatus1	:= 10136;	//Revoke Machine Ready Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStartTransport THEN
			eStatus1	:= Error;
			udiStatus1	:= 10137;	//Start Transport Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeStopTransport THEN
			eStatus1	:= Error;
			udiStatus1	:= 10123;	//Stop Transport Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeTransportFinished THEN
			eStatus1	:= Error;
			udiStatus1	:= 10124;	//Transport Finished Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSetConfiguration THEN
			eStatus1	:= Error;
			udiStatus1	:= 10138;	//Set Configuration Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeGetConfiguration THEN
			eStatus1	:= Error;
			udiStatus1	:= 10139;	//Get Configuration Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeCurrConfiguration THEN
			fHermesFormCurrentConfiguration(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyCurrentConfigurationSnd);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 80);
			//10140
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardForecast THEN
			eStatus1	:= Error;
			udiStatus1	:= 10141;	//Board Forecast Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeQueryBoardInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10142;	//Query Board Info Request To Send From Supervisory Hermes
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeSendBoardInfo THEN
			eStatus1	:= Error;
			udiStatus1	:= 10159;	//Send Board Info Request To Send From Supervisory Hermes
		
	    ELSIF a_eMsgSend[0] = HermesMsgTypeQueryWorkOrderInfo THEN
	    	fHermesFormQueryWorkOrderInfo(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyQueryWorkOrderInfo);
		    fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 24);
			//10160
			
    	ELSIF a_eMsgSend[0] = HermesMsgTypeSendWorkOrderInfo THEN
	     	eStatus1	:= Error;
		    udiStatus1	:= 10161;	//Send Work Order Info Request To Send From Supervisory Hermes
		
		ELSIF a_eMsgSend[0] = HermesMsgTypeReplyWorkOrderInfo THEN
			fHermesFormReplyWorkOrderInfo(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyReplyWorkOrderInfo);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 16);
			//10160
	    ELSIF a_eMsgSend[0] = HermesMsgTypeBoardArrived1 THEN //Lane 1
		    fHermesFormBoardArrived(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardArrived1);
		    fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10162
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardArrived2 THEN //Lane 2
			fHermesFormBoardArrived(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardArrived2);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10162
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardArrived3 THEN //Lane 3
			fHermesFormBoardArrived(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardArrived3);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10162
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardArrived4 THEN //Lane 4
			fHermesFormBoardArrived(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardArrived4);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10162
			
	    ELSIF a_eMsgSend[0] = HermesMsgTypeBoardDeparted1 THEN
	    	fHermesFormBoardDeparted(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardDeparted1);
	    	fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10163
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardDeparted2 THEN
			fHermesFormBoardDeparted(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardDeparted2);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10163
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardDeparted3 THEN
			fHermesFormBoardDeparted(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardDeparted3);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10163
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeBoardDeparted4 THEN
			fHermesFormBoardDeparted(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyBoardDeparted4);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 50);
			//10163
			
		ELSIF a_eMsgSend[0] = HermesMsgTypeReplyWorkOrderInfo THEN
			fHermesFormReplyWorkOrderInfo(ADR(a_tyXMLTableDataSnd) , p_tyDTStructure , tyReplyWorkOrderInfo);
			fTableConvertToXML(ADR(sSnd) , ADR(udiSndMsgLen) , SIZEOF(sSnd) , ADR(a_tyXMLTableDataSnd) , ADR(a_tyXMLTableDataSnd[0].sTitle) , ADR(a_tyXMLTableDataSnd[0].sValue) , ADR(a_tyXMLTableDataSnd[0].uiSize) , SIZEOF(a_tyXMLTableDataSnd[0]) , 20);
			//10164    //ADD
			
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
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('SND_TO_SVY$r$n') , LEN('SND_TO_SVY$r$n'));
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
