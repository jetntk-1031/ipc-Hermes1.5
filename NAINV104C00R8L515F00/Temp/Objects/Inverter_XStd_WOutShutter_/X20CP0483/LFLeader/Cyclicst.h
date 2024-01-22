#ifndef __AS__TYPE_
#define __AS__TYPE_
static signed long __AS__STRING_CMP(char* pstr1, char* pstr2);
static unsigned long __AS__MEMSET(unsigned long pDest, unsigned char value, unsigned long length);
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

#ifndef __AS__TYPE_eLFAction
#define __AS__TYPE_eLFAction
typedef enum eLFAction
{	LFActIdle = 0,
	LFActBGStartRun = 1,
	LFActBGStopRun = 2,
	LFActSyncPLCTm = 3,
	LFActChgAllAuto = 4,
	LFActChgAllMnl = 5,
	LFActChgSeqAuto = 6,
	LFActChgSeqMnl = 7,
} eLFAction;
#endif

#ifndef __AS__TYPE_eLFOPCUAStep
#define __AS__TYPE_eLFOPCUAStep
typedef enum eLFOPCUAStep
{	LFOPCUAStepIncCntr = 0,
	LFOPCUAStepChkHdls = 1,
	LFOPCUAStepConnect = 2,
	LFOPCUAStepWriteHdls = 3,
	LFOPCUAStepReadHdls = 4,
	LFOPCUAStepWrite = 5,
	LFOPCUAStepRead = 6,
	LFOPCUAStepStopChk = 7,
} eLFOPCUAStep;
#endif

#ifndef __AS__TYPE_tyOPCUAHdlList
#define __AS__TYPE_tyOPCUAHdlList
typedef struct tyOPCUAHdlList
{	plcdword a_dwHdls[64];
} tyOPCUAHdlList;
#endif

#ifndef __AS__TYPE_UASecurityMsgMode
#define __AS__TYPE_UASecurityMsgMode
typedef enum UASecurityMsgMode
{	UASecurityMsgMode_BestAvailable = 0,
	UASecurityMsgMode_None = 1,
	UASecurityMsgMode_Sign = 2,
	UASecurityMsgMode_SignEncrypt = 3,
} UASecurityMsgMode;
#endif

#ifndef __AS__TYPE_UASecurityPolicy
#define __AS__TYPE_UASecurityPolicy
typedef enum UASecurityPolicy
{	UASecurityPolicy_BestAvailable = 0,
	UASecurityPolicy_None = 1,
	UASecurityPolicy_Basic128Rsa15 = 2,
	UASecurityPolicy_Basic256 = 3,
	UASecurityPolicy_Basic256Sha256 = 4,
} UASecurityPolicy;
#endif

#ifndef __AS__TYPE_UATransportProfile
#define __AS__TYPE_UATransportProfile
typedef enum UATransportProfile
{	UATP_UATcp = 1,
	UATP_WSHttpBinary = 2,
	UATP_WSHttpXmlOrBinary = 3,
	UATP_WSHttpXml = 4,
} UATransportProfile;
#endif

#ifndef __AS__TYPE_UAUserIdentityTokenTtype
#define __AS__TYPE_UAUserIdentityTokenTtype
typedef enum UAUserIdentityTokenTtype
{	UAUITT_Anonymous = 0,
	UAUITT_Username = 1,
	UAUITT_x509 = 2,
} UAUserIdentityTokenTtype;
#endif

#ifndef __AS__TYPE_UAIdentifierType
#define __AS__TYPE_UAIdentifierType
typedef enum UAIdentifierType
{	UAIdentifierType_String = 1,
	UAIdentifierType_Numeric = 2,
	UAIdentifierType_GUID = 3,
	UAIdentifierType_Opaque = 4,
} UAIdentifierType;
#endif

