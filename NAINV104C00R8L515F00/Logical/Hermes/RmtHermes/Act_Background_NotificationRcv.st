(** 2021-08-01 **)
ACTION Act_Background_NotificationRcv:
	
	IF eStatus1 <> Error THEN
		
		IF tyMsgTypeRcv.bNotification = TRUE THEN
			tyMsgTypeRcv.bNotification	:= FALSE;
			
			bRstConnection	:= fHermesNotificationRstConn(tyNotificationRcv) OR bRstConnection;
			
		END_IF
		
	END_IF
		
END_ACTION
