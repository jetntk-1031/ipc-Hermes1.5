
ACTION Act_Main_P1022:
	
	//Machine Setting - Vertical Communicationm Control
	//Display
	tyP1022McSetVComm.tyVComSel.tyBtnLF.uiRtStat.0				:= NOT p_tyNtParamCurr.bLFPrep;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.uiRtStat.0			:= NOT p_tyNtParamCurr.bLCSLFPrep;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.uiRtStat.0		:= NOT p_tyNtParamCurr.bLCSReqRcpPrep;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.uiRtStat.0	:= NOT p_tyNtParamCurr.bLCSManageRcpPrep;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.uiRtStat.0		:= NOT p_tyNtParamCurr.bLCSLiveDatPrep;
	
	tyP1022McSetVComm.tyLF.tyBtnLeaderMc.uiRtStat.0				:= NOT p_tyNtParamCurr.bLFUsrSetPrep;
//	tyP1022McSetVComm.tyLF.tyBtnSectionLdr.uiRtStat.0			:= NOT p_tyNtParamCurr.bLFPrep OR NOT p_tyNtParamCurr.bLCSLFPrep;
	tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.uiRtStat.0			:= NOT p_tyNtParamCurr.bUSWidthChkPrep;
	tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.uiRtStat.0			:= NOT p_tyNtParamCurr.bDSWidthChkPrep;
	tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.uiRtStat.0		:= TRUE ;
	tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.uiRtStat.0			:= NOT p_tyNtParamCurr.bDSWidthChkPrep;
	
	//Parameter
	tyP1022McSetVComm.tyVComSel.tyBtnLF.bValue					:= p_tyMcParamCurr.bLFEn;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSLF.bValue				:= p_tyMcParamCurr.bLCSLFEn;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSReqRcp.bValue			:= p_tyMcParamCurr.bLCSReqRcpEn;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSManageRcp.bValue		:= p_tyMcParamCurr.bLCSManageRcpEn;
	tyP1022McSetVComm.tyVComSel.tyBtnLCSLiveDat.bValue			:= p_tyMcParamCurr.bLCSLiveDatEn;
	
	tyP1022McSetVComm.tyLF.tyBtnLeaderMc.bValue					:= p_tyMcParamCurr.bLFLeaderMc;
	tyP1022McSetVComm.tyLF.tyBtnSectionLdr.bValue				:= p_tyMcParamCurr.bSectionLeader;
	tyP1022McSetVComm.tyLF.tyBtnUSWidthChkEn.bValue				:= p_tyMcParamCurr.bUSWidthChkEn;
	tyP1022McSetVComm.tyLF.tyBtnDSWidthChkEn.bValue				:= p_tyMcParamCurr.bDSWidthChkEn;
	tyP1022McSetVComm.tyLF.tyBtnSeqStayActive.bValue			:= p_tyMcParamCurr.bLFSeqStayActive;
	tyP1022McSetVComm.tyLF.tyBtnDBAOnWOAlign.bValue				:= p_tyMcParamCurr.bDBAOnWOAlign;
	
	//new for Hermes 1.3
	tyP1022McSetVComm.tyVComSvy.tyNumSndAliveTm.diValue	    	    := TIME_TO_DINT(p_tyHermesConfiguration.tySvyParam.tSndAlive);
	tyP1022McSetVComm.tyVComSvy.tyNumSvySystemPort.diValue	    	:= UINT_TO_DINT(p_tyHermesConfiguration.tySvyParam.uiSvySvstemPort);
	tyP1022McSetVComm.tyVComSvy.tyBtnConfiguration.bValue		    := p_tyHermesConfiguration.tySvyParam.bFeatureConfiguration;
	tyP1022McSetVComm.tyVComSvy.tyBtnCheckAliveResponse.bValue		:= p_tyHermesConfiguration.tySvyParam.bFeatureCheckAliveResponse;
	tyP1022McSetVComm.tyVComSvy.tyBtnBoardTracking.bValue		    := p_tyHermesConfiguration.tySvyParam.bFeatureBoardTracking;
	tyP1022McSetVComm.tyVComSvy.tyBtnQueryWorkOrderInfo.bValue		:= p_tyHermesConfiguration.tySvyParam.bFeatureQueryWorkOrderInfo;
	tyP1022McSetVComm.tyVComSvy.tyBtnSendWorkOrderInfo.bValue		:= p_tyHermesConfiguration.tySvyParam.bFeatureSendWorkOrderInfo;
	tyP1022McSetVComm.tyVComSvy.tyBtnReplyWorkOrderInfo.bValue		:= p_tyHermesConfiguration.tySvyParam.bFeatureReplyWorkOrderInfo;
	
	
	//Hermes 1.3 Board Reinsert Function
	tyP1022McSetVComm.tyVComSvy.tyBtnInsertBrd.bValue		:= p_tyHermesConfiguration.tySvyParam.bFeatureInsertBrd;
END_ACTION
