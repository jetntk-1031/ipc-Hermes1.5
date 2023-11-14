
ACTION Act_OptP0400Sort:	
	
	IF tyP0400ProdSel.tyProdSel.tyBtnSort.bValue THEN
		tyP0400ProdSel.tyProdSel.tyBtnSort.usiTxtIdx 	:= 1;
	ELSE
		tyP0400ProdSel.tyProdSel.tyBtnSort.usiTxtIdx 	:= 0;
	END_IF
		
	
	IF tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl OR (bFilterSortP0400 AND p_eProdRcpStat<> ProdRcpActFilter) THEN
		
		IF tyP0400ProdSel.tyProdSel.tyBtnSort.bValue THEN
	
			tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat.0	:= FALSE;
			
			sProdRcpSearch	:= tyP0400ProdSel.tyProdSel.tyStringSearch.sValue;
			
			eProdRcpAct	:= ProdRcpActSort;
			
			
			IF p_eProdRcpStat = ProdRcpActSort AND p_eProdRcpStatus = Done THEN
				eProdRcpAct		:= ProdRcpActIdle;
					
				FOR i := 1 TO c_uiP1040TableSize DO
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpSortedList[tyP0400Table.uiTablePos + i - 1].sRcpNm;
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpSortedList[tyP0400Table.uiTablePos + i - 1].sDisplayInfo;
				END_FOR
					
				bFilterSortP0400	:= FALSE;
					
				//Unmask
				tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat.0	:= TRUE;
					
				tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl := FALSE;
					
			ELSIF p_eProdRcpStatus = Error THEN
				FOR i := 1 TO c_uiP0400TableSize DO
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol0[i].sValue		:= UINT_TO_STRING(tyP0400Table.uiTablePos + i - 1);
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol1[i].sValue		:= '';
					tyP0400ProdSel.tyProdSel.tyTableRecipe.a_tyStringDataCol2[i].sValue		:= '';
				END_FOR
					
				p_tyC0008MsgBox ACCESS ADR (tyP0400ProdSel.tyMsgBoxListErr);
				
				bFilterSortP0400	:= FALSE;
					
				IF tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bRtCompl 		:= TRUE;
					tyP0400ProdSel.tyMsgBoxListErr.tyBtnNo.bValue			:= TRUE;
						
					p_tyC0008MsgBox ACCESS ADR (tyP0400ProdSel.tyMsgBoxHide);
						
					//Unmask
					tyP0400ProdSel.tyProdSel.tyTableRecipe.uiMaskRtStat.0	:= TRUE;
						
					//Reset
					tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl := FALSE;
				END_IF
			END_IF
			
		ELSE
			
			bUpdateP0400Table	:= TRUE;
			
			tyP0400ProdSel.tyProdSel.tyBtnSort.bRtCompl := FALSE;
			
		END_IF
		
	END_IF
	
		
	
			
	
END_ACTION
