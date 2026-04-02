#ifndef __TIE_CATIColInvariantId
#define __TIE_CATIColInvariantId

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIColInvariantId.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIColInvariantId */
#define declare_TIE_CATIColInvariantId(classe) \
 \
 \
class TIECATIColInvariantId##classe : public CATIColInvariantId \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIColInvariantId, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetInvariantId(CATUuid & oUUID); \
      virtual CATBoolean IsAnInvariantFeature() ; \
};



#define ENVTIEdeclare_CATIColInvariantId(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetInvariantId(CATUuid & oUUID); \
virtual CATBoolean IsAnInvariantFeature() ; \


#define ENVTIEdefine_CATIColInvariantId(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetInvariantId(CATUuid & oUUID) \
{ \
return (ENVTIECALL(CATIColInvariantId,ENVTIETypeLetter,ENVTIELetter)GetInvariantId(oUUID)); \
} \
CATBoolean  ENVTIEName::IsAnInvariantFeature()  \
{ \
return (ENVTIECALL(CATIColInvariantId,ENVTIETypeLetter,ENVTIELetter)IsAnInvariantFeature()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIColInvariantId(classe)    TIECATIColInvariantId##classe


/* Common methods inside a TIE */
#define common_TIE_CATIColInvariantId(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIColInvariantId, classe) \
 \
 \
CATImplementTIEMethods(CATIColInvariantId, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIColInvariantId, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIColInvariantId, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIColInvariantId, classe) \
 \
HRESULT  TIECATIColInvariantId##classe::GetInvariantId(CATUuid & oUUID) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInvariantId(oUUID)); \
} \
CATBoolean  TIECATIColInvariantId##classe::IsAnInvariantFeature()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAnInvariantFeature()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIColInvariantId(classe) \
 \
 \
declare_TIE_CATIColInvariantId(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIColInvariantId##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIColInvariantId,"CATIColInvariantId",CATIColInvariantId::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIColInvariantId(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIColInvariantId, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIColInvariantId##classe(classe::MetaObject(),CATIColInvariantId::MetaObject(),(void *)CreateTIECATIColInvariantId##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIColInvariantId(classe) \
 \
 \
declare_TIE_CATIColInvariantId(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIColInvariantId##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIColInvariantId,"CATIColInvariantId",CATIColInvariantId::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIColInvariantId(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIColInvariantId, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIColInvariantId##classe(classe::MetaObject(),CATIColInvariantId::MetaObject(),(void *)CreateTIECATIColInvariantId##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIColInvariantId(classe) TIE_CATIColInvariantId(classe)
#else
#define BOA_CATIColInvariantId(classe) CATImplementBOA(CATIColInvariantId, classe)
#endif

#endif
