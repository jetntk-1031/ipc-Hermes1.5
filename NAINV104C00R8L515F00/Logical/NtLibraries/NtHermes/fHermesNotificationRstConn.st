
(* Hermes Notification Reset Connection *)
FUNCTION fHermesNotificationRstConn
	
	IF tyNotification.tyData.eSeverity = HermesSeverityFatalError THEN
		
		fHermesNotificationRstConn	:= TRUE;
		
	ELSE
		
		fHermesNotificationRstConn	:= FALSE;
		
	END_IF
	
END_FUNCTION
