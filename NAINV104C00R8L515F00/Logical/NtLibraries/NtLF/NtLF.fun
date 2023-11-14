
FUNCTION_BLOCK fbLFLeaderOnlineChk (*Leader Online Check*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		pa_tyLeaderToFollowerTag : REFERENCE TO ARRAY[1..c_diLFClntNum] OF tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		pa_tyFollowerInfo : REFERENCE TO ARRAY[1..c_diLFClntNum] OF tyLFFollowerInfo; (*Follower Info*)
		a_bOnline : ARRAY[1..c_diLFClntNum] OF BOOL; (*Follower Online*)
		a_tyFollowerToLeaderTag : {REDUND_UNREPLICABLE} ARRAY[1..c_diLFClntNum] OF tyLFFollowerToLeaderTag; (*Follower To Leader Tag*)
		tDlyTm : TIME := T#10s; (*Delay Time*)
		diMcNum : {REDUND_UNREPLICABLE} DINT; (*Total Machine Number*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFLeaderInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFLeaderSyncTm (*Leader Sync PLC Time*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		pa_tyLeaderToFollowerTag : REFERENCE TO ARRAY[1..c_diLFClntNum] OF tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		dtCurrDT : DATE_AND_TIME; (*Current Date And Time*)
		uiCurrTmZone : UINT; (*Current Time Zone*)
		tDlyTm : TIME := T#2s; (*Delay Time*)
		diMcNum : {REDUND_UNREPLICABLE} DINT; (*Total Machine Number*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFLeaderInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFLeaderChgAll (*Leader Change All*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		pa_tyLeaderToFollowerTag : REFERENCE TO ARRAY[1..c_diLFClntNum] OF tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		bChgAuto : BOOL; (*Change Sequence Auto*)
		a_bOnline : ARRAY[1..c_diLFClntNum] OF BOOL; (*Follower Online*)
		a_tyFollowerToLeaderTag : {REDUND_UNREPLICABLE} ARRAY[1..c_diLFClntNum] OF tyLFFollowerToLeaderTag; (*Follower To Leader Tag*)
		sReqProdRcpNm : STRING[254]; (*Require Product Recipe Name*)
		diReqProdRcpWidth : DINT; (*Require Product Recipe Width*)
		sReqMagRcpNm : STRING[30]; (*Require Magazine Recipe Name*)
		diMcNum : {REDUND_UNREPLICABLE} DINT; (*Total Machine Number*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFLeaderInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFLeaderChgSeq (*Leader Change Sequential Auto*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		pa_tyLeaderToFollowerTag : REFERENCE TO ARRAY[1..c_diLFClntNum] OF tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		bChgAuto : BOOL; (*Change Sequence Auto*)
		a_bOnline : ARRAY[1..c_diLFClntNum] OF BOOL; (*Follower Online*)
		a_tyFollowerToLeaderTag : ARRAY[1..c_diLFClntNum] OF tyLFFollowerToLeaderTag; (*Follower To Leader Tag*)
		sReqProdRcpNm : STRING[254]; (*Require Product Recipe Name*)
		diReqProdRcpWidth : DINT; (*Require Product Recipe Width*)
		sReqMagRcpNm : STRING[30]; (*Require Magazine Recipe Name*)
		diMcNum : {REDUND_UNREPLICABLE} DINT; (*Total Machine Number*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFLeaderInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFLeaderBlkUSDS (*Leader Block Upstream & Downstream*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		pa_tyLeaderToFollowerTag : REFERENCE TO ARRAY[1..c_diLFClntNum] OF tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		a_tyFollowerToLeaderTag : ARRAY[1..c_diLFClntNum] OF tyLFFollowerToLeaderTag; (*Follower To Leader Tag*)
		diBeforeOven1 : {REDUND_UNREPLICABLE} DINT; (*Machine Index Before Oven 1*)
		diBeforeOven2 : {REDUND_UNREPLICABLE} DINT; (*Machine Index Before Oven 2*)
		diAfterOven1 : {REDUND_UNREPLICABLE} DINT; (*Machine Index After Oven 1*)
		diAfterOven2 : {REDUND_UNREPLICABLE} DINT; (*Machine Index After Oven 2*)
		diMcNum : {REDUND_UNREPLICABLE} DINT; (*Total Machine Number*)
		bSeqMode : {REDUND_UNREPLICABLE} BOOL; (*Sequential Mode*)
		pa_bLFOnline : {REDUND_UNREPLICABLE} ARRAY[1..c_diLFClntNum] OF BOOL; (*Machine Online Status*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFLeaderInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFLeaderDataUpdt (*Leader Sync PLC Time*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		pa_tyLeaderToFollowerTag : REFERENCE TO ARRAY[1..c_diLFClntNum] OF tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		a_bOnline : ARRAY[1..c_diLFClntNum] OF BOOL; (*Follower Online*)
		diMcNum : {REDUND_UNREPLICABLE} DINT; (*Total Machine Number*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFLeaderInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFFollower (*Follower*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		sMcNm : STRING[30]; (*Machine Name*)
		sIPAddr : STRING[15]; (*Follower IP Address*)
		bSectionLeader : BOOL; (*Section Leader Enable*)
		sCurrProdRcpNm : STRING[254]; (*Current Product Recipe Name*)
		diCurrProdWidthUS : DINT; (*Current Product Width*)
		diCurrProdWidthDS : DINT; (*Current Product Width*)
		sCurrMagRcpNm : STRING[30]; (*Current Magazine Name*)
		sUpdtLeaderProdRcpNm : STRING[254]; (*Current Product Recipe Name*)
		diUpdtLeaderProdWidthUS : DINT; (*Current Product Width (US)*)
		diUpdtLeaderProdWidthDS : DINT; (*Current Product Width (DS)*)
		sUpdtLeaderMagRcpNm : STRING[30]; (*Current Magazine Name*)
		diWidthLimit : DINT := 3000; (*Width Limit*)
		bMnlAccDat : BOOL; (*Manual Accept New Recipe*)
		bAWEn : BOOL; (*Auto Width Enable*)
		bUSWidthChkEn : BOOL; (*Upstream Width Check Sensor Enable*)
		bUSWidthChkSen : BOOL; (*Upstream Width Check Sensor On*)
		bDSWidthChkEn : BOOL; (*Downstream Width Check Sensor Enable*)
		bDSWidthChkSen : BOOL; (*Downstream Width Check Sensor On*)
		bProdWidthChk : BOOL; (*Check Product Width*)
		bProdRcpErr : BOOL; (*Change Product Recipe Error*)
		bMagRcpErr : BOOL; (*Change Magazine Recipe Error*)
		bSetTmErr : BOOL; (*Set Time Error*)
		eCurrMachineStat : eMachineStat; (*Machine Stat*)
		bProdChgOverActive : BOOL; (*Machine Stat*)
		bDBAOnWOAlign : BOOL; (*Machine Stat*)
	END_VAR
	VAR_OUTPUT
		tyFollowerToLeaderTag : tyLFFollowerToLeaderTag; (*Follower To Leader Tag*)
		bProdAccDataReq : BOOL; (*Product Accept Data Request*)
		bMagAccDataReq : BOOL; (*Magazine Accept Data Request*)
		bAutoAccData : BOOL; (*Auto Accept Data*)
		bUSAllow : BOOL; (*Upstream Allow Enter Board*)
		bDSAllow : BOOL; (*Downstream Allow Release Board*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFFollowerInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFFollowerOnlineChk (*Follower Online Check*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		p_tyLeaderInfo : REFERENCE TO tyLFLeaderInfo; (*Leader Info*)
		tyLeaderToFollowerTag : {REDUND_UNREPLICABLE} tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		tDlyTm : TIME := T#60s; (*Delay Time*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFFollowerInternal; (*Local Variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION fLFFollowerDataUpdt : BOOL (*Follower Data Update*)
	VAR_INPUT
		p_tyFollowerToLeaderTag : REFERENCE TO tyLFFollowerToLeaderTag; (*Follower To Leader Tag*)
		sMcNm : STRING[30]; (*Machine Name*)
		sIPAddr : STRING[15]; (*Follower IP Address*)
		bSectionLeader : BOOL; (*Section Leader Enable*)
		sCurrProdRcpNm : STRING[254]; (*Current Product Recipe Name*)
		diCurrProdWidthUS : DINT; (*Current Product Width (US)*)
		diCurrProdWidthDS : DINT; (*Current Product Width (DS)*)
		sCurrMagRcpNm : STRING[30]; (*Current Magazine Name*)
		bProdRcpErr : BOOL; (*Change Product Recipe Error*)
		bProdWidthErr : BOOL; (*Product Width Error*)
		bMagRcpErr : BOOL; (*Change Magazine Recipe Error*)
		bSetTmErr : BOOL; (*Set Time Error*)
		eCurrMachineStat : eMachineStat; (*Machine Stat*)
		bProdChgOverActive : BOOL; (*Product Change Over Active*)
	END_VAR
END_FUNCTION

FUNCTION fLFFollowerWidthTooSmallUpdt : BOOL (*Follower Width Update*)
	VAR_INPUT
		diWidthLimit : DINT := 3000; (*Width Limit*)
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		sCurrProdRcpNm : STRING[254]; (*Current Product Recipe Name*)
		diCurrProdWidthUS : DINT; (*Current Product Width*)
	END_VAR
END_FUNCTION

FUNCTION fLFFollowerWidthErrChk : BOOL (*Follower Width Error Check*)
	VAR_INPUT
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		sCurrProdRcpNm : STRING[254]; (*Current Product Recipe Name*)
		diCurrProdWidthUS : DINT; (*Current Product Width*)
	END_VAR
END_FUNCTION

FUNCTION fLFFollowerAutoAccDataUpdt : BOOL (*Follower Auto Accept Data Update*)
	VAR_INPUT
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		bMnlAccDat : BOOL; (*Manual Accept New Recipe*)
		bAWEn : BOOL; (*Auto Width Enable*)
		bUSWidthChkEn : BOOL; (*Upstream Width Check Sensor Enable*)
		bWidthTooSmall : BOOL; (*Width Too Small*)
	END_VAR
END_FUNCTION

FUNCTION fLFFollowerProdAccDataReqUpdt : BOOL (*Follower Accept Data Request Update*)
	VAR_INPUT
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		bSectionLeader : BOOL; (*Section Leader Enable*)
		sCurrProdRcpNm : STRING[254]; (*Current Product Recipe Name*)
		bUSWidthChkEn : BOOL; (*Upstream Width Check Sensor Enable*)
		bUSWidthChkSen : BOOL; (*Upstream Width Check Sensor On*)
		bWidthTooSmall : BOOL; (*Width Too Small*)
		bProdRcpErr : BOOL; (*Change Product Recipe Error*)
		bProdWidthErr : BOOL; (*Product Width Error*)
		diCurrProdWidthUS : DINT; (*Current Product Width*)
	END_VAR
END_FUNCTION

FUNCTION fLFFollowerMagAccDataReqUpdt : BOOL (*Follower Accept Data Request Update*)
	VAR_INPUT
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		bSectionLeader : BOOL; (*Section Leader Enable*)
		sCurrMagRcpNm : STRING[30]; (*Current Magazine Recipe Name*)
		bUSWidthChkEn : BOOL; (*Upstream Width Check Sensor Enable*)
		bUSWidthChkSen : BOOL; (*Upstream Width Check Sensor On*)
		bMagRcpErr : BOOL; (*Change Magazine Recipe Error*)
	END_VAR
END_FUNCTION

FUNCTION fLFUSAllow : BOOL (*Upstream Allow Enter Board*)
	VAR_INPUT
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		bSectionLeader : BOOL; (*Section Leader Enable*)
		bWidthChkEn : BOOL; (*Upstream Width Check Sensor Enable*)
		bWidthChkSen : BOOL; (*Upstream Width Check Sensor On*)
		sCurrProdRcpNm : STRING[254]; (*Current Product Recipe Name*)
		bMnlAccData : BOOL; (*Manual Accept Data*)
	END_VAR
END_FUNCTION

FUNCTION fLFDSAllow : BOOL (*Downstream Allow Release Board*)
	VAR_INPUT
		tyLeaderToFollowerTag : tyLFLeaderToFollowerTag; (*Leader To Follower Tag*)
		bWidthChkEn : BOOL; (*Downstream Width Check Sensor Enable*)
		bWidthChkSen : BOOL; (*Downstream Width Check Sensor On*)
		bDBAOnWOAlign : BOOL; (*Machine Stat*)
	END_VAR
END_FUNCTION
