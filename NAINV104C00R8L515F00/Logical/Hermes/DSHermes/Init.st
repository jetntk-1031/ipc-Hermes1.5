(** 2020-09-10 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_DSHermesStat		:= ADR(eStat);
	p_DSHermesStatus	:= ADR(eMainStatus);
	p_DSHermesStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_DSHermesAlmData	:= ADR(tyAlmData);
	p_DSHermesAlmData1	:= ADR(tyAlmData1);
	p_DSHermesAlmData2	:= ADR(tyAlmData2);
	p_DSHermesAlmData3	:= ADR(tyAlmData3);
	p_DSHermesAlmData4	:= ADR(tyAlmData4);
	p_DSHermesInfoData	:= ADR(tyInfoData);//detail mismatch machine ready and boardforecast
	
	//Output
	p_DSHermesConnected			:= ADR(bConnected);
	p_DSHermesHandshakeDone		:= ADR(bHandshakeDone);
	p_DSHermesUSRdy				:= ADR(bUSRdy);
	p_DSHermesDSRdy				:= ADR(bDSRdy);
	p_DSHermesUSGdRdy			:= ADR(bUSGdRdy);
	p_DSHermesDSGdRdy			:= ADR(bDSGdRdy);
	p_DSHermesTransporting		:= ADR(bTransporting);
	p_DSHermesStopTransport		:= ADR(bStopTransport);
	p_DSHermesInternalSnd		:= ADR(sInternalSnd);
	
	p_DSHermesTransportFinish	:=ADR(bTransportFinishedSnd);
	p_DSHermesTransportFinishMsg 	:=ADR(tyTransportFinished);
	//command
	p_DSHermesCommandParam			:= ADR(tyCommandParam);
	//route
	p_DSHermesBrdAvlSnd				:= ADR(tyBoardAvailableSnd);
	//p_DSHermesRcvReverseUSMcRdy		:= ADR(bDSHermesRcvReverseUSMcRdy);
	(* Always Change If Project Change *)
	
END_PROGRAM
