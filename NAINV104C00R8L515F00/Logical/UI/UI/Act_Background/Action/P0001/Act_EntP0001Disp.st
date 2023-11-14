
ACTION Act_EntP0001Disp: 
	
	//UI Property Access Address
	p_tyVisu ACCESS ADR(tyProperty.tyVisu);
	
	p_tyKeypad ACCESS ADR(tyProperty.tyKeypad);
	
	p_tyTxtSnippets ACCESS ADR(tyProperty.tyUITxtSnippets);
		
	p_tyC0008MsgBox ACCESS ADR(tyP0001Startup.tyMsgBoxHide);

	//Access Address
	p_tyP0001Startup ACCESS ADR(tyP0001Startup.tyStartup);
	
	p_tyP0001Initial ACCESS ADR(tyP0001Startup.tyInitial);
	
	fUIInRtStatHide(ADR(tyP0001Startup.tyInitial.tyLyr.uiRtStat));
	
END_ACTION
