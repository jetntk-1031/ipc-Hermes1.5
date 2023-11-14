
(* Hermes Parse XML Table Data *)
FUNCTION_BLOCK fbHermesParseXMLTable
	
	memset(ADR(tyMsgType) , 0 , SIZEOF(tyMsgType));
	memset(ADR(tyCheckAlive) , 0 , SIZEOF(tyCheckAlive));
	memset(ADR(tyCheckAlivePing) , 0 , SIZEOF(tyCheckAlivePing));
	memset(ADR(tyCheckAlivePong) , 0 , SIZEOF(tyCheckAlivePong));
	memset(ADR(tyServiceDescription) , 0 , SIZEOF(tyServiceDescription));
	memset(ADR(tySServiceDescription) , 0 , SIZEOF(tySServiceDescription));
	memset(ADR(tyNotification) , 0 , SIZEOF(tyNotification));
	memset(ADR(tyBoardAvailable) , 0 , SIZEOF(tyBoardAvailable));
	memset(ADR(tyMachineReady) , 0 , SIZEOF(tyMachineReady));
	memset(ADR(tyStartTransport) , 0 , SIZEOF(tyStartTransport));
	memset(ADR(tyStopTransport) , 0 , SIZEOF(tyStopTransport));
	memset(ADR(tyTransportFinished) , 0 , SIZEOF(tyTransportFinished));
	memset(ADR(tySetConfiguration) , 0 , SIZEOF(tySetConfiguration));
	memset(ADR(tyCurrentConfiguration) , 0 , SIZEOF(tyCurrentConfiguration));
	memset(ADR(tyBoardForecast) , 0 , SIZEOF(tyBoardForecast));
	memset(ADR(tyBoardArrived) , 0 , SIZEOF(tyBoardArrived));
	memset(ADR(tyBoardDeparted) , 0 , SIZEOF(tyBoardDeparted));
	memset(ADR(tyQueryBoardInfo) , 0 , SIZEOF(tyQueryBoardInfo));
	memset(ADR(tySendBoardInfo) , 0 , SIZEOF(tySendBoardInfo));
	memset(ADR(tyQueryWorkOrderInfo) , 0 , SIZEOF(tyQueryWorkOrderInfo));
	memset(ADR(tySendWorkOrderInfo) , 0 , SIZEOF(tySendWorkOrderInfo));
	memset(ADR(tyCommand),0,SIZEOF(tyCommand));
	
	iCheckAliveFirstIdx				:= -1;
	iCheckAliveLastIdx				:= -1;
	iCheckAlivePingFirstIdx			:= -1;
	iCheckAlivePingLastIdx			:= -1;
	iCheckAlivePongFirstIdx			:= -1;
	iCheckAlivePongLastIdx			:= -1;
	iServiceDescriptionFirstIdx		:= -1;
	iServiceDescriptionLastIdx		:= -1;
	iSServiceDescriptionFirstIdx	:= -1;
	iSServiceDescriptionLastIdx  	:= -1;
	iNotificationFirstIdx			:= -1;
	iNotificationLastIdx			:= -1;
	iBoardAvailableFirstIdx			:= -1;
	iBoardAvailableLastIdx			:= -1;
	iRevokeBoardAvailableFirstIdx	:= -1;
	iRevokeBoardAvailableLastIdx	:= -1;
	iMachineReadyFirstIdx			:= -1;
	iMachineReadyLastIdx			:= -1;
	iRevokeMachineReadyFirstIdx		:= -1;
	iRevokeMachineReadyLastIdx		:= -1;
	iStartTransportFirstIdx			:= -1;
	iStartTransportLastIdx			:= -1;
	iStopTransportFirstIdx			:= -1;
	iStopTransportLastIdx			:= -1;
	iTransportFinishedFirstIdx		:= -1;
	iTransportFinishedLastIdx		:= -1;
	iSetConfigurationFirstIdx		:= -1;
	iSetConfigurationLastIdx		:= -1;
	iGetConfigurationFirstIdx		:= -1;
	iGetConfigurationLastIdx		:= -1;
	iCurrentConfigurationFirstIdx	:= -1;
	iCurrentConfigurationLastIdx	:= -1;
	iBoardForecastFirstIdx			:= -1;
	iBoardForecastLastIdx			:= -1;
	iBoardArrivedFirstIdx			:= -1;
	iBoardArrivedLastIdx			:= -1;
	iBoardDepartedFirstIdx			:= -1;
	iBoardDepartedLastIdx			:= -1;
	iQueryBoardInfoFirstIdx			:= -1;
	iQueryBoardInfoLastIdx			:= -1;
	iSendBoardInfoFirstIdx			:= -1;
	iSendBoardInfoLastIdx			:= -1;
	iQueryWorkOrderInfoFirstIdx		:= -1;
	iQueryWorkOrderInfoLastIdx		:= -1;
	iSendWorkOrderInfoFirstIdx		:= -1;
	iSendWorkOrderInfoLastIdx		:= -1;
	iCommandFirstIdx				:= -1;
	iCommandLastIdx1				:= -1;
	iHermesIdx						:= -1;

	//iSubBoardCntr
	iSubBoardCntr				    := -1;
	
	eMsgType	:= HermesMsgTypeNA;
	
	FOR udi := p_XMLTable TO (p_XMLTable + ((iTotalIdxWrite - 2) * SIZEOF(p_tyXMLTable))) BY SIZEOF(p_tyXMLTable) DO
		
		p_tyXMLTable ACCESS udi;
		p_tyXMLTable1 ACCESS (udi + SIZEOF(p_tyXMLTable));
		
		fConvertToLower_254(ADR(sLowerCase) , p_tyXMLTable.sValue);
		
		IF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'hermes') THEN
			
			eMsgType	:= HermesMsgTypeNA;
			iHermesIdx	:= UDINT_TO_INT((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable)));
				
		ELSIF (p_tyXMLTable.sTitle = 'ET') AND (sLowerCase = 'hermes') THEN
			
			iHermesIdx	:= -1;
			
			CASE eMsgType OF
				
				HermesMsgTypeCheckAlive:
					iCheckAliveLastIdx	:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
					
					IF tyCheckAlive.tyAvl.bType = TRUE AND tyCheckAlive.tyData.eType = HermesCheckAliveTypePing THEN
						tyMsgType.bCheckAlivePing	:= TRUE;
						tyCheckAlivePing			:= tyCheckAlive;
						iCheckAlivePingFirstIdx		:= iCheckAliveFirstIdx;
						iCheckAlivePingLastIdx		:= iCheckAliveLastIdx;
						
						memset(ADR(tyCheckAlive) , 0 , SIZEOF(tyCheckAlive));
						tyMsgType.bCheckAlive	:= FALSE;
						iCheckAliveFirstIdx		:= -1;
						iCheckAliveLastIdx		:= -1;
						
					ELSIF tyCheckAlive.tyAvl.bType = TRUE AND tyCheckAlive.tyData.eType = HermesCheckAliveTypePong THEN
						tyMsgType.bCheckAlivePong	:= TRUE;
						tyCheckAlivePong			:= tyCheckAlive;
						iCheckAlivePongFirstIdx		:= iCheckAliveFirstIdx;
						iCheckAlivePongLastIdx		:= iCheckAliveLastIdx;
						
						memset(ADR(tyCheckAlive) , 0 , SIZEOF(tyCheckAlive));
						tyMsgType.bCheckAlive	:= FALSE;
						iCheckAliveFirstIdx		:= -1;
						iCheckAliveLastIdx		:= -1;
						
					END_IF
					
				HermesMsgTypeServiceDescription:	iServiceDescriptionLastIdx		:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeSServiceDescription:	iSServiceDescriptionLastIdx	    := UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeNotification:			iNotificationLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeBoardAvailable:		iBoardAvailableLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeRevokeBoardAvl:		iRevokeBoardAvailableLastIdx	:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeMachineReady:			iMachineReadyLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeRevokeMachineReady:	iRevokeMachineReadyLastIdx		:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeStartTransport:		iStartTransportLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeStopTransport:			iStopTransportLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeTransportFinished:		iTransportFinishedLastIdx		:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeSetConfiguration:		iSetConfigurationLastIdx		:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeGetConfiguration:		iGetConfigurationLastIdx		:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeCurrConfiguration:		iCurrentConfigurationLastIdx	:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeBoardForecast:			iBoardForecastLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeBoardArrived:			iBoardArrivedLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeBoardDeparted:			iBoardDepartedLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeQueryBoardInfo:		iQueryBoardInfoLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeSendBoardInfo:			iSendBoardInfoLastIdx			:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeQueryWorkOrderInfo:	iQueryWorkOrderInfoLastIdx		:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				HermesMsgTypeSendWorkOrderInfo:		iSendWorkOrderInfoLastIdx		:= UDINT_TO_INT(((udi - p_XMLTable) / (SIZEOF(p_tyXMLTable))) + 1);
				
			END_CASE
			
			eMsgType	:= HermesMsgTypeNA;
				
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'checkalive') THEN
			
			eMsgType				:= HermesMsgTypeCheckAlive;
			tyMsgType.bCheckAlive	:= TRUE;
			iCheckAliveFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'servicedescription') THEN
	
			eMsgType						    := HermesMsgTypeServiceDescription;
			tyMsgType.bServiceDescription    	:= TRUE;
			iServiceDescriptionFirstIdx	     	:= iHermesIdx;
			
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'supervisoryservicedescription') THEN
	
			eMsgType					    	:= HermesMsgTypeSServiceDescription;
			tyMsgType.bSServiceDescription   	:= TRUE;
			iSServiceDescriptionFirstIdx	    := iHermesIdx;
	
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'notification') THEN
	
			eMsgType				:= HermesMsgTypeNotification;
			tyMsgType.bNotification	:= TRUE;
			iNotificationFirstIdx	:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'boardavailable') THEN
	
			eMsgType					:= HermesMsgTypeBoardAvailable;
			tyMsgType.bBoardAvailable	:= TRUE;
			iBoardAvailableFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'revokeboardavailable') THEN
	
			eMsgType						:= HermesMsgTypeRevokeBoardAvl;
			tyMsgType.bRevokeBoardAvailable	:= TRUE;
			iRevokeBoardAvailableFirstIdx	:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'machineready') THEN
	
			eMsgType				:= HermesMsgTypeMachineReady;
			tyMsgType.bMachineReady	:= TRUE;
			iMachineReadyFirstIdx	:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'revokemachineready') THEN
	
			eMsgType						:= HermesMsgTypeRevokeMachineReady;
			tyMsgType.bRevokeMachineReady	:= TRUE;
			iRevokeMachineReadyFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'starttransport') THEN
	
			eMsgType					:= HermesMsgTypeStartTransport;
			tyMsgType.bStartTransport	:= TRUE;
			iStartTransportFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'stoptransport') THEN
	
			eMsgType					:= HermesMsgTypeStopTransport;
			tyMsgType.bStopTransport	:= TRUE;
			iStopTransportFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'transportfinished') THEN
	
			eMsgType						:= HermesMsgTypeTransportFinished;
			tyMsgType.bTransportFinished	:= TRUE;
			iTransportFinishedFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'setconfiguration') THEN
	
			eMsgType					:= HermesMsgTypeSetConfiguration;
			tyMsgType.bSetConfiguration	:= TRUE;
			iSetConfigurationFirstIdx	:= iHermesIdx;
			bSetUpstream				:= FALSE;
			bSetDownstream				:= FALSE;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'getconfiguration') THEN
	
			eMsgType					:= HermesMsgTypeGetConfiguration;
			tyMsgType.bGetConfiguration	:= TRUE;
			iGetConfigurationFirstIdx	:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'currentconfiguration') THEN
	
			eMsgType						:= HermesMsgTypeCurrConfiguration;
			tyMsgType.bCurrentConfiguration	:= TRUE;
			iCurrentConfigurationFirstIdx	:= iHermesIdx;
			bCurrUpstream					:= FALSE;
			bCurrDownstream					:= FALSE;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'boardforecast') THEN
	
			eMsgType					:= HermesMsgTypeBoardForecast;
			tyMsgType.bBoardForecast	:= TRUE;
			iBoardForecastFirstIdx		:= iHermesIdx;
			
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'boardarrived') THEN
	
			eMsgType					:= HermesMsgTypeBoardArrived;
			tyMsgType.bBoardArrived	:= TRUE;
			iBoardArrivedFirstIdx		:= iHermesIdx;
			
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'boarddeparted') THEN
	
			eMsgType					:= HermesMsgTypeBoardDeparted;
			tyMsgType.bBoardDeparted	:= TRUE;
			iBoardDepartedFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'queryboardinfo') THEN
	
			eMsgType					:= HermesMsgTypeQueryBoardInfo;
			tyMsgType.bQueryBoardInfo	:= TRUE;
			iQueryBoardInfoFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'sendboardinfo') THEN
	
			eMsgType					:= HermesMsgTypeSendBoardInfo;
			tyMsgType.bSendBoardInfo	:= TRUE;
			iSendBoardInfoFirstIdx		:= iHermesIdx;
			
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'queryworkorderinfo') THEN
	
			eMsgType				    	:= HermesMsgTypeQueryWorkOrderInfo;
			tyMsgType.bQueryWorkOrderInfo	:= TRUE;
			iQueryWorkOrderInfoFirstIdx		:= iHermesIdx;
	
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'sendworkorderinfo') THEN
	
			eMsgType				    	:= HermesMsgTypeSendWorkOrderInfo;
			tyMsgType.bSendWorkOrderInfo	:= TRUE;
			iSendWorkOrderInfoFirstIdx		:= iHermesIdx;
		ELSIF (p_tyXMLTable.sTitle = 'ST') AND (sLowerCase = 'command') THEN	
			
			eMsgType						:= HermesMsgTypeCommand;
			tyMsgType.bCommand				:= TRUE;
			iCommandFirstIdx				:= iHermesIdx;
		ELSE
			
			CASE eMsgType OF
				HermesMsgTypeCheckAlive:
					fHermesParseCheckAlive(ADR(tyCheckAlive) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeServiceDescription:
					fHermesParseServiceDescription(ADR(tyServiceDescription) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
					
				HermesMsgTypeSServiceDescription:
					fHermesParseSServiceDescription(ADR(tySServiceDescription) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeNotification:
					fHermesParseNotification(ADR(tyNotification) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeBoardAvailable:
					fHermesParseBoardAvailable(ADR(tyBoardAvailable) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase,ADR(iSubBoardCntr));
				
				HermesMsgTypeMachineReady:
					fHermesParseMachineReady(ADR(tyMachineReady) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeStartTransport:
					fHermesParseStartTransport(ADR(tyStartTransport) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeStopTransport:
					fHermesParseStopTransport(ADR(tyStopTransport) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeTransportFinished:
					fHermesParseTransportFinished(ADR(tyTransportFinished) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeSetConfiguration:
					fHermesParseSetConfiguration(ADR(tySetConfiguration) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase , bUpstream := bSetUpstream , bDownstream := bSetDownstream);
				
				HermesMsgTypeCurrConfiguration:
					fHermesParseCurrentConfiguration(ADR(tyCurrentConfiguration) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase , bUpstream := bCurrUpstream , bDownstream := bCurrDownstream);
				
				HermesMsgTypeBoardForecast:
					fHermesParseBoardForecast(ADR(tyBoardForecast) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
					
				HermesMsgTypeBoardArrived:
					fHermesParseBoardArrived(ADR(tyBoardArrived) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
							
				HermesMsgTypeBoardDeparted:
					fHermesParseBoardDeparted(ADR(tyBoardDeparted) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeQueryBoardInfo:
					fHermesParseQueryBoardInfo(ADR(tyQueryBoardInfo) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeSendBoardInfo:
					fHermesParseSendBoardInfo(ADR(tySendBoardInfo) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeQueryWorkOrderInfo:
					fHermesParseQueryWorkOrderInfo(ADR(tyQueryWorkOrderInfo) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeSendWorkOrderInfo:
					fHermesParseSendWorkOrderInfo(ADR(tySendWorkOrderInfo) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
				HermesMsgTypeCommand:
					fHermesParseCommand(ADR(tyCommand) , p_tyXMLTable , p_tyXMLTable1 , sLowerCase);
				
			END_CASE
	
		END_IF
						
	END_FOR
	
END_FUNCTION_BLOCK
