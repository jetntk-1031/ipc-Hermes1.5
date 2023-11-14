(** 2020-09-10 **)
ACTION Act_Background_Info:
	IF usiAccDataStep <> 0 AND usiBFAccDataStep <> 0 THEN
		//Info Message for "BoardAvailable" and "BoardForecast"
		p_sInfoMsg		:= 'Upstream Hermes Request New Recipe';
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Name : ');
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , p_sRecipeNm);
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'Old Recipe Width : ');
		sWidthInUMTemp	:= DINT_TO_STRING(p_diWidthInUM / 1000);
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Name : ');
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , sReqRecipeNm);
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , '$r$n');
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , 'New Recipe Width : ');
		sWidthInUMTemp	:= DINT_TO_STRING(diReqWidthInUM / 1000);
		p_sInfoMsg		:= CONCAT(p_sInfoMsg , sWidthInUMTemp);
	END_IF
	
	IF bRcvBoardInfoOk THEN
		//Info Message 1 for "SendBoardInfo"
		p_sInfoMsg1     := 'Board Info Received From Upstream';
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , '$r$n');
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , 'PCB Transfer to Last Zone is Blocked');
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , '$r$n');
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , 'Please Insert PCB to Last Zone Outlet');
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , '$r$n');
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , 'and PCB Data Will Be Overwritten');
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , '$r$n');
		p_sInfoMsg1		:= CONCAT(p_sInfoMsg1 , 'To Cancel,unpress the Query Board Info Button');
	END_IF 
	
	IF bRcvBoardInfoIncompl THEN
		p_sInfoMsg2     := 'Board Info Not Found From Upstream';
	END_IF
	
	
END_ACTION
