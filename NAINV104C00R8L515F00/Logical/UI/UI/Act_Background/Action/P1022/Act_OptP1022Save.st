
ACTION Act_OptP1022Save:
	
	IF tyP1022McSetVComm.tyVComSel.tyBtnLF.bRtCompl 			OR tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bRtCompl
		OR tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bRtCompl	OR tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bRtCompl
		OR tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bRtCompl	OR tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bRtCompl
		OR tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bRtCompl	OR tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bRtCompl 
		OR tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bRtCompl 		OR tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bRtCompl  
		OR tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bRtCompl //new for Hermes 1.3
		OR tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bRtCompl OR tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bRtCompl //new for Hermes 1.3
		OR tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bRtCompl OR tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bRtCompl //new for Hermes 1.3
		OR tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.bRtCompl         OR tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.bRtCompl //new for Hermes 1.3
		OR tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bRtCompl	THEN
		
		fUIInRtStatHide(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
		
		IF (NOT p_tyNtParamCurr.bLFUsrSetPrep AND NOT p_tyNtParamCurr.bLeaderMc) OR (p_tyNtParamCurr.bLFUsrSetPrep AND NOT tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue) THEN
			IF tyP1022McSetVComm.tyVComSel.tyBtnLF.bRtCompl AND tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue THEN
				tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue	:= FALSE;
				
			ELSIF tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bRtCompl AND tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue THEN
				tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue		:= FALSE;
				
			END_IF
			
			IF tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue = TRUE AND tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue = TRUE THEN
				tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue		:= FALSE;
				tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue	:= FALSE;
			END_IF
		END_IF
		
		tyP1022McSetVComm.tyVComSel.tyBtnLF.bRtCompl					:= FALSE;
		tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bRtCompl					:= FALSE;
		tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bRtCompl				:= FALSE;
		tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bRtCompl			:= FALSE;
		tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bRtCompl			:= FALSE;
		
		tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bRtCompl					:= FALSE;
		tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bRtCompl					:= FALSE;
		tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bRtCompl				:= FALSE;
		tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bRtCompl				:= FALSE;
		tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bRtCompl				:= FALSE;
		tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bRtCompl		:= FALSE;
		
		//new for Hermes 1.3
		tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bRtCompl			:= FALSE;
		tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bRtCompl	:= FALSE;
		tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bRtCompl			:= FALSE;
		tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bRtCompl	:= FALSE;
		tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bRtCompl		:= FALSE;
		tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.bRtCompl			:= FALSE;
		tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.bRtCompl			:= FALSE;
		
	END_IF
	
	IF tyCommon.tySet.tyBtnSave.bRtCompl = TRUE THEN
		
		tyMcParamWr.bLFEn			:=  tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue;
		tyMcParamWr.bLCSLFEn		:=  tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue;
		tyMcParamWr.bLCSReqRcpEn	:=  tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bValue;
		tyMcParamWr.bLCSManageRcpEn	:=  tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bValue;
		tyMcParamWr.bLCSLiveDatEn	:=  tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bValue;
		
		tyMcParamWr.bLFLeaderMc		:=	tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue;
		tyMcParamWr.bSectionLeader	:=	tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bValue;
		tyMcParamWr.bUSWidthChkEn	:= 	tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bValue;
		tyMcParamWr.bDSWidthChkEn	:= 	tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bValue;
		tyMcParamWr.bLFSeqStayActive	:= 	tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bValue;
		tyMcParamWr.bDBAOnWOAlign		:=  tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bValue;
		
		//new for Hermes 1.3
		tyHermesSvyParamWr.bFeatureConfiguration	    	:=	tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bValue;
		tyHermesSvyParamWr.bFeatureCheckAliveResponse		:=	tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bValue;
		tyHermesSvyParamWr.bFeatureBoardTracking	    	:=	tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bValue;
		tyHermesSvyParamWr.bFeatureQueryWorkOrderInfo		:=	tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bValue;
		tyHermesSvyParamWr.bFeatureSendWorkOrderInfo		:=	tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bValue;
		tyHermesSvyParamWr.bFeatureReplyWorkOrderInfo		:=	tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bValue;
		tyHermesSvyParamWr.tSndAlive		                :=	DINT_TO_TIME(tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.diValue);
		tyHermesSvyParamWr.uiSvySvstemPort		            :=	DINT_TO_UINT(tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.diValue);
		bSaveHMISvyConfig := TRUE;
		
		eMcParamAct	:= McParamActWrite;
		eHermesAct	:= HermesActWriteConfig; //new for Hermes 1.3
		
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done AND p_eHermesStat = HermesActWriteConfig AND p_eHermesStatus = Done THEN  //new for Hermes 1.3
			eMcParamAct	:= McParamActIdle;
			eHermesAct	:= HermesActIdle;  //new for Hermes 1.3
			
			//Update BackUp Param
			tyP1022McSetVComm.tyVComSelBkUp	:= tyP1022McSetVComm.tyVComSel;
			tyP1022McSetVComm.tyLFBkUp		:= tyP1022McSetVComm.tyLF;
			tyP1022McSetVComm.tyVComSvyBkUp	:= tyP1022McSetVComm.tyVComSvy;  //new for Hermes 1.3
			
			tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			bSaveHMISvyConfig := FALSE;  //new for Hermes 1.3
			
		ELSIF p_eMcParamStatus = Error OR p_eHermesStatus = Error THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1022McSetVComm.tyMsgBoxSaveErr);
			
			IF tyP1022McSetVComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1022McSetVComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl 	:= FALSE;
				tyP1022McSetVComm.tyMsgBoxSaveErr.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1022McSetVComm.tyMsgBoxHide);
				
				//Restore Param
				tyP1022McSetVComm.tyVComSel	:= tyP1022McSetVComm.tyVComSelBkUp;
				tyP1022McSetVComm.tyVComSvy	:= tyP1022McSetVComm.tyVComSvyBkUp;  //new for Hermes 1.3
				tyP1022McSetVComm.tyLF		:= tyP1022McSetVComm.tyLFBkUp;
				tyMcParamWr					:= p_tyMcParamCurr;
				bSaveHMISvyConfig := FALSE;  //new for Hermes 1.3
				
				tyCommon.tySet.tyBtnSave.bRtCompl 	:= FALSE;
				fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
				
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
