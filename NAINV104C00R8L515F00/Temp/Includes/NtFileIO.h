/* Automation Studio generated header file */
/* Do not edit ! */
/* NtFileIO 5.00.0 */

#ifndef _NTFILEIO_
#define _NTFILEIO_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtFileIO_VERSION
#define _NtFileIO_VERSION 5.00.0
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG4
		#include "NtMem.h"
		#include "NtGeneral.h"
#endif
#ifdef _SG3
		#include "NtMem.h"
		#include "NtGeneral.h"
#endif
#ifdef _SGC
		#include "NtMem.h"
		#include "NtGeneral.h"
#endif

/* Datatypes and datatypes of function blocks */
typedef struct tyDirInfoInternal
{	struct DirInfo fbDirInfo;
} tyDirInfoInternal;

typedef struct fbDirInfo
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sPath[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiSubDirNum;
	unsigned long udiFileNum;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirInfoInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirInfo_typ;

typedef struct tyDirReadInternal
{	struct DirRead fbDirRead;
} tyDirReadInternal;

typedef struct fbDirRead
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sPath[81];
	unsigned long udiEntry;
	unsigned char usiOption;
	/* VAR_OUTPUT (analog) */
	struct fiDIR_READ_DATA tyDirReadData;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirReadInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirRead_typ;

typedef struct tyFileDeleteInternal
{	struct FileDelete fbFileDelete;
} tyFileDeleteInternal;

typedef struct fbFileDelete
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileDeleteInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileDelete_typ;

typedef struct tyFileOldDelInternal
{	struct fbDirInfo fbDirInfo;
	struct fbDirRead fbDirRead;
	struct fbFileDelete fbFileDel;
	plcstring sFileNm[261];
	struct fiDIR_READ_DATA tyfiDIR_READ_DATA;
	unsigned long udiDTNow;
	unsigned long udiFileDT;
	unsigned long udiFileKeep;
	unsigned long udiFileNum;
	unsigned long udiKeywordLen;
	unsigned char usiStep;
} tyFileOldDelInternal;

typedef struct tyDirDeleteInternal
{	struct DirDeleteEx fbDirDeleteEx;
} tyDirDeleteInternal;

typedef struct fbDirDelete
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sDirName[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirDeleteInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirDelete_typ;

typedef struct tyDirCopyInternal
{	struct DirCopy fbDirCopy;
} tyDirCopyInternal;

typedef struct fbDirCopy
{
	/* VAR_INPUT (analog) */
	plcstring sSrcDevice[81];
	plcstring sSrcDirName[81];
	plcstring sDestDevice[81];
	plcstring sDestDirName[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirCopyInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirCopy_typ;

typedef struct tyDirBackUpInternal
{	struct fbDirDelete fbDirDelete;
	struct fbDirCopy fbDirCopy;
	unsigned char usiStep;
} tyDirBackUpInternal;

typedef struct tyDirRestoreInternal
{	struct fbDirDelete fbDirDelete;
	struct fbDirCopy fbDirCopy;
	unsigned char usiStep;
} tyDirRestoreInternal;

typedef struct tyDevLinkFTPInternal
{	struct DevLink fbDevLink;
	plcstring sParam[81];
} tyDevLinkFTPInternal;

typedef struct fbDevLinkFTP
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFTPIPAdd[16];
	plcstring sFTPUsrNm[16];
	plcstring sFTPPw[16];
	/* VAR_OUTPUT (analog) */
	unsigned long udiHandle;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDevLinkFTPInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDevLinkFTP_typ;

typedef struct tyDevUnlinkInternal
{	struct DevUnlink fbDevUnlink;
} tyDevUnlinkInternal;

typedef struct fbDevUnlink
{
	/* VAR_INPUT (analog) */
	unsigned long udiHandle;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDevUnlinkInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDevUnlink_typ;

typedef struct tyFileCloseInternal
{	struct FileClose fbFileClose;
} tyFileCloseInternal;

typedef struct fbFileClose
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileCloseInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileClose_typ;

typedef struct tyFileOpenCreateInternal
{	struct FileCreate fbFileCreate;
	struct FileOpen fbFileOpen;
	unsigned char usiStep;
} tyFileOpenCreateInternal;

typedef struct fbFileOpenCreate
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	/* VAR_OUTPUT (analog) */
	unsigned long udiIdent;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileOpenCreateInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileOpenCreate_typ;

typedef struct tyFileWriteInternal
{	struct FileWriteEx fbFileWrite;
} tyFileWriteInternal;

typedef struct fbFileWrite
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileWriteInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileWrite_typ;

typedef struct tyFileFullWriteInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileWrite fbFileWrite;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullWriteInternal;

typedef struct fbFileFullWrite
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileFullWriteInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileFullWrite_typ;

typedef struct tyLFFileBackUpInternal
{	struct fbDevLinkFTP fbDevLinkFTP;
	struct fbDevUnlink fbDevUnlink;
	struct fbFileFullWrite fbFileWrite;
	plcstring sFile[81];
	unsigned long udiHandle;
	unsigned char usiStep;
} tyLFFileBackUpInternal;

typedef struct tyFileOpenInternal
{	struct FileOpen fbFileOpen;
} tyFileOpenInternal;

typedef struct fbFileOpen
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned char usiMode;
	/* VAR_OUTPUT (analog) */
	unsigned long udiIdent;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileOpenInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileOpen_typ;

typedef struct tyFileReadInternal
{	struct FileReadEx fbFileRead;
} tyFileReadInternal;

typedef struct fbFileRead
{
	/* VAR_INPUT (analog) */
	unsigned long udiIdent;
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileReadInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileRead_typ;

typedef struct tyFileFullReadInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpen fbFileOpen;
	struct fbFileRead fbFileRead;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullReadInternal;

typedef struct fbFileFullRead
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileFullReadInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileFullRead_typ;

typedef struct tyLFFileRestoreInternal
{	struct fbDevLinkFTP fbDevLinkFTP;
	struct fbDevUnlink fbDevUnlink;
	struct fbFileFullRead fbFileRead;
	struct fbFileFullWrite fbFileWrite;
	plcstring sFile[81];
	unsigned long udiHandle;
	unsigned char usiStep;
} tyLFFileRestoreInternal;

typedef struct tyLFFileSyncInternal
{	struct fbDevLinkFTP fbDevLinkFTP;
	struct fbDevUnlink fbDevUnlink;
	struct fbFileFullRead fbFileReadL;
	struct fbFileFullWrite fbFileWriteF;
	struct fbFileFullWrite fbFileWriteL;
	plcstring sFile[81];
	unsigned long udiHandle;
	unsigned char usiStep;
} tyLFFileSyncInternal;

typedef struct tySyncFileInternal
{	unsigned long i;
	unsigned long j;
	unsigned long udiDestDTOffset;
	unsigned long udiDestNmOffset;
	plcbit bNmExist;
} tySyncFileInternal;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyFollowerPathInternal
{	signed short a_iIPPart[4];
	plcstring sLastIPPart[4];
} tyFollowerPathInternal;
#else
/* Data type tyFollowerPathInternal not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct tyFileInfoInternal
{	struct FileInfo fbFileInfo;
} tyFileInfoInternal;

typedef struct fbFileInfo
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	/* VAR_OUTPUT (analog) */
	struct fiFILE_INFO tyFileInfo;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileInfoInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileInfo_typ;

typedef struct tyFileFullAppendInternal
{	struct fbFileClose fbFileClose;
	struct fbFileOpenCreate fbFileOpenCreate;
	struct fbFileInfo fbFileInfo;
	struct fbFileWrite fbFileWrite;
	struct fiFILE_INFO tyFileInfo;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullAppendInternal;

typedef struct fbFileFullAppend
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long p_Src;
	unsigned long udiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileFullAppendInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileFullAppend_typ;

typedef struct tyFileFullAppendEncryInternal
{	struct fbFileFullAppend fbFileAppend;
	struct fbMemCreate fbMemCreate;
	struct fbMemDestroy fbMemDestroy;
	unsigned long p_Dest;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullAppendEncryInternal;

typedef struct tyFileFullWriteEncryInternal
{	struct fbFileFullWrite fbFileWrite;
	struct fbMemCreate fbMemCreate;
	struct fbMemDestroy fbMemDestroy;
	unsigned long p_Dest;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullWriteEncryInternal;

typedef struct tyFileFullReadEncryInternal
{	struct fbFileFullRead fbFileRead;
	struct fbMemCreate fbMemCreate;
	struct fbMemDestroy fbMemDestroy;
	unsigned long p_Dest;
	unsigned long udiIdent;
	unsigned char usiStep;
} tyFileFullReadEncryInternal;

typedef struct tyDirCopyFTPInternal
{	unsigned char usiStep;
	struct fbDirCopy fbDirCopy;
	struct fbDevLinkFTP fbDevLinkFTP;
	struct fbDevUnlink fbDevUnlink;
	unsigned long udiHandle;
} tyDirCopyFTPInternal;

typedef struct tyDirCreateInternal
{	struct DirCreate fbDirCreate;
} tyDirCreateInternal;

typedef struct tyEncryptionInternal
{	unsigned char usiTemp;
	unsigned long udi;
} tyEncryptionInternal;

typedef struct tyLocalDevlinkParamInternal
{	signed short i;
	signed short j;
	signed short iTemp;
	signed short a_iPos[10];
	plcstring sPath1[81];
	plcstring sPath2[81];
} tyLocalDevlinkParamInternal;

typedef struct tyFTPDevlinkParamInternal
{	plcstring sIPAddr[81];
	plcstring sUsrNm[81];
	plcstring sPw[81];
} tyFTPDevlinkParamInternal;

typedef struct fbFileOldDel
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sPath[81];
	plcstring sKeyword[81];
	plcdt dtDTNow;
	unsigned long udiFileKeepDay;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileOldDelInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileOldDel_typ;

typedef struct fbDirBackUp
{
	/* VAR_INPUT (analog) */
	plcstring sUsrDevice[81];
	plcstring sUsrDirNm[81];
	plcstring sBackupDevice[81];
	plcstring sBackupDirNm[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirBackUpInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirBackUp_typ;

typedef struct fbDirRestore
{
	/* VAR_INPUT (analog) */
	plcstring sUsrDevice[81];
	plcstring sUsrDirNm[81];
	plcstring sUsrDeviceTemp[81];
	plcstring sUsrDirNmTemp[81];
	plcstring sBackupDevice[81];
	plcstring sBackupDirNm[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirRestoreInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirRestore_typ;

typedef struct fbLFFileBackUp
{
	/* VAR_INPUT (analog) */
	plcstring sLeaderIPAddr[16];
	plcstring sFTPUsrNm[16];
	plcstring sFTPPw[16];
	plcstring sLeaderFilePath[81];
	plcstring sFollowerIPAddr[16];
	unsigned long p_Dest;
	unsigned long udiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFFileBackUpInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbLFFileBackUp_typ;

typedef struct fbLFFileRestore
{
	/* VAR_INPUT (analog) */
	plcstring sFollowerDevice[81];
	plcstring sFollowerFile[81];
	plcstring sLeaderIPAddr[16];
	plcstring sFTPUsrNm[16];
	plcstring sFTPPw[16];
	plcstring sLeaderFilePath[81];
	plcstring sFollowerIPAddr[16];
	unsigned long p_Dest;
	unsigned long udiLen;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFFileRestoreInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbLFFileRestore_typ;

typedef struct fbLFFileSync
{
	/* VAR_INPUT (analog) */
	plcstring sFollowerDevice[81];
	plcstring sFollowerFile[81];
	plcstring sLeaderIPAddr[16];
	plcstring sFTPUsrNm[16];
	plcstring sFTPPw[16];
	plcstring sLeaderFilePath[81];
	plcstring sFollowerIPAddr[16];
	unsigned long p_LeaderRcpDest;
	unsigned long p_FollowerRcpDest;
	unsigned long udiFullLen;
	unsigned long udiSingleLen;
	unsigned long p_FirstNmDest;
	unsigned long udiNmLen;
	unsigned long p_FirstDTDest;
	unsigned long udiDTLen;
	unsigned long udiAllRecipeNo;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFFileSyncInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbLFFileSync_typ;

typedef struct fbFileFullAppendEncry
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned char usiEncryptCode;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileFullAppendEncryInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileFullAppendEncry_typ;

typedef struct fbFileFullWriteEncry
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Src;
	unsigned long udiLen;
	unsigned long udiOption;
	unsigned char usiEncryptCode;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileFullWriteEncryInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileFullWriteEncry_typ;

typedef struct fbFileFullReadEncry
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sFile[81];
	unsigned long udiOffset;
	unsigned long p_Dest;
	unsigned long udiLen;
	unsigned char usiEncryptCode;
	/* VAR_OUTPUT (analog) */
	unsigned long udiBytesRead;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyFileFullReadEncryInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbFileFullReadEncry_typ;

typedef struct fbDirCopyFrmFTP
{
	/* VAR_INPUT (analog) */
	plcstring sSrcDirName[81];
	plcstring sDestDevice[81];
	plcstring sDestDirName[81];
	plcstring sFTPIPAdd[16];
	plcstring sFTPUsrNm[16];
	plcstring sFTPPw[16];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirCopyFTPInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirCopyFrmFTP_typ;

typedef struct fbDirCopyToFTP
{
	/* VAR_INPUT (analog) */
	plcstring sSrcDevice[81];
	plcstring sSrcDirName[81];
	plcstring sDestDirName[81];
	plcstring sFTPIPAdd[16];
	plcstring sFTPUsrNm[16];
	plcstring sFTPPw[16];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirCopyFTPInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirCopyToFTP_typ;

typedef struct fbDirCreate
{
	/* VAR_INPUT (analog) */
	plcstring sDevice[81];
	plcstring sDirName[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyDirCreateInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbDirCreate_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbFileOldDel(struct fbFileOldDel* inst);
_BUR_PUBLIC void fbDirBackUp(struct fbDirBackUp* inst);
_BUR_PUBLIC void fbDirRestore(struct fbDirRestore* inst);
_BUR_PUBLIC void fbLFFileBackUp(struct fbLFFileBackUp* inst);
_BUR_PUBLIC void fbLFFileRestore(struct fbLFFileRestore* inst);
_BUR_PUBLIC void fbLFFileSync(struct fbLFFileSync* inst);
_BUR_PUBLIC void fbFileFullAppendEncry(struct fbFileFullAppendEncry* inst);
_BUR_PUBLIC void fbFileFullWriteEncry(struct fbFileFullWriteEncry* inst);
_BUR_PUBLIC void fbFileFullReadEncry(struct fbFileFullReadEncry* inst);
_BUR_PUBLIC void fbFileFullAppend(struct fbFileFullAppend* inst);
_BUR_PUBLIC void fbFileFullWrite(struct fbFileFullWrite* inst);
_BUR_PUBLIC void fbFileFullRead(struct fbFileFullRead* inst);
_BUR_PUBLIC void fbDirCopyFrmFTP(struct fbDirCopyFrmFTP* inst);
_BUR_PUBLIC void fbDirCopyToFTP(struct fbDirCopyToFTP* inst);
_BUR_PUBLIC void fbDirRead(struct fbDirRead* inst);
_BUR_PUBLIC void fbDirInfo(struct fbDirInfo* inst);
_BUR_PUBLIC void fbDirCopy(struct fbDirCopy* inst);
_BUR_PUBLIC void fbDirCreate(struct fbDirCreate* inst);
_BUR_PUBLIC void fbDirDelete(struct fbDirDelete* inst);
_BUR_PUBLIC void fbFileClose(struct fbFileClose* inst);
_BUR_PUBLIC void fbFileDelete(struct fbFileDelete* inst);
_BUR_PUBLIC void fbFileInfo(struct fbFileInfo* inst);
_BUR_PUBLIC void fbFileWrite(struct fbFileWrite* inst);
_BUR_PUBLIC void fbFileRead(struct fbFileRead* inst);
_BUR_PUBLIC void fbFileOpenCreate(struct fbFileOpenCreate* inst);
_BUR_PUBLIC void fbFileOpen(struct fbFileOpen* inst);
_BUR_PUBLIC void fbDevUnlink(struct fbDevUnlink* inst);
_BUR_PUBLIC void fbDevLinkFTP(struct fbDevLinkFTP* inst);
_BUR_PUBLIC plcbit fSyncFile(unsigned long p_Dest, unsigned long p_Src, unsigned long udiSingleLen, unsigned long p_FirstNmDest, unsigned long udiNmLen, unsigned long p_FirstDTDest, unsigned long udiDTLen, unsigned long udiAllRecipeNo);
_BUR_PUBLIC plcbit fFollowerPathInLeader(plcstring** p_sPath, plcstring* sLeaderFilePath, plcstring* sFollowerIPAddr);
_BUR_PUBLIC plcbit fEncryptionCurrAdr(unsigned long p_Adr, unsigned long udiLen, unsigned char usiCode);
_BUR_PUBLIC plcbit fEncryption2ndAdr(unsigned long p_Src, unsigned long p_Dest, unsigned long udiLen, unsigned char usiCode);
_BUR_PUBLIC plcbit fFTPDevlinkParam(plcstring** p_sParam, plcstring* sIPAddr, plcstring* sUsrNm, plcstring* sPw);
_BUR_PUBLIC plcbit fLocalDevlinkParam(plcstring** p_sParam, plcstring* sPath);


#ifdef __cplusplus
};
#endif
#endif /* _NTFILEIO_ */

