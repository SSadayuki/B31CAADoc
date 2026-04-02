#ifndef __TIE_CATIATPSViews
#define __TIE_CATIATPSViews

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIATPSViews.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATPSViews */
#define declare_TIE_CATIATPSViews(classe) \
 \
 \
class TIECATIATPSViews##classe : public CATIATPSViews \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATPSViews, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oAnnot); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIATPSViews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oAnnot); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIATPSViews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIABase *& oAnnot) \
{ \
return (ENVTIECALL(CATIATPSViews,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oAnnot)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATPSViews,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATPSViews,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIATPSViews,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIATPSViews,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIATPSViews,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIATPSViews,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATPSViews(classe)    TIECATIATPSViews##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATPSViews(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATPSViews, classe) \
 \
 \
CATImplementTIEMethods(CATIATPSViews, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATPSViews, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATPSViews, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATPSViews, classe) \
 \
HRESULT __stdcall  TIECATIATPSViews##classe::Item(const CATVariant & iIndex, CATIABase *& oAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oAnnot)); \
} \
HRESULT  __stdcall  TIECATIATPSViews##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIATPSViews##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIATPSViews##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  TIECATIATPSViews##classe::get_Name(CATBSTR & oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  __stdcall  TIECATIATPSViews##classe::get_Count(CATLONG & oNbItems) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems)); \
} \
HRESULT  __stdcall  TIECATIATPSViews##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATPSViews(classe) \
 \
 \
declare_TIE_CATIATPSViews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSViews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSViews,"CATIATPSViews",CATIATPSViews::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSViews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATPSViews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSViews##classe(classe::MetaObject(),CATIATPSViews::MetaObject(),(void *)CreateTIECATIATPSViews##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATPSViews(classe) \
 \
 \
declare_TIE_CATIATPSViews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSViews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSViews,"CATIATPSViews",CATIATPSViews::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSViews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATPSViews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSViews##classe(classe::MetaObject(),CATIATPSViews::MetaObject(),(void *)CreateTIECATIATPSViews##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATPSViews(classe) TIE_CATIATPSViews(classe)
#else
#define BOA_CATIATPSViews(classe) CATImplementBOA(CATIATPSViews, classe)
#endif

#endif
