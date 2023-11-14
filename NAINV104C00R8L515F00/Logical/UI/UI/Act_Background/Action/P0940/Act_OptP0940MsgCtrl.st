
ACTION Act_OptP0940MsgCtrl:
	
	//Upstream 
	IF g_tyP0940CommCtrl.tyHermesUS.tyBtnExecute.bRtCompl = TRUE THEN
		g_tyP0940CommCtrl.tyHermesUS.tyBtnExecute.bRtCompl	:= FALSE;
		g_tyP0940CommCtrl.tyHermesUS.tyBtnExecute.bValue	:= FALSE;
		
		IF g_tyP0940CommCtrl.tyHermesUS.tyDrpDnMsgList.usiValueIdx = 0 THEN
			tyUSHermesBackgndData.tyHermesAllDataToUS.tyCheckAlive.bChkAlive					:= TRUE;
		ELSIF g_tyP0940CommCtrl.tyHermesUS.tyDrpDnMsgList.usiValueIdx = 1 THEN
			tyUSHermesBackgndData.tyHermesAllDataToUS.tyServiceDescription.bServiceDescription	:= TRUE;	
		ELSIF g_tyP0940CommCtrl.tyHermesUS.tyDrpDnMsgList.usiValueIdx = 2 THEN
			tyUSHermesBackgndData.tyHermesAllDataToUS.tyMachineReady.bMcRdy						:= TRUE;
		ELSIF g_tyP0940CommCtrl.tyHermesUS.tyDrpDnMsgList.usiValueIdx = 3 THEN	
			tyUSHermesBackgndData.tyHermesAllDataToUS.tyRevokeMachineReady.bRevokeMcRdy			:= TRUE;
		ELSIF g_tyP0940CommCtrl.tyHermesUS.tyDrpDnMsgList.usiValueIdx = 4 THEN	
			tyUSHermesBackgndData.tyHermesAllDataToUS.tyStartTransport.bStartTransport			:= TRUE;	
		ELSIF g_tyP0940CommCtrl.tyHermesUS.tyDrpDnMsgList.usiValueIdx = 5 THEN	
			tyUSHermesBackgndData.tyHermesAllDataToUS.tyStopTransport.bStopTransport			:= TRUE;	
		ELSIF g_tyP0940CommCtrl.tyHermesUS.tyDrpDnMsgList.usiValueIdx = 6 THEN	
			fbUSHermesBackgnd1.eAct	:= HermesBackgroundActIdle;
		END_IF	
	END_IF
	
	//Downstream
	IF g_tyP0940CommCtrl.tyHermesDS.tyBtnExecute.bRtCompl = TRUE THEN
		g_tyP0940CommCtrl.tyHermesDS.tyBtnExecute.bRtCompl	:= FALSE;
		g_tyP0940CommCtrl.tyHermesDS.tyBtnExecute.bValue	:= FALSE;
		
		IF g_tyP0940CommCtrl.tyHermesDS.tyDrpDnMsgList.usiValueIdx = 0 THEN
			tyDSHermesBackgndData.tyHermesAllDataToDS.tyCheckAlive.bChkAlive					:= TRUE;
		ELSIF g_tyP0940CommCtrl.tyHermesDS.tyDrpDnMsgList.usiValueIdx = 1 THEN
			tyDSHermesBackgndData.tyHermesAllDataToDS.tyServiceDescription.bServiceDescription	:= TRUE;	
		ELSIF g_tyP0940CommCtrl.tyHermesDS.tyDrpDnMsgList.usiValueIdx = 2 THEN
			tyDSHermesBackgndData.tyHermesAllDataToDS.tyBoardAvailable.bBrdAvl					:= TRUE;
		ELSIF g_tyP0940CommCtrl.tyHermesDS.tyDrpDnMsgList.usiValueIdx = 3 THEN	
			tyDSHermesBackgndData.tyHermesAllDataToDS.tyRevokeBoardAvailable.bRevokeBrdAvl		:= TRUE;
		ELSIF g_tyP0940CommCtrl.tyHermesDS.tyDrpDnMsgList.usiValueIdx = 4 THEN	
			tyDSHermesBackgndData.tyHermesAllDataToDS.tyTransportFinished.bTransportFinished	:= TRUE;
		ELSIF g_tyP0940CommCtrl.tyHermesDS.tyDrpDnMsgList.usiValueIdx = 5 THEN
			fbDSHermesBackgnd1.eAct	:= HermesBackgroundActIdle;
		END_IF	
	END_IF
	
END_ACTION
