/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_161_
#define _BUR_1700031253_161_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit *p_bDSHermesReversalUSRdy;
_BUR_LOCAL plcbit *p_bUSHermesReversalDSRdy;
_BUR_LOCAL plcbit *p_bDSHermesUSRdy;
_BUR_LOCAL plcbit *p_bUSHermesDSRdy;
_BUR_LOCAL plcbit *p_bRejectDownSafetySen;
_BUR_LOCAL plcbit *p_bRejectUpSafetySen;
_BUR_LOCAL plcbit *p_bRejectDownSen;
_BUR_LOCAL plcbit *p_bRejectUpSen;
_BUR_LOCAL plcbit *p_bRotRemoteSafetySen;
_BUR_LOCAL plcbit *p_bRotHomeSafetySen;
_BUR_LOCAL plcbit *p_bRotRemoteSen;
_BUR_LOCAL plcbit *p_bRotHomeSen;
_BUR_LOCAL plcbit *p_bPullerRetSafetySen;
_BUR_LOCAL plcbit *p_bPullerExtSafetySen;
_BUR_LOCAL plcbit *p_bPullerRetSen;
_BUR_LOCAL plcbit *p_bPullerExtSen;
_BUR_LOCAL plcbit *p_bPshrRetSafetySen;
_BUR_LOCAL plcbit *p_bPshrExtSafetySen;
_BUR_LOCAL plcbit *p_bPshrRetSen;
_BUR_LOCAL plcbit *p_bPshrExtSen;
_BUR_LOCAL plcbit *p_bPullerChkSen;
_BUR_LOCAL plcbit *p_bMiddleSen;
_BUR_LOCAL plcbit *p_bRightSen;
_BUR_LOCAL plcbit *p_bLeftSen;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plctime *p_tRejectDownTO;
_BUR_LOCAL plctime *p_tRejectUpTO;
_BUR_LOCAL plctime *p_tRotRemoteTO;
_BUR_LOCAL plctime *p_tRotHomeTO;
_BUR_LOCAL plctime *p_tPullerRetTO;
_BUR_LOCAL plctime *p_tPullerExtTO;
_BUR_LOCAL plctime *p_tPshrRetTO;
_BUR_LOCAL plctime *p_tPshrExtTO;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcbit *p_bGdBrdEnt;
_BUR_LOCAL plcbit *p_bGdBrdInit;
_BUR_LOCAL enum eConvDir *p_eDirection;
_BUR_LOCAL signed long *p_diTxOutTimeOut;
_BUR_LOCAL signed long *p_diTxInTimeOut;
_BUR_LOCAL plctime *p_tMtrOffDlyTm;
_BUR_LOCAL signed long *p_diRevDlyTm;
_BUR_LOCAL signed long *p_diInitTm;
_BUR_LOCAL plcbit *p_bOnDirMod;
_BUR_LOCAL plcbit *p_bLongBrdEn;
_BUR_LOCAL plcbit *p_bLongBrdPrep;
_BUR_LOCAL plcbit *p_bManual;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eConvAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Conv/Conv/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_161_ */

