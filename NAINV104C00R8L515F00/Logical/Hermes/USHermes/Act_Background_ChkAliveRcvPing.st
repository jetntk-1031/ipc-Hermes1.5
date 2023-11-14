(** 2019-05-30 **)
ACTION Act_Background_ChkAliveRcvPing:
	
	IF eStatus1 <> Error THEN
	
		//Check Alive Receive Ping	
		fbCheckAliveRcvPing.bDataRcv	:= tyMsgTypeRcv.bCheckAlivePing;
		fbCheckAliveRcvPing.tyDataRcv	:= tyCheckAlivePingRcv;
		fbCheckAliveRcvPing(bEn := TRUE);
			
		IF fbCheckAliveRcvPing.udiStatus > 0 AND fbCheckAliveRcvPing.udiStatus < 65534 THEN
			eStatus1	:= Error;
			udiStatus1	:= fbCheckAliveRcvPing.udiStatus;
				
		ELSE
			IF EDGEPOS(fbCheckAliveRcvPing.bDataSend) THEN
				fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeCheckAlivePong);
				tyCheckAlivePongSnd	:= fbCheckAliveRcvPing.tyDataSend;
			END_IF
				
		END_IF
					
		tyMsgTypeRcv.bCheckAlivePing	:= FALSE;	//Reset Check Alive Ping
		
	END_IF

END_ACTION
