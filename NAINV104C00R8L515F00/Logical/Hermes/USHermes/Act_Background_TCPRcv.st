(** 2019-06-10 **)
ACTION Act_Background_TCPRcv:
	
	IF eStatus1 <> Error THEN
		
		//Receive Data
		IF p_bInternalUse = FALSE THEN
			fbRcv.udiTCPIdent	:= udiTCPIdent;
			fbRcv(bEn := TRUE);
		ELSE
			sRcv	:= p_sInternalRcv;
		END_IF
		
		IF (fbRcv.udiStatus = 0) OR ((p_bInternalUse = TRUE) AND (LEN(sRcv) > 0)) THEN
			
			fLogDTConvert(ADR(sDT) , p_dtCurrDT);
			memset(ADR(a_sLogList[udiLogCntr]) , 0 , SIZEOF(a_sLogList[udiLogCntr]));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR(sDT) , LEN(sDT));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('$r$n') , LEN('$r$n'));
			memcpy(ADR(a_sLogList[udiLogCntr]) + LEN(a_sLogList[udiLogCntr]) , ADR('RCV_FRM_US$r$n') , LEN('RCV_FRM_US$r$n'));
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
				tyCheckAliveRcv				:= fbParseXMLTable.tyCheckAlive;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bCheckAlivePing = TRUE THEN
				tyMsgTypeRcv.bCheckAlivePing	:= TRUE;
				tyCheckAlivePingRcv				:= fbParseXMLTable.tyCheckAlivePing;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bCheckAlivePong = TRUE THEN
				tyMsgTypeRcv.bCheckAlivePong	:= TRUE;
				tyCheckAlivePongRcv				:= fbParseXMLTable.tyCheckAlivePong;
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
				
				memset(ADR(a_tyXMLTableDataBrdAvl) , 0 , SIZEOF(a_tyXMLTableDataBrdAvl));
				memcpy(ADR(a_tyXMLTableDataBrdAvl) , ADR(a_tyXMLTableDataRcv) + (fbParseXMLTable.iBoardAvailableFirstIdx * SIZEOF(a_tyXMLTableDataRcv[0])) , (fbParseXMLTable.iBoardAvailableLastIdx - fbParseXMLTable.iBoardAvailableFirstIdx + 1) * SIZEOF(a_tyXMLTableDataRcv[0]));
				
				iXMLTableDataBrdAvlTtlIdx	:= fbParseXMLTable.iBoardAvailableLastIdx - fbParseXMLTable.iBoardAvailableFirstIdx + 1;
				
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
				tySetConfiguration				:= fbParseXMLTable.tySetConfiguration;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bGetConfiguration = TRUE THEN
				tyMsgTypeRcv.bGetConfiguration	:= TRUE;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bCurrentConfiguration = TRUE THEN
				tyMsgTypeRcv.bCurrentConfiguration	:= TRUE;
				tyCurrentConfiguration				:= fbParseXMLTable.tyCurrentConfiguration;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bBoardForecast = TRUE THEN
				tyMsgTypeRcv.bBoardForecast	:= TRUE;
				tyBoardForecastRcv				:= fbParseXMLTable.tyBoardForecast;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bQueryBoardInfo = TRUE THEN
				tyMsgTypeRcv.bQueryBoardInfo	:= TRUE;
				tyQueryBoardInfo				:= fbParseXMLTable.tyQueryBoardInfo;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bSendBoardInfo = TRUE THEN
				tyMsgTypeRcv.bSendBoardInfo	:= TRUE;
				tySendBoardInfoRcv				:= fbParseXMLTable.tySendBoardInfo;
			END_IF
			
			IF fbParseXMLTable.tyMsgType.bCommand = TRUE THEN
				tyMsgTypeRcv.bCommand	:= TRUE;
				tyCommandRcv			:= fbParseXMLTable.tyCommand;	
			END_IF
			
			fbRcv(bEn := FALSE);
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF (fbRcv.udiStatus = 2317) AND (p_bInternalUse = FALSE) THEN
			fbRcv(bEn := FALSE);
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF (fbRcv.udiStatus = 2316) AND (p_bInternalUse = FALSE) THEN
			bRstConnection	:= TRUE;
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF (fbRcv.udiStatus = 2318) AND (p_bInternalUse = FALSE) THEN
			bRstConnection	:= TRUE;
			
			memset(ADR(sRcv) , 0 , SIZEOF(sRcv));
			
		ELSIF (fbRcv.udiStatus < 65534) AND (p_bInternalUse = FALSE) THEN
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
