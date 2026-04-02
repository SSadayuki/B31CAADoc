#ifndef __TIE_CATIASectioningSettingAtt
#define __TIE_CATIASectioningSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASectioningSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASectioningSettingAtt */
#define declare_TIE_CATIASectioningSettingAtt(classe) \
 \
 \
class TIECATIASectioningSettingAtt##classe : public CATIASectioningSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASectioningSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetPlaneColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
      virtual HRESULT __stdcall SetPlaneColor(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetPlaneColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPlaneColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PlaneNormal(CatSectionPlaneNormal & oPlaneNormal); \
      virtual HRESULT __stdcall put_PlaneNormal(CatSectionPlaneNormal iPlaneNormal); \
      virtual HRESULT __stdcall GetPlaneNormalInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPlaneNormalLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PlaneOrigin(CatSectionPlaneOrigin & oPlaneOrigin); \
      virtual HRESULT __stdcall put_PlaneOrigin(CatSectionPlaneOrigin iPlaneOrigin); \
      virtual HRESULT __stdcall GetPlaneOriginInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPlaneOriginLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClippingMode(CatSectionClippingMode & oClippingMode); \
      virtual HRESULT __stdcall put_ClippingMode(CatSectionClippingMode iClippingMode); \
      virtual HRESULT __stdcall GetClippingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClippingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_HidePlane(CAT_VARIANT_BOOL & oHidePlane); \
      virtual HRESULT __stdcall put_HidePlane(CAT_VARIANT_BOOL iHidePlane); \
      virtual HRESULT __stdcall GetHidePlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetHidePlaneLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_HideResult(CAT_VARIANT_BOOL & oHideResult); \
      virtual HRESULT __stdcall put_HideResult(CAT_VARIANT_BOOL iHideResult); \
      virtual HRESULT __stdcall GetHideResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetHideResultLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UpdateResult(CAT_VARIANT_BOOL & oUpdateResult); \
      virtual HRESULT __stdcall put_UpdateResult(CAT_VARIANT_BOOL iUpdateResult); \
      virtual HRESULT __stdcall GetUpdateResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUpdateResultLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayCutInWireframe(CAT_VARIANT_BOOL & oDisplayCutInWireframe); \
      virtual HRESULT __stdcall put_DisplayCutInWireframe(CAT_VARIANT_BOOL iDisplayCutInWireframe); \
      virtual HRESULT __stdcall GetDisplayCutInWireframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayCutInWireframeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_GridPositionMode(CatGridPositionMode & oGridPositionMode); \
      virtual HRESULT __stdcall put_GridPositionMode(CatGridPositionMode iGridPositionMode); \
      virtual HRESULT __stdcall GetGridPositionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGridPositionModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_GridStyle(CatSectionGridStyle & oGridStyle); \
      virtual HRESULT __stdcall put_GridStyle(CatSectionGridStyle iGridStyle); \
      virtual HRESULT __stdcall GetGridStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGridStyleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_GridAutoFiltering(CAT_VARIANT_BOOL & oGridAutoFiltering); \
      virtual HRESULT __stdcall put_GridAutoFiltering(CAT_VARIANT_BOOL iGridAutoFiltering); \
      virtual HRESULT __stdcall GetGridAutoFilteringInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGridAutoFilteringLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_GridWidthStep(float & oGridWidthStep); \
      virtual HRESULT __stdcall put_GridWidthStep(float iGridWidthStep); \
      virtual HRESULT __stdcall GetGridWidthStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGridWidthStepLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_GridHeightStep(float & oGridHeightStep); \
      virtual HRESULT __stdcall put_GridHeightStep(float iGridHeightStep); \
      virtual HRESULT __stdcall GetGridHeightStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGridHeightStepLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_GridAutoResize(CAT_VARIANT_BOOL & oGridAutoResize); \
      virtual HRESULT __stdcall put_GridAutoResize(CAT_VARIANT_BOOL iGridAutoResize); \
      virtual HRESULT __stdcall GetGridAutoResizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGridAutoResizeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewerAutoOpen(CAT_VARIANT_BOOL & oViewerAutoOpen); \
      virtual HRESULT __stdcall put_ViewerAutoOpen(CAT_VARIANT_BOOL iViewerAutoOpen); \
      virtual HRESULT __stdcall GetViewerAutoOpenInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewerAutoOpenLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewerLock2D(CAT_VARIANT_BOOL & oViewerLock2D); \
      virtual HRESULT __stdcall put_ViewerLock2D(CAT_VARIANT_BOOL iViewerLock2D); \
      virtual HRESULT __stdcall GetViewerLock2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewerLock2DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewerAutoReframe(CAT_VARIANT_BOOL & oViewerAutoReframe); \
      virtual HRESULT __stdcall put_ViewerAutoReframe(CAT_VARIANT_BOOL iViewerAutoReframe); \
      virtual HRESULT __stdcall GetViewerAutoReframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewerAutoReframeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SectionFill(CAT_VARIANT_BOOL & oSectionFill); \
      virtual HRESULT __stdcall put_SectionFill(CAT_VARIANT_BOOL iSectionFill); \
      virtual HRESULT __stdcall GetSectionFillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSectionFillLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SectionExportType(CAT_VARIANT_BOOL & oSectionExportType); \
      virtual HRESULT __stdcall put_SectionExportType(CAT_VARIANT_BOOL iSectionExportType); \
      virtual HRESULT __stdcall GetSectionExportTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSectionExportTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_WindowOpenMode(CatSecWindowOpenMode & oWindowOpenMode); \
      virtual HRESULT __stdcall put_WindowOpenMode(CatSecWindowOpenMode iWindowOpenMode); \
      virtual HRESULT __stdcall GetWindowOpenModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetWindowOpenModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_WindowDefaultWidth(CATLONG & oWindowDefaultWidth); \
      virtual HRESULT __stdcall put_WindowDefaultWidth(CATLONG iWindowDefaultWidth); \
      virtual HRESULT __stdcall GetWindowDefaultWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetWindowDefaultWidthLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_WindowDefaultHeight(CATLONG & oWindowDefaultHeight); \
      virtual HRESULT __stdcall put_WindowDefaultHeight(CATLONG iWindowDefaultHeight); \
      virtual HRESULT __stdcall GetWindowDefaultHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetWindowDefaultHeightLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASectioningSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetPlaneColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
virtual HRESULT __stdcall SetPlaneColor(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetPlaneColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPlaneColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PlaneNormal(CatSectionPlaneNormal & oPlaneNormal); \
virtual HRESULT __stdcall put_PlaneNormal(CatSectionPlaneNormal iPlaneNormal); \
virtual HRESULT __stdcall GetPlaneNormalInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPlaneNormalLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PlaneOrigin(CatSectionPlaneOrigin & oPlaneOrigin); \
virtual HRESULT __stdcall put_PlaneOrigin(CatSectionPlaneOrigin iPlaneOrigin); \
virtual HRESULT __stdcall GetPlaneOriginInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPlaneOriginLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClippingMode(CatSectionClippingMode & oClippingMode); \
virtual HRESULT __stdcall put_ClippingMode(CatSectionClippingMode iClippingMode); \
virtual HRESULT __stdcall GetClippingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClippingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_HidePlane(CAT_VARIANT_BOOL & oHidePlane); \
virtual HRESULT __stdcall put_HidePlane(CAT_VARIANT_BOOL iHidePlane); \
virtual HRESULT __stdcall GetHidePlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetHidePlaneLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_HideResult(CAT_VARIANT_BOOL & oHideResult); \
virtual HRESULT __stdcall put_HideResult(CAT_VARIANT_BOOL iHideResult); \
virtual HRESULT __stdcall GetHideResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetHideResultLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UpdateResult(CAT_VARIANT_BOOL & oUpdateResult); \
virtual HRESULT __stdcall put_UpdateResult(CAT_VARIANT_BOOL iUpdateResult); \
virtual HRESULT __stdcall GetUpdateResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUpdateResultLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayCutInWireframe(CAT_VARIANT_BOOL & oDisplayCutInWireframe); \
virtual HRESULT __stdcall put_DisplayCutInWireframe(CAT_VARIANT_BOOL iDisplayCutInWireframe); \
virtual HRESULT __stdcall GetDisplayCutInWireframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayCutInWireframeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_GridPositionMode(CatGridPositionMode & oGridPositionMode); \
virtual HRESULT __stdcall put_GridPositionMode(CatGridPositionMode iGridPositionMode); \
virtual HRESULT __stdcall GetGridPositionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGridPositionModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_GridStyle(CatSectionGridStyle & oGridStyle); \
virtual HRESULT __stdcall put_GridStyle(CatSectionGridStyle iGridStyle); \
virtual HRESULT __stdcall GetGridStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGridStyleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_GridAutoFiltering(CAT_VARIANT_BOOL & oGridAutoFiltering); \
virtual HRESULT __stdcall put_GridAutoFiltering(CAT_VARIANT_BOOL iGridAutoFiltering); \
virtual HRESULT __stdcall GetGridAutoFilteringInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGridAutoFilteringLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_GridWidthStep(float & oGridWidthStep); \
virtual HRESULT __stdcall put_GridWidthStep(float iGridWidthStep); \
virtual HRESULT __stdcall GetGridWidthStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGridWidthStepLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_GridHeightStep(float & oGridHeightStep); \
virtual HRESULT __stdcall put_GridHeightStep(float iGridHeightStep); \
virtual HRESULT __stdcall GetGridHeightStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGridHeightStepLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_GridAutoResize(CAT_VARIANT_BOOL & oGridAutoResize); \
virtual HRESULT __stdcall put_GridAutoResize(CAT_VARIANT_BOOL iGridAutoResize); \
virtual HRESULT __stdcall GetGridAutoResizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGridAutoResizeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewerAutoOpen(CAT_VARIANT_BOOL & oViewerAutoOpen); \
virtual HRESULT __stdcall put_ViewerAutoOpen(CAT_VARIANT_BOOL iViewerAutoOpen); \
virtual HRESULT __stdcall GetViewerAutoOpenInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewerAutoOpenLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewerLock2D(CAT_VARIANT_BOOL & oViewerLock2D); \
virtual HRESULT __stdcall put_ViewerLock2D(CAT_VARIANT_BOOL iViewerLock2D); \
virtual HRESULT __stdcall GetViewerLock2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewerLock2DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewerAutoReframe(CAT_VARIANT_BOOL & oViewerAutoReframe); \
virtual HRESULT __stdcall put_ViewerAutoReframe(CAT_VARIANT_BOOL iViewerAutoReframe); \
virtual HRESULT __stdcall GetViewerAutoReframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewerAutoReframeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SectionFill(CAT_VARIANT_BOOL & oSectionFill); \
virtual HRESULT __stdcall put_SectionFill(CAT_VARIANT_BOOL iSectionFill); \
virtual HRESULT __stdcall GetSectionFillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSectionFillLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SectionExportType(CAT_VARIANT_BOOL & oSectionExportType); \
virtual HRESULT __stdcall put_SectionExportType(CAT_VARIANT_BOOL iSectionExportType); \
virtual HRESULT __stdcall GetSectionExportTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSectionExportTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_WindowOpenMode(CatSecWindowOpenMode & oWindowOpenMode); \
virtual HRESULT __stdcall put_WindowOpenMode(CatSecWindowOpenMode iWindowOpenMode); \
virtual HRESULT __stdcall GetWindowOpenModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetWindowOpenModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_WindowDefaultWidth(CATLONG & oWindowDefaultWidth); \
virtual HRESULT __stdcall put_WindowDefaultWidth(CATLONG iWindowDefaultWidth); \
virtual HRESULT __stdcall GetWindowDefaultWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetWindowDefaultWidthLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_WindowDefaultHeight(CATLONG & oWindowDefaultHeight); \
virtual HRESULT __stdcall put_WindowDefaultHeight(CATLONG iWindowDefaultHeight); \
virtual HRESULT __stdcall GetWindowDefaultHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetWindowDefaultHeightLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASectioningSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetPlaneColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlaneColor(oR,oG,oB)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlaneColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlaneColor(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlaneColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlaneColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlaneColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlaneNormal(CatSectionPlaneNormal & oPlaneNormal) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PlaneNormal(oPlaneNormal)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlaneNormal(CatSectionPlaneNormal iPlaneNormal) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PlaneNormal(iPlaneNormal)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneNormalInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlaneNormalInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlaneNormalLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlaneNormalLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlaneOrigin(CatSectionPlaneOrigin & oPlaneOrigin) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PlaneOrigin(oPlaneOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlaneOrigin(CatSectionPlaneOrigin iPlaneOrigin) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PlaneOrigin(iPlaneOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneOriginInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlaneOriginInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlaneOriginLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlaneOriginLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClippingMode(CatSectionClippingMode & oClippingMode) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClippingMode(oClippingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClippingMode(CatSectionClippingMode iClippingMode) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClippingMode(iClippingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetClippingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClippingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClippingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClippingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_HidePlane(CAT_VARIANT_BOOL & oHidePlane) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_HidePlane(oHidePlane)); \
} \
HRESULT __stdcall  ENVTIEName::put_HidePlane(CAT_VARIANT_BOOL iHidePlane) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_HidePlane(iHidePlane)); \
} \
HRESULT __stdcall  ENVTIEName::GetHidePlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHidePlaneInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetHidePlaneLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHidePlaneLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_HideResult(CAT_VARIANT_BOOL & oHideResult) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_HideResult(oHideResult)); \
} \
HRESULT __stdcall  ENVTIEName::put_HideResult(CAT_VARIANT_BOOL iHideResult) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_HideResult(iHideResult)); \
} \
HRESULT __stdcall  ENVTIEName::GetHideResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHideResultInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetHideResultLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHideResultLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UpdateResult(CAT_VARIANT_BOOL & oUpdateResult) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UpdateResult(oUpdateResult)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpdateResult(CAT_VARIANT_BOOL iUpdateResult) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UpdateResult(iUpdateResult)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateResultInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateResultLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateResultLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayCutInWireframe(CAT_VARIANT_BOOL & oDisplayCutInWireframe) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayCutInWireframe(oDisplayCutInWireframe)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayCutInWireframe(CAT_VARIANT_BOOL iDisplayCutInWireframe) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayCutInWireframe(iDisplayCutInWireframe)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayCutInWireframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayCutInWireframeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayCutInWireframeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayCutInWireframeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridPositionMode(CatGridPositionMode & oGridPositionMode) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridPositionMode(oGridPositionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridPositionMode(CatGridPositionMode iGridPositionMode) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridPositionMode(iGridPositionMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridPositionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridPositionModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridPositionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridPositionModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridStyle(CatSectionGridStyle & oGridStyle) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridStyle(oGridStyle)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridStyle(CatSectionGridStyle iGridStyle) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridStyle(iGridStyle)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridStyleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridStyleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridAutoFiltering(CAT_VARIANT_BOOL & oGridAutoFiltering) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridAutoFiltering(oGridAutoFiltering)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridAutoFiltering(CAT_VARIANT_BOOL iGridAutoFiltering) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridAutoFiltering(iGridAutoFiltering)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridAutoFilteringInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridAutoFilteringInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridAutoFilteringLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridAutoFilteringLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridWidthStep(float & oGridWidthStep) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridWidthStep(oGridWidthStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridWidthStep(float iGridWidthStep) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridWidthStep(iGridWidthStep)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridWidthStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridWidthStepInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridWidthStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridWidthStepLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridHeightStep(float & oGridHeightStep) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridHeightStep(oGridHeightStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridHeightStep(float iGridHeightStep) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridHeightStep(iGridHeightStep)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridHeightStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridHeightStepInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridHeightStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridHeightStepLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridAutoResize(CAT_VARIANT_BOOL & oGridAutoResize) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridAutoResize(oGridAutoResize)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridAutoResize(CAT_VARIANT_BOOL iGridAutoResize) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridAutoResize(iGridAutoResize)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridAutoResizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridAutoResizeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridAutoResizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridAutoResizeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewerAutoOpen(CAT_VARIANT_BOOL & oViewerAutoOpen) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewerAutoOpen(oViewerAutoOpen)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewerAutoOpen(CAT_VARIANT_BOOL iViewerAutoOpen) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewerAutoOpen(iViewerAutoOpen)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewerAutoOpenInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewerAutoOpenInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewerAutoOpenLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewerAutoOpenLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewerLock2D(CAT_VARIANT_BOOL & oViewerLock2D) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewerLock2D(oViewerLock2D)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewerLock2D(CAT_VARIANT_BOOL iViewerLock2D) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewerLock2D(iViewerLock2D)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewerLock2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewerLock2DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewerLock2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewerLock2DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewerAutoReframe(CAT_VARIANT_BOOL & oViewerAutoReframe) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewerAutoReframe(oViewerAutoReframe)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewerAutoReframe(CAT_VARIANT_BOOL iViewerAutoReframe) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewerAutoReframe(iViewerAutoReframe)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewerAutoReframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewerAutoReframeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewerAutoReframeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewerAutoReframeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionFill(CAT_VARIANT_BOOL & oSectionFill) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SectionFill(oSectionFill)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionFill(CAT_VARIANT_BOOL iSectionFill) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SectionFill(iSectionFill)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectionFillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSectionFillInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSectionFillLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSectionFillLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionExportType(CAT_VARIANT_BOOL & oSectionExportType) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SectionExportType(oSectionExportType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionExportType(CAT_VARIANT_BOOL iSectionExportType) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SectionExportType(iSectionExportType)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectionExportTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSectionExportTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSectionExportTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSectionExportTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_WindowOpenMode(CatSecWindowOpenMode & oWindowOpenMode) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_WindowOpenMode(oWindowOpenMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_WindowOpenMode(CatSecWindowOpenMode iWindowOpenMode) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_WindowOpenMode(iWindowOpenMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetWindowOpenModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetWindowOpenModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetWindowOpenModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetWindowOpenModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_WindowDefaultWidth(CATLONG & oWindowDefaultWidth) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_WindowDefaultWidth(oWindowDefaultWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_WindowDefaultWidth(CATLONG iWindowDefaultWidth) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_WindowDefaultWidth(iWindowDefaultWidth)); \
} \
HRESULT __stdcall  ENVTIEName::GetWindowDefaultWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetWindowDefaultWidthInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetWindowDefaultWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetWindowDefaultWidthLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_WindowDefaultHeight(CATLONG & oWindowDefaultHeight) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_WindowDefaultHeight(oWindowDefaultHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_WindowDefaultHeight(CATLONG iWindowDefaultHeight) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_WindowDefaultHeight(iWindowDefaultHeight)); \
} \
HRESULT __stdcall  ENVTIEName::GetWindowDefaultHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetWindowDefaultHeightInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetWindowDefaultHeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetWindowDefaultHeightLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASectioningSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASectioningSettingAtt(classe)    TIECATIASectioningSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASectioningSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASectioningSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIASectioningSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASectioningSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASectioningSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASectioningSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetPlaneColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oR,&oG,&oB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneColor(oR,oG,oB); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oR,&oG,&oB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetPlaneColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlaneColor(iR,iG,iB); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetPlaneColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetPlaneColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlaneColorLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_PlaneNormal(CatSectionPlaneNormal & oPlaneNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPlaneNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneNormal(oPlaneNormal); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPlaneNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_PlaneNormal(CatSectionPlaneNormal iPlaneNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPlaneNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlaneNormal(iPlaneNormal); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPlaneNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetPlaneNormalInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneNormalInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetPlaneNormalLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlaneNormalLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_PlaneOrigin(CatSectionPlaneOrigin & oPlaneOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPlaneOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneOrigin(oPlaneOrigin); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPlaneOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_PlaneOrigin(CatSectionPlaneOrigin iPlaneOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPlaneOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlaneOrigin(iPlaneOrigin); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPlaneOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetPlaneOriginInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneOriginInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetPlaneOriginLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlaneOriginLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_ClippingMode(CatSectionClippingMode & oClippingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oClippingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClippingMode(oClippingMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oClippingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_ClippingMode(CatSectionClippingMode iClippingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iClippingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClippingMode(iClippingMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iClippingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetClippingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClippingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetClippingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClippingModeLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_HidePlane(CAT_VARIANT_BOOL & oHidePlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oHidePlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HidePlane(oHidePlane); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oHidePlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_HidePlane(CAT_VARIANT_BOOL iHidePlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iHidePlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HidePlane(iHidePlane); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iHidePlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetHidePlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHidePlaneInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetHidePlaneLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHidePlaneLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_HideResult(CAT_VARIANT_BOOL & oHideResult) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oHideResult); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HideResult(oHideResult); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oHideResult); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_HideResult(CAT_VARIANT_BOOL iHideResult) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iHideResult); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HideResult(iHideResult); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iHideResult); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetHideResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHideResultInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetHideResultLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHideResultLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_UpdateResult(CAT_VARIANT_BOOL & oUpdateResult) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oUpdateResult); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpdateResult(oUpdateResult); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oUpdateResult); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_UpdateResult(CAT_VARIANT_BOOL iUpdateResult) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iUpdateResult); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpdateResult(iUpdateResult); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iUpdateResult); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetUpdateResultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateResultInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetUpdateResultLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateResultLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_DisplayCutInWireframe(CAT_VARIANT_BOOL & oDisplayCutInWireframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oDisplayCutInWireframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayCutInWireframe(oDisplayCutInWireframe); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oDisplayCutInWireframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_DisplayCutInWireframe(CAT_VARIANT_BOOL iDisplayCutInWireframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iDisplayCutInWireframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayCutInWireframe(iDisplayCutInWireframe); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iDisplayCutInWireframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetDisplayCutInWireframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayCutInWireframeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetDisplayCutInWireframeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayCutInWireframeLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_GridPositionMode(CatGridPositionMode & oGridPositionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oGridPositionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridPositionMode(oGridPositionMode); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oGridPositionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_GridPositionMode(CatGridPositionMode iGridPositionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iGridPositionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridPositionMode(iGridPositionMode); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iGridPositionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetGridPositionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridPositionModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetGridPositionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridPositionModeLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_GridStyle(CatSectionGridStyle & oGridStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oGridStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridStyle(oGridStyle); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oGridStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_GridStyle(CatSectionGridStyle iGridStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iGridStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridStyle(iGridStyle); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iGridStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetGridStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridStyleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetGridStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridStyleLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_GridAutoFiltering(CAT_VARIANT_BOOL & oGridAutoFiltering) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oGridAutoFiltering); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridAutoFiltering(oGridAutoFiltering); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oGridAutoFiltering); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_GridAutoFiltering(CAT_VARIANT_BOOL iGridAutoFiltering) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iGridAutoFiltering); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridAutoFiltering(iGridAutoFiltering); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iGridAutoFiltering); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetGridAutoFilteringInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridAutoFilteringInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetGridAutoFilteringLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridAutoFilteringLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_GridWidthStep(float & oGridWidthStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oGridWidthStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridWidthStep(oGridWidthStep); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oGridWidthStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_GridWidthStep(float iGridWidthStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iGridWidthStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridWidthStep(iGridWidthStep); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iGridWidthStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetGridWidthStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridWidthStepInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetGridWidthStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridWidthStepLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_GridHeightStep(float & oGridHeightStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oGridHeightStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridHeightStep(oGridHeightStep); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oGridHeightStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_GridHeightStep(float iGridHeightStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iGridHeightStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridHeightStep(iGridHeightStep); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iGridHeightStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetGridHeightStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridHeightStepInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetGridHeightStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridHeightStepLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_GridAutoResize(CAT_VARIANT_BOOL & oGridAutoResize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oGridAutoResize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridAutoResize(oGridAutoResize); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oGridAutoResize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_GridAutoResize(CAT_VARIANT_BOOL iGridAutoResize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iGridAutoResize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridAutoResize(iGridAutoResize); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iGridAutoResize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetGridAutoResizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridAutoResizeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetGridAutoResizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridAutoResizeLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_ViewerAutoOpen(CAT_VARIANT_BOOL & oViewerAutoOpen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oViewerAutoOpen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewerAutoOpen(oViewerAutoOpen); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oViewerAutoOpen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_ViewerAutoOpen(CAT_VARIANT_BOOL iViewerAutoOpen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iViewerAutoOpen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewerAutoOpen(iViewerAutoOpen); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iViewerAutoOpen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetViewerAutoOpenInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewerAutoOpenInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetViewerAutoOpenLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewerAutoOpenLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_ViewerLock2D(CAT_VARIANT_BOOL & oViewerLock2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oViewerLock2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewerLock2D(oViewerLock2D); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oViewerLock2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_ViewerLock2D(CAT_VARIANT_BOOL iViewerLock2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iViewerLock2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewerLock2D(iViewerLock2D); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iViewerLock2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetViewerLock2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewerLock2DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetViewerLock2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewerLock2DLock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_ViewerAutoReframe(CAT_VARIANT_BOOL & oViewerAutoReframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oViewerAutoReframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewerAutoReframe(oViewerAutoReframe); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oViewerAutoReframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_ViewerAutoReframe(CAT_VARIANT_BOOL iViewerAutoReframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iViewerAutoReframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewerAutoReframe(iViewerAutoReframe); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iViewerAutoReframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetViewerAutoReframeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewerAutoReframeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetViewerAutoReframeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewerAutoReframeLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_SectionFill(CAT_VARIANT_BOOL & oSectionFill) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oSectionFill); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionFill(oSectionFill); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oSectionFill); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_SectionFill(CAT_VARIANT_BOOL iSectionFill) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iSectionFill); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionFill(iSectionFill); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iSectionFill); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetSectionFillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectionFillInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetSectionFillLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSectionFillLock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_SectionExportType(CAT_VARIANT_BOOL & oSectionExportType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oSectionExportType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionExportType(oSectionExportType); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oSectionExportType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_SectionExportType(CAT_VARIANT_BOOL iSectionExportType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iSectionExportType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionExportType(iSectionExportType); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iSectionExportType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetSectionExportTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectionExportTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetSectionExportTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSectionExportTypeLock(iLocked); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_WindowOpenMode(CatSecWindowOpenMode & oWindowOpenMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oWindowOpenMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WindowOpenMode(oWindowOpenMode); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oWindowOpenMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_WindowOpenMode(CatSecWindowOpenMode iWindowOpenMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iWindowOpenMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WindowOpenMode(iWindowOpenMode); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iWindowOpenMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetWindowOpenModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWindowOpenModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetWindowOpenModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWindowOpenModeLock(iLocked); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_WindowDefaultWidth(CATLONG & oWindowDefaultWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oWindowDefaultWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WindowDefaultWidth(oWindowDefaultWidth); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oWindowDefaultWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_WindowDefaultWidth(CATLONG iWindowDefaultWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iWindowDefaultWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WindowDefaultWidth(iWindowDefaultWidth); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iWindowDefaultWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetWindowDefaultWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWindowDefaultWidthInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetWindowDefaultWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWindowDefaultWidthLock(iLocked); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::get_WindowDefaultHeight(CATLONG & oWindowDefaultHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oWindowDefaultHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WindowDefaultHeight(oWindowDefaultHeight); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oWindowDefaultHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::put_WindowDefaultHeight(CATLONG iWindowDefaultHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iWindowDefaultHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WindowDefaultHeight(iWindowDefaultHeight); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iWindowDefaultHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::GetWindowDefaultHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWindowDefaultHeightInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SetWindowDefaultHeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWindowDefaultHeightLock(iLocked); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASectioningSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASectioningSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASectioningSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASectioningSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASectioningSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASectioningSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASectioningSettingAtt(classe) \
 \
 \
declare_TIE_CATIASectioningSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASectioningSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASectioningSettingAtt,"CATIASectioningSettingAtt",CATIASectioningSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASectioningSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASectioningSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASectioningSettingAtt##classe(classe::MetaObject(),CATIASectioningSettingAtt::MetaObject(),(void *)CreateTIECATIASectioningSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASectioningSettingAtt(classe) \
 \
 \
declare_TIE_CATIASectioningSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASectioningSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASectioningSettingAtt,"CATIASectioningSettingAtt",CATIASectioningSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASectioningSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASectioningSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASectioningSettingAtt##classe(classe::MetaObject(),CATIASectioningSettingAtt::MetaObject(),(void *)CreateTIECATIASectioningSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASectioningSettingAtt(classe) TIE_CATIASectioningSettingAtt(classe)
#else
#define BOA_CATIASectioningSettingAtt(classe) CATImplementBOA(CATIASectioningSettingAtt, classe)
#endif

#endif
