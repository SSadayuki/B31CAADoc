#ifndef __TIE_CATIA2DLSettingAtt
#define __TIE_CATIA2DLSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIA2DLSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIA2DLSettingAtt */
#define declare_TIE_CATIA2DLSettingAtt(classe) \
 \
 \
class TIECATIA2DLSettingAtt##classe : public CATIA2DLSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIA2DLSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_HideIn3D(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_HideIn3D(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetHideIn3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetHideIn3DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewBackgroundMode(CatViewBackgroundMode & oValue); \
      virtual HRESULT __stdcall put_ViewBackgroundMode(CatViewBackgroundMode iValue); \
      virtual HRESULT __stdcall GetViewBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewBackgroundModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewFilterCreationMode(CatViewFilterCreationMode & oValue); \
      virtual HRESULT __stdcall put_ViewFilterCreationMode(CatViewFilterCreationMode iValue); \
      virtual HRESULT __stdcall GetViewFilterCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewFilterCreationModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DedicatedFilterType(CatDedicatedFilterType & oValue); \
      virtual HRESULT __stdcall put_DedicatedFilterType(CatDedicatedFilterType iValue); \
      virtual HRESULT __stdcall GetDedicatedFilterTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDedicatedFilterTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetEditDedicatedFilterDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetEditDedicatedFilterDialogBoxLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClippingFrame(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ClippingFrame(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetClippingFrameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClippingFrameLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode & oValue); \
      virtual HRESULT __stdcall put_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode iValue); \
      virtual HRESULT __stdcall GetClippingFrameReframeOnModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClippingFrameReframeOnModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BackClippingPlane(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_BackClippingPlane(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetBackClippingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBackClippingPlaneLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PropagateHighlight(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PropagateHighlight(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPropagateHighlightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPropagateHighlightLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FitAllInSheetFormat(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_FitAllInSheetFormat(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetFitAllInSheetFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFitAllInSheetFormatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TileLayoutWindow(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_TileLayoutWindow(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetTileLayoutWindowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTileLayoutWindowLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetDisplayBackAndCuttingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayBackAndCuttingPlaneLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Activate2DMode(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_Activate2DMode(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetActivate2DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetActivate2DModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayClippingOutline(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DisplayClippingOutline(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetDisplayClippingOutlineInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayClippingOutlineLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetClippingViewOutlineColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetClippingViewOutlineColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall GetClippingViewOutlineColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClippingViewOutlineColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClippingViewOutlineLinetype(CATLONG & oValue); \
      virtual HRESULT __stdcall put_ClippingViewOutlineLinetype(CATLONG iValue); \
      virtual HRESULT __stdcall GetClippingViewOutlineLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClippingViewOutlineLinetypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClippingViewOutlineThickness(CATLONG & oValue); \
      virtual HRESULT __stdcall put_ClippingViewOutlineThickness(CATLONG iValue); \
      virtual HRESULT __stdcall GetClippingViewOutlineThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClippingViewOutlineThicknessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Boundaries2DLDisplay(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_Boundaries2DLDisplay(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetBoundaries2DLDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBoundaries2DLDisplayLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetBoundaries2DLColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetBoundaries2DLColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall GetBoundaries2DLColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBoundaries2DLColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Boundaries2DLLineType(CATLONG & oValue); \
      virtual HRESULT __stdcall put_Boundaries2DLLineType(CATLONG iValue); \
      virtual HRESULT __stdcall GetBoundaries2DLLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBoundaries2DLLineTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Boundaries2DLThickness(CATLONG & oValue); \
      virtual HRESULT __stdcall put_Boundaries2DLThickness(CATLONG iValue); \
      virtual HRESULT __stdcall GetBoundaries2DLThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBoundaries2DLThicknessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CalloutCreationDialogBox(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_CalloutCreationDialogBox(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetCalloutCreationDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCalloutCreationDialogBoxLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CalloutCreationInActiveView(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_CalloutCreationInActiveView(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetCalloutCreationInActiveViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCalloutCreationInActiveViewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CreateAssociativeUseEdges(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_CreateAssociativeUseEdges(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetCreateAssociativeUseEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCreateAssociativeUseEdgesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetProtectedElementsColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetProtectedElementsColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall GetProtectedElementsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProtectedElementsColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LayoutDefaultRenderStyle(CATLONG & oValue); \
      virtual HRESULT __stdcall put_LayoutDefaultRenderStyle(CATLONG iValue); \
      virtual HRESULT __stdcall GetLayoutDefaultRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLayoutDefaultRenderStyleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetInsureSheetNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetInsureSheetNamesUniquenessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_InsureViewNamesUniqueness(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_InsureViewNamesUniqueness(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetInsureViewNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetInsureViewNamesUniquenessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope & oValue); \
      virtual HRESULT __stdcall put_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope iValue); \
      virtual HRESULT __stdcall GetInsureViewNamesUniquenessScopeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetInsureViewNamesUniquenessScopeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetInsureFilterNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetInsureFilterNamesUniquenessLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIA2DLSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_HideIn3D(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_HideIn3D(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetHideIn3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetHideIn3DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewBackgroundMode(CatViewBackgroundMode & oValue); \
virtual HRESULT __stdcall put_ViewBackgroundMode(CatViewBackgroundMode iValue); \
virtual HRESULT __stdcall GetViewBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewBackgroundModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewFilterCreationMode(CatViewFilterCreationMode & oValue); \
virtual HRESULT __stdcall put_ViewFilterCreationMode(CatViewFilterCreationMode iValue); \
virtual HRESULT __stdcall GetViewFilterCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewFilterCreationModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DedicatedFilterType(CatDedicatedFilterType & oValue); \
virtual HRESULT __stdcall put_DedicatedFilterType(CatDedicatedFilterType iValue); \
virtual HRESULT __stdcall GetDedicatedFilterTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDedicatedFilterTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetEditDedicatedFilterDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetEditDedicatedFilterDialogBoxLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClippingFrame(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ClippingFrame(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetClippingFrameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClippingFrameLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode & oValue); \
virtual HRESULT __stdcall put_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode iValue); \
virtual HRESULT __stdcall GetClippingFrameReframeOnModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClippingFrameReframeOnModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BackClippingPlane(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_BackClippingPlane(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetBackClippingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBackClippingPlaneLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PropagateHighlight(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PropagateHighlight(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPropagateHighlightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPropagateHighlightLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FitAllInSheetFormat(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_FitAllInSheetFormat(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetFitAllInSheetFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFitAllInSheetFormatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TileLayoutWindow(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_TileLayoutWindow(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetTileLayoutWindowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTileLayoutWindowLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetDisplayBackAndCuttingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayBackAndCuttingPlaneLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Activate2DMode(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_Activate2DMode(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetActivate2DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetActivate2DModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayClippingOutline(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DisplayClippingOutline(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetDisplayClippingOutlineInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayClippingOutlineLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetClippingViewOutlineColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetClippingViewOutlineColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall GetClippingViewOutlineColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClippingViewOutlineColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClippingViewOutlineLinetype(CATLONG & oValue); \
virtual HRESULT __stdcall put_ClippingViewOutlineLinetype(CATLONG iValue); \
virtual HRESULT __stdcall GetClippingViewOutlineLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClippingViewOutlineLinetypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClippingViewOutlineThickness(CATLONG & oValue); \
virtual HRESULT __stdcall put_ClippingViewOutlineThickness(CATLONG iValue); \
virtual HRESULT __stdcall GetClippingViewOutlineThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClippingViewOutlineThicknessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Boundaries2DLDisplay(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_Boundaries2DLDisplay(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetBoundaries2DLDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBoundaries2DLDisplayLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetBoundaries2DLColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetBoundaries2DLColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall GetBoundaries2DLColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBoundaries2DLColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Boundaries2DLLineType(CATLONG & oValue); \
virtual HRESULT __stdcall put_Boundaries2DLLineType(CATLONG iValue); \
virtual HRESULT __stdcall GetBoundaries2DLLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBoundaries2DLLineTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Boundaries2DLThickness(CATLONG & oValue); \
virtual HRESULT __stdcall put_Boundaries2DLThickness(CATLONG iValue); \
virtual HRESULT __stdcall GetBoundaries2DLThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBoundaries2DLThicknessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CalloutCreationDialogBox(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_CalloutCreationDialogBox(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetCalloutCreationDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCalloutCreationDialogBoxLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CalloutCreationInActiveView(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_CalloutCreationInActiveView(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetCalloutCreationInActiveViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCalloutCreationInActiveViewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CreateAssociativeUseEdges(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_CreateAssociativeUseEdges(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetCreateAssociativeUseEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCreateAssociativeUseEdgesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetProtectedElementsColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetProtectedElementsColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall GetProtectedElementsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProtectedElementsColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LayoutDefaultRenderStyle(CATLONG & oValue); \
virtual HRESULT __stdcall put_LayoutDefaultRenderStyle(CATLONG iValue); \
virtual HRESULT __stdcall GetLayoutDefaultRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLayoutDefaultRenderStyleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetInsureSheetNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetInsureSheetNamesUniquenessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_InsureViewNamesUniqueness(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_InsureViewNamesUniqueness(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetInsureViewNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetInsureViewNamesUniquenessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope & oValue); \
virtual HRESULT __stdcall put_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope iValue); \
virtual HRESULT __stdcall GetInsureViewNamesUniquenessScopeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetInsureViewNamesUniquenessScopeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetInsureFilterNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetInsureFilterNamesUniquenessLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIA2DLSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_HideIn3D(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_HideIn3D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_HideIn3D(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_HideIn3D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetHideIn3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHideIn3DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetHideIn3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHideIn3DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewBackgroundMode(CatViewBackgroundMode & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewBackgroundMode(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewBackgroundMode(CatViewBackgroundMode iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewBackgroundMode(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewBackgroundModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewBackgroundModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewBackgroundModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewFilterCreationMode(CatViewFilterCreationMode & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewFilterCreationMode(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewFilterCreationMode(CatViewFilterCreationMode iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewFilterCreationMode(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewFilterCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewFilterCreationModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewFilterCreationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewFilterCreationModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DedicatedFilterType(CatDedicatedFilterType & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DedicatedFilterType(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DedicatedFilterType(CatDedicatedFilterType iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DedicatedFilterType(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDedicatedFilterTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDedicatedFilterTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDedicatedFilterTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDedicatedFilterTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_EditDedicatedFilterDialogBox(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_EditDedicatedFilterDialogBox(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetEditDedicatedFilterDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetEditDedicatedFilterDialogBoxInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetEditDedicatedFilterDialogBoxLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetEditDedicatedFilterDialogBoxLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClippingFrame(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClippingFrame(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClippingFrame(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClippingFrame(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetClippingFrameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClippingFrameInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClippingFrameLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClippingFrameLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClippingFrameReframeOnMode(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClippingFrameReframeOnMode(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetClippingFrameReframeOnModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClippingFrameReframeOnModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClippingFrameReframeOnModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClippingFrameReframeOnModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BackClippingPlane(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BackClippingPlane(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_BackClippingPlane(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BackClippingPlane(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackClippingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBackClippingPlaneInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBackClippingPlaneLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBackClippingPlaneLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PropagateHighlight(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PropagateHighlight(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PropagateHighlight(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PropagateHighlight(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPropagateHighlightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPropagateHighlightInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPropagateHighlightLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPropagateHighlightLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FitAllInSheetFormat(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FitAllInSheetFormat(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_FitAllInSheetFormat(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FitAllInSheetFormat(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetFitAllInSheetFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFitAllInSheetFormatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFitAllInSheetFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFitAllInSheetFormatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TileLayoutWindow(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TileLayoutWindow(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_TileLayoutWindow(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TileLayoutWindow(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetTileLayoutWindowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTileLayoutWindowInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTileLayoutWindowLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTileLayoutWindowLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayBackAndCuttingPlane(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayBackAndCuttingPlane(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayBackAndCuttingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayBackAndCuttingPlaneInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayBackAndCuttingPlaneLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayBackAndCuttingPlaneLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activate2DMode(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Activate2DMode(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Activate2DMode(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Activate2DMode(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetActivate2DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetActivate2DModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetActivate2DModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetActivate2DModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayClippingOutline(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayClippingOutline(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayClippingOutline(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayClippingOutline(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayClippingOutlineInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayClippingOutlineInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayClippingOutlineLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayClippingOutlineLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetClippingViewOutlineColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClippingViewOutlineColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetClippingViewOutlineColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClippingViewOutlineColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::GetClippingViewOutlineColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClippingViewOutlineColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClippingViewOutlineColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClippingViewOutlineColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClippingViewOutlineLinetype(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClippingViewOutlineLinetype(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClippingViewOutlineLinetype(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClippingViewOutlineLinetype(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetClippingViewOutlineLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClippingViewOutlineLinetypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClippingViewOutlineLinetypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClippingViewOutlineLinetypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClippingViewOutlineThickness(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClippingViewOutlineThickness(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClippingViewOutlineThickness(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClippingViewOutlineThickness(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetClippingViewOutlineThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClippingViewOutlineThicknessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClippingViewOutlineThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClippingViewOutlineThicknessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Boundaries2DLDisplay(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Boundaries2DLDisplay(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Boundaries2DLDisplay(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Boundaries2DLDisplay(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundaries2DLDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBoundaries2DLDisplayInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundaries2DLDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBoundaries2DLDisplayLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundaries2DLColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBoundaries2DLColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundaries2DLColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBoundaries2DLColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundaries2DLColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBoundaries2DLColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundaries2DLColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBoundaries2DLColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Boundaries2DLLineType(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Boundaries2DLLineType(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Boundaries2DLLineType(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Boundaries2DLLineType(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundaries2DLLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBoundaries2DLLineTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundaries2DLLineTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBoundaries2DLLineTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Boundaries2DLThickness(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Boundaries2DLThickness(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Boundaries2DLThickness(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Boundaries2DLThickness(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundaries2DLThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBoundaries2DLThicknessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundaries2DLThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBoundaries2DLThicknessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalloutCreationDialogBox(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CalloutCreationDialogBox(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CalloutCreationDialogBox(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CalloutCreationDialogBox(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetCalloutCreationDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCalloutCreationDialogBoxInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCalloutCreationDialogBoxLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCalloutCreationDialogBoxLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalloutCreationInActiveView(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CalloutCreationInActiveView(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CalloutCreationInActiveView(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CalloutCreationInActiveView(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetCalloutCreationInActiveViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCalloutCreationInActiveViewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCalloutCreationInActiveViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCalloutCreationInActiveViewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CreateAssociativeUseEdges(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CreateAssociativeUseEdges(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreateAssociativeUseEdges(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CreateAssociativeUseEdges(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetCreateAssociativeUseEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCreateAssociativeUseEdgesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCreateAssociativeUseEdgesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCreateAssociativeUseEdgesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetProtectedElementsColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProtectedElementsColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetProtectedElementsColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProtectedElementsColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::GetProtectedElementsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProtectedElementsColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProtectedElementsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProtectedElementsColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LayoutDefaultRenderStyle(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LayoutDefaultRenderStyle(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_LayoutDefaultRenderStyle(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LayoutDefaultRenderStyle(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetLayoutDefaultRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLayoutDefaultRenderStyleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLayoutDefaultRenderStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLayoutDefaultRenderStyleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InsureSheetNamesUniqueness(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InsureSheetNamesUniqueness(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetInsureSheetNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInsureSheetNamesUniquenessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetInsureSheetNamesUniquenessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInsureSheetNamesUniquenessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_InsureViewNamesUniqueness(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InsureViewNamesUniqueness(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_InsureViewNamesUniqueness(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InsureViewNamesUniqueness(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetInsureViewNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInsureViewNamesUniquenessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetInsureViewNamesUniquenessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInsureViewNamesUniquenessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InsureViewNamesUniquenessScope(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InsureViewNamesUniquenessScope(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetInsureViewNamesUniquenessScopeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInsureViewNamesUniquenessScopeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetInsureViewNamesUniquenessScopeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInsureViewNamesUniquenessScopeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InsureFilterNamesUniqueness(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InsureFilterNamesUniqueness(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetInsureFilterNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInsureFilterNamesUniquenessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetInsureFilterNamesUniquenessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInsureFilterNamesUniquenessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIA2DLSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIA2DLSettingAtt(classe)    TIECATIA2DLSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIA2DLSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIA2DLSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIA2DLSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIA2DLSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIA2DLSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIA2DLSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_HideIn3D(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HideIn3D(oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_HideIn3D(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HideIn3D(iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetHideIn3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHideIn3DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetHideIn3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHideIn3DLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_ViewBackgroundMode(CatViewBackgroundMode & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewBackgroundMode(oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_ViewBackgroundMode(CatViewBackgroundMode iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewBackgroundMode(iValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetViewBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewBackgroundModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetViewBackgroundModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewBackgroundModeLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_ViewFilterCreationMode(CatViewFilterCreationMode & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewFilterCreationMode(oValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_ViewFilterCreationMode(CatViewFilterCreationMode iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewFilterCreationMode(iValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetViewFilterCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewFilterCreationModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetViewFilterCreationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewFilterCreationModeLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_DedicatedFilterType(CatDedicatedFilterType & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DedicatedFilterType(oValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_DedicatedFilterType(CatDedicatedFilterType iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DedicatedFilterType(iValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetDedicatedFilterTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDedicatedFilterTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetDedicatedFilterTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDedicatedFilterTypeLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EditDedicatedFilterDialogBox(oValue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_EditDedicatedFilterDialogBox(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EditDedicatedFilterDialogBox(iValue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetEditDedicatedFilterDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEditDedicatedFilterDialogBoxInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetEditDedicatedFilterDialogBoxLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEditDedicatedFilterDialogBoxLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_ClippingFrame(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClippingFrame(oValue); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_ClippingFrame(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClippingFrame(iValue); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetClippingFrameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClippingFrameInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetClippingFrameLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClippingFrameLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClippingFrameReframeOnMode(oValue); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_ClippingFrameReframeOnMode(CatClippingFrameReframeOnMode iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClippingFrameReframeOnMode(iValue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetClippingFrameReframeOnModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClippingFrameReframeOnModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetClippingFrameReframeOnModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClippingFrameReframeOnModeLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_BackClippingPlane(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BackClippingPlane(oValue); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_BackClippingPlane(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BackClippingPlane(iValue); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetBackClippingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackClippingPlaneInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetBackClippingPlaneLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBackClippingPlaneLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_PropagateHighlight(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PropagateHighlight(oValue); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_PropagateHighlight(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PropagateHighlight(iValue); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetPropagateHighlightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPropagateHighlightInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetPropagateHighlightLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPropagateHighlightLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_FitAllInSheetFormat(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FitAllInSheetFormat(oValue); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_FitAllInSheetFormat(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FitAllInSheetFormat(iValue); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetFitAllInSheetFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFitAllInSheetFormatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetFitAllInSheetFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFitAllInSheetFormatLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_TileLayoutWindow(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TileLayoutWindow(oValue); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_TileLayoutWindow(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TileLayoutWindow(iValue); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetTileLayoutWindowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTileLayoutWindowInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetTileLayoutWindowLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTileLayoutWindowLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayBackAndCuttingPlane(oValue); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_DisplayBackAndCuttingPlane(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayBackAndCuttingPlane(iValue); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetDisplayBackAndCuttingPlaneInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayBackAndCuttingPlaneInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetDisplayBackAndCuttingPlaneLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayBackAndCuttingPlaneLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_Activate2DMode(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activate2DMode(oValue); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_Activate2DMode(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Activate2DMode(iValue); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetActivate2DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActivate2DModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetActivate2DModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetActivate2DModeLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_DisplayClippingOutline(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayClippingOutline(oValue); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_DisplayClippingOutline(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayClippingOutline(iValue); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetDisplayClippingOutlineInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayClippingOutlineInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetDisplayClippingOutlineLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayClippingOutlineLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetClippingViewOutlineColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClippingViewOutlineColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetClippingViewOutlineColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClippingViewOutlineColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetClippingViewOutlineColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClippingViewOutlineColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetClippingViewOutlineColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClippingViewOutlineColorLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_ClippingViewOutlineLinetype(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClippingViewOutlineLinetype(oValue); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_ClippingViewOutlineLinetype(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClippingViewOutlineLinetype(iValue); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetClippingViewOutlineLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClippingViewOutlineLinetypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetClippingViewOutlineLinetypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClippingViewOutlineLinetypeLock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_ClippingViewOutlineThickness(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClippingViewOutlineThickness(oValue); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_ClippingViewOutlineThickness(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClippingViewOutlineThickness(iValue); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetClippingViewOutlineThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClippingViewOutlineThicknessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetClippingViewOutlineThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClippingViewOutlineThicknessLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_Boundaries2DLDisplay(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Boundaries2DLDisplay(oValue); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_Boundaries2DLDisplay(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Boundaries2DLDisplay(iValue); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetBoundaries2DLDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaries2DLDisplayInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetBoundaries2DLDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaries2DLDisplayLock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetBoundaries2DLColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaries2DLColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetBoundaries2DLColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaries2DLColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetBoundaries2DLColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaries2DLColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetBoundaries2DLColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaries2DLColorLock(iLocked); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_Boundaries2DLLineType(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Boundaries2DLLineType(oValue); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_Boundaries2DLLineType(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Boundaries2DLLineType(iValue); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetBoundaries2DLLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaries2DLLineTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetBoundaries2DLLineTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaries2DLLineTypeLock(iLocked); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_Boundaries2DLThickness(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Boundaries2DLThickness(oValue); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_Boundaries2DLThickness(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Boundaries2DLThickness(iValue); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetBoundaries2DLThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaries2DLThicknessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetBoundaries2DLThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaries2DLThicknessLock(iLocked); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_CalloutCreationDialogBox(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalloutCreationDialogBox(oValue); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_CalloutCreationDialogBox(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CalloutCreationDialogBox(iValue); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetCalloutCreationDialogBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCalloutCreationDialogBoxInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetCalloutCreationDialogBoxLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCalloutCreationDialogBoxLock(iLocked); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_CalloutCreationInActiveView(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalloutCreationInActiveView(oValue); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_CalloutCreationInActiveView(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CalloutCreationInActiveView(iValue); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetCalloutCreationInActiveViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCalloutCreationInActiveViewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetCalloutCreationInActiveViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCalloutCreationInActiveViewLock(iLocked); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_CreateAssociativeUseEdges(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreateAssociativeUseEdges(oValue); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_CreateAssociativeUseEdges(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreateAssociativeUseEdges(iValue); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetCreateAssociativeUseEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCreateAssociativeUseEdgesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetCreateAssociativeUseEdgesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCreateAssociativeUseEdgesLock(iLocked); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetProtectedElementsColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProtectedElementsColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetProtectedElementsColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProtectedElementsColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetProtectedElementsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProtectedElementsColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetProtectedElementsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProtectedElementsColorLock(iLocked); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_LayoutDefaultRenderStyle(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LayoutDefaultRenderStyle(oValue); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_LayoutDefaultRenderStyle(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LayoutDefaultRenderStyle(iValue); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetLayoutDefaultRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLayoutDefaultRenderStyleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetLayoutDefaultRenderStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLayoutDefaultRenderStyleLock(iLocked); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InsureSheetNamesUniqueness(oValue); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_InsureSheetNamesUniqueness(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InsureSheetNamesUniqueness(iValue); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetInsureSheetNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInsureSheetNamesUniquenessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetInsureSheetNamesUniquenessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInsureSheetNamesUniquenessLock(iLocked); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_InsureViewNamesUniqueness(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InsureViewNamesUniqueness(oValue); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_InsureViewNamesUniqueness(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InsureViewNamesUniqueness(iValue); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetInsureViewNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInsureViewNamesUniquenessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetInsureViewNamesUniquenessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInsureViewNamesUniquenessLock(iLocked); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InsureViewNamesUniquenessScope(oValue); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_InsureViewNamesUniquenessScope(CatInsureViewNamesUniquenessScope iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InsureViewNamesUniquenessScope(iValue); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetInsureViewNamesUniquenessScopeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInsureViewNamesUniquenessScopeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetInsureViewNamesUniquenessScopeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInsureViewNamesUniquenessScopeLock(iLocked); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::get_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InsureFilterNamesUniqueness(oValue); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::put_InsureFilterNamesUniqueness(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InsureFilterNamesUniqueness(iValue); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::GetInsureFilterNamesUniquenessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInsureFilterNamesUniquenessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SetInsureFilterNamesUniquenessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInsureFilterNamesUniquenessLock(iLocked); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIA2DLSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DLSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DLSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DLSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DLSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIA2DLSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIA2DLSettingAtt(classe) \
 \
 \
declare_TIE_CATIA2DLSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIA2DLSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIA2DLSettingAtt,"CATIA2DLSettingAtt",CATIA2DLSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIA2DLSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIA2DLSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIA2DLSettingAtt##classe(classe::MetaObject(),CATIA2DLSettingAtt::MetaObject(),(void *)CreateTIECATIA2DLSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIA2DLSettingAtt(classe) \
 \
 \
declare_TIE_CATIA2DLSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIA2DLSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIA2DLSettingAtt,"CATIA2DLSettingAtt",CATIA2DLSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIA2DLSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIA2DLSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIA2DLSettingAtt##classe(classe::MetaObject(),CATIA2DLSettingAtt::MetaObject(),(void *)CreateTIECATIA2DLSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIA2DLSettingAtt(classe) TIE_CATIA2DLSettingAtt(classe)
#else
#define BOA_CATIA2DLSettingAtt(classe) CATImplementBOA(CATIA2DLSettingAtt, classe)
#endif

#endif
