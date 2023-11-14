
ACTION Act_OptP0002UpdtData:
	
	IF bLoginSuccess = FALSE THEN
		tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx		:= 0;
		tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx			:= 0;	
	ELSE
		tyP0002Menu.tyMenu.tyBtnLogin.usiBitmapIdx		:= 1;
		tyP0002Menu.tyMenu.tyBtnLogin.usiTxtIdx			:= 1;
	END_IF
	
END_ACTION
