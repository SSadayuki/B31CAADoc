#ifndef __TIE_CATIPPRHubSessionMetaData
#define __TIE_CATIPPRHubSessionMetaData

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubSessionMetaData.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubSessionMetaData */
#define declare_TIE_CATIPPRHubSessionMetaData(classe) \
 \
 \
class TIECATIPPRHubSessionMetaData##classe : public CATIPPRHubSessionMetaData \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubSessionMetaData, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSupportedObjectTypes(CATIPPRHubProvider * ipProvider , CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedObjectTypes ) ; \
      virtual HRESULT GetSupportedLinkTypes(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedLinkTypes) ; \
      virtual HRESULT GetLinkDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATString *iLinkType, int *oCardinality, CATString *oPointedObjectType) ; \
      virtual HRESULT GetObjectDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATUnicodeString *iObjectType, CATListPtrCATPPRHubAttrDescriptor ** opAttrDescriptorsList) ; \
};



#define ENVTIEdeclare_CATIPPRHubSessionMetaData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSupportedObjectTypes(CATIPPRHubProvider * ipProvider , CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedObjectTypes ) ; \
virtual HRESULT GetSupportedLinkTypes(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedLinkTypes) ; \
virtual HRESULT GetLinkDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATString *iLinkType, int *oCardinality, CATString *oPointedObjectType) ; \
virtual HRESULT GetObjectDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATUnicodeString *iObjectType, CATListPtrCATPPRHubAttrDescriptor ** opAttrDescriptorsList) ; \


#define ENVTIEdefine_CATIPPRHubSessionMetaData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSupportedObjectTypes(CATIPPRHubProvider * ipProvider , CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedObjectTypes )  \
{ \
return (ENVTIECALL(CATIPPRHubSessionMetaData,ENVTIETypeLetter,ENVTIELetter)GetSupportedObjectTypes(ipProvider ,iSchemaLevel,oSupportedObjectTypes )); \
} \
HRESULT  ENVTIEName::GetSupportedLinkTypes(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedLinkTypes)  \
{ \
return (ENVTIECALL(CATIPPRHubSessionMetaData,ENVTIETypeLetter,ENVTIELetter)GetSupportedLinkTypes(ipProvider ,iSchemaLevel,oSupportedLinkTypes)); \
} \
HRESULT  ENVTIEName::GetLinkDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATString *iLinkType, int *oCardinality, CATString *oPointedObjectType)  \
{ \
return (ENVTIECALL(CATIPPRHubSessionMetaData,ENVTIETypeLetter,ENVTIELetter)GetLinkDescription(ipProvider ,iSchemaLevel,iLinkType,oCardinality,oPointedObjectType)); \
} \
HRESULT  ENVTIEName::GetObjectDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATUnicodeString *iObjectType, CATListPtrCATPPRHubAttrDescriptor ** opAttrDescriptorsList)  \
{ \
return (ENVTIECALL(CATIPPRHubSessionMetaData,ENVTIETypeLetter,ENVTIELetter)GetObjectDescription(ipProvider ,iSchemaLevel,iObjectType,opAttrDescriptorsList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubSessionMetaData(classe)    TIECATIPPRHubSessionMetaData##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubSessionMetaData(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubSessionMetaData, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubSessionMetaData, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubSessionMetaData, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubSessionMetaData, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubSessionMetaData, classe) \
 \
HRESULT  TIECATIPPRHubSessionMetaData##classe::GetSupportedObjectTypes(CATIPPRHubProvider * ipProvider , CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedObjectTypes )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupportedObjectTypes(ipProvider ,iSchemaLevel,oSupportedObjectTypes )); \
} \
HRESULT  TIECATIPPRHubSessionMetaData##classe::GetSupportedLinkTypes(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATListValCATUnicodeString **oSupportedLinkTypes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupportedLinkTypes(ipProvider ,iSchemaLevel,oSupportedLinkTypes)); \
} \
HRESULT  TIECATIPPRHubSessionMetaData##classe::GetLinkDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATString *iLinkType, int *oCardinality, CATString *oPointedObjectType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLinkDescription(ipProvider ,iSchemaLevel,iLinkType,oCardinality,oPointedObjectType)); \
} \
HRESULT  TIECATIPPRHubSessionMetaData##classe::GetObjectDescription(CATIPPRHubProvider * ipProvider ,CATString *iSchemaLevel, CATUnicodeString *iObjectType, CATListPtrCATPPRHubAttrDescriptor ** opAttrDescriptorsList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObjectDescription(ipProvider ,iSchemaLevel,iObjectType,opAttrDescriptorsList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubSessionMetaData(classe) \
 \
 \
declare_TIE_CATIPPRHubSessionMetaData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubSessionMetaData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubSessionMetaData,"CATIPPRHubSessionMetaData",CATIPPRHubSessionMetaData::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubSessionMetaData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubSessionMetaData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubSessionMetaData##classe(classe::MetaObject(),CATIPPRHubSessionMetaData::MetaObject(),(void *)CreateTIECATIPPRHubSessionMetaData##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubSessionMetaData(classe) \
 \
 \
declare_TIE_CATIPPRHubSessionMetaData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubSessionMetaData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubSessionMetaData,"CATIPPRHubSessionMetaData",CATIPPRHubSessionMetaData::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubSessionMetaData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubSessionMetaData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubSessionMetaData##classe(classe::MetaObject(),CATIPPRHubSessionMetaData::MetaObject(),(void *)CreateTIECATIPPRHubSessionMetaData##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubSessionMetaData(classe) TIE_CATIPPRHubSessionMetaData(classe)
#else
#define BOA_CATIPPRHubSessionMetaData(classe) CATImplementBOA(CATIPPRHubSessionMetaData, classe)
#endif

#endif
