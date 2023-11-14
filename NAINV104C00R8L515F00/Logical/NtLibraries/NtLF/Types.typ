(*OPCua Tag*)

TYPE
	eMachineStat : 
		(
		Run := 0,
		Stop := 1,
		Manual := 2,
		Warning := 3,
		InError := 4
		);
	tyLFLeaderToFollowerTag : 	STRUCT  (*Leader To Follower Tag*)
		sReqProdRcpNm : STRING[254] := ''; (*Require Product Recipe Name*)
		diReqProdRcpWidth : DINT := 0; (*Require Product Recipe Width*)
		sReqMagRcpNm : STRING[30] := ''; (*Require Magazine Recipe Name*)
		bMnlAccData : BOOL := FALSE; (*Manually Accept New Data*)
		bBypassMnlAccData : BOOL := FALSE; (*Bypass Manually Accept New Data*)
		bBlkDS : BOOL := FALSE; (*Block Downstream Communication*)
		bBlkUS : BOOL := FALSE; (*Block Upstream Communication*)
		bBypassWidthChk : BOOL := FALSE; (*Bypass Width Check*)
		bSetTm : BOOL := FALSE; (*Leader Trigger Set Time Function*)
		dtTm : DATE_AND_TIME := 0; (*Time*)
		uiTmZone : UINT := 0; (*Time Zone*)
		usiRunTm : USINT; (*Follower Run Time*)
		bProdNameUSWarn : BOOL := FALSE; (*Follower Run Time*)
		bProdNameDSWarn : BOOL := FALSE; (*Follower Run Time*)
		bProdWidthUSWarn : BOOL := FALSE; (*Follower Run Time*)
		bProdWidthDSWarn : BOOL := FALSE; (*Follower Run Time*)
		bLeaderSeqCtrlInActive : BOOL := FALSE; (*Follower Run Time*)
	END_STRUCT;
	tyLFFollowerToLeaderTag : 	STRUCT  (*Follower To Leade Tag*)
		sCurrProdRcp : STRING[254] := ''; (*Follower Current Product Recipe*)
		diCurrProdWidthUS : DINT := 0; (*Follower Current Product Width*)
		diCurrProdWidthDS : DINT := 0; (*Follower Current Product Width*)
		sCurrMagRcp : STRING[30] := ''; (*Follower Current Magazine Recipe*)
		sIPAddr : STRING[15] := ''; (*Follower IP Address*)
		sMcNm : STRING[30] := ''; (*Follower Machine Name*)
		bSectionLeader : BOOL := FALSE; (*Session Leader*)
		usiRunTm : USINT; (*Follower Run Time*)
		bProdRcpErr : BOOL := FALSE; (*Leader Recipe Doesn't Exist In Follower*)
		bProdWidthErr : BOOL := FALSE; (*Leader Recipe Width Doesn't Match*)
		bMagRcpErr : BOOL := FALSE; (*Leader Recipe Doesn't Exist In Follower*)
		bSyncTmErr : BOOL := FALSE; (*Follower Synchronous Time Error*)
		eCurrMachineStat : eMachineStat := Stop; (*Follower Synchronous Time Error*)
		bProdChgOverActive : BOOL := FALSE; (*Follower Synchronous Time Error*)
	END_STRUCT;
	tyLFFollowerInfo : 	STRUCT 
		bOnline : BOOL;
		usiRunTmOld : USINT;
	END_STRUCT;
	tyLFLeaderInfo : 	STRUCT 
		bOnline : BOOL;
		usiRunTmOld : USINT;
	END_STRUCT;
END_TYPE

(**)

TYPE
	tyLFFollowerInternal : 	STRUCT  (*Local Variables*)
		fbDlyTm : TON;
		bWidthTooSmall : BOOL;
		bProdWidthErr : BOOL;
	END_STRUCT;
	tyLFLeaderInternal : 	STRUCT  (*Local Variables*)
		bChgModeOn : BOOL;
		bInternalOven1On : BOOL;
		bInternalOven2On : BOOL;
		bInitialDone : BOOL;
		di : DINT;
		fbDlyTm : TON;
		sPreProdRcpNm : STRING[254];
		sPreMagRcpNm : STRING[30];
		diPreProdRcpWidth : DINT;
		bSectionLdrSetRcp : BOOL;
		sSectLdrProdRcpNm : STRING[254];
		sSectLdrMagRcpNm : STRING[30];
		diSectLdrProdRcpWidth : DINT;
	END_STRUCT;
END_TYPE
