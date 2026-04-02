#ifndef __TIE_CATIPPRHubProvider
#define __TIE_CATIPPRHubProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubProvider */
#define declare_TIE_CATIPPRHubProvider(classe) \
 \
 \
class TIECATIPPRHubProvider##classe : public CATIPPRHubProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetURL(CATPPRHubURL **oppURL) const ; \
      virtual HRESULT Connect(const CATListPtrCATPPRHubAttrDescriptor* ipConnectionInfos, CATBoolean iInteractiveConnect=FALSE)  ; \
      virtual HRESULT Ping() const; \
      virtual HRESULT GetConnectionInfos(CATListPtrCATPPRHubAttrDescriptor** oppConnectionInfos)  ; \
};



#define ENVTIEdeclare_CATIPPRHubProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetURL(CATPPRHubURL **oppURL) const ; \
virtual HRESULT Connect(const CATListPtrCATPPRHubAttrDescriptor* ipConnectionInfos, CATBoolean iInteractiveConnect=FALSE)  ; \
virtual HRESULT Ping() const; \
virtual HRESULT GetConnectionInfos(CATListPtrCATPPRHubAttrDescriptor** oppConnectionInfos)  ; \


#define ENVTIEdefine_CATIPPRHubProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetURL(CATPPRHubURL **oppURL) const  \
{ \
return (ENVTIECALL(CATIPPRHubProvider,ENVTIETypeLetter,ENVTIELetter)GetURL(oppURL)); \
} \
HRESULT  ENVTIEName::Connect(const CATListPtrCATPPRHubAttrDescriptor* ipConnectionInfos, CATBoolean iInteractiveConnect)   \
{ \
return (ENVTIECALL(CATIPPRHubProvider,ENVTIETypeLetter,ENVTIELetter)Connect(ipConnectionInfos,iInteractiveConnect)); \
} \
HRESULT  ENVTIEName::Ping() const \
{ \
return (ENVTIECALL(CATIPPRHubProvider,ENVTIETypeLetter,ENVTIELetter)Ping()); \
} \
HRESULT  ENVTIEName::GetConnectionInfos(CATListPtrCATPPRHubAttrDescriptor** oppConnectionInfos)   \
{ \
return (ENVTIECALL(CATIPPRHubProvider,ENVTIETypeLetter,ENVTIELetter)GetConnectionInfos(oppConnectionInfos)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubProvider(classe)    TIECATIPPRHubProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubProvider, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubProvider, classe) \
 \
HRESULT  TIECATIPPRHubProvider##classe::GetURL(CATPPRHubURL **oppURL) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetURL(oppURL)); \
} \
HRESULT  TIECATIPPRHubProvider##classe::Connect(const CATListPtrCATPPRHubAttrDescriptor* ipConnectionInfos, CATBoolean iInteractiveConnect)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connect(ipConnectionInfos,iInteractiveConnect)); \
} \
HRESULT  TIECATIPPRHubProvider##classe::Ping() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Ping()); \
} \
HRESULT  TIECATIPPRHubProvider##classe::GetConnectionInfos(CATListPtrCATPPRHubAttrDescriptor** oppConnectionInfos)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectionInfos(oppConnectionInfos)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubProvider(classe) \
 \
 \
declare_TIE_CATIPPRHubProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubProvider,"CATIPPRHubProvider",CATIPPRHubProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubProvider##classe(classe::MetaObject(),CATIPPRHubProvider::MetaObject(),(void *)CreateTIECATIPPRHubProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubProvider(classe) \
 \
 \
declare_TIE_CATIPPRHubProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubProvider,"CATIPPRHubProvider",CATIPPRHubProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubProvider##classe(classe::MetaObject(),CATIPPRHubProvider::MetaObject(),(void *)CreateTIECATIPPRHubProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubProvider(classe) TIE_CATIPPRHubProvider(classe)
#else
#define BOA_CATIPPRHubProvider(classe) CATImplementBOA(CATIPPRHubProvider, classe)
#endif

#endif
