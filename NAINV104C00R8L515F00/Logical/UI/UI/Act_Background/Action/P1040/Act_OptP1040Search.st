
ACTION Act_OptP1040Search:
	
	//Search Input Valid
	IF tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl = TRUE THEN
		
		IF tyP1040ProdSet.tyProdSet.tyStringSearch.sValue = '' THEN
			
			FOR i := 1 TO c_uiP1040TableSize DO
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpCurrList[tyP1040Table.uiTablePos + i - 1].sRcpNm;
				tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpCurrList[tyP1040Table.uiTablePos + i - 1].sDisplayInfo;
			END_FOR
			
			tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl	:= FALSE;
			bRefreshProdRcpDetail								:= TRUE;
			
			IF tyP1040ProdSet.tyProdSet.tyBtnSort.bValue THEN
				bFilterSortP1040	:= TRUE;
			END_IF

		ELSE
			
			tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat	:= FALSE;
			tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat		:= FALSE;
			tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat	:= FALSE;
			
			sProdRcpSearch	:= tyP1040ProdSet.tyProdSet.tyStringSearch.sValue;
			
			eProdRcpAct	:= ProdRcpActFilter;
			
			IF p_eProdRcpStat = ProdRcpActFilter AND p_eProdRcpStatus = Done THEN
				eProdRcpAct	:= ProdRcpActIdle;
				
				FOR i := 1 TO c_uiP1040TableSize DO
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpFilterList[tyP1040Table.uiTablePos + i - 1].sRcpNm;
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpFilterList[tyP1040Table.uiTablePos + i - 1].sDisplayInfo;
				END_FOR
				
				//Unmask Table
				tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat	:= TRUE;
				tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat		:= FALSE;
				tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat	:= TRUE;
				
				//Reset
				tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl	:= FALSE;
				bRefreshProdRcpDetail								:= TRUE;
				
				IF tyP1040ProdSet.tyProdSet.tyBtnSort.bValue THEN
					bFilterSortP1040	:= TRUE;
				END_IF
				
			ELSIF p_eProdRcpStatus = Error THEN
				
				FOR i := 1 TO c_uiP1040TableSize DO
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= '';
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= '';
				END_FOR
				
				p_tyC0008MsgBox ACCESS ADR (tyP1040ProdSet.tyMsgBoxListErr);
				
				IF tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl	:= TRUE;
					tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bValue	:= TRUE;
					
					p_tyC0008MsgBox ACCESS ADR (tyP1040ProdSet.tyMsgBoxHide);
					
					//Unmask Table
					tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat	:= TRUE;
					tyP1040ProdSet.tyProdSet.tyBtnSave.uiMaskRtStat		:= FALSE;
					tyP1040ProdSet.tyProdSet.tyBtnDelete.uiMaskRtStat	:= TRUE;
					
					//Reset
					tyP1040ProdSet.tyProdSet.tyStringSearch.bRtCompl	:= FALSE;
					bRefreshProdRcpDetail								:= TRUE;
				END_IF
				
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
