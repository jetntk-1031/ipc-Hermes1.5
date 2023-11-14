(** 2021-08-01 **)
ACTION Act_Background_AccData: //Accept BoardAvailable Data from Upstream

	
	CASE usiAccDataStep OF
		0:
			//Request Accept Data
			IF bBoardChkReq AND eMainStatus <> Error AND bAccDataReq = TRUE THEN //bUSRdy = TRUE 
				usiAccDataStep	:= 1;
			END_IF
			
		1:
			//Manual Accept Data Check
			IF bAccDataReq = TRUE THEN
				IF p_bMcParamMnlAccData = TRUE THEN
					bAccDataMnl	:= TRUE;
					
					tyInfoData.sProgNm		:= p_sProgNm;
					tyInfoData.udiCode		:= 10000;
					tyInfoData.eSeverity	:= AlmSeverityInfo;
					tyInfoData.sAlmMsg		:= p_sInfoMsg;
					
					IF p_bUIAccData = TRUE THEN
						bAccDataMnl		:= FALSE;
						usiAccDataStep	:= 2;
					END_IF
				ELSE
					bAccDataMnl		:= FALSE;
					usiAccDataStep	:= 2;
				END_IF
			ELSE
				bAccDataMnl		:= FALSE;
				usiAccDataStep	:= 4;
			END_IF
			
		2:
			IF bAccDataReq = TRUE THEN
				IF p_bAccNewRcpCond = TRUE THEN //In Auto Mode, and empty
					usiAccDataStep	:= 3;
				ELSE
					//Info Message
					tyInfoData.sProgNm		:= p_sProgNm;
					tyInfoData.udiCode		:= 10000;
					tyInfoData.eSeverity	:= AlmSeverityInfo;
					tyInfoData.sAlmMsg		:= p_sInfoMsg;
				END_IF
			ELSE
				usiAccDataStep	:= 4;
			END_IF
			
		3:
			//Sync Recipe
			IF bOverWriteWidth = TRUE OR bOverWriteSlt = TRUE THEN
				
				//Accept New Recipe Width
				IF bOverWriteWidth = TRUE THEN
					p_tyProdRcpCurrRcp.diWidthInUM	:= diReqWidthInUM;
				END_IF
				
				//Accept New Recipe Slot
				IF bOverWriteSlt = TRUE THEN
					diReqMaxSltValue;
					diReqMinSltValue;
					diReqPitch;
				END_IF
				
			ELSE
				
				//Accept New Recipe Name
				FOR i := 1 TO 2000 DO
					IF sReqRecipeNm = pa_tyProdRcpList[i].sRcpNm THEN
						p_tyProdRcpCurrRcp	:= pa_tyProdRcpList[i];
						EXIT;
					END_IF
				END_FOR
				
				IF i > 2000 THEN
					//Recipe Not Exist
					eStatus4	:= Error;
					udiStatus4	:= 10169;	//New Recipe Not Found In Product Recipe List
					
					fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeNotification);
			
					tyNotificationSnd.tyAvl.bSeverity			:= TRUE;
					tyNotificationSnd.tyAvl.bNotificationCode	:= TRUE;
					tyNotificationSnd.tyAvl.bDescription		:= TRUE;
					tyNotificationSnd.tyData.eSeverity			:= HermesSeverityError; 
					tyNotificationSnd.tyData.iNotificationCode	:= UDINT_TO_INT(udiStatus4);
					tyNotificationSnd.tyData.sDescription		:= a_tyAlmText[udiStatus4].sAlmText;
					
				END_IF
				
			END_IF
		
			usiAccDataStep	:= 4;
				
		4:
			//Clear Info Message
			tyInfoData.sProgNm		:= '';
			tyInfoData.udiCode		:= 0;
			tyInfoData.eSeverity	:= AlmSeverityNA;
			tyInfoData.sAlmMsg		:= '';
			
			usiAccDataStep	:= 0;
			
	END_CASE
	

	
	
END_ACTION