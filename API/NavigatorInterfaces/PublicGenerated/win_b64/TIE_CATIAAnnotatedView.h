#ifndef __TIE_CATIAAnnotatedView
#define __TIE_CATIAAnnotatedView

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnnotatedView.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotatedView */
#define declare_TIE_CATIAAnnotatedView(classe) \
 \
 \
class TIECATIAAnnotatedView##classe : public CATIAAnnotatedView \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotatedView, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall GetSightDirection(CATSafeArrayVariant & oSight); \
      virtual HRESULT __stdcall GetUpDirection(CATSafeArrayVariant & oUp); \
      virtual HRESULT __stdcall get_ProjectionMode(CatProjectionMode & oProjectionMode); \
      virtual HRESULT __stdcall get_Zoom(double & oZoom); \
      virtual HRESULT __stdcall get_FieldOfView(double & oFieldOfView); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iText); \
      virtual HRESULT __stdcall get_Sound(CATBSTR & oPath); \
      virtual HRESULT __stdcall put_Sound(const CATBSTR & iPath); \
      virtual HRESULT __stdcall get_Marker2Ds(CATIAMarker2Ds *& oMarker2Ds); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall get_BehaviorMode(CatAnnotatedViewBehavior & oBehaviorMode); \
      virtual HRESULT __stdcall put_BehaviorMode(CatAnnotatedViewBehavior iBehaviorMode); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotatedView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall GetSightDirection(CATSafeArrayVariant & oSight); \
virtual HRESULT __stdcall GetUpDirection(CATSafeArrayVariant & oUp); \
virtual HRESULT __stdcall get_ProjectionMode(CatProjectionMode & oProjectionMode); \
virtual HRESULT __stdcall get_Zoom(double & oZoom); \
virtual HRESULT __stdcall get_FieldOfView(double & oFieldOfView); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oText); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iText); \
virtual HRESULT __stdcall get_Sound(CATBSTR & oPath); \
virtual HRESULT __stdcall put_Sound(const CATBSTR & iPath); \
virtual HRESULT __stdcall get_Marker2Ds(CATIAMarker2Ds *& oMarker2Ds); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall get_BehaviorMode(CatAnnotatedViewBehavior & oBehaviorMode); \
virtual HRESULT __stdcall put_BehaviorMode(CatAnnotatedViewBehavior iBehaviorMode); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotatedView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetSightDirection(CATSafeArrayVariant & oSight) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)GetSightDirection(oSight)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpDirection(CATSafeArrayVariant & oUp) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)GetUpDirection(oUp)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProjectionMode(CatProjectionMode & oProjectionMode) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_ProjectionMode(oProjectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Zoom(double & oZoom) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_Zoom(oZoom)); \
} \
HRESULT __stdcall  ENVTIEName::get_FieldOfView(double & oFieldOfView) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_FieldOfView(oFieldOfView)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_Comment(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)put_Comment(iText)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sound(CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_Sound(oPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_Sound(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)put_Sound(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker2Ds(CATIAMarker2Ds *& oMarker2Ds) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_Marker2Ds(oMarker2Ds)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::get_BehaviorMode(CatAnnotatedViewBehavior & oBehaviorMode) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_BehaviorMode(oBehaviorMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_BehaviorMode(CatAnnotatedViewBehavior iBehaviorMode) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)put_BehaviorMode(iBehaviorMode)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotatedView,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotatedView(classe)    TIECATIAAnnotatedView##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotatedView(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotatedView, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotatedView, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotatedView, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotatedView, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotatedView, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::GetSightDirection(CATSafeArrayVariant & oSight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSightDirection(oSight); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::GetUpDirection(CATSafeArrayVariant & oUp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oUp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpDirection(oUp); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oUp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::get_ProjectionMode(CatProjectionMode & oProjectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oProjectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProjectionMode(oProjectionMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oProjectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::get_Zoom(double & oZoom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oZoom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Zoom(oZoom); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oZoom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::get_FieldOfView(double & oFieldOfView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oFieldOfView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FieldOfView(oFieldOfView); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oFieldOfView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::get_Comment(CATBSTR & oText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oText); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::put_Comment(const CATBSTR & iText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iText); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::get_Sound(CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sound(oPath); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::put_Sound(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Sound(iPath); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::get_Marker2Ds(CATIAMarker2Ds *& oMarker2Ds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oMarker2Ds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker2Ds(oMarker2Ds); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oMarker2Ds); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::get_BehaviorMode(CatAnnotatedViewBehavior & oBehaviorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oBehaviorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BehaviorMode(oBehaviorMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oBehaviorMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedView##classe::put_BehaviorMode(CatAnnotatedViewBehavior iBehaviorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iBehaviorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BehaviorMode(iBehaviorMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iBehaviorMode); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedView##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedView##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedView##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedView##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedView##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotatedView(classe) \
 \
 \
declare_TIE_CATIAAnnotatedView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotatedView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotatedView,"CATIAAnnotatedView",CATIAAnnotatedView::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotatedView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotatedView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotatedView##classe(classe::MetaObject(),CATIAAnnotatedView::MetaObject(),(void *)CreateTIECATIAAnnotatedView##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotatedView(classe) \
 \
 \
declare_TIE_CATIAAnnotatedView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotatedView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotatedView,"CATIAAnnotatedView",CATIAAnnotatedView::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotatedView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotatedView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotatedView##classe(classe::MetaObject(),CATIAAnnotatedView::MetaObject(),(void *)CreateTIECATIAAnnotatedView##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotatedView(classe) TIE_CATIAAnnotatedView(classe)
#else
#define BOA_CATIAAnnotatedView(classe) CATImplementBOA(CATIAAnnotatedView, classe)
#endif

#endif
