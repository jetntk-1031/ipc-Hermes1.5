(** 2020-09-10 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_DSHermes2Stat		:= ADR(eStat);
	p_DSHermes2Status	:= ADR(eMainStatus);
	p_DSHermes2StatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_DSHermes2AlmData	:= ADR(tyAlmData);
	p_DSHermes2AlmData1	:= ADR(tyAlmData1);
	p_DSHermes2AlmData2	:= ADR(tyAlmData2);
	p_DSHermes2AlmData3	:= ADR(tyAlmData3);
	p_DSHermes2AlmData4	:= ADR(tyAlmData4);
	
	//Output
	p_DSHermes2Connected			:= ADR(bConnected);
	p_DSHermes2HandshakeDone		:= ADR(bHandshakeDone);
	p_DSHermes2USRdy				:= ADR(bUSRdy);
	p_DSHermes2DSRdy				:= ADR(bDSRdy);
	p_DSHermes2USGdRdy				:= ADR(bUSGdRdy);
	p_DSHermes2DSGdRdy				:= ADR(bDSGdRdy);
	p_DSHermes2Transporting			:= ADR(bTransporting);
	p_DSHermes2StopTransport		:= ADR(bStopTransport);
	p_DSHermes2InternalSnd			:= ADR(sInternalSnd);
	
	p_DSHermes2TransportFinish		:=ADR(bTransportFinishedSnd);
	p_DSHermes2TransportFinishMsg	:= ADR(tyTransportFinished);
	//command
	p_DSHermes2CommandParam			:= ADR(tyCommandParam);
	//route
	p_DSHermes2BrdAvlSnd				:= ADR(tyBoardAvailableSnd);
	//p_DSHermes2RcvReverseUSMcRdy		:= ADR(bDSHermesRcvReverseUSMcRdy);
	(* Always Change If Project Change *)
	
END_PROGRAM
