
ACTION Act_OptP1040Sort:	
	
	IF tyP1040ProdSet.tyProdSet.tyBtnSort.bValue THEN
		tyP1040ProdSet.tyProdSet.tyBtnSort.usiTxtIdx 	:= 1;
		
	ELSE
		tyP1040ProdSet.tyProdSet.tyBtnSort.usiTxtIdx 	:= 0;
	
	END_IF
	
	IF tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl THEN
		bUpdateP1040LoadData := TRUE;
	END_IF
	
	IF tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl OR (bFilterSortP1040 AND p_eProdRcpStat<> ProdRcpActFilter) THEN
		
		IF tyP1040ProdSet.tyProdSet.tyBtnSort.bValue THEN
	
			tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat.0	:= FALSE;
			
			sProdRcpSearch	:= tyP1040ProdSet.tyProdSet.tyStringSearch.sValue;
			
			eProdRcpAct	:= ProdRcpActSort;
			
			
			IF p_eProdRcpStat = ProdRcpActSort AND p_eProdRcpStatus = Done THEN
				eProdRcpAct		:= ProdRcpActIdle;
					
				FOR i := 1 TO c_uiP1040TableSize DO
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue	:= p_tyProdRcpSortedList[tyP1040Table.uiTablePos + i - 1].sRcpNm;
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue	:= p_tyProdRcpSortedList[tyP1040Table.uiTablePos + i - 1].sDisplayInfo;
				END_FOR
					
				bFilterSortP1040	:= FALSE;
					
				//Unmask
				tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat.0	:= TRUE;
					
				tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl := FALSE;
					
			ELSIF p_eProdRcpStatus = Error THEN
				FOR i := 1 TO c_uiP1040TableSize DO
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol0[i].sValue		:= UINT_TO_STRING(tyP1040Table.uiTablePos + i - 1);
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol1[i].sValue		:= '';
					tyP1040ProdSet.tyProdSet.tyTableRecipe.a_tyStringDataCol2[i].sValue		:= '';
				END_FOR
					
				p_tyC0008MsgBox ACCESS ADR (tyP1040ProdSet.tyMsgBoxListErr);
				
				bFilterSortP1040	:= FALSE;
					
				IF tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl = TRUE THEN
					tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bRtCompl 		:= TRUE;
					tyP1040ProdSet.tyMsgBoxListErr.tyBtnNo.bValue			:= TRUE;
						
					p_tyC0008MsgBox ACCESS ADR (tyP1040ProdSet.tyMsgBoxHide);
						
					//Unmask
					tyP1040ProdSet.tyProdSet.tyTableRecipe.uiMaskRtStat.0	:= TRUE;
						
					//Reset
					tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl := FALSE;
				END_IF
			END_IF
			
		ELSE
			
			bUpdateP1040Table	:= TRUE;
			
			tyP1040ProdSet.tyProdSet.tyBtnSort.bRtCompl := FALSE;
			
		END_IF
		
	END_IF
	
		
	
			
	
END_ACTION
