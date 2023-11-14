
(* Hermes Parse XML Table Data For Board Forecast*)
FUNCTION fHermesParseBoardForecast
	
	fHermesParseBoardForecast	:= TRUE;
	
	IF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'forecastid') THEN
						
		p_tyBoardForecast.tyAvl.bForecastId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sForecastId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'timeuntilavailable') THEN
						
		p_tyBoardForecast.tyAvl.bTimeUntilAvailable	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rTimeUntilAvailable	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardid') THEN
						
		p_tyBoardForecast.tyAvl.bBoardId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sBoardId	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'boardidcreatedby') THEN
						
		p_tyBoardForecast.tyAvl.bBoardIdCreatedBy	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sBoardIdCreatedBy	:= tyXMLTableNxt.sValue;
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'failedboard') THEN
						
		p_tyBoardForecast.tyAvl.bFailedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardForecast.tyData.eFailedBoard	:= HermesGoodBoard;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardForecast.tyData.eFailedBoard	:= HermesFailedBoard;
			ELSE
				p_tyBoardForecast.tyData.eFailedBoard	:= HermesUnknownBoard;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'producttypeid') THEN
						
		p_tyBoardForecast.tyAvl.bProductTypeId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sProductTypeId	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'flippedboard') THEN
						
		p_tyBoardForecast.tyAvl.bFlippedBoard	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			IF tyXMLTableNxt.sValue = '1' THEN
				p_tyBoardForecast.tyData.eFlippedBoard	:= HermesFlippedBoardTopSideUp;
			ELSIF tyXMLTableNxt.sValue = '2' THEN
				p_tyBoardForecast.tyData.eFlippedBoard	:= HermesFlippedBoardBtmSideUp;
			ELSE
				p_tyBoardForecast.tyData.eFlippedBoard	:= HermesFlippedBoardUnknownSide;
			END_IF
		END_IF
						
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topbarcode') THEN
						
		p_tyBoardForecast.tyAvl.bTopBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sTopBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottombarcode') THEN
						
		p_tyBoardForecast.tyAvl.bBottomBarcode	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sBottomBarcode	:= tyXMLTableNxt.sValue;
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'length') THEN
						
		p_tyBoardForecast.tyAvl.bLength	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rLength	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'width') THEN
						
		p_tyBoardForecast.tyAvl.bWidth	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rWidth	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'thickness') THEN
						
		p_tyBoardForecast.tyAvl.bThickness	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rThickness	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'conveyorspeed') THEN
						
		p_tyBoardForecast.tyAvl.bConveyorSpeed	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rConveyorSpeed	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'topclearanceheight') THEN
						
		p_tyBoardForecast.tyAvl.bTopClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rTopClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'bottomclearanceheight') THEN
						
		p_tyBoardForecast.tyAvl.bBottomClearanceHeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rBottomClearanceHeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
					
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'weight') THEN
						
		p_tyBoardForecast.tyAvl.bWeight	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.rWeight	:= STRING_TO_REAL(tyXMLTableNxt.sValue);
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'workorderid') THEN
						
		p_tyBoardForecast.tyAvl.bWorkOrderId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sWorkOrderId	:= tyXMLTableNxt.sValue;
		END_IF
		
	ELSIF (tyXMLTableCurr.sTitle = 'AT') AND (sCurrValueLowerCase = 'batchid') THEN
						
		p_tyBoardForecast.tyAvl.bBatchId	:= TRUE;
						
		IF tyXMLTableNxt.sTitle = 'AV' THEN
			p_tyBoardForecast.tyData.sBatchId	:= tyXMLTableNxt.sValue;
		END_IF	
					
	END_IF
		
END_FUNCTION
