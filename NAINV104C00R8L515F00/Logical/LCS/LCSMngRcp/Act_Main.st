(** 2019-04-24 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		LCSActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				eProdRcpAct		:= ProdRcpActIdle;
				usiStep			:= 0;
				iPLCIdxAct		:= 0;
				iPLCIdxStat		:= 0;
				bChkLmt			:= FALSE;
				
				sStatTxt		:= a_sStatText[eStat];
		
			END_IF
			
			eStatus			:= Idle;
			udiPLCStatus	:= 65534;
		
		LCSActAddProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
						
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:
						bChkLmt	:= TRUE;
						
						IF p_bChkLmtOK = TRUE THEN
							usiStep			:= 1;
						ELSIF p_bChkLmtNG = TRUE THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10011;	//Out Of Range While Managing Product
						END_IF
						
					1:
						tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
						eProdRcpAct		:= ProdRcpActAdd;
					
						IF (p_eProdRcpStat = ProdRcpActAdd) AND (p_eProdRcpStatus = Done) THEN
							eStatus		:= Done;
							
							IF p_bProdRcpNmEmpty = TRUE THEN
								udiPLCStatus	:= 10012;	//Recipe Name Empty While Adding Product
							ELSIF p_bProdRcpListFull = TRUE THEN
								udiPLCStatus	:= 10013;	//Recipe List Full While Adding Product
							ELSIF p_bProdRcpNmExist = TRUE THEN
								udiPLCStatus	:= 10014;	//Recipe Name Exist While Adding Product
							ELSE
								udiPLCStatus	:= 0;
							END_IF
							
							eProdRcpAct	:= ProdRcpActIdle;
							
						ELSIF p_eProdRcpStatus = Error THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10015;	//Recipe Program Error While Adding Product
						END_IF
					
				END_CASE
		
			END_IF
		
		LCSActAddMultiProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
				
				sStatTxt	:= a_sStatText[eStat];
				
				IF (p_iLCSIdxAct <> 0) THEN
					IF p_iLCSIdxAct <> iPLCIdxStat THEN
				
						CASE usiStep OF
							0:
								bChkLmt	:= TRUE;
								
								IF p_bChkLmtOK = TRUE THEN
									usiStep			:= 1;
								ELSIF p_bChkLmtNG = TRUE THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10016;	//Check Limit Error While Adding Multiple Product
								END_IF
								
							1:
								tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
								eProdRcpAct		:= ProdRcpActAdd;
							
								IF (p_eProdRcpStat = ProdRcpActAdd) AND (p_eProdRcpStatus = Done) THEN
									IF p_bProdRcpNmEmpty = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10017;	//Recipe Name Empty While Adding Multiple Product
									ELSIF p_bProdRcpListFull = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10018;	//Recipe List Full While Adding Multiple Product
									ELSIF p_bProdRcpNmExist = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10019;	//Recipe Name Exist While Adding Multiple Product
									ELSE
										iPLCIdxStat	:= p_iLCSIdxAct;
										usiStep		:= 0;
									END_IF
									
									eProdRcpAct	:= ProdRcpActIdle;
									
								ELSIF p_eProdRcpStatus = Error THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10020;	//Recipe Program Error While Adding Multiple Product
								END_IF
							
						END_CASE
						
					END_IF
				
				ELSE
					eStatus			:= Done;
					udiPLCStatus	:= 0;
					
				END_IF
		
			END_IF
		
		LCSActEditProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
						
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:
						bChkLmt	:= TRUE;
						
						IF p_bChkLmtOK = TRUE THEN
							usiStep			:= 1;
						ELSIF p_bChkLmtNG = TRUE THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10021;	//Check Limit Error While Editing Product
						END_IF
						
					1:
						eProdRcpAct	:= ProdRcpActGetInfo;
						
						IF (p_eProdRcpStat = ProdRcpActGetInfo) AND (p_eProdRcpStatus = Done) THEN
							
							IF p_tyProdRcpInfoOut.dtLastModified > p_tyLCSProdRcpInfo.dtLastModified THEN
								eStatus			:= Done;
								udiPLCStatus	:= 10049;	//Local Recipe Is Latest Compare With LCS Recipe While Editing Product
							ELSE
								eProdRcpAct	:= ProdRcpActIdle;
								usiStep		:= 2;
							END_IF
							
						ELSIF p_eProdRcpStatus = Error THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10048;	//Get Recipe Info Error While Editing Product
						END_IF
						
					2:
						tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
						eProdRcpAct		:= ProdRcpActEdit;
					
						IF (p_eProdRcpStat = ProdRcpActEdit) AND (p_eProdRcpStatus = Done) THEN
							eStatus		:= Done;
							
							IF p_bProdRcpNmEmpty = TRUE THEN
								udiPLCStatus	:= 10022;	//Recipe Name Empty While Editing Product
							ELSIF p_bProdRcpNmNotExist = TRUE THEN
								udiPLCStatus	:= 10023;	//Recipe Name Not Exist While Editing Product
							ELSE
								udiPLCStatus	:= 0;
							END_IF
							
							eProdRcpAct	:= ProdRcpActIdle;
							
						ELSIF p_eProdRcpStatus = Error THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10024;	//Recipe Program Error While Editing Product
						END_IF
					
				END_CASE
		
			END_IF
		
		LCSActEditMultiProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
				
				sStatTxt	:= a_sStatText[eStat];
				
				IF (p_iLCSIdxAct <> 0) THEN
					IF p_iLCSIdxAct <> iPLCIdxStat THEN
				
						CASE usiStep OF
							0:
								bChkLmt	:= TRUE;
								
								IF p_bChkLmtOK = TRUE THEN
									usiStep			:= 1;
								ELSIF p_bChkLmtNG = TRUE THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10025;	//Check Limit Error While Editing Multiple Product
								END_IF
								
							1:
								eProdRcpAct	:= ProdRcpActGetInfo;
						
								IF (p_eProdRcpStat = ProdRcpActGetInfo) AND (p_eProdRcpStatus = Done) THEN
							
									IF p_tyProdRcpInfoOut.dtLastModified > p_tyLCSProdRcpInfo.dtLastModified THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10050;	//Local Recipe Is Latest Compare With LCS Recipe While Editing Multiple Product
									ELSE
										eProdRcpAct	:= ProdRcpActIdle;
										usiStep		:= 2;
									END_IF
							
								ELSIF p_eProdRcpStatus = Error THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10051;	//Get Recipe Info Error While Editing Multiple Product
								END_IF
						
							2:
								tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
								eProdRcpAct		:= ProdRcpActEdit;
							
								IF (p_eProdRcpStat = ProdRcpActEdit) AND (p_eProdRcpStatus = Done) THEN
									IF p_bProdRcpNmEmpty = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10026;	//Recipe Name Empty While Editing Multiple Product
									ELSIF p_bProdRcpNmNotExist = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10027;	//Recipe Name Not Exist While Editing Multiple Product
									ELSE
										iPLCIdxStat	:= p_iLCSIdxAct;
										usiStep		:= 0;
									END_IF
									
									eProdRcpAct	:= ProdRcpActIdle;
									
								ELSIF p_eProdRcpStatus = Error THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10028;	//Recipe Program Error While Editing Multiple Product
								END_IF
							
						END_CASE
						
					END_IF
				
				ELSE
					eStatus			:= Done;
					udiPLCStatus	:= 0;
					
				END_IF
		
			END_IF
		
		LCSActOverWriteProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
						
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:
						bChkLmt	:= TRUE;
						
						IF p_bChkLmtOK = TRUE THEN
							usiStep			:= 1;
						ELSIF p_bChkLmtNG = TRUE THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10029;	//Check Limit Error While Overwriting Product
						END_IF
						
					1:
						tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
						eProdRcpAct		:= ProdRcpActAddEdit;
					
						IF (p_eProdRcpStat = ProdRcpActAddEdit) AND (p_eProdRcpStatus = Done) THEN
							eStatus		:= Done;
							
							IF p_bProdRcpNmEmpty = TRUE THEN
								udiPLCStatus	:= 10030;	//Recipe Name Empty While Overwriting Product
							ELSIF p_bProdRcpListFull = TRUE THEN
								udiPLCStatus	:= 10031;	//Recipe List Full While Overwriting Product
							ELSE
								udiPLCStatus	:= 0;
							END_IF
							
							eProdRcpAct	:= ProdRcpActIdle;
							
						ELSIF p_eProdRcpStatus = Error THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10032;	//Recipe Program Error While Overwriting Product
						END_IF
					
				END_CASE
		
			END_IF
		
		LCSActOverWriteMultiProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
				
				sStatTxt	:= a_sStatText[eStat];
				
				IF (p_iLCSIdxAct <> 0) THEN
					IF p_iLCSIdxAct <> iPLCIdxStat THEN
				
						CASE usiStep OF
							0:
								bChkLmt	:= TRUE;
								
								IF p_bChkLmtOK = TRUE THEN
									usiStep			:= 1;
								ELSIF p_bChkLmtNG = TRUE THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10033;	//Check Limit Error While Overwriting Multiple Product
								END_IF
								
							1:
								tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
								eProdRcpAct		:= ProdRcpActAddEdit;
							
								IF (p_eProdRcpStat = ProdRcpActAddEdit) AND (p_eProdRcpStatus = Done) THEN
									IF p_bProdRcpNmEmpty = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10034;	//Recipe Name Empty While Overwriting Multiple Product
									ELSIF p_bProdRcpListFull = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10035;	//Recipe List Full While Overwriting Multiple Product
									ELSE
										iPLCIdxStat	:= p_iLCSIdxAct;
										usiStep		:= 0;
									END_IF
									
									eProdRcpAct	:= ProdRcpActIdle;
									
								ELSIF p_eProdRcpStatus = Error THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10036;	//Recipe Program Error While Overwriting Multiple Product
								END_IF
							
						END_CASE
						
					END_IF
				
				ELSE
					eStatus			:= Done;
					udiPLCStatus	:= 0;
					
				END_IF
		
			END_IF
		
		LCSActDelProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
						
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:
						bChkLmt	:= TRUE;
						
						IF p_bChkLmtOK = TRUE THEN
							usiStep			:= 1;
						ELSIF p_bChkLmtNG = TRUE THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10037;	//Check Limit Error While Deleting Product
						END_IF
						
					1:
						tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
						eProdRcpAct		:= ProdRcpActDel;
					
						IF (p_eProdRcpStat = ProdRcpActDel) AND (p_eProdRcpStatus = Done) THEN
							eStatus		:= Done;
							
							IF p_bProdRcpNmEmpty = TRUE THEN
								udiPLCStatus	:= 10038;	//Recipe Name Empty While Deleting Product
							ELSIF p_bProdRcpNmNotExist = TRUE THEN
								udiPLCStatus	:= 10039;	//Recipe Name Not Exist While Deleting Product
							ELSE
								udiPLCStatus	:= 0;
							END_IF
							
							eProdRcpAct	:= ProdRcpActIdle;
							
						ELSIF p_eProdRcpStatus = Error THEN
							eStatus			:= Done;
							udiPLCStatus	:= 10040;	//Recipe Program Error While Deleting Product
						END_IF
					
				END_CASE
		
			END_IF
		
		LCSActDelMultiProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
				
				sStatTxt	:= a_sStatText[eStat];
				
				IF (p_iLCSIdxAct <> 0) THEN
					IF p_iLCSIdxAct <> iPLCIdxStat THEN
				
						CASE usiStep OF
							0:
								bChkLmt	:= TRUE;
								
								IF p_bChkLmtOK = TRUE THEN
									usiStep			:= 1;
								ELSIF p_bChkLmtNG = TRUE THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10041;	//Check Limit Error While Deleting Multiple Product
								END_IF
								
							1:
								tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
								eProdRcpAct		:= ProdRcpActDel;
							
								IF (p_eProdRcpStat = ProdRcpActDel) AND (p_eProdRcpStatus = Done) THEN
									IF p_bProdRcpNmEmpty = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10042;	//Recipe Name Empty While Deleting Multiple Product
									ELSIF p_bProdRcpNmNotExist = TRUE THEN
										eStatus			:= Done;
										udiPLCStatus	:= 10043;	//Recipe Name Not Exist While Deleting Multiple Product
									ELSE
										iPLCIdxStat	:= p_iLCSIdxAct;
										usiStep		:= 0;
									END_IF
									
									eProdRcpAct	:= ProdRcpActIdle;
									
								ELSIF p_eProdRcpStatus = Error THEN
									eStatus			:= Done;
									udiPLCStatus	:= 10044;	//Recipe Program Error While Deleting Multiple Product
								END_IF
							
						END_CASE
						
					END_IF
				
				ELSE
					eStatus			:= Done;
					udiPLCStatus	:= 0;
					
				END_IF
		
			END_IF
		
		LCSActUploadProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
						
				sStatTxt	:= a_sStatText[eStat];
				
				tyProdRcpInfoIn	:= p_tyLCSProdRcpInfo;
				eProdRcpAct		:= ProdRcpActGetInfo;
				
				IF (p_eProdRcpStat = ProdRcpActGetInfo) AND (p_eProdRcpStatus = Done) THEN
					eStatus		:= Done;
						
					IF p_bProdRcpNmEmpty = TRUE THEN
						udiPLCStatus	:= 10045;	//Recipe Name Empty While Uploading Product
					ELSIF p_bProdRcpNmNotExist = TRUE THEN
						eStatus			:= Done;
						udiPLCStatus	:= 10046;	//Recipe Name Not Exist While Uploading Product
					ELSE
						udiPLCStatus		:= 0;
						tyPLCProdRcpInfo	:= p_tyProdRcpInfoOut;
					END_IF
					
					eProdRcpAct	:= ProdRcpActIdle;
					
				ELSIF p_eProdRcpStatus = Error THEN
					eStatus			:= Done;
					udiPLCStatus	:= 10047;	//Recipe Program Error While Uploading Product
				END_IF
	
			END_IF
		
		LCSActUploadMultiProd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus			:= Busy;
				udiPLCStatus	:= 65535;
				
				sStatTxt	:= a_sStatText[eStat];
				
				IF (iPLCIdxAct = p_iLCSIdxStat) OR (iPLCIdxAct = 0) THEN
					
					IF pa_tyProdRcpCurrList[iPLCIdxAct + 1].sRcpNm <> '' THEN
						
						tyPLCProdRcpInfo	:= pa_tyProdRcpCurrList[iPLCIdxAct + 1];
						iPLCIdxAct			:= iPLCIdxAct + 1;
						
					ELSE
						
						eStatus			:= Done;
						udiPLCStatus	:= 0;
						iPLCIdxAct		:= 0;
						
					END_IF
					
				END_IF
				
			END_IF
		
		ELSE
			IF eStatus = Idle OR eStatus = Busy THEN		
				eStatus	:= Done;
			END_IF
		
	END_CASE
	
END_ACTION
