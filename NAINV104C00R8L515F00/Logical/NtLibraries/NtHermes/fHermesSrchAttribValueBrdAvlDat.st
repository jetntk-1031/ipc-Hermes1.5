
(* Hermes Search Attribute Value from BrvAvlDat , return the attribute index value*)
FUNCTION fHermesSrchAttribValueBrdAvlDat

	fHermesSrchAttribValueBrdAvlDat := -1;
	fConvertToLower_254(ADR(sTitleLowerCase) , sAttributeTiltle);
	sAttributeValue := '';

	FOR i := 0 TO 200 DO //search for the board action and update / add if not exist
		IF (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
			fConvertToLower_254(ADR(sLowerCase) , p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sValue);
			IF (sLowerCase = sTitleLowerCase) THEN
				IF p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
					sAttributeValue  := p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sValue	; //if Action already in XMLTable
					fHermesSrchAttribValueBrdAvlDat := i;
					EXIT;
				END_IF
			END_IF
		END_IF
	END_FOR

	
END_FUNCTION
