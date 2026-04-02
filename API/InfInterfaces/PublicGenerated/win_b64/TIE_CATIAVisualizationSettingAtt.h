#ifndef __TIE_CATIAVisualizationSettingAtt
#define __TIE_CATIAVisualizationSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAVisualizationSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAVisualizationSettingAtt */
#define declare_TIE_CATIAVisualizationSettingAtt(classe) \
 \
 \
class TIECATIAVisualizationSettingAtt##classe : public CATIAVisualizationSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAVisualizationSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ColorBackgroundMode(CAT_VARIANT_BOOL & oColorBackgroundMode); \
      virtual HRESULT __stdcall put_ColorBackgroundMode(CAT_VARIANT_BOOL iColorBackgroundMode); \
      virtual HRESULT __stdcall GetColorBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetColorBackgroundModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBackgroundRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetNoShowBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetNoShowBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetNoShowBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNoShowBackgroundRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSelectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetSelectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetSelectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSelectedElementRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSelectedEdgeRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetSelectedEdgeRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetSelectedEdgeRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSelectedEdgeRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetPreselectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetPreselectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetPreselectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreselectedElementRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreselectedElementLinetype(CATLONG & oPreselectedElementLinetype); \
      virtual HRESULT __stdcall put_PreselectedElementLinetype(CATLONG iPreselectedElementLinetype); \
      virtual HRESULT __stdcall GetPreselectedElementLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreselectedElementLinetypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetUnderIntensifiedRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetUnderIntensifiedRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetUnderIntensifiedRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUnderIntensifiedRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetUpdateNeededRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetUpdateNeededRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetUpdateNeededRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUpdateNeededRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetHandlesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetHandlesRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetHandlesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetHandlesRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BorderEdgesMode(CAT_VARIANT_BOOL & oBorderEdgesMode); \
      virtual HRESULT __stdcall put_BorderEdgesMode(CAT_VARIANT_BOOL iBorderEdgesMode); \
      virtual HRESULT __stdcall GetBorderEdgesModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBorderEdgesModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetBorderEdgesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetBorderEdgesRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetBorderEdgesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBorderEdgesRGBLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BorderEdgesThickness(CATLONG & oBorderEdgesThickness); \
      virtual HRESULT __stdcall put_BorderEdgesThickness(CATLONG iBorderEdgesThickness); \
      virtual HRESULT __stdcall GetBorderEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBorderEdgesThicknessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AllZBufferElementMode(CAT_VARIANT_BOOL & oAllZBufferElementMode); \
      virtual HRESULT __stdcall put_AllZBufferElementMode(CAT_VARIANT_BOOL iAllZBufferElementMode); \
      virtual HRESULT __stdcall GetAllZBufferElementModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAllZBufferElementModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AntiAliasingMode(CAT_VARIANT_BOOL & oAntiAliasingMode); \
      virtual HRESULT __stdcall put_AntiAliasingMode(CAT_VARIANT_BOOL iAntiAliasingMode); \
      virtual HRESULT __stdcall GetAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AntiAliasingOffset(double & oAntiAliasingOffset); \
      virtual HRESULT __stdcall put_AntiAliasingOffset(double iAntiAliasingOffset); \
      virtual HRESULT __stdcall GetAntiAliasingOffsetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAntiAliasingOffsetLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode & oFullSceneAntiAliasingMode); \
      virtual HRESULT __stdcall put_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode iFullSceneAntiAliasingMode); \
      virtual HRESULT __stdcall GetFullSceneAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFullSceneAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_StereoMode(CAT_VARIANT_BOOL & oStereoMode); \
      virtual HRESULT __stdcall put_StereoMode(CAT_VARIANT_BOOL iStereoMode); \
      virtual HRESULT __stdcall GetStereoModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetStereoModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayCurrentScale(CAT_VARIANT_BOOL & oDisplayCurrentScale); \
      virtual HRESULT __stdcall put_DisplayCurrentScale(CAT_VARIANT_BOOL iDisplayCurrentScale); \
      virtual HRESULT __stdcall GetDisplayCurrentScaleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayCurrentScaleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreSelectionMode(CAT_VARIANT_BOOL & ioPreSelectionMode); \
      virtual HRESULT __stdcall put_PreSelectionMode(CAT_VARIANT_BOOL iPreSelectionMode); \
      virtual HRESULT __stdcall GetPreSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreSelectionModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL & ioOtherSelectionTimeoutActivity); \
      virtual HRESULT __stdcall put_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL iOtherSelectionTimeoutActivity); \
      virtual HRESULT __stdcall GetOtherSelectionTimeoutActivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOtherSelectionTimeoutActivityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OtherSelectionTimeout(double & ioOtherSelectionTimeout); \
      virtual HRESULT __stdcall put_OtherSelectionTimeout(double iOtherSelectionTimeout); \
      virtual HRESULT __stdcall GetOtherSelectionTimeoutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOtherSelectionTimeoutLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL & ioPreSelNavigatorStartedByArrowKeys); \
      virtual HRESULT __stdcall put_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL iPreSelNavigatorStartedByArrowKeys); \
      virtual HRESULT __stdcall GetPreSelNavigatorStartedByArrowKeysInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreSelNavigatorStartedByArrowKeysLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NoZBufferSelectionMode(CAT_VARIANT_BOOL & ioNoZBufferSelectionMode); \
      virtual HRESULT __stdcall put_NoZBufferSelectionMode(CAT_VARIANT_BOOL iNoZBufferSelectionMode); \
      virtual HRESULT __stdcall GetNoZBufferSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNoZBufferSelectionModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BoundingBoxSelectionMode(CAT_VARIANT_BOOL & ioBoundingBoxSelectionMode); \
      virtual HRESULT __stdcall put_BoundingBoxSelectionMode(CAT_VARIANT_BOOL iBoundingBoxSelectionMode); \
      virtual HRESULT __stdcall GetBoundingBoxSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBoundingBoxSelectionModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MaxSelectionMove(CATLONG & ioMaxSelectionMove); \
      virtual HRESULT __stdcall put_MaxSelectionMove(CATLONG iMaxSelectionMove); \
      virtual HRESULT __stdcall GetMaxSelectionMoveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMaxSelectionMoveLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayDrillList(CAT_VARIANT_BOOL & ioDisplayDrillList); \
      virtual HRESULT __stdcall put_DisplayDrillList(CAT_VARIANT_BOOL iDisplayDrillList); \
      virtual HRESULT __stdcall GetDisplayDrillListInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayDrillListLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AuxiliaryDrillViewer(CAT_VARIANT_BOOL & ioAuxiliaryDrillViewer); \
      virtual HRESULT __stdcall put_AuxiliaryDrillViewer(CAT_VARIANT_BOOL iAuxiliaryDrillViewer); \
      virtual HRESULT __stdcall GetAuxiliaryDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAuxiliaryDrillViewerLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FaceHLDrill(CAT_VARIANT_BOOL & ioFaceHLDrill); \
      virtual HRESULT __stdcall put_FaceHLDrill(CAT_VARIANT_BOOL iFaceHLDrill); \
      virtual HRESULT __stdcall GetFaceHLDrillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFaceHLDrillLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL & ioDisplayImmersiveDrillViewer); \
      virtual HRESULT __stdcall put_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL iDisplayImmersiveDrillViewer); \
      virtual HRESULT __stdcall GetDisplayImmersiveDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayImmersiveDrillViewerLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Gravity(CAT_VARIANT_BOOL & ioGravity); \
      virtual HRESULT __stdcall put_Gravity(CAT_VARIANT_BOOL iGravity); \
      virtual HRESULT __stdcall GetGravityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGravityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_GravityAxis(CATLONG & ioGravityAxis); \
      virtual HRESULT __stdcall put_GravityAxis(CATLONG iGravityAxis); \
      virtual HRESULT __stdcall GetGravityAxisInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGravityAxisLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FollowGroundMode(CAT_VARIANT_BOOL & ioFollowGroundMode); \
      virtual HRESULT __stdcall put_FollowGroundMode(CAT_VARIANT_BOOL iFollowGroundMode); \
      virtual HRESULT __stdcall GetFollowGroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFollowGroundModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FollowGroundAltitude(double & ioFollowGroundAltitude); \
      virtual HRESULT __stdcall put_FollowGroundAltitude(double iFollowGroundAltitude); \
      virtual HRESULT __stdcall GetFollowGroundAltitudeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFollowGroundAltitudeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewpointAnimationMode(CAT_VARIANT_BOOL & ioViewpointAnimationMode); \
      virtual HRESULT __stdcall put_ViewpointAnimationMode(CAT_VARIANT_BOOL iViewpointAnimationMode); \
      virtual HRESULT __stdcall GetViewpointAnimationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewpointAnimationModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_RotationSphereMode(CAT_VARIANT_BOOL & ioRotationSphereMode); \
      virtual HRESULT __stdcall put_RotationSphereMode(CAT_VARIANT_BOOL iRotationSphereMode); \
      virtual HRESULT __stdcall GetRotationSphereModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetRotationSphereModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FlyCollisionMode(CAT_VARIANT_BOOL & ioFlyCollisionMode); \
      virtual HRESULT __stdcall put_FlyCollisionMode(CAT_VARIANT_BOOL iFlyCollisionMode); \
      virtual HRESULT __stdcall GetFlyCollisionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFlyCollisionModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FlyCollisionType(CATLONG & ioFlyCollisionType); \
      virtual HRESULT __stdcall put_FlyCollisionType(CATLONG iFlyCollisionType); \
      virtual HRESULT __stdcall GetFlyCollisionTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFlyCollisionTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FlyCollisionSphereRadius(double & ioFlyCollisionSphereRadius); \
      virtual HRESULT __stdcall put_FlyCollisionSphereRadius(double iFlyCollisionSphereRadius); \
      virtual HRESULT __stdcall GetFlyCollisionSphereRadiusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFlyCollisionSphereRadiusLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FlySensitivity(CATLONG & ioFlySensitivity); \
      virtual HRESULT __stdcall put_FlySensitivity(CATLONG iFlySensitivity); \
      virtual HRESULT __stdcall GetFlySensitivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFlySensitivityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FlySpeedMode(CATLONG & ioFlySpeedMode); \
      virtual HRESULT __stdcall put_FlySpeedMode(CATLONG iFlySpeedMode); \
      virtual HRESULT __stdcall GetFlySpeedModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFlySpeedModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FlySpeed(CATLONG & ioFlySpeed); \
      virtual HRESULT __stdcall put_FlySpeed(CATLONG iFlySpeed); \
      virtual HRESULT __stdcall GetFlySpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFlySpeedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MouseSpeedValue(CATLONG & ioMouseSpeedValue); \
      virtual HRESULT __stdcall put_MouseSpeedValue(CATLONG iMouseSpeedValue); \
      virtual HRESULT __stdcall GetMouseSpeedValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMouseSpeedValueLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_KeyboardRotationAngleValue(CATLONG & ioKeyboardRotationAngleValue); \
      virtual HRESULT __stdcall put_KeyboardRotationAngleValue(CATLONG iKeyboardRotationAngleValue); \
      virtual HRESULT __stdcall GetKeyboardRotationAngleValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetKeyboardRotationAngleValueLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OcclusionCullingMode(CAT_VARIANT_BOOL & ioOcclusionCullingMode); \
      virtual HRESULT __stdcall put_OcclusionCullingMode(CAT_VARIANT_BOOL iOcclusionCullingMode); \
      virtual HRESULT __stdcall GetOcclusionCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOcclusionCullingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Viz3DAccuracyMode(CAT_VARIANT_BOOL & io3DAccuracyMode); \
      virtual HRESULT __stdcall put_Viz3DAccuracyMode(CAT_VARIANT_BOOL i3DAccuracyMode); \
      virtual HRESULT __stdcall GetViz3DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViz3DAccuracyModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Viz3DProportionnalAccuracy(double & io3DProportionnalAccuracy); \
      virtual HRESULT __stdcall put_Viz3DProportionnalAccuracy(double i3DProportionnalAccuracy); \
      virtual HRESULT __stdcall GetViz3DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViz3DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Viz3DFixedAccuracy(double & io3DFixedAccuracy); \
      virtual HRESULT __stdcall put_Viz3DFixedAccuracy(double i3DFixedAccuracy); \
      virtual HRESULT __stdcall GetViz3DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViz3DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Viz3DCurveAccuracy(double & io3DCurveAccuracy); \
      virtual HRESULT __stdcall put_Viz3DCurveAccuracy(double i3DCurveAccuracy); \
      virtual HRESULT __stdcall GetViz3DCurveAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViz3DCurveAccuracyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Viz2DAccuracyMode(CAT_VARIANT_BOOL & io2DAccuracyMode); \
      virtual HRESULT __stdcall put_Viz2DAccuracyMode(CAT_VARIANT_BOOL i2DAccuracyMode); \
      virtual HRESULT __stdcall GetViz2DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViz2DAccuracyModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Viz2DProportionnalAccuracy(double & io2DProportionnalAccuracy); \
      virtual HRESULT __stdcall put_Viz2DProportionnalAccuracy(double i2DProportionnalAccuracy); \
      virtual HRESULT __stdcall GetViz2DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViz2DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Viz2DFixedAccuracy(double & io2DFixedAccuracy); \
      virtual HRESULT __stdcall put_Viz2DFixedAccuracy(double i2DFixedAccuracy); \
      virtual HRESULT __stdcall GetViz2DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViz2DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_StaticLOD(double & ioStaticLOD); \
      virtual HRESULT __stdcall put_StaticLOD(double iStaticLOD); \
      virtual HRESULT __stdcall GetStaticLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetStaticLODLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DynamicLOD(double & ioDynamicLOD); \
      virtual HRESULT __stdcall put_DynamicLOD(double iDynamicLOD); \
      virtual HRESULT __stdcall GetDynamicLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDynamicLODLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_StaticCull(CATLONG & ioStaticCull); \
      virtual HRESULT __stdcall put_StaticCull(CATLONG iStaticCull); \
      virtual HRESULT __stdcall GetStaticCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetStaticCullLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DynamicCull(CATLONG & ioDynamicCull); \
      virtual HRESULT __stdcall put_DynamicCull(CATLONG iDynamicCull); \
      virtual HRESULT __stdcall GetDynamicCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDynamicCullLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TransparencyMode(CAT_VARIANT_BOOL & ioTransparencyMode); \
      virtual HRESULT __stdcall put_TransparencyMode(CAT_VARIANT_BOOL iTransparencyMode); \
      virtual HRESULT __stdcall GetTransparencyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTransparencyModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MinimumFPSMode(CAT_VARIANT_BOOL & ioMinimumFPSMode); \
      virtual HRESULT __stdcall put_MinimumFPSMode(CAT_VARIANT_BOOL iMinimumFPSMode); \
      virtual HRESULT __stdcall GetMinimumFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMinimumFPSModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NumberOfMinimumFPS(CATLONG & ioNumberOfMinimumFPS); \
      virtual HRESULT __stdcall put_NumberOfMinimumFPS(CATLONG iNumberOfMinimumFPS); \
      virtual HRESULT __stdcall GetNumberOfMinimumFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNumberOfMinimumFPSLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MinimumSpaceFPSMode(CAT_VARIANT_BOOL & ioMinimumSpaceFPSMode); \
      virtual HRESULT __stdcall put_MinimumSpaceFPSMode(CAT_VARIANT_BOOL iMinimumSpaceFPSMode); \
      virtual HRESULT __stdcall GetMinimumSpaceFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMinimumSpaceFPSModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NumberOfMinimumSpaceFPS(CATLONG & ioNumberOfMinimumSpaceFPS); \
      virtual HRESULT __stdcall put_NumberOfMinimumSpaceFPS(CATLONG iNumberOfMinimumSpaceFPS); \
      virtual HRESULT __stdcall GetNumberOfMinimumSpaceFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNumberOfMinimumSpaceFPSLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_IsoparGenerationMode(CAT_VARIANT_BOOL & ioIsoparGenerationMode); \
      virtual HRESULT __stdcall put_IsoparGenerationMode(CAT_VARIANT_BOOL iIsoparGenerationMode); \
      virtual HRESULT __stdcall GetIsoparGenerationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetIsoparGenerationModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NbIsopars(CATLONG & ioNbIsopars); \
      virtual HRESULT __stdcall put_NbIsopars(CATLONG iNbIsopars); \
      virtual HRESULT __stdcall GetNbIsoparsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNbIsoparsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TwoSideLightingMode(CAT_VARIANT_BOOL & ioTwoSideLightingMode); \
      virtual HRESULT __stdcall put_TwoSideLightingMode(CAT_VARIANT_BOOL iTwoSideLightingMode); \
      virtual HRESULT __stdcall GetTwoSideLightingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTwoSideLightingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BackFaceCullingMode(CAT_VARIANT_BOOL & ioBackFaceCullingMode); \
      virtual HRESULT __stdcall put_BackFaceCullingMode(CAT_VARIANT_BOOL iBackFaceCullingMode); \
      virtual HRESULT __stdcall GetBackFaceCullingMode(CATBackFaceCullingMode & ioBackFaceCullingMode); \
      virtual HRESULT __stdcall PutBackFaceCullingMode(CATBackFaceCullingMode iBackFaceCullingMode); \
      virtual HRESULT __stdcall GetBackFaceCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBackFaceCullingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LightViewerMode(CAT_VARIANT_BOOL & ioLightViewerMode); \
      virtual HRESULT __stdcall put_LightViewerMode(CAT_VARIANT_BOOL iLightViewerMode); \
      virtual HRESULT __stdcall GetLightViewerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLightViewerModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LineicCgrMode(CAT_VARIANT_BOOL & ioLineicCgrMode); \
      virtual HRESULT __stdcall put_LineicCgrMode(CAT_VARIANT_BOOL iLineicCgrMode); \
      virtual HRESULT __stdcall GetLineicCgrModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLineicCgrModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ShaderMode(CAT_VARIANT_BOOL & ioShaderMode); \
      virtual HRESULT __stdcall put_ShaderMode(CAT_VARIANT_BOOL iShaderMode); \
      virtual HRESULT __stdcall GetShaderModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetShaderModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_HaloMode(CAT_VARIANT_BOOL & ioHaloMode); \
      virtual HRESULT __stdcall put_HaloMode(CAT_VARIANT_BOOL iHaloMode); \
      virtual HRESULT __stdcall GetHaloModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetHaloModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PickingWindowSize(CATLONG & ioPickingWindowSize); \
      virtual HRESULT __stdcall put_PickingWindowSize(CATLONG iPickingWindowSize); \
      virtual HRESULT __stdcall GetPickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPickingWindowSizeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AccuratePickingMode(CAT_VARIANT_BOOL & ioAccuratePickingMode); \
      virtual HRESULT __stdcall put_AccuratePickingMode(CAT_VARIANT_BOOL iAccuratePickingMode); \
      virtual HRESULT __stdcall GetAccuratePickingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAccuratePickingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AccuratePickingWindowSize(CATLONG & ioAccuratePickingWindowSize); \
      virtual HRESULT __stdcall put_AccuratePickingWindowSize(CATLONG iAccuratePickingWindowSize); \
      virtual HRESULT __stdcall GetAccuratePickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAccuratePickingWindowSizeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MouseDoubleClicDelay(CATLONG & ioMouseDoubleClicDelay); \
      virtual HRESULT __stdcall put_MouseDoubleClicDelay(CATLONG iMouseDoubleClicDelay); \
      virtual HRESULT __stdcall GetMouseDoubleClicDelayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMouseDoubleClicDelayLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AmbientActivation(CATLONG & ioAmbientActivation); \
      virtual HRESULT __stdcall put_AmbientActivation(CATLONG iAmbientActivation); \
      virtual HRESULT __stdcall GetAmbientActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAmbientActivationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultDiffuseAmbientCoefficient(double & ioDefaultDiffuseAmbientCoefficient); \
      virtual HRESULT __stdcall put_DefaultDiffuseAmbientCoefficient(double iDefaultDiffuseAmbientCoefficient); \
      virtual HRESULT __stdcall GetDefaultDiffuseAmbientCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultDiffuseAmbientCoefficientLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultSpecularCoefficient(double & ioDefaultSpecularCoefficient); \
      virtual HRESULT __stdcall put_DefaultSpecularCoefficient(double iDefaultSpecularCoefficient); \
      virtual HRESULT __stdcall GetDefaultSpecularCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultSpecularCoefficientLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultShininess(double & ioDefaultShininess); \
      virtual HRESULT __stdcall put_DefaultShininess(double iDefaultShininess); \
      virtual HRESULT __stdcall GetDefaultShininessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultShininessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OpaqueFaces(CAT_VARIANT_BOOL & oOpaqueFaces); \
      virtual HRESULT __stdcall put_OpaqueFaces(CAT_VARIANT_BOOL iOpaqueFaces); \
      virtual HRESULT __stdcall GetOpaqueFacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOpaqueFacesLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAVisualizationSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ColorBackgroundMode(CAT_VARIANT_BOOL & oColorBackgroundMode); \
