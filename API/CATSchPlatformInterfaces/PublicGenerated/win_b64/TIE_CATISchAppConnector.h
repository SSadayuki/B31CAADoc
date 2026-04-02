#ifndef __TIE_CATISchAppConnector
#define __TIE_CATISchAppConnector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppConnector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppConnector */
#define declare_TIE_CATISchAppConnector(classe) \
 \
 \
class TIECATISchAppConnector##classe : public CATISchAppConnector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppConnector, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetAssociatedConnectable ( CATISchAppConnectable **oConnectable) ; \
      virtual HRESULT AppListCompatibleTypes ( CATICStringList **oLCntrCompatClassTypes) ; \
      virtual HRESULT AppListConnections (CATICStringList *iLCntnClassFilter, CATIUnknownList **oLConnections) ; \
      virtual HRESULT AppConnect (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection) ; \
      virtual HRESULT AppConnectBranch (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection) ; \
      virtual HRESULT AppDisconnect (CATISchAppConnector *iCntrToDisConnect) ; \
      virtual HRESULT AppOKToNoShowConnectedCntr (CATBoolean *oBYes) ; \
      virtual HRESULT AppIsCntrConnected (CATBoolean *oBYes) ; \
};



#define ENVTIEdeclare_CATISchAppConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetAssociatedConnectable ( CATISchAppConnectable **oConnectable) ; \
virtual HRESULT AppListCompatibleTypes ( CATICStringList **oLCntrCompatClassTypes) ; \
virtual HRESULT AppListConnections (CATICStringList *iLCntnClassFilter, CATIUnknownList **oLConnections) ; \
virtual HRESULT AppConnect (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection) ; \
virtual HRESULT AppConnectBranch (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection) ; \
virtual HRESULT AppDisconnect (CATISchAppConnector *iCntrToDisConnect) ; \
virtual HRESULT AppOKToNoShowConnectedCntr (CATBoolean *oBYes) ; \
virtual HRESULT AppIsCntrConnected (CATBoolean *oBYes) ; \


#define ENVTIEdefine_CATISchAppConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetAssociatedConnectable ( CATISchAppConnectable **oConnectable)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppGetAssociatedConnectable (oConnectable)); \
} \
HRESULT  ENVTIEName::AppListCompatibleTypes ( CATICStringList **oLCntrCompatClassTypes)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppListCompatibleTypes (oLCntrCompatClassTypes)); \
} \
HRESULT  ENVTIEName::AppListConnections (CATICStringList *iLCntnClassFilter, CATIUnknownList **oLConnections)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppListConnections (iLCntnClassFilter,oLConnections)); \
} \
HRESULT  ENVTIEName::AppConnect (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppConnect (iCntrToConnect,oConnection)); \
} \
HRESULT  ENVTIEName::AppConnectBranch (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppConnectBranch (iCntrToConnect,oConnection)); \
} \
HRESULT  ENVTIEName::AppDisconnect (CATISchAppConnector *iCntrToDisConnect)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppDisconnect (iCntrToDisConnect)); \
} \
HRESULT  ENVTIEName::AppOKToNoShowConnectedCntr (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppOKToNoShowConnectedCntr (oBYes)); \
} \
HRESULT  ENVTIEName::AppIsCntrConnected (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppIsCntrConnected (oBYes)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppConnector(classe)    TIECATISchAppConnector##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppConnector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppConnector, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppConnector, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppConnector, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppConnector, classe) \
 \
HRESULT  TIECATISchAppConnector##classe::AppGetAssociatedConnectable ( CATISchAppConnectable **oConnectable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetAssociatedConnectable (oConnectable)); \
} \
HRESULT  TIECATISchAppConnector##classe::AppListCompatibleTypes ( CATICStringList **oLCntrCompatClassTypes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListCompatibleTypes (oLCntrCompatClassTypes)); \
} \
HRESULT  TIECATISchAppConnector##classe::AppListConnections (CATICStringList *iLCntnClassFilter, CATIUnknownList **oLConnections)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnections (iLCntnClassFilter,oLConnections)); \
} \
HRESULT  TIECATISchAppConnector##classe::AppConnect (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppConnect (iCntrToConnect,oConnection)); \
} \
HRESULT  TIECATISchAppConnector##classe::AppConnectBranch (CATISchAppConnector *iCntrToConnect, CATISchAppConnection **oConnection)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppConnectBranch (iCntrToConnect,oConnection)); \
} \
HRESULT  TIECATISchAppConnector##classe::AppDisconnect (CATISchAppConnector *iCntrToDisConnect)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppDisconnect (iCntrToDisConnect)); \
} \
HRESULT  TIECATISchAppConnector##classe::AppOKToNoShowConnectedCntr (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToNoShowConnectedCntr (oBYes)); \
} \
HRESULT  TIECATISchAppConnector##classe::AppIsCntrConnected (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsCntrConnected (oBYes)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppConnector(classe) \
 \
 \
declare_TIE_CATISchAppConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppConnector,"CATISchAppConnector",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppConnector##classe(classe::MetaObject(),TIECATISchAppConnector##classe::MetaObject(),(void *)CreateTIECATISchAppConnector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppConnector(classe) \
 \
 \
declare_TIE_CATISchAppConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppConnector,"CATISchAppConnector",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppConnector##classe(classe::MetaObject(),TIECATISchAppConnector##classe::MetaObject(),(void *)CreateTIECATISchAppConnector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppConnector(classe) TIE_CATISchAppConnector(classe)
#else
#define BOA_CATISchAppConnector(classe) CATImplementBOA(CATISchAppConnector, classe)
#endif

#endif
