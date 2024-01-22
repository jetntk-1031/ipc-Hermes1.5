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

#ifndef __AS__TYPE_eAlarmAction
#define __AS__TYPE_eAlarmAction
typedef enum eAlarmAction
{	AlarmActIdle = 0,
	AlarmActCreateDir = 1,
	AlarmActDeleteOldLog = 2,
	AlarmActReadHistory = 3,
	AlarmActWriteHistory = 4,
	AlarmActAppendLog = 5,
	AlarmActAppendLogWriteHistory = 6,
	AlarmActResetHistory = 7,
	AlarmActBGStartLog = 8,
	AlarmActBGStopLog = 9,
} eAlarmAction;
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

#ifndef __AS__TYPE_tyAlarmCurr
#define __AS__TYPE_tyAlarmCurr
typedef struct tyAlarmCurr
{	eAlmSeverity eSeverity;
	plcstring sMsg[301];
	plcbit bAlm;
	plcbit bWarning;
	unsigned long udiErrorCode;
	plcstring sProgNm[16];
	plcstring sDT[81];
	unsigned long udiModErrCode;
} tyAlarmCurr;
#endif

#ifndef __AS__TYPE_tyHistory
#define __AS__TYPE_tyHistory
typedef struct tyHistory
{	plcstring sDT[81];
	plcstring sProgNm[16];
	unsigned long udiModErrCode;
	unsigned long udiErrorCode;
} tyHistory;
#endif

#ifndef __AS__TYPE_fiDIR_READ_DATA
#define __AS__TYPE_fiDIR_READ_DATA
typedef struct fiDIR_READ_DATA
{	unsigned char Filename[260];
	plcdt Date;
	unsigned long Filelength;
} fiDIR_READ_DATA;
#endif

#ifndef __AS__TYPE_fiFILE_INFO
#define __AS__TYPE_fiFILE_INFO
typedef struct fiFILE_INFO
{	unsigned long size;
	unsigned long linkCnt;
	plcdt accTime;
	plcdt modTime;
	plcdt chgTime;
	unsigned long reserved[21];
} fiFILE_INFO;
#endif

