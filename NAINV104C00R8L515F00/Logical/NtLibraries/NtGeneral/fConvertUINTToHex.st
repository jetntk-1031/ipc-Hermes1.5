
(* Convert UINT To Hex *)
FUNCTION fConvertUINTToHex
	
	fConvertUINTToHex	:= TRUE;
	
	uiTemp1		:= uiDecimalIn;
	p_sHexOut	:= '';
	
	WHILE uiTemp1 <> 0 DO
		uiTemp2	:= uiTemp1 MOD 16;
		uiTemp1	:= uiTemp1 / 16;
		
		CASE uiTemp2 OF
			0:		p_sHexOut	:= CONCAT('0' , p_sHexOut);
			1:		p_sHexOut	:= CONCAT('1' , p_sHexOut);
			2:		p_sHexOut	:= CONCAT('2' , p_sHexOut);
			3:		p_sHexOut	:= CONCAT('3' , p_sHexOut);
			4:		p_sHexOut	:= CONCAT('4' , p_sHexOut);
			5:		p_sHexOut	:= CONCAT('5' , p_sHexOut);
			6:		p_sHexOut	:= CONCAT('6' , p_sHexOut);
			7:		p_sHexOut	:= CONCAT('7' , p_sHexOut);
			8:		p_sHexOut	:= CONCAT('8' , p_sHexOut);
			9:		p_sHexOut	:= CONCAT('9' , p_sHexOut);
			10:		p_sHexOut	:= CONCAT('A' , p_sHexOut);
			11:		p_sHexOut	:= CONCAT('B' , p_sHexOut);
			12:		p_sHexOut	:= CONCAT('C' , p_sHexOut);
			13:		p_sHexOut	:= CONCAT('D' , p_sHexOut);
			14:		p_sHexOut	:= CONCAT('E' , p_sHexOut);
			ELSE	p_sHexOut	:= CONCAT('F' , p_sHexOut);
		END_CASE
		
	END_WHILE
	
	IF LEN(p_sHexOut) = 0 THEN
		p_sHexOut	:= CONCAT('0000' , p_sHexOut);
	ELSIF LEN(p_sHexOut) = 1 THEN
		p_sHexOut	:= CONCAT('000' , p_sHexOut);
	ELSIF LEN(p_sHexOut) = 2 THEN
		p_sHexOut	:= CONCAT('00' , p_sHexOut);
	ELSIF LEN(p_sHexOut) = 3 THEN
		p_sHexOut	:= CONCAT('0' , p_sHexOut);
	END_IF
	
END_FUNCTION
