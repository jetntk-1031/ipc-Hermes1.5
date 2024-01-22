/* Automation Studio generated header file */
/* Do not edit ! */
/* NtUI 5.00.2 */

#ifndef _NTUI_
#define _NTUI_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _NtUI_VERSION
#define _NtUI_VERSION 5.00.2
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct tyTouchGetActionInternal
{	unsigned long udiHandle;
	struct TouchAction tyTouchAction;
} tyTouchGetActionInternal;

typedef struct tyTouchFilterInternal
{	unsigned long udiXOld;
	unsigned long udiYOld;
} tyTouchFilterInternal;

typedef struct tyTouchGetSlideDistInternal
{	struct R_TRIG fbPressedRise;
	struct R_TRIG fbInternalPressedRise;
	plcbit bValidStartPress;
	plcbit bPressed;
	unsigned long udiXTemp;
	unsigned long udiYTemp;
} tyTouchGetSlideDistInternal;

typedef struct tyTouchGetTapInternal
{	struct R_TRIG fbInternalPressedRise;
	struct F_TRIG fbInternalPressedFall;
	plcbit bPressed;
	plctime tTmTemp;
	unsigned long udiXTemp;
	unsigned long udiYTemp;
	plctime tTmPrev;
	unsigned long udiXPrev;
	unsigned long udiYPrev;
} tyTouchGetTapInternal;

typedef struct fbTouchFilter
{
	/* VAR_INPUT (analog) */
	unsigned long udiXIn;
	unsigned long udiYIn;
	/* VAR_OUTPUT (analog) */
	unsigned long udiXOut;
	unsigned long udiYOut;
	/* VAR (analog) */
	struct tyTouchFilterInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bPressedIn;
	/* VAR_OUTPUT (digital) */
	plcbit bPressedOut;
} fbTouchFilter_typ;

typedef struct fbTouchGetAction
{
	/* VAR_INPUT (analog) */
	plcstring sVisuNm[81];
	/* VAR_OUTPUT (analog) */
	unsigned long udiX;
	unsigned long udiY;
	/* VAR (analog) */
	struct tyTouchGetActionInternal tyInternal;
	/* VAR_OUTPUT (digital) */
	plcbit bPressed;
} fbTouchGetAction_typ;

typedef struct fbTouchGetSlideDist
{
	/* VAR_INPUT (analog) */
	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinXDist;
	unsigned long udiMinYDist;
	unsigned long udiX;
	unsigned long udiY;
	/* VAR_OUTPUT (analog) */
	signed long diXDist;
	signed long diYDist;
	/* VAR (analog) */
	struct tyTouchGetSlideDistInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bPressed;
} fbTouchGetSlideDist_typ;

typedef struct fbTouchGetTap
{
	/* VAR_INPUT (analog) */
	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinSingleTapXDiff;
	unsigned long udiMinSingleTapYDiff;
	plctime tMaxDoubleTapTm;
	unsigned long udiMinDoubleTapXDiff;
	unsigned long udiMinDoubleTapYDiff;
	unsigned long udiX;
	unsigned long udiY;
	/* VAR_OUTPUT (analog) */
	unsigned long udiSingleTapX;
	unsigned long udiSingleTapY;
	unsigned long udiDoubleTapX;
	unsigned long udiDoubleTapY;
	/* VAR (analog) */
	struct tyTouchGetTapInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bPressed;
	/* VAR_OUTPUT (digital) */
	plcbit bSingleTap;
	plcbit bDoubleTap;
} fbTouchGetTap_typ;

typedef struct tyTableCtrlInternal
{	struct TON fbSingleTapChkDlyTm;
	struct TON fbSliderOffTm;
	struct R_TRIG fbSelectedRowMnlRise;
	struct R_TRIG fbTablePosUpRise;
	struct R_TRIG fbTablePosDownRise;
	struct F_TRIG fbSliderRelease;
	struct fbTouchFilter fbTouchFilter;
	struct fbTouchGetAction fbTouchGetAction;
	struct fbTouchGetSlideDist fbTouchGetSlideDist;
	struct fbTouchGetTap fbTouchGetTap;
	signed short i;
	signed short iTablePos;
	signed short iTablePosTemp;
} tyTableCtrlInternal;

