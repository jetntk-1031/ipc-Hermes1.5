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

struct R_TRIG
{	plcbit CLK;
	plcbit Q;
	plcbit M;
};
_BUR_PUBLIC void R_TRIG(struct R_TRIG* inst);
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

_BUR_PUBLIC plctime clock_ms(void);
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
