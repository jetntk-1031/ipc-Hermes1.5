
ACTION Act_OptP1050Table:
	
	//Call Table FB
	fbP1050Table.sVisuNm			:= tyP1050Table.sVisuNm;
	fbP1050Table.udiWorkAreaStartX	:= 96;
	fbP1050Table.udiWorkAreaEndX	:= 554;
	fbP1050Table.udiWorkAreaStartY	:= 75;
	fbP1050Table.udiWorkAreaEndY	:= 455;
	fbP1050Table.udiMinXDist		:= 20;
	fbP1050Table.udiMinYDist		:= 20;
	fbP1050Table.uiSlideScale		:= c_uiP1050TableSize;
	fbP1050Table.iTotalData			:= UDINT_TO_INT(c_diLFClntNum);
	fbP1050Table.iTotalRow			:= c_uiP1050TableSize;
	fbP1050Table(uiSliderStatus := tyP1050LFSet.tyLdr.tyTable1List.tyUISlider.uiRtStat , a_tyUIHotspot := tyP1050LFSet.tyLdr.tyTable1List.a_tyHotspot , uiTablePos := tyP1050Table.uiTablePos , iSliderPos := tyP1050LFSet.tyLdr.tyTable1List.tyUISlider.iValue);
	
	tyP1050Table.uiSelectedRow		:= fbP1050Table.uiSelectedRow;
	tyP1050Table.bTableActive		:= fbP1050Table.bTableActive;
	tyP1050Table.bSliderActive		:= fbP1050Table.bSliderActive;
	
	//Table Content
	IF tyP1050Table.bTableActive = TRUE OR tyP1050Table.bSliderActive = TRUE OR usiTableShftStep = 3 OR bUpdateP1050Table THEN
		FOR i := 1 TO c_uiP1050TableSize DO
			tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[i].sValue			:= UINT_TO_STRING(tyP1050Table.uiTablePos + i - 1);
			tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue			:= p_tyMcParamCurr.a_sLFIPAddr[tyP1050Table.uiTablePos + i - 1];
			
			IF tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue = '' THEN
				tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 0;
			ELSIF tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i].sValue = '0000' THEN
				tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= 3;
			ELSE
				tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiValueIdx	:= (BOOL_TO_USINT(p_tyMcParamCurr.a_bLFOnline[tyP1050Table.uiTablePos + i - 1])) + 1;
			END_IF
			
		END_FOR
		
		IF bUpdateP1050Table THEN
			bUpdateP1050Table := FALSE;
		END_IF
		
	END_IF
	
	//Selected Row
	IF tyP1050Table.uiSelectedRow <> tyP1050Table.uiSelectedRowOld THEN
		FOR i := 1 TO c_uiP1050TableSize DO
			IF tyP1050Table.uiSelectedRow = i THEN
				tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i].usiColor	:= 1;
				tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor		:= 1;
				
			ELSE
				tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[i].usiColor	:= 0;
				tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[i].usiColor		:= 0;
				
			END_IF
			
		END_FOR
		
		tyP1050Table.uiSelectedRowOld	:= tyP1050Table.uiSelectedRow;
		
	END_IF
	
END_ACTION
