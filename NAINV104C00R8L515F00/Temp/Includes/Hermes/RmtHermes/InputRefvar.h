/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1700031253_186_
#define _BUR_1700031253_186_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL enum eFBStatus *p_eMcParamStatus;
_BUR_LOCAL enum eMcParamAction *p_eMcParamStat;
_BUR_LOCAL enum eFBStatus *p_eHermesStatus;
_BUR_LOCAL enum eHermesAction *p_eHermesStat;
_BUR_LOCAL struct tyHermesConfiguration *p_tyHermesConfiguration;
_BUR_LOCAL plcstring (*p_sInfoMsg)[201];
_BUR_LOCAL signed short *p_iOutput;
_BUR_LOCAL signed short *p_iInput;
_BUR_LOCAL plcbit *p_bNtSettingsLoadDone;
_BUR_LOCAL plcstring (*p_sProgNm)[16];
_BUR_LOCAL plcstring (*p_sConfigFileName)[81];
_BUR_LOCAL unsigned long *p_udiFileKeepDay;
_BUR_LOCAL unsigned long *p_udiAliveIdleTimeInSec;
_BUR_LOCAL unsigned long *p_udiRcvBffrSize;
_BUR_LOCAL unsigned long *p_udiSndBffrSize;
_BUR_LOCAL plcbit *p_bRmtEn;
_BUR_LOCAL plcbit *p_bRmtPrep;
_BUR_LOCAL plcstring (*p_sMcId)[81];
_BUR_LOCAL plcdt *p_dtCurrDT;
_BUR_LOCAL struct DTStructure *p_tyDTStructure;
_BUR_LOCAL plcstring (*p_sIPAddr)[16];
_BUR_LOCAL struct tyHermesRmtParam *p_tyParam;
_BUR_LOCAL plcbit *p_bDis;
_BUR_LOCAL plcbit *p_bEn;
_BUR_LOCAL plcbit *p_bPrep;
_BUR_LOCAL unsigned long *p_udiRstErr;
_BUR_LOCAL enum eHermesAction *p_eAct;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Hermes/RmtHermes/InputRef.var\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1700031253_186_ */

