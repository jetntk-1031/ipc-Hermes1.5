(** 2020-08-06 **)
ACTION Act_Background_OPCUA:
	
	IF bRun1 = TRUE THEN
		
		CASE eOPCUAStep OF
			
			LFOPCUAStepIncCntr:
				udiNodeCntr	:= udiNodeCntr + 1;
				
				IF udiNodeCntr > c_diLFClntNum THEN
					udiNodeCntr	:= 1;
				END_IF
				
				eOPCUAStep	:= LFOPCUAStepChkHdls;
				
			LFOPCUAStepChkHdls:
				IF pa_sLFIPAddr[udiNodeCntr] <> '' THEN
					IF pa_bLFOnline[udiNodeCntr] = TRUE THEN
						IF a_dwConnectionHdl[udiNodeCntr] <> 0 THEN
							IF a_bNodeWr[udiNodeCntr] = TRUE THEN
								IF a_bNodeRd[udiNodeCntr] = TRUE THEN
									eOPCUAStep	:= LFOPCUAStepWrite;
								ELSE
									eOPCUAStep	:= LFOPCUAStepReadHdls;
								END_IF
							ELSE
								eOPCUAStep	:= LFOPCUAStepWriteHdls;
							END_IF
						ELSE
							eOPCUAStep	:= LFOPCUAStepConnect;
						END_IF
					ELSE
						eOPCUAStep	:= LFOPCUAStepIncCntr;
					END_IF
				ELSE
					udiNodeCntr	:= 0;
					eOPCUAStep	:= LFOPCUAStepStopChk;
				END_IF
			
			LFOPCUAStepConnect:
				fbConnect.tyOPCUAParam.sIPAddr	:= pa_sLFIPAddr[udiNodeCntr];
				fbConnect(bEn := TRUE);
				
				IF fbConnect.udiStatus = 0 THEN
					a_dwConnectionHdl[udiNodeCntr]	:= fbConnect.dwConnectionHdl;
					fbConnect(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepWriteHdls;
				ELSIF fbConnect.udiStatus < 65534 THEN
					a_dwConnectionHdl[udiNodeCntr]	:= 0;
					fbConnect(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepStopChk;
				END_IF
				
			LFOPCUAStepWriteHdls:
				fbGetNodeHdlListWr.dwConnectionHdl	:= a_dwConnectionHdl[udiNodeCntr];
				fbGetNodeHdlListWr(bEn := TRUE);
				
				IF fbGetNodeHdlListWr.udiStatus = 0 THEN
					a_bNodeWr[udiNodeCntr]				:= TRUE;
					a_tyWriteHdls[udiNodeCntr].a_dwHdls	:= fbGetNodeHdlListWr.a_dwNodeHdlList;
					fbGetNodeHdlListWr(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepReadHdls;
				ELSIF fbGetNodeHdlListWr.udiStatus < 65534 THEN
					a_bNodeWr[udiNodeCntr]	:= FALSE;
					fbGetNodeHdlListWr(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepStopChk;
				END_IF
			
			LFOPCUAStepReadHdls:
				fbGetNodeHdlListRd.dwConnectionHdl	:= a_dwConnectionHdl[udiNodeCntr];
				fbGetNodeHdlListRd(bEn := TRUE);
				
				IF fbGetNodeHdlListRd.udiStatus = 0 THEN
					a_bNodeRd[udiNodeCntr]				:= TRUE;
					a_tyReadHdls[udiNodeCntr].a_dwHdls	:= fbGetNodeHdlListRd.a_dwNodeHdlList;
					fbGetNodeHdlListRd(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepWrite;
				ELSIF fbGetNodeHdlListRd.udiStatus < 65534 THEN
					a_bNodeRd[udiNodeCntr]	:= FALSE;
					fbGetNodeHdlListRd(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepStopChk;
				END_IF
			
			LFOPCUAStepWrite:
				fbWriteList.dwConnectionHdl		:= a_dwConnectionHdl[udiNodeCntr];
				fbWriteList.a_dwNodeHdlList		:= a_tyWriteHdls[udiNodeCntr].a_dwHdls;
				sNodeCntr						:= UDINT_TO_STRING(udiNodeCntr);
				fbWriteList.a_sClientTagNm[0]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].sReqProdRcpNm');
				fbWriteList.a_sClientTagNm[1]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].diReqProdRcpWidth');
				fbWriteList.a_sClientTagNm[2]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].sReqMagRcpNm');
				fbWriteList.a_sClientTagNm[3]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bMnlAccData');
				fbWriteList.a_sClientTagNm[4]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bBypassMnlAccData');
				fbWriteList.a_sClientTagNm[5]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bBlkDS');
				fbWriteList.a_sClientTagNm[6]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bBlkUS');
				fbWriteList.a_sClientTagNm[7]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bSetTm');
				fbWriteList.a_sClientTagNm[8]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].dtTm');
				fbWriteList.a_sClientTagNm[9]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].uiTmZone');
				fbWriteList.a_sClientTagNm[10]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bBypassWidthChk');
				fbWriteList.a_sClientTagNm[11]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].usiRunTm');
				fbWriteList.a_sClientTagNm[12]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bProdNameUSWarn');
				fbWriteList.a_sClientTagNm[13]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bProdNameDSWarn');
				fbWriteList.a_sClientTagNm[14]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bProdWidthUSWarn');
				fbWriteList.a_sClientTagNm[15]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bProdWidthDSWarn');
				fbWriteList.a_sClientTagNm[16]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyLeaderToFollowerTag[') , sNodeCntr) , '].bLeaderSeqCtrlInActive');
				fbWriteList(bEn := TRUE);
				
				IF fbWriteList.udiStatus = 0 THEN
					fbWriteList(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepRead;
				ELSIF fbWriteList.udiStatus < 65534 THEN
					fbWriteList(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepStopChk;
				END_IF
	
			LFOPCUAStepRead:
				fbReadList.dwConnectionHdl		:= a_dwConnectionHdl[udiNodeCntr];
				fbReadList.a_dwNodeHdlList		:= a_tyReadHdls[udiNodeCntr].a_dwHdls;
				sNodeCntr						:= UDINT_TO_STRING(udiNodeCntr);
				fbReadList.a_sClientTagNm[0]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].sCurrProdRcp');
				fbReadList.a_sClientTagNm[1]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].diCurrProdWidthUS');
				fbReadList.a_sClientTagNm[2]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].sCurrMagRcp');
				fbReadList.a_sClientTagNm[3]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].sIPAddr');
				fbReadList.a_sClientTagNm[4]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].sMcNm');
				fbReadList.a_sClientTagNm[5]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].bSectionLeader');
				fbReadList.a_sClientTagNm[6]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].usiRunTm');
				fbReadList.a_sClientTagNm[7]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].bProdRcpErr');
				fbReadList.a_sClientTagNm[8]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].bProdWidthErr');
				fbReadList.a_sClientTagNm[9]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].bMagRcpErr');
				fbReadList.a_sClientTagNm[10]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].bSyncTmErr');
				fbReadList.a_sClientTagNm[11]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].diCurrProdWidthDS');
				fbReadList.a_sClientTagNm[12]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].eCurrMachineStat');
				fbReadList.a_sClientTagNm[13]	:= CONCAT(CONCAT(CONCAT(CONCAT('::' , p_sLeaderProgTagNm) , ':a_tyFollowerToLeaderTag[') , sNodeCntr) , '].bProdChgOverActive');
				fbReadList(bEn := TRUE);
				
				IF fbReadList.udiStatus = 0 THEN
					fbReadList(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepStopChk;
				ELSIF fbReadList.udiStatus < 65534 THEN
					fbReadList(bEn := FALSE);
					eOPCUAStep	:= LFOPCUAStepStopChk;
				END_IF
	
			LFOPCUAStepStopChk:
				IF bStop AND bStop2Done THEN
					IF bCntr = FALSE THEN
						bCntr	:= TRUE;
					ELSE
						bStop1Done	:= TRUE;
						bCntr		:= FALSE;
					END_IF
				ELSE
					bCntr	:= FALSE;
				END_IF
			
				eOPCUAStep	:= LFOPCUAStepIncCntr;
			
		END_CASE
		
	END_IF
	
END_ACTION
