
(* Hermes Parse XML Table Data For Send Work Order Info*)
FUNCTION fHermesParseSendWorkOrderInfo
	
	fHermesParseSendWorkOrderInfo	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'queryid') THEN
						
	    p_tySendWorkOrderInfo.tyAvl.bQueryId	:= TRUE;
						
     	IF tyXMLTableNxt.sTitle = 'AV' THEN
		p_tySendWorkOrderInfo.tyData.sQueryId	:= tyXMLTableNxt.sValue;
    	END_IF
				
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'workorderid') THEN
						
	    p_tySendWorkOrderInfo.tyAvl.bWorkOrderId	:= TRUE;
						
    	IF tyXMLTableNxt.sTitle = 'AV' THEN
		p_tySendWorkOrderInfo.tyData.sWorkOrderId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'batchid') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bBatchId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.sBatchId	:= tyXMLTableNxt.sValue;
		END_IF
				
	
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardidcreatedby') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bBoardIdCreatedBy	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.sBoardIdCreatedBy	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'failedboard') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bFailedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tySendWorkOrderInfo.tyData.eFailedBoard	:= HermesGoodBoard;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tySendWorkOrderInfo.tyData.eFailedBoard	:= HermesFailedBoard;
			ELSE
				p_tySendWorkOrderInfo.tyData.eFailedBoard	:= HermesUnknownBoard;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'producttypeid') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bProductTypeId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.sProductTypeId	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'flippedboard') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bFlippedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tySendWorkOrderInfo.tyData.eFlippedBoard	:= HermesFlippedBoardTopSideUp;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tySendWorkOrderInfo.tyData.eFlippedBoard	:= HermesFlippedBoardBtmSideUp;
			ELSE
				p_tySendWorkOrderInfo.tyData.eFlippedBoard	:= HermesFlippedBoardUnknownSide;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topbarcode') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bTopBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.sTopBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottombarcode') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bBottomBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.sBottomBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'length') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bLength	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.rLength	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'width') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bWidth	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.rWidth	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'thickness') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bThickness	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.rThickness	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'conveyorspeed') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bConveyorSpeed	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.rConveyorSpeed	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topclearanceheight') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bTopClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.rTopClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottomclearanceheight') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bBottomClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.rBottomClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'weight') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bWeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.rWeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'route') THEN
						
		p_tySendWorkOrderInfo.tyAvl.bRoute	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tySendWorkOrderInfo.tyData.iRoute	:= STRING_TO_INT(tyXMLTableNxt.sValue);
		END_IF
		
	END_IF
		
END_FUNCTION
