
(* Hermes Notification Reset State *)
FUNCTION fHermesNotificationRstState
	
	IF tyNotification.tyData.eSeverity = HermesSeverityFatalError THEN
		
		fHermesNotificationRstState	:= TRUE;
		
	ELSIF tyNotification.tyData.eSeverity = HermesSeverityError THEN
		
		fHermesNotificationRstState	:= TRUE;
		
	ELSE
		
		fHermesNotificationRstState	:= FALSE;
		
	END_IF
	
END_FUNCTION
