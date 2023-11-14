(** 2020-09-10 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_USHermes2Stat		:= ADR(eStat);
	p_USHermes2Status	:= ADR(eMainStatus);
	p_USHermes2StatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_USHermes2AlmData	:= ADR(tyAlmData);
	p_USHermes2AlmData1	:= ADR(tyAlmData1);
	p_USHermes2AlmData2	:= ADR(tyAlmData2);
	p_USHermes2AlmData3	:= ADR(tyAlmData3);
	p_USHermes2AlmData4	:= ADR(tyAlmData4);
	p_USHermes2AlmData5	:= ADR(tyAlmData5);
	p_USHermes2InfoData	:= ADR(tyInfoData);
	
	//Output
	p_USHermes2TableDataBrdAvl			:= ADR(a_tyXMLTableDataBrdAvl);
	p_USHermes2TableDataBrdAvlTtlIdx	:= ADR(iXMLTableDataBrdAvlTtlIdx);
	p_USHermes2Connected				:= ADR(bConnected);
	p_USHermes2HandshakeDone			:= ADR(bHandshakeDone);
	p_USHermes2AccDataReq				:= ADR(bAccDataReq);
	p_USHermes2OverWriteSlt				:= ADR(bOverWriteSlt);
	p_USHermes2OverWriteWidth			:= ADR(bOverWriteWidth);
	p_USHermes2ReqRecipeNm				:= ADR(sReqRecipeNm);
	p_USHermes2ReqWidthInUM				:= ADR(diReqWidthInUM);
	p_USHermes2ReqMinSltValue			:= ADR(diReqMinSltValue);
	p_USHermes2ReqMaxSltValue			:= ADR(diReqMaxSltValue);
	p_USHermes2ReqPitch					:= ADR(diReqPitch);
	p_USHermes2USRdy					:= ADR(bUSRdy);
	p_USHermes2DSRdy					:= ADR(bDSRdy);
	p_USHermes2USGdRdy					:= ADR(bUSGdRdy);
	p_USHermes2DSGdRdy					:= ADR(bDSGdRdy);
	p_USHermes2Transporting				:= ADR(bTransporting);
	p_USHermes2StopTransport			:= ADR(bStopTransport);
	p_USHermes2BlkUS					:= ADR(bBlkUS);
	p_USHermes2InternalSnd				:= ADR(sInternalSnd);
	p_USHermes2AccDataMnl				:= ADR(bAccDataMnl);
	p_USHermes2StopTransportSnd 			:= ADR(bStopTransportSnd);
	
	
	p_USHermes2tyBoardAvailable			:= ADR(tyBoardAvailableRcv);
	p_USHermes2RcvBoardInfoOk        := ADR(bRcvBoardInfoOk); 
	p_USHermes2RcvbBoardInfoIncompl  := ADR(bRcvBoardInfoIncompl); 
	p_USHermes2BoardInfoData         := ADR(tySendBoardInfoAcc); //Pass "SendBoardInfo" data for DSHermes "BoardAvailable", for inserted PCB
	p_USHermes2BoardArrivedData		:= ADR(tyBoardArrivedInfo); //"BoardArrived" data for SupervisoryHermes 
	
	//command
	p_USHermes2CommandParam				:= ADR(tyCommandParam);
	
	//Calling  on Reverse DS
	p_USHermes2ReverseDSSendBFId		:= ADR(bReverseDSSndBfWBrdID);
	p_USHermes2ProcessRouteTrigger		:= ADR(bTriggerUpdateRoute);
	
	
	//Block US Hermes
	p_USHermes2SwitchtoReverseRcv := ADR(bSwitchtoReverseReceive);
	(* Always Change If Project Change *)
	p_USHermes2BrdForecast			:= ADR(tyBoardForecastRcv);
	p_USHermes2BrdForecastRcv 		:= ADR(bBrdForecastRcv);
	p_USHermes2StopTransportSent    := ADR(bStopTransportSent);
	p_USHermes2StopTransportSentMsg	:= ADR(tyStopTransport);
	p_USHermes2BoardAvailableRcved   :=ADR(bBoardAvailableRcved);
END_PROGRAM
