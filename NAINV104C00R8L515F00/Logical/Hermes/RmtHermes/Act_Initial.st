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
	
	fbFileAppend1.sDevice	:= 'Log';
	fbFileAppend1(bEn := FALSE);
	
	fbFileOldDel1.sDevice			:= 'Log';
	fbFileOldDel1.sPath				:= '';
	fbFileOldDel1.sKeyword			:= p_sProgNm;
	fbFileOldDel1.udiFileKeepDay	:= p_udiFileKeepDay;
	fbFileOldDel1(bEn := FALSE);

END_ACTION
