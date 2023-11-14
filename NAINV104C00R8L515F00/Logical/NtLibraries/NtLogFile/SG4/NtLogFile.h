/* Automation Studio generated header file */
/* Do not edit ! */
/* NtLogFile 5.00.1 */

#ifndef _NTLOGFILE_
#define _NTLOGFILE_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtLogFile_VERSION
#define _NtLogFile_VERSION 5.00.1
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyAlmLogFullMsgInternal
{	plcstring sAlmTm[21];
	plcstring sErrCode[81];
} tyAlmLogFullMsgInternal;

typedef struct tyAlmDispMsgInternal
{	plcstring sAlmTm[81];
	plcstring sErrCode[81];
} tyAlmDispMsgInternal;

typedef struct tyBrdLogFullMsgInternal
{	plcstring sBrdTm[21];
} tyBrdLogFullMsgInternal;

typedef struct tyEventLogFullMsgInternal
{	plcstring sEventTm[21];
} tyEventLogFullMsgInternal;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC plcbit fLogRemoveOldMsg(unsigned long udiStartIdx, unsigned long udiEndIdx, unsigned long p_AllMsg, unsigned long udiSingleMsgSize, unsigned long udiTotalMsgNo);
_BUR_PUBLIC plcbit fLogAlmFullMsg(plcstring** p_sAlmLogFullMsg, plcdt dtDateTime, plcstring* sAlmStat, unsigned long udiErrID, plcstring* sErrMsg);
_BUR_PUBLIC plcbit fLogAlmDispMsg(plcstring** p_sAlmDispMsg, plcdt dtDateTime, plcstring* sPrefix, unsigned long udiErrID, plcstring* sErrMsg);
_BUR_PUBLIC plcbit fLogBrdFullMsg(plcstring** p_sBrdLogFullMsg, plcdt dtDateTime, plcstring* sProdID, plcstring* sBrdID, plcbit bGdBrd, plcstring* sUsrNm);
_BUR_PUBLIC plcbit fLogEventFullMsg(plcstring** p_sEventLogFullMsg, plcdt dtDateTime, plcstring* sUsrNm, plcstring* sEvent);
_BUR_PUBLIC plcbit fLogDTConvert(plcstring** p_sDTOut, plcdt dtIn);


#ifdef __cplusplus
};
#endif
#endif /* _NTLOGFILE_ */

