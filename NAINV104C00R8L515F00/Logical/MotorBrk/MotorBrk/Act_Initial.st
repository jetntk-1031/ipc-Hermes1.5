(** 2019-03-22 **)
ACTION Act_Initial:
	
	//Initial
	sStatTxt	:= a_sStatText[eStat];
	
	fbRotCW.bOnDirMod		:= p_bOnDirMod;
	fbRotCW.tMtrOnDlyTm		:= DINT_TO_TIME(p_diMtrOnDlyTm);
	fbRotCW.tMtrOffDlyTm	:= DINT_TO_TIME(p_diMtrOffDlyTm);
	fbRotCW.tBrkOnDlyTm		:= DINT_TO_TIME(p_diBrkOnDlyTm);
	fbRotCW.tBrkOffDlyTm	:= DINT_TO_TIME(p_diBrkOffDlyTm);
	fbRotCW.tTxDlyTm		:= DINT_TO_TIME(p_diTimeOut);
	fbRotCW.tMtrSigOnDlyTm		:= DINT_TO_TIME(p_diMtrSigOnDlyTm);			//Locally
	fbRotCW.tMtrDirOffDlyTm		:= DINT_TO_TIME(p_diMtrDirOffDlyTm);		//Locally
//	fbRotCW.tMtrBrkOnDlyTm		:= DINT_TO_TIME(p_diMtrBrkOnDlyTm);			//Locally
	fbRotCW.bStartSen		:= TRUE;
	fbRotCW.bConvLToR		:= TRUE;
	fbRotCW(bEn := FALSE);
	
	fbRotCCW.bOnDirMod		:= p_bOnDirMod;
	fbRotCCW.tMtrOnDlyTm	:= DINT_TO_TIME(p_diMtrOnDlyTm);
	fbRotCCW.tMtrOffDlyTm	:= DINT_TO_TIME(p_diMtrOffDlyTm);
	fbRotCCW.tBrkOnDlyTm	:= DINT_TO_TIME(p_diBrkOnDlyTm);
	fbRotCCW.tBrkOffDlyTm	:= DINT_TO_TIME(p_diBrkOffDlyTm);
	fbRotCCW.tTxDlyTm		:= DINT_TO_TIME(p_diTimeOut);
	fbRotCCW.bStartSen		:= TRUE;
	fbRotCCW.bConvLToR		:= FALSE;
	fbRotCCW(bEn := FALSE);
	
	fbMtrBrkRlsOn(bEn := FALSE);
	fbMtrBrkRlsOff(bEn := FALSE);
	
	fbStop(bEn := FALSE);
	
	
END_ACTION
