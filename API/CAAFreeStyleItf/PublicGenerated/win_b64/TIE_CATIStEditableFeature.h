#ifndef __TIE_CATIStEditableFeature
#define __TIE_CATIStEditableFeature

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIStEditableFeature.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIStEditableFeature */
#define declare_TIE_CATIStEditableFeature(classe) \
 \
 \
class TIECATIStEditableFeature##classe : public CATIStEditableFeature \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIStEditableFeature, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetEditionAuthorized(const CATBoolean iEditionStatus) ; \
      virtual HRESULT GetEditionAuthorized(CATBoolean& oEditionStatus) const ; \
};



#define ENVTIEdeclare_CATIStEditableFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetEditionAuthorized(const CATBoolean iEditionStatus) ; \
virtual HRESULT GetEditionAuthorized(CATBoolean& oEditionStatus) const ; \


#define ENVTIEdefine_CATIStEditableFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetEditionAuthorized(const CATBoolean iEditionStatus)  \
{ \
return (ENVTIECALL(CATIStEditableFeature,ENVTIETypeLetter,ENVTIELetter)SetEditionAuthorized(iEditionStatus)); \
} \
HRESULT  ENVTIEName::GetEditionAuthorized(CATBoolean& oEditionStatus) const  \
{ \
return (ENVTIECALL(CATIStEditableFeature,ENVTIETypeLetter,ENVTIELetter)GetEditionAuthorized(oEditionStatus)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIStEditableFeature(classe)    TIECATIStEditableFeature##classe


/* Common methods inside a TIE */
#define common_TIE_CATIStEditableFeature(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIStEditableFeature, classe) \
 \
 \
CATImplementTIEMethods(CATIStEditableFeature, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIStEditableFeature, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIStEditableFeature, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIStEditableFeature, classe) \
 \
HRESULT  TIECATIStEditableFeature##classe::SetEditionAuthorized(const CATBoolean iEditionStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEditionAuthorized(iEditionStatus)); \
} \
HRESULT  TIECATIStEditableFeature##classe::GetEditionAuthorized(CATBoolean& oEditionStatus) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEditionAuthorized(oEditionStatus)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIStEditableFeature(classe) \
 \
 \
declare_TIE_CATIStEditableFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStEditableFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStEditableFeature,"CATIStEditableFeature",CATIStEditableFeature::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStEditableFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIStEditableFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStEditableFeature##classe(classe::MetaObject(),CATIStEditableFeature::MetaObject(),(void *)CreateTIECATIStEditableFeature##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIStEditableFeature(classe) \
 \
 \
declare_TIE_CATIStEditableFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStEditableFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStEditableFeature,"CATIStEditableFeature",CATIStEditableFeature::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStEditableFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIStEditableFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStEditableFeature##classe(classe::MetaObject(),CATIStEditableFeature::MetaObject(),(void *)CreateTIECATIStEditableFeature##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIStEditableFeature(classe) TIE_CATIStEditableFeature(classe)
#else
#define BOA_CATIStEditableFeature(classe) CATImplementBOA(CATIStEditableFeature, classe)
#endif

#endif
