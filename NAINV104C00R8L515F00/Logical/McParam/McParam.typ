(*2019-05-04*)
(**)
(*Action*)

TYPE
	eMcParamAction : 
		(
		McParamActIdle,
		McParamActCreateDir,
		McParamActRead,
		McParamActWrite
		);
END_TYPE

(**)
(*Data*)

TYPE
	tyMcParam : 	STRUCT 
		a_bLFOnline : ARRAY[1..c_diLFClntNum]OF BOOL;
		a_sLFIPAddr : ARRAY[1..c_diLFClntNum]OF STRING[15];
		sMcNm : STRING[30] := 'Inverter';
		diWidthAtHmPosInUM : DINT := 256800;
		sIPAddr : STRING[15] := '192.168.0.40';
		sSubnetMask : STRING[15] := '255.255.255.0';
		eNetworkMod : eNetworkConfigMod := SetIPManually;
		bSSaverEn : BOOL := FALSE;
		uiSSaverTmInSec : UINT := 1800;
		diConvInitTmInMS : DINT := 6000;
		diTranInErrDlyTmInMS : DINT := 12000;
		diTranOutErrDlyTmInMS : DINT := 12000;
		diStopperAtLftPos : DINT := 99500;
		diStopperAtRgtPos : DINT := 0;
		usiDefaultMcMod : USINT := 0;
		usiDefaultFlippedBrd : USINT := 0;
		bAutoStepEn : BOOL := FALSE;
		bAWDis : BOOL := FALSE;
		bVSMEMAEn : BOOL := FALSE;
		bMnlAccDat : BOOL := FALSE;
		bChgParamEn : BOOL := FALSE;
		bHermesRmtEn : BOOL := FALSE;
		bHermesSvyEn : BOOL := FALSE;
		bClampDis : BOOL := FALSE;
		bStopperDis : BOOL := FALSE;
		bInShutterDis : BOOL := FALSE;
		bOutShutterDis : BOOL := FALSE;
		usiLang : USINT := 0;
		bLFEn : BOOL := FALSE;
		bLCSLFEn : BOOL := FALSE;
		bLCSReqRcpEn : BOOL := FALSE;
		bLCSManageRcpEn : BOOL := FALSE;
		bLCSLiveDatEn : BOOL := FALSE;
		bSectionLeader : BOOL := FALSE;
		bUSWidthChkEn : BOOL := FALSE;
		bDSWidthChkEn : BOOL := FALSE;
		tyConvLftSenAntiGapDly : tyAntiGapDly;
		tyConvRgtSenAntiGapDly : tyAntiGapDly;
		eUSComm : eMcSetCommMod := McSetCommModSMEMA;
		tyUSCommSMEMA : tySMEMAParam := (eSelection:=SMEMASelIPC9851,bStatSigSetGd:=FALSE);
		eDSComm : eMcSetCommMod := McSetCommModSMEMA;
		tyDSCommSMEMA : tySMEMAParam := (eSelection:=SMEMASelIPC9851,bStatSigSetGd:=FALSE);
		eUSComm2 : eMcSetCommMod := McSetCommModSMEMA;
		tyUSCommSMEMA2 : tySMEMAParam := (eSelection:=SMEMASelIPC9851,bStatSigSetGd:=FALSE);
		eDSComm2 : eMcSetCommMod := McSetCommModSMEMA;
		tyDSCommSMEMA2 : tySMEMAParam := (eSelection:=SMEMASelIPC9851,bStatSigSetGd:=FALSE);
		bLFLeaderMc : BOOL := FALSE;
		diLFMcIdxBeforeOven : DINT := 1;
		diLFMcIdxAfterOven : DINT := 1;
		diLFMcIdxBeforeOven2 : DINT := 1;
		diLFMcIdxAfterOven2 : DINT := 1;
		diWidthOffsetInUM : DINT := 0;
		bAutoLogoutEn : BOOL := FALSE;
		diAutoLogoutTmInSec : DINT := 1800000;
		bLFSeqStayActive : BOOL := FALSE;
		bLFBuzMute : BOOL := FALSE;
		bDBAOnWOAlign : BOOL := FALSE;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyAntiGapDly : 	STRUCT 
		diSigOnTm : DINT;
		diSigOffTm : DINT;
	END_STRUCT;
	eMcSetCommMod : 
		(
		McSetCommModSMEMA,
		McSetCommModHermes
		);
END_TYPE
