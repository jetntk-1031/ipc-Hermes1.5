
(* Hermes Add One Message Send Buffer *)
FUNCTION fHermesBrdAvltoBF
	
	fHermesBrdAvltoBF := 0;
	
	tyHermesBoardForecast.tyData.sBoardId := tyHermesBoardAvailable.tyData.sBoardId;
	tyHermesBoardForecast.tyData.sBoardIdCreatedBy := tyHermesBoardAvailable.tyData.sBoardIdCreatedBy;
	tyHermesBoardForecast.tyData.eFailedBoard := tyHermesBoardAvailable.tyData.eFailedBoard;
	tyHermesBoardForecast.tyData.sProductTypeId := tyHermesBoardAvailable.tyData.sProductTypeId;
	tyHermesBoardForecast.tyData.eFlippedBoard := tyHermesBoardAvailable.tyData.eFlippedBoard ;
	tyHermesBoardForecast.tyData.sTopBarcode := 	tyHermesBoardAvailable.tyData.sTopBarcode;
	tyHermesBoardForecast.tyData.sBottomBarcode := 	tyHermesBoardAvailable.tyData.sBottomBarcode ;
	tyHermesBoardForecast.tyData.rLength	:= 	tyHermesBoardAvailable.tyData.rLength;
	tyHermesBoardForecast.tyData.rWidth	:= 	tyHermesBoardAvailable.tyData.rWidth;
	tyHermesBoardForecast.tyData.rThickness := 	tyHermesBoardAvailable.tyData.rThickness;
	tyHermesBoardForecast.tyData.rConveyorSpeed := 	tyHermesBoardAvailable.tyData.rConveyorSpeed;
	tyHermesBoardForecast.tyData.rTopClearanceHeight := 	tyHermesBoardAvailable.tyData.rTopClearanceHeight;
	tyHermesBoardForecast.tyData.rBottomClearanceHeight := 	tyHermesBoardAvailable.tyData.rBottomClearanceHeight;
	tyHermesBoardForecast.tyData.rWeight := 	tyHermesBoardAvailable.tyData.rWeight;
	tyHermesBoardForecast.tyData.sWorkOrderId := 	tyHermesBoardAvailable.tyData.sWorkOrderId;
	tyHermesBoardForecast.tyData.sBatchId := 	tyHermesBoardAvailable.tyData.sBatchId;
	
	tyHermesBoardForecast.tyAvl.bBoardId := tyHermesBoardAvailable.tyData.sBoardId <> '';
	tyHermesBoardForecast.tyAvl.bBoardIdCreatedBy := tyHermesBoardAvailable.tyData.sBoardIdCreatedBy <> '';
	tyHermesBoardForecast.tyAvl.bFailedBoard := TRUE;// tyHermesBoardAvailable.tyData.eFailedBoard <> 0;
	tyHermesBoardForecast.tyAvl.bProductTypeId := tyHermesBoardAvailable.tyData.sProductTypeId <> '';
	tyHermesBoardForecast.tyAvl.bFlippedBoard := TRUE ;//tyHermesBoardAvailable.tyData.eFlippedBoard <>0  ;
	tyHermesBoardForecast.tyAvl.bTopBarcode := 	tyHermesBoardAvailable.tyData.sTopBarcode <> '';
	tyHermesBoardForecast.tyAvl.bBottomBarcode := 	tyHermesBoardAvailable.tyData.sBottomBarcode <> '';
	tyHermesBoardForecast.tyAvl.bLength	:= 	tyHermesBoardAvailable.tyData.rLength <>0;
	tyHermesBoardForecast.tyAvl.bWidth	:= 	tyHermesBoardAvailable.tyData.rWidth <>0;
	tyHermesBoardForecast.tyAvl.bThickness := 	tyHermesBoardAvailable.tyData.rThickness <>0;
	tyHermesBoardForecast.tyAvl.bConveyorSpeed := 	tyHermesBoardAvailable.tyData.rConveyorSpeed <>0;
	tyHermesBoardForecast.tyAvl.bTopClearanceHeight := 	tyHermesBoardAvailable.tyData.rTopClearanceHeight <>0;
	tyHermesBoardForecast.tyAvl.bBottomClearanceHeight := 	tyHermesBoardAvailable.tyData.rBottomClearanceHeight<>0;
	tyHermesBoardForecast.tyAvl.bWeight := 	tyHermesBoardAvailable.tyData.rWeight<>0;
	tyHermesBoardForecast.tyAvl.bWorkOrderId := 	tyHermesBoardAvailable.tyData.sWorkOrderId <> '';
	tyHermesBoardForecast.tyAvl.bBatchId := 	tyHermesBoardAvailable.tyData.sBatchId <> '';
	
END_FUNCTION
