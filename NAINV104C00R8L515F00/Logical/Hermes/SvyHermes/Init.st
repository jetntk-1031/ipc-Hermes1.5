(** 2021-08-01 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_SvyHermesStat	    	:= ADR(eStat);
	p_SvyHermesStatus   	:= ADR(eMainStatus);
	p_SvyHermesStatTxt    	:= ADR(sStatTxt);
	p_SvyHermesAct	    	:= ADR(eHermesAct);
	p_SvyHermesMcParamAct	:= ADR(eMcParamAct);
	
	//Alarm
	p_SvyHermesAlmData	    := ADR(tyAlmData);
	p_SvyHermesAlmData1	    := ADR(tyAlmData1);
	p_SvyHermesAlmData2	    := ADR(tyAlmData2);
	p_SvyHermesAlmData3	    := ADR(tyAlmData3);
    p_SvyHermesAlmData4	    := ADR(tyAlmData4);
	p_SvyHermesInfoData	    := ADR(tyInfoData);
	p_SvyHermesInfoData1	:= ADR(tyInfoData1);
	p_SvyHermesInfoData2	:= ADR(tyInfoData2);
	p_SvyHermesInfoData3	:= ADR(tyInfoData3);
	p_SvyHermesInfoData4	:= ADR(tyInfoData4);
	p_SvyHermesInfoData5	:= ADR(tyInfoData5);
	p_SvyHermesInfoData6	:= ADR(tyInfoData6);
	
	//Output
	p_SvyHermesConnected			:= ADR(bConnected);
	p_SvyHermesHandshakeDone		:= ADR(bHandshakeDone);
	p_SvyHermesInternalSnd		    := ADR(sInternalSnd);
	p_SvyHermesFileNotFound			:= ADR(bFileNotFound);
	p_SvyHermesSetConfiguration	    := ADR(tySetConfigurationModified);
	p_SvyHermesWriteConfig	        := ADR(bWriteConfig);
	p_SvyHermesUpdateUIData	        := ADR(bUpdateUIData);
	p_SvyHermesWorkOrderId          := ADR(sWorkOrderId); //WorkOrderId from Supervisory System
	p_SvyHermesBatchId              := ADR(sBatchId); //BatchId from Supervisory System
	p_SvyHermesSendWorkOrderInfo    := ADR (tySendWorkOrderInfoRcv);   // Pass Receive data to Downstream
	p_SvyHermesRcvInsertBoardInfo	:= ADR(bRcvInsertBoardInfo);
	
	//Data
	p_SvyHermesFoundIndexUS1              := ADR(bFoundIndexUS1);
	p_SvyHermesFoundIndexUS2              := ADR(bFoundIndexUS2);
	p_SvyHermesFoundIndexUS3              := ADR(bFoundIndexUS3);
	p_SvyHermesFoundIndexUS4              := ADR(bFoundIndexUS4);
	p_SvyHermesFoundIndexDS1              := ADR(bFoundIndexDS1);
	p_SvyHermesFoundIndexDS2              := ADR(bFoundIndexDS2);
	p_SvyHermesFoundIndexDS3              := ADR(bFoundIndexDS3);
	p_SvyHermesFoundIndexDS4              := ADR(bFoundIndexDS4);
	p_SvyHermesIndexUS1                   := ADR(udiFoundIndexUS1);
	p_SvyHermesIndexUS2                   := ADR(udiFoundIndexUS2);
	p_SvyHermesIndexUS3                   := ADR(udiFoundIndexUS3);
	p_SvyHermesIndexUS4                   := ADR(udiFoundIndexUS4);
	p_SvyHermesIndexDS1                   := ADR(udiFoundIndexDS1);
	p_SvyHermesIndexDS2                   := ADR(udiFoundIndexDS2);
	p_SvyHermesIndexDS3                   := ADR(udiFoundIndexDS3);
	p_SvyHermesIndexDS4                   := ADR(udiFoundIndexDS4);
	
	//Add
	p_RcvWorkOrderInfo1                := ADR(bRcvWorkOrderInfo1); 
	p_ManualInsertData                 := ADR(bManualInsertData);
		
	(* Always Change If Project Change *)
	
END_PROGRAM
