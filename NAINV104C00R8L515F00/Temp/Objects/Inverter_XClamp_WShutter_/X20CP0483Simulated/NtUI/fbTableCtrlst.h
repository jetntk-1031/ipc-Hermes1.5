#ifndef __AS__TYPE_
#define __AS__TYPE_
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

#ifndef __AS__TYPE_TouchAction
#define __AS__TYPE_TouchAction
typedef struct TouchAction
{	unsigned long status;
	unsigned long y;
	unsigned long x;
} TouchAction;
#endif

#ifndef __AS__TYPE_tyTouchGetActionInternal
#define __AS__TYPE_tyTouchGetActionInternal
typedef struct tyTouchGetActionInternal
{	unsigned long udiHandle;
	TouchAction tyTouchAction;
} tyTouchGetActionInternal;
#endif

#ifndef __AS__TYPE_tyTouchFilterInternal
#define __AS__TYPE_tyTouchFilterInternal
typedef struct tyTouchFilterInternal
{	unsigned long udiXOld;
	unsigned long udiYOld;
} tyTouchFilterInternal;
#endif

struct R_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void R_TRIG(struct R_TRIG* inst);
#ifndef __AS__TYPE_tyTouchGetSlideDistInternal
#define __AS__TYPE_tyTouchGetSlideDistInternal
typedef struct tyTouchGetSlideDistInternal
{	struct R_TRIG fbPressedRise;
	struct R_TRIG fbInternalPressedRise;
	plcbit bValidStartPress;
	plcbit bPressed;
	unsigned long udiXTemp;
	unsigned long udiYTemp;
} tyTouchGetSlideDistInternal;
#endif

struct F_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void F_TRIG(struct F_TRIG* inst);
#ifndef __AS__TYPE_tyTouchGetTapInternal
#define __AS__TYPE_tyTouchGetTapInternal
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
struct fbTouchFilter
{	unsigned long udiXIn;
	unsigned long udiYIn;
	unsigned long udiXOut;
	unsigned long udiYOut;
	tyTouchFilterInternal tyInternal;
	plcbit bPressedIn;
	plcbit bPressedOut;
};
_BUR_PUBLIC void fbTouchFilter(struct fbTouchFilter* inst);
struct fbTouchGetAction
{	plcstring sVisuNm[81];
	unsigned long udiX;
	unsigned long udiY;
	tyTouchGetActionInternal tyInternal;
	plcbit bPressed;
};
_BUR_PUBLIC void fbTouchGetAction(struct fbTouchGetAction* inst);
struct fbTouchGetSlideDist
{	unsigned long udiWorkAreaStartX;
	unsigned long udiWorkAreaStartY;
	unsigned long udiWorkAreaEndX;
	unsigned long udiWorkAreaEndY;
	unsigned long udiMinXDist;
	unsigned long udiMinYDist;
	unsigned long udiX;
	unsigned long udiY;
	signed long diXDist;
	signed long diYDist;
	tyTouchGetSlideDistInternal tyInternal;
	plcbit bPressed;
};
_BUR_PUBLIC void fbTouchGetSlideDist(struct fbTouchGetSlideDist* inst);
struct fbTouchGetTap
{	unsigned long udiWorkAreaStartX;
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
	unsigned long udiSingleTapX;
	unsigned long udiSingleTapY;
	unsigned long udiDoubleTapX;
	unsigned long udiDoubleTapY;
	tyTouchGetTapInternal tyInternal;
	plcbit bPressed;
	plcbit bSingleTap;
	plcbit bDoubleTap;
};
_BUR_PUBLIC void fbTouchGetTap(struct fbTouchGetTap* inst);
#ifndef __AS__TYPE_tyTableCtrlInternal
#define __AS__TYPE_tyTableCtrlInternal
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
#endif

#ifndef __AS__TYPE_tyUIHotspot
#define __AS__TYPE_tyUIHotspot
typedef struct tyUIHotspot
{	plcbit bRtCompl;
	plcbit bRtLk;
	plcbit bValue;
	unsigned short uiMaskRtStat;
	unsigned short uiRtStat;
} tyUIHotspot;
#endif

_BUR_PUBLIC unsigned short fUIInRtStatOff(unsigned short(* uiRtStat));
_BUR_PUBLIC unsigned short fUIInRtStatHide(unsigned short(* uiRtStat));
struct fbTableCtrl
{	plcstring sVisuNm[81];
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
	unsigned short uiSelectedRow;
	unsigned short(* uiSliderStatus);
	struct tyUIHotspot(* a_tyUIHotspot)[15];
	unsigned short(* uiTablePos);
	signed short(* iSliderPos);
	tyTableCtrlInternal tyInternal;
	plcbit bSelectedRowMnl;
	plcbit bTablePosPlus;
	plcbit bTablePosMinus;
	plcbit bTableActive;
	plcbit bSliderActive;
};
_BUR_PUBLIC void fbTableCtrl(struct fbTableCtrl* inst);
