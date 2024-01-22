
(* Hermes Add One Message Send Buffer *)
FUNCTION fHermesGenerateBrdAvlDat

	fHermesGenerateBrdAvlDat := 0;
	memset(ADR(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl),0,SIZEOF(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl));
	
	pa_usiMacAddr ACCESS tyHermesBAMsgAttribAddr.udiDateTimeForGUID;
	p_tyDTStructure ACCESS tyHermesBAMsgAttribAddr.udiDateTimeForGUID;
	fHermesGenerateUUID(ADR(tyGenBoardAvailable.tyData.sBoardId) , p_tyDTStructure , pa_usiMacAddr);
	
	memcpy(ADR(tyGenBoardAvailable.tyData.sBoardIdCreatedBy) , tyHermesBAMsgAttribAddr.udiBoardIdCreatedBy  ,SIZEOF(tyGenBoardAvailable.tyData.sBoardIdCreatedBy)) ;
	memcpy(ADR(tyGenBoardAvailable.tyData.sProductTypeId) , tyHermesBAMsgAttribAddr.udiProductTypeId ,SIZEOF(tyGenBoardAvailable.tyData.sProductTypeId)) ;

	p_diWidth ACCESS tyHermesBAMsgAttribAddr.udiWidth;
	diWidthInMM := p_diWidth;
	tyGenBoardAvailable.tyData.rWidth := DINT_TO_REAL(diWidthInMM /1000);
	
	tyGenBoardAvailable.tyAvl.bBoardId			:= tyGenBoardAvailable.tyData.sBoardId <> '';
	tyGenBoardAvailable.tyAvl.bBoardIdCreatedBy := tyGenBoardAvailable.tyData.sBoardIdCreatedBy <> '';
	tyGenBoardAvailable.tyAvl.bProductTypeId := tyGenBoardAvailable.tyData.sProductTypeId <> '';
	tyGenBoardAvailable.tyAvl.bWidth := tyGenBoardAvailable.tyData.rWidth <> 0;
	tyGenBoardAvailable.tyAvl.bFailedBoard := TRUE;
	tyGenBoardAvailable.tyAvl.bFlippedBoard := TRUE;
	
	fHermesFormBoardAvailable(ADR(p_tyHermesBrdAvlDat.a_tyXMLTableDataBrdAvl),p_tyDTStructure,tyGenBoardAvailable);
	p_tyHermesBrdAvlDat.iXMLTableDataBrdAvlTtlIdx := 80;
	p_tyHermesBrdAvlDat.bNewBrdAvl := FALSE;

END_FUNCTION
