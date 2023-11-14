
(* Hermes Parse XML Table Data For Notification *)
FUNCTION fHermesParseNotification
	
	fHermesParseNotification	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'notificationcode') THEN
						
		p_tyNotification.tyAvl.bNotificationCode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyNotification.tyData.iNotificationCode	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'severity') THEN
						
		p_tyNotification.tyAvl.bSeverity	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyNotification.tyData.eSeverity	:= HermesSeverityFatalError;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyNotification.tyData.eSeverity	:= HermesSeverityError;
			ELSIF tyXMLTableNxt.sValue = '3' THEN
				p_tyNotification.tyData.eSeverity	:= HermesSeverityWarning;
			ELSE
				p_tyNotification.tyData.eSeverity	:= HermesSeverityInfo;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'description') THEN
						
		p_tyNotification.tyAvl.bDescription	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyNotification.tyData.sDescription	:= tyXMLTableNxt.sValue;
		END_IF
						
	END_IF
		
END_FUNCTION
