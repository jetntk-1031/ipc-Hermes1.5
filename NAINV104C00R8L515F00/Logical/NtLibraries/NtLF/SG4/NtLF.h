/* Automation Studio generated header file */
/* Do not edit ! */
/* NtLF 5.01.5 */

#ifndef _NTLF_
#define _NTLF_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtLF_VERSION
#define _NtLF_VERSION 5.01.5
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define c_diLFClntNum 50
#else
 _GLOBAL_CONST signed long c_diLFClntNum;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum eMachineStat
{	Run = 0,
	Stop = 1,
	Manual = 2,
	Warning = 3,
	InError = 4
} eMachineStat;

typedef struct tyLFLeaderToFollowerTag
{	plcstring sReqProdRcpNm[255];
	signed long diReqProdRcpWidth;
	plcstring sReqMagRcpNm[31];
	plcbit bMnlAccData;
	plcbit bBypassMnlAccData;
	plcbit bBlkDS;
	plcbit bBlkUS;
	plcbit bBypassWidthChk;
	plcbit bSetTm;
	plcdt dtTm;
	unsigned short uiTmZone;
	unsigned char usiRunTm;
	plcbit bProdNameUSWarn;
	plcbit bProdNameDSWarn;
	plcbit bProdWidthUSWarn;
	plcbit bProdWidthDSWarn;
	plcbit bLeaderSeqCtrlInActive;
} tyLFLeaderToFollowerTag;

typedef struct tyLFFollowerToLeaderTag
{	plcstring sCurrProdRcp[255];
	signed long diCurrProdWidthUS;
	signed long diCurrProdWidthDS;
	plcstring sCurrMagRcp[31];
	plcstring sIPAddr[16];
	plcstring sMcNm[31];
	plcbit bSectionLeader;
	unsigned char usiRunTm;
	plcbit bProdRcpErr;
	plcbit bProdWidthErr;
	plcbit bMagRcpErr;
	plcbit bSyncTmErr;
	enum eMachineStat eCurrMachineStat;
	plcbit bProdChgOverActive;
} tyLFFollowerToLeaderTag;

typedef struct tyLFFollowerInfo
{	plcbit bOnline;
	unsigned char usiRunTmOld;
} tyLFFollowerInfo;

typedef struct tyLFLeaderInfo
{	plcbit bOnline;
	unsigned char usiRunTmOld;
} tyLFLeaderInfo;

typedef struct tyLFFollowerInternal
{	struct TON fbDlyTm;
	plcbit bWidthTooSmall;
	plcbit bProdWidthErr;
} tyLFFollowerInternal;

typedef struct tyLFLeaderInternal
{	plcbit bChgModeOn;
	plcbit bInternalOven1On;
	plcbit bInternalOven2On;
	plcbit bInitialDone;
	signed long di;
	struct TON fbDlyTm;
	plcstring sPreProdRcpNm[255];
	plcstring sPreMagRcpNm[31];
	signed long diPreProdRcpWidth;
	plcbit bSectionLdrSetRcp;
	plcstring sSectLdrProdRcpNm[255];
	plcstring sSectLdrMagRcpNm[31];
	signed long diSectLdrProdRcpWidth;
} tyLFLeaderInternal;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbLFLeaderOnlineChk
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderToFollowerTag (*pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerInfo (*pa_tyFollowerInfo)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	plctime tDlyTm;
	signed long diMcNum;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFLeaderInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit a_bOnline[50];
} fbLFLeaderOnlineChk_typ;
#else
/* Data type fbLFLeaderOnlineChk not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbLFLeaderSyncTm
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderToFollowerTag (*pa_tyLeaderToFollowerTag)[50];
	plcdt dtCurrDT;
	unsigned short uiCurrTmZone;
	plctime tDlyTm;
	signed long diMcNum;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFLeaderInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbLFLeaderSyncTm_typ;
#else
/* Data type fbLFLeaderSyncTm not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbLFLeaderChgAll
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderToFollowerTag (*pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	plcstring sReqProdRcpNm[255];
	signed long diReqProdRcpWidth;
	plcstring sReqMagRcpNm[31];
	signed long diMcNum;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFLeaderInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bChgAuto;
	plcbit a_bOnline[50];
} fbLFLeaderChgAll_typ;
#else
/* Data type fbLFLeaderChgAll not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbLFLeaderChgSeq
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderToFollowerTag (*pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	plcstring sReqProdRcpNm[255];
	signed long diReqProdRcpWidth;
	plcstring sReqMagRcpNm[31];
	signed long diMcNum;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFLeaderInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bChgAuto;
	plcbit a_bOnline[50];
} fbLFLeaderChgSeq_typ;
#else
/* Data type fbLFLeaderChgSeq not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbLFLeaderBlkUSDS
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderToFollowerTag (*pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	signed long diBeforeOven1;
	signed long diBeforeOven2;
	signed long diAfterOven1;
	signed long diAfterOven2;
	signed long diMcNum;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFLeaderInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bSeqMode;
	plcbit pa_bLFOnline[50];
} fbLFLeaderBlkUSDS_typ;
#else
/* Data type fbLFLeaderBlkUSDS not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbLFLeaderDataUpdt
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderToFollowerTag (*pa_tyLeaderToFollowerTag)[50];
	signed long diMcNum;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFLeaderInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit a_bOnline[50];
} fbLFLeaderDataUpdt_typ;
#else
/* Data type fbLFLeaderDataUpdt not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct fbLFFollower
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderToFollowerTag tyLeaderToFollowerTag;
	plcstring sMcNm[31];
	plcstring sIPAddr[16];
	plcstring sCurrProdRcpNm[255];
	signed long diCurrProdWidthUS;
	signed long diCurrProdWidthDS;
	plcstring sCurrMagRcpNm[31];
	plcstring sUpdtLeaderProdRcpNm[255];
	signed long diUpdtLeaderProdWidthUS;
	signed long diUpdtLeaderProdWidthDS;
	plcstring sUpdtLeaderMagRcpNm[31];
	signed long diWidthLimit;
	enum eMachineStat eCurrMachineStat;
	/* VAR_OUTPUT (analog) */
	struct tyLFFollowerToLeaderTag tyFollowerToLeaderTag;
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFFollowerInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
	plcbit bSectionLeader;
	plcbit bMnlAccDat;
	plcbit bAWEn;
	plcbit bUSWidthChkEn;
	plcbit bUSWidthChkSen;
	plcbit bDSWidthChkEn;
	plcbit bDSWidthChkSen;
	plcbit bProdWidthChk;
	plcbit bProdRcpErr;
	plcbit bMagRcpErr;
	plcbit bSetTmErr;
	plcbit bProdChgOverActive;
	plcbit bDBAOnWOAlign;
	/* VAR_OUTPUT (digital) */
	plcbit bProdAccDataReq;
	plcbit bMagAccDataReq;
	plcbit bAutoAccData;
	plcbit bUSAllow;
	plcbit bDSAllow;
} fbLFFollower_typ;

