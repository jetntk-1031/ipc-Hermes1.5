(** 2019-03-15 **)
ACTION Act_Background_NotificationRcv:
	
	IF eStatus1 <> Error THEN
		
		IF tyMsgTypeRcv.bNotification = TRUE THEN
			tyMsgTypeRcv.bNotification	:= FALSE;
			
			bRstConnection	:= fHermesNotificationRstConn(tyNotificationRcv) OR bRstConnection;
//			bRstState		:= fHermesNotificationRstState(tyNotificationRcv) OR bRstState;
			
		END_IF
		
	END_IF
		
END_ACTION
