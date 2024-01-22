#ifndef __AS__TYPE_
#define __AS__TYPE_
static signed long __AS__STRING_CMP(char* pstr1, char* pstr2);
static unsigned long __AS__MEMSET(unsigned long pDest, unsigned char value, unsigned long length);
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_eUsrMgmtAction
#define __AS__TYPE_eUsrMgmtAction
typedef enum eUsrMgmtAction
{	UsrMgmtActIdle = 0,
	UsrMgmtActCreateDir = 1,
	UsrMgmtActLogin = 2,
	UsrMgmtActBypassLogin = 3,
	UsrMgmtActLogout = 4,
	UsrMgmtActAdd = 5,
	UsrMgmtActEdit = 6,
	UsrMgmtActDel = 7,
	UsrMgmtActSaveAccessRight = 8,
	UsrMgmtActReadData = 9,
} eUsrMgmtAction;
#endif

#ifndef __AS__TYPE_eUsrMgmtAutLvl
#define __AS__TYPE_eUsrMgmtAutLvl
typedef enum eUsrMgmtAutLvl
{	UsrMgmtLvl1 = 0,
	UsrMgmtLvl2 = 1,
	UsrMgmtLvl3 = 2,
	UsrMgmtAdmin = 3,
	UsrMgmtNtEngr = 4,
	UsrMgmtNtAdmin = 5,
} eUsrMgmtAutLvl;
#endif

#ifndef __AS__TYPE_tyUsrMgmtParam
#define __AS__TYPE_tyUsrMgmtParam
typedef struct tyUsrMgmtParam
{	plcstring sUsrNm[31];
	plcstring sPw[31];
	eUsrMgmtAutLvl eUsrLvl;
} tyUsrMgmtParam;
#endif

#ifndef __AS__TYPE_tyUsrMgmtAccessRight
#define __AS__TYPE_tyUsrMgmtAccessRight
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
#endif

#ifndef __AS__TYPE_tyUsrMgmtFullDat
#define __AS__TYPE_tyUsrMgmtFullDat
typedef struct tyUsrMgmtFullDat
{	struct tyUsrMgmtParam a_tyAllList[50];
	tyUsrMgmtAccessRight tyAccessRightLvl1;
	tyUsrMgmtAccessRight tyAccessRightLvl2;
	tyUsrMgmtAccessRight tyAccessRightLvl3;
} tyUsrMgmtFullDat;
#endif

struct AsMemPartDestroy
{	unsigned long ident;
	unsigned short status;
	plcbit enable;
};
_BUR_PUBLIC void AsMemPartDestroy(struct AsMemPartDestroy* inst);
#ifndef __AS__TYPE_tyMemDestroyInternal
#define __AS__TYPE_tyMemDestroyInternal
typedef struct tyMemDestroyInternal
{	struct AsMemPartDestroy fbMemPartDestroy;
} tyMemDestroyInternal;
#endif

struct AsMemPartAlloc
{	unsigned long ident;
	unsigned long len;
	unsigned short status;
	unsigned long mem;
	plcbit enable;
};
_BUR_PUBLIC void AsMemPartAlloc(struct AsMemPartAlloc* inst);
struct AsMemPartCreate
{	unsigned long len;
	unsigned short status;
	unsigned long ident;
	plcbit enable;
};
_BUR_PUBLIC void AsMemPartCreate(struct AsMemPartCreate* inst);
#ifndef __AS__TYPE_tyMemCreateInternal
#define __AS__TYPE_tyMemCreateInternal
typedef struct tyMemCreateInternal
{	struct AsMemPartAlloc fbMemPartAlloc;
	struct AsMemPartCreate fbMemPartCreate;
	unsigned char usiStep;
} tyMemCreateInternal;
#endif