typedef struct fbLFFollowerOnlineChk
{
	/* VAR_INPUT (analog) */
	struct tyLFLeaderInfo* p_tyLeaderInfo;
	struct tyLFLeaderToFollowerTag tyLeaderToFollowerTag;
	plctime tDlyTm;
	/* VAR_OUTPUT (analog) */
	unsigned long udiStatus;
	/* VAR (analog) */
	struct tyLFFollowerInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bEn;
} fbLFFollowerOnlineChk_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbLFLeaderOnlineChk(struct fbLFLeaderOnlineChk* inst);
_BUR_PUBLIC void fbLFLeaderSyncTm(struct fbLFLeaderSyncTm* inst);
_BUR_PUBLIC void fbLFLeaderChgAll(struct fbLFLeaderChgAll* inst);
_BUR_PUBLIC void fbLFLeaderChgSeq(struct fbLFLeaderChgSeq* inst);
_BUR_PUBLIC void fbLFLeaderBlkUSDS(struct fbLFLeaderBlkUSDS* inst);
_BUR_PUBLIC void fbLFLeaderDataUpdt(struct fbLFLeaderDataUpdt* inst);
_BUR_PUBLIC void fbLFFollower(struct fbLFFollower* inst);
_BUR_PUBLIC void fbLFFollowerOnlineChk(struct fbLFFollowerOnlineChk* inst);
_BUR_PUBLIC plcbit fLFFollowerDataUpdt(struct tyLFFollowerToLeaderTag** p_tyFollowerToLeaderTag, plcstring* sMcNm, plcstring* sIPAddr, plcbit bSectionLeader, plcstring* sCurrProdRcpNm, signed long diCurrProdWidthUS, signed long diCurrProdWidthDS, plcstring* sCurrMagRcpNm, plcbit bProdRcpErr, plcbit bProdWidthErr, plcbit bMagRcpErr, plcbit bSetTmErr, enum eMachineStat eCurrMachineStat, plcbit bProdChgOverActive);
_BUR_PUBLIC plcbit fLFFollowerWidthTooSmallUpdt(signed long diWidthLimit, struct tyLFLeaderToFollowerTag* tyLeaderToFollowerTag, plcstring* sCurrProdRcpNm, signed long diCurrProdWidthUS);
_BUR_PUBLIC plcbit fLFFollowerWidthErrChk(struct tyLFLeaderToFollowerTag* tyLeaderToFollowerTag, plcstring* sCurrProdRcpNm, signed long diCurrProdWidthUS);
_BUR_PUBLIC plcbit fLFFollowerAutoAccDataUpdt(struct tyLFLeaderToFollowerTag* tyLeaderToFollowerTag, plcbit bMnlAccDat, plcbit bAWEn, plcbit bUSWidthChkEn, plcbit bWidthTooSmall);
_BUR_PUBLIC plcbit fLFFollowerProdAccDataReqUpdt(struct tyLFLeaderToFollowerTag* tyLeaderToFollowerTag, plcbit bSectionLeader, plcstring* sCurrProdRcpNm, plcbit bUSWidthChkEn, plcbit bUSWidthChkSen, plcbit bWidthTooSmall, plcbit bProdRcpErr, plcbit bProdWidthErr, signed long diCurrProdWidthUS);
_BUR_PUBLIC plcbit fLFFollowerMagAccDataReqUpdt(struct tyLFLeaderToFollowerTag* tyLeaderToFollowerTag, plcbit bSectionLeader, plcstring* sCurrMagRcpNm, plcbit bUSWidthChkEn, plcbit bUSWidthChkSen, plcbit bMagRcpErr);
_BUR_PUBLIC plcbit fLFUSAllow(struct tyLFLeaderToFollowerTag* tyLeaderToFollowerTag, plcbit bSectionLeader, plcbit bWidthChkEn, plcbit bWidthChkSen, plcstring* sCurrProdRcpNm, plcbit bMnlAccData);
_BUR_PUBLIC plcbit fLFDSAllow(struct tyLFLeaderToFollowerTag* tyLeaderToFollowerTag, plcbit bWidthChkEn, plcbit bWidthChkSen, plcbit bDBAOnWOAlign);


#ifdef __cplusplus
};
#endif
#endif /* _NTLF_ */

