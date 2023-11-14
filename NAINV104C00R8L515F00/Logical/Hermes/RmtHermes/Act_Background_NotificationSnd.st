(** 2021-08-01 **)
ACTION Act_Background_NotificationSnd:
	
	IF a_eMsgSend[0] = HermesMsgTypeNotification THEN
		bRstConnection	:= fHermesNotificationRstConn(tyNotificationSnd) OR bRstConnection;
	END_IF
		
END_ACTION
