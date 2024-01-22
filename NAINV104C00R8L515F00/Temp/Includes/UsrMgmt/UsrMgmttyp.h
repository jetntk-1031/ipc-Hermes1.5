/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031252_31_
#define _BUR_1700031252_31_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum eUsrMgmtAction
{	UsrMgmtActIdle,
	UsrMgmtActCreateDir,
	UsrMgmtActLogin,
	UsrMgmtActBypassLogin,
	UsrMgmtActLogout,
	UsrMgmtActAdd,
	UsrMgmtActEdit,
	UsrMgmtActDel,
	UsrMgmtActSaveAccessRight,
	UsrMgmtActReadData
} eUsrMgmtAction;

typedef enum eUsrMgmtAutLvl
{	UsrMgmtLvl1,
	UsrMgmtLvl2,
	UsrMgmtLvl3,
	UsrMgmtAdmin,
	UsrMgmtNtEngr,
	UsrMgmtNtAdmin
} eUsrMgmtAutLvl;

typedef struct tyUsrMgmtParam
{	plcstring sUsrNm[31];
	plcstring sPw[31];
	enum eUsrMgmtAutLvl eUsrLvl;
} tyUsrMgmtParam;

typedef struct tyUsrMgmtAccessRight
{	plcbit bOpt;
	plcbit bProdSel;
	plcbit bMagSel;
	plcbit bMcInfo;
	plcbit bAlm;
	plcbit bBffrInfo;
	plcbit bOvenInfo;
	plcbit bMagInfo;
	plcbit bLFCtrl;
	plcbit bManual;
	plcbit bManualFBOnly;
	plcbit bSimulation;
	plcbit bProdSet;
	plcbit bMagSet;
	plcbit bMcSet;
	plcbit bLang;
	plcbit bUsrMgmt;
	plcbit bLFSet;
	plcbit bChgParam;
	plcstring sNm[31];
} tyUsrMgmtAccessRight;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyUsrMgmtFullDat
{	struct tyUsrMgmtParam a_tyAllList[50];
	struct tyUsrMgmtAccessRight tyAccessRightLvl1;
	struct tyUsrMgmtAccessRight tyAccessRightLvl2;
	struct tyUsrMgmtAccessRight tyAccessRightLvl3;
} tyUsrMgmtFullDat;
#else
/* Data type tyUsrMgmtFullDat not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/UsrMgmt/UsrMgmt.typ\\\" scope \\\"global\\\"\\n\"");

/* Additional IEC dependencies */
__asm__(".ascii \"iecdep \\\"Logical/UsrMgmt/UsrMgmt.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031252_31_ */

