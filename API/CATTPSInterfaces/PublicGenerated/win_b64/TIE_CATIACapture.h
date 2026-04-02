#ifndef __TIE_CATIACapture
#define __TIE_CATIACapture

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIACapture.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACapture */
#define declare_TIE_CATIACapture(classe) \
 \
 \
class TIECATIACapture##classe : public CATIACapture \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACapture, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Annotations(CATIAAnnotations *& oAnnotations); \
      virtual HRESULT __stdcall put_Annotations(CATIAAnnotations * iAnnotations); \
      virtual HRESULT __stdcall get_TPSViews(CATIATPSViews *& oViews); \
      virtual HRESULT __stdcall put_TPSViews(CATIATPSViews * iViews); \
      virtual HRESULT __stdcall get_ActiveView(CATIATPSView *& oActiveView); \
      virtual HRESULT __stdcall put_ActiveView(CATIATPSView * iActiveView); \
      virtual HRESULT __stdcall get_ActiveViewState(CAT_VARIANT_BOOL & obActiveState); \
      virtual HRESULT __stdcall put_ActiveViewState(CAT_VARIANT_BOOL ibActiveState); \
      virtual HRESULT __stdcall get_ViewPoint(CAT_VARIANT_BOOL & obActiveState); \
      virtual HRESULT __stdcall put_ViewPoint(CAT_VARIANT_BOOL ibActiveState); \
      virtual HRESULT __stdcall get_Set(CATIAAnnotationSet *& opSet); \
      virtual HRESULT __stdcall get_Current(CAT_VARIANT_BOOL & obCurrentState); \
      virtual HRESULT __stdcall put_Current(CAT_VARIANT_BOOL ibCurrentState); \
      virtual HRESULT __stdcall get_ClippingPlane(CAT_VARIANT_BOOL & obClipPlane); \
      virtual HRESULT __stdcall put_ClippingPlane(CAT_VARIANT_BOOL ibClipPlane); \
      virtual HRESULT __stdcall get_Camera(CATIACamera3D *& oCamera); \
      virtual HRESULT __stdcall put_Camera(CATIACamera3D * iCamera); \
      virtual HRESULT __stdcall DisplayCapture(); \
      virtual HRESULT __stdcall DisplayCapture2(CAT_VARIANT_BOOL ibApplyMirror); \
      virtual HRESULT __stdcall get_ManageHideShowBody(CAT_VARIANT_BOOL & obHideShowBody); \
      virtual HRESULT __stdcall put_ManageHideShowBody(CAT_VARIANT_BOOL ibHideShowBody); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACapture(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Annotations(CATIAAnnotations *& oAnnotations); \
virtual HRESULT __stdcall put_Annotations(CATIAAnnotations * iAnnotations); \
virtual HRESULT __stdcall get_TPSViews(CATIATPSViews *& oViews); \
virtual HRESULT __stdcall put_TPSViews(CATIATPSViews * iViews); \
virtual HRESULT __stdcall get_ActiveView(CATIATPSView *& oActiveView); \
virtual HRESULT __stdcall put_ActiveView(CATIATPSView * iActiveView); \
virtual HRESULT __stdcall get_ActiveViewState(CAT_VARIANT_BOOL & obActiveState); \
virtual HRESULT __stdcall put_ActiveViewState(CAT_VARIANT_BOOL ibActiveState); \
virtual HRESULT __stdcall get_ViewPoint(CAT_VARIANT_BOOL & obActiveState); \
virtual HRESULT __stdcall put_ViewPoint(CAT_VARIANT_BOOL ibActiveState); \
virtual HRESULT __stdcall get_Set(CATIAAnnotationSet *& opSet); \
virtual HRESULT __stdcall get_Current(CAT_VARIANT_BOOL & obCurrentState); \
virtual HRESULT __stdcall put_Current(CAT_VARIANT_BOOL ibCurrentState); \
virtual HRESULT __stdcall get_ClippingPlane(CAT_VARIANT_BOOL & obClipPlane); \
virtual HRESULT __stdcall put_ClippingPlane(CAT_VARIANT_BOOL ibClipPlane); \
virtual HRESULT __stdcall get_Camera(CATIACamera3D *& oCamera); \
virtual HRESULT __stdcall put_Camera(CATIACamera3D * iCamera); \
virtual HRESULT __stdcall DisplayCapture(); \
virtual HRESULT __stdcall DisplayCapture2(CAT_VARIANT_BOOL ibApplyMirror); \
virtual HRESULT __stdcall get_ManageHideShowBody(CAT_VARIANT_BOOL & obHideShowBody); \
virtual HRESULT __stdcall put_ManageHideShowBody(CAT_VARIANT_BOOL ibHideShowBody); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACapture(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Annotations(CATIAAnnotations *& oAnnotations) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_Annotations(oAnnotations)); \
} \
HRESULT __stdcall  ENVTIEName::put_Annotations(CATIAAnnotations * iAnnotations) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_Annotations(iAnnotations)); \
} \
HRESULT __stdcall  ENVTIEName::get_TPSViews(CATIATPSViews *& oViews) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_TPSViews(oViews)); \
} \
HRESULT __stdcall  ENVTIEName::put_TPSViews(CATIATPSViews * iViews) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_TPSViews(iViews)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveView(CATIATPSView *& oActiveView) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_ActiveView(oActiveView)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveView(CATIATPSView * iActiveView) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_ActiveView(iActiveView)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveViewState(CAT_VARIANT_BOOL & obActiveState) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_ActiveViewState(obActiveState)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveViewState(CAT_VARIANT_BOOL ibActiveState) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_ActiveViewState(ibActiveState)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewPoint(CAT_VARIANT_BOOL & obActiveState) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_ViewPoint(obActiveState)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewPoint(CAT_VARIANT_BOOL ibActiveState) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_ViewPoint(ibActiveState)); \
} \
HRESULT __stdcall  ENVTIEName::get_Set(CATIAAnnotationSet *& opSet) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_Set(opSet)); \
} \
HRESULT __stdcall  ENVTIEName::get_Current(CAT_VARIANT_BOOL & obCurrentState) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_Current(obCurrentState)); \
} \
HRESULT __stdcall  ENVTIEName::put_Current(CAT_VARIANT_BOOL ibCurrentState) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_Current(ibCurrentState)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClippingPlane(CAT_VARIANT_BOOL & obClipPlane) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_ClippingPlane(obClipPlane)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClippingPlane(CAT_VARIANT_BOOL ibClipPlane) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_ClippingPlane(ibClipPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_Camera(CATIACamera3D *& oCamera) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_Camera(oCamera)); \
} \
HRESULT __stdcall  ENVTIEName::put_Camera(CATIACamera3D * iCamera) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_Camera(iCamera)); \
} \
HRESULT __stdcall  ENVTIEName::DisplayCapture() \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)DisplayCapture()); \
} \
HRESULT __stdcall  ENVTIEName::DisplayCapture2(CAT_VARIANT_BOOL ibApplyMirror) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)DisplayCapture2(ibApplyMirror)); \
} \
HRESULT __stdcall  ENVTIEName::get_ManageHideShowBody(CAT_VARIANT_BOOL & obHideShowBody) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_ManageHideShowBody(obHideShowBody)); \
} \
HRESULT __stdcall  ENVTIEName::put_ManageHideShowBody(CAT_VARIANT_BOOL ibHideShowBody) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_ManageHideShowBody(ibHideShowBody)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACapture,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACapture(classe)    TIECATIACapture##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACapture(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACapture, classe) \
 \
 \
