
ACTION Act_OptP1040LoadData:
	
	udiP1040SelectedRow	:= STRING_TO_UDINT(tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[tyP1040Table.uiSelectedRow].sValue);
	
	IF udiP1040SelectedRow <> udiP1040SelectedRowOld OR bRefreshProdRcpDetail = TRUE OR bUpdateP1040LoadData OR bUpdateP1040LoadData THEN
		
		IF tyP1040ProdSet.tyProdSet.tyStringSearch.sValue = '' THEN
			
			IF tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow].sValue <> '' THEN
				//Update Recipe Data
				IF tyP1040ProdSet.tyProdSet.tyBtnSort.bValue THEN
					tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue				:= p_tyProdRcpSortedList[udiP1040SelectedRow].sRcpNm;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue					:= p_tyProdRcpSortedList[udiP1040SelectedRow].diWidthInUM;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue				:= p_tyProdRcpSortedList[udiP1040SelectedRow].diWidthInUM2;
					tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx				:= p_tyProdRcpSortedList[udiP1040SelectedRow].usiMcMod;
					tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx			:= p_tyProdRcpSortedList[udiP1040SelectedRow].usiFlippedBrd;
					tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue				:= p_tyProdRcpSortedList[udiP1040SelectedRow].sMatchCode;
				ELSE	
					tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue				:= p_tyProdRcpCurrList[udiP1040SelectedRow].sRcpNm;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue					:= p_tyProdRcpCurrList[udiP1040SelectedRow].diWidthInUM;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue				:= p_tyProdRcpCurrList[udiP1040SelectedRow].diWidthInUM2;
					tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx				:= p_tyProdRcpCurrList[udiP1040SelectedRow].usiMcMod;
					tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx			:= p_tyProdRcpCurrList[udiP1040SelectedRow].usiFlippedBrd;
					tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue				:= p_tyProdRcpCurrList[udiP1040SelectedRow].sMatchCode;
				END_IF
			ELSE
				//Defaut Recipe Data
				tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue				:= '';
				tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue					:= 100000;
				tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue				:= 100000;
				tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx				:= p_tyMcParamCurr.usiDefaultMcMod;
				tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx			:= p_tyMcParamCurr.usiDefaultFlippedBrd;
				tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue				:= '';
			END_IF
			
		ELSE
			
			IF tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[tyP1040Table.uiSelectedRow].sValue <> '' THEN
				//Update Recipe Data
				IF tyP1040ProdSet.tyProdSet.tyBtnSort.bValue THEN
					tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue				:= p_tyProdRcpSortedList[udiP1040SelectedRow].sRcpNm;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue					:= p_tyProdRcpSortedList[udiP1040SelectedRow].diWidthInUM;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue				:= p_tyProdRcpSortedList[udiP1040SelectedRow].diWidthInUM2;
					tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx				:= p_tyProdRcpSortedList[udiP1040SelectedRow].usiMcMod;
					tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx			:= p_tyProdRcpSortedList[udiP1040SelectedRow].usiFlippedBrd;
					tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue				:= p_tyProdRcpSortedList[udiP1040SelectedRow].sMatchCode;
					
				ELSE
					tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue				:= p_tyProdRcpFilterList[udiP1040SelectedRow].sRcpNm;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue					:= p_tyProdRcpFilterList[udiP1040SelectedRow].diWidthInUM;
					tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue				:= p_tyProdRcpFilterList[udiP1040SelectedRow].diWidthInUM2;
					tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx				:= p_tyProdRcpFilterList[udiP1040SelectedRow].usiMcMod;
					tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx			:= p_tyProdRcpFilterList[udiP1040SelectedRow].usiFlippedBrd;
					tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue				:= p_tyProdRcpFilterList[udiP1040SelectedRow].sMatchCode;
				END_IF
				
			ELSE
				//Defaut Recipe Data
				tyP1040ProdSet.tyProdSet.tyStringRecipeNm.sValue				:= '';
				tyP1040ProdSet.tyProdSet.tyNumProdWidth.diValue					:= 100000;
				tyP1040ProdSet.tyProdSet.tyNumProdWidth2.diValue				:= 100000;
				tyP1040ProdSet.tyProdSet.tyDrpDnMcMode.usiValueIdx				:= p_tyMcParamCurr.usiDefaultMcMod;
				tyP1040ProdSet.tyProdSet.tyDrpDnFlippedBrd.usiValueIdx			:= p_tyMcParamCurr.usiDefaultFlippedBrd;
				tyP1040ProdSet.tyProdSet.tyStringMatchCode.sValue				:= '';
			END_IF
			
		END_IF
		
		bUpdateP1040LoadData	:= FALSE;
		bRefreshProdRcpDetail	:= FALSE;
		udiP1040SelectedRowOld	:= udiP1040SelectedRow;
		
		fUIInRtStatOff(ADR(tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat));
		
	END_IF
	
END_ACTION
