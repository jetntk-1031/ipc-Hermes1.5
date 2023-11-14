(** 2023-08-01 **)
ACTION Act_Background_ProcessData:

	//update from event to trigger message externally
	IF EDGEPOS(eStatus = Done AND eStat = HermesActReadRetain) AND usiBAIndex = 0  THEN //find empty index
		FOR usiBAIndex := 0  TO SIZEOF(a_tyBoardDepartedInfo)/SIZEOF(a_tyBoardDepartedInfo[0]) -1  DO 
			IF memcmp(ADR(a_tyBoardDepartedInfo[usiBAIndex].tyData.sBoardId),ADR(''),1) = 0 THEN
				EXIT; //search for index
			END_IF
		END_FOR
		usiPrevBAIndex := usiBAIndex;
	END_IF
	
	//board departed
	bTransportFinishedSnd := EDGEPOS (fbSequenceDS.eMsgTypeSnd = HermesMsgTypeTransportFinished);
			
	IF bTransportFinishedSnd THEN
		IF usiBAIndex >= 50 THEN
			usiBAIndex := 0;
		END_IF
		memset(ADR(a_tyBoardDepartedInfo[usiBAIndex]),0,SIZEOF(a_tyBoardDepartedInfo[usiBAIndex]));
		memcpy(ADR(a_tyBoardDepartedInfo[usiBAIndex]),ADR(tyBoardAvailableSnd),SIZEOF(tyBoardAvailableSnd));
		usiBAIndex := usiBAIndex +1;
	END_IF
	
	IF eStatus = Done AND eStat = HermesActWriteRetain THEN
		eAct			:= HermesActIdle;
		usiPrevBAIndex 	:= usiBAIndex;
	ELSIF eStatus = Idle AND eStat = HermesActIdle  AND  usiPrevBAIndex <> usiBAIndex THEN
		a_tyBoardDepartedInfoWr := a_tyBoardDepartedInfo;
		eAct 					 := HermesActWriteRetain;
	END_IF
	
	
END_ACTION