(** 2021-08-01 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbCreateSvr.udiSndBffrSize		:= p_udiSndBffrSize;
	fbCreateSvr.udiRcvBffrSize		:= p_udiRcvBffrSize;
	fbCreateSvr.udiAliveIdleTmInSec	:= p_udiAliveIdleTimeInSec;
	fbCreateSvr(bEn := FALSE);
	
	fbListen(bEn := FALSE);
	
	fbRcv.udiBffrSize	:= SIZEOF(sRcv);
	fbRcv.p_BffrDest	:= ADR(sRcv);
	fbRcv(bEn := FALSE);
	
	fbSend.p_BffrDest	:= ADR(sSnd);
	fbSend(bEn := FALSE);
	
	fbCloseSvr(bEn := FALSE);
	fbCloseClnt(bEn := FALSE);
	
	fbParseXMLTable.p_XMLTable	:= ADR(a_tyXMLTableDataRcv);
	
	fbCheckAlive(bEn := FALSE);
	
	fbCheckAliveSendPing(bEn := FALSE);
	
	fbCheckAliveRcvPing(bEn := FALSE);
	
	fbSequenceSvy.p_tyMsgTypeRcv	:= ADR(tyMsgTypeRcv);
	fbSequenceSvy(bEn := FALSE);
	
	fbSequenceTO(bEn := FALSE);
	
	fbFileAppend1.sDevice	:= 'Log';
	fbFileAppend1(bEn := FALSE);
	
	fbFileOldDel1.sDevice			:= 'Log';
	fbFileOldDel1.sPath				:= '';
	fbFileOldDel1.sKeyword			:= p_sProgNm;
	fbFileOldDel1.udiFileKeepDay	:= p_udiFileKeepDay;
	fbFileOldDel1(bEn := FALSE);
	
	fbFileRead1.sDevice			:= 'Retain';
	fbFileRead1.sFile			:= p_sRetainFileName;
	fbFileRead1.udiOffset		:= 0;
	fbFileRead1(bEn := FALSE);
	
	fbFileWrite1.sDevice		:= 'Retain';
	fbFileWrite1.sFile			:= p_sRetainFileName;
	fbFileWrite1.udiOffset		:= 0;
	fbFileWrite1.udiOption		:= 0;
	fbFileWrite1(bEn := FALSE);
	
	
END_ACTION
