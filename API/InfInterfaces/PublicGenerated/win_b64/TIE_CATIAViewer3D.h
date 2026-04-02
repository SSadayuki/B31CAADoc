#ifndef __TIE_CATIAViewer3D
#define __TIE_CATIAViewer3D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAViewer3D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAViewer3D */
#define declare_TIE_CATIAViewer3D(classe) \
 \
 \
class TIECATIAViewer3D##classe : public CATIAViewer3D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAViewer3D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint); \
      virtual HRESULT __stdcall put_Viewpoint3D(CATIAViewpoint3D * oViewpoint); \
      virtual HRESULT __stdcall Translate(const CATSafeArrayVariant & iVector); \
      virtual HRESULT __stdcall Rotate(const CATSafeArrayVariant & iAxis, double iAngle); \
      virtual HRESULT __stdcall get_LightSources(CATIALightSources *& oLightSources); \
      virtual HRESULT __stdcall get_LightingIntensity(double & oIntensity); \
      virtual HRESULT __stdcall put_LightingIntensity(double iIntensity); \
      virtual HRESULT __stdcall get_LightingMode(CatLightingMode & oLightingMode); \
      virtual HRESULT __stdcall put_LightingMode(CatLightingMode iLightingMode); \
      virtual HRESULT __stdcall get_NavigationStyle(CatNavigationStyle & oNavigationStyle); \
      virtual HRESULT __stdcall put_NavigationStyle(CatNavigationStyle iNavigationStyle); \
      virtual HRESULT __stdcall get_RenderingMode(CatRenderingMode & oRenderingMode); \
      virtual HRESULT __stdcall put_RenderingMode(CatRenderingMode iRenderingMode); \
      virtual HRESULT __stdcall get_NearLimit(double & oNearLimit); \
      virtual HRESULT __stdcall put_NearLimit(double iNearLimit); \
      virtual HRESULT __stdcall get_FarLimit(double & oFarLimit); \
      virtual HRESULT __stdcall put_FarLimit(double iFarLimit); \
      virtual HRESULT __stdcall get_ClippingMode(CatClippingMode & oClippingMode); \
      virtual HRESULT __stdcall put_ClippingMode(CatClippingMode iClippingMode); \
      virtual HRESULT __stdcall get_Foggy(CAT_VARIANT_BOOL & oFoggy); \
      virtual HRESULT __stdcall put_Foggy(CAT_VARIANT_BOOL iFoggy); \
      virtual HRESULT __stdcall get_Ground(CAT_VARIANT_BOOL & oGround); \
      virtual HRESULT __stdcall put_Ground(CAT_VARIANT_BOOL iGround); \
      virtual HRESULT __stdcall get_FullScreen(CAT_VARIANT_BOOL & oFullScreen); \
      virtual HRESULT __stdcall put_FullScreen(CAT_VARIANT_BOOL iFullScreen); \
      virtual HRESULT __stdcall GetBackgroundColor(CATSafeArrayVariant & color); \
      virtual HRESULT __stdcall PutBackgroundColor(const CATSafeArrayVariant & color); \
      virtual HRESULT __stdcall get_Width(CATLONG & oWidth); \
      virtual HRESULT __stdcall get_Height(CATLONG & oHeight); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall Reframe(); \
      virtual HRESULT __stdcall ZoomIn(); \
      virtual HRESULT __stdcall ZoomOut(); \
      virtual HRESULT __stdcall CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile); \
      virtual HRESULT __stdcall NewCamera(CATIACamera *& oCamera); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAViewer3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint); \
