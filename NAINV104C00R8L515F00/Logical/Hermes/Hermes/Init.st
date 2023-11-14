(** 2019-05-04 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_HermesStat	:= ADR(eStat);
	p_HermesStatus	:= ADR(eStatus);
	p_HermesStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_HermesAlmData	:= ADR(tyAlmData);
	
	//Output
	p_HermesFileNotFound		:= ADR(bFileNotFound);
	p_HermesConfiguration		:= ADR(tyCurrConfiguration);
	p_HermesConfigurationWr	    := ADR(tyConfigurationWr);
	p_HermesUSParam1			:= ADR(tyCurrConfiguration.a_tyUSParam[0]);
	p_HermesUSParam2			:= ADR(tyCurrConfiguration.a_tyUSParam[1]);
	p_HermesUSParam3			:= ADR(tyCurrConfiguration.a_tyUSParam[2]);
	p_HermesDSParam1			:= ADR(tyCurrConfiguration.a_tyDSParam[0]);
	p_HermesDSParam2			:= ADR(tyCurrConfiguration.a_tyDSParam[1]);
	p_HermesDSParam3			:= ADR(tyCurrConfiguration.a_tyDSParam[2]);
	p_HermesSvyParam		    := ADR(tyCurrConfiguration.tySvyParam);
	p_HermesBrdAvlDataTable1stZ		    := ADR(a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl); //Lane 1 First Zone Data, for B.F
	p_HermesBrdAvlDataTtlIdx1stZ    	:= ADR(a_tyHermesBrdAvlData[1].iXMLTableDataBrdAvlTtlIdx);  //Lane 1 First Zone Data, for B.F
	p_HermesBrdAvlDataNewBrdAvl1stZ	    := ADR(a_tyHermesBrdAvlData[1].bNewBrdAvl);  //Lane 1 First Zone Data, for B.F
	p_HermesBrdAvlDataTableLastZ		:= ADR(a_tyHermesBrdAvlData[1].a_tyXMLTableDataBrdAvl); //Lane 1 Last Zone Data,for B.A, adjust array no. accordingly
	p_HermesBrdAvlDataTtlIdxLastZ	    := ADR(a_tyHermesBrdAvlData[1].iXMLTableDataBrdAvlTtlIdx); //Lane 1 Last Zone Data,for B.A, adjust array no. accordingly
	p_HermesBrdAvlDataNewBrdAvlLastZ	:= ADR(a_tyHermesBrdAvlData[1].bNewBrdAvl); //Lane 1 Last Zone Data,for B.A, adjust array no. accordingly
	(* Always Change If Project Change *)
	p_HermesCmdInitialCompl		:= ADR(bCmdInitialCompl);
	
	//check route
	pa_HermesDSParam			:= ADR(tyCurrConfiguration.a_tyDSParam);

	//route output signal
	p_HermesReverseDS1SendBFId	:= ADR(usiReverseDS1SndBfWBrdID);
	p_HermesReverseDS2SendBFId	:= ADR(usiReverseDS2SndBfWBrdID);
	
	p_HermesSwitchtoReverseTransport := ADR(bSwitchtoReverseTransport);
	p_HermesEntToReversePosition := ADR(bEntToReversePosition);
	//p_HermesBrdAvlDataNewBrdAvlLastZ
END_PROGRAM
