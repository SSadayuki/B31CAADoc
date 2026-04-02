#ifndef __TIE_CATIPPRHubObject
#define __TIE_CATIPPRHubObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubObject */
#define declare_TIE_CATIPPRHubObject(classe) \
 \
 \
class TIECATIPPRHubObject##classe : public CATIPPRHubObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetDescriptor(CATPPRHubObjectDescriptor **oppDescriptor) const ; \
      virtual HRESULT GetWorkSpace(CATIPPRHubWorkSpace **oppiWorkSpace) const ; \
      virtual HRESULT SetDescriptor(const CATPPRHubObjectDescriptor* ipDescriptor) ; \
      virtual HRESULT GetName( CATUnicodeString **oppName) const ; \
};



#define ENVTIEdeclare_CATIPPRHubObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetDescriptor(CATPPRHubObjectDescriptor **oppDescriptor) const ; \
virtual HRESULT GetWorkSpace(CATIPPRHubWorkSpace **oppiWorkSpace) const ; \
virtual HRESULT SetDescriptor(const CATPPRHubObjectDescriptor* ipDescriptor) ; \
virtual HRESULT GetName( CATUnicodeString **oppName) const ; \


#define ENVTIEdefine_CATIPPRHubObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetDescriptor(CATPPRHubObjectDescriptor **oppDescriptor) const  \
{ \
return (ENVTIECALL(CATIPPRHubObject,ENVTIETypeLetter,ENVTIELetter)GetDescriptor(oppDescriptor)); \
} \
HRESULT  ENVTIEName::GetWorkSpace(CATIPPRHubWorkSpace **oppiWorkSpace) const  \
{ \
return (ENVTIECALL(CATIPPRHubObject,ENVTIETypeLetter,ENVTIELetter)GetWorkSpace(oppiWorkSpace)); \
} \
HRESULT  ENVTIEName::SetDescriptor(const CATPPRHubObjectDescriptor* ipDescriptor)  \
{ \
return (ENVTIECALL(CATIPPRHubObject,ENVTIETypeLetter,ENVTIELetter)SetDescriptor(ipDescriptor)); \
} \
HRESULT  ENVTIEName::GetName( CATUnicodeString **oppName) const  \
{ \
return (ENVTIECALL(CATIPPRHubObject,ENVTIETypeLetter,ENVTIELetter)GetName(oppName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubObject(classe)    TIECATIPPRHubObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubObject, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubObject, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubObject, classe) \
 \
HRESULT  TIECATIPPRHubObject##classe::GetDescriptor(CATPPRHubObjectDescriptor **oppDescriptor) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDescriptor(oppDescriptor)); \
} \
HRESULT  TIECATIPPRHubObject##classe::GetWorkSpace(CATIPPRHubWorkSpace **oppiWorkSpace) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWorkSpace(oppiWorkSpace)); \
} \
HRESULT  TIECATIPPRHubObject##classe::SetDescriptor(const CATPPRHubObjectDescriptor* ipDescriptor)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDescriptor(ipDescriptor)); \
} \
HRESULT  TIECATIPPRHubObject##classe::GetName( CATUnicodeString **oppName) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(oppName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubObject(classe) \
 \
 \
declare_TIE_CATIPPRHubObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubObject,"CATIPPRHubObject",CATIPPRHubObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubObject##classe(classe::MetaObject(),CATIPPRHubObject::MetaObject(),(void *)CreateTIECATIPPRHubObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubObject(classe) \
 \
 \
declare_TIE_CATIPPRHubObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubObject,"CATIPPRHubObject",CATIPPRHubObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubObject##classe(classe::MetaObject(),CATIPPRHubObject::MetaObject(),(void *)CreateTIECATIPPRHubObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubObject(classe) TIE_CATIPPRHubObject(classe)
#else
#define BOA_CATIPPRHubObject(classe) CATImplementBOA(CATIPPRHubObject, classe)
#endif

#endif
