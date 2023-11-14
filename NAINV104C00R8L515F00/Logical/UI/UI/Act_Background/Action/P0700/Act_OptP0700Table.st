
ACTION Act_OptP0700Table:
	
	//Call Table FB
	fbP0700Table.sVisuNm			:= tyP0700Table.sVisuNm;
	fbP0700Table.udiWorkAreaStartX	:= 14;
	fbP0700Table.udiWorkAreaEndX	:= 475;
	fbP0700Table.udiWorkAreaStartY	:= 45;
	fbP0700Table.udiWorkAreaEndY	:= 217;
	fbP0700Table.udiMinXDist		:= 20;
	fbP0700Table.udiMinYDist		:= 20;
	fbP0700Table.uiSlideScale		:= c_uiP0700TableSize;
	fbP0700Table.iTotalData			:= UDINT_TO_INT(c_diLFClntNum);
	fbP0700Table.iTotalRow			:= c_uiP0700TableSize;
	fbP0700Table(uiSliderStatus 	:= tyP0700LFCtrl.tyLdr.tyTable1List.tyUISlider.uiRtStat , a_tyUIHotspot := tyP0700LFCtrl.tyLdr.tyTable1List.a_tyHotspot , uiTablePos := tyP0700Table.uiTablePos , iSliderPos := tyP0700LFCtrl.tyLdr.tyTable1List.tyUISlider.iValue);
	
	tyP0700Table.uiSelectedRow		:= fbP0700Table.uiSelectedRow;
	tyP0700Table.bTableActive		:= fbP0700Table.bTableActive;
	tyP0700Table.bSliderActive		:= fbP0700Table.bSliderActive;
	
	//Table Content
	IF tyP0700Table.bTableActive = TRUE OR tyP0700Table.bSliderActive = TRUE THEN
		FOR i := 1 TO c_uiP0700TableSize DO
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0700Table.uiTablePos + i - 1);
		END_FOR
	END_IF
	
	//Update Status & Current Recipe
	FOR i := 1 TO c_uiP0700TableSize DO
		tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol1[i].sValue	:= p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].sMcNm;
		tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue	:= p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1];
		tyP0700LFCtrl.tyLdr.tyTable1List.a_tyStringDataCol4[i].sValue	:= p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].sCurrProdRcp;
		
		IF p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1] = '' THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 0;	//Empty
		ELSIF p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1] = '0000' THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 3;	//Third Party
		ELSIF p_tyMcParamCurr.a_bLFOnline[tyP0700Table.uiTablePos + i - 1] = FALSE THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 9;	//Offline
		ELSIF p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1] = p_sHWInfoIPAddr THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 4;	//Leader	
		ELSIF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].bSectionLeader = TRUE THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 5;	//Section Leader
		ELSIF p_tyLFLeaderFollowerInfo[tyP0700Table.uiTablePos + i - 1].bOnline = FALSE THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 9;	//Offline
		ELSE
			IF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Run THEN
				IF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Warning THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 2;	//Warning
				ELSE
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 6;	//Run
				END_IF	
			ELSE
				IF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=InError THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 1;	//Error
				ELSIF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Warning THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 2;	//Warning
				ELSIF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Manual THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 8;	//Manual
				ELSE
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 7;	//Stop
				END_IF
			END_IF
		END_IF
	END_FOR
	
	//Update Color
	FOR i := 1 TO c_uiP0700TableSize DO
		
		IF p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1] = '' THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 0;	//Empty
		ELSIF p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1] = '0000' THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 0;	//Third Party
		ELSIF p_tyMcParamCurr.a_bLFOnline[tyP0700Table.uiTablePos + i - 1] = FALSE THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 3;	//Offline
		ELSIF p_tyMcParamCurr.a_sLFIPAddr[tyP0700Table.uiTablePos + i - 1] = p_sHWInfoIPAddr THEN
			IF p_bOpsRun THEN
				tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 1;	//Leader Run
			ELSE
				tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 2;	//Leader Stop
			END_IF
		ELSIF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].bSectionLeader = TRUE THEN
			IF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Run THEN
				tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 1;	//Section Leader Run
			ELSE
				tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 2;	//Section Leader Stop
			END_IF
		ELSIF p_tyLFLeaderFollowerInfo[tyP0700Table.uiTablePos + i - 1].bOnline = FALSE THEN
			tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 3;	//Offline
		ELSE
			IF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Run THEN
				IF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Warning THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 4;	//Warning
				ELSE
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 1;	//Run
				END_IF
			ELSE
				IF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=InError THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 2;	//Error
				ELSIF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Warning THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 4;	//Warning
				ELSIF p_tyLFLeaderFollowerToLeaderTag[tyP0700Table.uiTablePos + i - 1].eCurrMachineStat=Manual THEN
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 6;	//Manual
				ELSE
					tyP0700LFCtrl.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor	:= 5;	//Stop
				END_IF
			END_IF
		END_IF
		
	END_FOR
	
END_ACTION
