(** 2021-08-01 **)
ACTION Act_Background_Action:
	//Action function
//testing funciton
	IF EDGEPOS(bSimBrdInZone1) THEN
		tyHermesBoardAvailableAttribAddr.udiProductTypeId := p_ProdRcpCurrRcp0Nm;
		tyHermesBoardAvailableAttribAddr.udiWidth  := p_ProdRcpCurrRcp0Width;
		fHermesGenerateBrdAvlDat(ADR(a_tyHermesBrdAvlData[1]),tyHermesBoardAvailableAttribAddr);
		fHermesAddEditAttribBrdAvlDat(ADR(a_tyHermesBrdAvlData[1]),'Action',sSelectedActtoUpdate);
		bSimBrdInZone1 := FALSE;
	END_IF
	IF EDGEPOS(bSimBrdInZone2) THEN
		tyHermesBoardAvailableAttribAddr.udiProductTypeId := p_ProdRcpCurrRcp0Nm;
		tyHermesBoardAvailableAttribAddr.udiWidth  := p_ProdRcpCurrRcp0Width;
		fHermesGenerateBrdAvlDat(ADR(a_tyHermesBrdAvlData[2]),tyHermesBoardAvailableAttribAddr);
		fHermesAddEditAttribBrdAvlDat(ADR(a_tyHermesBrdAvlData[2]),'Action',sSelectedActtoUpdate);
		bSimBrdInZone2 := FALSE;
	END_IF
	IF EDGEPOS(bSimBrdInZone3) THEN
		tyHermesBoardAvailableAttribAddr.udiProductTypeId := p_ProdRcpCurrRcp0Nm;
		tyHermesBoardAvailableAttribAddr.udiWidth  := p_ProdRcpCurrRcp0Width;
		fHermesGenerateBrdAvlDat(ADR(a_tyHermesBrdAvlData[3]),tyHermesBoardAvailableAttribAddr);
		fHermesAddEditAttribBrdAvlDat(ADR(a_tyHermesBrdAvlData[3]),'Action',sSelectedActtoUpdate);
		bSimBrdInZone3 := FALSE; 
	END_IF
//	IF EDGEPOS(bSimSearch) THEN
//		testresult1 := fHermesSrchAttribValueBrdAvlDat(ADR(a_tyHermesBrdAvlData[1]),'Action',ADR(sAttribReadValue));
//	END_IF
//	IF EDGEPOS(bSimDelete) THEN
//		testresult2 := fHermesDeleteAttribBrdAvlDat(ADR(a_tyHermesBrdAvlData[1]),'Action');
//	END_IF

	IF EDGEPOS(bSimShiftBoardFoward) THEN
		memmove(ADR(a_tyHermesBrdAvlData[endpos]),ADR(a_tyHermesBrdAvlData[startpos]),SIZEOF(a_tyHermesBrdAvlData[startpos]));
		memset(ADR(a_tyHermesBrdAvlData[startpos]),0,SIZEOF(a_tyHermesBrdAvlData[startpos]));
		memmove(ADR(a_bLinkOpsGConvHvBrd[endpos]),ADR(a_bLinkOpsGConvHvBrd[startpos]),SIZEOF(a_bLinkOpsGConvHvBrd[startpos]));
		memset(ADR(a_bLinkOpsGConvHvBrd[startpos]),0,SIZEOF(a_bLinkOpsGConvHvBrd[startpos]));
	END_IF
	IF EDGEPOS(bSimClear) THEN
		memset(ADR(a_tyHermesBrdAvlData[dltpos]),0,SIZEOF(a_tyHermesBrdAvlData[dltpos]));
	END_IF
