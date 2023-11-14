
ACTION Act_OptP0400Table:
	
	//Call Table FB
	fbP0400Table.sVisuNm			:= tyP0400Table.sVisuNm;
	fbP0400Table.udiWorkAreaStartX	:= 359;
	fbP0400Table.udiWorkAreaEndX	:= 770;
	fbP0400Table.udiWorkAreaStartY	:= 93;
	fbP0400Table.udiWorkAreaEndY	:= 415;
	fbP0400Table.udiMinXDist		:= 20;
	fbP0400Table.udiMinYDist		:= 20;
	fbP0400Table.uiSlideScale		:= c_uiP0400TableSize;
	fbP0400Table.iTotalData			:= UDINT_TO_INT(c_udiProdRcpMax);;
	fbP0400Table.iTotalRow			:= c_uiP0400TableSize;
	fbP0400Table(uiSliderStatus := tyP0400ProdSel.tyProdSel.tyTableRecipe.tyUISlider.uiRtStat , a_tyUIHotspot := tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyHotspot , uiTablePos := tyP0400Table.uiTablePos , iSliderPos := tyP0400ProdSel.tyProdSel.tyTableRecipe.tyUISlider.iValue);
	
	tyP0400Table.uiSelectedRow		:= fbP0400Table.uiSelectedRow;
	tyP0400Table.bTableActive		:= fbP0400Table.bTableActive;
	tyP0400Table.bSliderActive		:= fbP0400Table.bSliderActive;
	
	//Table Content

			
	IF tyP0400Table.bTableActive = TRUE OR tyP0400Table.bSliderActive = TRUE OR bUpdateP0400Table THEN
		FOR i := 1 TO c_uiP0400TableSize DO
			IF tyP0400ProdSel.tyProdSel.tyBtnSort.bValue THEN
				
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpSortedList[tyP0400Table.uiTablePos + i - 1].sRcpNm;
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpSortedList[tyP0400Table.uiTablePos + i - 1].sDisplayInfo;
				
			ELSE
				
			IF tyP0400ProdSel.tyProdSel.tyStringSearch.sValue = '' THEN
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpCurrList[tyP0400Table.uiTablePos + i - 1].sRcpNm;
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpCurrList[tyP0400Table.uiTablePos + i - 1].sDisplayInfo;
			ELSE
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpFilterList[tyP0400Table.uiTablePos + i - 1].sRcpNm;
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpFilterList[tyP0400Table.uiTablePos + i - 1].sDisplayInfo;
				END_IF
				
			END_IF
		END_FOR
		
		IF bUpdateP0400Table THEN
			bUpdateP0400Table := FALSE;
		END_IF
		
	END_IF
	
	//Selected Row
	IF tyP0400Table.uiSelectedRow <> tyP0400Table.uiSelectedRowOld THEN
		FOR i := 1 TO c_uiP0400TableSize DO
			IF tyP0400Table.uiSelectedRow = i THEN
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].usiColor	:= 1;
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].usiColor	:= 1;
			ELSE
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].usiColor	:= 0;
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].usiColor	:= 0;
			END_IF	
		END_FOR
		
		tyP0400Table.uiSelectedRowOld	:= tyP0400Table.uiSelectedRow;
	END_IF
		
END_ACTION