typedef struct tyUILine
{	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUILine;

typedef struct tyUITxt
{	plcbit bHighlighting;
	plcstring sTxt[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiValueIdx;
} tyUITxt;

typedef struct tyUIAlmTxt
{	plcbit bHighlighting;
	plcstring sTxt[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned long udiValueIdx;
} tyUIAlmTxt;

typedef struct tyUIShape
{	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUIShape;

typedef struct tyUIString
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcstring sValue[31];
	plcstring sValueDisplay[11];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	plcstring sKeypadTitle[31];
} tyUIString;

typedef struct tyUILString
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcstring sValue[255];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	plcstring sKeypadTitle[31];
} tyUILString;

typedef struct tyUINum
{	plcbit bRtCompl;
	plcbit bRtLk;
	signed long diValue;
	signed long diValueMax;
	signed long diValueMin;
	signed long diValueTeach;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiAddDigits;
	unsigned char usiColor;
	plcstring sKeypadTitle[31];
} tyUINum;

typedef struct tyUIBtn
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcbit bValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiBitmapIdx;
	unsigned char usiColor;
	unsigned char usiPressedColor;
	unsigned char usiTxtIdx;
	unsigned short uiBitmapIdx;
} tyUIBtn;

typedef struct tyUIHotspot
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcbit bValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
} tyUIHotspot;

typedef struct tyUIBitmap
{	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiValueIdx;
	unsigned short uiValueIdx;
} tyUIBitmap;

