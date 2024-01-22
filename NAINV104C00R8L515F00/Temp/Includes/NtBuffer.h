/* Automation Studio generated header file */
/* Do not edit ! */
/* NtBuffer 5.00.6 */

#ifndef _NTBUFFER_
#define _NTBUFFER_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtBuffer_VERSION
#define _NtBuffer_VERSION 5.00.6
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define c_diDispBffrSize 120
 #define c_diBffrSubSize 2
 #define c_diBffrSize 60
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long c_diDispBffrSize;
 _GLOBAL_CONST signed long c_diBffrSubSize;
 _GLOBAL_CONST signed long c_diBffrSize;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct tyBffrSetFullInternal
{	signed long di;
	signed long dj;
	signed long diPitchCntr;
	plcdt dtTmNow;
	signed long diMinSlt;
	signed long diMaxSlt;
} tyBffrSetFullInternal;

typedef struct tyBffrSetMtyInternal
{	signed long di;
	signed long dj;
	signed long diPitchCntr;
	signed long diMinSlt;
	signed long diMaxSlt;
} tyBffrSetMtyInternal;

typedef struct tyBffrLoadInternal
{	signed long di;
	plcbit bSltFull;
} tyBffrLoadInternal;

typedef struct tyBffrUnloadInternal
{	signed long di;
	signed short iLastProdCntr;
} tyBffrUnloadInternal;

typedef struct tyDispBffrInternal
{	plcdt dtSltTm;
	plcdt dtTimeNow;
	signed long di;
	signed long diCnt;
	signed long diDispIdx;
	signed long dj;
	plcstring sMainSltIdx[81];
	plcstring sSubSltIdx[81];
	plctime tBrdStoreTm;
	plctime tRemainCoolTm;
} tyDispBffrInternal;

typedef struct tyBffrNxtLoadInternal
{	signed long di;
	signed long diDist;
	signed long diLastLoadPos;
	signed long diCurrSlt;
} tyBffrNxtLoadInternal;

typedef struct tyBffrChkCoolBrdInternal
{	signed long di;
	signed long dj;
} tyBffrChkCoolBrdInternal;

typedef struct tyBffrNxtUnloadInternal
{	plcdt dtTemp;
	signed long di;
	signed long dj;
} tyBffrNxtUnloadInternal;

typedef struct tyBffrStatInternal
{	signed long di;
	signed long dj;
} tyBffrStatInternal;

