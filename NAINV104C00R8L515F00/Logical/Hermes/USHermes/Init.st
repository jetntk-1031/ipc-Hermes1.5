(** 2020-09-10 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_USHermesStat		:= ADR(eStat);
	p_USHermesStatus	:= ADR(eMainStatus);
	p_USHermesStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_USHermesAlmData	:= ADR(tyAlmData);
	p_USHermesAlmData1	:= ADR(tyAlmData1);
	p_USHermesAlmData2	:= ADR(tyAlmData2);
	p_USHermesAlmData3	:= ADR(tyAlmData3);
	p_USHermesAlmData4	:= ADR(tyAlmData4);
	p_USHermesAlmData5	:= ADR(tyAlmData5);
	p_USHermesInfoData	:= ADR(tyInfoData);
	
	//Output
	p_USHermesTableDataBrdAvl		:= ADR(a_tyXMLTableDataBrdAvl);
	p_USHermesTableDataBrdAvlTtlIdx	:= ADR(iXMLTableDataBrdAvlTtlIdx);
	p_USHermesConnected				:= ADR(bConnected);
	p_USHermesHandshakeDone			:= ADR(bHandshakeDone);
	p_USHermesAccDataReq			:= ADR(bAccDataReq);
	p_USHermesOverWriteSlt			:= ADR(bOverWriteSlt);
	p_USHermesOverWriteWidth		:= ADR(bOverWriteWidth);
	p_USHermesReqRecipeNm			:= ADR(sReqRecipeNm);
	p_USHermesReqWidthInUM			:= ADR(diReqWidthInUM);
	p_USHermesReqMinSltValue		:= ADR(diReqMinSltValue);
	p_USHermesReqMaxSltValue		:= ADR(diReqMaxSltValue);
	p_USHermesReqPitch				:= ADR(diReqPitch);
	p_USHermesUSRdy					:= ADR(bUSRdy);
	p_USHermesDSRdy					:= ADR(bDSRdy);
	p_USHermesUSGdRdy				:= ADR(bUSGdRdy);
	p_USHermesDSGdRdy				:= ADR(bDSGdRdy);
	p_USHermesTransporting			:= ADR(bTransporting);
	p_USHermesStopTransport			:= ADR(bStopTransport);
	p_USHermesBlkUS					:= ADR(bBlkUS);
	p_USHermesInternalSnd			:= ADR(sInternalSnd);
	p_USHermesAccDataMnl			:= ADR(bAccDataMnl);
	p_USHermesStopTransportSnd 		:= ADR(bStopTransportSnd);
	
	p_USHermestyBoardAvailable		:= ADR(tyBoardAvailableRcv);
	p_USHermesRcvBoardInfoOk        := ADR(bRcvBoardInfoOk); 
	p_USHermesRcvbBoardInfoIncompl  := ADR(bRcvBoardInfoIncompl); 
	p_USHermesBoardInfoData         := ADR(tySendBoardInfoAcc); //Pass "SendBoardInfo" data for DSHermes "BoardAvailable", for inserted PCB
	p_USHermesBoardArrivedData		:= ADR(tyBoardArrivedInfo); //"BoardArrived" data for SupervisoryHermes 
	
	
	//command
	
	p_USHermesCommandParam			:= ADR(tyCommandParam);
	
	//Calling  on Reverse DS
	p_USHermesReverseDSSendBFId		:= ADR(bReverseDSSndBfWBrdID);
	p_USHermesProcessRouteTrigger	:= ADR(bTriggerUpdateRoute);
	
	//Action
	p_USHermesAction				:= ADR(iAction);
	
	//p_USHermesSwitchtoReverseReceive 	:= ADR(bSwitchtoReverseReceive);
	(* Always Change If Project Change *)
	
	p_USHermesBrdForecast			:= ADR(tyBoardForecastRcv);
	p_USHermesBrdForecastRcv 		:= ADR(bBrdForecastRcv);
	p_USHermesStopTransportSent    	:= ADR(bStopTransportSent);
	p_USHermesStopTransportSentMsg  := ADR(tyStopTransport);
	p_USHermesBoardAvailableRcved   :=ADR(bBoardAvailableRcved);
END_PROGRAM
