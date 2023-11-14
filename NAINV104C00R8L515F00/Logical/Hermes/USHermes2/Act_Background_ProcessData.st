(** 2023-08-01 **)
ACTION Act_Background_ProcessData:

	//update from event to trigger message externally
	
	//when stop transport, Svy send board arrived , prompt send no board id forecast
	bStopTransportSnd := EDGEPOS (fbSequenceUS.eMsgTypeSnd = HermesMsgTypeStopTransport) AND p_bConvHvBrd ; //Incoming Zone have board;	
	
	IF bStopTransportSnd THEN 
		tyBoardArrivedInfo := tyBoardAvailableRcv; 
	END_IF

	


	
	
	
	
END_ACTION