virtual HRESULT __stdcall put_ColorBackgroundMode(CAT_VARIANT_BOOL iColorBackgroundMode); \
virtual HRESULT __stdcall GetColorBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetColorBackgroundModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBackgroundRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetNoShowBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetNoShowBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetNoShowBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNoShowBackgroundRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSelectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetSelectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetSelectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSelectedElementRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSelectedEdgeRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetSelectedEdgeRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetSelectedEdgeRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSelectedEdgeRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetPreselectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetPreselectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetPreselectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreselectedElementRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreselectedElementLinetype(CATLONG & oPreselectedElementLinetype); \
virtual HRESULT __stdcall put_PreselectedElementLinetype(CATLONG iPreselectedElementLinetype); \
virtual HRESULT __stdcall GetPreselectedElementLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreselectedElementLinetypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetUnderIntensifiedRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetUnderIntensifiedRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetUnderIntensifiedRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUnderIntensifiedRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetUpdateNeededRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetUpdateNeededRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetUpdateNeededRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUpdateNeededRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetHandlesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetHandlesRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetHandlesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetHandlesRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BorderEdgesMode(CAT_VARIANT_BOOL & oBorderEdgesMode); \
virtual HRESULT __stdcall put_BorderEdgesMode(CAT_VARIANT_BOOL iBorderEdgesMode); \
virtual HRESULT __stdcall GetBorderEdgesModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBorderEdgesModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetBorderEdgesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetBorderEdgesRGB(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetBorderEdgesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBorderEdgesRGBLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BorderEdgesThickness(CATLONG & oBorderEdgesThickness); \
virtual HRESULT __stdcall put_BorderEdgesThickness(CATLONG iBorderEdgesThickness); \
virtual HRESULT __stdcall GetBorderEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBorderEdgesThicknessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AllZBufferElementMode(CAT_VARIANT_BOOL & oAllZBufferElementMode); \
virtual HRESULT __stdcall put_AllZBufferElementMode(CAT_VARIANT_BOOL iAllZBufferElementMode); \
virtual HRESULT __stdcall GetAllZBufferElementModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAllZBufferElementModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AntiAliasingMode(CAT_VARIANT_BOOL & oAntiAliasingMode); \
virtual HRESULT __stdcall put_AntiAliasingMode(CAT_VARIANT_BOOL iAntiAliasingMode); \
virtual HRESULT __stdcall GetAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AntiAliasingOffset(double & oAntiAliasingOffset); \
virtual HRESULT __stdcall put_AntiAliasingOffset(double iAntiAliasingOffset); \
virtual HRESULT __stdcall GetAntiAliasingOffsetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAntiAliasingOffsetLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode & oFullSceneAntiAliasingMode); \
virtual HRESULT __stdcall put_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode iFullSceneAntiAliasingMode); \
virtual HRESULT __stdcall GetFullSceneAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFullSceneAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_StereoMode(CAT_VARIANT_BOOL & oStereoMode); \
virtual HRESULT __stdcall put_StereoMode(CAT_VARIANT_BOOL iStereoMode); \
virtual HRESULT __stdcall GetStereoModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetStereoModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayCurrentScale(CAT_VARIANT_BOOL & oDisplayCurrentScale); \
virtual HRESULT __stdcall put_DisplayCurrentScale(CAT_VARIANT_BOOL iDisplayCurrentScale); \
virtual HRESULT __stdcall GetDisplayCurrentScaleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayCurrentScaleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreSelectionMode(CAT_VARIANT_BOOL & ioPreSelectionMode); \
virtual HRESULT __stdcall put_PreSelectionMode(CAT_VARIANT_BOOL iPreSelectionMode); \
virtual HRESULT __stdcall GetPreSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreSelectionModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL & ioOtherSelectionTimeoutActivity); \
virtual HRESULT __stdcall put_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL iOtherSelectionTimeoutActivity); \
virtual HRESULT __stdcall GetOtherSelectionTimeoutActivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOtherSelectionTimeoutActivityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OtherSelectionTimeout(double & ioOtherSelectionTimeout); \
virtual HRESULT __stdcall put_OtherSelectionTimeout(double iOtherSelectionTimeout); \
virtual HRESULT __stdcall GetOtherSelectionTimeoutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOtherSelectionTimeoutLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL & ioPreSelNavigatorStartedByArrowKeys); \
virtual HRESULT __stdcall put_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL iPreSelNavigatorStartedByArrowKeys); \
virtual HRESULT __stdcall GetPreSelNavigatorStartedByArrowKeysInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreSelNavigatorStartedByArrowKeysLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NoZBufferSelectionMode(CAT_VARIANT_BOOL & ioNoZBufferSelectionMode); \
virtual HRESULT __stdcall put_NoZBufferSelectionMode(CAT_VARIANT_BOOL iNoZBufferSelectionMode); \
virtual HRESULT __stdcall GetNoZBufferSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNoZBufferSelectionModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BoundingBoxSelectionMode(CAT_VARIANT_BOOL & ioBoundingBoxSelectionMode); \
virtual HRESULT __stdcall put_BoundingBoxSelectionMode(CAT_VARIANT_BOOL iBoundingBoxSelectionMode); \
virtual HRESULT __stdcall GetBoundingBoxSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBoundingBoxSelectionModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MaxSelectionMove(CATLONG & ioMaxSelectionMove); \
virtual HRESULT __stdcall put_MaxSelectionMove(CATLONG iMaxSelectionMove); \
virtual HRESULT __stdcall GetMaxSelectionMoveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMaxSelectionMoveLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayDrillList(CAT_VARIANT_BOOL & ioDisplayDrillList); \
virtual HRESULT __stdcall put_DisplayDrillList(CAT_VARIANT_BOOL iDisplayDrillList); \
virtual HRESULT __stdcall GetDisplayDrillListInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayDrillListLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AuxiliaryDrillViewer(CAT_VARIANT_BOOL & ioAuxiliaryDrillViewer); \
virtual HRESULT __stdcall put_AuxiliaryDrillViewer(CAT_VARIANT_BOOL iAuxiliaryDrillViewer); \
virtual HRESULT __stdcall GetAuxiliaryDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAuxiliaryDrillViewerLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FaceHLDrill(CAT_VARIANT_BOOL & ioFaceHLDrill); \
virtual HRESULT __stdcall put_FaceHLDrill(CAT_VARIANT_BOOL iFaceHLDrill); \
virtual HRESULT __stdcall GetFaceHLDrillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFaceHLDrillLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL & ioDisplayImmersiveDrillViewer); \
virtual HRESULT __stdcall put_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL iDisplayImmersiveDrillViewer); \
virtual HRESULT __stdcall GetDisplayImmersiveDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayImmersiveDrillViewerLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Gravity(CAT_VARIANT_BOOL & ioGravity); \
virtual HRESULT __stdcall put_Gravity(CAT_VARIANT_BOOL iGravity); \
virtual HRESULT __stdcall GetGravityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGravityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_GravityAxis(CATLONG & ioGravityAxis); \
virtual HRESULT __stdcall put_GravityAxis(CATLONG iGravityAxis); \
virtual HRESULT __stdcall GetGravityAxisInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGravityAxisLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FollowGroundMode(CAT_VARIANT_BOOL & ioFollowGroundMode); \
virtual HRESULT __stdcall put_FollowGroundMode(CAT_VARIANT_BOOL iFollowGroundMode); \
virtual HRESULT __stdcall GetFollowGroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFollowGroundModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FollowGroundAltitude(double & ioFollowGroundAltitude); \
virtual HRESULT __stdcall put_FollowGroundAltitude(double iFollowGroundAltitude); \
virtual HRESULT __stdcall GetFollowGroundAltitudeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFollowGroundAltitudeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewpointAnimationMode(CAT_VARIANT_BOOL & ioViewpointAnimationMode); \
virtual HRESULT __stdcall put_ViewpointAnimationMode(CAT_VARIANT_BOOL iViewpointAnimationMode); \
virtual HRESULT __stdcall GetViewpointAnimationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewpointAnimationModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_RotationSphereMode(CAT_VARIANT_BOOL & ioRotationSphereMode); \
virtual HRESULT __stdcall put_RotationSphereMode(CAT_VARIANT_BOOL iRotationSphereMode); \
virtual HRESULT __stdcall GetRotationSphereModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetRotationSphereModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FlyCollisionMode(CAT_VARIANT_BOOL & ioFlyCollisionMode); \
virtual HRESULT __stdcall put_FlyCollisionMode(CAT_VARIANT_BOOL iFlyCollisionMode); \
virtual HRESULT __stdcall GetFlyCollisionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFlyCollisionModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FlyCollisionType(CATLONG & ioFlyCollisionType); \
virtual HRESULT __stdcall put_FlyCollisionType(CATLONG iFlyCollisionType); \
virtual HRESULT __stdcall GetFlyCollisionTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFlyCollisionTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FlyCollisionSphereRadius(double & ioFlyCollisionSphereRadius); \
virtual HRESULT __stdcall put_FlyCollisionSphereRadius(double iFlyCollisionSphereRadius); \
virtual HRESULT __stdcall GetFlyCollisionSphereRadiusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFlyCollisionSphereRadiusLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FlySensitivity(CATLONG & ioFlySensitivity); \
virtual HRESULT __stdcall put_FlySensitivity(CATLONG iFlySensitivity); \
virtual HRESULT __stdcall GetFlySensitivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFlySensitivityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FlySpeedMode(CATLONG & ioFlySpeedMode); \
virtual HRESULT __stdcall put_FlySpeedMode(CATLONG iFlySpeedMode); \
virtual HRESULT __stdcall GetFlySpeedModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFlySpeedModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FlySpeed(CATLONG & ioFlySpeed); \
virtual HRESULT __stdcall put_FlySpeed(CATLONG iFlySpeed); \
virtual HRESULT __stdcall GetFlySpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFlySpeedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MouseSpeedValue(CATLONG & ioMouseSpeedValue); \
virtual HRESULT __stdcall put_MouseSpeedValue(CATLONG iMouseSpeedValue); \
virtual HRESULT __stdcall GetMouseSpeedValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMouseSpeedValueLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_KeyboardRotationAngleValue(CATLONG & ioKeyboardRotationAngleValue); \
virtual HRESULT __stdcall put_KeyboardRotationAngleValue(CATLONG iKeyboardRotationAngleValue); \
virtual HRESULT __stdcall GetKeyboardRotationAngleValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetKeyboardRotationAngleValueLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OcclusionCullingMode(CAT_VARIANT_BOOL & ioOcclusionCullingMode); \
virtual HRESULT __stdcall put_OcclusionCullingMode(CAT_VARIANT_BOOL iOcclusionCullingMode); \
virtual HRESULT __stdcall GetOcclusionCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOcclusionCullingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Viz3DAccuracyMode(CAT_VARIANT_BOOL & io3DAccuracyMode); \
virtual HRESULT __stdcall put_Viz3DAccuracyMode(CAT_VARIANT_BOOL i3DAccuracyMode); \
virtual HRESULT __stdcall GetViz3DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViz3DAccuracyModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Viz3DProportionnalAccuracy(double & io3DProportionnalAccuracy); \
virtual HRESULT __stdcall put_Viz3DProportionnalAccuracy(double i3DProportionnalAccuracy); \
virtual HRESULT __stdcall GetViz3DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViz3DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Viz3DFixedAccuracy(double & io3DFixedAccuracy); \
virtual HRESULT __stdcall put_Viz3DFixedAccuracy(double i3DFixedAccuracy); \
virtual HRESULT __stdcall GetViz3DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViz3DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Viz3DCurveAccuracy(double & io3DCurveAccuracy); \
virtual HRESULT __stdcall put_Viz3DCurveAccuracy(double i3DCurveAccuracy); \
virtual HRESULT __stdcall GetViz3DCurveAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViz3DCurveAccuracyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Viz2DAccuracyMode(CAT_VARIANT_BOOL & io2DAccuracyMode); \
virtual HRESULT __stdcall put_Viz2DAccuracyMode(CAT_VARIANT_BOOL i2DAccuracyMode); \
virtual HRESULT __stdcall GetViz2DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViz2DAccuracyModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Viz2DProportionnalAccuracy(double & io2DProportionnalAccuracy); \
virtual HRESULT __stdcall put_Viz2DProportionnalAccuracy(double i2DProportionnalAccuracy); \
virtual HRESULT __stdcall GetViz2DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViz2DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Viz2DFixedAccuracy(double & io2DFixedAccuracy); \
virtual HRESULT __stdcall put_Viz2DFixedAccuracy(double i2DFixedAccuracy); \
virtual HRESULT __stdcall GetViz2DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViz2DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_StaticLOD(double & ioStaticLOD); \
virtual HRESULT __stdcall put_StaticLOD(double iStaticLOD); \
virtual HRESULT __stdcall GetStaticLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetStaticLODLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DynamicLOD(double & ioDynamicLOD); \
virtual HRESULT __stdcall put_DynamicLOD(double iDynamicLOD); \
virtual HRESULT __stdcall GetDynamicLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDynamicLODLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_StaticCull(CATLONG & ioStaticCull); \
virtual HRESULT __stdcall put_StaticCull(CATLONG iStaticCull); \
virtual HRESULT __stdcall GetStaticCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetStaticCullLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DynamicCull(CATLONG & ioDynamicCull); \
virtual HRESULT __stdcall put_DynamicCull(CATLONG iDynamicCull); \
virtual HRESULT __stdcall GetDynamicCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDynamicCullLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TransparencyMode(CAT_VARIANT_BOOL & ioTransparencyMode); \
virtual HRESULT __stdcall put_TransparencyMode(CAT_VARIANT_BOOL iTransparencyMode); \
virtual HRESULT __stdcall GetTransparencyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTransparencyModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MinimumFPSMode(CAT_VARIANT_BOOL & ioMinimumFPSMode); \
virtual HRESULT __stdcall put_MinimumFPSMode(CAT_VARIANT_BOOL iMinimumFPSMode); \
virtual HRESULT __stdcall GetMinimumFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMinimumFPSModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NumberOfMinimumFPS(CATLONG & ioNumberOfMinimumFPS); \
virtual HRESULT __stdcall put_NumberOfMinimumFPS(CATLONG iNumberOfMinimumFPS); \
virtual HRESULT __stdcall GetNumberOfMinimumFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNumberOfMinimumFPSLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MinimumSpaceFPSMode(CAT_VARIANT_BOOL & ioMinimumSpaceFPSMode); \
virtual HRESULT __stdcall put_MinimumSpaceFPSMode(CAT_VARIANT_BOOL iMinimumSpaceFPSMode); \
virtual HRESULT __stdcall GetMinimumSpaceFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMinimumSpaceFPSModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NumberOfMinimumSpaceFPS(CATLONG & ioNumberOfMinimumSpaceFPS); \
virtual HRESULT __stdcall put_NumberOfMinimumSpaceFPS(CATLONG iNumberOfMinimumSpaceFPS); \
virtual HRESULT __stdcall GetNumberOfMinimumSpaceFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNumberOfMinimumSpaceFPSLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_IsoparGenerationMode(CAT_VARIANT_BOOL & ioIsoparGenerationMode); \
virtual HRESULT __stdcall put_IsoparGenerationMode(CAT_VARIANT_BOOL iIsoparGenerationMode); \
virtual HRESULT __stdcall GetIsoparGenerationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetIsoparGenerationModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NbIsopars(CATLONG & ioNbIsopars); \
virtual HRESULT __stdcall put_NbIsopars(CATLONG iNbIsopars); \
virtual HRESULT __stdcall GetNbIsoparsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNbIsoparsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TwoSideLightingMode(CAT_VARIANT_BOOL & ioTwoSideLightingMode); \
virtual HRESULT __stdcall put_TwoSideLightingMode(CAT_VARIANT_BOOL iTwoSideLightingMode); \
virtual HRESULT __stdcall GetTwoSideLightingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTwoSideLightingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BackFaceCullingMode(CAT_VARIANT_BOOL & ioBackFaceCullingMode); \
virtual HRESULT __stdcall put_BackFaceCullingMode(CAT_VARIANT_BOOL iBackFaceCullingMode); \
virtual HRESULT __stdcall GetBackFaceCullingMode(CATBackFaceCullingMode & ioBackFaceCullingMode); \
virtual HRESULT __stdcall PutBackFaceCullingMode(CATBackFaceCullingMode iBackFaceCullingMode); \
virtual HRESULT __stdcall GetBackFaceCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBackFaceCullingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LightViewerMode(CAT_VARIANT_BOOL & ioLightViewerMode); \
virtual HRESULT __stdcall put_LightViewerMode(CAT_VARIANT_BOOL iLightViewerMode); \
virtual HRESULT __stdcall GetLightViewerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLightViewerModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LineicCgrMode(CAT_VARIANT_BOOL & ioLineicCgrMode); \
virtual HRESULT __stdcall put_LineicCgrMode(CAT_VARIANT_BOOL iLineicCgrMode); \
virtual HRESULT __stdcall GetLineicCgrModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLineicCgrModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ShaderMode(CAT_VARIANT_BOOL & ioShaderMode); \
virtual HRESULT __stdcall put_ShaderMode(CAT_VARIANT_BOOL iShaderMode); \
virtual HRESULT __stdcall GetShaderModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetShaderModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_HaloMode(CAT_VARIANT_BOOL & ioHaloMode); \
virtual HRESULT __stdcall put_HaloMode(CAT_VARIANT_BOOL iHaloMode); \
virtual HRESULT __stdcall GetHaloModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetHaloModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PickingWindowSize(CATLONG & ioPickingWindowSize); \
virtual HRESULT __stdcall put_PickingWindowSize(CATLONG iPickingWindowSize); \
virtual HRESULT __stdcall GetPickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPickingWindowSizeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AccuratePickingMode(CAT_VARIANT_BOOL & ioAccuratePickingMode); \
virtual HRESULT __stdcall put_AccuratePickingMode(CAT_VARIANT_BOOL iAccuratePickingMode); \
virtual HRESULT __stdcall GetAccuratePickingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAccuratePickingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AccuratePickingWindowSize(CATLONG & ioAccuratePickingWindowSize); \
virtual HRESULT __stdcall put_AccuratePickingWindowSize(CATLONG iAccuratePickingWindowSize); \
virtual HRESULT __stdcall GetAccuratePickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAccuratePickingWindowSizeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MouseDoubleClicDelay(CATLONG & ioMouseDoubleClicDelay); \
virtual HRESULT __stdcall put_MouseDoubleClicDelay(CATLONG iMouseDoubleClicDelay); \
virtual HRESULT __stdcall GetMouseDoubleClicDelayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMouseDoubleClicDelayLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AmbientActivation(CATLONG & ioAmbientActivation); \
virtual HRESULT __stdcall put_AmbientActivation(CATLONG iAmbientActivation); \
virtual HRESULT __stdcall GetAmbientActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAmbientActivationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultDiffuseAmbientCoefficient(double & ioDefaultDiffuseAmbientCoefficient); \
virtual HRESULT __stdcall put_DefaultDiffuseAmbientCoefficient(double iDefaultDiffuseAmbientCoefficient); \
virtual HRESULT __stdcall GetDefaultDiffuseAmbientCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultDiffuseAmbientCoefficientLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultSpecularCoefficient(double & ioDefaultSpecularCoefficient); \
virtual HRESULT __stdcall put_DefaultSpecularCoefficient(double iDefaultSpecularCoefficient); \
virtual HRESULT __stdcall GetDefaultSpecularCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultSpecularCoefficientLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultShininess(double & ioDefaultShininess); \
virtual HRESULT __stdcall put_DefaultShininess(double iDefaultShininess); \
virtual HRESULT __stdcall GetDefaultShininessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultShininessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OpaqueFaces(CAT_VARIANT_BOOL & oOpaqueFaces); \
virtual HRESULT __stdcall put_OpaqueFaces(CAT_VARIANT_BOOL iOpaqueFaces); \
virtual HRESULT __stdcall GetOpaqueFacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOpaqueFacesLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAVisualizationSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ColorBackgroundMode(CAT_VARIANT_BOOL & oColorBackgroundMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ColorBackgroundMode(oColorBackgroundMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorBackgroundMode(CAT_VARIANT_BOOL iColorBackgroundMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ColorBackgroundMode(iColorBackgroundMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetColorBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetColorBackgroundModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetColorBackgroundModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetColorBackgroundModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBackgroundRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBackgroundRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBackgroundRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBackgroundRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBackgroundRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetNoShowBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNoShowBackgroundRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetNoShowBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNoShowBackgroundRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetNoShowBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNoShowBackgroundRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNoShowBackgroundRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNoShowBackgroundRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSelectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSelectedElementRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetSelectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSelectedElementRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetSelectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSelectedElementRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSelectedElementRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSelectedElementRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSelectedEdgeRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSelectedEdgeRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetSelectedEdgeRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSelectedEdgeRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetSelectedEdgeRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSelectedEdgeRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSelectedEdgeRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSelectedEdgeRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreselectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreselectedElementRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreselectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreselectedElementRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreselectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreselectedElementRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreselectedElementRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreselectedElementRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreselectedElementLinetype(CATLONG & oPreselectedElementLinetype) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreselectedElementLinetype(oPreselectedElementLinetype)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreselectedElementLinetype(CATLONG iPreselectedElementLinetype) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreselectedElementLinetype(iPreselectedElementLinetype)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreselectedElementLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreselectedElementLinetypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreselectedElementLinetypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreselectedElementLinetypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetUnderIntensifiedRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUnderIntensifiedRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnderIntensifiedRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUnderIntensifiedRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetUnderIntensifiedRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUnderIntensifiedRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnderIntensifiedRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUnderIntensifiedRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateNeededRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateNeededRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateNeededRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateNeededRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateNeededRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateNeededRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateNeededRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateNeededRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetHandlesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHandlesRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetHandlesRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHandlesRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetHandlesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHandlesRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetHandlesRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHandlesRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BorderEdgesMode(CAT_VARIANT_BOOL & oBorderEdgesMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BorderEdgesMode(oBorderEdgesMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_BorderEdgesMode(CAT_VARIANT_BOOL iBorderEdgesMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BorderEdgesMode(iBorderEdgesMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetBorderEdgesModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBorderEdgesModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBorderEdgesModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBorderEdgesModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetBorderEdgesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBorderEdgesRGB(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetBorderEdgesRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBorderEdgesRGB(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetBorderEdgesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBorderEdgesRGBInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBorderEdgesRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBorderEdgesRGBLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BorderEdgesThickness(CATLONG & oBorderEdgesThickness) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BorderEdgesThickness(oBorderEdgesThickness)); \
} \
HRESULT __stdcall  ENVTIEName::put_BorderEdgesThickness(CATLONG iBorderEdgesThickness) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BorderEdgesThickness(iBorderEdgesThickness)); \
} \
HRESULT __stdcall  ENVTIEName::GetBorderEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBorderEdgesThicknessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBorderEdgesThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBorderEdgesThicknessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllZBufferElementMode(CAT_VARIANT_BOOL & oAllZBufferElementMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AllZBufferElementMode(oAllZBufferElementMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AllZBufferElementMode(CAT_VARIANT_BOOL iAllZBufferElementMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AllZBufferElementMode(iAllZBufferElementMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllZBufferElementModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAllZBufferElementModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAllZBufferElementModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAllZBufferElementModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AntiAliasingMode(CAT_VARIANT_BOOL & oAntiAliasingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AntiAliasingMode(oAntiAliasingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AntiAliasingMode(CAT_VARIANT_BOOL iAntiAliasingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AntiAliasingMode(iAntiAliasingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAntiAliasingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAntiAliasingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AntiAliasingOffset(double & oAntiAliasingOffset) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AntiAliasingOffset(oAntiAliasingOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_AntiAliasingOffset(double iAntiAliasingOffset) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AntiAliasingOffset(iAntiAliasingOffset)); \
} \
HRESULT __stdcall  ENVTIEName::GetAntiAliasingOffsetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAntiAliasingOffsetInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAntiAliasingOffsetLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAntiAliasingOffsetLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode & oFullSceneAntiAliasingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FullSceneAntiAliasingMode(oFullSceneAntiAliasingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode iFullSceneAntiAliasingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FullSceneAntiAliasingMode(iFullSceneAntiAliasingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetFullSceneAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFullSceneAntiAliasingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFullSceneAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFullSceneAntiAliasingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_StereoMode(CAT_VARIANT_BOOL & oStereoMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_StereoMode(oStereoMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_StereoMode(CAT_VARIANT_BOOL iStereoMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_StereoMode(iStereoMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetStereoModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStereoModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetStereoModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStereoModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayCurrentScale(CAT_VARIANT_BOOL & oDisplayCurrentScale) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayCurrentScale(oDisplayCurrentScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayCurrentScale(CAT_VARIANT_BOOL iDisplayCurrentScale) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayCurrentScale(iDisplayCurrentScale)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayCurrentScaleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayCurrentScaleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayCurrentScaleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayCurrentScaleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreSelectionMode(CAT_VARIANT_BOOL & ioPreSelectionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreSelectionMode(ioPreSelectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreSelectionMode(CAT_VARIANT_BOOL iPreSelectionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreSelectionMode(iPreSelectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreSelectionModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreSelectionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreSelectionModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL & ioOtherSelectionTimeoutActivity) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OtherSelectionTimeoutActivity(ioOtherSelectionTimeoutActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL iOtherSelectionTimeoutActivity) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OtherSelectionTimeoutActivity(iOtherSelectionTimeoutActivity)); \
} \
HRESULT __stdcall  ENVTIEName::GetOtherSelectionTimeoutActivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOtherSelectionTimeoutActivityInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOtherSelectionTimeoutActivityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOtherSelectionTimeoutActivityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OtherSelectionTimeout(double & ioOtherSelectionTimeout) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OtherSelectionTimeout(ioOtherSelectionTimeout)); \
} \
HRESULT __stdcall  ENVTIEName::put_OtherSelectionTimeout(double iOtherSelectionTimeout) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OtherSelectionTimeout(iOtherSelectionTimeout)); \
} \
HRESULT __stdcall  ENVTIEName::GetOtherSelectionTimeoutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOtherSelectionTimeoutInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOtherSelectionTimeoutLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOtherSelectionTimeoutLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL & ioPreSelNavigatorStartedByArrowKeys) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreSelNavigatorStartedByArrowKeys(ioPreSelNavigatorStartedByArrowKeys)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL iPreSelNavigatorStartedByArrowKeys) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreSelNavigatorStartedByArrowKeys(iPreSelNavigatorStartedByArrowKeys)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreSelNavigatorStartedByArrowKeysInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreSelNavigatorStartedByArrowKeysInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreSelNavigatorStartedByArrowKeysLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreSelNavigatorStartedByArrowKeysLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NoZBufferSelectionMode(CAT_VARIANT_BOOL & ioNoZBufferSelectionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NoZBufferSelectionMode(ioNoZBufferSelectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_NoZBufferSelectionMode(CAT_VARIANT_BOOL iNoZBufferSelectionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NoZBufferSelectionMode(iNoZBufferSelectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetNoZBufferSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNoZBufferSelectionModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNoZBufferSelectionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNoZBufferSelectionModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BoundingBoxSelectionMode(CAT_VARIANT_BOOL & ioBoundingBoxSelectionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BoundingBoxSelectionMode(ioBoundingBoxSelectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_BoundingBoxSelectionMode(CAT_VARIANT_BOOL iBoundingBoxSelectionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BoundingBoxSelectionMode(iBoundingBoxSelectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundingBoxSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBoundingBoxSelectionModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundingBoxSelectionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBoundingBoxSelectionModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxSelectionMove(CATLONG & ioMaxSelectionMove) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MaxSelectionMove(ioMaxSelectionMove)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxSelectionMove(CATLONG iMaxSelectionMove) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MaxSelectionMove(iMaxSelectionMove)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaxSelectionMoveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMaxSelectionMoveInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMaxSelectionMoveLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMaxSelectionMoveLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayDrillList(CAT_VARIANT_BOOL & ioDisplayDrillList) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayDrillList(ioDisplayDrillList)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayDrillList(CAT_VARIANT_BOOL iDisplayDrillList) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayDrillList(iDisplayDrillList)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayDrillListInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayDrillListInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayDrillListLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayDrillListLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AuxiliaryDrillViewer(CAT_VARIANT_BOOL & ioAuxiliaryDrillViewer) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AuxiliaryDrillViewer(ioAuxiliaryDrillViewer)); \
} \
HRESULT __stdcall  ENVTIEName::put_AuxiliaryDrillViewer(CAT_VARIANT_BOOL iAuxiliaryDrillViewer) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AuxiliaryDrillViewer(iAuxiliaryDrillViewer)); \
} \
HRESULT __stdcall  ENVTIEName::GetAuxiliaryDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAuxiliaryDrillViewerInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAuxiliaryDrillViewerLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAuxiliaryDrillViewerLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FaceHLDrill(CAT_VARIANT_BOOL & ioFaceHLDrill) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FaceHLDrill(ioFaceHLDrill)); \
} \
HRESULT __stdcall  ENVTIEName::put_FaceHLDrill(CAT_VARIANT_BOOL iFaceHLDrill) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FaceHLDrill(iFaceHLDrill)); \
} \
HRESULT __stdcall  ENVTIEName::GetFaceHLDrillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFaceHLDrillInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFaceHLDrillLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFaceHLDrillLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL & ioDisplayImmersiveDrillViewer) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayImmersiveDrillViewer(ioDisplayImmersiveDrillViewer)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL iDisplayImmersiveDrillViewer) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayImmersiveDrillViewer(iDisplayImmersiveDrillViewer)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayImmersiveDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayImmersiveDrillViewerInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayImmersiveDrillViewerLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayImmersiveDrillViewerLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Gravity(CAT_VARIANT_BOOL & ioGravity) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Gravity(ioGravity)); \
} \
HRESULT __stdcall  ENVTIEName::put_Gravity(CAT_VARIANT_BOOL iGravity) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Gravity(iGravity)); \
} \
HRESULT __stdcall  ENVTIEName::GetGravityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGravityInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGravityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGravityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_GravityAxis(CATLONG & ioGravityAxis) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GravityAxis(ioGravityAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_GravityAxis(CATLONG iGravityAxis) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GravityAxis(iGravityAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetGravityAxisInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGravityAxisInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGravityAxisLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGravityAxisLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FollowGroundMode(CAT_VARIANT_BOOL & ioFollowGroundMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FollowGroundMode(ioFollowGroundMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FollowGroundMode(CAT_VARIANT_BOOL iFollowGroundMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FollowGroundMode(iFollowGroundMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetFollowGroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFollowGroundModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFollowGroundModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFollowGroundModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FollowGroundAltitude(double & ioFollowGroundAltitude) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FollowGroundAltitude(ioFollowGroundAltitude)); \
} \
HRESULT __stdcall  ENVTIEName::put_FollowGroundAltitude(double iFollowGroundAltitude) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FollowGroundAltitude(iFollowGroundAltitude)); \
} \
HRESULT __stdcall  ENVTIEName::GetFollowGroundAltitudeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFollowGroundAltitudeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFollowGroundAltitudeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFollowGroundAltitudeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewpointAnimationMode(CAT_VARIANT_BOOL & ioViewpointAnimationMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewpointAnimationMode(ioViewpointAnimationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewpointAnimationMode(CAT_VARIANT_BOOL iViewpointAnimationMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewpointAnimationMode(iViewpointAnimationMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewpointAnimationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewpointAnimationModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewpointAnimationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewpointAnimationModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationSphereMode(CAT_VARIANT_BOOL & ioRotationSphereMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RotationSphereMode(ioRotationSphereMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RotationSphereMode(CAT_VARIANT_BOOL iRotationSphereMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RotationSphereMode(iRotationSphereMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetRotationSphereModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRotationSphereModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetRotationSphereModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRotationSphereModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlyCollisionMode(CAT_VARIANT_BOOL & ioFlyCollisionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FlyCollisionMode(ioFlyCollisionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlyCollisionMode(CAT_VARIANT_BOOL iFlyCollisionMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FlyCollisionMode(iFlyCollisionMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetFlyCollisionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFlyCollisionModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFlyCollisionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFlyCollisionModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlyCollisionType(CATLONG & ioFlyCollisionType) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FlyCollisionType(ioFlyCollisionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlyCollisionType(CATLONG iFlyCollisionType) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FlyCollisionType(iFlyCollisionType)); \
} \
HRESULT __stdcall  ENVTIEName::GetFlyCollisionTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFlyCollisionTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFlyCollisionTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFlyCollisionTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlyCollisionSphereRadius(double & ioFlyCollisionSphereRadius) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FlyCollisionSphereRadius(ioFlyCollisionSphereRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlyCollisionSphereRadius(double iFlyCollisionSphereRadius) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FlyCollisionSphereRadius(iFlyCollisionSphereRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetFlyCollisionSphereRadiusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFlyCollisionSphereRadiusInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFlyCollisionSphereRadiusLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFlyCollisionSphereRadiusLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlySensitivity(CATLONG & ioFlySensitivity) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FlySensitivity(ioFlySensitivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlySensitivity(CATLONG iFlySensitivity) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FlySensitivity(iFlySensitivity)); \
} \
HRESULT __stdcall  ENVTIEName::GetFlySensitivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFlySensitivityInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFlySensitivityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFlySensitivityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlySpeedMode(CATLONG & ioFlySpeedMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FlySpeedMode(ioFlySpeedMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlySpeedMode(CATLONG iFlySpeedMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FlySpeedMode(iFlySpeedMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetFlySpeedModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFlySpeedModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFlySpeedModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFlySpeedModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlySpeed(CATLONG & ioFlySpeed) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FlySpeed(ioFlySpeed)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlySpeed(CATLONG iFlySpeed) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FlySpeed(iFlySpeed)); \
} \
HRESULT __stdcall  ENVTIEName::GetFlySpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFlySpeedInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFlySpeedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFlySpeedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MouseSpeedValue(CATLONG & ioMouseSpeedValue) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MouseSpeedValue(ioMouseSpeedValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MouseSpeedValue(CATLONG iMouseSpeedValue) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MouseSpeedValue(iMouseSpeedValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMouseSpeedValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMouseSpeedValueInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMouseSpeedValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMouseSpeedValueLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_KeyboardRotationAngleValue(CATLONG & ioKeyboardRotationAngleValue) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_KeyboardRotationAngleValue(ioKeyboardRotationAngleValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_KeyboardRotationAngleValue(CATLONG iKeyboardRotationAngleValue) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_KeyboardRotationAngleValue(iKeyboardRotationAngleValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetKeyboardRotationAngleValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetKeyboardRotationAngleValueInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetKeyboardRotationAngleValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetKeyboardRotationAngleValueLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OcclusionCullingMode(CAT_VARIANT_BOOL & ioOcclusionCullingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OcclusionCullingMode(ioOcclusionCullingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_OcclusionCullingMode(CAT_VARIANT_BOOL iOcclusionCullingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OcclusionCullingMode(iOcclusionCullingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetOcclusionCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOcclusionCullingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOcclusionCullingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOcclusionCullingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viz3DAccuracyMode(CAT_VARIANT_BOOL & io3DAccuracyMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Viz3DAccuracyMode(io3DAccuracyMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viz3DAccuracyMode(CAT_VARIANT_BOOL i3DAccuracyMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Viz3DAccuracyMode(i3DAccuracyMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetViz3DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViz3DAccuracyModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViz3DAccuracyModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViz3DAccuracyModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viz3DProportionnalAccuracy(double & io3DProportionnalAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Viz3DProportionnalAccuracy(io3DProportionnalAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viz3DProportionnalAccuracy(double i3DProportionnalAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Viz3DProportionnalAccuracy(i3DProportionnalAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::GetViz3DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViz3DProportionnalAccuracyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViz3DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViz3DProportionnalAccuracyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viz3DFixedAccuracy(double & io3DFixedAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Viz3DFixedAccuracy(io3DFixedAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viz3DFixedAccuracy(double i3DFixedAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Viz3DFixedAccuracy(i3DFixedAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::GetViz3DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViz3DFixedAccuracyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViz3DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViz3DFixedAccuracyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viz3DCurveAccuracy(double & io3DCurveAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Viz3DCurveAccuracy(io3DCurveAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viz3DCurveAccuracy(double i3DCurveAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Viz3DCurveAccuracy(i3DCurveAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::GetViz3DCurveAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViz3DCurveAccuracyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViz3DCurveAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViz3DCurveAccuracyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viz2DAccuracyMode(CAT_VARIANT_BOOL & io2DAccuracyMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Viz2DAccuracyMode(io2DAccuracyMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viz2DAccuracyMode(CAT_VARIANT_BOOL i2DAccuracyMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Viz2DAccuracyMode(i2DAccuracyMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetViz2DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViz2DAccuracyModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViz2DAccuracyModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViz2DAccuracyModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viz2DProportionnalAccuracy(double & io2DProportionnalAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Viz2DProportionnalAccuracy(io2DProportionnalAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viz2DProportionnalAccuracy(double i2DProportionnalAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Viz2DProportionnalAccuracy(i2DProportionnalAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::GetViz2DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViz2DProportionnalAccuracyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViz2DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViz2DProportionnalAccuracyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viz2DFixedAccuracy(double & io2DFixedAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Viz2DFixedAccuracy(io2DFixedAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viz2DFixedAccuracy(double i2DFixedAccuracy) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Viz2DFixedAccuracy(i2DFixedAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::GetViz2DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViz2DFixedAccuracyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViz2DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViz2DFixedAccuracyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_StaticLOD(double & ioStaticLOD) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_StaticLOD(ioStaticLOD)); \
} \
HRESULT __stdcall  ENVTIEName::put_StaticLOD(double iStaticLOD) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_StaticLOD(iStaticLOD)); \
} \
HRESULT __stdcall  ENVTIEName::GetStaticLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStaticLODInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetStaticLODLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStaticLODLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DynamicLOD(double & ioDynamicLOD) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DynamicLOD(ioDynamicLOD)); \
} \
HRESULT __stdcall  ENVTIEName::put_DynamicLOD(double iDynamicLOD) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DynamicLOD(iDynamicLOD)); \
} \
HRESULT __stdcall  ENVTIEName::GetDynamicLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDynamicLODInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDynamicLODLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDynamicLODLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_StaticCull(CATLONG & ioStaticCull) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_StaticCull(ioStaticCull)); \
} \
HRESULT __stdcall  ENVTIEName::put_StaticCull(CATLONG iStaticCull) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_StaticCull(iStaticCull)); \
} \
HRESULT __stdcall  ENVTIEName::GetStaticCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStaticCullInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetStaticCullLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStaticCullLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DynamicCull(CATLONG & ioDynamicCull) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DynamicCull(ioDynamicCull)); \
} \
HRESULT __stdcall  ENVTIEName::put_DynamicCull(CATLONG iDynamicCull) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DynamicCull(iDynamicCull)); \
} \
HRESULT __stdcall  ENVTIEName::GetDynamicCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDynamicCullInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDynamicCullLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDynamicCullLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TransparencyMode(CAT_VARIANT_BOOL & ioTransparencyMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TransparencyMode(ioTransparencyMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_TransparencyMode(CAT_VARIANT_BOOL iTransparencyMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TransparencyMode(iTransparencyMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetTransparencyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTransparencyModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTransparencyModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTransparencyModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinimumFPSMode(CAT_VARIANT_BOOL & ioMinimumFPSMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MinimumFPSMode(ioMinimumFPSMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_MinimumFPSMode(CAT_VARIANT_BOOL iMinimumFPSMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MinimumFPSMode(iMinimumFPSMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetMinimumFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMinimumFPSModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMinimumFPSModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMinimumFPSModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfMinimumFPS(CATLONG & ioNumberOfMinimumFPS) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NumberOfMinimumFPS(ioNumberOfMinimumFPS)); \
} \
HRESULT __stdcall  ENVTIEName::put_NumberOfMinimumFPS(CATLONG iNumberOfMinimumFPS) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NumberOfMinimumFPS(iNumberOfMinimumFPS)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfMinimumFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNumberOfMinimumFPSInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNumberOfMinimumFPSLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNumberOfMinimumFPSLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinimumSpaceFPSMode(CAT_VARIANT_BOOL & ioMinimumSpaceFPSMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MinimumSpaceFPSMode(ioMinimumSpaceFPSMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_MinimumSpaceFPSMode(CAT_VARIANT_BOOL iMinimumSpaceFPSMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MinimumSpaceFPSMode(iMinimumSpaceFPSMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetMinimumSpaceFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMinimumSpaceFPSModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMinimumSpaceFPSModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMinimumSpaceFPSModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfMinimumSpaceFPS(CATLONG & ioNumberOfMinimumSpaceFPS) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NumberOfMinimumSpaceFPS(ioNumberOfMinimumSpaceFPS)); \
} \
HRESULT __stdcall  ENVTIEName::put_NumberOfMinimumSpaceFPS(CATLONG iNumberOfMinimumSpaceFPS) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NumberOfMinimumSpaceFPS(iNumberOfMinimumSpaceFPS)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfMinimumSpaceFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNumberOfMinimumSpaceFPSInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNumberOfMinimumSpaceFPSLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNumberOfMinimumSpaceFPSLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsoparGenerationMode(CAT_VARIANT_BOOL & ioIsoparGenerationMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_IsoparGenerationMode(ioIsoparGenerationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsoparGenerationMode(CAT_VARIANT_BOOL iIsoparGenerationMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_IsoparGenerationMode(iIsoparGenerationMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetIsoparGenerationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetIsoparGenerationModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetIsoparGenerationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetIsoparGenerationModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbIsopars(CATLONG & ioNbIsopars) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NbIsopars(ioNbIsopars)); \
} \
HRESULT __stdcall  ENVTIEName::put_NbIsopars(CATLONG iNbIsopars) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NbIsopars(iNbIsopars)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbIsoparsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNbIsoparsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNbIsoparsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNbIsoparsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TwoSideLightingMode(CAT_VARIANT_BOOL & ioTwoSideLightingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TwoSideLightingMode(ioTwoSideLightingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_TwoSideLightingMode(CAT_VARIANT_BOOL iTwoSideLightingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TwoSideLightingMode(iTwoSideLightingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetTwoSideLightingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTwoSideLightingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTwoSideLightingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTwoSideLightingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BackFaceCullingMode(CAT_VARIANT_BOOL & ioBackFaceCullingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BackFaceCullingMode(ioBackFaceCullingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_BackFaceCullingMode(CAT_VARIANT_BOOL iBackFaceCullingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BackFaceCullingMode(iBackFaceCullingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackFaceCullingMode(CATBackFaceCullingMode & ioBackFaceCullingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBackFaceCullingMode(ioBackFaceCullingMode)); \
} \
HRESULT __stdcall  ENVTIEName::PutBackFaceCullingMode(CATBackFaceCullingMode iBackFaceCullingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)PutBackFaceCullingMode(iBackFaceCullingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackFaceCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBackFaceCullingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBackFaceCullingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBackFaceCullingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LightViewerMode(CAT_VARIANT_BOOL & ioLightViewerMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LightViewerMode(ioLightViewerMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LightViewerMode(CAT_VARIANT_BOOL iLightViewerMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LightViewerMode(iLightViewerMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetLightViewerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLightViewerModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLightViewerModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLightViewerModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineicCgrMode(CAT_VARIANT_BOOL & ioLineicCgrMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LineicCgrMode(ioLineicCgrMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LineicCgrMode(CAT_VARIANT_BOOL iLineicCgrMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LineicCgrMode(iLineicCgrMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetLineicCgrModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLineicCgrModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLineicCgrModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLineicCgrModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShaderMode(CAT_VARIANT_BOOL & ioShaderMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ShaderMode(ioShaderMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShaderMode(CAT_VARIANT_BOOL iShaderMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ShaderMode(iShaderMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetShaderModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShaderModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetShaderModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShaderModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_HaloMode(CAT_VARIANT_BOOL & ioHaloMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_HaloMode(ioHaloMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_HaloMode(CAT_VARIANT_BOOL iHaloMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_HaloMode(iHaloMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetHaloModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHaloModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetHaloModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHaloModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PickingWindowSize(CATLONG & ioPickingWindowSize) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PickingWindowSize(ioPickingWindowSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_PickingWindowSize(CATLONG iPickingWindowSize) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PickingWindowSize(iPickingWindowSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetPickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPickingWindowSizeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPickingWindowSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPickingWindowSizeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AccuratePickingMode(CAT_VARIANT_BOOL & ioAccuratePickingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AccuratePickingMode(ioAccuratePickingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AccuratePickingMode(CAT_VARIANT_BOOL iAccuratePickingMode) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AccuratePickingMode(iAccuratePickingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAccuratePickingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAccuratePickingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAccuratePickingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAccuratePickingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AccuratePickingWindowSize(CATLONG & ioAccuratePickingWindowSize) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AccuratePickingWindowSize(ioAccuratePickingWindowSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_AccuratePickingWindowSize(CATLONG iAccuratePickingWindowSize) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AccuratePickingWindowSize(iAccuratePickingWindowSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetAccuratePickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAccuratePickingWindowSizeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAccuratePickingWindowSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAccuratePickingWindowSizeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MouseDoubleClicDelay(CATLONG & ioMouseDoubleClicDelay) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MouseDoubleClicDelay(ioMouseDoubleClicDelay)); \
} \
HRESULT __stdcall  ENVTIEName::put_MouseDoubleClicDelay(CATLONG iMouseDoubleClicDelay) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MouseDoubleClicDelay(iMouseDoubleClicDelay)); \
} \
HRESULT __stdcall  ENVTIEName::GetMouseDoubleClicDelayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMouseDoubleClicDelayInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMouseDoubleClicDelayLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMouseDoubleClicDelayLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AmbientActivation(CATLONG & ioAmbientActivation) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AmbientActivation(ioAmbientActivation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AmbientActivation(CATLONG iAmbientActivation) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AmbientActivation(iAmbientActivation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAmbientActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAmbientActivationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAmbientActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAmbientActivationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultDiffuseAmbientCoefficient(double & ioDefaultDiffuseAmbientCoefficient) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultDiffuseAmbientCoefficient(ioDefaultDiffuseAmbientCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultDiffuseAmbientCoefficient(double iDefaultDiffuseAmbientCoefficient) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultDiffuseAmbientCoefficient(iDefaultDiffuseAmbientCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultDiffuseAmbientCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultDiffuseAmbientCoefficientInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultDiffuseAmbientCoefficientLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultDiffuseAmbientCoefficientLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultSpecularCoefficient(double & ioDefaultSpecularCoefficient) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultSpecularCoefficient(ioDefaultSpecularCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultSpecularCoefficient(double iDefaultSpecularCoefficient) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultSpecularCoefficient(iDefaultSpecularCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultSpecularCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultSpecularCoefficientInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultSpecularCoefficientLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultSpecularCoefficientLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultShininess(double & ioDefaultShininess) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultShininess(ioDefaultShininess)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultShininess(double iDefaultShininess) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultShininess(iDefaultShininess)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultShininessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultShininessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultShininessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultShininessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OpaqueFaces(CAT_VARIANT_BOOL & oOpaqueFaces) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OpaqueFaces(oOpaqueFaces)); \
} \
HRESULT __stdcall  ENVTIEName::put_OpaqueFaces(CAT_VARIANT_BOOL iOpaqueFaces) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OpaqueFaces(iOpaqueFaces)); \
} \
HRESULT __stdcall  ENVTIEName::GetOpaqueFacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOpaqueFacesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOpaqueFacesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOpaqueFacesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAVisualizationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAVisualizationSettingAtt(classe)    TIECATIAVisualizationSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAVisualizationSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAVisualizationSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAVisualizationSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAVisualizationSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAVisualizationSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAVisualizationSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_ColorBackgroundMode(CAT_VARIANT_BOOL & oColorBackgroundMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oColorBackgroundMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorBackgroundMode(oColorBackgroundMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oColorBackgroundMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_ColorBackgroundMode(CAT_VARIANT_BOOL iColorBackgroundMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iColorBackgroundMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorBackgroundMode(iColorBackgroundMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iColorBackgroundMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetColorBackgroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColorBackgroundModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetColorBackgroundModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColorBackgroundModeLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBackgroundRGB(iR,iG,iB); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBackgroundRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBackgroundRGBLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetNoShowBackgroundRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNoShowBackgroundRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetNoShowBackgroundRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNoShowBackgroundRGB(iR,iG,iB); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetNoShowBackgroundRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNoShowBackgroundRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetNoShowBackgroundRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNoShowBackgroundRGBLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetSelectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectedElementRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetSelectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelectedElementRGB(iR,iG,iB); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetSelectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectedElementRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetSelectedElementRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelectedElementRGBLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetSelectedEdgeRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectedEdgeRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetSelectedEdgeRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelectedEdgeRGB(iR,iG,iB); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetSelectedEdgeRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectedEdgeRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetSelectedEdgeRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelectedEdgeRGBLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetPreselectedElementRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreselectedElementRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetPreselectedElementRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreselectedElementRGB(iR,iG,iB); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetPreselectedElementRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreselectedElementRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetPreselectedElementRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreselectedElementRGBLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_PreselectedElementLinetype(CATLONG & oPreselectedElementLinetype) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oPreselectedElementLinetype); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreselectedElementLinetype(oPreselectedElementLinetype); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oPreselectedElementLinetype); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_PreselectedElementLinetype(CATLONG iPreselectedElementLinetype) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iPreselectedElementLinetype); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreselectedElementLinetype(iPreselectedElementLinetype); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iPreselectedElementLinetype); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetPreselectedElementLinetypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreselectedElementLinetypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetPreselectedElementLinetypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreselectedElementLinetypeLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetUnderIntensifiedRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUnderIntensifiedRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetUnderIntensifiedRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnderIntensifiedRGB(iR,iG,iB); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetUnderIntensifiedRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUnderIntensifiedRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetUnderIntensifiedRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnderIntensifiedRGBLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetUpdateNeededRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateNeededRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetUpdateNeededRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateNeededRGB(iR,iG,iB); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetUpdateNeededRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateNeededRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetUpdateNeededRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateNeededRGBLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetHandlesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHandlesRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetHandlesRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHandlesRGB(iR,iG,iB); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetHandlesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHandlesRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetHandlesRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHandlesRGBLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_BorderEdgesMode(CAT_VARIANT_BOOL & oBorderEdgesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oBorderEdgesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BorderEdgesMode(oBorderEdgesMode); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oBorderEdgesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_BorderEdgesMode(CAT_VARIANT_BOOL iBorderEdgesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iBorderEdgesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BorderEdgesMode(iBorderEdgesMode); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iBorderEdgesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBorderEdgesModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBorderEdgesModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBorderEdgesModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBorderEdgesModeLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBorderEdgesRGB(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBorderEdgesRGB(ioR,ioG,ioB); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBorderEdgesRGB(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBorderEdgesRGB(iR,iG,iB); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBorderEdgesRGBInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBorderEdgesRGBInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBorderEdgesRGBLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBorderEdgesRGBLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_BorderEdgesThickness(CATLONG & oBorderEdgesThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oBorderEdgesThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BorderEdgesThickness(oBorderEdgesThickness); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oBorderEdgesThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_BorderEdgesThickness(CATLONG iBorderEdgesThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iBorderEdgesThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BorderEdgesThickness(iBorderEdgesThickness); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iBorderEdgesThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBorderEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBorderEdgesThicknessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBorderEdgesThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBorderEdgesThicknessLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_AllZBufferElementMode(CAT_VARIANT_BOOL & oAllZBufferElementMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oAllZBufferElementMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllZBufferElementMode(oAllZBufferElementMode); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oAllZBufferElementMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_AllZBufferElementMode(CAT_VARIANT_BOOL iAllZBufferElementMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iAllZBufferElementMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AllZBufferElementMode(iAllZBufferElementMode); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iAllZBufferElementMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetAllZBufferElementModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllZBufferElementModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetAllZBufferElementModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAllZBufferElementModeLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_AntiAliasingMode(CAT_VARIANT_BOOL & oAntiAliasingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oAntiAliasingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AntiAliasingMode(oAntiAliasingMode); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oAntiAliasingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_AntiAliasingMode(CAT_VARIANT_BOOL iAntiAliasingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iAntiAliasingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AntiAliasingMode(iAntiAliasingMode); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iAntiAliasingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAntiAliasingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAntiAliasingModeLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_AntiAliasingOffset(double & oAntiAliasingOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oAntiAliasingOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AntiAliasingOffset(oAntiAliasingOffset); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oAntiAliasingOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_AntiAliasingOffset(double iAntiAliasingOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iAntiAliasingOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AntiAliasingOffset(iAntiAliasingOffset); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iAntiAliasingOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetAntiAliasingOffsetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAntiAliasingOffsetInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetAntiAliasingOffsetLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAntiAliasingOffsetLock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode & oFullSceneAntiAliasingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oFullSceneAntiAliasingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullSceneAntiAliasingMode(oFullSceneAntiAliasingMode); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oFullSceneAntiAliasingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FullSceneAntiAliasingMode(CATFullSceneAntiAliasingMode iFullSceneAntiAliasingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iFullSceneAntiAliasingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FullSceneAntiAliasingMode(iFullSceneAntiAliasingMode); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iFullSceneAntiAliasingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFullSceneAntiAliasingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFullSceneAntiAliasingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFullSceneAntiAliasingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFullSceneAntiAliasingModeLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_StereoMode(CAT_VARIANT_BOOL & oStereoMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oStereoMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StereoMode(oStereoMode); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oStereoMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_StereoMode(CAT_VARIANT_BOOL iStereoMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iStereoMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StereoMode(iStereoMode); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iStereoMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetStereoModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStereoModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetStereoModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStereoModeLock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DisplayCurrentScale(CAT_VARIANT_BOOL & oDisplayCurrentScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oDisplayCurrentScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayCurrentScale(oDisplayCurrentScale); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oDisplayCurrentScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DisplayCurrentScale(CAT_VARIANT_BOOL iDisplayCurrentScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iDisplayCurrentScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayCurrentScale(iDisplayCurrentScale); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iDisplayCurrentScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDisplayCurrentScaleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayCurrentScaleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDisplayCurrentScaleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayCurrentScaleLock(iLocked); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_PreSelectionMode(CAT_VARIANT_BOOL & ioPreSelectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&ioPreSelectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreSelectionMode(ioPreSelectionMode); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&ioPreSelectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_PreSelectionMode(CAT_VARIANT_BOOL iPreSelectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iPreSelectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreSelectionMode(iPreSelectionMode); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iPreSelectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetPreSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreSelectionModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetPreSelectionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreSelectionModeLock(iLocked); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL & ioOtherSelectionTimeoutActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&ioOtherSelectionTimeoutActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OtherSelectionTimeoutActivity(ioOtherSelectionTimeoutActivity); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&ioOtherSelectionTimeoutActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_OtherSelectionTimeoutActivity(CAT_VARIANT_BOOL iOtherSelectionTimeoutActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iOtherSelectionTimeoutActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OtherSelectionTimeoutActivity(iOtherSelectionTimeoutActivity); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iOtherSelectionTimeoutActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetOtherSelectionTimeoutActivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOtherSelectionTimeoutActivityInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetOtherSelectionTimeoutActivityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOtherSelectionTimeoutActivityLock(iLocked); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_OtherSelectionTimeout(double & ioOtherSelectionTimeout) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&ioOtherSelectionTimeout); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OtherSelectionTimeout(ioOtherSelectionTimeout); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&ioOtherSelectionTimeout); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_OtherSelectionTimeout(double iOtherSelectionTimeout) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iOtherSelectionTimeout); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OtherSelectionTimeout(iOtherSelectionTimeout); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iOtherSelectionTimeout); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetOtherSelectionTimeoutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOtherSelectionTimeoutInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetOtherSelectionTimeoutLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOtherSelectionTimeoutLock(iLocked); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL & ioPreSelNavigatorStartedByArrowKeys) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&ioPreSelNavigatorStartedByArrowKeys); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreSelNavigatorStartedByArrowKeys(ioPreSelNavigatorStartedByArrowKeys); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&ioPreSelNavigatorStartedByArrowKeys); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_PreSelNavigatorStartedByArrowKeys(CAT_VARIANT_BOOL iPreSelNavigatorStartedByArrowKeys) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iPreSelNavigatorStartedByArrowKeys); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreSelNavigatorStartedByArrowKeys(iPreSelNavigatorStartedByArrowKeys); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iPreSelNavigatorStartedByArrowKeys); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetPreSelNavigatorStartedByArrowKeysInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreSelNavigatorStartedByArrowKeysInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetPreSelNavigatorStartedByArrowKeysLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreSelNavigatorStartedByArrowKeysLock(iLocked); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_NoZBufferSelectionMode(CAT_VARIANT_BOOL & ioNoZBufferSelectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&ioNoZBufferSelectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NoZBufferSelectionMode(ioNoZBufferSelectionMode); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&ioNoZBufferSelectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_NoZBufferSelectionMode(CAT_VARIANT_BOOL iNoZBufferSelectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iNoZBufferSelectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NoZBufferSelectionMode(iNoZBufferSelectionMode); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iNoZBufferSelectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetNoZBufferSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNoZBufferSelectionModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetNoZBufferSelectionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNoZBufferSelectionModeLock(iLocked); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_BoundingBoxSelectionMode(CAT_VARIANT_BOOL & ioBoundingBoxSelectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&ioBoundingBoxSelectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BoundingBoxSelectionMode(ioBoundingBoxSelectionMode); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&ioBoundingBoxSelectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_BoundingBoxSelectionMode(CAT_VARIANT_BOOL iBoundingBoxSelectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iBoundingBoxSelectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BoundingBoxSelectionMode(iBoundingBoxSelectionMode); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iBoundingBoxSelectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBoundingBoxSelectionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundingBoxSelectionModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBoundingBoxSelectionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundingBoxSelectionModeLock(iLocked); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_MaxSelectionMove(CATLONG & ioMaxSelectionMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&ioMaxSelectionMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxSelectionMove(ioMaxSelectionMove); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&ioMaxSelectionMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_MaxSelectionMove(CATLONG iMaxSelectionMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iMaxSelectionMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxSelectionMove(iMaxSelectionMove); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iMaxSelectionMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetMaxSelectionMoveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxSelectionMoveInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetMaxSelectionMoveLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxSelectionMoveLock(iLocked); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DisplayDrillList(CAT_VARIANT_BOOL & ioDisplayDrillList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&ioDisplayDrillList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayDrillList(ioDisplayDrillList); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&ioDisplayDrillList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DisplayDrillList(CAT_VARIANT_BOOL iDisplayDrillList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iDisplayDrillList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayDrillList(iDisplayDrillList); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iDisplayDrillList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDisplayDrillListInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayDrillListInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDisplayDrillListLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayDrillListLock(iLocked); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_AuxiliaryDrillViewer(CAT_VARIANT_BOOL & ioAuxiliaryDrillViewer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&ioAuxiliaryDrillViewer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AuxiliaryDrillViewer(ioAuxiliaryDrillViewer); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&ioAuxiliaryDrillViewer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_AuxiliaryDrillViewer(CAT_VARIANT_BOOL iAuxiliaryDrillViewer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iAuxiliaryDrillViewer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AuxiliaryDrillViewer(iAuxiliaryDrillViewer); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iAuxiliaryDrillViewer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetAuxiliaryDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAuxiliaryDrillViewerInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetAuxiliaryDrillViewerLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAuxiliaryDrillViewerLock(iLocked); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FaceHLDrill(CAT_VARIANT_BOOL & ioFaceHLDrill) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&ioFaceHLDrill); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FaceHLDrill(ioFaceHLDrill); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&ioFaceHLDrill); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FaceHLDrill(CAT_VARIANT_BOOL iFaceHLDrill) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iFaceHLDrill); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FaceHLDrill(iFaceHLDrill); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iFaceHLDrill); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFaceHLDrillInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFaceHLDrillInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFaceHLDrillLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFaceHLDrillLock(iLocked); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL & ioDisplayImmersiveDrillViewer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&ioDisplayImmersiveDrillViewer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayImmersiveDrillViewer(ioDisplayImmersiveDrillViewer); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&ioDisplayImmersiveDrillViewer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DisplayImmersiveDrillViewer(CAT_VARIANT_BOOL iDisplayImmersiveDrillViewer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iDisplayImmersiveDrillViewer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayImmersiveDrillViewer(iDisplayImmersiveDrillViewer); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iDisplayImmersiveDrillViewer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDisplayImmersiveDrillViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayImmersiveDrillViewerInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDisplayImmersiveDrillViewerLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayImmersiveDrillViewerLock(iLocked); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Gravity(CAT_VARIANT_BOOL & ioGravity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2,&ioGravity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Gravity(ioGravity); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg,&ioGravity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Gravity(CAT_VARIANT_BOOL iGravity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2,&iGravity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Gravity(iGravity); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg,&iGravity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetGravityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGravityInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetGravityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGravityLock(iLocked); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_GravityAxis(CATLONG & ioGravityAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2,&ioGravityAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GravityAxis(ioGravityAxis); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg,&ioGravityAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_GravityAxis(CATLONG iGravityAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2,&iGravityAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GravityAxis(iGravityAxis); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg,&iGravityAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetGravityAxisInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGravityAxisInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetGravityAxisLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGravityAxisLock(iLocked); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FollowGroundMode(CAT_VARIANT_BOOL & ioFollowGroundMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2,&ioFollowGroundMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FollowGroundMode(ioFollowGroundMode); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg,&ioFollowGroundMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FollowGroundMode(CAT_VARIANT_BOOL iFollowGroundMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&iFollowGroundMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FollowGroundMode(iFollowGroundMode); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&iFollowGroundMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFollowGroundModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,131,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFollowGroundModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,131,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFollowGroundModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,132,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFollowGroundModeLock(iLocked); \
   ExitAfterCall(this,132,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FollowGroundAltitude(double & ioFollowGroundAltitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,133,&_Trac2,&ioFollowGroundAltitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FollowGroundAltitude(ioFollowGroundAltitude); \
   ExitAfterCall(this,133,_Trac2,&_ret_arg,&ioFollowGroundAltitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FollowGroundAltitude(double iFollowGroundAltitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,134,&_Trac2,&iFollowGroundAltitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FollowGroundAltitude(iFollowGroundAltitude); \
   ExitAfterCall(this,134,_Trac2,&_ret_arg,&iFollowGroundAltitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFollowGroundAltitudeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,135,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFollowGroundAltitudeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,135,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFollowGroundAltitudeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,136,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFollowGroundAltitudeLock(iLocked); \
   ExitAfterCall(this,136,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_ViewpointAnimationMode(CAT_VARIANT_BOOL & ioViewpointAnimationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,137,&_Trac2,&ioViewpointAnimationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewpointAnimationMode(ioViewpointAnimationMode); \
   ExitAfterCall(this,137,_Trac2,&_ret_arg,&ioViewpointAnimationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_ViewpointAnimationMode(CAT_VARIANT_BOOL iViewpointAnimationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,138,&_Trac2,&iViewpointAnimationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewpointAnimationMode(iViewpointAnimationMode); \
   ExitAfterCall(this,138,_Trac2,&_ret_arg,&iViewpointAnimationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViewpointAnimationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,139,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewpointAnimationModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,139,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViewpointAnimationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,140,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewpointAnimationModeLock(iLocked); \
   ExitAfterCall(this,140,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_RotationSphereMode(CAT_VARIANT_BOOL & ioRotationSphereMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,141,&_Trac2,&ioRotationSphereMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationSphereMode(ioRotationSphereMode); \
   ExitAfterCall(this,141,_Trac2,&_ret_arg,&ioRotationSphereMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_RotationSphereMode(CAT_VARIANT_BOOL iRotationSphereMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,142,&_Trac2,&iRotationSphereMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RotationSphereMode(iRotationSphereMode); \
   ExitAfterCall(this,142,_Trac2,&_ret_arg,&iRotationSphereMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetRotationSphereModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,143,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRotationSphereModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,143,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetRotationSphereModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,144,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRotationSphereModeLock(iLocked); \
   ExitAfterCall(this,144,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FlyCollisionMode(CAT_VARIANT_BOOL & ioFlyCollisionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,145,&_Trac2,&ioFlyCollisionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlyCollisionMode(ioFlyCollisionMode); \
   ExitAfterCall(this,145,_Trac2,&_ret_arg,&ioFlyCollisionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FlyCollisionMode(CAT_VARIANT_BOOL iFlyCollisionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,146,&_Trac2,&iFlyCollisionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlyCollisionMode(iFlyCollisionMode); \
   ExitAfterCall(this,146,_Trac2,&_ret_arg,&iFlyCollisionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFlyCollisionModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,147,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlyCollisionModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,147,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFlyCollisionModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,148,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFlyCollisionModeLock(iLocked); \
   ExitAfterCall(this,148,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FlyCollisionType(CATLONG & ioFlyCollisionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,149,&_Trac2,&ioFlyCollisionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlyCollisionType(ioFlyCollisionType); \
   ExitAfterCall(this,149,_Trac2,&_ret_arg,&ioFlyCollisionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FlyCollisionType(CATLONG iFlyCollisionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,150,&_Trac2,&iFlyCollisionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlyCollisionType(iFlyCollisionType); \
   ExitAfterCall(this,150,_Trac2,&_ret_arg,&iFlyCollisionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFlyCollisionTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,151,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlyCollisionTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,151,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFlyCollisionTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,152,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFlyCollisionTypeLock(iLocked); \
   ExitAfterCall(this,152,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FlyCollisionSphereRadius(double & ioFlyCollisionSphereRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,153,&_Trac2,&ioFlyCollisionSphereRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlyCollisionSphereRadius(ioFlyCollisionSphereRadius); \
   ExitAfterCall(this,153,_Trac2,&_ret_arg,&ioFlyCollisionSphereRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FlyCollisionSphereRadius(double iFlyCollisionSphereRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,154,&_Trac2,&iFlyCollisionSphereRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlyCollisionSphereRadius(iFlyCollisionSphereRadius); \
   ExitAfterCall(this,154,_Trac2,&_ret_arg,&iFlyCollisionSphereRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFlyCollisionSphereRadiusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,155,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlyCollisionSphereRadiusInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,155,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFlyCollisionSphereRadiusLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,156,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFlyCollisionSphereRadiusLock(iLocked); \
   ExitAfterCall(this,156,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FlySensitivity(CATLONG & ioFlySensitivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,157,&_Trac2,&ioFlySensitivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlySensitivity(ioFlySensitivity); \
   ExitAfterCall(this,157,_Trac2,&_ret_arg,&ioFlySensitivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FlySensitivity(CATLONG iFlySensitivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,158,&_Trac2,&iFlySensitivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlySensitivity(iFlySensitivity); \
   ExitAfterCall(this,158,_Trac2,&_ret_arg,&iFlySensitivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFlySensitivityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,159,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlySensitivityInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,159,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFlySensitivityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,160,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFlySensitivityLock(iLocked); \
   ExitAfterCall(this,160,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FlySpeedMode(CATLONG & ioFlySpeedMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,161,&_Trac2,&ioFlySpeedMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlySpeedMode(ioFlySpeedMode); \
   ExitAfterCall(this,161,_Trac2,&_ret_arg,&ioFlySpeedMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FlySpeedMode(CATLONG iFlySpeedMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,162,&_Trac2,&iFlySpeedMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlySpeedMode(iFlySpeedMode); \
   ExitAfterCall(this,162,_Trac2,&_ret_arg,&iFlySpeedMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFlySpeedModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,163,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlySpeedModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,163,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFlySpeedModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,164,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFlySpeedModeLock(iLocked); \
   ExitAfterCall(this,164,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_FlySpeed(CATLONG & ioFlySpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,165,&_Trac2,&ioFlySpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlySpeed(ioFlySpeed); \
   ExitAfterCall(this,165,_Trac2,&_ret_arg,&ioFlySpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_FlySpeed(CATLONG iFlySpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,166,&_Trac2,&iFlySpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlySpeed(iFlySpeed); \
   ExitAfterCall(this,166,_Trac2,&_ret_arg,&iFlySpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetFlySpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,167,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlySpeedInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,167,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetFlySpeedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,168,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFlySpeedLock(iLocked); \
   ExitAfterCall(this,168,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_MouseSpeedValue(CATLONG & ioMouseSpeedValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,169,&_Trac2,&ioMouseSpeedValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MouseSpeedValue(ioMouseSpeedValue); \
   ExitAfterCall(this,169,_Trac2,&_ret_arg,&ioMouseSpeedValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_MouseSpeedValue(CATLONG iMouseSpeedValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,170,&_Trac2,&iMouseSpeedValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MouseSpeedValue(iMouseSpeedValue); \
   ExitAfterCall(this,170,_Trac2,&_ret_arg,&iMouseSpeedValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetMouseSpeedValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,171,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMouseSpeedValueInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,171,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetMouseSpeedValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,172,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMouseSpeedValueLock(iLocked); \
   ExitAfterCall(this,172,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_KeyboardRotationAngleValue(CATLONG & ioKeyboardRotationAngleValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,173,&_Trac2,&ioKeyboardRotationAngleValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KeyboardRotationAngleValue(ioKeyboardRotationAngleValue); \
   ExitAfterCall(this,173,_Trac2,&_ret_arg,&ioKeyboardRotationAngleValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_KeyboardRotationAngleValue(CATLONG iKeyboardRotationAngleValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,174,&_Trac2,&iKeyboardRotationAngleValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KeyboardRotationAngleValue(iKeyboardRotationAngleValue); \
   ExitAfterCall(this,174,_Trac2,&_ret_arg,&iKeyboardRotationAngleValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetKeyboardRotationAngleValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,175,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeyboardRotationAngleValueInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,175,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetKeyboardRotationAngleValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,176,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetKeyboardRotationAngleValueLock(iLocked); \
   ExitAfterCall(this,176,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_OcclusionCullingMode(CAT_VARIANT_BOOL & ioOcclusionCullingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,177,&_Trac2,&ioOcclusionCullingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OcclusionCullingMode(ioOcclusionCullingMode); \
   ExitAfterCall(this,177,_Trac2,&_ret_arg,&ioOcclusionCullingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_OcclusionCullingMode(CAT_VARIANT_BOOL iOcclusionCullingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,178,&_Trac2,&iOcclusionCullingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OcclusionCullingMode(iOcclusionCullingMode); \
   ExitAfterCall(this,178,_Trac2,&_ret_arg,&iOcclusionCullingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetOcclusionCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,179,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOcclusionCullingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,179,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetOcclusionCullingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,180,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOcclusionCullingModeLock(iLocked); \
   ExitAfterCall(this,180,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Viz3DAccuracyMode(CAT_VARIANT_BOOL & io3DAccuracyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,181,&_Trac2,&io3DAccuracyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viz3DAccuracyMode(io3DAccuracyMode); \
   ExitAfterCall(this,181,_Trac2,&_ret_arg,&io3DAccuracyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Viz3DAccuracyMode(CAT_VARIANT_BOOL i3DAccuracyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,182,&_Trac2,&i3DAccuracyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viz3DAccuracyMode(i3DAccuracyMode); \
   ExitAfterCall(this,182,_Trac2,&_ret_arg,&i3DAccuracyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViz3DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,183,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViz3DAccuracyModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,183,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViz3DAccuracyModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,184,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViz3DAccuracyModeLock(iLocked); \
   ExitAfterCall(this,184,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Viz3DProportionnalAccuracy(double & io3DProportionnalAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,185,&_Trac2,&io3DProportionnalAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viz3DProportionnalAccuracy(io3DProportionnalAccuracy); \
   ExitAfterCall(this,185,_Trac2,&_ret_arg,&io3DProportionnalAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Viz3DProportionnalAccuracy(double i3DProportionnalAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,186,&_Trac2,&i3DProportionnalAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viz3DProportionnalAccuracy(i3DProportionnalAccuracy); \
   ExitAfterCall(this,186,_Trac2,&_ret_arg,&i3DProportionnalAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViz3DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,187,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViz3DProportionnalAccuracyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,187,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViz3DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,188,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViz3DProportionnalAccuracyLock(iLocked); \
   ExitAfterCall(this,188,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Viz3DFixedAccuracy(double & io3DFixedAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,189,&_Trac2,&io3DFixedAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viz3DFixedAccuracy(io3DFixedAccuracy); \
   ExitAfterCall(this,189,_Trac2,&_ret_arg,&io3DFixedAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Viz3DFixedAccuracy(double i3DFixedAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,190,&_Trac2,&i3DFixedAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viz3DFixedAccuracy(i3DFixedAccuracy); \
   ExitAfterCall(this,190,_Trac2,&_ret_arg,&i3DFixedAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViz3DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,191,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViz3DFixedAccuracyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,191,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViz3DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,192,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViz3DFixedAccuracyLock(iLocked); \
   ExitAfterCall(this,192,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Viz3DCurveAccuracy(double & io3DCurveAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,193,&_Trac2,&io3DCurveAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viz3DCurveAccuracy(io3DCurveAccuracy); \
   ExitAfterCall(this,193,_Trac2,&_ret_arg,&io3DCurveAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Viz3DCurveAccuracy(double i3DCurveAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,194,&_Trac2,&i3DCurveAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viz3DCurveAccuracy(i3DCurveAccuracy); \
   ExitAfterCall(this,194,_Trac2,&_ret_arg,&i3DCurveAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViz3DCurveAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,195,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViz3DCurveAccuracyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,195,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViz3DCurveAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,196,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViz3DCurveAccuracyLock(iLocked); \
   ExitAfterCall(this,196,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Viz2DAccuracyMode(CAT_VARIANT_BOOL & io2DAccuracyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,197,&_Trac2,&io2DAccuracyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viz2DAccuracyMode(io2DAccuracyMode); \
   ExitAfterCall(this,197,_Trac2,&_ret_arg,&io2DAccuracyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Viz2DAccuracyMode(CAT_VARIANT_BOOL i2DAccuracyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,198,&_Trac2,&i2DAccuracyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viz2DAccuracyMode(i2DAccuracyMode); \
   ExitAfterCall(this,198,_Trac2,&_ret_arg,&i2DAccuracyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViz2DAccuracyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,199,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViz2DAccuracyModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,199,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViz2DAccuracyModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,200,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViz2DAccuracyModeLock(iLocked); \
   ExitAfterCall(this,200,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Viz2DProportionnalAccuracy(double & io2DProportionnalAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,201,&_Trac2,&io2DProportionnalAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viz2DProportionnalAccuracy(io2DProportionnalAccuracy); \
   ExitAfterCall(this,201,_Trac2,&_ret_arg,&io2DProportionnalAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Viz2DProportionnalAccuracy(double i2DProportionnalAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,202,&_Trac2,&i2DProportionnalAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viz2DProportionnalAccuracy(i2DProportionnalAccuracy); \
   ExitAfterCall(this,202,_Trac2,&_ret_arg,&i2DProportionnalAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViz2DProportionnalAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,203,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViz2DProportionnalAccuracyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,203,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViz2DProportionnalAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,204,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViz2DProportionnalAccuracyLock(iLocked); \
   ExitAfterCall(this,204,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Viz2DFixedAccuracy(double & io2DFixedAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,205,&_Trac2,&io2DFixedAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viz2DFixedAccuracy(io2DFixedAccuracy); \
   ExitAfterCall(this,205,_Trac2,&_ret_arg,&io2DFixedAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Viz2DFixedAccuracy(double i2DFixedAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,206,&_Trac2,&i2DFixedAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viz2DFixedAccuracy(i2DFixedAccuracy); \
   ExitAfterCall(this,206,_Trac2,&_ret_arg,&i2DFixedAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetViz2DFixedAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,207,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViz2DFixedAccuracyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,207,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetViz2DFixedAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,208,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViz2DFixedAccuracyLock(iLocked); \
   ExitAfterCall(this,208,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_StaticLOD(double & ioStaticLOD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,209,&_Trac2,&ioStaticLOD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StaticLOD(ioStaticLOD); \
   ExitAfterCall(this,209,_Trac2,&_ret_arg,&ioStaticLOD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_StaticLOD(double iStaticLOD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,210,&_Trac2,&iStaticLOD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StaticLOD(iStaticLOD); \
   ExitAfterCall(this,210,_Trac2,&_ret_arg,&iStaticLOD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetStaticLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,211,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStaticLODInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,211,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetStaticLODLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,212,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStaticLODLock(iLocked); \
   ExitAfterCall(this,212,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DynamicLOD(double & ioDynamicLOD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,213,&_Trac2,&ioDynamicLOD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DynamicLOD(ioDynamicLOD); \
   ExitAfterCall(this,213,_Trac2,&_ret_arg,&ioDynamicLOD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DynamicLOD(double iDynamicLOD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,214,&_Trac2,&iDynamicLOD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DynamicLOD(iDynamicLOD); \
   ExitAfterCall(this,214,_Trac2,&_ret_arg,&iDynamicLOD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDynamicLODInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,215,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDynamicLODInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,215,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDynamicLODLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,216,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDynamicLODLock(iLocked); \
   ExitAfterCall(this,216,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_StaticCull(CATLONG & ioStaticCull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,217,&_Trac2,&ioStaticCull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StaticCull(ioStaticCull); \
   ExitAfterCall(this,217,_Trac2,&_ret_arg,&ioStaticCull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_StaticCull(CATLONG iStaticCull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,218,&_Trac2,&iStaticCull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StaticCull(iStaticCull); \
   ExitAfterCall(this,218,_Trac2,&_ret_arg,&iStaticCull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetStaticCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,219,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStaticCullInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,219,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetStaticCullLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,220,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStaticCullLock(iLocked); \
   ExitAfterCall(this,220,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DynamicCull(CATLONG & ioDynamicCull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,221,&_Trac2,&ioDynamicCull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DynamicCull(ioDynamicCull); \
   ExitAfterCall(this,221,_Trac2,&_ret_arg,&ioDynamicCull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DynamicCull(CATLONG iDynamicCull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,222,&_Trac2,&iDynamicCull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DynamicCull(iDynamicCull); \
   ExitAfterCall(this,222,_Trac2,&_ret_arg,&iDynamicCull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDynamicCullInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,223,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDynamicCullInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,223,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDynamicCullLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,224,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDynamicCullLock(iLocked); \
   ExitAfterCall(this,224,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_TransparencyMode(CAT_VARIANT_BOOL & ioTransparencyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,225,&_Trac2,&ioTransparencyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TransparencyMode(ioTransparencyMode); \
   ExitAfterCall(this,225,_Trac2,&_ret_arg,&ioTransparencyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_TransparencyMode(CAT_VARIANT_BOOL iTransparencyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,226,&_Trac2,&iTransparencyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TransparencyMode(iTransparencyMode); \
   ExitAfterCall(this,226,_Trac2,&_ret_arg,&iTransparencyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetTransparencyModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,227,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransparencyModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,227,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetTransparencyModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,228,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTransparencyModeLock(iLocked); \
   ExitAfterCall(this,228,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_MinimumFPSMode(CAT_VARIANT_BOOL & ioMinimumFPSMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,229,&_Trac2,&ioMinimumFPSMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinimumFPSMode(ioMinimumFPSMode); \
   ExitAfterCall(this,229,_Trac2,&_ret_arg,&ioMinimumFPSMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_MinimumFPSMode(CAT_VARIANT_BOOL iMinimumFPSMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,230,&_Trac2,&iMinimumFPSMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MinimumFPSMode(iMinimumFPSMode); \
   ExitAfterCall(this,230,_Trac2,&_ret_arg,&iMinimumFPSMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetMinimumFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,231,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMinimumFPSModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,231,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetMinimumFPSModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,232,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMinimumFPSModeLock(iLocked); \
   ExitAfterCall(this,232,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_NumberOfMinimumFPS(CATLONG & ioNumberOfMinimumFPS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,233,&_Trac2,&ioNumberOfMinimumFPS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfMinimumFPS(ioNumberOfMinimumFPS); \
   ExitAfterCall(this,233,_Trac2,&_ret_arg,&ioNumberOfMinimumFPS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_NumberOfMinimumFPS(CATLONG iNumberOfMinimumFPS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,234,&_Trac2,&iNumberOfMinimumFPS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NumberOfMinimumFPS(iNumberOfMinimumFPS); \
   ExitAfterCall(this,234,_Trac2,&_ret_arg,&iNumberOfMinimumFPS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetNumberOfMinimumFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,235,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfMinimumFPSInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,235,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetNumberOfMinimumFPSLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,236,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNumberOfMinimumFPSLock(iLocked); \
   ExitAfterCall(this,236,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_MinimumSpaceFPSMode(CAT_VARIANT_BOOL & ioMinimumSpaceFPSMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,237,&_Trac2,&ioMinimumSpaceFPSMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinimumSpaceFPSMode(ioMinimumSpaceFPSMode); \
   ExitAfterCall(this,237,_Trac2,&_ret_arg,&ioMinimumSpaceFPSMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_MinimumSpaceFPSMode(CAT_VARIANT_BOOL iMinimumSpaceFPSMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,238,&_Trac2,&iMinimumSpaceFPSMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MinimumSpaceFPSMode(iMinimumSpaceFPSMode); \
   ExitAfterCall(this,238,_Trac2,&_ret_arg,&iMinimumSpaceFPSMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetMinimumSpaceFPSModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,239,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMinimumSpaceFPSModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,239,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetMinimumSpaceFPSModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,240,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMinimumSpaceFPSModeLock(iLocked); \
   ExitAfterCall(this,240,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_NumberOfMinimumSpaceFPS(CATLONG & ioNumberOfMinimumSpaceFPS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,241,&_Trac2,&ioNumberOfMinimumSpaceFPS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfMinimumSpaceFPS(ioNumberOfMinimumSpaceFPS); \
   ExitAfterCall(this,241,_Trac2,&_ret_arg,&ioNumberOfMinimumSpaceFPS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_NumberOfMinimumSpaceFPS(CATLONG iNumberOfMinimumSpaceFPS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,242,&_Trac2,&iNumberOfMinimumSpaceFPS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NumberOfMinimumSpaceFPS(iNumberOfMinimumSpaceFPS); \
   ExitAfterCall(this,242,_Trac2,&_ret_arg,&iNumberOfMinimumSpaceFPS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetNumberOfMinimumSpaceFPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,243,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfMinimumSpaceFPSInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,243,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetNumberOfMinimumSpaceFPSLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,244,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNumberOfMinimumSpaceFPSLock(iLocked); \
   ExitAfterCall(this,244,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_IsoparGenerationMode(CAT_VARIANT_BOOL & ioIsoparGenerationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,245,&_Trac2,&ioIsoparGenerationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsoparGenerationMode(ioIsoparGenerationMode); \
   ExitAfterCall(this,245,_Trac2,&_ret_arg,&ioIsoparGenerationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_IsoparGenerationMode(CAT_VARIANT_BOOL iIsoparGenerationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,246,&_Trac2,&iIsoparGenerationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsoparGenerationMode(iIsoparGenerationMode); \
   ExitAfterCall(this,246,_Trac2,&_ret_arg,&iIsoparGenerationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetIsoparGenerationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,247,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIsoparGenerationModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,247,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetIsoparGenerationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,248,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIsoparGenerationModeLock(iLocked); \
   ExitAfterCall(this,248,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_NbIsopars(CATLONG & ioNbIsopars) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,249,&_Trac2,&ioNbIsopars); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbIsopars(ioNbIsopars); \
   ExitAfterCall(this,249,_Trac2,&_ret_arg,&ioNbIsopars); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_NbIsopars(CATLONG iNbIsopars) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,250,&_Trac2,&iNbIsopars); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NbIsopars(iNbIsopars); \
   ExitAfterCall(this,250,_Trac2,&_ret_arg,&iNbIsopars); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetNbIsoparsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,251,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbIsoparsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,251,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetNbIsoparsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,252,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNbIsoparsLock(iLocked); \
   ExitAfterCall(this,252,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_TwoSideLightingMode(CAT_VARIANT_BOOL & ioTwoSideLightingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,253,&_Trac2,&ioTwoSideLightingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TwoSideLightingMode(ioTwoSideLightingMode); \
   ExitAfterCall(this,253,_Trac2,&_ret_arg,&ioTwoSideLightingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_TwoSideLightingMode(CAT_VARIANT_BOOL iTwoSideLightingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,254,&_Trac2,&iTwoSideLightingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TwoSideLightingMode(iTwoSideLightingMode); \
   ExitAfterCall(this,254,_Trac2,&_ret_arg,&iTwoSideLightingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetTwoSideLightingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,255,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTwoSideLightingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,255,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetTwoSideLightingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,256,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTwoSideLightingModeLock(iLocked); \
   ExitAfterCall(this,256,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_BackFaceCullingMode(CAT_VARIANT_BOOL & ioBackFaceCullingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,257,&_Trac2,&ioBackFaceCullingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BackFaceCullingMode(ioBackFaceCullingMode); \
   ExitAfterCall(this,257,_Trac2,&_ret_arg,&ioBackFaceCullingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_BackFaceCullingMode(CAT_VARIANT_BOOL iBackFaceCullingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,258,&_Trac2,&iBackFaceCullingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BackFaceCullingMode(iBackFaceCullingMode); \
   ExitAfterCall(this,258,_Trac2,&_ret_arg,&iBackFaceCullingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBackFaceCullingMode(CATBackFaceCullingMode & ioBackFaceCullingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,259,&_Trac2,&ioBackFaceCullingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackFaceCullingMode(ioBackFaceCullingMode); \
   ExitAfterCall(this,259,_Trac2,&_ret_arg,&ioBackFaceCullingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::PutBackFaceCullingMode(CATBackFaceCullingMode iBackFaceCullingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,260,&_Trac2,&iBackFaceCullingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutBackFaceCullingMode(iBackFaceCullingMode); \
   ExitAfterCall(this,260,_Trac2,&_ret_arg,&iBackFaceCullingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetBackFaceCullingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,261,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackFaceCullingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,261,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetBackFaceCullingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,262,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBackFaceCullingModeLock(iLocked); \
   ExitAfterCall(this,262,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_LightViewerMode(CAT_VARIANT_BOOL & ioLightViewerMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,263,&_Trac2,&ioLightViewerMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LightViewerMode(ioLightViewerMode); \
   ExitAfterCall(this,263,_Trac2,&_ret_arg,&ioLightViewerMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_LightViewerMode(CAT_VARIANT_BOOL iLightViewerMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,264,&_Trac2,&iLightViewerMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LightViewerMode(iLightViewerMode); \
   ExitAfterCall(this,264,_Trac2,&_ret_arg,&iLightViewerMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetLightViewerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,265,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLightViewerModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,265,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetLightViewerModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,266,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLightViewerModeLock(iLocked); \
   ExitAfterCall(this,266,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_LineicCgrMode(CAT_VARIANT_BOOL & ioLineicCgrMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,267,&_Trac2,&ioLineicCgrMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineicCgrMode(ioLineicCgrMode); \
   ExitAfterCall(this,267,_Trac2,&_ret_arg,&ioLineicCgrMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_LineicCgrMode(CAT_VARIANT_BOOL iLineicCgrMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,268,&_Trac2,&iLineicCgrMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LineicCgrMode(iLineicCgrMode); \
   ExitAfterCall(this,268,_Trac2,&_ret_arg,&iLineicCgrMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetLineicCgrModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,269,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineicCgrModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,269,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetLineicCgrModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,270,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLineicCgrModeLock(iLocked); \
   ExitAfterCall(this,270,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_ShaderMode(CAT_VARIANT_BOOL & ioShaderMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,271,&_Trac2,&ioShaderMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShaderMode(ioShaderMode); \
   ExitAfterCall(this,271,_Trac2,&_ret_arg,&ioShaderMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_ShaderMode(CAT_VARIANT_BOOL iShaderMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,272,&_Trac2,&iShaderMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShaderMode(iShaderMode); \
   ExitAfterCall(this,272,_Trac2,&_ret_arg,&iShaderMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetShaderModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,273,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShaderModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,273,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetShaderModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,274,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShaderModeLock(iLocked); \
   ExitAfterCall(this,274,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_HaloMode(CAT_VARIANT_BOOL & ioHaloMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,275,&_Trac2,&ioHaloMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HaloMode(ioHaloMode); \
   ExitAfterCall(this,275,_Trac2,&_ret_arg,&ioHaloMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_HaloMode(CAT_VARIANT_BOOL iHaloMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,276,&_Trac2,&iHaloMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HaloMode(iHaloMode); \
   ExitAfterCall(this,276,_Trac2,&_ret_arg,&iHaloMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetHaloModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,277,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHaloModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,277,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetHaloModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,278,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHaloModeLock(iLocked); \
   ExitAfterCall(this,278,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_PickingWindowSize(CATLONG & ioPickingWindowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,279,&_Trac2,&ioPickingWindowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PickingWindowSize(ioPickingWindowSize); \
   ExitAfterCall(this,279,_Trac2,&_ret_arg,&ioPickingWindowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_PickingWindowSize(CATLONG iPickingWindowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,280,&_Trac2,&iPickingWindowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PickingWindowSize(iPickingWindowSize); \
   ExitAfterCall(this,280,_Trac2,&_ret_arg,&iPickingWindowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetPickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,281,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPickingWindowSizeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,281,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetPickingWindowSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,282,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPickingWindowSizeLock(iLocked); \
   ExitAfterCall(this,282,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_AccuratePickingMode(CAT_VARIANT_BOOL & ioAccuratePickingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,283,&_Trac2,&ioAccuratePickingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AccuratePickingMode(ioAccuratePickingMode); \
   ExitAfterCall(this,283,_Trac2,&_ret_arg,&ioAccuratePickingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_AccuratePickingMode(CAT_VARIANT_BOOL iAccuratePickingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,284,&_Trac2,&iAccuratePickingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AccuratePickingMode(iAccuratePickingMode); \
   ExitAfterCall(this,284,_Trac2,&_ret_arg,&iAccuratePickingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetAccuratePickingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,285,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAccuratePickingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,285,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetAccuratePickingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,286,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAccuratePickingModeLock(iLocked); \
   ExitAfterCall(this,286,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_AccuratePickingWindowSize(CATLONG & ioAccuratePickingWindowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,287,&_Trac2,&ioAccuratePickingWindowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AccuratePickingWindowSize(ioAccuratePickingWindowSize); \
   ExitAfterCall(this,287,_Trac2,&_ret_arg,&ioAccuratePickingWindowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_AccuratePickingWindowSize(CATLONG iAccuratePickingWindowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,288,&_Trac2,&iAccuratePickingWindowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AccuratePickingWindowSize(iAccuratePickingWindowSize); \
   ExitAfterCall(this,288,_Trac2,&_ret_arg,&iAccuratePickingWindowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetAccuratePickingWindowSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,289,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAccuratePickingWindowSizeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,289,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetAccuratePickingWindowSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,290,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAccuratePickingWindowSizeLock(iLocked); \
   ExitAfterCall(this,290,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_MouseDoubleClicDelay(CATLONG & ioMouseDoubleClicDelay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,291,&_Trac2,&ioMouseDoubleClicDelay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MouseDoubleClicDelay(ioMouseDoubleClicDelay); \
   ExitAfterCall(this,291,_Trac2,&_ret_arg,&ioMouseDoubleClicDelay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_MouseDoubleClicDelay(CATLONG iMouseDoubleClicDelay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,292,&_Trac2,&iMouseDoubleClicDelay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MouseDoubleClicDelay(iMouseDoubleClicDelay); \
   ExitAfterCall(this,292,_Trac2,&_ret_arg,&iMouseDoubleClicDelay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetMouseDoubleClicDelayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,293,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMouseDoubleClicDelayInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,293,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetMouseDoubleClicDelayLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,294,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMouseDoubleClicDelayLock(iLocked); \
   ExitAfterCall(this,294,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_AmbientActivation(CATLONG & ioAmbientActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,295,&_Trac2,&ioAmbientActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AmbientActivation(ioAmbientActivation); \
   ExitAfterCall(this,295,_Trac2,&_ret_arg,&ioAmbientActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_AmbientActivation(CATLONG iAmbientActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,296,&_Trac2,&iAmbientActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AmbientActivation(iAmbientActivation); \
   ExitAfterCall(this,296,_Trac2,&_ret_arg,&iAmbientActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetAmbientActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,297,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAmbientActivationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,297,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetAmbientActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,298,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAmbientActivationLock(iLocked); \
   ExitAfterCall(this,298,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DefaultDiffuseAmbientCoefficient(double & ioDefaultDiffuseAmbientCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,299,&_Trac2,&ioDefaultDiffuseAmbientCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultDiffuseAmbientCoefficient(ioDefaultDiffuseAmbientCoefficient); \
   ExitAfterCall(this,299,_Trac2,&_ret_arg,&ioDefaultDiffuseAmbientCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DefaultDiffuseAmbientCoefficient(double iDefaultDiffuseAmbientCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,300,&_Trac2,&iDefaultDiffuseAmbientCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultDiffuseAmbientCoefficient(iDefaultDiffuseAmbientCoefficient); \
   ExitAfterCall(this,300,_Trac2,&_ret_arg,&iDefaultDiffuseAmbientCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDefaultDiffuseAmbientCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,301,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultDiffuseAmbientCoefficientInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,301,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDefaultDiffuseAmbientCoefficientLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,302,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultDiffuseAmbientCoefficientLock(iLocked); \
   ExitAfterCall(this,302,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DefaultSpecularCoefficient(double & ioDefaultSpecularCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,303,&_Trac2,&ioDefaultSpecularCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultSpecularCoefficient(ioDefaultSpecularCoefficient); \
   ExitAfterCall(this,303,_Trac2,&_ret_arg,&ioDefaultSpecularCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DefaultSpecularCoefficient(double iDefaultSpecularCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,304,&_Trac2,&iDefaultSpecularCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultSpecularCoefficient(iDefaultSpecularCoefficient); \
   ExitAfterCall(this,304,_Trac2,&_ret_arg,&iDefaultSpecularCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDefaultSpecularCoefficientInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,305,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultSpecularCoefficientInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,305,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDefaultSpecularCoefficientLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,306,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultSpecularCoefficientLock(iLocked); \
   ExitAfterCall(this,306,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_DefaultShininess(double & ioDefaultShininess) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,307,&_Trac2,&ioDefaultShininess); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultShininess(ioDefaultShininess); \
   ExitAfterCall(this,307,_Trac2,&_ret_arg,&ioDefaultShininess); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_DefaultShininess(double iDefaultShininess) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,308,&_Trac2,&iDefaultShininess); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultShininess(iDefaultShininess); \
   ExitAfterCall(this,308,_Trac2,&_ret_arg,&iDefaultShininess); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetDefaultShininessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,309,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultShininessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,309,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetDefaultShininessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,310,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultShininessLock(iLocked); \
   ExitAfterCall(this,310,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::get_OpaqueFaces(CAT_VARIANT_BOOL & oOpaqueFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,311,&_Trac2,&oOpaqueFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OpaqueFaces(oOpaqueFaces); \
   ExitAfterCall(this,311,_Trac2,&_ret_arg,&oOpaqueFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::put_OpaqueFaces(CAT_VARIANT_BOOL iOpaqueFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,312,&_Trac2,&iOpaqueFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OpaqueFaces(iOpaqueFaces); \
   ExitAfterCall(this,312,_Trac2,&_ret_arg,&iOpaqueFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::GetOpaqueFacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,313,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOpaqueFacesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,313,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SetOpaqueFacesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,314,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOpaqueFacesLock(iLocked); \
   ExitAfterCall(this,314,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,315,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,315,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,316,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,316,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,317,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,317,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,318,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,318,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisualizationSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,319,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,319,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,320,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,320,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,321,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,321,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisualizationSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,322,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,322,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisualizationSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,323,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,323,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisualizationSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,324,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,324,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAVisualizationSettingAtt(classe) \
 \
 \
declare_TIE_CATIAVisualizationSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVisualizationSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVisualizationSettingAtt,"CATIAVisualizationSettingAtt",CATIAVisualizationSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVisualizationSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAVisualizationSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVisualizationSettingAtt##classe(classe::MetaObject(),CATIAVisualizationSettingAtt::MetaObject(),(void *)CreateTIECATIAVisualizationSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAVisualizationSettingAtt(classe) \
 \
 \
declare_TIE_CATIAVisualizationSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVisualizationSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVisualizationSettingAtt,"CATIAVisualizationSettingAtt",CATIAVisualizationSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVisualizationSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAVisualizationSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVisualizationSettingAtt##classe(classe::MetaObject(),CATIAVisualizationSettingAtt::MetaObject(),(void *)CreateTIECATIAVisualizationSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAVisualizationSettingAtt(classe) TIE_CATIAVisualizationSettingAtt(classe)
#else
#define BOA_CATIAVisualizationSettingAtt(classe) CATImplementBOA(CATIAVisualizationSettingAtt, classe)
#endif

#endif