typedef struct tyUIBarGraph
{	signed short iValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUIBarGraph;

typedef struct tyUIDT
{	signed long diValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUIDT;

typedef struct tyUIPw
{	plcstring a_sTxt[10][31];
	plcbit bRtCompl;
	plcbit bRtLk;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiLevel;
} tyUIPw;

typedef struct tyUIListBox
{	plcstring a_sTxt[10][31];
	unsigned char a_usiValueOptionIdx[10];
	plcbit bRtCompl;
	plcbit bRtLk;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiDisabledColor;
	unsigned char usiSelectedColor;
	unsigned char usiSliderColor;
	unsigned char usiValueIdx;
	unsigned char usiValueMaxIdx;
	unsigned char usiValueMinIdx;
} tyUIListBox;

typedef struct tyUIAlm
{	unsigned char a_usiFltrTm[6];
	plcbit bRtLk;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned short uiFltrAlm;
	unsigned short uiFltrCtrl;
	unsigned short uiFltrGrp;
	unsigned short uiFltrPriority;
} tyUIAlm;

typedef struct tyUIDrawBox
{	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
} tyUIDrawBox;

typedef struct tyUITrend
{	plcbit bRtCompl;
	plcbit bRtLk;
	signed short iSelectItem;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUITrend;

typedef struct tyUIScale
{	signed short iMaxValue;
	signed short iMinValue;
	signed short iRangeEnd;
	signed short iRangeSt;
	signed short iValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiRangeColor;
} tyUIScale;

typedef struct tyUIEdit
{	plcbit bLineEndings;
	plcbit bRtCompl;
	plcbit bRtEditInsertMode;
	plcbit bRtEditModified;
	plcbit bRtEditSelectionMode;
	plcbit bRtLk;
	signed short iRtEditCursorColumn;
	signed short iRtEditCursorLine;
	plcstring sRtCmdRequest[31];
	plcstring sRtCmdResponse[31];
	plcstring sURL[31];
	plcstring sValue[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtBusy;
	unsigned short uiRtCmdStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiCursorColor;
	unsigned char usiSelectedColor;
} tyUIEdit;

typedef struct tyUIHTMLView
{	plcbit bRtLk;
	plcstring sChgURL[31];
	plcstring sCurrTitle[31];
	plcstring sCurrURL[31];
	plcstring sHTMLStream[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtBusy;
	unsigned short uiRtHTTPErrCode;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiErrCnt;
} tyUIHTMLView;

typedef struct tyUIDrpDn
{	unsigned char a_usiValueOptionIdx[10];
	plcbit bRtCompl;
	plcbit bRtLk;
	plcstring sTxt[31];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
	unsigned char usiDisabledColor;
	unsigned char usiDropdownColor;
	unsigned char usiSelectedColor;
	unsigned char usiValueIdx;
	unsigned char usiValueMaxIdx;
	unsigned char usiValueMinIdx;
} tyUIDrpDn;

typedef struct tyUIPieChart
{	unsigned short a_uiValue[10];
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUIPieChart;

typedef struct tyUISlider
{	plcbit bRtCompl;
	plcbit bRtLk;
	signed short iCurrValue;
	signed short iMaxValue;
	signed short iMinValue;
	signed short iValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUISlider;

typedef struct tyUIGauge
{	signed short iMaxValue;
	signed short iMinValue;
	signed short iValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
	unsigned char usiColor;
} tyUIGauge;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyUITable
{	struct tyUIHotspot a_tyHotspot[15];
	struct tyUILString a_tyStringDataCol0[15];
	struct tyUILString a_tyStringDataCol1[15];
	struct tyUILString a_tyStringDataCol2[15];
	struct tyUILString a_tyStringDataCol3[15];
	struct tyUILString a_tyStringDataCol4[15];
	struct tyUISlider tyUISlider;
	struct tyUIString tyStringTitle0Col0Row0;
	struct tyUIString tyStringTitle1Col1Row0;
	struct tyUIString tyStringTitle2Col2Row0;
	struct tyUIString tyStringTitle3Col3Row0;
	struct tyUIString tyStringTitle4Col4Row0;
	unsigned short uiMaskRtStat;
} tyUITable;
#else
/* Data type tyUITable not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct tyUITable1
{	struct tyUIHotspot a_tyHotspot[15];
	struct tyUILString a_tyStringDataCol0[15];
	struct tyUILString a_tyStringDataCol1[15];
	struct tyUILString a_tyStringDataCol2[15];
	struct tyUILString a_tyStringDataCol4[15];
	struct tyUITxt a_tyTxtDataCol3[15];
	struct tyUIString tyStringTitle0Col0Row0;
	struct tyUIString tyStringTitle1Col1Row0;
	struct tyUIString tyStringTitle2Col2Row0;
	struct tyUIString tyStringTitle3Col3Row0;
	struct tyUIString tyStringTitle4Col4Row0;
	struct tyUISlider tyUISlider;
	unsigned short uiMaskRtStat;
} tyUITable1;
#else
/* Data type tyUITable1 not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

typedef struct tyUILyr
{	unsigned short uiRtStat;
} tyUILyr;

typedef struct tyAlm
{	unsigned char usiColor;
	signed short udiCntrllDp;
	unsigned long udiGrpDp;
	unsigned long udiAlrmDp;
	unsigned long udiPrioDp;
	plcdt udiTimeDp;
	unsigned short uiRtStat;
} tyAlm;

typedef struct tyUIAlarm
{	struct tyAlm tyUIAlmCur;
	struct tyAlm tyUIAlmHis;
} tyUIAlarm;

typedef struct tyUIAlmTextSnip
{	plcstring CurrentRecipeName[81];
	plcstring CurrentRecipeWidth[81];
	plcstring SameRcpDiffWidName[81];
	plcstring MachineOutGoingWidth[81];
	plcstring LFNewRecipeName[81];
	plcstring LFNewRecipeWidth[81];
	plcstring LFOldRecipeName[81];
	plcstring LFOldRecipeWidth[81];
	plcstring HANewRecipeName[81];
	plcstring HANewRecipeWidth[81];
	plcstring HAOldRecipeName[81];
	plcstring HAOldRecipeWidth[81];
	plcstring HBNewRecipeName[81];
	plcstring HBNewRecipeWidth[81];
	plcstring HBOldRecipeName[81];
	plcstring HBOldRecipeWidth[81];
} tyUIAlmTextSnip;

typedef struct tyUIAlarmInfoGrp
{	unsigned long udiOffsetInfo1;
	unsigned long udiOffsetInfo2;
	struct tyUIAlmTextSnip tyUptTxtSnipp;
	unsigned long udiToggleAlarmInfo;
} tyUIAlarmInfoGrp;

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbTableCtrl
{
	/* VAR_INPUT (analog) */
	plcstring sVisuNm[81];
	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinXDist;
	unsigned long udiMinYDist;
	unsigned short uiSlideScale;
	signed short iTotalData;
	signed short iTotalRow;
	unsigned short uiSelectedRowMnl;
	/* VAR_OUTPUT (analog) */
	unsigned short uiSelectedRow;
	/* VAR_IN_OUT (analog and digital) */
	unsigned short* uiSliderStatus;
	struct tyUIHotspot (*a_tyUIHotspot)[15];
	unsigned short* uiTablePos;
	signed short* iSliderPos;
	/* VAR (analog) */
	struct tyTableCtrlInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bSelectedRowMnl;
	plcbit bTablePosPlus;
	plcbit bTablePosMinus;
	/* VAR_OUTPUT (digital) */
	plcbit bTableActive;
	plcbit bSliderActive;
} fbTableCtrl_typ;
#else
/* Data type fbTableCtrl not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif

#ifdef _BUR_USE_DECLARATION_IN_IEC
typedef struct fbTableCtrl_v2
{
	/* VAR_INPUT (analog) */
	plcstring sVisuNm[81];
	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinXDist;
	unsigned long udiMinYDist;
	unsigned short uiSlideScale;
	signed short iTotalData;
	signed short iTotalRow;
	unsigned short uiSelectedRowMnl;
	plcbit* p_bTableActive;
	plcbit* p_bSliderActive;
	unsigned short* p_uiSelectedRow;
	unsigned short* p_uiSliderStatus;
	struct tyUIHotspot (*pa_tyUIHotspot)[15];
	unsigned short* p_uiTablePos;
	signed short* p_iSliderPos;
	/* VAR (analog) */
	struct tyTableCtrlInternal tyInternal;
	/* VAR_INPUT (digital) */
	plcbit bSelectedRowMnl;
	plcbit bTablePosPlus;
	plcbit bTablePosMinus;
} fbTableCtrl_v2_typ;
#else
/* Data type fbTableCtrl_v2 not declared. Data types with array elements whose starting indexes are not equal to zero cannot be used in ANSI C programs / libraries.*/
#endif



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void fbTouchGetAction(struct fbTouchGetAction* inst);
_BUR_PUBLIC void fbTouchFilter(struct fbTouchFilter* inst);
_BUR_PUBLIC void fbTouchGetSlideDist(struct fbTouchGetSlideDist* inst);
_BUR_PUBLIC void fbTouchGetTap(struct fbTouchGetTap* inst);
_BUR_PUBLIC void fbTableCtrl(struct fbTableCtrl* inst);
_BUR_PUBLIC void fbTableCtrl_v2(struct fbTableCtrl_v2* inst);
_BUR_PUBLIC unsigned short fUIInRtStatOff(unsigned short* uiRtStat);
_BUR_PUBLIC unsigned short fUIInRtStatHide(unsigned short* uiRtStat);
_BUR_PUBLIC unsigned short fUIInRtStatLock(unsigned short* uiRtStat);
_BUR_PUBLIC unsigned short fUIInRtStatFocus(unsigned short* uiRtStat);
_BUR_PUBLIC unsigned short fUIInRtStatOpenTP(unsigned short* uiRtStat);
_BUR_PUBLIC plcbit fUIOutRtStatCursor1Valid(unsigned short* uiRtStat);
_BUR_PUBLIC plcbit fUIOutRtStatCursor2Valid(unsigned short* uiRtStat);
_BUR_PUBLIC plcbit fUIOutRtStatTPIsOpen(unsigned short* uiRtStat);
_BUR_PUBLIC plcbit fUIOutRtStatOnLock(unsigned short* uiRtStat);
_BUR_PUBLIC plcbit fUIOutRtStatHasFocus(unsigned short* uiRtStat);
_BUR_PUBLIC plcbit fUIOutRtStatInEdit(unsigned short* uiRtStat);


#ifdef __cplusplus
};
#endif
#endif /* _NTUI_ */

