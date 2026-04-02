#ifndef __TIE_CATIAAnnotationSets
#define __TIE_CATIAAnnotationSets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotationSets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotationSets */
#define declare_TIE_CATIAAnnotationSets(classe) \
 \
 \
class TIECATIAAnnotationSets##classe : public CATIAAnnotationSets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotationSets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet); \
      virtual HRESULT __stdcall AddInAProduct(CATIAProduct * iProduct, const CATBSTR & iStandard, CATIAAnnotationSet *& oSet); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oSet); \
      virtual HRESULT __stdcall LoadAnnotationSetsList(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAnnotationSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet); \
virtual HRESULT __stdcall AddInAProduct(CATIAProduct * iProduct, const CATBSTR & iStandard, CATIAAnnotationSet *& oSet); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oSet); \
virtual HRESULT __stdcall LoadAnnotationSetsList(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAnnotationSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)Add(iStandard,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::AddInAProduct(CATIAProduct * iProduct, const CATBSTR & iStandard, CATIAAnnotationSet *& oSet) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)AddInAProduct(iProduct,iStandard,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIABase *& oSet) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::LoadAnnotationSetsList() \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)LoadAnnotationSetsList()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotationSets(classe)    TIECATIAAnnotationSets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotationSets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotationSets, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotationSets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotationSets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotationSets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotationSets, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotationSets##classe::Add(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iStandard,oSet)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSets##classe::AddInAProduct(CATIAProduct * iProduct, const CATBSTR & iStandard, CATIAAnnotationSet *& oSet) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInAProduct(iProduct,iStandard,oSet)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSets##classe::Item(const CATVariant & iIndex, CATIABase *& oSet) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oSet)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSets##classe::LoadAnnotationSetsList() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LoadAnnotationSetsList()); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSets##classe::get_Name(CATBSTR & oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSets##classe::get_Count(CATLONG & oNbItems) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotationSets(classe) \
 \
 \
declare_TIE_CATIAAnnotationSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSets,"CATIAAnnotationSets",CATIAAnnotationSets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotationSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSets##classe(classe::MetaObject(),CATIAAnnotationSets::MetaObject(),(void *)CreateTIECATIAAnnotationSets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotationSets(classe) \
 \
 \
declare_TIE_CATIAAnnotationSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSets,"CATIAAnnotationSets",CATIAAnnotationSets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotationSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSets##classe(classe::MetaObject(),CATIAAnnotationSets::MetaObject(),(void *)CreateTIECATIAAnnotationSets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotationSets(classe) TIE_CATIAAnnotationSets(classe)
#else
#define BOA_CATIAAnnotationSets(classe) CATImplementBOA(CATIAAnnotationSets, classe)
#endif

#endif
