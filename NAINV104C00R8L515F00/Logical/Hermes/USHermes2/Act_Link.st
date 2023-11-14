(** 2019-06-04 **)
ACTION Act_Link:
	
	//Receive Alive Time
	p_tyParam.tRcvAlive	:= p_tyParam.tSndAlive * 2;
	
	//Transfer Complete
	IF (p_eLinkConvDir = ConvDirLToR) OR (p_eLinkConvDir = ConvDirLToL) THEN
		p_bRcvCompl	:= EDGENEG(p_bLinkDIRightSen);
	ELSE
		p_bRcvCompl	:= EDGENEG(p_bLinkDILeftSen);
	END_IF
	
	//Ready Receive
	p_bRdyRcv ACCESS p_OpsInvertStepUSCommTmr;  
	
	//Ready Transport
	p_bRdyTransport	:= TRUE;
	
	//Accept New Recipe Condition
	p_bAccNewRcpCond	:= p_bLinkOpsRun = TRUE;
	

		
	//Routing
	p_bProcessRouteEn := p_bManualRmvRoute OR p_bReturnRoute OR p_bNomRouteEn;
		
	
	//Temporary Enable Reverse Receive
	p_bReverseReceiveRoute := TRUE;
	p_bReturnRoute := TRUE;
END_ACTION