struct DirInfo
{	unsigned long pDevice;
	unsigned long pPath;
	unsigned short status;
	unsigned long dirnum;
	unsigned long filenum;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirInfo(struct DirInfo* inst);
#ifndef __AS__TYPE_tyDirInfoInternal
#define __AS__TYPE_tyDirInfoInternal
typedef struct tyDirInfoInternal
{	struct DirInfo fbDirInfo;
} tyDirInfoInternal;
#endif

struct fbDirInfo
{	plcstring sDevice[81];
	plcstring sPath[81];
	unsigned long udiSubDirNum;
	unsigned long udiFileNum;
	unsigned long udiStatus;
	tyDirInfoInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirInfo(struct fbDirInfo* inst);
struct DirRead
{	unsigned long pDevice;
	unsigned long pPath;
	unsigned long entry;
	unsigned char option;
	unsigned long pData;
	unsigned long data_len;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void DirRead(struct DirRead* inst);
#ifndef __AS__TYPE_tyDirReadInternal
#define __AS__TYPE_tyDirReadInternal
typedef struct tyDirReadInternal
{	struct DirRead fbDirRead;
} tyDirReadInternal;
#endif

struct fbDirRead
{	plcstring sDevice[81];
	plcstring sPath[81];
	unsigned long udiEntry;
	unsigned char usiOption;
	fiDIR_READ_DATA tyDirReadData;
	unsigned long udiStatus;
	tyDirReadInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirRead(struct fbDirRead* inst);
struct FileDelete
{	unsigned long pDevice;
	unsigned long pName;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileDelete(struct FileDelete* inst);
#ifndef __AS__TYPE_tyFileDeleteInternal
#define __AS__TYPE_tyFileDeleteInternal
typedef struct tyFileDeleteInternal
{	struct FileDelete fbFileDelete;
} tyFileDeleteInternal;
#endif

struct fbFileDelete
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiStatus;
	tyFileDeleteInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileDelete(struct fbFileDelete* inst);
#ifndef __AS__TYPE_tyFileOldDelInternal
#define __AS__TYPE_tyFileOldDelInternal
typedef struct tyFileOldDelInternal
{	struct fbDirInfo fbDirInfo;
	struct fbDirRead fbDirRead;
	struct fbFileDelete fbFileDel;
	plcstring sFileNm[261];
	fiDIR_READ_DATA tyfiDIR_READ_DATA;
	unsigned long udiDTNow;
	unsigned long udiFileDT;
	unsigned long udiFileKeep;
	unsigned long udiFileNum;
	unsigned long udiKeywordLen;
	unsigned char usiStep;
} tyFileOldDelInternal;
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
struct FileInfo
{	unsigned long pDevice;
	unsigned long pName;
	unsigned long pInfo;
	unsigned short status;
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	plcbit enable;
};
_BUR_PUBLIC void FileInfo(struct FileInfo* inst);
#ifndef __AS__TYPE_tyFileInfoInternal
#define __AS__TYPE_tyFileInfoInternal
typedef struct tyFileInfoInternal
{	struct FileInfo fbFileInfo;
} tyFileInfoInternal;
#endif

struct fbFileInfo
{	plcstring sDevice[81];
	plcstring sFile[81];
	fiFILE_INFO tyFileInfo;
	unsigned long udiStatus;
	tyFileInfoInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileInfo(struct fbFileInfo* inst);
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
#ifndef __AS__TYPE_tyFileFullAppendInternal
#define __AS__TYPE_tyFileFullAppendInternal
typedef struct tyFileFullAppendInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileInfo fbFileInfo;
	struct fbFileWrite fbFileWrite;
	fiFILE_INFO tyFileInfo;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullAppendInternal;
#endif

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

#ifndef __AS__TYPE_tyAlmDispMsgInternal
#define __AS__TYPE_tyAlmDispMsgInternal
typedef struct tyAlmDispMsgInternal
{	plcstring sAlmTm[81];
	plcstring sErrCode[81];
} tyAlmDispMsgInternal;
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

struct TON
{	plctime PT;
	plctime ET;
	plctime StartTime;
	unsigned long Restart;
	plcbit IN;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void TON(struct TON* inst);
_BUR_PUBLIC signed short LEN(plcstring IN[32768]);
_BUR_PUBLIC plcstring* MID(plcstring IN[32768], signed short L, signed short P);
_BUR_PUBLIC plcstring* CONCAT(plcstring IN1[32768], plcstring IN2[32768]);
_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_PUBLIC unsigned long memmove(unsigned long pDest, unsigned long pSrc, unsigned long length);
_BUR_PUBLIC signed long memcmp(unsigned long pMem1, unsigned long pMem2, unsigned long length);
_BUR_PUBLIC plcstring* udint2str(unsigned long IN, plcstring pStr[81], unsigned long len);
_BUR_PUBLIC plcstring* dt2str(plcdt IN, plcstring pStr[81], unsigned long len);
struct fbFileOldDel
{	plcstring sDevice[81];
	plcstring sPath[81];
	plcstring sKeyword[81];
	plcdt dtDTNow;
	unsigned long udiFileKeepDay;
	unsigned long udiStatus;
	tyFileOldDelInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileOldDel(struct fbFileOldDel* inst);
struct fbFileFullAppend
{	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiStatus;
	tyFileFullAppendInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbFileFullAppend(struct fbFileFullAppend* inst);
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
struct fbDirCreate
{	plcstring sDevice[81];
	plcstring sDirName[81];
	unsigned long udiStatus;
	tyDirCreateInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbDirCreate(struct fbDirCreate* inst);
_BUR_PUBLIC plcbit fLogAlmDispMsg(plcstring p_sAlmDispMsg[301], plcdt dtDateTime, plcstring sPrefix[11], unsigned long udiErrID, plcstring sErrMsg[201]);
_BUR_PUBLIC plcbit fLogDTConvert(plcstring p_sDTOut[81], plcdt dtIn);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDIAlmData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDIAlmData2);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUsrMgmtAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSSMEMAAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDSSMEMAAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSSMEMA2AlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkMcParamAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkNtParamAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkProdRcpAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkAWAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkAWAlmData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkAWAlmData2);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkAWAlmData3);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkMotorBrkAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkTimeAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkTimeAlmData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUsrFolderAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLibVerAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkHWInfoAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkConvAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkMcAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkMcAlmData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkPneuNoSenStopperAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkPneuNoSenClampAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkPneu2SenInShutterAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkPneu2SenOutShuttrAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkPneu2SenClamp1AlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkPneu2SenClamp2AlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkPneu2SenClamp3AlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkOpsInvertAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkOpsInvertAlmData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkHermesAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSHermesAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSHermesAlmData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSHermesAlmData2);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSHermesAlmData3);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSHermesAlmData4);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSHermesAlmData5);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkUSHermesInfoData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDSHermesAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDSHermesAlmData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDSHermesAlmData2);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDSHermesAlmData3);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDSHermesAlmData4);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkDSHermesInfoData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLFLeaderAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLFFollowerAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLFFollowerInfoData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLFFollowerInfoData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkFollower1AlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkFollower1InfoData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkFollower1InfoData1);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLCSMngRcpAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLCSLFAlmData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkLCSLFInfoData);
_BUR_LOCAL struct tyAlmDat(* p_tyLinkMpProdRcpAlmData);
_BUR_LOCAL struct TON fbDlyTmr;
_BUR_LOCAL struct TON fbDeleteLogTmr;
_BUR_LOCAL unsigned long(* p_udiCurrMax);
_BUR_LOCAL unsigned long(* p_udiHistoryMax);
_BUR_LOCAL eAlarmAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcdt(* p_dtCurrDT);
_BUR_LOCAL struct tyAlmDat(* pa_tyAlmData)[200];
_BUR_LOCAL unsigned long(* p_udiFileKeepDay);
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL plcbit(* p_bStartupUISettingsLoadDone);
_BUR_LOCAL eAlarmAction eAct;
_BUR_LOCAL eAlarmAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL plcbit bErr;
_BUR_LOCAL plcbit bWarning;
_BUR_LOCAL struct tyAlarmCurr a_tyCurrList[200];
_BUR_LOCAL plcstring a_sRecoveryList[200][201];
_BUR_LOCAL unsigned long a_udiRecoveryList[200];
_BUR_LOCAL plcbit bInfo;
_BUR_LOCAL plcstring sInfoMsg[201];
_BUR_LOCAL plcbit bHistoryFileNotFound;
_BUR_LOCAL plcbit bInfoLF;
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL struct tyAlmDat a_tyAlmData[200];
_BUR_LOCAL unsigned long udiFileKeepDay;
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bAlarmLog;
_BUR_LOCAL unsigned char usiStep;
_BUR_LOCAL unsigned long udi;
_BUR_LOCAL signed short iInfoCntr;
_BUR_LOCAL plcstring sAlmMsg[301];
_BUR_LOCAL unsigned long udiAlmCntr;
_BUR_LOCAL unsigned long udiLogCntr;
_BUR_LOCAL unsigned long udiWriteLogCntr;
_BUR_LOCAL plcstring a_sLogList[200][201];
_BUR_LOCAL plcbit bAlmUpdt;
_BUR_LOCAL plcdt dtCurrDTTemp;
_BUR_LOCAL unsigned long a_udiRunTimeOld[200];
_BUR_LOCAL struct fbDirCreate fbDirCreate1;
_BUR_LOCAL struct fbDirCreate fbDirCreate2;
_BUR_LOCAL struct fbFileFullAppend fbFileAppend1;
_BUR_LOCAL struct fbFileOldDel fbFileOldDel1;
_BUR_LOCAL struct fbFileFullRead fbFileRead1;
_BUR_LOCAL struct fbFileFullWrite fbFileWrite1;
_BUR_LOCAL unsigned long udi1;
_BUR_LOCAL unsigned long udi2;
_BUR_LOCAL unsigned long udiRecorded[200];
_BUR_LOCAL unsigned long udiRecorded1;
_BUR_LOCAL plcbit bRstWarning;
_BUR_LOCAL unsigned long udiWarningMax;
_BUR_LOCAL plcstring sWarningMsg[301];
_BUR_LOCAL plcstring sWarningID[81];
_BUR_LOCAL plcstring sWarningCompareMsg[301];
_BUR_LOCAL struct tyAlarmCurr a_tyWarningCurrList[200];
_BUR_LOCAL struct tyHistory a_tyHistoryList[300];
_BUR_LOCAL plcbit WarningListOccur;
_BUR_LOCAL unsigned long udiErrorCode;
_BUR_LOCAL plcstring sDT[81];
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_StartupAlarmAct;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL unsigned long p_StartupUISettingsLoadDone;
_GLOBAL unsigned long p_UsrFolderAlmData;
_GLOBAL unsigned long p_LibVerAlmData;
_GLOBAL unsigned long p_TimeAlmData;
_GLOBAL unsigned long p_TimeAlmData1;
_GLOBAL unsigned long p_TimeCurrDT;
_GLOBAL unsigned long p_HWInfoAlmData;
_GLOBAL unsigned long c_udiAlarmCurrMax;
_GLOBAL unsigned long c_udiAlarmHistoryMax;
_GLOBAL plcstring g_sAlarmProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_ProdRcpAlmData;
_GLOBAL unsigned long p_MpProdRcpAlmData;
_GLOBAL unsigned long p_McParamAlmData;
_GLOBAL unsigned long p_NtParamAlmData;
_GLOBAL unsigned long p_NtParamAlmProgNm;
_GLOBAL unsigned long p_NtParamAlmFileKeepDay;
_GLOBAL unsigned long p_UsrMgmtAlmData;
_GLOBAL unsigned long p_USSMEMAAlmData;
_GLOBAL unsigned long p_DSSMEMAAlmData;
_GLOBAL unsigned long p_USSMEMA2AlmData;
_GLOBAL unsigned long p_PneuNoSenStopperAlmData;
_GLOBAL unsigned long p_PneuNoSenClampAlmData;
_GLOBAL unsigned long p_Pneu2SenInShutterAlmData;
_GLOBAL unsigned long p_Pneu2SenOutShutterAlmData;
_GLOBAL unsigned long p_Pneu2SenClamp1AlmData;
_GLOBAL unsigned long p_Pneu2SenClamp2AlmData;
_GLOBAL unsigned long p_Pneu2SenClamp3AlmData;
_GLOBAL unsigned long p_ConvAlmData;
_GLOBAL unsigned long p_AWOpenAlmData;
_GLOBAL unsigned long p_AWOpenAlmData1;
_GLOBAL unsigned long p_AWOpenAlmData2;
_GLOBAL unsigned long p_AWOpenAlmData3;
_GLOBAL unsigned long p_DIAlmData1;
_GLOBAL unsigned long p_DIAlmData2;
_GLOBAL unsigned long p_HermesAlmData;
_GLOBAL unsigned long p_USHermesAlmData;
_GLOBAL unsigned long p_USHermesAlmData1;
_GLOBAL unsigned long p_USHermesAlmData2;
_GLOBAL unsigned long p_USHermesAlmData3;
_GLOBAL unsigned long p_USHermesAlmData4;
_GLOBAL unsigned long p_USHermesAlmData5;
_GLOBAL unsigned long p_USHermesInfoData;
_GLOBAL unsigned long p_DSHermesAlmData;
_GLOBAL unsigned long p_DSHermesAlmData1;
_GLOBAL unsigned long p_DSHermesAlmData2;
_GLOBAL unsigned long p_DSHermesAlmData3;
_GLOBAL unsigned long p_DSHermesAlmData4;
_GLOBAL unsigned long p_DSHermesInfoData;
_GLOBAL unsigned long p_LFLeaderAlmData;
_GLOBAL unsigned long p_LFFollowerAlmData;
_GLOBAL unsigned long p_LFFollowerInfoData;
_GLOBAL unsigned long p_LFFollowerInfoData1;
_GLOBAL unsigned long p_Follower1AlmData;
_GLOBAL unsigned long p_Follower1InfoData;
_GLOBAL unsigned long p_Follower1InfoData1;
_GLOBAL unsigned long p_LCSMngRcpAlmData;
_GLOBAL unsigned long p_LCSLFAlmData;
_GLOBAL unsigned long p_LCSLFInfoData;
_GLOBAL unsigned long p_OpsInvertAlmData;
_GLOBAL unsigned long p_OpsInvertAlmData1;
_GLOBAL unsigned long p_McAlmData;
_GLOBAL unsigned long p_McAlmData1;
_GLOBAL unsigned long p_MotorBrkAlmData;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Alarm(void);
