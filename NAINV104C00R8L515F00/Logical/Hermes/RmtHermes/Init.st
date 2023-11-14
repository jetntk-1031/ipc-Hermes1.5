(** 2021-08-01 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_RmtHermesStat	    	:= ADR(eStat);
	p_RmtHermesStatus   	:= ADR(eMainStatus);
	p_RmtHermesStatTxt   	:= ADR(sStatTxt);
	p_RmtHermesAct	    	:= ADR(eHermesAct);
	p_RmtHermesMcParamAct	:= ADR(eMcParamAct);
	
	//Alarm
	p_RmtHermesAlmData	    := ADR(tyAlmData);
	p_RmtHermesAlmData1	    := ADR(tyAlmData1);
	p_RmtHermesAlmData2	    := ADR(tyAlmData2);
	p_RmtHermesAlmData3	    := ADR(tyAlmData3);
	p_RmtHermesInfoData	    := ADR(tyInfoData);
	
	//Output
	p_RmtHermesFileNotFound			:= ADR(bFileNotFound);
	p_RmtHermesConnected			:= ADR(bConnected);
	p_RmtHermesSetConfiguration	    := ADR(tySetConfiguration);
	p_RmtHermesWriteConfig          := ADR(bWriteConfig);
	p_RmtHermesUpdateUIData	        := ADR(bUpdateUIData);
	
	//Data
	p_RmtHermesFoundIndexUS1              := ADR(bFoundIndexUS1);
	p_RmtHermesFoundIndexUS2              := ADR(bFoundIndexUS2);
	p_RmtHermesFoundIndexUS3              := ADR(bFoundIndexUS3);
	p_RmtHermesFoundIndexUS4              := ADR(bFoundIndexUS4);
	p_RmtHermesFoundIndexDS1              := ADR(bFoundIndexDS1);
	p_RmtHermesFoundIndexDS2              := ADR(bFoundIndexDS2);
	p_RmtHermesFoundIndexDS3              := ADR(bFoundIndexDS3);
	p_RmtHermesFoundIndexDS4              := ADR(bFoundIndexDS4);
	p_RmtHermesIndexUS1                   := ADR(udiFoundIndexUS1);
	p_RmtHermesIndexUS2                   := ADR(udiFoundIndexUS2);
	p_RmtHermesIndexUS3                   := ADR(udiFoundIndexUS3);
	p_RmtHermesIndexUS4                   := ADR(udiFoundIndexUS4);
	p_RmtHermesIndexDS1                   := ADR(udiFoundIndexDS1);
	p_RmtHermesIndexDS2                   := ADR(udiFoundIndexDS2);
	p_RmtHermesIndexDS3                   := ADR(udiFoundIndexDS3);
	p_RmtHermesIndexDS4                   := ADR(udiFoundIndexDS4);
//	p_RmtHermesCurrentConfiguration	:= ADR(tyCurrentConfiguration);
//	p_RmtHermesCurrentConfMcId		:= ADR(tyCurrentConfiguration.tyData.sMachineId);
	
	(* Always Change If Project Change *)
END_PROGRAM
