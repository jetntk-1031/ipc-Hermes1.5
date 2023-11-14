/* Automation Studio generated header file */
/* Do not edit ! */
/* NtRecipe 5.00.5 */

#ifndef _NTRECIPE_
#define _NTRECIPE_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtRecipe_VERSION
#define _NtRecipe_VERSION 5.00.5
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyRecipeInternal
{	plcbit bNmExist;
	unsigned long udi;
	unsigned long udiRecipeNmOffset;
	unsigned long udiRecipeToDelIdx;
	unsigned long udiFilterCntr;
	plcstring bNmTemp[255];
	unsigned long udiRcpCntr;
	unsigned long udiSortCntr;
	unsigned long udiSortCntr2;
	unsigned long udiLastCharCntr;
	plcstring sTempString[255];
	plcstring sSortAlphabetClass[255];
	plcstring sSortData1[255];
	plcstring sSortData2[255];
	signed short j;
	signed short i;
	signed short iShorterNm;
	signed long diAlphabet1Class;
	signed long diAlphabet2Class;
	plcbit bBypassChk;
	plcbit bUpperCase1;
	plcbit bUpperCase2;
	plcbit bLowerCase1;
	plcbit bLowerCase2;
	signed short iQuickSortNo;
	plcstring sDebugFilter[101];
	plcstring sDebugString[101];
	plcstring sDebug[101];
} tyRecipeInternal;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC unsigned long fRecipeAddEdit(unsigned long p_NewRecipe, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeAdd(unsigned long p_NewRecipe, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeEdit(unsigned long p_NewRecipe, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeDelete(unsigned long p_RecipeToDel, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeGetInfo(plcstring* sName, unsigned long p_RecipeInfo, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeSearch(plcstring* sName, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeFilter(plcstring* sSearch, unsigned long p_AllRecipeFilter, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo, unsigned long udiStartIndex, unsigned long udiEndIndex, signed short* iFilterCtr);
_BUR_PUBLIC plcbit fRecipeNmFilter(plcstring* sSearch, unsigned long p_Data, unsigned long udiLen);
_BUR_PUBLIC unsigned long fRecipeSort(plcstring* sSearch, unsigned long p_AllRecipeSort, unsigned long p_AllRecipe, unsigned long p_AllRecipeFilter, unsigned long p_TempRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo, unsigned short uiSortNo, unsigned long p_iDebug);
_BUR_PUBLIC plcbit fRecipeNmCompare(unsigned long p_Data, unsigned long p_Data2, unsigned long udiRecipeNmSize, unsigned long p_iDebug);
_BUR_PUBLIC unsigned long fRecipeLastCharFilter(plcstring* sEndChar, unsigned long p_AllRecipeLastChar, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC plcbit fRecipeLastCharCompare(plcstring* sEndChar, unsigned long p_Data);


#ifdef __cplusplus
};
#endif
#endif /* _NTRECIPE_ */

