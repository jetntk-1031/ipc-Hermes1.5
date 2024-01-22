(** 2019-05-04 **)
ACTION Act_Initial:
	//Initial
	
	//Retain Data
	p_udiRetainDataAddr1	:= ADR(a_tyHermesBrdAvlData);
	p_udiRetainDataLen1	:= SIZEOF(a_tyHermesBrdAvlData);
	
	sStatTxt	:= a_sStatText[eStat];
	
	fbDirCreate1.sDevice	:= 'F';
	fbDirCreate1.sDirName	:= 'User';
	fbDirCreate1(bEn := FALSE);
	
	fbDirCreate2.sDevice	:= 'User';
	fbDirCreate2.sDirName	:= 'Retain';
	fbDirCreate2(bEn := FALSE);
	
	fbDirCreate3.sDevice	:= 'User';
	fbDirCreate3.sDirName	:= 'Log';
	fbDirCreate3(bEn := FALSE);
	
	fbDirCreate4.sDevice	:= 'User';
	fbDirCreate4.sDirName	:= 'MachineParameter';
	fbDirCreate4(bEn := FALSE);
	
	fbFileRead1.sDevice			:= 'McParam';
	fbFileRead1.sFile			:= p_sConfigFileName;
	fbFileRead1.udiOffset		:= 0;
	fbFileRead1.p_Dest			:= ADR(tyCurrConfiguration);
	fbFileRead1.udiLen			:= SIZEOF(tyCurrConfiguration);
	fbFileRead1(bEn := FALSE);
	
	fbFileWrite1.sDevice		:= 'McParam';
	fbFileWrite1.sFile			:= p_sConfigFileName;
	fbFileWrite1.udiOffset		:= 0;
	fbFileWrite1.p_Src			:= ADR(tyConfigurationWr);
	fbFileWrite1.udiLen			:= SIZEOF(tyConfigurationWr);
	fbFileWrite1.udiOption		:= 0;
	fbFileWrite1(bEn := FALSE);
	
	fbFileRead2.sDevice			:= 'Retain';
	fbFileRead2.sFile			:= p_sRetainFileName1;
	fbFileRead2.udiOffset		:= 0;
	fbFileRead2.p_Dest			:= p_udiRetainDataAddr1;
	fbFileRead2.udiLen			:= p_udiRetainDataLen1;
	fbFileRead2(bEn := FALSE);
	
	fbFileWrite2.sDevice		:= 'Retain';
	fbFileWrite2.sFile			:= p_sRetainFileName1;
	fbFileWrite2.udiOffset		:= 0;
	fbFileWrite2.p_Src			:= p_udiRetainDataAddr1;
	fbFileWrite2.udiLen			:= p_udiRetainDataLen1;
	fbFileWrite2.udiOption		:= 0;
	fbFileWrite2(bEn := FALSE);
	
	fbFileRead3.sDevice			:= 'Retain';
	fbFileRead3.sFile			:= p_sRetainFileName2;
	fbFileRead3.udiOffset		:= 0;
	fbFileRead3.p_Dest			:= p_udiRetainDataAddr2;
	fbFileRead3.udiLen			:= p_udiRetainDataLen2;
	fbFileRead3(bEn := FALSE);
	
	fbFileWrite3.sDevice		:= 'Retain';
	fbFileWrite3.sFile			:= p_sRetainFileName2;
	fbFileWrite3.udiOffset		:= 0;
	fbFileWrite3.udiOption		:= 0;
	fbFileWrite3.p_Src			:= p_udiRetainDataAddr2;
	fbFileWrite3.udiLen			:= p_udiRetainDataLen2;
	fbFileWrite3(bEn := FALSE);
	
	fbFileRead4.sDevice			:= 'Retain';
	fbFileRead4.sFile			:= p_sRetainFileName3;
	fbFileRead4.udiOffset		:= 0;
	fbFileRead4.p_Dest			:= p_udiRetainDataAddr3;
	fbFileRead4.udiLen			:= p_udiRetainDataLen3;
	fbFileRead4(bEn := FALSE);
	
	fbFileWrite4.sDevice		:= 'Retain';
	fbFileWrite4.sFile			:= p_sRetainFileName3;
	fbFileWrite4.udiOffset		:= 0;
	fbFileWrite4.udiOption		:= 0;
	fbFileWrite4.p_Src			:= p_udiRetainDataAddr3;
	fbFileWrite4.udiLen			:= p_udiRetainDataLen3;
	fbFileWrite4(bEn := FALSE);
	
	fbFileRead5.sDevice			:= 'Retain';
	fbFileRead5.sFile			:= p_sRetainFileName4;
	fbFileRead5.udiOffset		:= 0;
	fbFileRead5.p_Dest			:= p_udiRetainDataAddr4;
	fbFileRead5.udiLen			:= p_udiRetainDataLen4;
	fbFileRead5(bEn := FALSE);
	
	fbFileWrite5.sDevice		:= 'Retain';
	fbFileWrite5.sFile			:= p_sRetainFileName4;
	fbFileWrite5.udiOffset		:= 0;
	fbFileWrite5.udiOption		:= 0;
	fbFileWrite5.p_Src			:= p_udiRetainDataAddr4;
	fbFileWrite5.udiLen			:= p_udiRetainDataLen4;
	fbFileWrite5(bEn := FALSE);


	
	
	//Command
	memset(ADR(a_tyCommandProcessList),0,SIZEOF(a_tyCommandProcessList));
	usiProcessCmdBffr := 0;
	usiUSIdent  := fHermesAddOneCommandGate(TRUE,p_USHermesCommandParam,ADR(tyCurrConfiguration.a_tyUSParam[0].sUpstreamInterfaceId),p_McParamUSCommMod,ADR(a_tyCommandProcessList),ADR(usiProcessCmdBffr));
	usiDSIdent  := fHermesAddOneCommandGate(FALSE,p_DSHermesCommandParam,ADR(tyCurrConfiguration.a_tyDSParam[0].sDownstreamInterfaceId),p_McParamDSCommMod,ADR(a_tyCommandProcessList),ADR(usiProcessCmdBffr));
	usiUSIdent2 := fHermesAddOneCommandGate(TRUE,p_USHermes2CommandParam,ADR(tyCurrConfiguration.a_tyUSParam[1].sUpstreamInterfaceId),p_McParamUSComm2Mod,ADR(a_tyCommandProcessList),ADR(usiProcessCmdBffr));

	//output
	bCmdInitialCompl := TRUE;

	//tyCurrConfiguration
	//Feature(Machine Safety)
	p_HermesUSCmdFeaturePause := ADR(tyCurrConfiguration.a_tyUSParam[0].bFeatureCommand);
	p_HermesUSCmdPause := ADR(a_tyCommandPause[usiUSIdent]); 
	p_HermesDSCmdFeaturePause := ADR(tyCurrConfiguration.a_tyDSParam[0].bFeatureCommand);
	p_HermesDSCmdPause := ADR(a_tyCommandPause[usiDSIdent]);
	a_tyCommandPause[usiUSIdent].bFeatureRequestFrom :=  p_bNTParamMachineSafetySig;
	a_tyCommandPause[usiUSIdent].bFeatureRequestTo   :=  p_bNTParamUnlockCovPrep;
	
	a_tyCommandPause[usiDSIdent].bFeatureRequestFrom := p_bNTParamMachineSafetySig;
	a_tyCommandPause[usiDSIdent].bFeatureRequestTo	:=  p_bNTParamUnlockCovPrep;

	//Feature(Oven Info)
	//p_HermesUSCmdFeaturePause := ADR(tyCurrConfiguration.a_tyUSParam[1].bFeatureCommand);
	//p_HermesUSCmdPause := ADR(a_tyCommandPause[usiUSIdent2]); 
	//a_tyCommandLockInputConv[usiUSIdent].bFeatureLockConvTo   :=  p_bNTParamOvenInfoAPrep;
	//a_tyCommandLockInputConv[usiDSIdent].bFeatureLockConvFrom := p_bNTParamOvenInfoAPrep;
	//a_tyCommandLockInputConv[usiUSIdent2].bFeatureLockConvTo  :=  p_bNTParamOvenInfoBPrep;

	//Board Available Action setting
	usiZoneSupported := 3;
	//zone 1 supported action
	tbActionSupportedByZone[1,HermesActionBypass] := TRUE ;
	tbActionSupportedByZone[1,HermesActionInspect] := TRUE;
	//zone 2 supported action
	tbActionSupportedByZone[2,HermesActionFIFO] := TRUE;
	tbActionSupportedByZone[2,HermesActionInspect] := TRUE;
	//zone 3 supported action
	tbActionSupportedByZone[3,HermesActionInvert] := TRUE;
	tbActionSupportedByZone[3,HermesActionBypass] := TRUE;
	
	//Intermediate Board Data Generation
	tyHermesBoardAvailableAttribAddr.udiMacAddrForGUID	 := p_HWInfoMacAddr ;
	tyHermesBoardAvailableAttribAddr.udiDateTimeForGUID  := p_TimeCurrDTStruct;
	tyHermesBoardAvailableAttribAddr.udiBoardIdCreatedBy := p_McParamMcNm;




	
END_ACTION
