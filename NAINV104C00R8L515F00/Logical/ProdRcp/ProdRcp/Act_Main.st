(** 2023-02-13 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		ProdRcpActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbDirCreate1(bEn := FALSE);
				fbDirCreate2(bEn := FALSE);
				fbFileReadList(bEn := FALSE);
				fbFileWriteList(bEn := FALSE);
				fbFileReadSingle(bEn := FALSE);
				fbFileWriteSingle(bEn := FALSE);
				fbFileLoadSingle(bEn := FALSE);
				usiStep				:= 0;
				udiAddStatus		:= 0;
				
				bNmExist		:= FALSE;
				bNmNotExist		:= FALSE;
				bNmEmpty		:= FALSE;
				bListFull		:= FALSE;
				bFileNotFound	:= FALSE;
				iTotalRcp 		:= 0;
				
				memset(ADR(tyTempRecipe), 0 , SIZEOF(tyTempRecipe));
						
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		ProdRcpActCreateDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:
						fbDirCreate1(bEn := TRUE);
						IF fbDirCreate1.udiStatus = 0 THEN
							usiStep	:= 1;
						ELSIF fbDirCreate1.udiStatus < 65534 THEN
							eStatus		:= Error;
							
							IF fbDirCreate1.udiStatus = 1908 THEN
								udiStatus	:= 10000;	//Create User Directory Error
							ELSE
								udiStatus	:= fbDirCreate1.udiStatus;
							END_IF
						END_IF
						
					1:
						fbDirCreate2(bEn := TRUE);
						IF fbDirCreate2.udiStatus = 0 THEN
							eStatus	:= Done;
						ELSIF fbDirCreate2.udiStatus < 65534 THEN
							eStatus		:= Error;
							
							IF fbDirCreate2.udiStatus = 1908 THEN
								udiStatus	:= 10001;	//Create Product Recipe Directory Error
							ELSE
								udiStatus	:= fbDirCreate2.udiStatus;
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
		ProdRcpActAddEdit:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:	//Edit Recipe
						udiAddStatus	:= fRecipeAddEdit(ADR(p_tyInfoIn) , ADR(a_tyListTemp) , SIZEOF(a_tyListTemp[1]) , ADR(a_tyListTemp[1].sRcpNm) , SIZEOF(a_tyListTemp[1].sRcpNm) , p_udiMax);
						
						IF udiAddStatus = 1600 THEN	//Recipe Name Empty
							bNmEmpty	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 1601 THEN	//Recipe Full
							bListFull	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 0 THEN	//OK
							usiStep	:= 1;
							
						END_IF
					
					1:	//Write Into File
						fbFileWriteList(bEn := TRUE);
						
						IF fbFileWriteList.udiStatus = 0 THEN
							a_tyCurrList	:= a_tyListTemp;
											
							eStatus := Done;

						ELSIF fbFileWriteList.udiStatus < 65534 THEN
							a_tyListTemp	:= a_tyCurrList;
							eStatus			:= Error;
					
							IF fbFileWriteList.udiStatus = 1900 THEN
								udiStatus	:= 10002;	//File Open Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1901 THEN
								udiStatus	:= 10003;	//File Create Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1903 THEN
								udiStatus	:= 10004;	//File Write Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1904 THEN
								udiStatus	:= 10005;	//File Close Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1914 THEN
								udiStatus	:= 10013;	//Directory Does Not Exist While Adding & Editing
							ELSE
								udiStatus	:= fbFileWriteList.udiStatus;
							END_IF
						END_IF		
						
				END_CASE
				
			END_IF
			
		ProdRcpActDel:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:	//Edit User
						udiAddStatus	:= fRecipeDelete(ADR(p_tyInfoIn) , ADR(a_tyListTemp) , SIZEOF(a_tyListTemp[1]) , ADR(a_tyListTemp[1].sRcpNm) , SIZEOF(a_tyListTemp[1].sRcpNm) , p_udiMax);
						
						IF udiAddStatus = 1600 THEN	//Recipe Name Empty
							bNmEmpty	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 1603 THEN	//Recipe Not Exist
							bNmNotExist	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 0 THEN	//OK
							usiStep	:= 1;
							
						END_IF
					
					1:	//Write Into File
						fbFileWriteList(bEn := TRUE);
						
						IF fbFileWriteList.udiStatus = 0 THEN
							a_tyCurrList	:= a_tyListTemp;
							eStatus := Done;
							
						ELSIF fbFileWriteList.udiStatus < 65534 THEN
							a_tyListTemp	:= a_tyCurrList;
							eStatus			:= Error;
					
							IF fbFileWriteList.udiStatus = 1900 THEN
								udiStatus	:= 10006;	//File Open Error While Deleting
							ELSIF fbFileWriteList.udiStatus = 1901 THEN
								udiStatus	:= 10007;	//File Create Error While Deleting
							ELSIF fbFileWriteList.udiStatus = 1903 THEN
								udiStatus	:= 10008;	//File Write Error While Deleting
							ELSIF fbFileWriteList.udiStatus = 1904 THEN
								udiStatus	:= 10009;	//File Close Error While Deleting
							ELSIF fbFileWriteList.udiStatus = 1914 THEN
								udiStatus	:= 10014;	//Directory Does Not Exist While Deleting
							ELSE
								udiStatus	:= fbFileWriteList.udiStatus;
							END_IF
							
						END_IF	
								
				END_CASE
							

			END_IF
		
		ProdRcpActGetInfo:
			IF eStatus = Idle OR eStatus = Busy THEN
						
				sStatTxt	:= a_sStatText[eStat];
		
				IF p_tyInfoIn.sRcpNm = '' THEN
					bNmEmpty	:= TRUE;
					bNmNotExist	:= TRUE;
				ELSE
					bNmNotExist	:= (fRecipeGetInfo(p_tyInfoIn.sRcpNm , ADR(tyInfoOut) , ADR(a_tyCurrList) , SIZEOF(a_tyCurrList[1]) , ADR(a_tyCurrList[1].sRcpNm) , SIZEOF(a_tyCurrList[1].sRcpNm) , p_udiMax)) = 0;
				END_IF
				
				eStatus	:= Done;
				
			END_IF
		
		ProdRcpActGetList:
			IF eStatus = Idle OR eStatus = Busy THEN
					
				eStatus	:= Busy;
							
				sStatTxt	:= a_sStatText[eStat];
			
				fbFileReadList(bEn := TRUE);
			
				IF fbFileReadList.udiStatus = 0 THEN
					a_tyListTemp	:= a_tyCurrList;
					eStatus			:= Done;			

				ELSIF fbFileReadList.udiStatus < 65534 THEN
					eStatus		:= Error;
			
					IF fbFileReadList.udiStatus = 1900 THEN
						udiStatus	:= 10010;	//File Open Error While Getting List
					ELSIF fbFileReadList.udiStatus = 1902 THEN
						udiStatus	:= 10011;	//File Read Error While Getting List
					ELSIF fbFileReadList.udiStatus = 1904 THEN
						udiStatus	:= 10012;	//File Close Error While Getting List
					ELSIF fbFileReadList.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileReadList.udiStatus;
					END_IF
					
				END_IF
					
			END_IF
		
		ProdRcpActFilter:
			
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus := Busy;
				
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:
						fRecipeFilter(p_sSearch , ADR(a_tyFilterList) , ADR(a_tyCurrList) , SIZEOF(a_tyCurrList[1]) , ADR(a_tyCurrList[1].sRcpNm) ,
						SIZEOF(a_tyCurrList[1].sRcpNm) , p_udiMax, 0, 499, iFilterCtr);
						usiStep := 1;
					1:
						fRecipeFilter(p_sSearch , ADR(a_tyFilterList) , ADR(a_tyCurrList) , SIZEOF(a_tyCurrList[1]) , ADR(a_tyCurrList[1].sRcpNm) ,
						SIZEOF(a_tyCurrList[1].sRcpNm) , p_udiMax, 500, 999, iFilterCtr);
						usiStep := 2;
					2:
						fRecipeFilter(p_sSearch , ADR(a_tyFilterList) , ADR(a_tyCurrList) , SIZEOF(a_tyCurrList[1]) , ADR(a_tyCurrList[1].sRcpNm) ,
						SIZEOF(a_tyCurrList[1].sRcpNm) , p_udiMax, 1000, 1499, iFilterCtr);
						usiStep := 3;
					3:
						fRecipeFilter(p_sSearch , ADR(a_tyFilterList) , ADR(a_tyCurrList) , SIZEOF(a_tyCurrList[1]) , ADR(a_tyCurrList[1].sRcpNm) ,
						SIZEOF(a_tyCurrList[1].sRcpNm) , p_udiMax, 1500, 1999, iFilterCtr);
						eStatus := Done;
	
				END_CASE
							
			END_IF
		
		ProdRcpActLoadRcp:
			IF eStatus = Idle OR eStatus = Busy THEN
						
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:	//Get Current Recipe
						IF p_tyInfoIn.sRcpNm = '' THEN
							bNmEmpty	:= TRUE;
							bNmNotExist	:= TRUE;
							
							eStatus	:= Done;
						ELSE
							bNmNotExist	:= (fRecipeGetInfo(p_tyInfoIn.sRcpNm , ADR(a_tyCurrRcp[0]) , ADR(a_tyCurrList) , SIZEOF(a_tyCurrList[1]) , ADR(a_tyCurrList[1].sRcpNm) , SIZEOF(a_tyCurrList[1].sRcpNm) , p_udiMax)) = 0;
							
							IF bNmNotExist = TRUE THEN
								eStatus	:= Done;
							ELSE
								usiStep	:= 1;
							END_IF
						
						END_IF
					
					1:	//Write Into File
						fbFileLoadSingle(bEn := TRUE);
						
						IF fbFileLoadSingle.udiStatus = 0 THEN
							eStatus			:= Done;
						ELSIF fbFileLoadSingle.udiStatus < 65534 THEN
							eStatus			:= Error;
					
							IF fbFileLoadSingle.udiStatus = 1900 THEN
								udiStatus	:= 10025;	//File Open Error While Loading Current Recipe
							ELSIF fbFileLoadSingle.udiStatus = 1901 THEN
								udiStatus	:= 10026;	//File Create Error While Loading Current Recipe
							ELSIF fbFileLoadSingle.udiStatus = 1903 THEN
								udiStatus	:= 10027;	//File Write Error While Loading Current Recipe
							ELSIF fbFileLoadSingle.udiStatus = 1904 THEN
								udiStatus	:= 10028;	//File Close Error While Loading Current Recipe
							ELSIF fbFileLoadSingle.udiStatus = 1914 THEN
								udiStatus	:= 10029;	//Directory Does Not Exist While Loading Current Recipe
							ELSE
								udiStatus	:= fbFileLoadSingle.udiStatus;
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
		ProdRcpActAdd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:	//Edit Recipe
						udiAddStatus	:= fRecipeAdd(ADR(p_tyInfoIn) , ADR(a_tyListTemp) , SIZEOF(a_tyListTemp[1]) , ADR(a_tyListTemp[1].sRcpNm) , SIZEOF(a_tyListTemp[1].sRcpNm) , p_udiMax);
						
						IF udiAddStatus = 1600 THEN	//Recipe Name Empty
							bNmEmpty	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 1601 THEN	//Recipe Full
							bListFull	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 1602 THEN	//Recipe Name Exist
							bNmExist	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 0 THEN	//OK
							usiStep	:= 1;
							
						END_IF
					
					1:	//Write Into File
						fbFileWriteList(bEn := TRUE);
						
						IF fbFileWriteList.udiStatus = 0 THEN
							a_tyCurrList	:= a_tyListTemp;
							eStatus			:= Done;
							
						ELSIF fbFileWriteList.udiStatus < 65534 THEN
							a_tyListTemp	:= a_tyCurrList;
							eStatus			:= Error;
					
							IF fbFileWriteList.udiStatus = 1900 THEN
								udiStatus	:= 10015;	//File Open Error While Adding
							ELSIF fbFileWriteList.udiStatus = 1901 THEN
								udiStatus	:= 10016;	//File Create Error While Adding
							ELSIF fbFileWriteList.udiStatus = 1903 THEN
								udiStatus	:= 10017;	//File Write Error While Adding
							ELSIF fbFileWriteList.udiStatus = 1904 THEN
								udiStatus	:= 10018;	//File Close Error While Adding
							ELSIF fbFileWriteList.udiStatus = 1914 THEN
								udiStatus	:= 10019;	//Directory Does Not Exist While Adding
							ELSE
								udiStatus	:= fbFileWriteList.udiStatus;
							END_IF
						END_IF						
				END_CASE
				
			END_IF
			
		ProdRcpActEdit:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					0:	//Edit Recipe
						udiAddStatus	:= fRecipeEdit(ADR(p_tyInfoIn) , ADR(a_tyListTemp) , SIZEOF(a_tyListTemp[1]) , ADR(a_tyListTemp[1].sRcpNm) , SIZEOF(a_tyListTemp[1].sRcpNm) , p_udiMax);
						
						IF udiAddStatus = 1600 THEN	//Recipe Name Empty
							bNmEmpty	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 1603 THEN	//Recipe Not Exist
							bNmNotExist	:= TRUE;
							eStatus		:= Done;
							
						ELSIF udiAddStatus = 0 THEN	//OK
							usiStep	:= 1;
							
						END_IF
					
					1:	//Write Into File
						fbFileWriteList(bEn := TRUE);
						
						IF fbFileWriteList.udiStatus = 0 THEN
							a_tyCurrList	:= a_tyListTemp;
							eStatus			:= Done;
							
						ELSIF fbFileWriteList.udiStatus < 65534 THEN
							a_tyListTemp	:= a_tyCurrList;
							eStatus			:= Error;
					
							IF fbFileWriteList.udiStatus = 1900 THEN
								udiStatus	:= 10020;	//File Open Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1901 THEN
								udiStatus	:= 10021;	//File Create Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1903 THEN
								udiStatus	:= 10022;	//File Write Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1904 THEN
								udiStatus	:= 10023;	//File Close Error While Adding & Editing
							ELSIF fbFileWriteList.udiStatus = 1914 THEN
								udiStatus	:= 10024;	//Directory Does Not Exist While Adding & Editing
							ELSE
								udiStatus	:= fbFileWriteList.udiStatus;
							END_IF
						END_IF
						
				END_CASE
				
			END_IF
			
		ProdRcpActReadCurrRcp:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
						
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileReadSingle(bEn := TRUE);
				IF fbFileReadSingle.udiStatus = 0 THEN
					eStatus			:= Done;
				
				ELSIF fbFileReadSingle.udiStatus < 65534 THEN
					eStatus		:= Error;
				
					IF fbFileReadSingle.udiStatus = 1900 THEN
						udiStatus	:= 10030;	//File Open Error While Reading Current Recipe
					ELSIF fbFileReadSingle.udiStatus = 1902 THEN
						udiStatus	:= 10031;	//File Read Error While Reading Current Recipe
					ELSIF fbFileReadSingle.udiStatus = 1904 THEN
						udiStatus	:= 10032;	//File Close Error While Reading Current Recipe
					ELSIF fbFileReadSingle.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileReadSingle.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ProdRcpActWriteCurrRcpParam:
			IF eStatus = Idle OR eStatus = Busy THEN
						
				sStatTxt	:= a_sStatText[eStat];
		
				fbFileWriteSingle(bEn := TRUE);
						
				IF fbFileWriteSingle.udiStatus = 0 THEN
					a_tyCurrRcp[0]	:= p_tyCurrRcpWr;
					eStatus			:= Done;
				ELSIF fbFileWriteSingle.udiStatus < 65534 THEN
					eStatus			:= Error;
					
					IF fbFileWriteSingle.udiStatus = 1900 THEN
						udiStatus	:= 10033;	//File Open Error While Writing Current Recipe Parameter
					ELSIF fbFileWriteSingle.udiStatus = 1901 THEN
						udiStatus	:= 10034;	//File Create Error While Writing Current Recipe Parameter
					ELSIF fbFileWriteSingle.udiStatus = 1903 THEN
						udiStatus	:= 10035;	//File Write Error While Writing Current Recipe Parameter
					ELSIF fbFileWriteSingle.udiStatus = 1904 THEN
						udiStatus	:= 10036;	//File Close Error While Writing Current Recipe Parameter
					ELSIF fbFileWriteSingle.udiStatus = 1914 THEN
						udiStatus	:= 10037;	//Directory Does Not Exist Writing Current Recipe Parameter
					ELSE
						udiStatus	:= fbFileWriteSingle.udiStatus;
					END_IF
				END_IF
				
			END_IF
		
		ProdRcpActSaveList:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
					
				sStatTxt	:= a_sStatText[eStat];		
				
				CASE usiStep OF 
					
					0:
						a_tyListTemp	:= a_tyCurrList;

						fbFileWriteList(bEn := TRUE);
										
						IF fbFileWriteList.udiStatus = 0 THEN
							eStatus			:= Done;
							
						ELSIF fbFileWriteList.udiStatus < 65534 THEN
							eStatus			:= Error;
					
							IF fbFileWriteList.udiStatus = 1900 THEN
								udiStatus	:= 10038;	//File Open Error While Saving List
							ELSIF fbFileWriteList.udiStatus = 1901 THEN
								udiStatus	:= 10039;	//File Create Error While Saving List
							ELSIF fbFileWriteList.udiStatus = 1903 THEN
								udiStatus	:= 10040;	//File Write Error While Saving List
							ELSIF fbFileWriteList.udiStatus = 1904 THEN
								udiStatus	:= 10041;	//File Close Error While Saving List
							ELSIF fbFileWriteList.udiStatus = 1914 THEN
								udiStatus	:= 10042;	//Directory Does Not Exist While Saving List
							ELSE
								udiStatus	:= fbFileWriteList.udiStatus;
							END_IF
						END_IF
					
				END_CASE
				
			END_IF
		
		
		ProdRcpActSort:
			IF eStatus = Idle OR eStatus = Busy THEN
						
				sStatTxt	:= a_sStatText[eStat];
		
				CASE usiStep OF
					
					0:
						
						FOR udi := 1 TO c_udiProdRcpMax DO
							IF p_sSearch <> '' THEN
								IF a_tyFilterList[udi].sRcpNm = '' THEN
									usiStep := 1;
									EXIT;
								ELSIF udi = c_udiProdRcpMax THEN								
									iTotalRcp := UDINT_TO_INT(c_udiProdRcpMax);
									usiStep := 1;
									EXIT;
								ELSE
									iTotalRcp := iTotalRcp +1;
								END_IF
							ELSE
								IF a_tyCurrList[udi].sRcpNm = '' THEN
									usiStep := 1;
									EXIT;
								ELSIF udi = c_udiProdRcpMax THEN								
									iTotalRcp := UDINT_TO_INT(c_udiProdRcpMax);
									usiStep := 1;
									EXIT;
								ELSE
									iTotalRcp := iTotalRcp +1;
								END_IF
							END_IF
						END_FOR
						
					1:
						IF p_sSearch <> '' THEN
							memcpy(ADR(a_tySortList),ADR(a_tyFilterList), SIZEOF(a_tyFilterList));
						ELSE
							memcpy(ADR(a_tySortList),ADR(a_tyCurrList), SIZEOF(a_tyCurrList));
						END_IF
							
						iSortCurrentOuterCntr	:= 0;
						iSortCurrentInnerCntr	:= 1 ;
						
						udiSortCurrenTotalCntr	:= 0;
						
						usiStep := 2;
					
					2:
							
						IF iSortCurrentOuterCntr < iTotalRcp THEN								
						
							FOR iSortCurrentInnerCntr:= iSortCurrentOuterCntr+1 TO iTotalRcp-1 DO
						
							
								IF fRecipeNmCompare(ADR(a_tySortList[iSortCurrentOuterCntr+1].sRcpNm),ADR(a_tySortList[iSortCurrentInnerCntr+1].sRcpNm),SIZEOF(a_tySortList[1].sRcpNm),ADR(sDebug)) THEN
											
									memcpy(ADR(tyTempRecipe), ADR(a_tySortList[iSortCurrentOuterCntr+1]), SIZEOF(a_tySortList[1]));
									memcpy(ADR(a_tySortList[iSortCurrentOuterCntr+1]), ADR(a_tySortList[iSortCurrentInnerCntr+1]), SIZEOF(a_tySortList[1]));
									memcpy(ADR(a_tySortList[iSortCurrentInnerCntr+1]), ADR(tyTempRecipe), SIZEOF(a_tySortList[1]));
									
								END_IF
								
								
								udiSortCurrenTotalCntr	:= udiSortCurrenTotalCntr + 1;
								
							END_FOR
							
							iSortCurrentOuterCntr	:= iSortCurrentOuterCntr + 1;																		
																	
						ELSE			
							usiStep := 3;
						END_IF			
								
					3:
						eStatus	:= Done;
						
				END_CASE
				
			END_IF
		
		
		ProdRcpActEndCharFilter:
			IF eStatus = Idle OR eStatus = Busy THEN
						
				sStatTxt	:= a_sStatText[eStat];
		
				fRecipeLastCharFilter(p_sScan , ADR(a_tyScanList) , ADR(a_tyCurrList) , SIZEOF(a_tyCurrList[1]) , ADR(a_tyCurrList[1].sRcpNm) , SIZEOF(a_tyCurrList[1].sRcpNm) , p_udiMax);
				
				eStatus	:= Done;
				
			END_IF
			
	END_CASE
	
	
END_ACTION
