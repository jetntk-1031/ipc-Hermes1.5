
ACTION Act_OptP1040Table:
	
	//Call Table FB
	fbP1040Table.sVisuNm			:= tyP1040Table.sVisuNm;
	fbP1040Table.udiWorkAreaStartX	:= 359;
	fbP1040Table.udiWorkAreaEndX	:= 770;
	fbP1040Table.udiWorkAreaStartY	:= 93;
	fbP1040Table.udiWorkAreaEndY	:= 415;
	fbP1040Table.udiMinXDist		:= 20;
	fbP1040Table.udiMinYDist		:= 20;
	fbP1040Table.uiSlideScale		:= c_uiP1040TableSize;
	fbP1040Table.iTotalData			:= UDINT_TO_INT(c_udiProdRcpMax);
	fbP1040Table.iTotalRow			:= c_uiP1040TableSize;
	fbP1040Table.p_uiSliderStatus	:= ADR(tyP1040ProdSet.tyProdSet.tyTableRecipe.tyUISlider.uiRtStat);
	fbP1040Table.pa_tyUIHotspot		:= ADR(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyHotspot);
	fbP1040Table.p_uiTablePos		:= ADR(tyP1040Table.uiTablePos);
	fbP1040Table.p_iSliderPos		:= ADR(tyP1040ProdSet.tyProdSet.tyTableRecipe.tyUISlider.iValue);
	fbP1040Table.p_uiSelectedRow	:= ADR(tyP1040Table.uiSelectedRow);
	fbP1040Table.p_bTableActive		:= ADR(tyP1040Table.bTableActive);
	fbP1040Table.p_bSliderActive	:= ADR(tyP1040Table.bSliderActive);
	fbP1040Table;
	
	//Table Content
	IF tyP1040Table.bTableActive = TRUE OR tyP1040Table.bSliderActive = TRUE OR bRefreshProdRcpTable = TRUE OR bUpdateP1040Table THEN
		FOR i := 1 TO c_uiP1040TableSize DO
			IF tyP1040ProdSet.tyProdSet.tyBtnSort.bValue THEN
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	    := UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue		:= p_tyProdRcpSortedList[tyP1040Table.uiTablePos + i - 1].sRcpNm;
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue		:= p_tyProdRcpSortedList[tyP1040Table.uiTablePos + i - 1].sDisplayInfo;
			ELSE
			
			IF tyP1040ProdSet.tyProdSet.tyStringSearch.sValue = '' THEN
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpCurrList[tyP1040Table.uiTablePos + i - 1].sRcpNm;
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpCurrList[tyP1040Table.uiTablePos + i - 1].sDisplayInfo;
			ELSE
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpFilterList[tyP1040Table.uiTablePos + i - 1].sRcpNm;
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpFilterList[tyP1040Table.uiTablePos + i - 1].sDisplayInfo;
				END_IF
			END_IF
			
		END_FOR
		
		IF bUpdateP1040Table THEN
			bUpdateP1040Table := FALSE;
		END_IF
	END_IF
	
	//Selected Row
	IF tyP1040Table.uiSelectedRow <> tyP1040Table.uiSelectedRowOld THEN
		
		FOR i := 1 TO c_uiP1040TableSize DO
			
			IF tyP1040Table.uiSelectedRow = i THEN
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].usiColor	:= 1;
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].usiColor	:= 1;
			ELSE
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].usiColor	:= 0;
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].usiColor	:= 0;
			END_IF	
			
		END_FOR
		
		tyP1040Table.uiSelectedRowOld	:= tyP1040Table.uiSelectedRow;
		
	END_IF
	
END_ACTION
