#ifndef __TIE_CATISchAppConnection
#define __TIE_CATISchAppConnection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppConnection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppConnection */
#define declare_TIE_CATISchAppConnection(classe) \
 \
 \
class TIECATISchAppConnection##classe : public CATISchAppConnection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppConnection, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs) ; \
      virtual HRESULT AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrs) ; \
      virtual HRESULT AppAddConnector (CATISchAppConnector *iCntrToAdd) ; \
      virtual HRESULT AppRemoveConnector (CATISchAppConnector *iCntrToRemove) ; \
};



#define ENVTIEdeclare_CATISchAppConnection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs) ; \
virtual HRESULT AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrs) ; \
virtual HRESULT AppAddConnector (CATISchAppConnector *iCntrToAdd) ; \
virtual HRESULT AppRemoveConnector (CATISchAppConnector *iCntrToRemove) ; \


#define ENVTIEdefine_CATISchAppConnection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs)  \
{ \
return (ENVTIECALL(CATISchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppListConnectors (iLCntrClassFilter,oLCntrs)); \
} \
HRESULT  ENVTIEName::AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrs)  \
{ \
return (ENVTIECALL(CATISchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppListConnectables (iLCntbleClassFilter,oLCntbles,oLCntrs)); \
} \
HRESULT  ENVTIEName::AppAddConnector (CATISchAppConnector *iCntrToAdd)  \
{ \
return (ENVTIECALL(CATISchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppAddConnector (iCntrToAdd)); \
} \
HRESULT  ENVTIEName::AppRemoveConnector (CATISchAppConnector *iCntrToRemove)  \
{ \
return (ENVTIECALL(CATISchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppRemoveConnector (iCntrToRemove)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppConnection(classe)    TIECATISchAppConnection##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppConnection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppConnection, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppConnection, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppConnection, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppConnection, classe) \
 \
HRESULT  TIECATISchAppConnection##classe::AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectors (iLCntrClassFilter,oLCntrs)); \
} \
HRESULT  TIECATISchAppConnection##classe::AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrs)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectables (iLCntbleClassFilter,oLCntbles,oLCntrs)); \
} \
HRESULT  TIECATISchAppConnection##classe::AppAddConnector (CATISchAppConnector *iCntrToAdd)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppAddConnector (iCntrToAdd)); \
} \
HRESULT  TIECATISchAppConnection##classe::AppRemoveConnector (CATISchAppConnector *iCntrToRemove)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppRemoveConnector (iCntrToRemove)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppConnection(classe) \
 \
 \
declare_TIE_CATISchAppConnection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppConnection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppConnection,"CATISchAppConnection",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppConnection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppConnection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppConnection##classe(classe::MetaObject(),TIECATISchAppConnection##classe::MetaObject(),(void *)CreateTIECATISchAppConnection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppConnection(classe) \
 \
 \
declare_TIE_CATISchAppConnection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppConnection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppConnection,"CATISchAppConnection",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppConnection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppConnection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppConnection##classe(classe::MetaObject(),TIECATISchAppConnection##classe::MetaObject(),(void *)CreateTIECATISchAppConnection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppConnection(classe) TIE_CATISchAppConnection(classe)
#else
#define BOA_CATISchAppConnection(classe) CATImplementBOA(CATISchAppConnection, classe)
#endif

#endif
