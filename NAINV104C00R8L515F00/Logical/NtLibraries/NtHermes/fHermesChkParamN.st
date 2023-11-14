
(* Hermes Checking Parameter Notification *)
FUNCTION fHermesChkParamN
	
	fHermesChkParamN	:= 0;
	
	IF fHermesChkParamN = 0 THEN
		
		IF tyNotification.tyAvl.bNotificationCode = TRUE THEN
					
			IF tyNotification.tyData.iNotificationCode <= 0 THEN
					
				fHermesChkParamN	:= 2732;	//NotificationCode Out Of Range While Checking Notification
						
			END_IF
			
		ELSE
					
			fHermesChkParamN	:= 2733;	//NotificationCode Missing While Checking Notification
					
		END_IF
		
	END_IF
	
		
	IF fHermesChkParamN = 0 THEN
		
		IF tyNotification.tyAvl.bSeverity = FALSE THEN
					
			fHermesChkParamN	:= 2734;	//Severity Missing While Checking Notification
					
		END_IF
		
	END_IF
	
		
	IF fHermesChkParamN = 0 THEN
		
		IF tyNotification.tyAvl.bDescription = FALSE THEN
					
			fHermesChkParamN	:= 2735;	//Description Missing While Checking Notification
					
		END_IF
		
	END_IF
	
END_FUNCTION
