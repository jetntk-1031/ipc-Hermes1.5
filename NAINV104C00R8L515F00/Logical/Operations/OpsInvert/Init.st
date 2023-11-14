(** 2020-10-09 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	
	//Alarm
	p_OpsInvertAlmData	:= ADR(tyAlmData);
	p_OpsInvertAlmData1	:= ADR(tyAlmData1);
	
	//Output
	p_OpsInvertStepTxt		:= ADR(sStepTxt);
	p_OpsInvertPaused		:= ADR(bPaused);
	p_OpsInvertGdBrd 		:= ADR(bGdBrd);
	p_OpsInvertHvBrd		:= ADR(bHvBrd);
	
	p_OpsInvertUSSMEMAAct	:= ADR(eUSSMEMAAct);
	p_OpsInvertDSSMEMAAct	:= ADR(eDSSMEMAAct);
	p_OpsInvertConvAct		:= ADR(eConvAct);
	p_OpsInvertStopperAct	:= ADR(eStopperAct);
	p_OpsInvertInvertAct	:= ADR(eInvertAct);
	p_OpsInvertAWAct		:= ADR(eAWAct);
	p_OpsInvertClampAct		:= ADR(eClampAct);
	p_OpsInvertInletShutterAct	:= ADR(eInletShutterAct);
	p_OpsInvertOutletShutterAct	:= ADR(eOutletShutterAct);
	p_OpsInvertClamp1Act		:= ADR(eClamp1Act);
	p_OpsInvertClamp2Act		:= ADR(eClamp2Act);
	p_OpsInvertClamp3Act		:= ADR(eClamp3Act);
	
	p_OpsInvertStepInitConv			:= ADR(bStepInitConv);
	p_OpsInvertStepInitAwayStpr		:= ADR(bStepInitAwayStopper);
	p_OpsInvertStepInitTwdStpr		:= ADR(bStepInitTwdStopper);
	p_OpsInvertStepInitDone			:= ADR(bStepInitDone);
	p_OpsInvertStepUSStandby		:= ADR(bStepUSStandby);
	p_OpsInvertStepUSCommTmr		:= ADR(bStepUSCommTmr);
	p_OpsInvertStepEntToEnd			:= ADR(bStepEntToEnd);
	p_OpsInvertStepEntToInOff		:= ADR(bStepEntToInOff);
	p_OpsInvertStepRev				:= ADR(bStepRev);
	p_OpsInvertStepPreExit			:= ADR(bStepPreExit);
	p_OpsInvertStepDSStandby		:= ADR(bStepDSStandby);
	p_OpsInvertStepDSCommTmr		:= ADR(bStepDSCommTmr);
	p_OpsInvertStepExitBrd			:= ADR(bStepExitBrd);
	p_OpsInvertStepInvert			:= ADR(bStepInvert);
	p_OpsInvertStepAWMove			:= ADR(bStepAWMov);
	p_OpsInvertStepOpsSafeMode		:= ADR(bStepSafeMode);
	
	p_OpsInvertBrdInserted			:= ADR(bBrdInserted);
	p_OpsInvertBrdRemoved			:= ADR(bBrdRemoved);

	p_OpsInvertInvertCurrPos		:= ADR(eInvertCurrPos);	
	
	p_OpsInvertUSSMEMA2Act				:= ADR(eUSSMEMA2Act);
	p_OpsInvertOnceTwicePCBOut			:= ADR(bInvOnceTwicePCBOut);
	p_OpsInvertStepInvRtrnUSStandby		:= ADR(bStepInvRtrnUSStandby);
	p_OpsInvertStepInvRtrnUSCommTmr		:= ADR(bStepInvRtrnUSCommTmr);
	p_OpsInvertStepInvRtrnEntToEnd		:= ADR(bStepInvRtrnEntToEnd);
	p_OpsInvertStepInvRtrnEntToInOff	:= ADR(bStepInvRtrnEntToInOff);

	
	(* Always Change If Project Change *)
	
END_PROGRAM