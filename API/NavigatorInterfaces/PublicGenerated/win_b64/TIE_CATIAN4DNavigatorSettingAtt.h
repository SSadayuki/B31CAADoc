#ifndef __TIE_CATIAN4DNavigatorSettingAtt
#define __TIE_CATIAN4DNavigatorSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAN4DNavigatorSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAN4DNavigatorSettingAtt */
#define declare_TIE_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
class TIECATIAN4DNavigatorSettingAtt##classe : public CATIAN4DNavigatorSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAN4DNavigatorSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DMUClashPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUClashPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUClashPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUClashPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUDistancePreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUDistancePreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUDistancePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUDistancePreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUGroupPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUGroupPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUGroupPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUGroupPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUSectionPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUSectionPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUSectionPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUSectionPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUShuttlePreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUShuttlePreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUShuttlePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUShuttlePreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUThicknessPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUThicknessPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUThicknessPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUThicknessPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUOffsetPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUOffsetPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUOffsetPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUOffsetPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUSweptVolPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUSweptVolPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUSweptVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUSweptVolPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUSilhouettePreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUSilhouettePreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUSilhouettePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUSilhouettePreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUWrappingPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUWrappingPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUWrappingPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUWrappingPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUFreeSpacePreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUFreeSpacePreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUFreeSpacePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUFreeSpacePreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUSimplifPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUSimplifPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUSimplifPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUSimplifPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUVibrationVolPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUVibrationVolPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUVibrationVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUVibrationVolPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUCut3DPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUCut3DPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUCut3DPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUCut3DPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUMergerPreview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DMUMergerPreview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDMUMergerPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUMergerPreviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NumUrlName(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_NumUrlName(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetNumUrlNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNumUrlNameLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerAutoUpdate(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_MarkerAutoUpdate(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetMarkerAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerAutoUpdateLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSceneDefaultsColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
      virtual HRESULT __stdcall SetSceneDefaultsColor(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetSceneDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSceneDefaultsColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetPublishAutoLaunchBrowserInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPublishAutoLaunchBrowserLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUReviewName(CATBSTR & oValue); \
      virtual HRESULT __stdcall put_DMUReviewName(const CATBSTR & iValue); \
      virtual HRESULT __stdcall GetDMUReviewNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUReviewNameLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ForceVoxel(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_ForceVoxel(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetForceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetForceVoxelLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClearanceVoxel(float & oValue); \
      virtual HRESULT __stdcall put_ClearanceVoxel(float iValue); \
      virtual HRESULT __stdcall GetClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClearanceVoxelLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ForceClearanceVoxel(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_ForceClearanceVoxel(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetForceClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetForceClearanceVoxelLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_InsertMode(CatSacSettingsEnum & oMode); \
      virtual HRESULT __stdcall put_InsertMode(CatSacSettingsEnum iMode); \
      virtual HRESULT __stdcall GetInsertModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetInsertModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_InsertLevel(CAT_VARIANT_BOOL & oLevel); \
      virtual HRESULT __stdcall put_InsertLevel(CAT_VARIANT_BOOL iLevel); \
      virtual HRESULT __stdcall GetInsertLevelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetInsertLevelLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode & oMode); \
      virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode iMode); \
      virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsDisplayModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsDisplayModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
      virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
      virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsOpacity(CATLONG & oValue); \
      virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsOpacity(CATLONG iValue); \
      virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsOpacityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsOpacityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL & oIsLowInt); \
      virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL iIsLowInt); \
      virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsLowIntInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsLowIntLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL & oIsPickable); \
      virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL iIsPickable); \
      virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsPickInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsPickLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
      virtual HRESULT __stdcall SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
      virtual HRESULT __stdcall GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetMarkerTextColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
      virtual HRESULT __stdcall SetMarkerTextColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
      virtual HRESULT __stdcall GetMarkerTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerDefaultsWeight(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerDefaultsWeight(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerDefaultsDashed(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerDefaultsDashed(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerDefaultsSize(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerDefaultsSize(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerDefaultsSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsSizeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerDefaultsFont(CATBSTR & oValue); \
      virtual HRESULT __stdcall put_MarkerDefaultsFont(const CATBSTR & iValue); \
      virtual HRESULT __stdcall GetMarkerDefaultsFontInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsFontLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerTextDashed(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerTextDashed(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerTextDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextDashedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerTextWeight(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerTextWeight(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerTextWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextWeightLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAN4DNavigatorSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DMUClashPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUClashPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUClashPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUClashPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUDistancePreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUDistancePreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUDistancePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUDistancePreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUGroupPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUGroupPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUGroupPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUGroupPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUSectionPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUSectionPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUSectionPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUSectionPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUShuttlePreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUShuttlePreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUShuttlePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUShuttlePreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUThicknessPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUThicknessPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUThicknessPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUThicknessPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUOffsetPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUOffsetPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUOffsetPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUOffsetPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUSweptVolPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUSweptVolPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUSweptVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUSweptVolPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUSilhouettePreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUSilhouettePreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUSilhouettePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUSilhouettePreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUWrappingPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUWrappingPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUWrappingPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUWrappingPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUFreeSpacePreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUFreeSpacePreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUFreeSpacePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUFreeSpacePreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUSimplifPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUSimplifPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUSimplifPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUSimplifPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUVibrationVolPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUVibrationVolPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUVibrationVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUVibrationVolPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUCut3DPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUCut3DPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUCut3DPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUCut3DPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUMergerPreview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DMUMergerPreview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDMUMergerPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUMergerPreviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NumUrlName(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_NumUrlName(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetNumUrlNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNumUrlNameLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerAutoUpdate(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_MarkerAutoUpdate(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetMarkerAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerAutoUpdateLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSceneDefaultsColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
virtual HRESULT __stdcall SetSceneDefaultsColor(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetSceneDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSceneDefaultsColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetPublishAutoLaunchBrowserInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPublishAutoLaunchBrowserLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUReviewName(CATBSTR & oValue); \
virtual HRESULT __stdcall put_DMUReviewName(const CATBSTR & iValue); \
virtual HRESULT __stdcall GetDMUReviewNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUReviewNameLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ForceVoxel(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_ForceVoxel(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetForceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetForceVoxelLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClearanceVoxel(float & oValue); \
virtual HRESULT __stdcall put_ClearanceVoxel(float iValue); \
virtual HRESULT __stdcall GetClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClearanceVoxelLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ForceClearanceVoxel(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_ForceClearanceVoxel(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetForceClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetForceClearanceVoxelLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_InsertMode(CatSacSettingsEnum & oMode); \
virtual HRESULT __stdcall put_InsertMode(CatSacSettingsEnum iMode); \
virtual HRESULT __stdcall GetInsertModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetInsertModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_InsertLevel(CAT_VARIANT_BOOL & oLevel); \
virtual HRESULT __stdcall put_InsertLevel(CAT_VARIANT_BOOL iLevel); \
virtual HRESULT __stdcall GetInsertLevelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetInsertLevelLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode & oMode); \
virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode iMode); \
virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsDisplayModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsDisplayModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsOpacity(CATLONG & oValue); \
virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsOpacity(CATLONG iValue); \
virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsOpacityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsOpacityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL & oIsLowInt); \
virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL iIsLowInt); \
virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsLowIntInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsLowIntLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL & oIsPickable); \
virtual HRESULT __stdcall put_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL iIsPickable); \
virtual HRESULT __stdcall GetDMUGroupPreviewHiddenObjectsPickInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUGroupPreviewHiddenObjectsPickLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
virtual HRESULT __stdcall SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
virtual HRESULT __stdcall GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetMarkerTextColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
virtual HRESULT __stdcall SetMarkerTextColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
virtual HRESULT __stdcall GetMarkerTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerDefaultsWeight(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerDefaultsWeight(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerDefaultsDashed(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerDefaultsDashed(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerDefaultsSize(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerDefaultsSize(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerDefaultsSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsSizeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerDefaultsFont(CATBSTR & oValue); \
virtual HRESULT __stdcall put_MarkerDefaultsFont(const CATBSTR & iValue); \
virtual HRESULT __stdcall GetMarkerDefaultsFontInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsFontLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerTextDashed(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerTextDashed(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerTextDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextDashedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerTextWeight(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerTextWeight(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerTextWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextWeightLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAN4DNavigatorSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DMUClashPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUClashPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUClashPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUClashPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUClashPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUClashPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUClashPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUClashPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUDistancePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUDistancePreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUDistancePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUDistancePreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUDistancePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUDistancePreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUDistancePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUDistancePreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUGroupPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUGroupPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUGroupPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUGroupPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUGroupPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUGroupPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUGroupPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUGroupPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUSectionPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUSectionPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUSectionPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUSectionPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUSectionPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUSectionPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUSectionPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUSectionPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUShuttlePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUShuttlePreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUShuttlePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUShuttlePreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUShuttlePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUShuttlePreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUShuttlePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUShuttlePreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUThicknessPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUThicknessPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUThicknessPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUThicknessPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUThicknessPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUThicknessPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUThicknessPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUThicknessPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUOffsetPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUOffsetPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUOffsetPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUOffsetPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUOffsetPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUOffsetPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUOffsetPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUOffsetPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUSweptVolPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUSweptVolPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUSweptVolPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUSweptVolPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUSweptVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUSweptVolPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUSweptVolPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUSweptVolPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUSilhouettePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUSilhouettePreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUSilhouettePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUSilhouettePreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUSilhouettePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUSilhouettePreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUSilhouettePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUSilhouettePreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUWrappingPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUWrappingPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUWrappingPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUWrappingPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUWrappingPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUWrappingPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUWrappingPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUWrappingPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUFreeSpacePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUFreeSpacePreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUFreeSpacePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUFreeSpacePreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUFreeSpacePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUFreeSpacePreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUFreeSpacePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUFreeSpacePreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUSimplifPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUSimplifPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUSimplifPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUSimplifPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUSimplifPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUSimplifPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUSimplifPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUSimplifPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUVibrationVolPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUVibrationVolPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUVibrationVolPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUVibrationVolPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUVibrationVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUVibrationVolPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUVibrationVolPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUVibrationVolPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUCut3DPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUCut3DPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUCut3DPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUCut3DPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUCut3DPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUCut3DPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUCut3DPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUCut3DPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUMergerPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUMergerPreview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUMergerPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUMergerPreview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUMergerPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUMergerPreviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUMergerPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUMergerPreviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumUrlName(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NumUrlName(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_NumUrlName(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NumUrlName(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumUrlNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNumUrlNameInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNumUrlNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNumUrlNameLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerAutoUpdate(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerAutoUpdate(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerAutoUpdate(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerAutoUpdate(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerAutoUpdateInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerAutoUpdateLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerAutoUpdateLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSceneDefaultsColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSceneDefaultsColor(oR,oG,oB)); \
} \
HRESULT __stdcall  ENVTIEName::SetSceneDefaultsColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSceneDefaultsColor(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetSceneDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSceneDefaultsColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSceneDefaultsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSceneDefaultsColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PublishAutoLaunchBrowser(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PublishAutoLaunchBrowser(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetPublishAutoLaunchBrowserInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPublishAutoLaunchBrowserInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPublishAutoLaunchBrowserLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPublishAutoLaunchBrowserLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUReviewName(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUReviewName(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUReviewName(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUReviewName(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUReviewNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUReviewNameInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUReviewNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUReviewNameLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ForceVoxel(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ForceVoxel(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_ForceVoxel(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ForceVoxel(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetForceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetForceVoxelInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetForceVoxelLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetForceVoxelLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClearanceVoxel(float & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClearanceVoxel(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClearanceVoxel(float iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClearanceVoxel(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClearanceVoxelInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClearanceVoxelLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClearanceVoxelLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ForceClearanceVoxel(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ForceClearanceVoxel(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_ForceClearanceVoxel(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ForceClearanceVoxel(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetForceClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetForceClearanceVoxelInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetForceClearanceVoxelLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetForceClearanceVoxelLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_InsertMode(CatSacSettingsEnum & oMode) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InsertMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_InsertMode(CatSacSettingsEnum iMode) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InsertMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetInsertModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInsertModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetInsertModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInsertModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_InsertLevel(CAT_VARIANT_BOOL & oLevel) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InsertLevel(oLevel)); \
} \
HRESULT __stdcall  ENVTIEName::put_InsertLevel(CAT_VARIANT_BOOL iLevel) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InsertLevel(iLevel)); \
} \
HRESULT __stdcall  ENVTIEName::GetInsertLevelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInsertLevelInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetInsertLevelLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInsertLevelLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode & oMode) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUGroupPreviewHiddenObjectsDisplayMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode iMode) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUGroupPreviewHiddenObjectsDisplayMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUGroupPreviewHiddenObjectsDisplayModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUGroupPreviewHiddenObjectsDisplayModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUGroupPreviewHiddenObjectsDisplayModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUGroupPreviewHiddenObjectsDisplayModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUGroupPreviewHiddenObjectsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUGroupPreviewHiddenObjectsColor(oRed,oGreen,oBlue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUGroupPreviewHiddenObjectsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUGroupPreviewHiddenObjectsColor(iRed,iGreen,iBlue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUGroupPreviewHiddenObjectsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUGroupPreviewHiddenObjectsColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUGroupPreviewHiddenObjectsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUGroupPreviewHiddenObjectsColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUGroupPreviewHiddenObjectsOpacity(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUGroupPreviewHiddenObjectsOpacity(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUGroupPreviewHiddenObjectsOpacity(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUGroupPreviewHiddenObjectsOpacity(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUGroupPreviewHiddenObjectsOpacityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUGroupPreviewHiddenObjectsOpacityInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUGroupPreviewHiddenObjectsOpacityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUGroupPreviewHiddenObjectsOpacityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL & oIsLowInt) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUGroupPreviewHiddenObjectsLowInt(oIsLowInt)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL iIsLowInt) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUGroupPreviewHiddenObjectsLowInt(iIsLowInt)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUGroupPreviewHiddenObjectsLowIntInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUGroupPreviewHiddenObjectsLowIntInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUGroupPreviewHiddenObjectsLowIntLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUGroupPreviewHiddenObjectsLowIntLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL & oIsPickable) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUGroupPreviewHiddenObjectsPick(oIsPickable)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL iIsPickable) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUGroupPreviewHiddenObjectsPick(iIsPickable)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUGroupPreviewHiddenObjectsPickInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUGroupPreviewHiddenObjectsPickInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUGroupPreviewHiddenObjectsPickLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUGroupPreviewHiddenObjectsPickLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsColor(oRed,oGreen,oBlue)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsColor(iRed,iGreen,iBlue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextColor(oRed,oGreen,oBlue)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextColor(iRed,iGreen,iBlue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerDefaultsWeight(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerDefaultsWeight(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerDefaultsWeight(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerDefaultsWeight(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsWeightInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsWeightLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerDefaultsDashed(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerDefaultsDashed(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerDefaultsDashed(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerDefaultsDashed(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsDashedInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsDashedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerDefaultsSize(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerDefaultsSize(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerDefaultsSize(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerDefaultsSize(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsSizeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsSizeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerDefaultsFont(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerDefaultsFont(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerDefaultsFont(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerDefaultsFont(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsFontInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsFontInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsFontLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsFontLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextDashed(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextDashed(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextDashed(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextDashed(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextDashedInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextDashedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextDashedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextWeight(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextWeight(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextWeight(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextWeight(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextWeightInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextWeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextWeightLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Marker2DAutoNaming(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Marker2DAutoNaming(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarker2DAutoNamingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarker2DAutoNamingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Marker3DAutoNaming(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Marker3DAutoNaming(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarker3DAutoNamingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarker3DAutoNamingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAN4DNavigatorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAN4DNavigatorSettingAtt(classe)    TIECATIAN4DNavigatorSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAN4DNavigatorSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAN4DNavigatorSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAN4DNavigatorSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAN4DNavigatorSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAN4DNavigatorSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUClashPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUClashPreview(oIsActive); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUClashPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUClashPreview(iIsActive); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUClashPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUClashPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUClashPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUClashPreviewLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUDistancePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUDistancePreview(oIsActive); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUDistancePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUDistancePreview(iIsActive); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUDistancePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUDistancePreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUDistancePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUDistancePreviewLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUGroupPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUGroupPreview(oIsActive); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUGroupPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUGroupPreview(iIsActive); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUGroupPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUGroupPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUGroupPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUGroupPreviewLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUSectionPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUSectionPreview(oIsActive); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUSectionPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUSectionPreview(iIsActive); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUSectionPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUSectionPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUSectionPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUSectionPreviewLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUShuttlePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUShuttlePreview(oIsActive); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUShuttlePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUShuttlePreview(iIsActive); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUShuttlePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUShuttlePreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUShuttlePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUShuttlePreviewLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUThicknessPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUThicknessPreview(oIsActive); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUThicknessPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUThicknessPreview(iIsActive); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUThicknessPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUThicknessPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUThicknessPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUThicknessPreviewLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUOffsetPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUOffsetPreview(oIsActive); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUOffsetPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUOffsetPreview(iIsActive); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUOffsetPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUOffsetPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUOffsetPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUOffsetPreviewLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUSweptVolPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUSweptVolPreview(oIsActive); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUSweptVolPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUSweptVolPreview(iIsActive); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUSweptVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUSweptVolPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUSweptVolPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUSweptVolPreviewLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUSilhouettePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUSilhouettePreview(oIsActive); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUSilhouettePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUSilhouettePreview(iIsActive); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUSilhouettePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUSilhouettePreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUSilhouettePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUSilhouettePreviewLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUWrappingPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUWrappingPreview(oIsActive); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUWrappingPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUWrappingPreview(iIsActive); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUWrappingPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUWrappingPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUWrappingPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUWrappingPreviewLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUFreeSpacePreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUFreeSpacePreview(oIsActive); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUFreeSpacePreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUFreeSpacePreview(iIsActive); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUFreeSpacePreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUFreeSpacePreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUFreeSpacePreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUFreeSpacePreviewLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUSimplifPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUSimplifPreview(oIsActive); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUSimplifPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUSimplifPreview(iIsActive); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUSimplifPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUSimplifPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUSimplifPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUSimplifPreviewLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUVibrationVolPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUVibrationVolPreview(oIsActive); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUVibrationVolPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUVibrationVolPreview(iIsActive); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUVibrationVolPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUVibrationVolPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUVibrationVolPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUVibrationVolPreviewLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUCut3DPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUCut3DPreview(oIsActive); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUCut3DPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUCut3DPreview(iIsActive); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUCut3DPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUCut3DPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUCut3DPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUCut3DPreviewLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUMergerPreview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUMergerPreview(oIsActive); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUMergerPreview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUMergerPreview(iIsActive); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUMergerPreviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUMergerPreviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUMergerPreviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUMergerPreviewLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_NumUrlName(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumUrlName(oIsActive); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_NumUrlName(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NumUrlName(iIsActive); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetNumUrlNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumUrlNameInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetNumUrlNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNumUrlNameLock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_MarkerAutoUpdate(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerAutoUpdate(oIsActive); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_MarkerAutoUpdate(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerAutoUpdate(iIsActive); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerAutoUpdateInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerAutoUpdateLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerAutoUpdateLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetSceneDefaultsColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oR,&oG,&oB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSceneDefaultsColor(oR,oG,oB); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oR,&oG,&oB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetSceneDefaultsColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSceneDefaultsColor(iR,iG,iB); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetSceneDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSceneDefaultsColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetSceneDefaultsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSceneDefaultsColorLock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PublishAutoLaunchBrowser(oIsActive); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_PublishAutoLaunchBrowser(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PublishAutoLaunchBrowser(iIsActive); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetPublishAutoLaunchBrowserInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPublishAutoLaunchBrowserInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetPublishAutoLaunchBrowserLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPublishAutoLaunchBrowserLock(iLocked); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUReviewName(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUReviewName(oValue); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUReviewName(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUReviewName(iValue); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUReviewNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUReviewNameInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUReviewNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUReviewNameLock(iLocked); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_ForceVoxel(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ForceVoxel(oIsActive); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_ForceVoxel(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ForceVoxel(iIsActive); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetForceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetForceVoxelInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetForceVoxelLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetForceVoxelLock(iLocked); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_ClearanceVoxel(float & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClearanceVoxel(oValue); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_ClearanceVoxel(float iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClearanceVoxel(iValue); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClearanceVoxelInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetClearanceVoxelLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClearanceVoxelLock(iLocked); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_ForceClearanceVoxel(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ForceClearanceVoxel(oIsActive); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_ForceClearanceVoxel(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ForceClearanceVoxel(iIsActive); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetForceClearanceVoxelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetForceClearanceVoxelInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetForceClearanceVoxelLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetForceClearanceVoxelLock(iLocked); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_InsertMode(CatSacSettingsEnum & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InsertMode(oMode); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_InsertMode(CatSacSettingsEnum iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InsertMode(iMode); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetInsertModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInsertModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetInsertModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInsertModeLock(iLocked); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_InsertLevel(CAT_VARIANT_BOOL & oLevel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oLevel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InsertLevel(oLevel); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oLevel); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_InsertLevel(CAT_VARIANT_BOOL iLevel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iLevel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InsertLevel(iLevel); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iLevel); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetInsertLevelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInsertLevelInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetInsertLevelLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInsertLevelLock(iLocked); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUGroupPreviewHiddenObjectsDisplayMode(oMode); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUGroupPreviewHiddenObjectsDisplayMode(CatDMUGroupPreviewHiddenObjectsDisplayMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUGroupPreviewHiddenObjectsDisplayMode(iMode); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUGroupPreviewHiddenObjectsDisplayModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUGroupPreviewHiddenObjectsDisplayModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUGroupPreviewHiddenObjectsDisplayModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUGroupPreviewHiddenObjectsDisplayModeLock(iLocked); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUGroupPreviewHiddenObjectsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&oRed,&oGreen,&oBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUGroupPreviewHiddenObjectsColor(oRed,oGreen,oBlue); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUGroupPreviewHiddenObjectsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iRed,&iGreen,&iBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUGroupPreviewHiddenObjectsColor(iRed,iGreen,iBlue); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUGroupPreviewHiddenObjectsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUGroupPreviewHiddenObjectsColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUGroupPreviewHiddenObjectsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUGroupPreviewHiddenObjectsColorLock(iLocked); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUGroupPreviewHiddenObjectsOpacity(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUGroupPreviewHiddenObjectsOpacity(oValue); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUGroupPreviewHiddenObjectsOpacity(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUGroupPreviewHiddenObjectsOpacity(iValue); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUGroupPreviewHiddenObjectsOpacityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUGroupPreviewHiddenObjectsOpacityInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUGroupPreviewHiddenObjectsOpacityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUGroupPreviewHiddenObjectsOpacityLock(iLocked); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL & oIsLowInt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&oIsLowInt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUGroupPreviewHiddenObjectsLowInt(oIsLowInt); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&oIsLowInt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUGroupPreviewHiddenObjectsLowInt(CAT_VARIANT_BOOL iIsLowInt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iIsLowInt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUGroupPreviewHiddenObjectsLowInt(iIsLowInt); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iIsLowInt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUGroupPreviewHiddenObjectsLowIntInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUGroupPreviewHiddenObjectsLowIntInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUGroupPreviewHiddenObjectsLowIntLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUGroupPreviewHiddenObjectsLowIntLock(iLocked); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL & oIsPickable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oIsPickable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUGroupPreviewHiddenObjectsPick(oIsPickable); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oIsPickable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_DMUGroupPreviewHiddenObjectsPick(CAT_VARIANT_BOOL iIsPickable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iIsPickable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUGroupPreviewHiddenObjectsPick(iIsPickable); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iIsPickable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetDMUGroupPreviewHiddenObjectsPickInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUGroupPreviewHiddenObjectsPickInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetDMUGroupPreviewHiddenObjectsPickLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUGroupPreviewHiddenObjectsPickLock(iLocked); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2,&oRed,&oGreen,&oBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsColor(oRed,oGreen,oBlue); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2,&iRed,&iGreen,&iBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsColor(iRed,iGreen,iBlue); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsColorLock(iLocked); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerTextColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2,&oRed,&oGreen,&oBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextColor(oRed,oGreen,oBlue); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerTextColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2,&iRed,&iGreen,&iBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextColor(iRed,iGreen,iBlue); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerTextColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextColorLock(iLocked); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_MarkerDefaultsWeight(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerDefaultsWeight(oValue); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_MarkerDefaultsWeight(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerDefaultsWeight(iValue); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,131,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsWeightInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,131,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,132,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsWeightLock(iLocked); \
   ExitAfterCall(this,132,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_MarkerDefaultsDashed(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,133,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerDefaultsDashed(oValue); \
   ExitAfterCall(this,133,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_MarkerDefaultsDashed(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,134,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerDefaultsDashed(iValue); \
   ExitAfterCall(this,134,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,135,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsDashedInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,135,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,136,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsDashedLock(iLocked); \
   ExitAfterCall(this,136,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_MarkerDefaultsSize(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,137,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerDefaultsSize(oValue); \
   ExitAfterCall(this,137,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_MarkerDefaultsSize(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,138,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerDefaultsSize(iValue); \
   ExitAfterCall(this,138,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerDefaultsSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,139,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsSizeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,139,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerDefaultsSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,140,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsSizeLock(iLocked); \
   ExitAfterCall(this,140,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_MarkerDefaultsFont(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,141,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerDefaultsFont(oValue); \
   ExitAfterCall(this,141,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_MarkerDefaultsFont(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,142,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerDefaultsFont(iValue); \
   ExitAfterCall(this,142,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerDefaultsFontInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,143,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsFontInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,143,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerDefaultsFontLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,144,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsFontLock(iLocked); \
   ExitAfterCall(this,144,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_MarkerTextDashed(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,145,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextDashed(oValue); \
   ExitAfterCall(this,145,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_MarkerTextDashed(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,146,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextDashed(iValue); \
   ExitAfterCall(this,146,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerTextDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,147,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextDashedInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,147,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerTextDashedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,148,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextDashedLock(iLocked); \
   ExitAfterCall(this,148,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_MarkerTextWeight(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,149,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextWeight(oValue); \
   ExitAfterCall(this,149,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_MarkerTextWeight(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,150,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextWeight(iValue); \
   ExitAfterCall(this,150,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarkerTextWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,151,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextWeightInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,151,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarkerTextWeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,152,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextWeightLock(iLocked); \
   ExitAfterCall(this,152,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,153,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker2DAutoNaming(oIsActive); \
   ExitAfterCall(this,153,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,154,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Marker2DAutoNaming(iIsActive); \
   ExitAfterCall(this,154,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,155,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarker2DAutoNamingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,155,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,156,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarker2DAutoNamingLock(iLocked); \
   ExitAfterCall(this,156,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,157,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker3DAutoNaming(oIsActive); \
   ExitAfterCall(this,157,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,158,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Marker3DAutoNaming(iIsActive); \
   ExitAfterCall(this,158,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,159,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarker3DAutoNamingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,159,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,160,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarker3DAutoNamingLock(iLocked); \
   ExitAfterCall(this,160,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,161,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,161,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,162,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,162,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,163,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,163,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,164,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,164,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,165,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,165,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,166,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,166,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,167,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,167,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,168,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,168,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,169,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,169,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAN4DNavigatorSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,170,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,170,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
declare_TIE_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAN4DNavigatorSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAN4DNavigatorSettingAtt,"CATIAN4DNavigatorSettingAtt",CATIAN4DNavigatorSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAN4DNavigatorSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAN4DNavigatorSettingAtt##classe(classe::MetaObject(),CATIAN4DNavigatorSettingAtt::MetaObject(),(void *)CreateTIECATIAN4DNavigatorSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
declare_TIE_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAN4DNavigatorSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAN4DNavigatorSettingAtt,"CATIAN4DNavigatorSettingAtt",CATIAN4DNavigatorSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAN4DNavigatorSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAN4DNavigatorSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAN4DNavigatorSettingAtt##classe(classe::MetaObject(),CATIAN4DNavigatorSettingAtt::MetaObject(),(void *)CreateTIECATIAN4DNavigatorSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAN4DNavigatorSettingAtt(classe) TIE_CATIAN4DNavigatorSettingAtt(classe)
#else
#define BOA_CATIAN4DNavigatorSettingAtt(classe) CATImplementBOA(CATIAN4DNavigatorSettingAtt, classe)
#endif

#endif
