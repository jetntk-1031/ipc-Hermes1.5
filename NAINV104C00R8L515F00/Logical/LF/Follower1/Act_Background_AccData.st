(** 2023-02-22 **)
ACTION Act_Background_AccData:		
	//Product Accept Data Request
	CASE usiProdAccDatStep OF
		0:
			//Check Error & Request Accept Data
			// If Product Name/Width Error, Check In Background To Update Data
			IF ((eStatus <> Error) AND (bProdAccDataReq = TRUE)) OR bProdRcpErr THEN
				sReqProdRcpNm		:= tyLeaderToFollowerTag.sReqProdRcpNm;
				diReqProdRcpWidth	:= tyLeaderToFollowerTag.diReqProdRcpWidth;
				usiProdAccDatStep	:= 1;
			END_IF
			
			IF bLeaderOnline=FALSE THEN
				tyInfoData.sProgNm		:= '';
				tyInfoData.udiCode		:= 0;
				tyInfoData.eSeverity	:= AlmSeverityNA;
				tyInfoData.sAlmMsg		:= '';
				
				bProdRcpErr 			:= FALSE;
				bProdRcpErrNotExist		:= FALSE;
				bProdRcpErrWidthMismatch:= FALSE;
			END_IF
			
		1:
			IF p_bInternalUse THEN
				usiProdAccDatStep	:= 2;
			ELSE
				//Check In List Of Recipe
				FOR i := 1 TO 2000 DO
					IF sReqProdRcpNm = '' THEN
						EXIT;
					ELSIF sReqProdRcpNm = pa_tyProdRcpList[i].sRcpNm  THEN
						EXIT;
					END_IF
				END_FOR
					
				IF sReqProdRcpNm = pa_tyProdRcpList[i].sRcpNm AND diReqProdRcpWidth <> pa_tyProdRcpList[i].diWidthInUM THEN
					//Width Mismatch	
					bProdRcpErr := TRUE;
					bProdRcpErrWidthMismatch:= TRUE;
					bProdRcpErrNotExist		:= FALSE;
					usiProdAccDatStep	:= 0;
				ELSIF i > 2000 THEN
					//Recipe Not Exist	
					bProdRcpErr := TRUE;
					bProdRcpErrNotExist	:= TRUE;
					bProdRcpErrWidthMismatch:= FALSE;				
					usiProdAccDatStep	:= 0;
				ELSE
					bProdRcpErr := FALSE;
					bProdRcpErrNotExist	:= FALSE;
					bProdRcpErrWidthMismatch:= FALSE;			
					usiProdAccDatStep	:= 2;
				END_IF 
				
				//Info Message
				IF bLeaderOnline=FALSE THEN
					tyInfoData.sProgNm		:= '';
					tyInfoData.udiCode		:= 0;
					tyInfoData.eSeverity	:= AlmSeverityNA;
					tyInfoData.sAlmMsg		:= '';
					
					bProdRcpErr 			:= FALSE;
					bProdRcpErrNotExist		:= FALSE;
					bProdRcpErrWidthMismatch:= FALSE;
				ELSE
					
					IF p_bInternalUse = FALSE THEN
						IF bLeaderInfo OR bFollowerInfo THEN
							tyInfoData.sProgNm		:= p_sProgNm;
							tyInfoData.udiCode		:= 10000;
							tyInfoData.eSeverity	:= AlmSeverityInfo;
							tyInfoData.sAlmMsg		:= p_sInfoMsg;
						ELSE
							tyInfoData.sProgNm		:= '';
							tyInfoData.udiCode		:= 0;
							tyInfoData.eSeverity	:= AlmSeverityNA;
							tyInfoData.sAlmMsg		:= '';
						END_IF
					ELSE
						IF p_sInfoMsg <> '' THEN
							tyInfoData.sProgNm		:= p_sProgNm;
							tyInfoData.udiCode		:= 10000;
							tyInfoData.eSeverity	:= AlmSeverityInfo;
							tyInfoData.sAlmMsg		:= p_sInfoMsg;
						ELSE
							tyInfoData.sProgNm		:= '';
							tyInfoData.udiCode		:= 0;
							tyInfoData.eSeverity	:= AlmSeverityNA;
							tyInfoData.sAlmMsg		:= '';
						END_IF
						
					END_IF
				END_IF	
			END_IF
		2:
			//Manual Accept Data Check
			IF bProdAccDataReq = TRUE THEN
				IF bAutoAccData = FALSE THEN
					bProdAccDataMnl	:= TRUE;
					
					//Info Message
					IF bLeaderOnline=FALSE THEN
						tyInfoData.sProgNm		:= '';
						tyInfoData.udiCode		:= 0;
						tyInfoData.eSeverity	:= AlmSeverityNA;
						tyInfoData.sAlmMsg		:= '';
					ELSE
						IF p_sInfoMsg <> '' THEN
							tyInfoData.sProgNm		:= p_sProgNm;
							tyInfoData.udiCode		:= 10000;
							tyInfoData.eSeverity	:= AlmSeverityInfo;
							tyInfoData.sAlmMsg		:= p_sInfoMsg;
						ELSE
							tyInfoData.sProgNm		:= '';
							tyInfoData.udiCode		:= 0;
							tyInfoData.eSeverity	:= AlmSeverityNA;
							tyInfoData.sAlmMsg		:= '';
						END_IF
					END_IF	
			
					IF p_bUIProdAccData = TRUE THEN
						p_bUIProdAccData 	:= FALSE; //2023_07_26_Debug for Manual Accept Data automatically accept after product change many times
						bProdAccDataMnl		:= FALSE;
						usiProdAccDatStep	:= 3;
					END_IF
				ELSE
					bProdAccDataMnl		:= FALSE;
					p_bUIProdAccData 	:= FALSE; //2023_07_26_Debug for Manual Accept Data automatically accept after product change many times
					usiProdAccDatStep	:= 3;
				END_IF
			ELSE
				bProdAccDataMnl		:= FALSE;
				usiProdAccDatStep	:= 6;
			END_IF
			
		3:
			//Accept New Recipe Condition
			IF bProdAccDataReq = TRUE THEN
				IF p_bAccNewRcpCond = TRUE THEN
					
					usiProdAccDatStep	:= 4;
				ELSE
					//Info Message
					IF bLeaderOnline=FALSE THEN
						tyInfoData.sProgNm		:= '';
						tyInfoData.udiCode		:= 0;
						tyInfoData.eSeverity	:= AlmSeverityNA;
						tyInfoData.sAlmMsg		:= '';
					ELSE
						IF p_sInfoMsg <> '' THEN
							tyInfoData.sProgNm		:= p_sProgNm;
							tyInfoData.udiCode		:= 10000;
							tyInfoData.eSeverity	:= AlmSeverityInfo;
							tyInfoData.sAlmMsg		:= p_sInfoMsg;
						ELSE
							tyInfoData.sProgNm		:= '';
							tyInfoData.udiCode		:= 0;
							tyInfoData.eSeverity	:= AlmSeverityNA;
							tyInfoData.sAlmMsg		:= '';
						END_IF
					END_IF
				END_IF
			ELSE
				usiProdAccDatStep	:= 6;
			END_IF
			
		4:
			//Accept New Recipe Name
			IF p_bInternalUse = TRUE THEN
				
				p_tyCurrProdRcp	:= p_tyInternalReqProdRcp;
				usiProdAccDatStep := 6;
			ELSE
				
				FOR i := 1 TO 2000 DO
					IF sReqProdRcpNm = '' THEN
						EXIT;
					ELSIF sReqProdRcpNm = pa_tyProdRcpList[i].sRcpNm THEN
						p_tyCurrProdRcp	:= pa_tyProdRcpList[i];
						
						EXIT;
					END_IF
				END_FOR
				
				IF i > 2000 THEN
					//Recipe Not Exist	
					bProdRcpErr := TRUE;
					bProdRcpErrNotExist	:= TRUE;	
				END_IF 
				usiProdAccDatStep	:= 5;
			END_IF

		5:
			(* Add *)
			p_tyProdRcpCurrRcpWr 	:= p_tyCurrProdRcp; 
			p_eLinkUIProdRcpAct 	:= ProdRcpActWriteCurrRcpParam;
			
			IF p_eProdRcpStat = ProdRcpActWriteCurrRcpParam AND p_eProdRcpStatus = Done THEN
				p_eLinkUIProdRcpAct := ProdRcpActIdle;
				usiProdAccDatStep := 6;
			END_IF
			
		6:
			//Clear Info Message
			tyInfoData.sProgNm		:= '';
			tyInfoData.udiCode		:= 0;
			tyInfoData.eSeverity	:= AlmSeverityNA;
			tyInfoData.sAlmMsg		:= '';
			
			usiProdAccDatStep	:= 0;
			
	END_CASE
	
END_ACTION
