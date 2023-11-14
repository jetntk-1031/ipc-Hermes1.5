
FUNCTION fRecipeAddEdit : UDINT (*Recipe Add & Edit*)
	VAR_INPUT
		p_NewRecipe : UDINT; (*Pointer To New Recipe*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeAdd : UDINT (*Recipe Add*)
	VAR_INPUT
		p_NewRecipe : UDINT; (*Pointer To New Recipe*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeEdit : UDINT (*Recipe Edit*)
	VAR_INPUT
		p_NewRecipe : UDINT; (*Pointer To New Recipe*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeDelete : UDINT (*Recipe Delete*)
	VAR_INPUT
		p_RecipeToDel : UDINT; (*Pointer to Recipe To Delete*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeGetInfo : UDINT (*Get Recipe Info*)
	VAR_INPUT
		sName : STRING[254]; (*Name To Search*)
		p_RecipeInfo : UDINT; (*Recipe Info Base On Search Name*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeSearch : UDINT (*Search Recipe*)
	VAR_INPUT
		sName : STRING[254]; (*Name To Search*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeFilter : UDINT (*Recipe Filter*)
	VAR_INPUT
		sSearch : STRING[254]; (*Keyword To Search*)
		p_AllRecipeFilter : UDINT; (*Pointer to All Recipe With Filter*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
		udiStartIndex : UDINT;
		udiEndIndex : UDINT;
	END_VAR
	VAR_IN_OUT
		iFilterCtr : INT;
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeNmFilter : BOOL (*Recipe Name Filter*)
	VAR_INPUT
		sSearch : STRING[254]; (*Keyword To Search*)
		p_Data : UDINT; (*Pointer to Data To Filter*)
		udiLen : UDINT; (*Length Of Data*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeSort : UDINT (*Recipe Sort*)
	VAR_INPUT
		sSearch : STRING[254]; (*Keyword To Search*)
		p_AllRecipeSort : UDINT; (*Pointer to All Recipe With Sort*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		p_AllRecipeFilter : UDINT; (*Pointer to All Recipe With Filter*)
		p_TempRecipe : UDINT; (*Pointer toTemp Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
		uiSortNo : UINT; (*Keyword To Search*)
		p_iDebug : UDINT; (*Keyword To Search*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeNmCompare : BOOL (*Recipe Name Compare*)
	VAR_INPUT
		p_Data : UDINT; (*Pointer to First Recipe Name*)
		p_Data2 : UDINT; (*Pointer to Second Recipe Name*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		p_iDebug : UDINT; (*Keyword To Search*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeLastCharFilter : UDINT (*Recipe Last Char Filter*)
	VAR_INPUT
		sEndChar : STRING[254]; (*Keyword To Search*)
		p_AllRecipeLastChar : UDINT; (*Pointer to All Recipe With Filter*)
		p_AllRecipe : UDINT; (*Pointer to All Recipe*)
		udiSingleRecipeSize : UDINT; (*Single Recipe Size*)
		p_FirstRecipeNm : UDINT; (*Pointer To First Product Name Position For Compare And Update Purpose*)
		udiRecipeNmSize : UDINT; (*Product Name Size*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fRecipeLastCharCompare : BOOL (*Recipe Last Char Compare*)
	VAR_INPUT
		sEndChar : STRING[254]; (*Keyword To Search*)
		p_Data : UDINT; (*Pointer to Data To Filter*)
	END_VAR
	VAR
		tyInternal : tyRecipeInternal; (*Local Variables*)
	END_VAR
END_FUNCTION
