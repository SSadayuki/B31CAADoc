#ifndef __TIE_CATIPPRHubObjectConsultation
#define __TIE_CATIPPRHubObjectConsultation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubObjectConsultation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubObjectConsultation */
#define declare_TIE_CATIPPRHubObjectConsultation(classe) \
 \
 \
class TIECATIPPRHubObjectConsultation##classe : public CATIPPRHubObjectConsultation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubObjectConsultation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetChildren(const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppChildrenDesc) const ; \
      virtual HRESULT GetParents( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppParentsDesc) const ; \
      virtual HRESULT GetName( const CATPPRHubObjectDescriptor *iDesc, CATUnicodeString **oppName) const ; \
      virtual HRESULT GetAttributeNames( const CATPPRHubObjectDescriptor *iDesc, CATListValCATUnicodeString **oppAttributes, CATPPRHubAttrOption iAttrOpt=BusinessLogic ) const ; \
      virtual HRESULT GetAttributeValues(const CATPPRHubObjectDescriptor *iDesc , CATListPtrCATPPRHubAttrDescriptor **oppValues , CATPPRHubAttrOption iAttrOpt=BusinessLogic) const ; \
      virtual HRESULT GetAttributeValue( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipAttributeName,  CATVariant **oppValue, CATPPRHubAttrOption iAttrOpt=BusinessLogic) const ; \
      virtual HRESULT GetTimeStamp( const CATPPRHubObjectDescriptor *iDesc, CATString **oppTS) const ; \
};



#define ENVTIEdeclare_CATIPPRHubObjectConsultation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetChildren(const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppChildrenDesc) const ; \
virtual HRESULT GetParents( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppParentsDesc) const ; \
virtual HRESULT GetName( const CATPPRHubObjectDescriptor *iDesc, CATUnicodeString **oppName) const ; \
virtual HRESULT GetAttributeNames( const CATPPRHubObjectDescriptor *iDesc, CATListValCATUnicodeString **oppAttributes, CATPPRHubAttrOption iAttrOpt=BusinessLogic ) const ; \
virtual HRESULT GetAttributeValues(const CATPPRHubObjectDescriptor *iDesc , CATListPtrCATPPRHubAttrDescriptor **oppValues , CATPPRHubAttrOption iAttrOpt=BusinessLogic) const ; \
virtual HRESULT GetAttributeValue( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipAttributeName,  CATVariant **oppValue, CATPPRHubAttrOption iAttrOpt=BusinessLogic) const ; \
virtual HRESULT GetTimeStamp( const CATPPRHubObjectDescriptor *iDesc, CATString **oppTS) const ; \


