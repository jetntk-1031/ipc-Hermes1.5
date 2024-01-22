/* Automation Studio generated header file */
/* Do not edit ! */
/* NtGeneral 5.00.1 */

#ifndef _NTGENERAL_
#define _NTGENERAL_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtGeneral_VERSION
#define _NtGeneral_VERSION 5.00.1
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum eFBStatus
{	Idle,
	Done,
	Busy,
	Error
} eFBStatus;

typedef enum eAlmSeverity
{	AlmSeverityNA,
	AlmSeverityError,
	AlmSeverityWarning,
	AlmSeverityInfo
} eAlmSeverity;

typedef struct tyAlmTxt
{	plcstring sAlmText[201];
	plcstring sRcyText[201];
} tyAlmTxt;

typedef struct tyAlmDat
{	unsigned long udiCode;
	enum eAlmSeverity eSeverity;
	plcstring sProgNm[16];
	plcstring sAlmMsg[201];
	plcstring sRcyMsg[201];
	unsigned long udiRunTime;
	unsigned long udiModuleNum;
	plcbit bAlm;
	plcbit bWarning;
} tyAlmDat;

typedef struct tyAlmInputProps
{	unsigned short uiModuleOrder;
} tyAlmInputProps;

typedef struct tyValidCharChkrInternal
{	plcstring sValidChar[2];
	plcstring sCharChk[2];
	signed short i;
	signed short j;
} tyValidCharChkrInternal;

typedef struct tyInvalidCharChkrInternal
{	plcstring sInvalidChar[2];
	plcstring sCharChk[2];
	signed short i;
	signed short j;
} tyInvalidCharChkrInternal;

typedef struct tyCheckDuplicateInternal
{	unsigned char i;
	unsigned char j;
	unsigned char usiCnt;
} tyCheckDuplicateInternal;

typedef struct tyStringSearchInternal
{	unsigned long i;
	unsigned char usiZero;
} tyStringSearchInternal;

typedef struct tyCheckExistInternal
{	unsigned char i;
	unsigned char j;
	unsigned char usiCnt;
} tyCheckExistInternal;

typedef struct tySenFltrInternal
{	struct TON fbSigFltrTm;
} tySenFltrInternal;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyIPValidInternal
{	signed short i;
	signed short iCnt;
	signed short a_iDotPos[3];
	plcstring a_sIPPart[4][4];
	signed short a_iIPPart[4];
	plcstring sMismatchChar[2];
} tyIPValidInternal;
#else
/* Data type tyIPValidInternal not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct fbSenFltr
{
	/* VAR_INPUT (analog) */
	plctime tSigOnFltrTm;
	plctime tSigOffFltrTm;
	/* VAR (analog) */
	struct tySenFltrInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bSigIn;
	/* VAR_OUTPUT (digital) */
	plcbit bSigOut;
} fbSenFltr_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbSenFltr(struct fbSenFltr* inst);
_BUR_PUBLIC plcbit fValidCharStringInChkr(plcstring** p_sMismatchChar, plcstring* sInChk, plcstring* sValidMember);
_BUR_PUBLIC plcbit fInvalidCharStringInChkr(plcstring** p_sInvalidChar, plcstring* sInChk, plcstring* sInvalidMember);
#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC unsigned char fCheckDuplicate(unsigned char a_usiValue[100], plcbit a_bChkValue[100]);
#else
_BUR_PUBLIC unsigned char fCheckDuplicate(void* a_usiValue, void* a_bChkValue);
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC unsigned char fCheckExist(unsigned char a_usiValue[50], plcbit a_bChkValue[50]);
#else
_BUR_PUBLIC unsigned char fCheckExist(void* a_usiValue, void* a_bChkValue);
#endif

_BUR_PUBLIC unsigned long fStringSearch(unsigned long p_StringChk, unsigned long udiStringChkSize, plcstring* sSearch);
#ifdef _BUR_USE_DECLARATION_IN_IEC
_BUR_PUBLIC plcbit fIPValid(plcstring* sIPAdd, signed short (*pa_iIPPart)[4]);
#else
_BUR_PUBLIC plcbit fIPValid(plcstring* sIPAdd, void* pa_iIPPart);
#endif

_BUR_PUBLIC plcbit fConvertUINTToHex(plcstring** p_sHexOut, unsigned short uiDecimalIn);
_BUR_PUBLIC plcbit fConvertUSINTToHex(plcstring** p_sHexOut, unsigned char usiDecimalIn);
_BUR_PUBLIC plcbit fConvertToLower_254(plcstring** p_sOutput, plcstring* sInput);


#ifdef __cplusplus
};
#endif
#endif /* _NTGENERAL_ */

