(** 2018-12-21 **)
ACTION Act_Main_P1080:
	
	//User Managment
	FOR i := 1 TO c_uiP1080TableSize DO
		tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol0[i].sValue	:= UINT_TO_STRING(i);
		tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyStringDataCol1[i].sValue	:= p_tyUsrMgmtAllList[i].sUsrNm;
		tyP1080UsrMgmt.tyUsrMgmt.tyTableList.a_tyTxtDataCol3[i].usiValueIdx	:= DINT_TO_USINT((p_tyUsrMgmtAllList[i].eUsrLvl) + 1);
	END_FOR

END_ACTION
