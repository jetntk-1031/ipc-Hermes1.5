(** 2019-06-28 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		LCSActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				usiStep		:= 0;
				bAccDataMnl	:= FALSE;
				bChkLmt		:= FALSE;
				
				tyInfoData.sProgNm		:= '';
				tyInfoData.udiCode		:= 0;
				tyInfoData.eSeverity	:= AlmSeverityNA;
				tyInfoData.sAlmMsg		:= '';
				
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus			:= Idle;
			udiPLCStatus	:= 65534;
		
		LCSActRunProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
							
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:
						//Check Limit
						bChkLmt	:= TRUE;
						
						IF p_bChkLmtOK = TRUE THEN
							usiStep			:= 1;
						ELSIF p_bChkLmtNG = TRUE THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10010;	//Out Of Range While Accepting New Recipe
						END_IF
						
					1:
						//Manual Accept Data Check
						IF p_bMnlAccData = TRUE THEN
							bAccDataMnl	:= TRUE;
				
							//Info Message
							tyInfoData.sProgNm		:= p_sProgNm;
							tyInfoData.udiCode		:= 10000;
							tyInfoData.eSeverity	:= AlmSeverityInfo;
							tyInfoData.sAlmMsg		:= p_sInfoMsg;
			
							IF p_bAccData = TRUE THEN
								p_bAccData 	:= FALSE; // 2023_07_06_Debug for Manual Accept Data automatically accept after product change many times
								bAccDataMnl	:= FALSE;
								usiStep		:= 2;
							END_IF
						ELSE
							bAccDataMnl	:= FALSE;
							p_bAccData	:= FALSE; // 2023_07_06_Debug for Manual Accept Data automatically accept after product change many times
							usiStep		:= 2;
						END_IF
							
					2:
						//Accept New Recipe Condition
						IF p_bAccNewRcpCond = TRUE THEN
							usiStep	:= 3;
						ELSE
							//Info Message
							tyInfoData.sProgNm		:= p_sProgNm;
							tyInfoData.udiCode		:= 10000;
							tyInfoData.eSeverity	:= AlmSeverityInfo;
							tyInfoData.sAlmMsg		:= p_sInfoMsg;
						END_IF
			
					3:
						//Accept New Recipe
						p_tyCurrProdParam	:= p_tyLCSProdRcpInfo;
						
						IF p_bLCSSectionLeaderEn = TRUE THEN
							p_bMcParamSectionLdr	:= TRUE;
							p_bUIBtnSectionLdr		:= TRUE;
						ELSE
							p_bMcParamSectionLdr	:= FALSE;
							p_bUIBtnSectionLdr		:= FALSE;
						
						END_IF

						usiStep	:= 4;
		
					4:
						//Clear Info Message
						tyInfoData.sProgNm		:= '';
						tyInfoData.udiCode		:= 0;
						tyInfoData.eSeverity	:= AlmSeverityNA;
						tyInfoData.sAlmMsg		:= '';
			
						usiStep	:= 0;
						
						eStatus			:= Done;
						udiPLCStatus	:= 0;
			
				END_CASE
		
			END_IF
		
		ELSE
			IF eStatus = Idle OR eStatus = Busy THEN		
				eStatus	:= Done;
			END_IF
		
	END_CASE
	
END_ACTION
