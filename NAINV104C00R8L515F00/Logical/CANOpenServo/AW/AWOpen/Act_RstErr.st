(** 2020-03-16 **)
ACTION Act_RstErr:
	
	IF p_udiRstErr <> udiRstErrOld THEN
		bRstErr			:= TRUE;
		udiRstErrOld	:= p_udiRstErr;
	ELSE
		bRstErr			:= FALSE;
	END_IF
	
	tyParamOutDriver.uiCtrlword_6040.7	:= bRstErr;
	
END_ACTION