CATImplementTIEMethods(CATIACapture, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACapture, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACapture, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACapture, classe) \
 \
HRESULT __stdcall  TIECATIACapture##classe::get_Annotations(CATIAAnnotations *& oAnnotations) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Annotations(oAnnotations)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_Annotations(CATIAAnnotations * iAnnotations) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Annotations(iAnnotations)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_TPSViews(CATIATPSViews *& oViews) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TPSViews(oViews)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_TPSViews(CATIATPSViews * iViews) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TPSViews(iViews)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_ActiveView(CATIATPSView *& oActiveView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveView(oActiveView)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_ActiveView(CATIATPSView * iActiveView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveView(iActiveView)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_ActiveViewState(CAT_VARIANT_BOOL & obActiveState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveViewState(obActiveState)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_ActiveViewState(CAT_VARIANT_BOOL ibActiveState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveViewState(ibActiveState)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_ViewPoint(CAT_VARIANT_BOOL & obActiveState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewPoint(obActiveState)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_ViewPoint(CAT_VARIANT_BOOL ibActiveState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewPoint(ibActiveState)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_Set(CATIAAnnotationSet *& opSet) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Set(opSet)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_Current(CAT_VARIANT_BOOL & obCurrentState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Current(obCurrentState)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_Current(CAT_VARIANT_BOOL ibCurrentState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Current(ibCurrentState)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_ClippingPlane(CAT_VARIANT_BOOL & obClipPlane) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClippingPlane(obClipPlane)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_ClippingPlane(CAT_VARIANT_BOOL ibClipPlane) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClippingPlane(ibClipPlane)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_Camera(CATIACamera3D *& oCamera) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Camera(oCamera)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_Camera(CATIACamera3D * iCamera) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Camera(iCamera)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::DisplayCapture() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DisplayCapture()); \
} \
HRESULT __stdcall  TIECATIACapture##classe::DisplayCapture2(CAT_VARIANT_BOOL ibApplyMirror) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DisplayCapture2(ibApplyMirror)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::get_ManageHideShowBody(CAT_VARIANT_BOOL & obHideShowBody) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ManageHideShowBody(obHideShowBody)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::put_ManageHideShowBody(CAT_VARIANT_BOOL ibHideShowBody) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ManageHideShowBody(ibHideShowBody)); \
} \
HRESULT __stdcall  TIECATIACapture##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIACapture##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIACapture##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIACapture##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACapture##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACapture##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACapture(classe) \
 \
 \
declare_TIE_CATIACapture(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACapture##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACapture,"CATIACapture",CATIACapture::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACapture(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACapture, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACapture##classe(classe::MetaObject(),CATIACapture::MetaObject(),(void *)CreateTIECATIACapture##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACapture(classe) \
 \
 \
declare_TIE_CATIACapture(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACapture##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACapture,"CATIACapture",CATIACapture::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACapture(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACapture, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACapture##classe(classe::MetaObject(),CATIACapture::MetaObject(),(void *)CreateTIECATIACapture##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACapture(classe) TIE_CATIACapture(classe)
#else
#define BOA_CATIACapture(classe) CATImplementBOA(CATIACapture, classe)
#endif

#endif