#ifndef __AS__TYPE_UAAttributeId
#define __AS__TYPE_UAAttributeId
typedef enum UAAttributeId
{	UAAI_Default = 0,
	UAAI_NodeId = 1,
	UAAI_NodeClass = 2,
	UAAI_BrowseName = 3,
	UAAI_DisplayName = 4,
	UAAI_Description = 5,
	UAAI_WriteMask = 6,
	UAAI_UserWriteMask = 7,
	UAAI_IsAbstract = 8,
	UAAI_Symmetric = 9,
	UAAI_InverseName = 10,
	UAAI_ContainsNoLoops = 11,
	UAAI_EventNotifier = 12,
	UAAI_Value = 13,
	UAAI_DataType = 14,
	UAAI_ValueRank = 15,
	UAAI_ArrayDimensions = 16,
	UAAI_AccessLevel = 17,
	UAAI_UserAccessLevel = 18,
	UAAI_MinimumSamplingInterval = 19,
	UAAI_Historizing = 20,
	UAAI_Executable = 21,
	UAAI_UserExecutable = 22,
} UAAttributeId;
#endif

#ifndef __AS__TYPE_UAConnectionStatus
#define __AS__TYPE_UAConnectionStatus
typedef enum UAConnectionStatus
{	UACS_Connected = 0,
	UACS_ConnectionError = 1,
	UACS_Shutdown = 2,
} UAConnectionStatus;
#endif

#ifndef __AS__TYPE_UAServerState
#define __AS__TYPE_UAServerState
typedef enum UAServerState
{	UASS_Running = 0,
	UASS_Failed = 1,
	UASS_NoConfiguration = 2,
	UASS_Suspended = 3,
	UASS_Shutdown = 4,
	UASS_Test = 5,
	UASS_CommunicationFault = 6,
	UASS_Unknown = 7,
} UAServerState;
#endif

#ifndef __AS__TYPE_UAUserIdentityToken
#define __AS__TYPE_UAUserIdentityToken
typedef struct UAUserIdentityToken
{	UAUserIdentityTokenTtype UserIdentityTokenType;
	plcstring TokenParam1[256];
	plcstring TokenParam2[256];
} UAUserIdentityToken;
#endif

#ifndef __AS__TYPE_UASessionConnectInfo
#define __AS__TYPE_UASessionConnectInfo
typedef struct UASessionConnectInfo
{	plcstring SessionName[256];
	plcstring ApplicationName[256];
	UASecurityMsgMode SecurityMsgMode;
	UASecurityPolicy SecurityPolicy;
	plcstring CertificateStore[256];
	plcstring ClientCertificateName[256];
	plcstring ServerUri[256];
	plcbit CheckServerCertificate;
	UATransportProfile TransportProfile;
	UAUserIdentityToken UserIdentityToken;
	plcstring VendorSpecificParameter[256];
	plctime SessionTimeout;
	plctime MonitorConnection;
	plcstring LocaleIDs[5][7];
} UASessionConnectInfo;
#endif

#ifndef __AS__TYPE_UANodeID
#define __AS__TYPE_UANodeID
typedef struct UANodeID
{	unsigned short NamespaceIndex;
	plcstring Identifier[256];
	UAIdentifierType IdentifierType;
} UANodeID;
#endif

#ifndef __AS__TYPE_UAIndexRange
#define __AS__TYPE_UAIndexRange
typedef struct UAIndexRange
{	unsigned short StartIndex;
	unsigned short EndIndex;
} UAIndexRange;
#endif

#ifndef __AS__TYPE_UANodeAdditionalInfo
#define __AS__TYPE_UANodeAdditionalInfo
typedef struct UANodeAdditionalInfo
{	UAAttributeId AttributeId;
	unsigned short IndexRangeCount;
	struct UAIndexRange IndexRange[8];
} UANodeAdditionalInfo;
#endif

