(** 2019-03-22 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbWaitTm(IN := FALSE);
	
	fbInit.bOnDirMod	:= p_bOnDirMod;
	fbInit.bStartSen	:= TRUE;
	fbInit.tMtrOffDlyTm	:= p_tMtrOffDlyTm;
	fbInit(bEn := FALSE);
	
	fbEnt.bOnDirMod		:= p_bOnDirMod;
	fbEnt.bStartSen		:= TRUE;
	fbEnt.tMtrOffDlyTm	:= p_tMtrOffDlyTm;
	fbEnt(bEn := FALSE);
	
	fbRev.bOnDirMod		:= p_bOnDirMod;
	fbRev.tTxDlyTm		:= DINT_TO_TIME(p_diRevDlyTm);
	fbRev.tMtrOffDlyTm	:= p_tMtrOffDlyTm;
	fbRev(bEn := FALSE);
	
	fbPreExit.bOnDirMod		:= p_bOnDirMod;
	fbPreExit.bStartSen		:= TRUE;
	fbPreExit.tMtrOffDlyTm	:= p_tMtrOffDlyTm;
	fbPreExit(bEn := FALSE);
	
	fbExit.bOnDirMod	:= p_bOnDirMod;
	fbExit.bStartSen	:= TRUE;
	fbExit.tMtrOffDlyTm	:= p_tMtrOffDlyTm;
	fbExit(bEn := FALSE);
	
	fbExit1.bOnDirMod		:= p_bOnDirMod;
	fbExit1.bStartSen		:= TRUE;
	fbExit1.tMtrOffDlyTm	:= p_tMtrOffDlyTm;
	fbExit1(bEn := FALSE);
	
	fbStop(bEn := FALSE);
	
	fbPshrExtChk.tTimeOut	:= p_tPshrExtTO;
	fbPshrExtChk(bEn := FALSE);
	
	fbPshrRetChk.tTimeOut	:= p_tPshrRetTO;
	fbPshrRetChk(bEn := FALSE);
	
	fbPullerExtChk.tTimeOut	:= p_tPullerExtTO;
	fbPullerExtChk(bEn := FALSE);
	
	fbPullerRetChk.tTimeOut	:= p_tPullerRetTO;
	fbPullerRetChk(bEn := FALSE);
	
	fbRotHomeChk.tTimeOut	:= p_tRotHomeTO;
	fbRotHomeChk(bEn := FALSE);
	
	fbRotRemoteChk.tTimeOut	:= p_tRotRemoteTO;
	fbRotRemoteChk(bEn := FALSE);
	
	fbRejectUpChk.tTimeOut	:= p_tRejectUpTO;
	fbRejectUpChk(bEn := FALSE);
	
	fbRejectDownChk.tTimeOut	:= p_tRejectDownTO;
	fbRejectDownChk(bEn := FALSE);
	
END_ACTION
