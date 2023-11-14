
ACTION Act_OptP1080Table:
	
	fbP1080Table.sVisuNm			:= tyP1080Table.sVisuNm;
	fbP1080Table.udiWorkAreaStartX	:= 50;
	fbP1080Table.udiWorkAreaEndX	:= 497;
	fbP1080Table.udiWorkAreaStartY	:= 109;
	fbP1080Table.udiWorkAreaEndY	:= 458;
	fbP1080Table.udiMinXDist		:= 20;
	fbP1080Table.udiMinYDist		:= 20;
	fbP1080Table.uiSlideScale		:= c_uiP1080TableSize;
	fbP1080Table.iTotalData			:= UDINT_TO_INT(c_udiUsrMgmtMax);
	fbP1080Table.iTotalRow			:= c_uiP1080TableSize;
	fbP1080Table(uiSliderStatus := tyP1080UsrMgmt.tyUsrMgmt.tyTableList.tyUISlider.uiRtStat , a_tyUIHotspot := tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyHotspot , uiTablePos := tyP1080Table.uiTablePos , iSliderPos := tyP1080UsrMgmt.tyUsrMgmt.tyTableList.tyUISlider.iValue);

	tyP1080Table.uiSelectedRow		:= fbP1080Table.uiSelectedRow;
	tyP1080Table.bTableActive		:= fbP1080Table.bTableActive;
	tyP1080Table.bSliderActive		:= fbP1080Table.bSliderActive;

	//Table Content
	IF tyP1080Table.bTableActive = TRUE OR tyP1080Table.bSliderActive = TRUE OR bRefreshUsrMgmtTable = TRUE THEN
		FOR i := 1 TO c_uiP1080TableSize DO

			tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol0[i].sValue				:= UINT_TO_STRING(tyP1080Table.uiTablePos + i - 1);
			
			
			CASE tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.usiValueIdx OF
				// User All
				0:
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i].sValue		:= p_tyUsrMgmtAllList[tyP1080Table.uiTablePos + i - 1].sUsrNm;
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i].usiValueIdx		:= DINT_TO_USINT(p_tyUsrMgmtAllList[tyP1080Table.uiTablePos + i - 1].eUsrLvl + 1);
				// User Level 2
				1:
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i].sValue		:= p_tyUsrMgmtLv2List[tyP1080Table.uiTablePos + i - 1].sUsrNm;
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i].usiValueIdx		:= DINT_TO_USINT(p_tyUsrMgmtLv2List[tyP1080Table.uiTablePos + i - 1].eUsrLvl + 1);
				// User Level 3
				2:
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i].sValue		:= p_tyUsrMgmtLv3List[tyP1080Table.uiTablePos + i - 1].sUsrNm;
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i].usiValueIdx		:= DINT_TO_USINT(p_tyUsrMgmtLv3List[tyP1080Table.uiTablePos + i - 1].eUsrLvl + 1);
				// User Admin
				3:
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i].sValue		:= p_tyUsrMgmtAdminList[tyP1080Table.uiTablePos + i - 1].sUsrNm;
					tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i].usiValueIdx		:= DINT_TO_USINT(p_tyUsrMgmtAdminList[tyP1080Table.uiTablePos + i - 1].eUsrLvl + 1);
			END_CASE		
		END_FOR
		bRefreshUsrMgmtTable 			:= FALSE;
	END_IF
	
	IF tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.bRtCompl = TRUE THEN
		tyP1080UsrMgmt.tyUsrMgmt.tyDrpDnLvl.bRtCompl	:= FALSE;
		bRefreshUsrMgmtTable 							:= TRUE;
	END_IF
	
	//Selected Row
	IF tyP1080Table.uiSelectedRow <> tyP1080Table.uiSelectedRowOld THEN
		FOR i := 1 TO c_uiP1080TableSize DO
			IF tyP1080Table.uiSelectedRow = i THEN
				tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i].usiColor		:= 1;
				tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i].usiColor		:= 1;
				
			ELSE
				tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i].usiColor		:= 0;
				tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i].usiColor		:= 0;
				
			END_IF
		END_FOR
		
		tyP1080Table.uiSelectedRowOld	:= tyP1080Table.uiSelectedRow;
		
	END_IF
	
	IF tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[tyP1080Table.uiSelectedRow].sValue = '' THEN
		fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat));
		fUIInRtStatOff(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.uiMaskRtStat));
	ELSE
		fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyBtnEditDetail.uiMaskRtStat));
		fUIInRtStatHide(ADR(tyP1080UsrMgmt.tyUsrMgmt.tyBtnDeleteUsr.uiMaskRtStat));
	END_IF
	
END_ACTION
