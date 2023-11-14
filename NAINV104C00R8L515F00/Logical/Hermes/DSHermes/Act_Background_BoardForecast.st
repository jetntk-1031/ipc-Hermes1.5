(** 2023-08-01 **)
ACTION Act_Background_BoardForecast:

	
	

	bFeatureBoardForecast := (p_tyParam.bFeatureBoardForecast = TRUE) AND (tyServiceDescriptionRcv.tyAvl.tySupportedFeatures.bFeatureBoardForecast = TRUE) (*AND bHandshakeDone*) ;
	
	
	IF NOT(bFeatureBoardForecast) THEN
		bNewChangeOver := FALSE;
		bSendBFNoID	   := FALSE;
		bSendBFId	   := FALSE;
		bBFIdSent	   := FALSE;
		bSndReverseBF  :=  FALSE;
		tyInfoData.sProgNm		:= '';
		tyInfoData.udiCode		:= 0;
		tyInfoData.eSeverity	:= AlmSeverityNA;
		tyInfoData.sAlmMsg		:= '';
	ELSE
		bSndReverseBF := EDGEPOS(p_usiUSHermesReverseDSSendBFId <> 0);
		
		fbTimerRstBFId(IN:= bSendBFId AND bBFIdSent 
		AND NOT(bRstSendBFId) AND tyInfoData.udiCode= 10999
		AND bDSRdy 
		,PT := T#1000s); //start counting when received mismatch Machine ready
		
		IF bRstSendBFId OR fbTimerRstBFId.Q 
			OR EDGEPOS(bAllZoneEmpty AND p_bConvInitDone)  THEN //Reset BoardForecast width id
			bRstSendBFId := FALSE; 
			bSendBFId := FALSE;
			bBFIdSent := FALSE;
		ELSIF fbTimerRstBFId.IN THEN
			sRstTim 				:= REAL_TO_STRING(TIME_TO_REAL(fbTimerRstBFId.PT-fbTimerRstBFId.ET)/1000.0);
			tyInfoData.sAlmMsg		:= CONCAT(sInfoMcRdyMsg,CONCAT(sRstTim,'(seconds)'));
		END_IF
		
		IF EDGEPOS(bNewProduct) OR EDGEPOS(bNewWidth) THEN  //Trigger BFID
			bNewChangeOver := TRUE;
			bBFIdSent := FALSE; //To resend BF-ID	
		END_IF
		
		IF bNewChangeOver AND bAllZoneEmpty AND p_bConvInitDone THEN
			bNewChangeOver:= FALSE;
			bSendBFId	  := TRUE; //reset when find mactch machine ready
		END_IF
	
		IF bSendBFId = FALSE AND bBFIdSent = FALSE THEN //reset notification
			tyInfoData.sProgNm		:= '';
			tyInfoData.udiCode		:= 0;
			tyInfoData.eSeverity	:= AlmSeverityNA;
			tyInfoData.sAlmMsg		:= '';	
		END_IF
		
		IF bSendBFId = FALSE   THEN  	//Trigger BF No Id
			bSendBFNoID	:= FALSE;
			IF bFirstZoneHaveBoard AND NOT(bFirstZoneEndSen) THEN //Zone 1 PCB_In and have Board
				bSendBFNoID	:= TRUE;
			ELSIF bSndReverseBF THEN // EDGEPOS(bSndReverseBF) OR EDGENEG(bSndReverseBF) THEN //Reverse route
				bSendBFNoID	:= TRUE; //EDGEPOS send Brd id , EDGENEG send empty brd id
			END_IF
		END_IF

	END_IF
	



	
END_ACTION