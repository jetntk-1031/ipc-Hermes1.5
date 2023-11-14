(** 2019-05-08 **)
PROGRAM _INIT
	
	(* Always Change If Project Change *)
	
	//Pass Address To Global Address For External Use
	//Action, State & Status
	p_UsrMgmtStat		:= ADR(eStat);
	p_UsrMgmtStatus		:= ADR(eStatus);
	p_UsrMgmtStatTxt	:= ADR(sStatTxt);
	
	//Alarm
	p_UsrMgmtAlmData	:= ADR(tyAlmData);
	
	//Output
	p_UsrMgmtCurrAccessRight	:= ADR(tyCurrAccessRight);
	p_UsrMgmtCurrUsr			:= ADR(tyCurrUsr);
	p_UsrMgmtFullData			:= ADR(tyFullData);
	p_UsrMgmtAllList			:= ADR(tyFullData.a_tyAllList);
	p_UsrMgmtAccessRightLvl1	:= ADR(tyFullData.tyAccessRightLvl1);
	p_UsrMgmtAccessRightLvl2	:= ADR(tyFullData.tyAccessRightLvl2);
	p_UsrMgmtAccessRightLvl3	:= ADR(tyFullData.tyAccessRightLvl3);
	p_UsrMgmtLvl2List			:= ADR(a_tyLvl2List);
	p_UsrMgmtLvl3List			:= ADR(a_tyLvl3List);
	p_UsrMgmtAdminList			:= ADR(a_tyAdminList);
	p_UsrMgmtLastAdmin			:= ADR(bLastAdmin);
	p_UsrMgmtUnableDelete		:= ADR(bUnableDelete);
	p_UsrMgmtLoginSuccess		:= ADR(bLoginSuccess);
	p_UsrMgmtNmExist			:= ADR(bNmExist);
	p_UsrMgmtNmNotExist			:= ADR(bNmNotExist);
	p_UsrMgmtPwMismatch			:= ADR(bPwMismatch);
	p_UsrMgmtNmEmpty			:= ADR(bNmEmpty);
	p_UsrMgmtListFull			:= ADR(bListFull);
	p_UsrMgmtFileNotFound		:= ADR(bFileNotFound);
	
	(* Always Change If Project Change *)
	
END_PROGRAM