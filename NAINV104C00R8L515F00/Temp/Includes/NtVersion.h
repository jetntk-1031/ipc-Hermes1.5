/* Automation Studio generated header file */
/* Do not edit ! */
/* NtVersion 5.01.1 */

#ifndef _NTVERSION_
#define _NTVERSION_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtVersion_VERSION
#define _NtVersion_VERSION 5.01.1
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define c_diLibNum 100
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long c_diLibNum;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct tyInvalidCharChkInFileNm
{	plcstring sVersion[11];
	plcstring sName[11];
	plcbit bSkipVersionChk;
	signed short i;
	signed short j;
} tyInvalidCharChkInFileNm;

typedef struct tyLibrariesInternal
{	plcstring sVersion[11];
	plcstring sName[11];
	plcstring sInvalidChar[2];
	plcbit bLibMismatch;
	plcbit bFileCheckDone;
	plcbit bLibCheckDone;
	signed long di;
	struct MoVerStruc_typ tyMoVer;
} tyLibrariesInternal;

typedef struct tyLibrariesVer
{	plcstring sName[11];
	plcstring sVersion[11];
} tyLibrariesVer;

typedef struct fbChkFileValidity
{
	/* VAR_INPUT (analog) */
	struct tyLibrariesVer a_tyLibraryVer[101];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLibrariesInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbChkFileValidity_typ;

typedef struct fbChkLibrariesVer
{
	/* VAR_INPUT (analog) */
	plcbit (*pa_bVerMismatch)[101];
	struct tyLibrariesVer a_tyLibraryVer[101];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLibrariesInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbChkLibrariesVer_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbChkFileValidity(struct fbChkFileValidity* inst);
_BUR_PUBLIC void fbChkLibrariesVer(struct fbChkLibrariesVer* inst);
_BUR_PUBLIC plcbit fGetLibrariesVer(plcstring* (*pa_sVersion)[101], plcstring* a_sName[101]);
_BUR_PUBLIC plcbit fInvalidCharInFileChk(plcstring* sNameChk, plcstring* sVersionChk, plcstring* sInvalidChar);


#ifdef __cplusplus
};
#endif
#endif /* _NTVERSION_ */

