(** 2019-03-15 **)
ACTION Act_Background_NotificationSnd:
	
	IF a_eMsgSend[0] = HermesMsgTypeNotification THEN 
		bRstConnection	:= fHermesNotificationRstConn(tyNotificationSnd) OR bRstConnection; //Fatal Error = Reset Connection, Error no reset
//		bRstState		:= fHermesNotificationRstState(tyNotificationSnd) OR bRstState;
	END_IF
		
END_ACTION
