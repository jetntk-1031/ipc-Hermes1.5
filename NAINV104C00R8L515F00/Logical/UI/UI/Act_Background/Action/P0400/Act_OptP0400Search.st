
ACTION Act_OptP0400Search:
	
	IF tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl = TRUE THEN	//Search Input Valid
		IF tyP0400ProdSel.tyProdSel.tyStringSearch.sValue = '' THEN
			FOR i := 1 TO c_uiP0400TableSize DO
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpCurrList[tyP0400Table.uiTablePos + i - 1].sRcpNm;
				tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpCurrList[tyP0400Table.uiTablePos + i - 1].sDisplayInfo;
			END_FOR
			
			tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl	:= FALSE;
			
			IF tyP0400ProdSel.tyProdSel.tyBtnSort.bValue THEN
				bFilterSortP0400	:= TRUE;
			END_IF
			
		ELSE
			//Mask
			tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat.0	:= FALSE;
			
			sProdRcpSearch	:= tyP0400ProdSel.tyProdSel.tyStringSearch.sValue;
			
			eProdRcpAct	:= ProdRcpActFilter;
			
			IF p_eProdRcpStat = ProdRcpActFilter AND p_eProdRcpStatus = Done THEN
				eProdRcpAct		:= ProdRcpActIdle;
				
				FOR i := 1 TO c_uiP0400TableSize DO
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpFilterList[tyP0400Table.uiTablePos + i - 1].sRcpNm;
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpFilterList[tyP0400Table.uiTablePos + i - 1].sDisplayInfo;
				END_FOR
				
				//Unmask
				tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat.0	:= TRUE;
				
				tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl		:= FALSE;
				
				IF tyP0400ProdSel.tyProdSel.tyBtnSort.bValue THEN
					bFilterSortP0400	:= TRUE;
				END_IF
				
			ELSIF p_eProdRcpStatus = Error THEN
				FOR i := 1 TO c_uiP0400TableSize DO
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue		:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue		:= '';
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue		:= '';
				END_FOR
				
				p_tyC0008MsgBox ACCESS ADR (tyP0400ProdSel.tyMsgBoxListErr);
				
				IF tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl 		:= TRUE;
					tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bValue			:= TRUE;
					
					p_tyC0008MsgBox ACCESS ADR (tyP0400ProdSel.tyMsgBoxHide);
					
					//Unmask
					tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat.0	:= TRUE;
					
					//Reset
					tyP0400ProdSel.tyProdSel.tyStringSearch.bRtCompl		:= FALSE;
				END_IF
			END_IF
		END_IF
	END_IF
	
END_ACTION
