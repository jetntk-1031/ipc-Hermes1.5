(** 2021-08-01 **)
ACTION Act_Background_TCPRcv:
	
	IF eStatus1 <> Error THEN
		
		//Receive Data
		fbRcv.udiTCPIdent	:= udiClntIdent;
		fbRcv(bEn := TRUE);
		
		IF fbRcv.udiStatus = 0 THEN
			
			fLogDTConvert(ADR(sDT) , p_dtCurrDT);
			memset(ADR(a_sLogList[udiLogCntr]) , 0 , SIZEOF(a_sLogList[udiLogCntr]));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR(sDT) , LEN(sDT));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('$r$n') , LEN('$r$n'));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('RCV_FRM_RMT$r$n') , LEN('RCV_FRM_RMT$r$n'));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR(sRcv) , LEN(sRcv));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('$r$n$r$n') , LEN('$r$n$r$n'));
			
			udiLogCntr	:= udiLogCntr + 1;
			IF udiLogCntr = 11 THEN
				udiLogCntr	:= 1;
			END_IF
			
			fXMLConvertToTable(ADR(sRcv) , LEN(sRcv) , ADR(a_tyXMLTableDataRcv) , ADR(a_tyXMLTableDataRcv[0].sTitle) , SIZEOF(a_tyXMLTableDataRcv[0].sTitle) , ADR(a_tyXMLTableDataRcv[0].sValue) , SIZEOF(a_tyXMLTableDataRcv[0].sValue) , ADR(a_tyXMLTableDataRcv[0].uiSize) , SIZEOF(a_tyXMLTableDataRcv[0]) , SIZEOF(a_tyXMLTableDataRcv) / SIZEOF(a_tyXMLTableDataRcv[0]) , ADR(udiXMLTableWriteIdx));
			
			fbParseXMLTable.iTotalIdxWrite	:= UDINT_TO_INT(udiXMLTableWriteIdx);
			fbParseXMLTable;
			
			IF fbParseXMLTable.tyMsgType.bCheckAlive = TRUE THEN
				tyMsgTypeRcv.bCheckAlive	:= TRUE;
				tyCheckAlive				:= fbParseXMLTable.tyCheckAlive;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bCheckAlivePing = TRUE THEN
				tyMsgTypeRcv.bCheckAlivePing	:= TRUE;
				tyCheckAlivePing				:= fbParseXMLTable.tyCheckAlivePing;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bCheckAlivePong = TRUE THEN
				tyMsgTypeRcv.bCheckAlivePong	:= TRUE;
				tyCheckAlivePong				:= fbParseXMLTable.tyCheckAlivePong;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bServiceDescription = TRUE THEN
				tyMsgTypeRcv.bServiceDescription	:= TRUE;
				tyServiceDescriptionRcv				:= fbParseXMLTable.tyServiceDescription;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bNotification = TRUE THEN
				tyMsgTypeRcv.bNotification	:= TRUE;
				tyNotificationRcv			:= fbParseXMLTable.tyNotification;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bBoardAvailable = TRUE THEN
				tyMsgTypeRcv.bBoardAvailable	:= TRUE;
				tyBoardAvailableRcv				:= fbParseXMLTable.tyBoardAvailable;
				
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bRevokeBoardAvailable = TRUE THEN
				tyMsgTypeRcv.bRevokeBoardAvailable	:= TRUE;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bMachineReady = TRUE THEN
				tyMsgTypeRcv.bMachineReady	:= TRUE;
				tyMachineReady				:= fbParseXMLTable.tyMachineReady;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bRevokeMachineReady = TRUE THEN
				tyMsgTypeRcv.bRevokeMachineReady	:= TRUE;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bStartTransport = TRUE THEN
				tyMsgTypeRcv.bStartTransport	:= TRUE;
				tyStartTransport				:= fbParseXMLTable.tyStartTransport;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bStopTransport = TRUE THEN
				tyMsgTypeRcv.bStopTransport	:= TRUE;
				tyStopTransport				:= fbParseXMLTable.tyStopTransport;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bTransportFinished = TRUE THEN
				tyMsgTypeRcv.bTransportFinished	:= TRUE;
				tyTransportFinished				:= fbParseXMLTable.tyTransportFinished;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bSetConfiguration = TRUE THEN
				tyMsgTypeRcv.bSetConfiguration	:= TRUE;
				tySetConfigurationRcv			:= fbParseXMLTable.tySetConfiguration;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bGetConfiguration = TRUE THEN
				tyMsgTypeRcv.bGetConfiguration	:= TRUE;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bCurrentConfiguration = TRUE THEN
				tyMsgTypeRcv.bCurrentConfiguration	:= TRUE;
				tyCurrentConfigurationRcv			:= fbParseXMLTable.tyCurrentConfiguration;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bBoardForecast = TRUE THEN
				tyMsgTypeRcv.bBoardForecast	:= TRUE;
				tyBoardForecast				:= fbParseXMLTable.tyBoardForecast;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bQueryBoardInfo = TRUE THEN
				tyMsgTypeRcv.bQueryBoardInfo	:= TRUE;
				tyQueryBoardInfo				:= fbParseXMLTable.tyQueryBoardInfo;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bSendBoardInfo = TRUE THEN
				tyMsgTypeRcv.bSendBoardInfo	:= TRUE;
				tySendBoardInfo				:= fbParseXMLTable.tySendBoardInfo;
			END_IF
			
			fbRcv(bEn := FALSE);
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF fbRcv.udiStatus = 2317 THEN
			fbRcv(bEn := FALSE);
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF fbRcv.udiStatus = 2316 THEN
			bRstConnection	:= TRUE;
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF fbRcv.udiStatus = 2318 THEN
			bRstConnection	:= TRUE;
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF fbRcv.udiStatus < 65534 THEN
			eStatus1	:= Error;
			
			IF fbRcv.udiStatus = 2300 THEN
				udiStatus1	:= 10014;	//Invalid Ident While Receiving Data
			ELSIF fbRcv.udiStatus = 2319 THEN
				udiStatus1	:= 10015;	//TCP Receive Data Error While Receiving Data
			ELSE
				udiStatus1	:= fbRcv.udiStatus;
			END_IF
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		END_IF
		
	END_IF
		
END_ACTION
