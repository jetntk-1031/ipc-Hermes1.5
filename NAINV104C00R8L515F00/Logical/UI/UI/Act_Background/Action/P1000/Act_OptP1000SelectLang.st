
ACTION Act_OptP1000SelectLang:
	
	// Select English Language
	IF tyP1000Lang.tyLang.tyBtnEnglish.bRtCompl = TRUE THEN
		tyP1000Lang.tyLang.tyBtnEnglish.bRtCompl	:= FALSE;
		
		tyP1000Lang.tyLang.tyBtnEnglish.bValue		:= TRUE;
		tyP1000Lang.tyLang.tyBtnGerman.bValue		:= FALSE;
		tyP1000Lang.tyLang.tyBtnChinese.bValue		:= FALSE;
		
		tyP1000Lang.tyLang.tyBtnEnglish.bRtLk		:= TRUE;
		tyP1000Lang.tyLang.tyBtnGerman.bRtLk		:= FALSE;
		tyP1000Lang.tyLang.tyBtnChinese.bRtLk		:= FALSE;
		
		tyProperty.tyVisu.usiChgLang	:= 0;
		
		tyMcParamWr.usiLang	:= 0;
		
	// Select German Language
	ELSIF tyP1000Lang.tyLang.tyBtnGerman.bRtCompl = TRUE THEN
		tyP1000Lang.tyLang.tyBtnGerman.bRtCompl	:= FALSE;
		
		tyP1000Lang.tyLang.tyBtnEnglish.bValue	:= FALSE;
		tyP1000Lang.tyLang.tyBtnGerman.bValue	:= TRUE;
		tyP1000Lang.tyLang.tyBtnChinese.bValue	:= FALSE;
		
		tyP1000Lang.tyLang.tyBtnEnglish.bRtLk	:= FALSE;
		tyP1000Lang.tyLang.tyBtnGerman.bRtLk	:= TRUE;
		tyP1000Lang.tyLang.tyBtnChinese.bRtLk	:= FALSE;
		
		tyProperty.tyVisu.usiChgLang	:= 1;
		
		tyMcParamWr.usiLang	:= 1;
		
	// Select Chinese Language
	ELSIF tyP1000Lang.tyLang.tyBtnChinese.bRtCompl = TRUE THEN
		tyP1000Lang.tyLang.tyBtnChinese.bRtCompl	:= FALSE;
		
		tyP1000Lang.tyLang.tyBtnEnglish.bValue		:= FALSE;
		tyP1000Lang.tyLang.tyBtnGerman.bValue		:= FALSE;
		tyP1000Lang.tyLang.tyBtnChinese.bValue		:= TRUE;
		
		tyP1000Lang.tyLang.tyBtnEnglish.bRtLk		:= FALSE;
		tyP1000Lang.tyLang.tyBtnGerman.bRtLk		:= FALSE;
		tyP1000Lang.tyLang.tyBtnChinese.bRtLk		:= TRUE;
		
		tyProperty.tyVisu.usiChgLang	:= 2;
		
		tyMcParamWr.usiLang	:= 2;
		
	END_IF
	
END_ACTION
