(** 2019-05-04 **)
ACTION Act_Link:
	

	
	IF p_bLinkStartupRun = FALSE THEN
		
		//Passing Board Available Memory
		//Init Board
		IF EDGEPOS(p_bLinkOpsInvertStepInitDone = TRUE) THEN
			
			IF p_bLinkConvHvBrd = FALSE THEN
				//tyHermesBrdAvlData.bNewBrdAvl	:= TRUE;
				a_tyHermesBrdAvlData[1].bNewBrdAvl := TRUE;
				bHermesWriteRetainLane1	:= TRUE;
			END_IF
			
		END_IF
		
		//Enter Board - US1
		IF EDGEPOS(p_bLinkConvHvBrd) AND (p_bLinkOpsInvertStepEntToEnd = TRUE OR p_bLinkOpsInvertStepEntToInOff) THEN
			
			IF p_bLinkUSHermesTransporting THEN
				
				a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl		:= pa_tyLinkXMLTableDataBrdAvl;
				a_tyHermesBrdAvlData[1].iXMLTableDataBrdAvlTtlIdx	:= p_iLinkXMLTableDataBrdAvlTtlIdx;
				a_tyHermesBrdAvlData[1].bNewBrdAvl					:= FALSE;
				
				bHermesWriteRetainLane1	:= TRUE;
				
			ELSE
				
				a_tyHermesBrdAvlData[1].bNewBrdAvl	:= TRUE;
				
				bHermesWriteRetainLane1	:= TRUE;
				
				//added Hermes 1.5
				tyHermesBoardAvailableAttribAddr.udiProductTypeId := p_ProdRcpCurrRcp0Nm;
				tyHermesBoardAvailableAttribAddr.udiWidth  := p_ProdRcpCurrRcp0Width;
				fHermesGenerateBrdAvlDat(ADR(a_tyHermesBrdAvlData[1]),tyHermesBoardAvailableAttribAddr);
			END_IF
			
		END_IF
		
		//Exit Board
		IF EDGENEG(p_bLinkConvHvBrd) AND p_bLinkOpsInvertStepInitDone = TRUE THEN
			//p_bLinkOpsInvertStepExitBrd = TRUE AND EDGENEG(p_bLinkConvHvBrd) THEN
			a_tyHermesBrdAvlData[1].bNewBrdAvl	:= TRUE;
			
			bHermesWriteRetainLane1	:= TRUE;
		END_IF
		
		//Write Hermes Retain Data
		IF bHermesWriteRetainLane1 = TRUE AND eStatus <> Busy THEN
			p_eAct	:= HermesActWriteRetain;
				
			IF (eStat = HermesActWriteRetain) AND (eStatus = Done) THEN
				p_eAct				:= HermesActIdle;
				bHermesWriteRetainLane1	:= FALSE;
			END_IF
		END_IF
	
	END_IF
	
	
	IF EDGENEG(p_bLinkOpsInvertStepInvert) THEN
		FOR i := 0 TO 200 DO
			IF (a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
				fConvertToLower_254(ADR(sLowerCase) , a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i].sValue);
				
				IF (sLowerCase = 'flippedboard') THEN
					IF a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
						IF p_tyUSHermestyBoardAvailable.tyData.eFlippedBoard = 1 THEN
							a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i+1].sValue	:= '2';
						ELSIF  p_tyUSHermestyBoardAvailable.tyData.eFlippedBoard = 2 THEN
							a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i+1].sValue	:= '1';
						ELSE
							a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl[i+1].sValue	:= '0';
						END_IF

								
						EXIT;
						
					END_IF
						
				END_IF
					
			END_IF
		END_FOR
	END_IF
	

	
END_ACTION
