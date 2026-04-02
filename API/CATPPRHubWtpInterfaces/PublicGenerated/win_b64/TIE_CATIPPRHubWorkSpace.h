#ifndef __TIE_CATIPPRHubWorkSpace
#define __TIE_CATIPPRHubWorkSpace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubWorkSpace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubWorkSpace */
#define declare_TIE_CATIPPRHubWorkSpace(classe) \
 \
 \
class TIECATIPPRHubWorkSpace##classe : public CATIPPRHubWorkSpace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubWorkSpace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AddObject(const CATUnicodeString* ipObjectType, const CATPPRHubObjectDescriptor *ipDescriptor, const CATBoolean iRoot, CATIPPRHubObject **oppiPPRObject) ; \
      virtual HRESULT GetObjects( const CATUnicodeString* ipObjectType, CATListPtrCATIPPRHubObject **oppObjectList ) const ; \
      virtual HRESULT GetObject( const CATPPRHubObjectDescriptor *ipDescriptor, CATIPPRHubObject **oppObject ) const ; \
      virtual HRESULT Remove(CATIPPRHubObject *ippiObject ) ; \
      virtual HRESULT GetProvider(CATIPPRHubProvider **ippiProvider ) const ; \
      virtual HRESULT GetRootObjects(CATListPtrCATIPPRHubObject **oppObjectList ) const ; \
      virtual HRESULT GetType(CATString **oppType ) const ; \
};



#define ENVTIEdeclare_CATIPPRHubWorkSpace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AddObject(const CATUnicodeString* ipObjectType, const CATPPRHubObjectDescriptor *ipDescriptor, const CATBoolean iRoot, CATIPPRHubObject **oppiPPRObject) ; \
virtual HRESULT GetObjects( const CATUnicodeString* ipObjectType, CATListPtrCATIPPRHubObject **oppObjectList ) const ; \
virtual HRESULT GetObject( const CATPPRHubObjectDescriptor *ipDescriptor, CATIPPRHubObject **oppObject ) const ; \
virtual HRESULT Remove(CATIPPRHubObject *ippiObject ) ; \
virtual HRESULT GetProvider(CATIPPRHubProvider **ippiProvider ) const ; \
virtual HRESULT GetRootObjects(CATListPtrCATIPPRHubObject **oppObjectList ) const ; \
virtual HRESULT GetType(CATString **oppType ) const ; \


#define ENVTIEdefine_CATIPPRHubWorkSpace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AddObject(const CATUnicodeString* ipObjectType, const CATPPRHubObjectDescriptor *ipDescriptor, const CATBoolean iRoot, CATIPPRHubObject **oppiPPRObject)  \
{ \
return (ENVTIECALL(CATIPPRHubWorkSpace,ENVTIETypeLetter,ENVTIELetter)AddObject(ipObjectType,ipDescriptor,iRoot,oppiPPRObject)); \
} \
HRESULT  ENVTIEName::GetObjects( const CATUnicodeString* ipObjectType, CATListPtrCATIPPRHubObject **oppObjectList ) const  \
{ \
return (ENVTIECALL(CATIPPRHubWorkSpace,ENVTIETypeLetter,ENVTIELetter)GetObjects(ipObjectType,oppObjectList )); \
} \
HRESULT  ENVTIEName::GetObject( const CATPPRHubObjectDescriptor *ipDescriptor, CATIPPRHubObject **oppObject ) const  \
{ \
return (ENVTIECALL(CATIPPRHubWorkSpace,ENVTIETypeLetter,ENVTIELetter)GetObject(ipDescriptor,oppObject )); \
} \
HRESULT  ENVTIEName::Remove(CATIPPRHubObject *ippiObject )  \
{ \
return (ENVTIECALL(CATIPPRHubWorkSpace,ENVTIETypeLetter,ENVTIELetter)Remove(ippiObject )); \
} \
HRESULT  ENVTIEName::GetProvider(CATIPPRHubProvider **ippiProvider ) const  \
{ \
return (ENVTIECALL(CATIPPRHubWorkSpace,ENVTIETypeLetter,ENVTIELetter)GetProvider(ippiProvider )); \
} \
HRESULT  ENVTIEName::GetRootObjects(CATListPtrCATIPPRHubObject **oppObjectList ) const  \
{ \
return (ENVTIECALL(CATIPPRHubWorkSpace,ENVTIETypeLetter,ENVTIELetter)GetRootObjects(oppObjectList )); \
} \
HRESULT  ENVTIEName::GetType(CATString **oppType ) const  \
{ \
return (ENVTIECALL(CATIPPRHubWorkSpace,ENVTIETypeLetter,ENVTIELetter)GetType(oppType )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubWorkSpace(classe)    TIECATIPPRHubWorkSpace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubWorkSpace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubWorkSpace, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubWorkSpace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubWorkSpace, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubWorkSpace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubWorkSpace, classe) \
 \
HRESULT  TIECATIPPRHubWorkSpace##classe::AddObject(const CATUnicodeString* ipObjectType, const CATPPRHubObjectDescriptor *ipDescriptor, const CATBoolean iRoot, CATIPPRHubObject **oppiPPRObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObject(ipObjectType,ipDescriptor,iRoot,oppiPPRObject)); \
} \
HRESULT  TIECATIPPRHubWorkSpace##classe::GetObjects( const CATUnicodeString* ipObjectType, CATListPtrCATIPPRHubObject **oppObjectList ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObjects(ipObjectType,oppObjectList )); \
} \
HRESULT  TIECATIPPRHubWorkSpace##classe::GetObject( const CATPPRHubObjectDescriptor *ipDescriptor, CATIPPRHubObject **oppObject ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject(ipDescriptor,oppObject )); \
} \
HRESULT  TIECATIPPRHubWorkSpace##classe::Remove(CATIPPRHubObject *ippiObject )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(ippiObject )); \
} \
HRESULT  TIECATIPPRHubWorkSpace##classe::GetProvider(CATIPPRHubProvider **ippiProvider ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProvider(ippiProvider )); \
} \
HRESULT  TIECATIPPRHubWorkSpace##classe::GetRootObjects(CATListPtrCATIPPRHubObject **oppObjectList ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootObjects(oppObjectList )); \
} \
HRESULT  TIECATIPPRHubWorkSpace##classe::GetType(CATString **oppType ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(oppType )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubWorkSpace(classe) \
 \
 \
declare_TIE_CATIPPRHubWorkSpace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubWorkSpace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubWorkSpace,"CATIPPRHubWorkSpace",CATIPPRHubWorkSpace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubWorkSpace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubWorkSpace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubWorkSpace##classe(classe::MetaObject(),CATIPPRHubWorkSpace::MetaObject(),(void *)CreateTIECATIPPRHubWorkSpace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubWorkSpace(classe) \
 \
 \
declare_TIE_CATIPPRHubWorkSpace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubWorkSpace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubWorkSpace,"CATIPPRHubWorkSpace",CATIPPRHubWorkSpace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubWorkSpace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubWorkSpace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubWorkSpace##classe(classe::MetaObject(),CATIPPRHubWorkSpace::MetaObject(),(void *)CreateTIECATIPPRHubWorkSpace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubWorkSpace(classe) TIE_CATIPPRHubWorkSpace(classe)
#else
#define BOA_CATIPPRHubWorkSpace(classe) CATImplementBOA(CATIPPRHubWorkSpace, classe)
#endif

#endif