virtual HRESULT __stdcall put_Viewpoint3D(CATIAViewpoint3D * oViewpoint); \
virtual HRESULT __stdcall Translate(const CATSafeArrayVariant & iVector); \
virtual HRESULT __stdcall Rotate(const CATSafeArrayVariant & iAxis, double iAngle); \
virtual HRESULT __stdcall get_LightSources(CATIALightSources *& oLightSources); \
virtual HRESULT __stdcall get_LightingIntensity(double & oIntensity); \
virtual HRESULT __stdcall put_LightingIntensity(double iIntensity); \
virtual HRESULT __stdcall get_LightingMode(CatLightingMode & oLightingMode); \
virtual HRESULT __stdcall put_LightingMode(CatLightingMode iLightingMode); \
virtual HRESULT __stdcall get_NavigationStyle(CatNavigationStyle & oNavigationStyle); \
virtual HRESULT __stdcall put_NavigationStyle(CatNavigationStyle iNavigationStyle); \
virtual HRESULT __stdcall get_RenderingMode(CatRenderingMode & oRenderingMode); \
virtual HRESULT __stdcall put_RenderingMode(CatRenderingMode iRenderingMode); \
virtual HRESULT __stdcall get_NearLimit(double & oNearLimit); \
virtual HRESULT __stdcall put_NearLimit(double iNearLimit); \
virtual HRESULT __stdcall get_FarLimit(double & oFarLimit); \
virtual HRESULT __stdcall put_FarLimit(double iFarLimit); \
virtual HRESULT __stdcall get_ClippingMode(CatClippingMode & oClippingMode); \
virtual HRESULT __stdcall put_ClippingMode(CatClippingMode iClippingMode); \
virtual HRESULT __stdcall get_Foggy(CAT_VARIANT_BOOL & oFoggy); \
virtual HRESULT __stdcall put_Foggy(CAT_VARIANT_BOOL iFoggy); \
virtual HRESULT __stdcall get_Ground(CAT_VARIANT_BOOL & oGround); \
virtual HRESULT __stdcall put_Ground(CAT_VARIANT_BOOL iGround); \
virtual HRESULT __stdcall get_FullScreen(CAT_VARIANT_BOOL & oFullScreen); \
virtual HRESULT __stdcall put_FullScreen(CAT_VARIANT_BOOL iFullScreen); \
virtual HRESULT __stdcall GetBackgroundColor(CATSafeArrayVariant & color); \
virtual HRESULT __stdcall PutBackgroundColor(const CATSafeArrayVariant & color); \
virtual HRESULT __stdcall get_Width(CATLONG & oWidth); \
virtual HRESULT __stdcall get_Height(CATLONG & oHeight); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall Reframe(); \
virtual HRESULT __stdcall ZoomIn(); \
virtual HRESULT __stdcall ZoomOut(); \
virtual HRESULT __stdcall CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile); \
virtual HRESULT __stdcall NewCamera(CATIACamera *& oCamera); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAViewer3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Viewpoint3D(oViewpoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viewpoint3D(CATIAViewpoint3D * oViewpoint) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_Viewpoint3D(oViewpoint)); \
} \
HRESULT __stdcall  ENVTIEName::Translate(const CATSafeArrayVariant & iVector) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)Translate(iVector)); \
} \
HRESULT __stdcall  ENVTIEName::Rotate(const CATSafeArrayVariant & iAxis, double iAngle) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)Rotate(iAxis,iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_LightSources(CATIALightSources *& oLightSources) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_LightSources(oLightSources)); \
} \
HRESULT __stdcall  ENVTIEName::get_LightingIntensity(double & oIntensity) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_LightingIntensity(oIntensity)); \
} \
HRESULT __stdcall  ENVTIEName::put_LightingIntensity(double iIntensity) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_LightingIntensity(iIntensity)); \
} \
HRESULT __stdcall  ENVTIEName::get_LightingMode(CatLightingMode & oLightingMode) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_LightingMode(oLightingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LightingMode(CatLightingMode iLightingMode) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_LightingMode(iLightingMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_NavigationStyle(CatNavigationStyle & oNavigationStyle) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_NavigationStyle(oNavigationStyle)); \
} \
HRESULT __stdcall  ENVTIEName::put_NavigationStyle(CatNavigationStyle iNavigationStyle) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_NavigationStyle(iNavigationStyle)); \
} \
HRESULT __stdcall  ENVTIEName::get_RenderingMode(CatRenderingMode & oRenderingMode) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_RenderingMode(oRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RenderingMode(CatRenderingMode iRenderingMode) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_RenderingMode(iRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_NearLimit(double & oNearLimit) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_NearLimit(oNearLimit)); \
} \
HRESULT __stdcall  ENVTIEName::put_NearLimit(double iNearLimit) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_NearLimit(iNearLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_FarLimit(double & oFarLimit) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_FarLimit(oFarLimit)); \
} \
HRESULT __stdcall  ENVTIEName::put_FarLimit(double iFarLimit) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_FarLimit(iFarLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClippingMode(CatClippingMode & oClippingMode) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_ClippingMode(oClippingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClippingMode(CatClippingMode iClippingMode) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_ClippingMode(iClippingMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Foggy(CAT_VARIANT_BOOL & oFoggy) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Foggy(oFoggy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Foggy(CAT_VARIANT_BOOL iFoggy) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_Foggy(iFoggy)); \
} \
HRESULT __stdcall  ENVTIEName::get_Ground(CAT_VARIANT_BOOL & oGround) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Ground(oGround)); \
} \
HRESULT __stdcall  ENVTIEName::put_Ground(CAT_VARIANT_BOOL iGround) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_Ground(iGround)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullScreen(CAT_VARIANT_BOOL & oFullScreen) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_FullScreen(oFullScreen)); \
} \
HRESULT __stdcall  ENVTIEName::put_FullScreen(CAT_VARIANT_BOOL iFullScreen) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_FullScreen(iFullScreen)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackgroundColor(CATSafeArrayVariant & color) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)GetBackgroundColor(color)); \
} \
HRESULT __stdcall  ENVTIEName::PutBackgroundColor(const CATSafeArrayVariant & color) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)PutBackgroundColor(color)); \
} \
HRESULT __stdcall  ENVTIEName::get_Width(CATLONG & oWidth) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(CATLONG & oHeight) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::Reframe() \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)Reframe()); \
} \
HRESULT __stdcall  ENVTIEName::ZoomIn() \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)ZoomIn()); \
} \
HRESULT __stdcall  ENVTIEName::ZoomOut() \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)ZoomOut()); \
} \
HRESULT __stdcall  ENVTIEName::CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)CaptureToFile(iFormat,iFile)); \
} \
HRESULT __stdcall  ENVTIEName::NewCamera(CATIACamera *& oCamera) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)NewCamera(oCamera)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAViewer3D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAViewer3D(classe)    TIECATIAViewer3D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAViewer3D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAViewer3D, classe) \
 \
 \