//end of testing
	
	
//	In state Below
//	Zone[supported action]    0 | 1 | 2
//	Brd(supported action)    A | B | C
	
	
	
	FOR usiZone := usiZoneSupported TO 1 BY -1 DO
		//assiging action
		//update for next machine or zone action
		IF  NOT(a_bUIZonePause[usiZone]) THEN
			a_bBlkDSForAction[usiZone] := FALSE;
			a_bUIPromptActionSelect[usiZone] := FALSE;
		ELSE
			a_bBlkDSForAction[usiZone] := TRUE;
			IF EDGEPOS(a_bOpsDsStandByStep[usiZone]) THEN
				a_bUIPromptActionSelect[usiZone] := TRUE ;
			END_IF
			
			IF EDGENEG(a_bUIPromptActionSelect[usiZone])  THEN
				a_bUIZonePause[usiZone] := FALSE;
				udiSelectedModtoUpt := a_eModSelectedforCurrZone[usiZone];		
				sSelectedActtoUpdate := UDINT_TO_STRING(udiSelectedModtoUpt);
				fHermesAddEditAttribBrdAvlDat(ADR(a_tyHermesBrdAvlData[usiZone]),'Action',sSelectedActtoUpdate);
	
			END_IF
		END_IF 

	   
		

		
			
		//switch the mod for that zone as soon as possible
		//below for preparing action for unoccupied zone starting from right most

		//1)block zone occurred to prevent the middle zone stop reacting to the pending board which does not meet its supported action
		//2)not until the estimated board reach the supported zone, the other left zone will not assigned with action
		//3)compare the leftblock , if reservation zone and occupied zone happened at same time, choose the leftmost zone
		IF usiZone = usiZoneSupported THEN
			usiLeftmostBlockedZone := usiZone;
		ELSIF usiZone < usiLeftmostBlockedZone THEN	
			usiLeftmostBlockedZone := usiZone; //check the left block zone
		END_IF


		IF a_bLinkOpsGConvStepInitDone[usiZone] THEN
			IF NOT(a_bLinkOpsGConvHvBrd[usiZone]) THEN
				memset(ADR(a_tyActionReservedForZone[usiZone]),0,SIZEOF(a_tyActionReservedForZone[usiZone])); 
				IF usiLeftmostBlockedZone <> 0 THEN //occured there is zone reserved or occupied at zone 1
					FOR usiBrdZone := usiLeftmostBlockedZone TO 1 BY -1 DO
						IF a_bLinkOpsGConvHvBrd[usiBrdZone] THEN
							IF (usiBrdZone-1) < usiZone THEN 
								usiLeftmostBlockedZone :=  usiBrdZone; //current board position as limit 
							END_IF
							iActionAttributeIdx := fHermesSrchAttribValueBrdAvlDat(ADR(a_tyHermesBrdAvlData[usiBrdZone]),'Action',ADR(sAttribReadValue)); 
							IF iActionAttributeIdx <> -1 THEN
								iActionOnBrd := STRING_TO_INT(sAttribReadValue);
								IF iActionOnBrd <> 0 AND (1 <= iActionOnBrd  AND iActionOnBrd <= usiMaxActionSupported )THEN
									IF tbActionSupportedByZone[usiZone,iActionOnBrd] THEN
										fHermesSrchAttribValueBrdAvlDat(ADR(a_tyHermesBrdAvlData[usiBrdZone]),'BoardId',ADR(sAttribReadValue));
										//the zone pro-react to action on board
										IF (usiBrdZone-1) < usiZone THEN
											usiLeftmostBlockedZone := usiBrdZone -1; //choose board starting from left side
										END_IF
										a_tyActionReservedForZone[usiZone].iAction := iActionOnBrd; //found support on this zone
										a_tyActionReservedForZone[usiZone].iAttributeIdx := iActionAttributeIdx +1;
										a_tyActionReservedForZone[usiZone].sBoardId := sAttribReadValue;
										EXIT;
									END_IF
								END_IF
							END_IF
							IF a_tyActionReservedForZone[usiZone].iAction <> iActionOnBrd OR iActionOnBrd = 0 THEN
								EXIT; //when non-supported board stuck at middle then do no consider further
							END_IF
						END_IF
					END_FOR
				END_IF
			ELSE // if have board 
				IF (usiZone -1) < usiLeftmostBlockedZone THEN
					usiLeftmostBlockedZone := usiZone -1;
				END_IF
				//update when action completed
				fHermesSrchAttribValueBrdAvlDat(ADR(a_tyHermesBrdAvlData[usiZone]),'BoardId',ADR(sAttribReadValue));
				IF a_tyActionReservedForZone[usiZone].iAction <> 0 AND sAttribReadValue =  a_tyActionReservedForZone[usiZone].sBoardId THEN
					IF a_tyActionReservedForZone[usiZone].bActionCompl THEN
						a_tyHermesBrdAvlData[usiZone].a_tyXMLTableDataBrdAvl[a_tyActionReservedForZone[usiZone].iAttributeIdx].sValue	:= '0';
					END_IF
				ELSE //refind an action for the board in current zone
					memset(ADR(a_tyActionReservedForZone[usiZone]),0,SIZEOF(a_tyActionReservedForZone[usiZone])); 
					iActionAttributeIdx := fHermesSrchAttribValueBrdAvlDat(ADR(a_tyHermesBrdAvlData[usiZone]),'Action',ADR(sAttribReadValue)); 
					IF iActionAttributeIdx <> -1 THEN
						iActionOnBrd := STRING_TO_INT(sAttribReadValue);
						IF iActionOnBrd <> 0 AND (1 <= iActionOnBrd  AND iActionOnBrd <= usiMaxActionSupported )THEN
							IF tbActionSupportedByZone[usiZone,iActionOnBrd] THEN
								//react
								fHermesSrchAttribValueBrdAvlDat(ADR(a_tyHermesBrdAvlData[usiZone]),'BoardId',ADR(sAttribReadValue));
								a_tyActionReservedForZone[usiZone].iAction := iActionOnBrd; //found support on this zone
								a_tyActionReservedForZone[usiZone].iAttributeIdx := iActionAttributeIdx +1;
								a_tyActionReservedForZone[usiZone].sBoardId := sAttribReadValue;
								EXIT;
							END_IF
						END_IF
					END_IF
				END_IF
			END_IF
			
		END_IF
		
	
		
	END_FOR 
	


END_ACTION