struct FileClose
{	unsigned long ident;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileClose(struct FileClose* inst);
#ifndef __AS__TYPE_tyFileCloseInternal
#define __AS__TYPE_tyFileCloseInternal
typedef struct tyFileCloseInternal
{	struct FileClose fbFileClose;
} tyFileCloseInternal;
#endif

struct fbFileClose
{	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileCloseInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileClose(struct fbFileClose* inst);
struct FileCreate
{	unsigned long pDevice;
	unsigned long pFile;
	unsigned short status;
	unsigned long ident;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileCreate(struct FileCreate* inst);
struct FileOpen
{	unsigned long pDevice;
	unsigned long pFile;
	unsigned char mode;
	unsigned short status;
	unsigned long ident;
	unsigned long filelen;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileOpen(struct FileOpen* inst);
#ifndef __AS__TYPE_tyFileOpenCreateInternal
#define __AS__TYPE_tyFileOpenCreateInternal
typedef struct tyFileOpenCreateInternal
{	struct FileCreate fbFileCreate;
	struct FileOpen fbFileOpen;
	unsigned char usiStep;
} tyFileOpenCreateInternal;
#endif

struct fbFileOpenCreate
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileOpenCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOpenCreate(struct fbFileOpenCreate* inst);
struct FileWriteEx
{	unsigned long ident;
	unsigned long offset;
	unsigned long pSrc;
	unsigned long len;
	unsigned long option;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileWriteEx(struct FileWriteEx* inst);
#ifndef __AS__TYPE_tyFileWriteInternal
#define __AS__TYPE_tyFileWriteInternal
typedef struct tyFileWriteInternal
{	struct FileWriteEx fbFileWrite;
} tyFileWriteInternal;
#endif

struct fbFileWrite
{	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned long udiStatus;
	tyFileWriteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileWrite(struct fbFileWrite* inst);
#ifndef __AS__TYPE_tyFileFullWriteInternal
#define __AS__TYPE_tyFileFullWriteInternal
typedef struct tyFileFullWriteInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileWrite fbFileWrite;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullWriteInternal;
#endif

struct fbFileFullWrite
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned long udiStatus;
	tyFileFullWriteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullWrite(struct fbFileFullWrite* inst);
struct fbMemCreate
{	unsigned long udiLen;
	unsigned long udiIdent;
	unsigned long p_Dest;
	unsigned long udiStatus;
	tyMemCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMemCreate(struct fbMemCreate* inst);
struct fbMemDestroy
{	unsigned long udiIdent;
	unsigned long udiStatus;
	tyMemDestroyInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbMemDestroy(struct fbMemDestroy* inst);
#ifndef __AS__TYPE_tyFileFullWriteEncryInternal
#define __AS__TYPE_tyFileFullWriteEncryInternal
typedef struct tyFileFullWriteEncryInternal
{	struct fbFileFullWrite fbFileWrite;
	struct fbMemCreate fbMemCreate;
	struct fbMemDestroy fbMemDestroy;
	unsigned long p_Dest;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullWriteEncryInternal;
#endif

#ifndef __AS__TYPE_tyFileOpenInternal
#define __AS__TYPE_tyFileOpenInternal
typedef struct tyFileOpenInternal
{	struct FileOpen fbFileOpen;
} tyFileOpenInternal;
#endif

struct fbFileOpen
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	unsigned long udiIdent;
	unsigned long udiStatus;
	tyFileOpenInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOpen(struct fbFileOpen* inst);
struct FileReadEx
{	unsigned long ident;
	unsigned long offset;
	unsigned long pDest;
	unsigned long len;
	unsigned short status;
	unsigned long bytesread;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileReadEx(struct FileReadEx* inst);
#ifndef __AS__TYPE_tyFileReadInternal
#define __AS__TYPE_tyFileReadInternal
typedef struct tyFileReadInternal
{	struct FileReadEx fbFileRead;
} tyFileReadInternal;
#endif

struct fbFileRead
{	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileRead(struct fbFileRead* inst);
#ifndef __AS__TYPE_tyFileFullReadInternal
#define __AS__TYPE_tyFileFullReadInternal
typedef struct tyFileFullReadInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpen fbFileOpen;
	struct fbFileRead fbFileRead;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullReadInternal;
#endif

struct fbFileFullRead
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileFullReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullRead(struct fbFileFullRead* inst);
#ifndef __AS__TYPE_tyFileFullReadEncryInternal
#define __AS__TYPE_tyFileFullReadEncryInternal
typedef struct tyFileFullReadEncryInternal
{	struct fbFileFullRead fbFileRead;
	struct fbMemCreate fbMemCreate;
	struct fbMemDestroy fbMemDestroy;
	unsigned long p_Dest;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullReadEncryInternal;
#endif

struct DirCreate
{	unsigned long pDevice;
	unsigned long pName;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirCreate(struct DirCreate* inst);
#ifndef __AS__TYPE_tyDirCreateInternal
#define __AS__TYPE_tyDirCreateInternal
typedef struct tyDirCreateInternal
{	struct DirCreate fbDirCreate;
} tyDirCreateInternal;
#endif

#ifndef __AS__TYPE_tyRecipeInternal
#define __AS__TYPE_tyRecipeInternal
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
#endif

#ifndef __AS__TYPE_eFBStatus
#define __AS__TYPE_eFBStatus
typedef enum eFBStatus
{	Idle = 0,
	Done = 1,
	Busy = 2,
	Error = 3,
} eFBStatus;
#endif

#ifndef __AS__TYPE_tyAlmTxt
#define __AS__TYPE_tyAlmTxt
typedef struct tyAlmTxt
{	plcstring sAlmText[201];
	plcstring sRcyText[201];
} tyAlmTxt;
#endif

#ifndef __AS__TYPE_eAlmSeverity
#define __AS__TYPE_eAlmSeverity
typedef enum eAlmSeverity
{	AlmSeverityNA = 0,
	AlmSeverityError = 1,
	AlmSeverityWarning = 2,
	AlmSeverityInfo = 3,
} eAlmSeverity;
#endif

#ifndef __AS__TYPE_tyAlmDat
#define __AS__TYPE_tyAlmDat
typedef struct tyAlmDat
{	unsigned long udiCode;
	eAlmSeverity eSeverity;
	plcstring sProgNm[16];
	plcstring sAlmMsg[201];
	plcstring sRcyMsg[201];
	unsigned long udiRunTime;
	unsigned long udiModuleNum;
	plcbit bAlm;
	plcbit bWarning;
} tyAlmDat;
#endif

_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
struct fbFileFullWriteEncry
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned char usiEncryptCode;
	unsigned long udiStatus;
	tyFileFullWriteEncryInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullWriteEncry(struct fbFileFullWriteEncry* inst);
struct fbFileFullReadEncry
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned char usiEncryptCode;
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	tyFileFullReadEncryInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullReadEncry(struct fbFileFullReadEncry* inst);
struct fbDirCreate
{	plcstring sDevice[81];
	plcstring sDirName[81];
	unsigned long udiStatus;
	tyDirCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirCreate(struct fbDirCreate* inst);
_BUR_PUBLIC unsigned long fRecipeAddEdit(unsigned long p_NewRecipe, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeAdd(unsigned long p_NewRecipe, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeDelete(unsigned long p_RecipeToDel, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_PUBLIC unsigned long fRecipeGetInfo(plcstring sName[255], unsigned long p_RecipeInfo, unsigned long p_AllRecipe, unsigned long udiSingleRecipeSize, unsigned long p_FirstRecipeNm, unsigned long udiRecipeNmSize, unsigned long udiAllRecipeNo);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL eUsrMgmtAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiMax);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL struct tyUsrMgmtParam(* p_tyInfoIn);
_BUR_LOCAL struct tyUsrMgmtAccessRight(* p_tyAccessRightLvl1);
_BUR_LOCAL struct tyUsrMgmtAccessRight(* p_tyAccessRightLvl2);
_BUR_LOCAL struct tyUsrMgmtAccessRight(* p_tyAccessRightLvl3);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eUsrMgmtAction eAct;
_BUR_LOCAL eUsrMgmtAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL tyUsrMgmtAccessRight tyCurrAccessRight;
_BUR_LOCAL tyUsrMgmtParam tyCurrUsr;
_BUR_LOCAL tyUsrMgmtFullDat tyFullData;
_BUR_LOCAL struct tyUsrMgmtParam a_tyLvl2List[50];
_BUR_LOCAL struct tyUsrMgmtParam a_tyLvl3List[50];
_BUR_LOCAL struct tyUsrMgmtParam a_tyAdminList[50];
_BUR_LOCAL plcbit bLastAdmin;
_BUR_LOCAL plcbit bUnableDelete;
_BUR_LOCAL plcbit bLoginSuccess;
_BUR_LOCAL plcbit bNmExist;
_BUR_LOCAL plcbit bNmNotExist;
_BUR_LOCAL plcbit bPwMismatch;
_BUR_LOCAL plcbit bNmEmpty;
_BUR_LOCAL plcbit bListFull;
_BUR_LOCAL plcbit bFileNotFound;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL tyUsrMgmtParam tyInfoIn;
_BUR_LOCAL tyUsrMgmtAccessRight tyAccessRightLvl1;
_BUR_LOCAL tyUsrMgmtAccessRight tyAccessRightLvl2;
_BUR_LOCAL tyUsrMgmtAccessRight tyAccessRightLvl3;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL unsigned long udiAddStatus;
_BUR_LOCAL tyUsrMgmtAccessRight tyAccessRightAdmin;
_BUR_LOCAL struct fbDirCreate fbDirCreate1;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbDirCreate fbDirCreate3;
_BUR_LOCAL struct fbFileFullReadEncry fbFileRead1;
_BUR_LOCAL struct fbFileFullWriteEncry fbFileWrite1;
_BUR_LOCAL tyUsrMgmtFullDat tyFullDataTemp;
_BUR_LOCAL tyUsrMgmtParam tyInfoOut;
_BUR_LOCAL unsigned long udi;
_BUR_LOCAL unsigned long udiCnt;
_BUR_LOCAL unsigned long udiCnt1;
_BUR_LOCAL unsigned long udiCnt2;
_BUR_LOCAL unsigned short udiModuleNum;
_GLOBAL unsigned long p_UIUsrMgmtAct;
_GLOBAL unsigned long p_UIUsrMgmtInfoIn;
_GLOBAL unsigned long p_UIUsrMgmtAccessRightLvl1Wr;
_GLOBAL unsigned long p_UIUsrMgmtAccessRightLvl2Wr;
_GLOBAL unsigned long p_UIUsrMgmtAccessRightLvl3Wr;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupUsrMgmtAct;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL plcstring g_sUsrMgmtProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_NtParamUsrMgmtProgNm;
_GLOBAL unsigned long c_udiUsrMgmtMax;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Alarm(void);
