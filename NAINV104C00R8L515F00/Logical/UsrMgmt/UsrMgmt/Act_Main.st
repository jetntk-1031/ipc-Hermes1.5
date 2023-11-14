(** 2019-05-04 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		UsrMgmtActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbDirCreate1(bEn := FALSE);
				fbDirCreate2(bEn := FALSE);
				fbDirCreate3(bEn := FALSE);
				fbFileRead1(bEn := FALSE);
				fbFileWrite1(bEn := FALSE);
				usiStep			:= 0;
				udiAddStatus	:= 0;
				
				bListFull			:= FALSE;
				bLoginSuccess		:= FALSE;
				bNmEmpty			:= FALSE;
				bNmExist			:= FALSE;
				bNmNotExist			:= FALSE;
				bPwMismatch			:= FALSE;
				bFileNotFound		:= FALSE;
				bUnableDelete		:= FALSE;
				
				sStatTxt	:= a_sStatText[eStat];
				
			END_IF
			
			eStatus	:= Idle;
		
		UsrMgmtActCreateDir:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:	
						fbDirCreate1(bEn := TRUE);
						IF fbDirCreate1.udiStatus = 0 THEN
							usiStep	:= 1;
						ELSIF fbDirCreate1.udiStatus < 65534 THEN
							eStatus	:= Error;
							
							IF fbDirCreate1.udiStatus = 1908 THEN
								udiStatus	:= 10000;	//Create User Folder Error
							ELSE
								udiStatus	:= fbDirCreate1.udiStatus;
							END_IF
						END_IF
						
					1:	
						fbDirCreate2(bEn := TRUE);
						IF fbDirCreate2.udiStatus = 0 THEN
							usiStep	:= 2;
						ELSIF fbDirCreate2.udiStatus < 65534 THEN
							eStatus	:= Error;
							
							IF fbDirCreate2.udiStatus = 1908 THEN
								udiStatus	:= 10001;	//Create Private Folder Error
							ELSE
								udiStatus	:= fbDirCreate2.udiStatus;
							END_IF
						END_IF
						
					2:	
						fbDirCreate3(bEn := TRUE);
						IF fbDirCreate3.udiStatus = 0 THEN
							eStatus	:= Done;
						ELSIF fbDirCreate3.udiStatus < 65534 THEN
							eStatus	:= Error;
							
							IF fbDirCreate3.udiStatus = 1908 THEN
								udiStatus	:= 10002;	//Create UserMgmt Folder Error
							ELSE
								udiStatus	:= fbDirCreate3.udiStatus;
							END_IF
						END_IF
						
				END_CASE
				
			END_IF
		
		UsrMgmtActLogin:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				sStatTxt	:= a_sStatText[eStat];
				
				bNmNotExist	:= (fRecipeGetInfo(p_tyInfoIn.sUsrNm , ADR(tyInfoOut) , ADR(tyFullData.a_tyAllList) , SIZEOF(tyFullData.a_tyAllList[1]) , ADR(tyFullData.a_tyAllList[1].sUsrNm) , SIZEOF(tyFullData.a_tyAllList[1].sUsrNm) , p_udiMax)) = 0;
				
				IF (bNmNotExist = FALSE) THEN
					
					IF (p_tyInfoIn.sPw = tyInfoOut.sPw) THEN
						bLoginSuccess	:= TRUE;
						bPwMismatch		:= FALSE;
						tyCurrUsr		:= tyInfoOut;
						
						IF tyCurrUsr.eUsrLvl = UsrMgmtLvl2 THEN
							
							tyCurrAccessRight			:= tyFullData.tyAccessRightLvl2;
							tyCurrAccessRight.bUsrMgmt	:= FALSE;
							
							IF tyCurrAccessRight.sNm = '' THEN
								tyCurrAccessRight.sNm	:= 'Level2';
							END_IF
							
						ELSIF tyCurrUsr.eUsrLvl = UsrMgmtLvl3 THEN
							
							tyCurrAccessRight			:= tyFullData.tyAccessRightLvl3;
							tyCurrAccessRight.bUsrMgmt	:= FALSE;
							
							IF tyCurrAccessRight.sNm = '' THEN
								tyCurrAccessRight.sNm	:= 'Level3';
							END_IF
							
						ELSIF tyCurrUsr.eUsrLvl = UsrMgmtAdmin THEN
							
							tyCurrAccessRight			:= tyAccessRightAdmin;
							
						END_IF
					
					ELSE
						bLoginSuccess				:= FALSE;
						bPwMismatch					:= TRUE;
						tyCurrUsr.sUsrNm			:= '';
						tyCurrUsr.sPw				:= '';
						tyCurrUsr.eUsrLvl			:= UsrMgmtLvl1;
						tyCurrAccessRight			:= tyFullData.tyAccessRightLvl1;
						tyCurrAccessRight.bUsrMgmt	:= FALSE;
							
						IF tyCurrAccessRight.sNm = '' THEN
							tyCurrAccessRight.sNm	:= 'Level1';
						END_IF
						
					END_IF
					
				ELSE
					bLoginSuccess				:= FALSE;
					bPwMismatch					:= FALSE;
					tyCurrUsr.sUsrNm			:= '';
					tyCurrUsr.sPw				:= '';
					tyCurrUsr.eUsrLvl			:= UsrMgmtLvl1;
					tyCurrAccessRight			:= tyFullData.tyAccessRightLvl1;
					tyCurrAccessRight.bUsrMgmt	:= FALSE;
							
					IF tyCurrAccessRight.sNm = '' THEN
						tyCurrAccessRight.sNm	:= 'Level1';
					END_IF
					
				END_IF
		
				eStatus	:= Done;
				
			END_IF
		
		UsrMgmtActBypassLogin:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				sStatTxt	:= a_sStatText[eStat];
				
				bLoginSuccess		:= TRUE;
				tyCurrUsr.sUsrNm	:= 'User Bypass';
				tyCurrUsr.sPw		:= '';
				tyCurrUsr.eUsrLvl	:= UsrMgmtAdmin;
				tyCurrAccessRight	:= tyAccessRightAdmin;
		
				eStatus	:= Done;
				
			END_IF
		
		UsrMgmtActLogout:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				sStatTxt	:= a_sStatText[eStat];
				
				tyCurrUsr.sUsrNm			:= '';
				tyCurrUsr.sPw				:= '';
				tyCurrUsr.eUsrLvl			:= UsrMgmtLvl1;
				tyCurrAccessRight			:= tyFullData.tyAccessRightLvl1;
				tyCurrAccessRight.bUsrMgmt	:= FALSE;
							
				IF tyCurrAccessRight.sNm = '' THEN
					tyCurrAccessRight.sNm	:= 'Level1';
				END_IF
				
						
				eStatus	:= Done;
				
			END_IF
		
		UsrMgmtActAdd:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
				
				CASE usiStep OF
					0:	//Add User
						udiAddStatus	:= fRecipeAdd(ADR(p_tyInfoIn) , ADR(tyFullDataTemp.a_tyAllList) , SIZEOF(tyFullDataTemp.a_tyAllList[1]) , ADR(tyFullDataTemp.a_tyAllList[1].sUsrNm) , SIZEOF(tyFullDataTemp.a_tyAllList[1].sUsrNm) , p_udiMax);
					
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
						fbFileWrite1(bEn := TRUE);
						
						IF fbFileWrite1.udiStatus = 0 THEN
							tyFullData.a_tyAllList	:= tyFullDataTemp.a_tyAllList;
							
							IF p_tyInfoIn.eUsrLvl = UsrMgmtLvl2 THEN
								udiCnt	:= 1;
								memset(ADR(a_tyLvl2List) , 0 , SIZEOF(a_tyLvl2List));
								
								FOR udi := 1 TO p_udiMax DO
									IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl2 THEN
										a_tyLvl2List[udiCnt]	:= tyFullData.a_tyAllList[udi];
										udiCnt					:= udiCnt + 1;
									END_IF
								END_FOR
								
							ELSIF p_tyInfoIn.eUsrLvl = UsrMgmtLvl3 THEN
								udiCnt	:= 1;
								memset(ADR(a_tyLvl3List) , 0 , SIZEOF(a_tyLvl3List));
								
								FOR udi := 1 TO p_udiMax DO
									IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl3 THEN
										a_tyLvl3List[udiCnt]	:= tyFullData.a_tyAllList[udi];
										udiCnt					:= udiCnt + 1;
									END_IF
								END_FOR
								
							ELSIF p_tyInfoIn.eUsrLvl = UsrMgmtAdmin THEN
								udiCnt		:= 1;
								bLastAdmin	:= TRUE;
								memset(ADR(a_tyAdminList) , 0 , SIZEOF(a_tyAdminList));
								
								FOR udi := 1 TO p_udiMax DO
									IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtAdmin THEN
										a_tyAdminList[udiCnt]	:= tyFullData.a_tyAllList[udi];
										bLastAdmin				:= udiCnt = 1;
										udiCnt					:= udiCnt + 1;
									END_IF
								END_FOR
								
							END_IF
							
							eStatus	:= Done;
							
						ELSIF fbFileWrite1.udiStatus < 65534 THEN
							tyFullDataTemp.a_tyAllList	:= tyFullData.a_tyAllList;
							eStatus						:= Error;
				
							IF fbFileWrite1.udiStatus = 1900 THEN
								udiStatus	:= 10004;	//File Open Error While Adding New User
							ELSIF fbFileWrite1.udiStatus = 1901 THEN
								udiStatus	:= 10005;	//File Create Error While Adding New User
							ELSIF fbFileWrite1.udiStatus = 1903 THEN
								udiStatus	:= 10006;	//File Write Error While Adding New User
							ELSIF fbFileWrite1.udiStatus = 1904 THEN
								udiStatus	:= 10007;	//File Close Error While Adding New User
							ELSIF fbFileWrite1.udiStatus = 1914 THEN
								udiStatus	:= 10008;	//Directory Does Not Exist While Adding New User
							ELSE
								udiStatus	:= fbFileWrite1.udiStatus;
							END_IF
						END_IF
						
				END_CASE
				
			END_IF
			
		UsrMgmtActEdit:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				eStatus	:= Busy;
	
				sStatTxt	:= a_sStatText[eStat];
			
				CASE usiStep OF
					0:	//Edit User
						udiAddStatus	:= fRecipeAddEdit(ADR(p_tyInfoIn) , ADR(tyFullDataTemp.a_tyAllList) , SIZEOF(tyFullDataTemp.a_tyAllList[1]) , ADR(tyFullDataTemp.a_tyAllList[1].sUsrNm) , SIZEOF(tyFullDataTemp.a_tyAllList[1].sUsrNm) , p_udiMax);

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
						fbFileWrite1(bEn := TRUE);
				
						IF fbFileWrite1.udiStatus = 0 THEN
							tyFullData.a_tyAllList	:= tyFullDataTemp.a_tyAllList;
					
							udiCnt			:= 1;
							udiCnt1			:= 1;
							udiCnt2			:= 1;
							bLastAdmin	:= TRUE;
							memset(ADR(a_tyLvl2List) , 0 , SIZEOF(a_tyLvl2List));
							memset(ADR(a_tyLvl3List) , 0 , SIZEOF(a_tyLvl3List));
							memset(ADR(a_tyAdminList) , 0 , SIZEOF(a_tyAdminList));
						
							FOR udi := 1 TO p_udiMax DO
								IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl2 THEN
									a_tyLvl2List[udiCnt]	:= tyFullData.a_tyAllList[udi];
									udiCnt					:= udiCnt + 1;
								ELSIF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl3 THEN
									a_tyLvl3List[udiCnt1]	:= tyFullData.a_tyAllList[udi];
									udiCnt1					:= udiCnt1 + 1;
								ELSIF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtAdmin THEN
									a_tyAdminList[udiCnt2]	:= tyFullData.a_tyAllList[udi];
									bLastAdmin				:= udiCnt2 = 1;
									udiCnt2					:= udiCnt2 + 1;
								END_IF
							END_FOR
				
							eStatus	:= Done;
					
						ELSIF fbFileWrite1.udiStatus < 65534 THEN
							tyFullDataTemp.a_tyAllList	:= tyFullData.a_tyAllList;
							eStatus						:= Error;
		
							IF fbFileWrite1.udiStatus = 1900 THEN
								udiStatus	:= 10014;	//File Open Error While Editing User
							ELSIF fbFileWrite1.udiStatus = 1901 THEN
								udiStatus	:= 10015;	//File Create Error While Editing User
							ELSIF fbFileWrite1.udiStatus = 1903 THEN
								udiStatus	:= 10016;	//File Write Error While Editing User
							ELSIF fbFileWrite1.udiStatus = 1904 THEN
								udiStatus	:= 10017;	//File Close Error While Editing User
							ELSIF fbFileWrite1.udiStatus = 1914 THEN
								udiStatus	:= 10018;	//Directory Does Not Exist While Editing User
							ELSE
								udiStatus	:= fbFileWrite1.udiStatus;
							END_IF
						END_IF
				
				END_CASE
				
			END_IF
			
		UsrMgmtActDel:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
			
				sStatTxt	:= a_sStatText[eStat];
					
				CASE usiStep OF
					0: //Check Whether Admin To Delete
						IF p_tyInfoIn.eUsrLvl = UsrMgmtAdmin THEN
							usiStep	:= 1;
						ELSE
							usiStep	:= 2;
						END_IF
					
					1:	//Check Last Admin
						IF bLastAdmin = FALSE THEN
							usiStep	:= 2;
						ELSE
							bUnableDelete	:= TRUE;
							eStatus			:= Done;
						END_IF
					
					2:	//Delete User
						udiAddStatus	:= fRecipeDelete(ADR(p_tyInfoIn) , ADR(tyFullDataTemp.a_tyAllList) , SIZEOF(tyFullDataTemp.a_tyAllList[1]) , ADR(tyFullDataTemp.a_tyAllList[1].sUsrNm) , SIZEOF(tyFullDataTemp.a_tyAllList[1].sUsrNm) , p_udiMax);
		
						IF udiAddStatus = 1600 THEN	//Recipe Name Empty
							bUnableDelete	:= TRUE;
							bNmEmpty		:= TRUE;
							eStatus			:= Done;
					
						ELSIF udiAddStatus = 1603 THEN	//Recipe Not Exist
							bUnableDelete	:= TRUE;
							bNmNotExist		:= TRUE;
							eStatus			:= Done;
					
						ELSIF udiAddStatus = 0 THEN	//OK
							usiStep	:= 3;
							
						END_IF
			
					3:	//Write Into File
						fbFileWrite1(bEn := TRUE);
						
						IF fbFileWrite1.udiStatus = 0 THEN
							tyFullData.a_tyAllList	:= tyFullDataTemp.a_tyAllList;
							
							IF p_tyInfoIn.eUsrLvl = UsrMgmtLvl2 THEN
								udiCnt	:= 1;
								memset(ADR(a_tyLvl2List) , 0 , SIZEOF(a_tyLvl2List));
								
								FOR udi := 1 TO p_udiMax DO
									IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl2 THEN
										a_tyLvl2List[udiCnt]	:= tyFullData.a_tyAllList[udi];
										udiCnt					:= udiCnt + 1;
									END_IF
								END_FOR
								
							ELSIF p_tyInfoIn.eUsrLvl = UsrMgmtLvl3 THEN
								udiCnt	:= 1;
								memset(ADR(a_tyLvl3List) , 0 , SIZEOF(a_tyLvl3List));
								
								FOR udi := 1 TO p_udiMax DO
									IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl3 THEN
										a_tyLvl3List[udiCnt]	:= tyFullData.a_tyAllList[udi];
										udiCnt					:= udiCnt + 1;
									END_IF
								END_FOR
								
							ELSIF p_tyInfoIn.eUsrLvl = UsrMgmtAdmin THEN
								udiCnt			:= 1;
								bLastAdmin	:= TRUE;
								memset(ADR(a_tyAdminList) , 0 , SIZEOF(a_tyAdminList));
								
								FOR udi := 1 TO p_udiMax DO
									IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtAdmin THEN
										a_tyAdminList[udiCnt]	:= tyFullData.a_tyAllList[udi];
										bLastAdmin				:= udiCnt = 1;
										udiCnt					:= udiCnt + 1;
									END_IF
								END_FOR
								
							END_IF
							
							eStatus	:= Done;
							
						ELSIF fbFileWrite1.udiStatus < 65534 THEN
							tyFullDataTemp.a_tyAllList	:= tyFullData.a_tyAllList;
							eStatus						:= Error;
				
							IF fbFileWrite1.udiStatus = 1900 THEN
								udiStatus	:= 10024;	//File Open Error While Deleting User
							ELSIF fbFileWrite1.udiStatus = 1901 THEN
								udiStatus	:= 10025;	//File Create Error While Deleting User
							ELSIF fbFileWrite1.udiStatus = 1903 THEN
								udiStatus	:= 10026;	//File Write Error While Deleting User
							ELSIF fbFileWrite1.udiStatus = 1904 THEN
								udiStatus	:= 10027;	//File Close Error While Deleting User
							ELSIF fbFileWrite1.udiStatus = 1914 THEN
								udiStatus	:= 10028;	//Directory Does Not Exist While Deleting User
							ELSE
								udiStatus	:= fbFileWrite1.udiStatus;
							END_IF
						END_IF
						
				END_CASE
				
			END_IF
			
		UsrMgmtActSaveAccessRight:
			IF eStatus = Idle OR eStatus = Busy THEN
		
				eStatus	:= Busy;
	
				sStatTxt	:= a_sStatText[eStat];
			
				CASE usiStep OF
					0:	//Save Access Right
						tyFullDataTemp.tyAccessRightLvl1	:= p_tyAccessRightLvl1;
						tyFullDataTemp.tyAccessRightLvl2	:= p_tyAccessRightLvl2;
						tyFullDataTemp.tyAccessRightLvl3	:= p_tyAccessRightLvl3;

						usiStep	:= 1;
	
					1:	//Write Into File
						fbFileWrite1(bEn := TRUE);
				
						IF fbFileWrite1.udiStatus = 0 THEN
							tyFullData.tyAccessRightLvl1	:= tyFullDataTemp.tyAccessRightLvl1;
							tyFullData.tyAccessRightLvl2	:= tyFullDataTemp.tyAccessRightLvl2;
							tyFullData.tyAccessRightLvl3	:= tyFullDataTemp.tyAccessRightLvl3;
							eStatus							:= Done;
					
						ELSIF fbFileWrite1.udiStatus < 65534 THEN
							tyFullDataTemp.tyAccessRightLvl1	:= tyFullData.tyAccessRightLvl1;
							tyFullDataTemp.tyAccessRightLvl2	:= tyFullData.tyAccessRightLvl2;
							tyFullDataTemp.tyAccessRightLvl3	:= tyFullData.tyAccessRightLvl3;
							eStatus								:= Error;
		
							IF fbFileWrite1.udiStatus = 1900 THEN
								udiStatus	:= 10009;	//File Open Error While Saving Access Right
							ELSIF fbFileWrite1.udiStatus = 1901 THEN
								udiStatus	:= 10010;	//File Create Error While Saving Access Right
							ELSIF fbFileWrite1.udiStatus = 1903 THEN
								udiStatus	:= 10011;	//File Write Error While Saving Access Right
							ELSIF fbFileWrite1.udiStatus = 1904 THEN
								udiStatus	:= 10012;	//File Close Error While Saving Access Right
							ELSIF fbFileWrite1.udiStatus = 1914 THEN
								udiStatus	:= 10013;	//Directory Does Not Exist While Saving Access Right
							ELSE
								udiStatus	:= fbFileWrite1.udiStatus;
							END_IF
						END_IF
				
				END_CASE
				
			END_IF
			
		UsrMgmtActReadData:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
				
				sStatTxt	:= a_sStatText[eStat];
				
				fbFileRead1(bEn := TRUE);
				IF fbFileRead1.udiStatus = 0 THEN
					tyFullDataTemp.a_tyAllList	:= tyFullData.a_tyAllList;
					
					udiCnt			:= 1;
					udiCnt1			:= 1;
					udiCnt2			:= 1;
					bLastAdmin	:= TRUE;
					memset(ADR(a_tyLvl2List) , 0 , SIZEOF(a_tyLvl2List));
					memset(ADR(a_tyLvl3List) , 0 , SIZEOF(a_tyLvl3List));
					memset(ADR(a_tyAdminList) , 0 , SIZEOF(a_tyAdminList));
							
					FOR udi := 1 TO p_udiMax DO
						IF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl2 THEN
							a_tyLvl2List[udiCnt]	:= tyFullData.a_tyAllList[udi];
							udiCnt					:= udiCnt + 1;
						ELSIF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtLvl3 THEN
							a_tyLvl3List[udiCnt1]	:= tyFullData.a_tyAllList[udi];
							udiCnt1					:= udiCnt1 + 1;
						ELSIF tyFullData.a_tyAllList[udi].eUsrLvl = UsrMgmtAdmin THEN
							a_tyAdminList[udiCnt2]	:= tyFullData.a_tyAllList[udi];
							bLastAdmin				:= udiCnt2 = 1;
							udiCnt2					:= udiCnt2 + 1;
						END_IF
					END_FOR
					
					eStatus	:= Done;
					
				ELSIF fbFileRead1.udiStatus < 65534 THEN
					eStatus		:= Error;
		
					IF fbFileRead1.udiStatus = 1900 THEN
						udiStatus	:= 10034;	//File Open Error While Getting User List
					ELSIF fbFileRead1.udiStatus = 1902 THEN
						udiStatus	:= 10035;	//File Read Error While Getting User List
					ELSIF fbFileRead1.udiStatus = 1904 THEN
						udiStatus	:= 10036;	//File Close Error While Getting User List
					ELSIF fbFileRead1.udiStatus = 1915 THEN
						eStatus			:= Done;
						bFileNotFound	:= TRUE;
					ELSE
						udiStatus	:= fbFileRead1.udiStatus;
					END_IF
				END_IF
						
			END_IF
		
	END_CASE
	
END_ACTION