CATImplementTIEMethods(CATIAViewer3D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAViewer3D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAViewer3D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAViewer3D, classe) \
 \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oViewpoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viewpoint3D(oViewpoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oViewpoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_Viewpoint3D(CATIAViewpoint3D * oViewpoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oViewpoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viewpoint3D(oViewpoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oViewpoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::Translate(const CATSafeArrayVariant & iVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Translate(iVector); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::Rotate(const CATSafeArrayVariant & iAxis, double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAxis,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rotate(iAxis,iAngle); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAxis,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_LightSources(CATIALightSources *& oLightSources) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLightSources); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LightSources(oLightSources); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLightSources); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_LightingIntensity(double & oIntensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oIntensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LightingIntensity(oIntensity); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oIntensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_LightingIntensity(double iIntensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIntensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LightingIntensity(iIntensity); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIntensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_LightingMode(CatLightingMode & oLightingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oLightingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LightingMode(oLightingMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oLightingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_LightingMode(CatLightingMode iLightingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iLightingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LightingMode(iLightingMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iLightingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_NavigationStyle(CatNavigationStyle & oNavigationStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNavigationStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NavigationStyle(oNavigationStyle); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNavigationStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_NavigationStyle(CatNavigationStyle iNavigationStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNavigationStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NavigationStyle(iNavigationStyle); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNavigationStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_RenderingMode(CatRenderingMode & oRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RenderingMode(oRenderingMode); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_RenderingMode(CatRenderingMode iRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RenderingMode(iRenderingMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_NearLimit(double & oNearLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNearLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NearLimit(oNearLimit); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNearLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_NearLimit(double iNearLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNearLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NearLimit(iNearLimit); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNearLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_FarLimit(double & oFarLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oFarLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FarLimit(oFarLimit); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oFarLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_FarLimit(double iFarLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iFarLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FarLimit(iFarLimit); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iFarLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_ClippingMode(CatClippingMode & oClippingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oClippingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClippingMode(oClippingMode); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oClippingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_ClippingMode(CatClippingMode iClippingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iClippingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClippingMode(iClippingMode); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iClippingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_Foggy(CAT_VARIANT_BOOL & oFoggy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oFoggy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Foggy(oFoggy); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oFoggy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_Foggy(CAT_VARIANT_BOOL iFoggy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iFoggy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Foggy(iFoggy); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iFoggy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_Ground(CAT_VARIANT_BOOL & oGround) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oGround); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Ground(oGround); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oGround); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_Ground(CAT_VARIANT_BOOL iGround) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iGround); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Ground(iGround); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iGround); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_FullScreen(CAT_VARIANT_BOOL & oFullScreen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oFullScreen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullScreen(oFullScreen); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oFullScreen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::put_FullScreen(CAT_VARIANT_BOOL iFullScreen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iFullScreen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FullScreen(iFullScreen); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iFullScreen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::GetBackgroundColor(CATSafeArrayVariant & color) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&color); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundColor(color); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&color); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::PutBackgroundColor(const CATSafeArrayVariant & color) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&color); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutBackgroundColor(color); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&color); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_Width(CATLONG & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Width(oWidth); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::get_Height(CATLONG & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::Reframe() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reframe(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::ZoomIn() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ZoomIn(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::ZoomOut() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ZoomOut(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iFormat,&iFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CaptureToFile(iFormat,iFile); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iFormat,&iFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::NewCamera(CATIACamera *& oCamera) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oCamera); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewCamera(oCamera); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oCamera); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewer3D##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewer3D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewer3D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewer3D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewer3D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewer3D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAViewer3D(classe) \
 \
 \
declare_TIE_CATIAViewer3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAViewer3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAViewer3D,"CATIAViewer3D",CATIAViewer3D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAViewer3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAViewer3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAViewer3D##classe(classe::MetaObject(),CATIAViewer3D::MetaObject(),(void *)CreateTIECATIAViewer3D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAViewer3D(classe) \
 \
 \
declare_TIE_CATIAViewer3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAViewer3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAViewer3D,"CATIAViewer3D",CATIAViewer3D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAViewer3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAViewer3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAViewer3D##classe(classe::MetaObject(),CATIAViewer3D::MetaObject(),(void *)CreateTIECATIAViewer3D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAViewer3D(classe) TIE_CATIAViewer3D(classe)
#else
#define BOA_CATIAViewer3D(classe) CATImplementBOA(CATIAViewer3D, classe)
#endif

#endif