struct UA_Connect
{	plcstring ServerEndpointUrl[256];
	UASessionConnectInfo SessionConnectInfo;
	plctime Timeout;
	plcdword ConnectionHdl;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_Connect(struct UA_Connect* inst);
struct UA_Disconnect
{	plcdword ConnectionHdl;
	plctime Timeout;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_Disconnect(struct UA_Disconnect* inst);
struct UA_NodeGetHandleList
{	plcdword ConnectionHdl;
	unsigned short NodeIDCount;
	struct UANodeID NodeIDs[64];
	plctime Timeout;
	plcdword NodeHdls[64];
	plcdword ErrorID;
	plcdword NodeErrorIDs[64];
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_NodeGetHandleList(struct UA_NodeGetHandleList* inst);
struct UA_NodeReleaseHandleList
{	plcdword ConnectionHdl;
	unsigned short NodeHdlCount;
	plcdword NodeHdls[64];
	plctime Timeout;
	plcdword ErrorID;
	plcdword NodeErrorIDs[64];
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_NodeReleaseHandleList(struct UA_NodeReleaseHandleList* inst);
struct UA_ReadList
{	plcdword ConnectionHdl;
	unsigned short NodeHdlCount;
	plcdword NodeHdls[64];
	struct UANodeAdditionalInfo NodeAddInfo[64];
	plctime Timeout;
	plcdword ErrorID;
	plcdword NodeErrorIDs[64];
	plcdt TimeStamps[64];
	plcstring(* Variables)[64][256];
	unsigned long i_tid;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_ReadList(struct UA_ReadList* inst);
struct UA_WriteList
{	plcdword ConnectionHdl;
	unsigned short NodeHdlCount;
	plcdword NodeHdls[64];
	struct UANodeAdditionalInfo NodeAddInfo[64];
	plctime Timeout;
	plcdword ErrorID;
	plcdword NodeErrorIDs[64];
	plcstring(* Variables)[64][256];
	unsigned long i_tid;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_WriteList(struct UA_WriteList* inst);
struct UA_ConnectionGetStatus
{	plcdword ConnectionHdl;
	plctime Timeout;
	UAConnectionStatus ConnectionStatus;
	UAServerState ServerState;
	plcbyte ServiceLevel;
	plcdword ErrorID;
	plcbit Execute;
	plcbit Done;
	plcbit Busy;
	plcbit Error;
	plcbit i_busy;
};
_BUR_PUBLIC void UA_ConnectionGetStatus(struct UA_ConnectionGetStatus* inst);
#ifndef __AS__TYPE_tyOPCUAInternal
#define __AS__TYPE_tyOPCUAInternal
typedef struct tyOPCUAInternal
{	struct UA_Connect fbConnect;
	struct UA_Disconnect fbDisconnect;
	struct UA_NodeGetHandleList fbGetNodeHdlList;
	struct UA_NodeReleaseHandleList fbRlsNodeHdlList;
	struct UA_ReadList fbReadList;
	struct UA_WriteList fbWriteList;
	struct UA_ConnectionGetStatus fbGetConnectionStatus;
	unsigned short ui;
} tyOPCUAInternal;
#endif

#ifndef __AS__TYPE_tyOPCUAParam
#define __AS__TYPE_tyOPCUAParam
typedef struct tyOPCUAParam
{	plcstring sIPAddr[16];
	plcstring sPort[11];
} tyOPCUAParam;
#endif

#ifndef __AS__TYPE_eMachineStat
#define __AS__TYPE_eMachineStat
typedef enum eMachineStat
{	Run = 0,
	Stop = 1,
	Manual = 2,
	Warning = 3,
	InError = 4,
} eMachineStat;
#endif

#ifndef __AS__TYPE_tyLFLeaderToFollowerTag
#define __AS__TYPE_tyLFLeaderToFollowerTag
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
#endif

#ifndef __AS__TYPE_tyLFFollowerToLeaderTag
#define __AS__TYPE_tyLFFollowerToLeaderTag
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
	eMachineStat eCurrMachineStat;
	plcbit bProdChgOverActive;
} tyLFFollowerToLeaderTag;
#endif

#ifndef __AS__TYPE_tyLFFollowerInfo
#define __AS__TYPE_tyLFFollowerInfo
typedef struct tyLFFollowerInfo
{	plcbit bOnline;
	unsigned char usiRunTmOld;
} tyLFFollowerInfo;
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
#ifndef __AS__TYPE_tyLFLeaderInternal
#define __AS__TYPE_tyLFLeaderInternal
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
#endif

#ifndef __AS__TYPE_eFBStatus
#define __AS__TYPE_eFBStatus
typedef enum eFBStatus
{	Idle = 0,
	Done = 1,
	Busy = 2,
	Error = 3,
} eFBStatus;
#endif

#ifndef __AS__TYPE_tyAlmTxt
#define __AS__TYPE_tyAlmTxt
typedef struct tyAlmTxt
{	plcstring sAlmText[201];
	plcstring sRcyText[201];
} tyAlmTxt;
#endif

#ifndef __AS__TYPE_eAlmSeverity
#define __AS__TYPE_eAlmSeverity
typedef enum eAlmSeverity
{	AlmSeverityNA = 0,
	AlmSeverityError = 1,
	AlmSeverityWarning = 2,
	AlmSeverityInfo = 3,
} eAlmSeverity;
#endif

#ifndef __AS__TYPE_tyAlmDat
#define __AS__TYPE_tyAlmDat
typedef struct tyAlmDat
{	unsigned long udiCode;
	eAlmSeverity eSeverity;
	plcstring sProgNm[16];
	plcstring sAlmMsg[201];
	plcstring sRcyMsg[201];
	unsigned long udiRunTime;
	unsigned long udiModuleNum;
	plcbit bAlm;
	plcbit bWarning;
} tyAlmDat;
#endif

_BUR_PUBLIC plcstring* CONCAT(plcstring IN1[32768], plcstring IN2[32768]);
_BUR_PUBLIC unsigned long memset(unsigned long pDest, unsigned char value, unsigned long length);
_BUR_PUBLIC signed long memcmp(unsigned long pMem1, unsigned long pMem2, unsigned long length);
_BUR_PUBLIC plcstring* udint2str(unsigned long IN, plcstring pStr[81], unsigned long len);
struct fbOPCUAConnect
{	tyOPCUAParam tyOPCUAParam;
	plctime tTimeOut;
	plcdword dwConnectionHdl;
	unsigned long udiStatus;
	tyOPCUAInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbOPCUAConnect(struct fbOPCUAConnect* inst);
struct fbOPCUADisconnect
{	plcdword dwConnectionHdl;
	plctime tTimeOut;
	unsigned long udiStatus;
	tyOPCUAInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbOPCUADisconnect(struct fbOPCUADisconnect* inst);
struct fbOPCUAGetNodeHdlList
{	plcdword dwConnectionHdl;
	unsigned short uiTagNmCnt;
	plcstring a_sServerTagNm[64][256];
	plctime tTimeOut;
	plcdword a_dwNodeHdlList[64];
	unsigned long udiStatus;
	tyOPCUAInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbOPCUAGetNodeHdlList(struct fbOPCUAGetNodeHdlList* inst);
struct fbOPCUAReadList
{	plcdword dwConnectionHdl;
	unsigned short uiTagNmCnt;
	plcdword a_dwNodeHdlList[64];
	plctime tTimeOut;
	plcstring a_sClientTagNm[64][256];
	unsigned long udiStatus;
	tyOPCUAInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbOPCUAReadList(struct fbOPCUAReadList* inst);
struct fbOPCUAWriteList
{	plcdword dwConnectionHdl;
	unsigned short uiTagNmCnt;
	plcdword a_dwNodeHdlList[64];
	plctime tTimeOut;
	plcstring a_sClientTagNm[64][256];
	unsigned long udiStatus;
	tyOPCUAInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbOPCUAWriteList(struct fbOPCUAWriteList* inst);
struct fbLFLeaderOnlineChk
{	struct tyLFLeaderToFollowerTag(* pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerInfo(* pa_tyFollowerInfo)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	plctime tDlyTm;
	signed long diMcNum;
	unsigned long udiStatus;
	tyLFLeaderInternal tyInternal;
	plcbit bEn;
	plcbit a_bOnline[50];
};
_BUR_PUBLIC void fbLFLeaderOnlineChk(struct fbLFLeaderOnlineChk* inst);
struct fbLFLeaderSyncTm
{	struct tyLFLeaderToFollowerTag(* pa_tyLeaderToFollowerTag)[50];
	plcdt dtCurrDT;
	unsigned short uiCurrTmZone;
	plctime tDlyTm;
	signed long diMcNum;
	unsigned long udiStatus;
	tyLFLeaderInternal tyInternal;
	plcbit bEn;
};
_BUR_PUBLIC void fbLFLeaderSyncTm(struct fbLFLeaderSyncTm* inst);
struct fbLFLeaderChgAll
{	struct tyLFLeaderToFollowerTag(* pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	plcstring sReqProdRcpNm[255];
	signed long diReqProdRcpWidth;
	plcstring sReqMagRcpNm[31];
	signed long diMcNum;
	unsigned long udiStatus;
	tyLFLeaderInternal tyInternal;
	plcbit bEn;
	plcbit bChgAuto;
	plcbit a_bOnline[50];
};
_BUR_PUBLIC void fbLFLeaderChgAll(struct fbLFLeaderChgAll* inst);
struct fbLFLeaderChgSeq
{	struct tyLFLeaderToFollowerTag(* pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	plcstring sReqProdRcpNm[255];
	signed long diReqProdRcpWidth;
	plcstring sReqMagRcpNm[31];
	signed long diMcNum;
	unsigned long udiStatus;
	tyLFLeaderInternal tyInternal;
	plcbit bEn;
	plcbit bChgAuto;
	plcbit a_bOnline[50];
};
_BUR_PUBLIC void fbLFLeaderChgSeq(struct fbLFLeaderChgSeq* inst);
struct fbLFLeaderBlkUSDS
{	struct tyLFLeaderToFollowerTag(* pa_tyLeaderToFollowerTag)[50];
	struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
	signed long diBeforeOven1;
	signed long diBeforeOven2;
	signed long diAfterOven1;
	signed long diAfterOven2;
	signed long diMcNum;
	unsigned long udiStatus;
	tyLFLeaderInternal tyInternal;
	plcbit bEn;
	plcbit bSeqMode;
	plcbit pa_bLFOnline[50];
};
_BUR_PUBLIC void fbLFLeaderBlkUSDS(struct fbLFLeaderBlkUSDS* inst);
struct fbLFLeaderDataUpdt
{	struct tyLFLeaderToFollowerTag(* pa_tyLeaderToFollowerTag)[50];
	signed long diMcNum;
	unsigned long udiStatus;
	tyLFLeaderInternal tyInternal;
	plcbit bEn;
	plcbit a_bOnline[50];
};
_BUR_PUBLIC void fbLFLeaderDataUpdt(struct fbLFLeaderDataUpdt* inst);
_BUR_LOCAL plcbit(* p_bLinkStartupRun);
_BUR_LOCAL plcbit(* p_bLinkNtParamLFPrep);
_BUR_LOCAL plcbit(* p_bLinkNtParamLeaderMc);
_BUR_LOCAL plcbit(* p_bLinkNtParamLFUsrSetPrep);
_BUR_LOCAL plcbit(* p_bLinkMcParamLFLeaderMc);
_BUR_LOCAL plcbit(* p_bLinkUILeaderRun);
_BUR_LOCAL plcbit bUILeaderStart;
_BUR_LOCAL plcbit bUILeaderStop;
_BUR_LOCAL eLFAction(* p_eAct);
_BUR_LOCAL unsigned long(* p_udiRstErr);
_BUR_LOCAL plcbit(* p_bPrep);
_BUR_LOCAL plcbit(* p_bEn);
_BUR_LOCAL plcbit(* p_bDis);
_BUR_LOCAL plcstring(* p_sReqProdRcpNm)[255];
_BUR_LOCAL signed long(* p_diReqProdWidth);
_BUR_LOCAL plcstring(* p_sReqMagRcpNm)[16];
_BUR_LOCAL signed long(* p_diBeforeOven);
_BUR_LOCAL plcbit(* p_bWidth2Prep);
_BUR_LOCAL signed long(* p_diAfterOven);
_BUR_LOCAL signed long(* p_diBeforeOven2);
_BUR_LOCAL signed long(* p_diAfterOven2);
_BUR_LOCAL plctime(* p_tOnlineChkDlyTm);
_BUR_LOCAL plctime(* p_tSetTmOffDlyTm);
_BUR_LOCAL plcdt(* p_dtCurrDT);
_BUR_LOCAL plcstring(* pa_sLFIPAddr)[50][16];
_BUR_LOCAL plcbit(* pa_bLFOnline)[50];
_BUR_LOCAL plcstring(* p_sLeaderProgTagNm)[16];
_BUR_LOCAL plcstring(* p_sFollowerProgTagNm)[16];
_BUR_LOCAL plcstring(* p_sProgNm)[16];
_BUR_LOCAL plcbit(* p_bLFSeqStayActive);
_BUR_LOCAL plcbit(* p_bNtSettingsLoadDone);
_BUR_LOCAL eLFAction eAct;
_BUR_LOCAL eLFAction eStat;
_BUR_LOCAL eFBStatus eStatus;
_BUR_LOCAL unsigned long udiStatus;
_BUR_LOCAL plcstring sStatTxt[201];
_BUR_LOCAL plcstring a_sStatText[51][201];
_BUR_LOCAL tyAlmDat tyAlmData;
_BUR_LOCAL struct tyAlmTxt a_tyAlmText[100];
_BUR_LOCAL struct tyLFFollowerInfo a_tyFollowerInfo[50];
_BUR_LOCAL struct tyLFFollowerToLeaderTag a_tyFollowerToLeaderTag[50];
_BUR_LOCAL unsigned long udiRstErr;
_BUR_LOCAL plcbit bPrep;
_BUR_LOCAL plcbit bEn;
_BUR_LOCAL plcbit bDis;
_BUR_LOCAL plcstring sReqProdRcpNm[255];
_BUR_LOCAL signed long diReqProdWidth;
_BUR_LOCAL plcstring sReqMagRcpNm[16];
_BUR_LOCAL signed long diBeforeOven;
_BUR_LOCAL signed long diAfterOven;
_BUR_LOCAL signed long diBeforeOven2;
_BUR_LOCAL signed long diAfterOven2;
_BUR_LOCAL plcbit bWidth2Prep;
_BUR_LOCAL plctime tOnlineChkDlyTm;
_BUR_LOCAL plctime tSetTmOffDlyTm;
_BUR_LOCAL plcdt dtCurrDT;
_BUR_LOCAL plcstring a_sLFIPAddr[50][16];
_BUR_LOCAL plcbit a_bLFOnline[50];
_BUR_LOCAL plcstring sLeaderProgTagNm[16];
_BUR_LOCAL plcstring sFollowerProgTagNm[16];
_BUR_LOCAL plcstring sProgNm[16];
_BUR_LOCAL plcbit bNtSettingsLoadDone;
_BUR_LOCAL plcbit bRstErr;
_BUR_LOCAL unsigned long udiRstErrOld;
_BUR_LOCAL plcbit bInitDone;
_BUR_LOCAL plcbit bInitialDone;
_BUR_LOCAL plcbit bRun1;
_BUR_LOCAL plcbit bRun2;
_BUR_LOCAL plcbit bStop;
_BUR_LOCAL plcbit bStop1Done;
_BUR_LOCAL plcbit bStop2Done;
_BUR_LOCAL plcbit bCntr;
_BUR_LOCAL signed long di;
_BUR_LOCAL signed long diDisconnectIdx;
_BUR_LOCAL signed long diMcNum;
_BUR_LOCAL plcstring a_sLFIPAddrOld[50][16];
_BUR_LOCAL plcbit bDisconnecting;
_BUR_LOCAL eLFAction eStatOld;
_BUR_LOCAL struct tyLFLeaderToFollowerTag a_tyLeaderToFollowerTag[50];
_BUR_LOCAL struct fbLFLeaderOnlineChk fbOnlineChk;
_BUR_LOCAL struct fbLFLeaderSyncTm fbSyncTm;
_BUR_LOCAL struct fbLFLeaderChgAll fbChgAll;
_BUR_LOCAL struct fbLFLeaderChgSeq fbChgSeq;
_BUR_LOCAL struct fbLFLeaderBlkUSDS fbBlkUSDS;
_BUR_LOCAL struct fbLFLeaderDataUpdt fbDataUpdt;
_BUR_LOCAL unsigned long udiNodeCntr;
_BUR_LOCAL plcstring sNodeCntr[81];
_BUR_LOCAL plcdword a_dwConnectionHdl[50];
_BUR_LOCAL plcbit a_bNodeWr[50];
_BUR_LOCAL plcbit a_bNodeRd[50];
_BUR_LOCAL struct tyOPCUAHdlList a_tyWriteHdls[50];
_BUR_LOCAL struct tyOPCUAHdlList a_tyReadHdls[50];
_BUR_LOCAL eLFOPCUAStep eOPCUAStep;
_BUR_LOCAL struct fbOPCUAConnect fbConnect;
_BUR_LOCAL struct fbOPCUAGetNodeHdlList fbGetNodeHdlListWr;
_BUR_LOCAL struct fbOPCUAGetNodeHdlList fbGetNodeHdlListRd;
_BUR_LOCAL struct fbOPCUAWriteList fbWriteList;
_BUR_LOCAL struct fbOPCUADisconnect fbDisconnect;
_BUR_LOCAL struct fbOPCUAReadList fbReadList;
_BUR_LOCAL unsigned long udiModuleNum;
_GLOBAL unsigned long p_UILFLeaderAct;
_GLOBAL unsigned long p_UILeaderRun;
_GLOBAL unsigned long p_StartupRun;
_GLOBAL unsigned long p_StartupNtSettingsLoadDone;
_GLOBAL unsigned long p_TimeCurrDT;
_GLOBAL plcstring g_sLFLeaderProgNm[16];
_GLOBAL unsigned long p_RstErrReset;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Nm;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Width;
_GLOBAL unsigned long p_ProdRcpCurrRcp0Width2;
_GLOBAL unsigned long p_McParamLFOnline;
_GLOBAL unsigned long p_McParamLFIPAddr;
_GLOBAL unsigned long p_McParamLFEn;
_GLOBAL unsigned long p_McParamLFLeaderMc;
_GLOBAL unsigned long p_McParamLFMcIdxBeforeOven;
_GLOBAL unsigned long p_McParamLFMcIdxAfterOven;
_GLOBAL unsigned long p_McParamLFMcIdxBeforeOven2;
_GLOBAL unsigned long p_McParamLFMcIdxAfterOven2;
_GLOBAL unsigned long p_McParamLFSeqStayActive;
_GLOBAL unsigned long p_NtParamLFPrep;
_GLOBAL unsigned long p_NtParamLeaderMc;
_GLOBAL unsigned long p_NtParamLFUsrSetPrep;
_GLOBAL unsigned long p_NtParamLFLeaderProgNm;
_GLOBAL unsigned long p_NtParamLFLeaderOnlineChkDlyTm;
_GLOBAL unsigned long p_NtParamLFLeaderSetTmOffDlyTm;
_GLOBAL unsigned long p_NtParamLFWidth2Prep;
_GLOBAL unsigned short MAX_ELEMENTS_INDEXRANGE;
_GLOBAL unsigned short MAX_ELEMENTS_NODELIST;
_GLOBAL unsigned short MAX_INDEX_INDEXRANGE;
_GLOBAL unsigned short MAX_INDEX_NODELIST;
_GLOBAL signed long c_diLFClntNum;
_LOCAL plcbit Edge0000300000;
_LOCAL plcbit Edge0000200000;
static void __AS__Action__Act_InitGlobal(void);
static void __AS__Action__Act_LinkAction(void);
static void __AS__Action__Act_LinkEn(void);
static void __AS__Action__Act_Link(void);
static void __AS__Action__Act_RstErr(void);
static void __AS__Action__Act_InitLocal(void);
static void __AS__Action__Act_Initial(void);
static void __AS__Action__Act_Action(void);
static void __AS__Action__Act_Main(void);
static void __AS__Action__Act_Background(void);
static void __AS__Action__Act_Background_OPCUA(void);
static void __AS__Action__Act_Background_Process(void);
static void __AS__Action__Act_Background_Disconnect(void);
static void __AS__Action__Act_Main_Disable(void);
static void __AS__Action__Act_Alarm(void);
