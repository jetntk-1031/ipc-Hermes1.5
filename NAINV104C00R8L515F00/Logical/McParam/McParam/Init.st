(** 2019-05-04 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_McParamStat		:= ADR(eStat);
	p_McParamStatus		:= ADR(eStatus);
	p_McParamStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_McParamAlmData	:= ADR(tyAlmData);
	
	//Output
	p_McParamFileNotFound			:= ADR(bFileNotFound);
	
	p_McParamCurr					:= ADR(tyMcParamCurr);
	
	p_McParamLFOnline				:= ADR(tyMcParamCurr.a_bLFOnline);
	p_McParamLFIPAddr				:= ADR(tyMcParamCurr.a_sLFIPAddr);
	
	p_McParamMcNm					:= ADR(tyMcParamCurr.sMcNm);
	p_McParamWidthAtHmPos			:= ADR(tyMcParamCurr.diWidthAtHmPosInUM);
	p_McParamWidthOffset			:= ADR(tyMcParamCurr.diWidthOffsetInUM);
	p_McParamSSaverEn				:= ADR(tyMcParamCurr.bSSaverEn);
	p_McParamSSaverTm				:= ADR(tyMcParamCurr.uiSSaverTmInSec);
	p_McParamConvInitTm				:= ADR(tyMcParamCurr.diConvInitTmInMS);
	p_McParamTranInErrDlyTm			:= ADR(tyMcParamCurr.diTranInErrDlyTmInMS);
	p_McParamTranOutErrDlyTm		:= ADR(tyMcParamCurr.diTranOutErrDlyTmInMS);
	p_McParamDefaultMcMod			:= ADR(tyMcParamCurr.usiDefaultMcMod);
	p_McParamDefaultFlippedBrd		:= ADR(tyMcParamCurr.usiDefaultFlippedBrd);
	p_McParamAutoStepEn				:= ADR(tyMcParamCurr.bAutoStepEn);
	p_McParamAWDis					:= ADR(tyMcParamCurr.bAWDis);
	p_McParamVSMEMAEn				:= ADR(tyMcParamCurr.bVSMEMAEn);
	p_McParamMnlAccDat				:= ADR(tyMcParamCurr.bMnlAccDat);
	p_McParamChgParamEn				:= ADR(tyMcParamCurr.bChgParamEn);
	p_McParamHermesRmtEn			:= ADR(tyMcParamCurr.bHermesRmtEn);
	p_McParamLang					:= ADR(tyMcParamCurr.usiLang);
	
	p_McParamLFEn					:= ADR(tyMcParamCurr.bLFEn);
	p_McParamLCSLFEn				:= ADR(tyMcParamCurr.bLCSLFEn);
	p_McParamLCSReqRcpEn			:= ADR(tyMcParamCurr.bLCSReqRcpEn);
	p_McParamLCSManageRcpEn			:= ADR(tyMcParamCurr.bLCSManageRcpEn);
	p_McParamLCSLiveDatEn			:= ADR(tyMcParamCurr.bLCSLiveDatEn);
	p_McParamSectionLeader			:= ADR(tyMcParamCurr.bSectionLeader);
	p_McParamUSWidthChkEn			:= ADR(tyMcParamCurr.bUSWidthChkEn);
	p_McParamDSWidthChkEn			:= ADR(tyMcParamCurr.bDSWidthChkEn);
	
	p_McParamConvLftSenAntiGap		:= ADR(tyMcParamCurr.tyConvLftSenAntiGapDly);
	p_McParamConvLftSenOnTm			:= ADR(tyMcParamCurr.tyConvLftSenAntiGapDly.diSigOnTm);
	p_McParamConvLftSenOffTm		:= ADR(tyMcParamCurr.tyConvLftSenAntiGapDly.diSigOffTm);
	p_McParamConvRgtSenAntiGap		:= ADR(tyMcParamCurr.tyConvRgtSenAntiGapDly);
	p_McParamConvRgtSenOnTm			:= ADR(tyMcParamCurr.tyConvRgtSenAntiGapDly.diSigOnTm);
	p_McParamConvRgtSenOffTm		:= ADR(tyMcParamCurr.tyConvRgtSenAntiGapDly.diSigOffTm);
	
	p_McParamUSCommMod				:= ADR(tyMcParamCurr.eUSComm);
	p_McParamUSSMEMAParam			:= ADR(tyMcParamCurr.tyUSCommSMEMA);
	p_McParamUSSMEMASelection		:= ADR(tyMcParamCurr.tyUSCommSMEMA.eSelection);
	p_McParamUBAStatSetGd			:= ADR(tyMcParamCurr.tyUSCommSMEMA.bStatSigSetGd);
	
	p_McParamDSCommMod				:= ADR(tyMcParamCurr.eDSComm);
	p_McParamDSSMEMAParam			:= ADR(tyMcParamCurr.tyDSCommSMEMA);
	p_McParamDSSMEMASelection		:= ADR(tyMcParamCurr.tyDSCommSMEMA.eSelection);
	p_McParamDBAStatSetGd			:= ADR(tyMcParamCurr.tyDSCommSMEMA.bStatSigSetGd);

	p_McParamStopperDis				:= ADR(tyMcParamCurr.bStopperDis);
	p_McParamStopperAtLftPos		:= ADR(tyMcParamCurr.diStopperAtLftPos);	
	p_McParamStopperAtRgtPos		:= ADR(tyMcParamCurr.diStopperAtRgtPos);
	p_McParamLFLeaderMc				:= ADR(tyMcParamCurr.bLFLeaderMc);
	p_McParamLFMcIdxBeforeOven		:= ADR(tyMcParamCurr.diLFMcIdxBeforeOven);
	p_McParamLFMcIdxAfterOven		:= ADR(tyMcParamCurr.diLFMcIdxAfterOven);
	p_McParamLFMcIdxBeforeOven2		:= ADR(tyMcParamCurr.diLFMcIdxBeforeOven2);
	p_McParamLFMcIdxAfterOven2		:= ADR(tyMcParamCurr.diLFMcIdxAfterOven2);
	
	p_McParamClampDis				:= ADR(tyMcParamCurr.bClampDis);
	
	p_McParamInShutterDis			:= ADR(tyMcParamCurr.bInShutterDis);
	p_McParamOutShutterDis			:= ADR(tyMcParamCurr.bOutShutterDis);
	
	p_McParamNetworkMod				:= ADR(tyMcParamCurr.eNetworkMod);
	p_McParamLFSeqStayActive		:= ADR(tyMcParamCurr.bLFSeqStayActive);
	p_McParamLFBuzMute				:= ADR(tyMcParamCurr.bLFBuzMute);
	p_McParamDBAOnWOAlign			:= ADR(tyMcParamCurr.bDBAOnWOAlign);
	
	//InvertOnce & InvertTwice_2023_0032B01
	p_McParamUSComm2Mod				:= ADR(tyMcParamCurr.eUSComm2);
	p_McParamUSSMEMA2Param			:= ADR(tyMcParamCurr.tyUSCommSMEMA2);
	p_McParamUSSMEMA2Selection		:= ADR(tyMcParamCurr.tyUSCommSMEMA2.eSelection);
	p_McParamUBAStat2SetGd			:= ADR(tyMcParamCurr.tyUSCommSMEMA2.bStatSigSetGd);
	
	//process machine to inverter
	p_McParamDSComm2Mod				:= ADR(tyMcParamCurr.eDSComm2);
	p_McParamDSSMEMA2Param			:= ADR(tyMcParamCurr.tyDSCommSMEMA2);
	p_McParamDSSMEMA2Selection		:= ADR(tyMcParamCurr.tyDSCommSMEMA2.eSelection);
	p_McParamDBAStat2SetGd			:= ADR(tyMcParamCurr.tyDSCommSMEMA2.bStatSigSetGd);
	
	p_McParamHermesSvyEn			:= ADR(tyMcParamCurr.bHermesSvyEn);
	
	(* Always Change If Project Change *)
	
END_PROGRAM