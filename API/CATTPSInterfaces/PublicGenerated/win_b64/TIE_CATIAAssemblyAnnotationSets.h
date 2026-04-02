#ifndef __TIE_CATIAAssemblyAnnotationSets
#define __TIE_CATIAAssemblyAnnotationSets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAssemblyAnnotationSets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemblyAnnotationSets */
#define declare_TIE_CATIAAssemblyAnnotationSets(classe) \
 \
 \
class TIECATIAAssemblyAnnotationSets##classe : public CATIAAssemblyAnnotationSets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemblyAnnotationSets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddAssemblySet(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oSet); \
      virtual HRESULT __stdcall LoadAnnotationSetsList(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAssemblyAnnotationSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddAssemblySet(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oSet); \
virtual HRESULT __stdcall LoadAnnotationSetsList(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAssemblyAnnotationSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddAssemblySet(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)AddAssemblySet(iStandard,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIABase *& oSet) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::LoadAnnotationSetsList() \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)LoadAnnotationSetsList()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAssemblyAnnotationSets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemblyAnnotationSets(classe)    TIECATIAAssemblyAnnotationSets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemblyAnnotationSets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemblyAnnotationSets, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemblyAnnotationSets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemblyAnnotationSets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemblyAnnotationSets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemblyAnnotationSets, classe) \
 \
HRESULT __stdcall  TIECATIAAssemblyAnnotationSets##classe::AddAssemblySet(const CATBSTR & iStandard, CATIAAnnotationSet *& oSet) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAssemblySet(iStandard,oSet)); \
} \
HRESULT __stdcall  TIECATIAAssemblyAnnotationSets##classe::Item(const CATVariant & iIndex, CATIABase *& oSet) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oSet)); \
} \
HRESULT __stdcall  TIECATIAAssemblyAnnotationSets##classe::LoadAnnotationSetsList() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LoadAnnotationSetsList()); \
} \
HRESULT  __stdcall  TIECATIAAssemblyAnnotationSets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAssemblyAnnotationSets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAssemblyAnnotationSets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  TIECATIAAssemblyAnnotationSets##classe::get_Name(CATBSTR & oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  __stdcall  TIECATIAAssemblyAnnotationSets##classe::get_Count(CATLONG & oNbItems) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems)); \
} \
HRESULT  __stdcall  TIECATIAAssemblyAnnotationSets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemblyAnnotationSets(classe) \
 \
 \
declare_TIE_CATIAAssemblyAnnotationSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyAnnotationSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyAnnotationSets,"CATIAAssemblyAnnotationSets",CATIAAssemblyAnnotationSets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyAnnotationSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemblyAnnotationSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyAnnotationSets##classe(classe::MetaObject(),CATIAAssemblyAnnotationSets::MetaObject(),(void *)CreateTIECATIAAssemblyAnnotationSets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemblyAnnotationSets(classe) \
 \
 \
declare_TIE_CATIAAssemblyAnnotationSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyAnnotationSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyAnnotationSets,"CATIAAssemblyAnnotationSets",CATIAAssemblyAnnotationSets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyAnnotationSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemblyAnnotationSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyAnnotationSets##classe(classe::MetaObject(),CATIAAssemblyAnnotationSets::MetaObject(),(void *)CreateTIECATIAAssemblyAnnotationSets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemblyAnnotationSets(classe) TIE_CATIAAssemblyAnnotationSets(classe)
#else
#define BOA_CATIAAssemblyAnnotationSets(classe) CATImplementBOA(CATIAAssemblyAnnotationSets, classe)
#endif

#endif
