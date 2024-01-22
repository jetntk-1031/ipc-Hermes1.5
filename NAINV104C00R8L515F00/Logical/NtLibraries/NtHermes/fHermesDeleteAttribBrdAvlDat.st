
(* Hermes Delete Attribute Value from BrvAvlDat *)
FUNCTION fHermesDeleteAttribBrdAvlDat

	fHermesDeleteAttribBrdAvlDat := 0;
	fConvertToLower_254(ADR(sTitleLowerCase) , sAttributeTiltle);
	usiBrdDatSize := SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl)/SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[1]);
	FOR i := 0 TO usiBrdDatSize  DO //search for the board action and update / add if not exist
		IF (p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sTitle = 'AT') THEN
			fConvertToLower_254(ADR(sLowerCase) , p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i].sValue);
			IF (sLowerCase = sTitleLowerCase) THEN
				IF p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sTitle = 'AV' THEN
					//p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[i+1].sValue	:= sAttributeValue ; //if Action already in XMLTable
					udiHermesAttributeEndIdx := i;
					EXIT;
				END_IF
			END_IF

		END_IF
	END_FOR
	IF i <> usiBrdDatSize THEN
		memmove(ADR(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[0])+udiHermesAttributeEndIdx*SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[0])
		,ADR(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[0])+(udiHermesAttributeEndIdx+2)*SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[0])
		,SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl[0])*(usiBrdDatSize-(i+2)));
		fHermesDeleteAttribBrdAvlDat := TRUE;
	END_IF 

END_FUNCTION
