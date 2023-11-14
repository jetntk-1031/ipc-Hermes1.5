
(* Hermes Parse XML Table Data For Board Available *)
FUNCTION fHermesParseBoardAvailable
		

	fHermesParseBoardAvailable	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tyBoardAvailable.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardidcreatedby') THEN
						
		p_tyBoardAvailable.tyAvl.bBoardIdCreatedBy	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.sBoardIdCreatedBy	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'failedboard') THEN
						
		p_tyBoardAvailable.tyAvl.bFailedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardAvailable.tyData.eFailedBoard	:= HermesGoodBoard;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardAvailable.tyData.eFailedBoard	:= HermesFailedBoard;
			ELSE
				p_tyBoardAvailable.tyData.eFailedBoard	:= HermesUnknownBoard;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'producttypeid') THEN
						
		p_tyBoardAvailable.tyAvl.bProductTypeId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.sProductTypeId	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'flippedboard') THEN
						
		p_tyBoardAvailable.tyAvl.bFlippedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardAvailable.tyData.eFlippedBoard	:= HermesFlippedBoardTopSideUp;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardAvailable.tyData.eFlippedBoard	:= HermesFlippedBoardBtmSideUp;
			ELSE
				p_tyBoardAvailable.tyData.eFlippedBoard	:= HermesFlippedBoardUnknownSide;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topbarcode') THEN
						
		p_tyBoardAvailable.tyAvl.bTopBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.sTopBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottombarcode') THEN
						
		p_tyBoardAvailable.tyAvl.bBottomBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.sBottomBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'length') THEN
						
		p_tyBoardAvailable.tyAvl.bLength	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.rLength	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'width') THEN
						
		p_tyBoardAvailable.tyAvl.bWidth	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.rWidth	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'thickness') THEN
						
		p_tyBoardAvailable.tyAvl.bThickness	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.rThickness	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'conveyorspeed') THEN
						
		p_tyBoardAvailable.tyAvl.bConveyorSpeed	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.rConveyorSpeed	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topclearanceheight') THEN
						
		p_tyBoardAvailable.tyAvl.bTopClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.rTopClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottomclearanceheight') THEN
						
		p_tyBoardAvailable.tyAvl.bBottomClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.rBottomClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'weight') THEN
						
		p_tyBoardAvailable.tyAvl.bWeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.rWeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'workorderid') THEN
						
		p_tyBoardAvailable.tyAvl.bWorkOrderId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.sWorkOrderId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'batchid') THEN
						
		p_tyBoardAvailable.tyAvl.bBatchId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.sBatchId	:= tyXMLTableNxt.sValue;
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'route') THEN
						
		p_tyBoardAvailable.tyAvl.bRoute	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.iRoute	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'action') THEN
						
		p_tyBoardAvailable.tyAvl.bAction	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.iAction	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'ST') AND (sCurrValueLowerCase = 'sb') THEN
		iSubBoardCntr := iSubBoardCntr + 1;
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'pos') THEN
		p_tyBoardAvailable.tyAvl.tySubBoards.bSubBoardsPos[iSubBoardCntr]	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.tySubBoards.iSubBoardsPos[iSubBoardCntr]	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bc') THEN
		
		p_tyBoardAvailable.tyAvl.tySubBoards.bSubBoardsBc[iSubBoardCntr]	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.tySubBoards.sSubBoardsBc[iSubBoardCntr]	:= tyXMLTableNxt.sValue;
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'st') THEN
		
		p_tyBoardAvailable.tyAvl.tySubBoards.bSubBoardsSt[iSubBoardCntr]	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardAvailable.tyData.tySubBoards.iSubBoardsSt[iSubBoardCntr]	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
	END_IF
		
END_FUNCTION