#define ENVTIEdefine_CATIPPRHubObjectConsultation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetChildren(const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppChildrenDesc) const  \
{ \
return (ENVTIECALL(CATIPPRHubObjectConsultation,ENVTIETypeLetter,ENVTIELetter)GetChildren(iDesc,ipListName,oppChildrenDesc)); \
} \
HRESULT  ENVTIEName::GetParents( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppParentsDesc) const  \
{ \
return (ENVTIECALL(CATIPPRHubObjectConsultation,ENVTIETypeLetter,ENVTIELetter)GetParents(iDesc,ipListName,oppParentsDesc)); \
} \
HRESULT  ENVTIEName::GetName( const CATPPRHubObjectDescriptor *iDesc, CATUnicodeString **oppName) const  \
{ \
return (ENVTIECALL(CATIPPRHubObjectConsultation,ENVTIETypeLetter,ENVTIELetter)GetName(iDesc,oppName)); \
} \
HRESULT  ENVTIEName::GetAttributeNames( const CATPPRHubObjectDescriptor *iDesc, CATListValCATUnicodeString **oppAttributes, CATPPRHubAttrOption iAttrOpt) const  \
{ \
return (ENVTIECALL(CATIPPRHubObjectConsultation,ENVTIETypeLetter,ENVTIELetter)GetAttributeNames(iDesc,oppAttributes,iAttrOpt)); \
} \
HRESULT  ENVTIEName::GetAttributeValues(const CATPPRHubObjectDescriptor *iDesc , CATListPtrCATPPRHubAttrDescriptor **oppValues , CATPPRHubAttrOption iAttrOpt) const  \
{ \
return (ENVTIECALL(CATIPPRHubObjectConsultation,ENVTIETypeLetter,ENVTIELetter)GetAttributeValues(iDesc ,oppValues ,iAttrOpt)); \
} \
HRESULT  ENVTIEName::GetAttributeValue( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipAttributeName,  CATVariant **oppValue, CATPPRHubAttrOption iAttrOpt) const  \
{ \
return (ENVTIECALL(CATIPPRHubObjectConsultation,ENVTIETypeLetter,ENVTIELetter)GetAttributeValue(iDesc,ipAttributeName,oppValue,iAttrOpt)); \
} \
HRESULT  ENVTIEName::GetTimeStamp( const CATPPRHubObjectDescriptor *iDesc, CATString **oppTS) const  \
{ \
return (ENVTIECALL(CATIPPRHubObjectConsultation,ENVTIETypeLetter,ENVTIELetter)GetTimeStamp(iDesc,oppTS)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubObjectConsultation(classe)    TIECATIPPRHubObjectConsultation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubObjectConsultation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubObjectConsultation, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubObjectConsultation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubObjectConsultation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubObjectConsultation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubObjectConsultation, classe) \
 \
HRESULT  TIECATIPPRHubObjectConsultation##classe::GetChildren(const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppChildrenDesc) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren(iDesc,ipListName,oppChildrenDesc)); \
} \
HRESULT  TIECATIPPRHubObjectConsultation##classe::GetParents( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipListName, CATListPtrCATPPRHubObjectDescriptor **oppParentsDesc) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParents(iDesc,ipListName,oppParentsDesc)); \
} \
HRESULT  TIECATIPPRHubObjectConsultation##classe::GetName( const CATPPRHubObjectDescriptor *iDesc, CATUnicodeString **oppName) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(iDesc,oppName)); \
} \
HRESULT  TIECATIPPRHubObjectConsultation##classe::GetAttributeNames( const CATPPRHubObjectDescriptor *iDesc, CATListValCATUnicodeString **oppAttributes, CATPPRHubAttrOption iAttrOpt) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNames(iDesc,oppAttributes,iAttrOpt)); \
} \
HRESULT  TIECATIPPRHubObjectConsultation##classe::GetAttributeValues(const CATPPRHubObjectDescriptor *iDesc , CATListPtrCATPPRHubAttrDescriptor **oppValues , CATPPRHubAttrOption iAttrOpt) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeValues(iDesc ,oppValues ,iAttrOpt)); \
} \
HRESULT  TIECATIPPRHubObjectConsultation##classe::GetAttributeValue( const CATPPRHubObjectDescriptor *iDesc, const CATUnicodeString *ipAttributeName,  CATVariant **oppValue, CATPPRHubAttrOption iAttrOpt) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeValue(iDesc,ipAttributeName,oppValue,iAttrOpt)); \
} \
HRESULT  TIECATIPPRHubObjectConsultation##classe::GetTimeStamp( const CATPPRHubObjectDescriptor *iDesc, CATString **oppTS) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTimeStamp(iDesc,oppTS)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubObjectConsultation(classe) \
 \
 \
declare_TIE_CATIPPRHubObjectConsultation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubObjectConsultation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubObjectConsultation,"CATIPPRHubObjectConsultation",CATIPPRHubObjectConsultation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubObjectConsultation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubObjectConsultation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubObjectConsultation##classe(classe::MetaObject(),CATIPPRHubObjectConsultation::MetaObject(),(void *)CreateTIECATIPPRHubObjectConsultation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubObjectConsultation(classe) \
 \
 \
declare_TIE_CATIPPRHubObjectConsultation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubObjectConsultation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubObjectConsultation,"CATIPPRHubObjectConsultation",CATIPPRHubObjectConsultation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubObjectConsultation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubObjectConsultation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubObjectConsultation##classe(classe::MetaObject(),CATIPPRHubObjectConsultation::MetaObject(),(void *)CreateTIECATIPPRHubObjectConsultation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubObjectConsultation(classe) TIE_CATIPPRHubObjectConsultation(classe)
#else
#define BOA_CATIPPRHubObjectConsultation(classe) CATImplementBOA(CATIPPRHubObjectConsultation, classe)
#endif

#endif
