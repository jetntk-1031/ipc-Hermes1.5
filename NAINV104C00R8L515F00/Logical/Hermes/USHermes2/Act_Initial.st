(** 2019-04-08 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbClntConnect.udiSndBffrSize		:= p_udiSndBffrSize;
	fbClntConnect.udiRcvBffrSize		:= p_udiRcvBffrSize;
	fbClntConnect.udiAliveIdleTmInSec	:= p_udiAliveIdleTimeInSec;
	fbClntConnect.tConnectTO			:= p_tConnTimeOut;
	fbClntConnect(bEn := FALSE);
	
	fbRcv.udiBffrSize	:= SIZEOF(sRcv);
	fbRcv.p_BffrDest	:= ADR(sRcv);
	fbRcv(bEn := FALSE);
	
	fbSend.p_BffrDest	:= ADR(sSnd);
	fbSend(bEn := FALSE);
	
	fbClose(bEn := FALSE);
	
	fbParseXMLTable.p_XMLTable	:= ADR(a_tyXMLTableDataRcv);
	
	fbCheckAlive(bEn := FALSE);
	
	fbCheckAliveSendPing(bEn := FALSE);
	
	fbCheckAliveRcvPing(bEn := FALSE);
	
	fbSequenceUS.p_tyMsgTypeRcv	:= ADR(tyMsgTypeRcv);
	fbSequenceUS(bEn := FALSE);
	
	fbSequenceTO(bEn := FALSE);
	
	fbFileAppend1.sDevice	:= 'Log';
	fbFileAppend1(bEn := FALSE);
	
	fbFileOldDel1.sDevice			:= 'Log';
	fbFileOldDel1.sPath				:= '';
	fbFileOldDel1.sKeyword			:= p_sProgNm;
	fbFileOldDel1.udiFileKeepDay	:= p_udiFileKeepDay;
	fbFileOldDel1(bEn := FALSE);
	
END_ACTION