typedef struct tyBffrDTConvertInternal
{	plcstring sDay[3];
	plcstring sMonth[3];
	plcstring sYear[5];
	plcstring sTm[9];
	plcstring sDT[81];
} tyBffrDTConvertInternal;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyBffrParam
{	plcbit bAscending;
	signed long diMinSlt;
	signed long diMaxSlt;
	signed long diPitch;
	signed long diSltCap;
	signed long diBffrTtlSlt;
	plcbit a_bSkip[60];
} tyBffrParam;
#else
/* Data type tyBffrParam not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct tyBffrStat
{	plcbit bBffrFull;
	plcbit bBffrMty;
	signed long diTtlBrdCap;
	signed long diTtlGdBrd;
	signed long diTtlBadBrd;
} tyBffrStat;

typedef struct tyBrdUnloadStat
{	plcbit bGdSigBrd;
	plcdt dtSltTm;
	plcstring sProdNm[16];
	plcstring sBarcode1[81];
	plcstring sBarcode2[81];
} tyBrdUnloadStat;

typedef struct tySubBffrDat
{	plcbit bSubForBrd;
	plcbit bBrdAvl;
	plcdt dtSltTm;
	plcstring sProdNm[16];
	plcstring sBarcode1[81];
	plcstring sBarcode2[81];
} tySubBffrDat;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyBffrDat
{	plcbit bSltForBrd;
	plcbit bBrdAvl;
	plcbit bSltFull;
	plcbit bGdSigBrd;
	plcbit bSkip;
	signed long diSltCap;
	signed long diBrdQty;
	struct tySubBffrDat a_tySubBffrDat[2];
} tyBffrDat;
#else
/* Data type tyBffrDat not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyBffr
{	plcstring sName[16];
	struct tyBffrDat a_tyBffrDat[60];
} tyBffr;
#else
/* Data type tyBffr not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct tyDispBffrDat
{	plcstring sSltIdx[81];
	plcstring sSltTm[81];
	plcstring sBrdStoreTm[11];
	plcstring sRemainCoolTm[11];
	plcdword dwColor;
} tyDispBffrDat;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyDispBffr
{	signed long diDispIdxSt;
	signed long diDispIdxEnd;
	struct tyDispBffrDat a_tyDispBffrDat[120];
} tyDispBffr;
#else
/* Data type tyDispBffr not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif



/* Prototyping of functions and function blocks */
_BUR_PUBLIC unsigned long fBffrSetFull(struct tyBffr** p_tyBffr, struct tyBffrParam* tyBffrParam, plcdt dtTimeNow, plcstring* sBffrNm, plcstring* sProdNm);
_BUR_PUBLIC unsigned long fBffrSetMty(struct tyBffr** p_tyBffr, struct tyBffrParam* tyBffrParam, plcstring* sBffrNm);
_BUR_PUBLIC unsigned long fBffrLoad(struct tyBffr** p_tyBffr, plcbit* p_bNewProduct, signed long diSlt, plcdt dtTimeNow, plcbit bGdBrd, plcstring* sProdNm, plcstring* sBarcode1, plcstring* sBarcode2);
_BUR_PUBLIC unsigned long fBffrUnload(struct tyBrdUnloadStat** p_tyBrdUnloadStat, struct tyBffr** p_tyBffr, plcbit* p_bLastProdUnload, plcbit* p_bLastProdLeftInBffr, signed long diSlt);
_BUR_PUBLIC plcbit fDispBffrAscending(struct tyDispBffr** p_tyDispBffr, struct tyBffrParam* tyBffrParam, struct tyBffr* tyBffr, plcdt dtTimeNow, plctime tCoolTm, plcdword dwNAColor, plcdword dwGdColor, plcdword dwBadColor);
_BUR_PUBLIC plcbit fDispBffrDescending(struct tyDispBffr** p_tyDispBffr, struct tyBffrParam* tyBffrParam, struct tyBffr* tyBffr, plcdt dtTimeNow, plctime tCoolTm, plcdword dwNAColor, plcdword dwGdColor, plcdword dwBadColor);
_BUR_PUBLIC signed long fBffrNxtLoadSeqAny(plcbit bAscending, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrNxtLoadSeqGd(plcbit bAscending, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrNxtLoadSeqBad(plcbit bAscending, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrNxtLoadNearbyAny(signed long diCurrSlt, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrNxtLoadNearbyGd(signed long diCurrSlt, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrNxtLoadNearbyBad(signed long diCurrSlt, struct tyBffr* tyBffr);
_BUR_PUBLIC plcbit fBffrChkCoolTmRdy(signed long diSlt, plcdt dtTimeNow, plctime tCoolTm, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrChkCoolBrdAny(plcdt dtTimeNow, plctime tCoolTm, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrChkCoolBrdGd(plcdt dtTimeNow, plctime tCoolTm, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrChkCoolBrdBad(plcdt dtTimeNow, plctime tCoolTm, struct tyBffr* tyBffr);
_BUR_PUBLIC signed long fBffrNxtUnloadFIFOAny(struct tyBffr* tyBffr, plcstring* sProdNm);
_BUR_PUBLIC signed long fBffrNxtUnloadFIFOGd(struct tyBffr* tyBffr, plcstring* sProdNm);
_BUR_PUBLIC signed long fBffrNxtUnloadFIFOBad(struct tyBffr* tyBffr, plcstring* sProdNm);
_BUR_PUBLIC signed long fBffrNxtUnloadLIFOAny(struct tyBffr* tyBffr, plcstring* sProdNm);
_BUR_PUBLIC signed long fBffrNxtUnloadLIFOGd(struct tyBffr* tyBffr, plcstring* sProdNm);
_BUR_PUBLIC signed long fBffrNxtUnloadLIFOBad(struct tyBffr* tyBffr, plcstring* sProdNm);
_BUR_PUBLIC plcbit fBffrStat(struct tyBffrStat** p_tyBffrStat, struct tyBffr* tyBffr);
_BUR_PUBLIC signed short fBffrDTConvert(plcstring** p_sDTOut, plcdt dtIn);


#ifdef __cplusplus
};
#endif
#endif /* _NTBUFFER_ */

