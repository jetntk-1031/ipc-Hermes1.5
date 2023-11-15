
ACTION Act_OptP1021Save:
	
	IF tyP1021McSetGen.tyGen.tyStringMcNm.bRtCompl 					OR tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.bRtCompl
		OR tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.bRtCompl 	OR tyP1021McSetGen.tyGen.tyNumSSaverTm.bRtCompl
		OR tyP1021McSetGen.tyGen.tyBtnSSaverEn.bRtCompl				OR tyP1021McSetGen.tyGen.tyNumWidthAtHm.bRtCompl
		OR tyP1021McSetGen.tyGen.tyNumConvInitTm.bRtCompl			OR tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.bRtCompl
		OR tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.bRtCompl
		
		OR tyP1021McSetGen.tyGen.tyBtnAWDis.bRtCompl 				OR tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bRtCompl		
		OR tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bRtCompl			OR tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bRtCompl
		OR tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bRtCompl			OR tyP1021McSetGen.tyGen.tyBtnChgParamEn.bRtCompl
		OR tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.bRtCompl 		OR tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.bRtCompl 
		OR tyP1021McSetGen.tyGen.tyBtnStopperDis.bRtCompl 		 	OR tyP1021McSetGen.tyGen.tyNumWidthOffset.bRtCompl
		OR tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bRtCompl 		OR tyP1021McSetGen.tyGen.tyBtnClampDis.bRtCompl
		OR tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bRtCompl			OR tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.bRtCompl
		OR tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.bRtCompl		 //new for Hermes 1.3
		THEN 
		
		fUIInRtStatHide(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
		
		tyP1021McSetGen.tyGen.tyStringMcNm.bRtCompl 			:= FALSE;		
		tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.bRtCompl		:= FALSE;
		tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.bRtCompl	:= FALSE;
		tyP1021McSetGen.tyGen.tyNumSSaverTm.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnSSaverEn.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyNumWidthAtHm.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyNumWidthOffset.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyNumConvInitTm.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.bRtCompl		:= FALSE;
		tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.bRtCompl		:= FALSE;
		
		tyP1021McSetGen.tyGen.tyBtnAWDis.bRtCompl 				:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnChgParamEn.bRtCompl			:= FALSE;
		
		tyP1021McSetGen.tyGen.tyBtnStopperDis.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.bRtCompl		:= FALSE;
		tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.bRtCompl		:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bRtCompl		:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnClampDis.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bRtCompl			:= FALSE;
		tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.bRtCompl		:= FALSE;
		tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.bRtCompl		:= FALSE; 	//new for Hermes 1.3
	END_IF
		
	IF tyCommon.tySet.tyBtnSave.bRtCompl = TRUE AND bSaveNetworkPriority=FALSE THEN
		//Save Param
		tyMcParamWr.sMcNm					:= tyP1021McSetGen.tyGen.tyStringMcNm.sValue;
		tyMcParamWr.usiDefaultMcMod			:= tyP1021McSetGen.tyGen.tyDrpDnDefaultMcMod.usiValueIdx;
		tyMcParamWr.usiDefaultFlippedBrd	:= tyP1021McSetGen.tyGen.tyDrpDnDefaultFlippedBrd.usiValueIdx;
		tyMcParamWr.uiSSaverTmInSec			:= DINT_TO_UINT(tyP1021McSetGen.tyGen.tyNumSSaverTm.diValue);
		tyMcParamWr.bSSaverEn				:= tyP1021McSetGen.tyGen.tyBtnSSaverEn.bValue;
		tyMcParamWr.diAutoLogoutTmInSec		:= tyP1021McSetGen.tyGen.tyNumAutoLogoutTm.diValue;
		tyMcParamWr.bAutoLogoutEn			:= tyP1021McSetGen.tyGen.tyBtnAutoLogoutEn.bValue;
		tyMcParamWr.diWidthAtHmPosInUM		:= tyP1021McSetGen.tyGen.tyNumWidthAtHm.diValue;
		tyMcParamWr.diConvInitTmInMS		:= tyP1021McSetGen.tyGen.tyNumConvInitTm.diValue;
		tyMcParamWr.diTranInErrDlyTmInMS	:= tyP1021McSetGen.tyGen.tyNumTranInErrDlyTm.diValue;
		tyMcParamWr.diTranOutErrDlyTmInMS	:= tyP1021McSetGen.tyGen.tyNumTranOutErrDlyTm.diValue;

		tyMcParamWr.bAWDis					:= tyP1021McSetGen.tyGen.tyBtnAWDis.bValue;
		tyMcParamWr.bVSMEMAEn				:= tyP1021McSetGen.tyGen.tyBtnVSMEMAEn.bValue;
		tyMcParamWr.bHermesRmtEn			:= tyP1021McSetGen.tyGen.tyBtnHermesRmtEn.bValue;
		tyMcParamWr.bHermesSvyEn			:= tyP1021McSetGen.tyGen.tyBtnHermesSvyEn.bValue;//new for Hermes 1.3
		tyMcParamWr.bMnlAccDat				:= tyP1021McSetGen.tyGen.tyBtnMnlAccDat.bValue;
		tyMcParamWr.bAutoStepEn				:= tyP1021McSetGen.tyGen.tyBtnAutoStepEn.bValue;
		tyMcParamWr.bChgParamEn				:= tyP1021McSetGen.tyGen.tyBtnChgParamEn.bValue;
		
		tyMcParamWr.bStopperDis				:= tyP1021McSetGen.tyGen.tyBtnStopperDis.bValue;
		tyMcParamWr.diStopperAtLftPos		:= tyP1021McSetGen.tyGen.tyNumStopperAtLftPos.diValue;
		tyMcParamWr.diStopperAtRgtPos		:= tyP1021McSetGen.tyGen.tyNumStopperAtRgtPos.diValue;
		tyMcParamWr.diWidthOffsetInUM		:= tyP1021McSetGen.tyGen.tyNumWidthOffset.diValue;
		
		tyMcParamWr.bClampDis				:= tyP1021McSetGen.tyGen.tyBtnClampDis.bValue;
		
		tyMcParamWr.eNetworkMod				:= USINT_TO_DINT(tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx);
		
		tyMcParamWr.bLFBuzMute				:= tyP1021McSetGen.tyGen.tyBtnLFBuzMute.bValue;
		
		IF tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx =DINT_TO_USINT(SetIPManually) THEN
			tyMcParamWr.sIPAddr				:= tyP1021McSetGen.tyGen.tyStringIPAddr.sValue;
			tyMcParamWr.sSubnetMask			:= tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue;
		END_IF
		
		eMcParamAct	:= McParamActWrite;
		
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			eMcParamAct	:= McParamActIdle;
			
			usiNetworkModeOld := tyP1021McSetGen.tyGen.tyDrpDnNetworkMod.usiValueIdx;
			//Update Screen Saver Time
			tyProperty.tyVisu.uiSSaverTm	:= p_tyMcParamCurr.uiSSaverTmInSec;
			
			//Backup Param
			tyP1021McSetGen.tyGenBkUp	:= tyP1021McSetGen.tyGen;
			
			tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
			
			fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
			
		ELSIF p_eMcParamStatus = Error THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxSaveErr);
			
			IF tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
				tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
				
				//Restore Param
				tyP1021McSetGen.tyGen	:= tyP1021McSetGen.tyGenBkUp;
				tyMcParamWr				:= p_tyMcParamCurr;
				
				tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
				
				fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
				
			END_IF
			
		END_IF
		
	ELSIF bUpdateP1021Network THEN
		tyMcParamWr.sIPAddr					:= tyP1021McSetGen.tyGen.tyStringIPAddr.sValue;
		tyMcParamWr.sSubnetMask				:= tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue;
				
		eMcParamAct	:= McParamActWrite;
		
		IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
			eMcParamAct		:= McParamActIdle;
			
			IF bUpdateP1021Network THEN
				bUpdateP1021Network :=FALSE;
			END_IF
			
			//Update Restore Param
			tyP1021McSetGen.tyGenBkUp.tyStringIPAddr.sValue	 	:= tyP1021McSetGen.tyGen.tyStringIPAddr.sValue;
			tyP1021McSetGen.tyGenBkUp.tyStringSubnetMask.sValue	:= tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue;

		ELSIF p_eMcParamStatus = Error THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxSaveErr);
			
			IF tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
				tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bRtCompl 			:= FALSE;
				tyP1021McSetGen.tyMsgBoxSaveErr.tyBtnNo.bValue				:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
				
				// Restore Param
				tyP1021McSetGen.tyGenBkUp.tyStringIPAddr.sValue	 	:= tyP1021McSetGen.tyGen.tyStringIPAddr.sValue;
				tyP1021McSetGen.tyGenBkUp.tyStringSubnetMask.sValue	:= tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue;
				
				tyMcParamWr				:= p_tyMcParamCurr;
				
				bUpdateP1021Network :=FALSE;

			END_IF
		END_IF
	
	END_IF
	
END_ACTION
