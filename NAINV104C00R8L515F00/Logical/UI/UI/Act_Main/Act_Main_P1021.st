(** 2018-12-21 **)
ACTION Act_Main_P1021:
	
	//Machine Setting_General
	tyP1021McSetGen.tyGen.tyNumConvInitTm.diValueMin	:= p_tyNtParamCurr.tyUIConvInitTm.diMin;
	tyP1021McSetGen.tyGen.tyNumConvInitTm.diValueMax	:= p_tyNtParamCurr.tyUIConvInitTm.diMax;
	
	tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValueMin	:= p_tyNtParamCurr.tyUITranInErrDlyTm.diMin;
	tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValueMax	:= p_tyNtParamCurr.tyUITranInErrDlyTm.diMax;
	
	tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValueMin	:= p_tyNtParamCurr.tyUITranOutErrDlyTm.diMin;
	tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValueMax	:= p_tyNtParamCurr.tyUITranOutErrDlyTm.diMax;
	
	tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueMinIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMin);
	tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueMaxIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpMcModLmt.diMax);
	
	//Network Mode
	tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueMinIdx		:= DINT_TO_USINT(p_tyNtParamCurr.tyNetworkMode.diMin);
	tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueMaxIdx		:= DINT_TO_USINT(p_tyNtParamCurr.tyNetworkMode.diMax);
	
	tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueMinIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMin);
	tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueMaxIdx	:= DINT_TO_USINT(p_tyNtParamCurr.tyProdRcpFlippedBrdLmt.diMax);
	
	tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValueMin	:= p_tyNtParamCurr.tyUIInvertTargetPos.diMin;
	tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValueMax	:= p_tyNtParamCurr.tyUIInvertTargetPos.diMax;
	tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValueMin	:= p_tyNtParamCurr.tyUIInvertTargetPos.diMin;
	tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValueMax	:= p_tyNtParamCurr.tyUIInvertTargetPos.diMax;
	
	//Screen Saver
	tyP1021McSetGen.tyGen.tyNumSSaverTm.diValueMin			:= p_tyNtParamCurr.tyUISSaverTm.diMin;
	tyP1021McSetGen.tyGen.tyNumSSaverTm.diValueMax			:= p_tyNtParamCurr.tyUISSaverTm.diMax;
	tyP1021McSetGen.tyGen.tyNumSSaverTm.uiRtStat.0			:= NOT p_tyNtParamCurr.bSSaverPrep;
	tyP1021McSetGen.tyGen.tyTxtSSaverTm.uiRtStat.0			:= NOT p_tyNtParamCurr.bSSaverPrep;
	tyP1021McSetGen.tyGen.tyBtnSSaverEn.uiRtStat.0			:= NOT p_tyNtParamCurr.bSSaverPrep;
	
	//Logout
	tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValueMin			:= p_tyNtParamCurr.tyUIAutoLogoutTm.diMin;
	tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValueMax			:= p_tyNtParamCurr.tyUIAutoLogoutTm.diMax;
	tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.uiRtStat.0			:= NOT p_tyNtParamCurr.bAutoLogoutPrep;
	tyP1021McSetGen.tyGen.tyTxtLblAutoLogoutTm.uiRtStat.0		:= NOT p_tyNtParamCurr.bAutoLogoutPrep;
	tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.uiRtStat.0			:= NOT p_tyNtParamCurr.bAutoLogoutPrep;
	
	//Width
	tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValueMin			:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMin;
	tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValueMax			:= p_tyNtParamCurr.tyProdRcpWidthLmt.diMax + 10000;
	tyP1021McSetGen.tyGen.tyNumWidthAtHm.uiRtStat.0			:= NOT p_tyNtParamCurr.bAWPrep;
	tyP1021McSetGen.tyGen.tyTxtWidthAtHm.uiRtStat.0			:= NOT p_tyNtParamCurr.bAWPrep;
	tyP1021McSetGen.tyGen.tyBtnAWDis.uiRtStat.0				:= NOT p_tyNtParamCurr.bAWPrep;
	
	//Width Offset
	//tyP1021McSetGen.tyGen.tyNumWidthOffset.uiRtStat.0		:= NOT p_tyNtParamCurr.bAWPrep;
	//tyP1021McSetGen.tyGen.tyTxtWidthOffset.uiRtStat.0		:= NOT p_tyNtParamCurr.bAWPrep;
	tyP1021McSetGen.tyGen.tyNumWidthOffset.uiRtStat.0		:= TRUE;
	tyP1021McSetGen.tyGen.tyTxtWidthOffset.uiRtStat.0		:= TRUE;
	tyP1021McSetGen.tyGen.tyNumWidthOffset.diValueMin		:= p_tyNtParamCurr.tyUIAWOffset.diMin;
	tyP1021McSetGen.tyGen.tyNumWidthOffset.diValueMax		:= p_tyNtParamCurr.tyUIAWOffset.diMax;
	
	//Virtual SMEMA
	tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.uiRtStat.0	:= NOT p_tyNtParamCurr.bVSMEMAPrep;
	
	//Hermes Remote Configuration
	tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.uiRtStat.0	:= NOT p_tyNtParamCurr.bHermesRmtPrep;
		
	//Stopper
	//tyP1021McSetGen.tyGen.tyBtnStopperDis.uiRtStat.0	:= NOT p_tyNtParamCurr.bProjStopperPrep;
	tyP1021McSetGen.tyGen.tyBtnStopperDis.uiRtStat.0	:= TRUE;
	
	//Stopper
	tyP1021McSetGen.tyGen.tyBtnClampDis.uiRtStat.0	:= NOT (p_tyNtParamCurr.bProjClampPrep AND (p_tyNtParamCurr.eProjClampOption=ClampNoRS));
	
	//Display Flipped Board
	tyP1021McSetGen.tyGen.tyTxtLblFlippedBrd.uiRtStat.0	:= TRUE;
	tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.uiRtStat.0 :=TRUE;
	
	//Parameter
	tyP1021McSetGen.tyGen.tyStringMcNm.sValue					:= p_tyMcParamCurr.sMcNm;
	tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValue				:= p_tyMcParamCurr.diWidthAtHmPosInUM;
	tyP1021McSetGen.tyGen.tyStringIPAddr.sValue					:= p_sHWInfoIPAddr;
	tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue				:= p_sHWInfoSubnetMask;
	tyP1021McSetGen.tyGen.tyNumSSaverTm.diValue					:= UINT_TO_DINT(p_tyMcParamCurr.uiSSaverTmInSec);
	tyP1021McSetGen.tyGen.tyBtnSSaverEn.bValue					:= p_tyMcParamCurr.bSSaverEn;
	
	tyP1021McSetGen.tyGen.tyNumConvInitTm.diValue				:= p_tyMcParamCurr.diConvInitTmInMS;
	tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValue			:= p_tyMcParamCurr.diTranInErrDlyTmInMS;
	tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValue			:= p_tyMcParamCurr.diTranOutErrDlyTmInMS;
	tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueIdx		:= p_tyMcParamCurr.usiDefaultMcMod;
	tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueIdx	:= p_tyMcParamCurr.usiDefaultFlippedBrd;
	
	tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bValue				:= p_tyMcParamCurr.bAutoStepEn;
	tyP1021McSetGen.tyGen.tyBtnAWDis.bValue						:= p_tyMcParamCurr.bAWDis;
	tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bValue					:= p_tyMcParamCurr.bVSMEMAEn;
	tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bValue					:= p_tyMcParamCurr.bMnlAccDat;
	tyP1021McSetGen.tyGen.tyBtnChgParamEn.bValue				:= p_tyMcParamCurr.bChgParamEn;
	tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bValue				:= p_tyMcParamCurr.bHermesRmtEn;

	tyP1021McSetGen.tyGen.tyBtnStopperDis.bValue				:= p_tyMcParamCurr.bStopperDis;
	tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValue			:= p_tyMcParamCurr.diStopperAtLftPos;
	tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValue			:= p_tyMcParamCurr.diStopperAtRgtPos;
	
	tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValue				:= p_tyMcParamCurr.diAutoLogoutTmInSec;
	tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bValue				:= p_tyMcParamCurr.bAutoLogoutEn;
	
	tyP1021McSetGen.tyGen.tyBtnClampDis.bValue					:= p_tyMcParamCurr.bClampDis;
	
	tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx		:= DINT_TO_USINT(p_tyMcParamCurr.eNetworkMod);
	tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bValue				:= p_tyMcParamCurr.bLFBuzMute;	
	
	tyP1021McSetGen.tyGen.tyBtnAutoStepEn.uiRtStat.0			:= TRUE;
END_ACTION
