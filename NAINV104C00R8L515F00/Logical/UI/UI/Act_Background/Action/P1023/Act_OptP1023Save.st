
ACTION Act_OptP1023Save:
	
	IF tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bRtCompl						OR tyP1023McSetHComm.tyUSSel.tyBtnHermes.bRtCompl
		OR tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.bRtCompl				OR tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.bRtCompl			OR tyP1023McSetHComm.tyUSHermes.tyNumLaneID.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.bRtCompl			OR tyP1023McSetHComm.tyUSHermes.tyNumHostPort.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bRtCompl	OR tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bRtCompl				OR tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bRtCompl		OR tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bRtCompl 
		
		OR tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bRtCompl					OR tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bRtCompl
		OR tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.bRtCompl			OR tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bRtCompl
				
		OR tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bRtCompl					OR tyP1023McSetHComm.tyDSSel.tyBtnHermes.bRtCompl
		OR tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.bRtCompl				OR tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.bRtCompl			OR tyP1023McSetHComm.tyDSHermes.tyNumLaneID.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.bRtCompl				OR tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bRtCompl			OR tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bRtCompl
		
		OR tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.bRtCompl			OR tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.bRtCompl			OR tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bRtCompl	OR tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bRtCompl				OR tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bRtCompl		OR tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bRtCompl
		OR tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bRtCompl  //Hermes2
		
		OR tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bRtCompl					OR tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bRtCompl
		OR tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.bRtCompl			OR tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.bRtCompl			OR tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.bRtCompl				OR tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bRtCompl		OR tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bRtCompl
		OR tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bRtCompl
		
		
		THEN
			
		
		fUIInRtStatHide(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
		
		tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bRtCompl					:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyNumLaneID.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyNumHostPort.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bRtCompl	:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bRtCompl				:= FALSE;
		
		tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bRtCompl				:= FALSE;
		
		tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bRtCompl					:= FALSE;
		tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyDSHermes.tyNumLaneID.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bRtCompl	:= FALSE;
		tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bRtCompl				:= FALSE;
		
		
		tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bRtCompl	:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bRtCompl				:= FALSE;
		
		
		//DS SMEMA 2 and Hermes2
		
		tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.bRtCompl			:= FALSE;
		tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.bRtCompl				:= FALSE;
		tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.bRtCompl				:= FALSE;			
		tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bRtCompl	:= FALSE;
		tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bRtCompl		:= FALSE;
		tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bRtCompl				:= FALSE;
		
		
	END_IF	
	
	IF tyCommon.tySet.tyBtnSave.bRtCompl = TRUE THEN
		IF usiSaveCommStep = 0 THEN
			//Verify IP Address
			IF (tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue = TRUE) AND NOT(p_tyNtParamCurr.bHermesRmtPrep = TRUE AND p_tyMcParamCurr.bHermesRmtEn = TRUE) THEN
				IF fIPValid(tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sValue, ADR(a_iIPPart1)) = TRUE THEN
					usiSaveCommStep	:= 1;
				ELSE
					usiSaveCommStep	:= 99;
				END_IF
			ELSE
				usiSaveCommStep	:= 1;
			END_IF
			
		ELSIF usiSaveCommStep = 1 THEN
			//Save Machine Parameter
			//Upstream
			IF tyP1023McSetHComm.tyUSSel.tyBtnSMEMA.bValue = TRUE THEN
				tyMcParamWr.eUSComm	:= McSetCommModSMEMA;
			ELSIF tyP1023McSetHComm.tyUSSel.tyBtnHermes.bValue = TRUE THEN
				tyMcParamWr.eUSComm	:= McSetCommModHermes;
			END_IF
			
			tyMcParamWr.tyUSCommSMEMA.eSelection	:= USINT_TO_UDINT(tyP1023McSetHComm.tyUSSMEMA.tyDrpDnSMEMAMod.usiValueIdx);
			tyMcParamWr.tyUSCommSMEMA.bStatSigSetGd	:= tyP1023McSetHComm.tyUSSMEMA.tyBtnGdSig.bValue;
			
			//Upstream 2
			IF tyP1023McSetHComm.tyUSSel2.tyBtnSMEMA.bValue = TRUE THEN
				tyMcParamWr.eUSComm2	:= McSetCommModSMEMA;
			ELSIF tyP1023McSetHComm.tyUSSel2.tyBtnHermes.bValue = TRUE THEN
				tyMcParamWr.eUSComm2	:= McSetCommModHermes;
			END_IF
			
			tyMcParamWr.tyUSCommSMEMA2.eSelection		:= USINT_TO_UDINT(tyP1023McSetHComm.tyUSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx);
			tyMcParamWr.tyUSCommSMEMA2.bStatSigSetGd	:= tyP1023McSetHComm.tyUSSMEMA2.tyBtnGdSig.bValue;
			
			//Downstream
			IF tyP1023McSetHComm.tyDSSel.tyBtnSMEMA.bValue = TRUE THEN
				tyMcParamWr.eDSComm	:= McSetCommModSMEMA;
			ELSIF tyP1023McSetHComm.tyDSSel.tyBtnHermes.bValue = TRUE THEN
				tyMcParamWr.eDSComm	:= McSetCommModHermes;
			END_IF
			
			tyMcParamWr.tyDSCommSMEMA.eSelection	:= USINT_TO_UDINT(tyP1023McSetHComm.tyDSSMEMA.tyDrpDnSMEMAMod.usiValueIdx);
			tyMcParamWr.tyDSCommSMEMA.bStatSigSetGd	:= tyP1023McSetHComm.tyDSSMEMA.tyBtnGdSig.bValue;
			
			//Downstream
			IF tyP1023McSetHComm.tyDSSel2.tyBtnSMEMA.bValue = TRUE THEN
				tyMcParamWr.eDSComm2	:= McSetCommModSMEMA;
			ELSIF tyP1023McSetHComm.tyDSSel2.tyBtnHermes.bValue = TRUE THEN
				tyMcParamWr.eDSComm2	:= McSetCommModHermes;
			END_IF
			
			tyMcParamWr.tyDSCommSMEMA2.eSelection	:= USINT_TO_UDINT(tyP1023McSetHComm.tyDSSMEMA2.tyDrpDnSMEMAMod.usiValueIdx);
			tyMcParamWr.tyDSCommSMEMA2.bStatSigSetGd	:= tyP1023McSetHComm.tyDSSMEMA2.tyBtnGdSig.bValue;
			
			eMcParamAct	:= McParamActWrite;
			
			IF p_eMcParamStat = McParamActWrite AND p_eMcParamStatus = Done THEN
				eMcParamAct	:= McParamActIdle;
				
				//Backup Param
				tyP1023McSetHComm.tyUSSelBkUp		:= tyP1023McSetHComm.tyUSSel;
				tyP1023McSetHComm.tyUSSMEMABkUp		:= tyP1023McSetHComm.tyUSSMEMA;
				tyP1023McSetHComm.tyDSSelBkUp		:= tyP1023McSetHComm.tyDSSel;
				tyP1023McSetHComm.tyDSSMEMABkUp		:= tyP1023McSetHComm.tyDSSMEMA;
				tyP1023McSetHComm.tyUSSelBkUp2		:= tyP1023McSetHComm.tyUSSel2;
				tyP1023McSetHComm.tyUSSMEMABkUp2	:= tyP1023McSetHComm.tyUSSMEMA2;
				
				usiSaveCommStep	:= 2;
				
			ELSIF p_eMcParamStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxSaveErr);
				
				IF tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxHide);
					
					//Restore Param
					tyP1023McSetHComm.tyUSSel		:= tyP1023McSetHComm.tyUSSelBkUp;
					tyP1023McSetHComm.tyUSSMEMA		:= tyP1023McSetHComm.tyUSSMEMABkUp;
					tyP1023McSetHComm.tyDSSel		:= tyP1023McSetHComm.tyDSSelBkUp;
					tyP1023McSetHComm.tyDSSMEMA		:= tyP1023McSetHComm.tyDSSMEMABkUp;
					tyP1023McSetHComm.tyUSSel2		:= tyP1023McSetHComm.tyUSSelBkUp2;
					tyP1023McSetHComm.tyUSSMEMA2	:= tyP1023McSetHComm.tyUSSMEMABkUp2;
					
					tyMcParamWr					:= p_tyMcParamCurr;
					
					usiSaveCommStep	:= 2;
					
				END_IF
				
			END_IF
			
		ELSIF usiSaveCommStep = 2 THEN	
			//Save Hermes Configuration
			//Upstream
			a_tyHermesUSParamWr[0].tSndAlive					:= DINT_TO_TIME(tyP1023McSetHComm.tyUSHermes.tyNumSndAliveTm.diValue);
			a_tyHermesUSParamWr[0].iLaneID						:= DINT_TO_INT(tyP1023McSetHComm.tyUSHermes.tyNumLaneID.diValue);
			a_tyHermesUSParamWr[0].uiHostPort					:= DINT_TO_UINT(tyP1023McSetHComm.tyUSHermes.tyNumHostPort.diValue);
			a_tyHermesUSParamWr[0].sHostAddress					:= tyP1023McSetHComm.tyUSHermes.tyStringHostAddr.sValue;
			a_tyHermesUSParamWr[0].bFeatureCheckAliveResponse	:= tyP1023McSetHComm.tyUSHermes.tyBtnCheckAliveResponse.bValue;
			a_tyHermesUSParamWr[0].bFeatureBoardForecast		:= tyP1023McSetHComm.tyUSHermes.tyBtnBoardForecast.bValue;
			a_tyHermesUSParamWr[0].bFeatureQueryBoardInfo		:= tyP1023McSetHComm.tyUSHermes.tyBtnQueryBoardInfo.bValue;
			a_tyHermesUSParamWr[0].bFeatureCommand				:= tyP1023McSetHComm.tyUSHermes.tyBtnCommand.bValue;
			a_tyHermesUSParamWr[0].bCmpTypeId					:= tyP1023McSetHComm.tyUSHermes.tyBtnCmpTypeId.bValue;
			a_tyHermesUSParamWr[0].bCmpParam					:= tyP1023McSetHComm.tyUSHermes.tyBtnCmpParam.bValue;
			a_tyHermesUSParamWr[0].bOverwrite					:= tyP1023McSetHComm.tyUSHermes.tyBtnOverWrite.bValue;

			
			//Upstream 2
			a_tyHermesUSParamWr[1].tSndAlive					:= DINT_TO_TIME(tyP1023McSetHComm.tyUSHermes2.tyNumSndAliveTm.diValue);
			a_tyHermesUSParamWr[1].iLaneID						:= DINT_TO_INT(tyP1023McSetHComm.tyUSHermes2.tyNumLaneID.diValue);
			a_tyHermesUSParamWr[1].uiHostPort					:= DINT_TO_UINT(tyP1023McSetHComm.tyUSHermes2.tyNumHostPort.diValue);
			a_tyHermesUSParamWr[1].sHostAddress					:= tyP1023McSetHComm.tyUSHermes2.tyStringHostAddr.sValue;
			a_tyHermesUSParamWr[1].bFeatureCheckAliveResponse	:= tyP1023McSetHComm.tyUSHermes2.tyBtnCheckAliveResponse.bValue;
			a_tyHermesUSParamWr[1].bFeatureBoardForecast		:= tyP1023McSetHComm.tyUSHermes2.tyBtnBoardForecast.bValue;
			a_tyHermesUSParamWr[1].bFeatureQueryBoardInfo		:= tyP1023McSetHComm.tyUSHermes2.tyBtnQueryBoardInfo.bValue;
			a_tyHermesUSParamWr[1].bFeatureCommand				:= tyP1023McSetHComm.tyUSHermes2.tyBtnCommand.bValue;
			a_tyHermesUSParamWr[1].bCmpTypeId					:= tyP1023McSetHComm.tyUSHermes2.tyBtnCmpTypeId.bValue;
			a_tyHermesUSParamWr[1].bCmpParam					:= tyP1023McSetHComm.tyUSHermes2.tyBtnCmpParam.bValue;
			a_tyHermesUSParamWr[1].bOverwrite					:= tyP1023McSetHComm.tyUSHermes2.tyBtnOverWrite.bValue;
			
			//Downstream
			a_tyHermesDSParamWr[0].tSndAlive					:= DINT_TO_TIME(tyP1023McSetHComm.tyDSHermes.tyNumSndAliveTm.diValue);
			a_tyHermesDSParamWr[0].uiSvrPort					:= DINT_TO_UINT(tyP1023McSetHComm.tyDSHermes.tyNumSvrPort.diValue);
			a_tyHermesDSParamWr[0].iLaneID						:= DINT_TO_INT(tyP1023McSetHComm.tyDSHermes.tyNumLaneID.diValue);
			a_tyHermesDSParamWr[0].bFeatureCheckAliveResponse	:= tyP1023McSetHComm.tyDSHermes.tyBtnCheckAliveResponse.bValue;
			a_tyHermesDSParamWr[0].bFeatureBoardForecast	    := tyP1023McSetHComm.tyDSHermes.tyBtnBoardForecast.bValue;
			a_tyHermesDSParamWr[0].bFeatureSendBoardInfo    	:= tyP1023McSetHComm.tyDSHermes.tyBtnSendBoardInfo.bValue;
			a_tyHermesDSParamWr[0].bFeatureCommand				:= tyP1023McSetHComm.tyDSHermes.tyBtnCommand.bValue;
			
			//Downstream
			a_tyHermesDSParamWr[1].tSndAlive					:= DINT_TO_TIME(tyP1023McSetHComm.tyDSHermes2.tyNumSndAliveTm.diValue);
			a_tyHermesDSParamWr[1].uiSvrPort					:= DINT_TO_UINT(tyP1023McSetHComm.tyDSHermes2.tyNumSvrPort.diValue);
			a_tyHermesDSParamWr[1].iLaneID						:= DINT_TO_INT(tyP1023McSetHComm.tyDSHermes2.tyNumLaneID.diValue);
			a_tyHermesDSParamWr[1].bFeatureCheckAliveResponse	:= tyP1023McSetHComm.tyDSHermes2.tyBtnCheckAliveResponse.bValue;
			a_tyHermesDSParamWr[1].bFeatureBoardForecast	    := tyP1023McSetHComm.tyDSHermes2.tyBtnBoardForecast.bValue;
			a_tyHermesDSParamWr[1].bFeatureSendBoardInfo    	:= tyP1023McSetHComm.tyDSHermes2.tyBtnSendBoardInfo.bValue;
			a_tyHermesDSParamWr[1].bFeatureCommand				:= tyP1023McSetHComm.tyDSHermes2.tyBtnCommand.bValue;
			
			
			bSaveHMIConfigure := TRUE;
			eHermesAct	:= HermesActWriteConfig;
			
			IF p_eHermesStat = HermesActWriteConfig AND p_eHermesStatus = Done THEN
				eHermesAct	:= HermesActIdle;
				
				//Backup Param
				tyP1023McSetHComm.tyUSHermesBkUp	:= tyP1023McSetHComm.tyUSHermes;
				tyP1023McSetHComm.tyUSHermesBkUp2	:= tyP1023McSetHComm.tyUSHermes2;
				tyP1023McSetHComm.tyDSHermesBkUp	:= tyP1023McSetHComm.tyDSHermes;
				tyP1023McSetHComm.tyDSHermesBkUp2	:= tyP1023McSetHComm.tyDSHermes2;
				
				usiSaveCommStep	:= 0;
				bSaveHMIConfigure := FALSE;
				tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
				
				fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
				
			ELSIF p_eHermesStatus = Error THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxSaveErr);
				
				IF tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bRtCompl	:= FALSE;
					tyP1023McSetHComm.tyMsgBoxSaveErr.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxHide);
					
					//Restore Param
					tyP1023McSetHComm.tyUSHermes	:= tyP1023McSetHComm.tyUSHermesBkUp;
					tyP1023McSetHComm.tyUSHermes2	:= tyP1023McSetHComm.tyUSHermesBkUp2;
					tyP1023McSetHComm.tyDSHermes	:= tyP1023McSetHComm.tyDSHermesBkUp;
					tyP1023McSetHComm.tyDSHermes2	:= tyP1023McSetHComm.tyDSHermesBkUp2;
					
					a_tyHermesUSParamWr				:= p_tyHermesConfiguration.a_tyUSParam;
					a_tyHermesDSParamWr				:= p_tyHermesConfiguration.a_tyDSParam;
					
					tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
					bSaveHMIConfigure := FALSE;
					fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
					
					usiSaveCommStep	:= 0;
					
				END_IF
				
			END_IF
			
		ELSIF usiSaveCommStep = 99 THEN
			p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxIPAddrInvalid);
			
			IF tyP1023McSetHComm.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl = TRUE THEN
				tyP1023McSetHComm.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl	:= FALSE;
				tyP1023McSetHComm.tyMsgBoxIPAddrInvalid.tyBtnNo.bValue		:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1023McSetHComm.tyMsgBoxHide);
				
				//Restore Param
				tyP1023McSetHComm.tyUSSel		:= tyP1023McSetHComm.tyUSSelBkUp;
				tyP1023McSetHComm.tyUSSMEMA		:= tyP1023McSetHComm.tyUSSMEMABkUp;
				tyP1023McSetHComm.tyUSHermes	:= tyP1023McSetHComm.tyUSHermesBkUp;
				tyP1023McSetHComm.tyDSSel		:= tyP1023McSetHComm.tyDSSelBkUp;
				tyP1023McSetHComm.tyDSSMEMA		:= tyP1023McSetHComm.tyDSSMEMABkUp;
				tyP1023McSetHComm.tyDSHermes	:= tyP1023McSetHComm.tyDSHermesBkUp;
				tyP1023McSetHComm.tyUSSel2		:= tyP1023McSetHComm.tyUSSelBkUp2;
				tyP1023McSetHComm.tyUSSMEMA2	:= tyP1023McSetHComm.tyUSSMEMABkUp2;
				tyP1023McSetHComm.tyUSHermes2	:= tyP1023McSetHComm.tyUSHermesBkUp2;
				tyP1023McSetHComm.tyDSSel2		:= tyP1023McSetHComm.tyDSSelBkUp;
				tyP1023McSetHComm.tyDSSMEMA2		:= tyP1023McSetHComm.tyDSSMEMABkUp;
				tyP1023McSetHComm.tyDSHermes2	:= tyP1023McSetHComm.tyDSHermesBkUp;
				
				tyCommon.tySet.tyBtnSave.bRtCompl	:= FALSE;
				
				fUIInRtStatOff(ADR(tyCommon.tySet.tyBtnSave.uiMaskRtStat));
				
				usiSaveCommStep	:= 0;
				
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
