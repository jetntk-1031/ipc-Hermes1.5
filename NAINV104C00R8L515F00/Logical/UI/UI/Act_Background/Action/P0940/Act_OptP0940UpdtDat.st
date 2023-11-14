
ACTION Act_OptP0940UpdtDat:

	//Hermes Comm
	//Upstream
	g_tyP0940CommCtrl.tyHermesUS.tyBitmapHermes.uiMaskRtStat.0		:= tyUSHermesBackgndData.bConnectionOK;
	g_tyP0940CommCtrl.tyHermesUS.tyBtnExecute.uiMaskRtStat.0		:= tyUSHermesBackgndData.bConnectionOK;
	
	IF tyUSHermesBackgndData.bConnectionOK = FALSE THEN
		g_tyP0940CommCtrl.tyHermesUS.tyTxtStat.usiValueIdx	:= 0;
	ELSIF tyUSHermesBackgndData.bConnectionOK = TRUE THEN
		g_tyP0940CommCtrl.tyHermesUS.tyTxtStat.usiValueIdx	:= 1;
	END_IF	
	
	//LED ON
	g_tyP0940CommCtrl.tyHermesUS.tyBtnChkAlive.bValue				:= tyUSHermesBackgndData.tyHermesAllDataFromUS.tyCheckAlive.bChkAlive; 
	g_tyP0940CommCtrl.tyHermesUS.tyBtnServiceDescription.bValue		:= tyUSHermesBackgndData.tyHermesAllDataFromUS.tyServiceDescription.bServiceDescription;
	g_tyP0940CommCtrl.tyHermesUS.tyBtnBrdAvl.bValue					:= tyUSHermesBackgndData.tyHermesAllDataFromUS.tyBoardAvailable.bBrdAvl;
	g_tyP0940CommCtrl.tyHermesUS.tyBtnRevokeBrdAvl.bValue			:= tyUSHermesBackgndData.tyHermesAllDataFromUS.tyRevokeBoardAvailable.bRevokeBrdAvl;
	g_tyP0940CommCtrl.tyHermesUS.tyBtnTransportFinished.bValue		:= tyUSHermesBackgndData.tyHermesAllDataFromUS.tyTransportFinished.bTransportFinished;
	
	//Downstream
	g_tyP0940CommCtrl.tyHermesDS.tyBitmapHermes.uiMaskRtStat.0		:= tyDSHermesBackgndData.bConnectionOK;
	g_tyP0940CommCtrl.tyHermesDS.tyBtnExecute.uiMaskRtStat.0		:= tyDSHermesBackgndData.bConnectionOK;
	
	IF tyDSHermesBackgndData.bConnectionOK = FALSE THEN
		g_tyP0940CommCtrl.tyHermesDS.tyTxtStat.usiValueIdx	:= 0;
	ELSIF tyDSHermesBackgndData.bConnectionOK = TRUE THEN
		g_tyP0940CommCtrl.tyHermesDS.tyTxtStat.usiValueIdx	:= 1;
	END_IF
	
	//LED ON
	g_tyP0940CommCtrl.tyHermesDS.tyBtnChkAlive.bValue				:= tyDSHermesBackgndData.tyHermesAllDataFromDS.tyCheckAlive.bChkAlive; 
	g_tyP0940CommCtrl.tyHermesDS.tyBtnServiceDescription.bValue		:= tyDSHermesBackgndData.tyHermesAllDataFromDS.tyServiceDescription.bServiceDescription;
	g_tyP0940CommCtrl.tyHermesDS.tyBtnMcRdy.bValue					:= tyDSHermesBackgndData.tyHermesAllDataFromDS.tyMachineReady.bMcRdy;
	g_tyP0940CommCtrl.tyHermesDS.tyBtnRevokeMcRdy.bValue			:= tyDSHermesBackgndData.tyHermesAllDataFromDS.tyRevokeMachineReady.bRevokeMcRdy;
	g_tyP0940CommCtrl.tyHermesDS.tyBtnStartTransport.bValue			:= tyDSHermesBackgndData.tyHermesAllDataFromDS.tyStartTransport.bStartTransport;
	g_tyP0940CommCtrl.tyHermesDS.tyBtnStopTransport.bValue			:= tyDSHermesBackgndData.tyHermesAllDataFromDS.tyStopTransport.bStopTransport;
	
END_ACTION
