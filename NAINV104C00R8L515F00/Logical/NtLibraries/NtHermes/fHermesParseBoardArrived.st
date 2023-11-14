
(* Hermes Parse XML Table Data For Board Arrived*)
FUNCTION fHermesParseBoardArrived
	
	fHermesParseBoardArrived	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'machineid') THEN
						
		p_tyBoardArrived.tyAvl.bMachineId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sMachineId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'upstreamlaneid') THEN
						
		p_tyBoardArrived.tyAvl.bUpstreamLaneId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.iUpstreamLaneId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'upstreaminterfaceid') THEN
						
		p_tyBoardArrived.tyAvl.bUpstreamInterfaceId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sUpstreamInterfaceId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'magazineid') THEN
						
		p_tyBoardArrived.tyAvl.bMagazineId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sMagazineId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'slotid') THEN
						
		p_tyBoardArrived.tyAvl.bSlotId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.iSlotId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardtransfer') THEN
						
		p_tyBoardArrived.tyAvl.bBoardTransfer	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardArrived.tyData.eBoadTransfer	:= HermesTransferred;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardArrived.tyData.eBoadTransfer	:= HermesLoaded;
			ELSIF tyXMLTableNxt.sValue = '3' THEN
				p_tyBoardArrived.tyData.eBoadTransfer	:= HermesInserted;
			END_IF
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tyBoardArrived.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardidcreatedby') THEN
						
		p_tyBoardArrived.tyAvl.bBoardIdCreatedBy	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sBoardIdCreatedBy	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'failedboard') THEN
						
		p_tyBoardArrived.tyAvl.bFailedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardArrived.tyData.eFailedBoard	:= HermesGoodBoard;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardArrived.tyData.eFailedBoard	:= HermesFailedBoard;
			ELSE
				p_tyBoardArrived.tyData.eFailedBoard	:= HermesUnknownBoard;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'producttypeid') THEN
						
		p_tyBoardArrived.tyAvl.bProductTypeId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sProductTypeId	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'flippedboard') THEN
						
		p_tyBoardArrived.tyAvl.bFlippedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardArrived.tyData.eFlippedBoard	:= HermesFlippedBoardTopSideUp;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardArrived.tyData.eFlippedBoard	:= HermesFlippedBoardBtmSideUp;
			ELSE
				p_tyBoardArrived.tyData.eFlippedBoard	:= HermesFlippedBoardUnknownSide;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topbarcode') THEN
						
		p_tyBoardArrived.tyAvl.bTopBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sTopBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottombarcode') THEN
						
		p_tyBoardArrived.tyAvl.bBottomBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sBottomBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'length') THEN
						
		p_tyBoardArrived.tyAvl.bLength	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.rLength	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'width') THEN
						
		p_tyBoardArrived.tyAvl.bWidth	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.rWidth	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'thickness') THEN
						
		p_tyBoardArrived.tyAvl.bThickness	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.rThickness	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'conveyorspeed') THEN
						
		p_tyBoardArrived.tyAvl.bConveyorSpeed	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.rConveyorSpeed	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topclearanceheight') THEN
						
		p_tyBoardArrived.tyAvl.bTopClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.rTopClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottomclearanceheight') THEN
						
		p_tyBoardArrived.tyAvl.bBottomClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.rBottomClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'weight') THEN
						
		p_tyBoardArrived.tyAvl.bWeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.rWeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'workorderid') THEN
						
		p_tyBoardArrived.tyAvl.bWorkOrderId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sWorkOrdedId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'batchid') THEN
						
		p_tyBoardArrived.tyAvl.bBatchId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.sBatchId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'route') THEN
						
		p_tyBoardArrived.tyAvl.bRoute	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.iRoute	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'action') THEN
						
		p_tyBoardArrived.tyAvl.bAction	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardArrived.tyData.iAction	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF	
	END_IF
		
END_FUNCTION
