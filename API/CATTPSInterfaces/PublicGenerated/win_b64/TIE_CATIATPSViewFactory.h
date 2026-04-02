#ifndef __TIE_CATIATPSViewFactory
#define __TIE_CATIATPSViewFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIATPSViewFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATPSViewFactory */
#define declare_TIE_CATIATPSViewFactory(classe) \
 \
 \
class TIECATIATPSViewFactory##classe : public CATIATPSViewFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATPSViewFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateView(CATIAReference * iPlane, const CATVariant & iViewType, CATIATPSView *& oView); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATPSViewFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateView(CATIAReference * iPlane, const CATVariant & iViewType, CATIATPSView *& oView); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATPSViewFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateView(CATIAReference * iPlane, const CATVariant & iViewType, CATIATPSView *& oView) \
{ \
return (ENVTIECALL(CATIATPSViewFactory,ENVTIETypeLetter,ENVTIELetter)CreateView(iPlane,iViewType,oView)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATPSViewFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATPSViewFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATPSViewFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATPSViewFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATPSViewFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATPSViewFactory(classe)    TIECATIATPSViewFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATPSViewFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATPSViewFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIATPSViewFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATPSViewFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATPSViewFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATPSViewFactory, classe) \
 \
HRESULT __stdcall  TIECATIATPSViewFactory##classe::CreateView(CATIAReference * iPlane, const CATVariant & iViewType, CATIATPSView *& oView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateView(iPlane,iViewType,oView)); \
} \
HRESULT  __stdcall  TIECATIATPSViewFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIATPSViewFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIATPSViewFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATPSViewFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATPSViewFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATPSViewFactory(classe) \
 \
 \
declare_TIE_CATIATPSViewFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSViewFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSViewFactory,"CATIATPSViewFactory",CATIATPSViewFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSViewFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATPSViewFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSViewFactory##classe(classe::MetaObject(),CATIATPSViewFactory::MetaObject(),(void *)CreateTIECATIATPSViewFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATPSViewFactory(classe) \
 \
 \
declare_TIE_CATIATPSViewFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSViewFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSViewFactory,"CATIATPSViewFactory",CATIATPSViewFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSViewFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATPSViewFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSViewFactory##classe(classe::MetaObject(),CATIATPSViewFactory::MetaObject(),(void *)CreateTIECATIATPSViewFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATPSViewFactory(classe) TIE_CATIATPSViewFactory(classe)
#else
#define BOA_CATIATPSViewFactory(classe) CATImplementBOA(CATIATPSViewFactory, classe)
#endif

#endif
