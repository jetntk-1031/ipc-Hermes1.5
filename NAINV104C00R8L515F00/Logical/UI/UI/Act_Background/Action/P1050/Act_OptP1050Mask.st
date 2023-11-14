
ACTION Act_OptP1050Mask: 

	IF tyP1050LFSet.tyLdr.tyBtnOnline.bRtCompl THEN
		tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat				:= FALSE;
		
	ELSIF tyP1050LFSet.tyLdr.tyBtnOffline.bRtCompl THEN
		tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat				:= FALSE;
		
	ELSIF tyP1050LFSet.tyLdr.tyBtnDelete.bRtCompl THEN
		tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat				:= FALSE;
		
	ELSIF tyP1050LFSet.tyLdr.tyBtnShftUp.bRtCompl THEN
		tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat				:= FALSE;
		
	ELSIF tyP1050LFSet.tyLdr.tyBtnShftDwn.bRtCompl THEN
		tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat				:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat					:= FALSE;
		tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat				:= FALSE;
		
	ELSE
		tyP1050LFSet.tyLdr.tyBtnEdit.uiMaskRtStat					:= TRUE;
		tyP1050LFSet.tyLdr.tyTable1List.uiMaskRtStat				:= TRUE;
		
		IF tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow].sValue = '' THEN
			tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat				:= FALSE;
			tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat			:= FALSE;
			tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat				:= FALSE;
			tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat				:= FALSE;
			tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat			:= FALSE;
			
		ELSE
			tyP1050LFSet.tyLdr.tyBtnDelete.uiMaskRtStat				:= TRUE;
			
			IF tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow].sValue = '0000' THEN
				tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat			:= FALSE;
				tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat		:= FALSE;
				
			ELSE
				IF tyP1050LFSet.tyLdr.tyTable1List.a_tyTxtDataCol3[tyP1050Table.uiSelectedRow].usiValueIdx = 2 THEN
					tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat		:= FALSE;
					tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat	:= TRUE;
				ELSE
					tyP1050LFSet.tyLdr.tyBtnOnline.uiMaskRtStat		:= TRUE;
					tyP1050LFSet.tyLdr.tyBtnOffline.uiMaskRtStat	:= FALSE;
				END_IF
				
			END_IF
			
			//Shift Up
			IF tyP1050Table.uiSelectedRow = 1 AND tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[1].sValue = '1' THEN
				tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat			:= FALSE;
			ELSE		
				tyP1050LFSet.tyLdr.tyBtnShftUp.uiMaskRtStat			:= TRUE;
			END_IF
			
			//Shift Down
			IF tyP1050Table.uiSelectedRow = c_uiP1050TableSize AND STRING_TO_UINT(tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol0[c_uiP1050TableSize].sValue) = c_diLFClntNum THEN
				tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat		:= FALSE;
			ELSE
				IF tyP1050LFSet.tyLdr.tyTable1List.a_tyStringDataCol2[tyP1050Table.uiSelectedRow+1].sValue = '' THEN
					tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat		:= FALSE;
				ELSE
					tyP1050LFSet.tyLdr.tyBtnShftDwn.uiMaskRtStat		:= TRUE;
				END_IF
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
