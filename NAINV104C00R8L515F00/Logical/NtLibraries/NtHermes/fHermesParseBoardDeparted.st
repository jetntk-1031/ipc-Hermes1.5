
(* Hermes Parse XML Table Data For Board Departed*)
FUNCTION fHermesParseBoardDeparted
	
	fHermesParseBoardDeparted	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'machineid') THEN
						
		p_tyBoardDeparted.tyAvl.bMachineId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sMachineId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'downstreamlaneid') THEN
						
		p_tyBoardDeparted.tyAvl.bDownstreamLaneId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.iDownstreamLaneId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'downstreaminterfaceid') THEN
						
		p_tyBoardDeparted.tyAvl.bDownstreamInterfaceId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sDownstreamInterfaceId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'magazineid') THEN
						
		p_tyBoardDeparted.tyAvl.bMagazineId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sMagazineId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'slotid') THEN
						
		p_tyBoardDeparted.tyAvl.bSlotId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.iSlotId	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardtransfer') THEN
						
		p_tyBoardDeparted.tyAvl.bBoardTransfer	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardDeparted.tyData.eBoadTransfer	:= HermesTransferred;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardDeparted.tyData.eBoadTransfer	:= HermesLoaded;
			ELSIF tyXMLTableNxt.sValue = '3' THEN
				p_tyBoardDeparted.tyData.eBoadTransfer	:= HermesInserted;
			END_IF
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tyBoardDeparted.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardidcreatedby') THEN
						
		p_tyBoardDeparted.tyAvl.bBoardIdCreatedBy	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sBoardIdCreatedBy	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'failedboard') THEN
						
		p_tyBoardDeparted.tyAvl.bFailedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardDeparted.tyData.eFailedBoard	:= HermesGoodBoard;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardDeparted.tyData.eFailedBoard	:= HermesFailedBoard;
			ELSE
				p_tyBoardDeparted.tyData.eFailedBoard	:= HermesUnknownBoard;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'producttypeid') THEN
						
		p_tyBoardDeparted.tyAvl.bProductTypeId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sProductTypeId	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'flippedboard') THEN
						
		p_tyBoardDeparted.tyAvl.bFlippedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardDeparted.tyData.eFlippedBoard	:= HermesFlippedBoardTopSideUp;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardDeparted.tyData.eFlippedBoard	:= HermesFlippedBoardBtmSideUp;
			ELSE
				p_tyBoardDeparted.tyData.eFlippedBoard	:= HermesFlippedBoardUnknownSide;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topbarcode') THEN
						
		p_tyBoardDeparted.tyAvl.bTopBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sTopBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottombarcode') THEN
						
		p_tyBoardDeparted.tyAvl.bBottomBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sBottomBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'length') THEN
						
		p_tyBoardDeparted.tyAvl.bLength	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.rLength	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'width') THEN
						
		p_tyBoardDeparted.tyAvl.bWidth	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.rWidth	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'thickness') THEN
						
		p_tyBoardDeparted.tyAvl.bThickness	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.rThickness	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'conveyorspeed') THEN
						
		p_tyBoardDeparted.tyAvl.bConveyorSpeed	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.rConveyorSpeed	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topclearanceheight') THEN
						
		p_tyBoardDeparted.tyAvl.bTopClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.rTopClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottomclearanceheight') THEN
						
		p_tyBoardDeparted.tyAvl.bBottomClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.rBottomClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'weight') THEN
						
		p_tyBoardDeparted.tyAvl.bWeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.rWeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'workorderid') THEN
						
		p_tyBoardDeparted.tyAvl.bWorkOrderId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sWorkOrdedId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'batchid') THEN
						
		p_tyBoardDeparted.tyAvl.bBatchId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.sBatchId	:= tyXMLTableNxt.sValue;
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'route') THEN
						
		p_tyBoardDeparted.tyAvl.bRoute	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.iRoute	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'action') THEN
						
		p_tyBoardDeparted.tyAvl.bAction	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardDeparted.tyData.iAction	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
	END_IF
		
END_FUNCTION
