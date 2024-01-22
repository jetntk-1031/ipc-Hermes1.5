
(* Hermes Add Edit Attribute Value to BrvAvlDat *)
FUNCTION fHermesAddEditAttribBrdAvlDat

	fHermesAddEditAttribBrdAvlDat := 0;
	fConvertToLower_254(ADR(sTitleLowerCase) , sAttributeTiltle);
	
	FOR i := 0 TO 200 DO //search for the board action and update / add if not exist
		IF (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
			fConvertToLower_254(ADR(sLowerCase) , p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sValue);
			IF (sLowerCase = sTitleLowerCase) THEN
				IF p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
					p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sValue	:= sAttributeValue ; //if Action already in XMLTable
					EXIT;
				END_IF
			END_IF
		ELSIF (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sTitle = 'EN') AND (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sTitle = 'ST') THEN //with subboard tag
			fConvertToLower_254(ADR(sLowerCase) , p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sValue);
			IF (sLowerCase = 'subboards') THEN
				udiHermesAttributeEndIdx := i;
			END_IF
		ELSIF (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sTitle = 'ES') AND (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sTitle = 'ET') THEN //no subboard tag
			fConvertToLower_254(ADR(sLowerCase) , p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sValue);
			IF (sLowerCase = 'hermes') THEN
				udiHermesAttributeEndIdx := i;
			END_IF
		ELSIF (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sTitle = 'ET') AND (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sTitle = 'EN') THEN //very end of Hermes tag
			fConvertToLower_254(ADR(sLowerCase) , p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sValue);
			IF (sLowerCase = 'hermes') THEN
				udiHermesBAEndIdx := i+1;
			END_IF
		END_IF
	END_FOR
	IF i = 201 THEN //if not found  action attibute in Hermes Message, create own Action Attribute
		memcpy(ADR(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx])+SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[0])*2,
		ADR(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx]),
		(udiHermesBAEndIdx - udiHermesAttributeEndIdx)*SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[0]));
		p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].sTitle := 'AT';
		p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].sValue := sAttributeTiltle;
		p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].uiSize := LEN(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx].sValue);
		p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].sTitle := 'AV';
		p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].sValue := sAttributeValue ; 
		p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].uiSize := LEN(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[udiHermesAttributeEndIdx+1].sValue);
	END_IF

END_FUNCTION
