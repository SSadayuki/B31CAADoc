#ifndef __TIE_CATIAViewpoint3D
#define __TIE_CATIAViewpoint3D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAViewpoint3D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAViewpoint3D */
#define declare_TIE_CATIAViewpoint3D(classe) \
 \
 \
class TIECATIAViewpoint3D##classe : public CATIAViewpoint3D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAViewpoint3D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & origin); \
      virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & origin); \
      virtual HRESULT __stdcall get_FocusDistance(double & focusDistance); \
      virtual HRESULT __stdcall put_FocusDistance(double focusDistance); \
      virtual HRESULT __stdcall GetSightDirection(CATSafeArrayVariant & oSight); \
      virtual HRESULT __stdcall PutSightDirection(const CATSafeArrayVariant & oSight); \
      virtual HRESULT __stdcall GetUpDirection(CATSafeArrayVariant & oUp); \
      virtual HRESULT __stdcall PutUpDirection(const CATSafeArrayVariant & oUp); \
      virtual HRESULT __stdcall get_ProjectionMode(CatProjectionMode & oProjectionMode); \
      virtual HRESULT __stdcall put_ProjectionMode(CatProjectionMode iProjectionMode); \
      virtual HRESULT __stdcall get_Zoom(double & oZoom); \
      virtual HRESULT __stdcall put_Zoom(double iZoom); \
      virtual HRESULT __stdcall get_FieldOfView(double & oFieldOfView); \
      virtual HRESULT __stdcall put_FieldOfView(double iFieldOfView); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAViewpoint3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & origin); \
virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & origin); \
virtual HRESULT __stdcall get_FocusDistance(double & focusDistance); \
virtual HRESULT __stdcall put_FocusDistance(double focusDistance); \
virtual HRESULT __stdcall GetSightDirection(CATSafeArrayVariant & oSight); \
virtual HRESULT __stdcall PutSightDirection(const CATSafeArrayVariant & oSight); \
virtual HRESULT __stdcall GetUpDirection(CATSafeArrayVariant & oUp); \
virtual HRESULT __stdcall PutUpDirection(const CATSafeArrayVariant & oUp); \
virtual HRESULT __stdcall get_ProjectionMode(CatProjectionMode & oProjectionMode); \
virtual HRESULT __stdcall put_ProjectionMode(CatProjectionMode iProjectionMode); \
virtual HRESULT __stdcall get_Zoom(double & oZoom); \
virtual HRESULT __stdcall put_Zoom(double iZoom); \
virtual HRESULT __stdcall get_FieldOfView(double & oFieldOfView); \
virtual HRESULT __stdcall put_FieldOfView(double iFieldOfView); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAViewpoint3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & origin) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)GetOrigin(origin)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & origin) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)PutOrigin(origin)); \
} \
HRESULT __stdcall  ENVTIEName::get_FocusDistance(double & focusDistance) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)get_FocusDistance(focusDistance)); \
} \
HRESULT __stdcall  ENVTIEName::put_FocusDistance(double focusDistance) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)put_FocusDistance(focusDistance)); \
} \
HRESULT __stdcall  ENVTIEName::GetSightDirection(CATSafeArrayVariant & oSight) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)GetSightDirection(oSight)); \
} \
HRESULT __stdcall  ENVTIEName::PutSightDirection(const CATSafeArrayVariant & oSight) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)PutSightDirection(oSight)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpDirection(CATSafeArrayVariant & oUp) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)GetUpDirection(oUp)); \
} \
HRESULT __stdcall  ENVTIEName::PutUpDirection(const CATSafeArrayVariant & oUp) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)PutUpDirection(oUp)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProjectionMode(CatProjectionMode & oProjectionMode) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)get_ProjectionMode(oProjectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProjectionMode(CatProjectionMode iProjectionMode) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)put_ProjectionMode(iProjectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Zoom(double & oZoom) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)get_Zoom(oZoom)); \
} \
HRESULT __stdcall  ENVTIEName::put_Zoom(double iZoom) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)put_Zoom(iZoom)); \
} \
HRESULT __stdcall  ENVTIEName::get_FieldOfView(double & oFieldOfView) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)get_FieldOfView(oFieldOfView)); \
} \
HRESULT __stdcall  ENVTIEName::put_FieldOfView(double iFieldOfView) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)put_FieldOfView(iFieldOfView)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAViewpoint3D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAViewpoint3D(classe)    TIECATIAViewpoint3D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAViewpoint3D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAViewpoint3D, classe) \
 \
 \
CATImplementTIEMethods(CATIAViewpoint3D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAViewpoint3D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAViewpoint3D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAViewpoint3D, classe) \
 \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::GetOrigin(CATSafeArrayVariant & origin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&origin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(origin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&origin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::PutOrigin(const CATSafeArrayVariant & origin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&origin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(origin); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&origin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::get_FocusDistance(double & focusDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&focusDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FocusDistance(focusDistance); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&focusDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::put_FocusDistance(double focusDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&focusDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FocusDistance(focusDistance); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&focusDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::GetSightDirection(CATSafeArrayVariant & oSight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSightDirection(oSight); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::PutSightDirection(const CATSafeArrayVariant & oSight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oSight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutSightDirection(oSight); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oSight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::GetUpDirection(CATSafeArrayVariant & oUp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oUp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpDirection(oUp); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oUp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::PutUpDirection(const CATSafeArrayVariant & oUp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oUp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutUpDirection(oUp); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oUp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::get_ProjectionMode(CatProjectionMode & oProjectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oProjectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProjectionMode(oProjectionMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oProjectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::put_ProjectionMode(CatProjectionMode iProjectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iProjectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProjectionMode(iProjectionMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iProjectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::get_Zoom(double & oZoom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oZoom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Zoom(oZoom); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oZoom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::put_Zoom(double iZoom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iZoom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Zoom(iZoom); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iZoom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::get_FieldOfView(double & oFieldOfView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFieldOfView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FieldOfView(oFieldOfView); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFieldOfView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint3D##classe::put_FieldOfView(double iFieldOfView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFieldOfView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FieldOfView(iFieldOfView); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFieldOfView); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint3D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint3D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint3D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint3D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint3D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAViewpoint3D(classe) \
 \
 \
declare_TIE_CATIAViewpoint3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAViewpoint3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAViewpoint3D,"CATIAViewpoint3D",CATIAViewpoint3D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAViewpoint3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAViewpoint3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAViewpoint3D##classe(classe::MetaObject(),CATIAViewpoint3D::MetaObject(),(void *)CreateTIECATIAViewpoint3D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAViewpoint3D(classe) \
 \
 \
declare_TIE_CATIAViewpoint3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAViewpoint3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAViewpoint3D,"CATIAViewpoint3D",CATIAViewpoint3D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAViewpoint3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAViewpoint3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAViewpoint3D##classe(classe::MetaObject(),CATIAViewpoint3D::MetaObject(),(void *)CreateTIECATIAViewpoint3D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAViewpoint3D(classe) TIE_CATIAViewpoint3D(classe)
#else
#define BOA_CATIAViewpoint3D(classe) CATImplementBOA(CATIAViewpoint3D, classe)
#endif

#endif
