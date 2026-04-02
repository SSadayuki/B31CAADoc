#ifndef __TIE_CATIAAnnotations
#define __TIE_CATIAAnnotations

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotations.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotations */
#define declare_TIE_CATIAAnnotations(classe) \
 \
 \
class TIECATIAAnnotations##classe : public CATIAAnnotations \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotations, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oAnnot); \
      virtual HRESULT __stdcall Add(CATIAAnnotation * iAnnot); \
      virtual HRESULT __stdcall Item2(const CATVariant & iIndex, CATIABase *& oAnnot); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAnnotations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oAnnot); \
virtual HRESULT __stdcall Add(CATIAAnnotation * iAnnot); \
virtual HRESULT __stdcall Item2(const CATVariant & iIndex, CATIABase *& oAnnot); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAnnotations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIABase *& oAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oAnnot)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAAnnotation * iAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)Add(iAnnot)); \
} \
HRESULT __stdcall  ENVTIEName::Item2(const CATVariant & iIndex, CATIABase *& oAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)Item2(iIndex,oAnnot)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAnnotations,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotations(classe)    TIECATIAAnnotations##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotations(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotations, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotations, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotations, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotations, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotations, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotations##classe::Item(const CATVariant & iIndex, CATIABase *& oAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oAnnot)); \
} \
HRESULT __stdcall  TIECATIAAnnotations##classe::Add(CATIAAnnotation * iAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iAnnot)); \
} \
HRESULT __stdcall  TIECATIAAnnotations##classe::Item2(const CATVariant & iIndex, CATIABase *& oAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item2(iIndex,oAnnot)); \
} \
HRESULT  __stdcall  TIECATIAAnnotations##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotations##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotations##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  TIECATIAAnnotations##classe::get_Name(CATBSTR & oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  __stdcall  TIECATIAAnnotations##classe::get_Count(CATLONG & oNbItems) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems)); \
} \
HRESULT  __stdcall  TIECATIAAnnotations##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotations(classe) \
 \
 \
declare_TIE_CATIAAnnotations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotations,"CATIAAnnotations",CATIAAnnotations::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotations##classe(classe::MetaObject(),CATIAAnnotations::MetaObject(),(void *)CreateTIECATIAAnnotations##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotations(classe) \
 \
 \
declare_TIE_CATIAAnnotations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotations,"CATIAAnnotations",CATIAAnnotations::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotations##classe(classe::MetaObject(),CATIAAnnotations::MetaObject(),(void *)CreateTIECATIAAnnotations##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotations(classe) TIE_CATIAAnnotations(classe)
#else
#define BOA_CATIAAnnotations(classe) CATImplementBOA(CATIAAnnotations, classe)
#endif

#endif
