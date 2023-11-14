(** 2020-10-05 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbOnlineChk.pa_tyLeaderToFollowerTag	:= ADR(a_tyLeaderToFollowerTag);
	fbOnlineChk.pa_tyFollowerInfo	:= ADR(a_tyFollowerInfo);
	fbOnlineChk.tDlyTm				:= p_tOnlineChkDlyTm;
	fbOnlineChk(bEn := FALSE);
	
	fbSyncTm.pa_tyLeaderToFollowerTag	:= ADR(a_tyLeaderToFollowerTag);
	fbSyncTm.tDlyTm						:= p_tSetTmOffDlyTm;
	fbSyncTm(bEn := FALSE);
	
	fbChgAll.pa_tyLeaderToFollowerTag	:= ADR(a_tyLeaderToFollowerTag);
	fbChgAll(bEn := FALSE);
	
	fbChgSeq.pa_tyLeaderToFollowerTag	:= ADR(a_tyLeaderToFollowerTag);
	fbChgSeq(bEn := FALSE);
	
	fbBlkUSDS.pa_tyLeaderToFollowerTag	:= ADR(a_tyLeaderToFollowerTag);
	fbBlkUSDS(bEn := FALSE);
	
	fbDataUpdt.pa_tyLeaderToFollowerTag	:= ADR(a_tyLeaderToFollowerTag);
	fbDataUpdt(bEn := FALSE);
	
	fbConnect.tyOPCUAParam.sPort	:= '4840';
	fbConnect(bEn := FALSE);
	
	fbGetNodeHdlListWr.uiTagNmCnt			:= 17;
	fbGetNodeHdlListWr.a_sServerTagNm[0]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.sReqProdRcpNm');
	fbGetNodeHdlListWr.a_sServerTagNm[1]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.diReqProdRcpWidth');
	fbGetNodeHdlListWr.a_sServerTagNm[2]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.sReqMagRcpNm');
	fbGetNodeHdlListWr.a_sServerTagNm[3]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bMnlAccData');
	fbGetNodeHdlListWr.a_sServerTagNm[4]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bBypassMnlAccData');
	fbGetNodeHdlListWr.a_sServerTagNm[5]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bBlkDS');
	fbGetNodeHdlListWr.a_sServerTagNm[6]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bBlkUS');
	fbGetNodeHdlListWr.a_sServerTagNm[7]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bSetTm');
	fbGetNodeHdlListWr.a_sServerTagNm[8]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.dtTm');
	fbGetNodeHdlListWr.a_sServerTagNm[9]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.uiTmZone');
	fbGetNodeHdlListWr.a_sServerTagNm[10]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bBypassWidthChk');
	fbGetNodeHdlListWr.a_sServerTagNm[11]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.usiRunTm');
	fbGetNodeHdlListWr.a_sServerTagNm[12]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bProdNameUSWarn');
	fbGetNodeHdlListWr.a_sServerTagNm[13]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bProdNameDSWarn');
	fbGetNodeHdlListWr.a_sServerTagNm[14]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bProdWidthUSWarn');
	fbGetNodeHdlListWr.a_sServerTagNm[15]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bProdWidthDSWarn');
	fbGetNodeHdlListWr.a_sServerTagNm[16]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyLeaderToFollowerTag.bLeaderSeqCtrlInActive');
	fbGetNodeHdlListWr(bEn := FALSE);
	
	fbGetNodeHdlListRd.uiTagNmCnt			:= 14;
	fbGetNodeHdlListRd.a_sServerTagNm[0]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.sCurrProdRcp');
	fbGetNodeHdlListRd.a_sServerTagNm[1]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.diCurrProdWidthUS');
	fbGetNodeHdlListRd.a_sServerTagNm[2]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.sCurrMagRcp');
	fbGetNodeHdlListRd.a_sServerTagNm[3]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.sIPAddr');
	fbGetNodeHdlListRd.a_sServerTagNm[4]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.sMcNm');
	fbGetNodeHdlListRd.a_sServerTagNm[5]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.bSectionLeader');
	fbGetNodeHdlListRd.a_sServerTagNm[6]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.usiRunTm');
	fbGetNodeHdlListRd.a_sServerTagNm[7]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.bProdRcpErr');
	fbGetNodeHdlListRd.a_sServerTagNm[8]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.bProdWidthErr');
	fbGetNodeHdlListRd.a_sServerTagNm[9]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.bMagRcpErr');
	fbGetNodeHdlListRd.a_sServerTagNm[10]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.bSyncTmErr');
	fbGetNodeHdlListRd.a_sServerTagNm[11]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.diCurrProdWidthDS');
	fbGetNodeHdlListRd.a_sServerTagNm[12]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.eCurrMachineStat');
	fbGetNodeHdlListRd.a_sServerTagNm[13]	:= CONCAT(CONCAT('::' , p_sFollowerProgTagNm) , ':tyFollowerToLeaderTag.bProdChgOverActive');
	fbGetNodeHdlListRd(bEn := FALSE);
	
	fbWriteList.uiTagNmCnt	:= 17;
	fbWriteList(bEn := FALSE);
	
	fbReadList.uiTagNmCnt	:= 14;
	fbReadList(bEn := FALSE);
	
	fbDisconnect(bEn := FALSE);
	
END_ACTION
