#ifndef __TIE_CATIATPSView
#define __TIE_CATIATPSView

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIATPSView.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATPSView */
#define declare_TIE_CATIATPSView(classe) \
 \
 \
class TIECATIATPSView##classe : public CATIATPSView \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATPSView, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ViewType(CATLONG & oViewType); \
      virtual HRESULT __stdcall get_AnnotationPlane(CATSafeArrayVariant *& oMathPlane); \
      virtual HRESULT __stdcall get_Annotations(CATIAAnnotations *& oAnnots); \
      virtual HRESULT __stdcall put_DisplayRatio(double RatioValue); \
      virtual HRESULT __stdcall get_DisplayRatio(double & RatioValue); \
      virtual HRESULT __stdcall put_AnnotationSketch(CATIABase * Layout2DLView); \
      virtual HRESULT __stdcall get_AnnotationSketch(CATIABase *& Layout2DLView); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATPSView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ViewType(CATLONG & oViewType); \
virtual HRESULT __stdcall get_AnnotationPlane(CATSafeArrayVariant *& oMathPlane); \
virtual HRESULT __stdcall get_Annotations(CATIAAnnotations *& oAnnots); \
virtual HRESULT __stdcall put_DisplayRatio(double RatioValue); \
virtual HRESULT __stdcall get_DisplayRatio(double & RatioValue); \
virtual HRESULT __stdcall put_AnnotationSketch(CATIABase * Layout2DLView); \
virtual HRESULT __stdcall get_AnnotationSketch(CATIABase *& Layout2DLView); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATPSView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ViewType(CATLONG & oViewType) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_ViewType(oViewType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotationPlane(CATSafeArrayVariant *& oMathPlane) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_AnnotationPlane(oMathPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_Annotations(CATIAAnnotations *& oAnnots) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_Annotations(oAnnots)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayRatio(double RatioValue) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)put_DisplayRatio(RatioValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayRatio(double & RatioValue) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_DisplayRatio(RatioValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnnotationSketch(CATIABase * Layout2DLView) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)put_AnnotationSketch(Layout2DLView)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotationSketch(CATIABase *& Layout2DLView) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_AnnotationSketch(Layout2DLView)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATPSView,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATPSView(classe)    TIECATIATPSView##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATPSView(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATPSView, classe) \
 \
 \
CATImplementTIEMethods(CATIATPSView, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATPSView, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATPSView, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATPSView, classe) \
 \
HRESULT __stdcall  TIECATIATPSView##classe::get_ViewType(CATLONG & oViewType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewType(oViewType)); \
} \
HRESULT __stdcall  TIECATIATPSView##classe::get_AnnotationPlane(CATSafeArrayVariant *& oMathPlane) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotationPlane(oMathPlane)); \
} \
HRESULT __stdcall  TIECATIATPSView##classe::get_Annotations(CATIAAnnotations *& oAnnots) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Annotations(oAnnots)); \
} \
HRESULT __stdcall  TIECATIATPSView##classe::put_DisplayRatio(double RatioValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayRatio(RatioValue)); \
} \
HRESULT __stdcall  TIECATIATPSView##classe::get_DisplayRatio(double & RatioValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayRatio(RatioValue)); \
} \
HRESULT __stdcall  TIECATIATPSView##classe::put_AnnotationSketch(CATIABase * Layout2DLView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnnotationSketch(Layout2DLView)); \
} \
HRESULT __stdcall  TIECATIATPSView##classe::get_AnnotationSketch(CATIABase *& Layout2DLView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotationSketch(Layout2DLView)); \
} \
HRESULT  __stdcall  TIECATIATPSView##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIATPSView##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIATPSView##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATPSView##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATPSView##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATPSView(classe) \
 \
 \
declare_TIE_CATIATPSView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSView,"CATIATPSView",CATIATPSView::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATPSView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSView##classe(classe::MetaObject(),CATIATPSView::MetaObject(),(void *)CreateTIECATIATPSView##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATPSView(classe) \
 \
 \
declare_TIE_CATIATPSView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSView,"CATIATPSView",CATIATPSView::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATPSView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSView##classe(classe::MetaObject(),CATIATPSView::MetaObject(),(void *)CreateTIECATIATPSView##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATPSView(classe) TIE_CATIATPSView(classe)
#else
#define BOA_CATIATPSView(classe) CATImplementBOA(CATIATPSView, classe)
#endif

#endif
