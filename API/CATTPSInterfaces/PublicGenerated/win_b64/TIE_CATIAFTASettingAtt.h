#ifndef __TIE_CATIAFTASettingAtt
#define __TIE_CATIAFTASettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFTASettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFTASettingAtt */
#define declare_TIE_CATIAFTASettingAtt(classe) \
 \
 \
class TIECATIAFTASettingAtt##classe : public CATIAFTASettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFTASettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetNonSemanticAllwaysUpgradeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetNonSemanticAllwaysUpgradeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_NonSemanticTolAllowed(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_NonSemanticTolAllowed(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetNonSemanticTolAllowedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetNonSemanticTolAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_NonSemanticDimAllowed(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_NonSemanticDimAllowed(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetNonSemanticDimAllowedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetNonSemanticDimAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_NoaCreation(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_NoaCreation(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetNoaCreationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetNoaCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_NonSemanticMarked(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_NonSemanticMarked(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetNonSemanticMarkedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetNonSemanticMarkedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_RotationSnapAngle(double & oValue); \
      virtual HRESULT __stdcall put_RotationSnapAngle(double iValue); \
      virtual HRESULT __stdcall SetRotationSnapAngleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetRotationSnapAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_RotationSnapAuto(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_RotationSnapAuto(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetRotationSnapAutoLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetRotationSnapAutoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ParametersInTree(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ParametersInTree(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetParametersInTreeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetParametersInTreeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ShiftedProfile(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ShiftedProfile(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetShiftedProfileLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetShiftedProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_HighlightDefAnnot(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_HighlightDefAnnot(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetHighlightDefAnnotLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetHighlightDefAnnotInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimORunCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimORunCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimORunCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimORunCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimORunMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimORunMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimORunModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimORunModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimBlankingCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimBlankingCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimBlankingCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimBlankingCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimBlankingMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimBlankingMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimBlankingModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimBlankingModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimBeforeCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimBeforeCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimBeforeCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimBeforeCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimBeforeMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimBeforeMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimBeforeModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimBeforeModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimAfterCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimAfterCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimAfterCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimAfterCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimAfterMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimAfterMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimAfterModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimAfterModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMoveValueCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMoveValueCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMoveValueCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMoveValueCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMoveValueMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMoveValueMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMoveValueModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMoveValueModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMoveDimLineCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMoveDimLineCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMoveDimLineCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMoveDimLineCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMoveDimLineMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMoveDimLineMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMoveDimLineModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMoveDimLineModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMove2dPartCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMove2dPartCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMove2dPartCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMove2dPartCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMove2dPartMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMove2dPartMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMove2dPartModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMove2dPartModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimOriDefaultSymb(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimOriDefaultSymb(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimOriDefaultSymbLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimOriDefaultSymbInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpBaseLength(double & oValue); \
      virtual HRESULT __stdcall put_DimLineUpBaseLength(double iValue); \
      virtual HRESULT __stdcall SetDimLineUpBaseLengthLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpBaseLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpBaseAngle(double & oValue); \
      virtual HRESULT __stdcall put_DimLineUpBaseAngle(double iValue); \
      virtual HRESULT __stdcall SetDimLineUpBaseAngleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpBaseAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpStack(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimLineUpStack(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimLineUpStackLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpStackInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpCumul(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimLineUpCumul(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimLineUpCumulLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpCumulInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpFunnel(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimLineUpFunnel(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimLineUpFunnelLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpFunnelInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimManualPositionning(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimManualPositionning(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimManualPositionningLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimManualPositionningInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimConstantOffset(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimConstantOffset(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimConstantOffsetLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimConstantOffsetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLinePosValue(double & oValue); \
      virtual HRESULT __stdcall put_DimLinePosValue(double iValue); \
      virtual HRESULT __stdcall SetDimLinePosValueLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLinePosValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimSnapping(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimSnapping(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimSnappingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMoveSubPart(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMoveSubPart(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMoveSubPartLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMoveSubPartInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimConfigureSnapping(CATFTADimConfigureSnapping & oValue); \
      virtual HRESULT __stdcall put_DimConfigureSnapping(CATFTADimConfigureSnapping iValue); \
      virtual HRESULT __stdcall SetDimConfigureSnappingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimConfigureSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimCreateOn(CATFTADimCreateOn & oValue); \
      virtual HRESULT __stdcall put_DimCreateOn(CATFTADimCreateOn iValue); \
      virtual HRESULT __stdcall SetDimCreateOnLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimCreateOnInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetNonSemanticAllwaysUpgradeGeneralTolLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetNonSemanticAllwaysUpgradeGeneralTolInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_GeneralTolClass(CATLONG & oValue); \
      virtual HRESULT __stdcall put_GeneralTolClass(CATLONG iValue); \
      virtual HRESULT __stdcall SetGeneralTolClassLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_AngulaireGeneralTolClass(CATLONG & oValue); \
      virtual HRESULT __stdcall put_AngulaireGeneralTolClass(CATLONG iValue); \
      virtual HRESULT __stdcall SetAngulaireGeneralTolClassLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAngulaireGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_BodyHideInCapture(CATLONG & oValue); \
      virtual HRESULT __stdcall put_BodyHideInCapture(CATLONG iValue); \
      virtual HRESULT __stdcall SetBodyHideInCaptureLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetBodyHideInCaptureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_SelectPublishedGeometry(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_SelectPublishedGeometry(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetSelectPublishedGeometryLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSelectPublishedGeometryInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_SectPattern(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_SectPattern(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetSectPatternLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_AlphabeticOrder(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_AlphabeticOrder(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetAlphabeticOrderLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAlphabeticOrderInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMoveLeaderCre(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMoveLeaderCre(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMoveLeaderCreLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMoveLeaderCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimMoveLeaderMod(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DimMoveLeaderMod(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetDimMoveLeaderModLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimMoveLeaderModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpOffsetToRefLength(double & oValue); \
      virtual HRESULT __stdcall put_DimLineUpOffsetToRefLength(double iValue); \
      virtual HRESULT __stdcall SetDimLineUpOffsetToRefLengthLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpOffsetToRefLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpOffsetToRefAngle(double & oValue); \
      virtual HRESULT __stdcall put_DimLineUpOffsetToRefAngle(double iValue); \
      virtual HRESULT __stdcall SetDimLineUpOffsetToRefAngleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpOffsetToRefAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpOffsetBetDimLength(double & oValue); \
      virtual HRESULT __stdcall put_DimLineUpOffsetBetDimLength(double iValue); \
      virtual HRESULT __stdcall SetDimLineUpOffsetBetDimLengthLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpOffsetBetDimLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DimLineUpOffsetBetDimAngle(double & oValue); \
      virtual HRESULT __stdcall put_DimLineUpOffsetBetDimAngle(double iValue); \
      virtual HRESULT __stdcall SetDimLineUpOffsetBetDimAngleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimLineUpOffsetBetDimAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_AnalysisDisplayMode(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_AnalysisDisplayMode(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetAnalysisDisplayModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAnalysisDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetAnnotDimOnDeletedGeomLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAnnotDimOnDeletedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetAnnotDimOnDeletedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetAnnotDimOnDeletedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall GetAnnotDimOnDeletedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnnotDimOnDeletedGeomColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetAnnotDimOnUnloadedGeomLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAnnotDimOnUnloadedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetAnnotDimOnUnloadedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetAnnotDimOnUnloadedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall GetAnnotDimOnUnloadedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnnotDimOnUnloadedGeomColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AnnotDimInvalid(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_AnnotDimInvalid(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetAnnotDimInvalidLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAnnotDimInvalidInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetAnnotDimInvalidColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetAnnotDimInvalidColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall GetAnnotDimInvalidColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnnotDimInvalidColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TrueDimension(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_TrueDimension(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetTrueDimensionLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetTrueDimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetTrueDimensionColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetTrueDimensionColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall GetTrueDimensionColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTrueDimensionColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AnnotOnZeroZSetting(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_AnnotOnZeroZSetting(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetAnnotOnZeroZSettingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAnnotOnZeroZSettingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_CATFTAChamferGeneralTolClass(CATLONG & oValue); \
      virtual HRESULT __stdcall put_CATFTAChamferGeneralTolClass(CATLONG iValue); \
      virtual HRESULT __stdcall SetCATFTAChamferGeneralTolClassLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetCATFTAChamferGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_CATFTAUseLastTolerances(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_CATFTAUseLastTolerances(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetCATFTAUseLastTolerancesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetCATFTAUseLastTolerancesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetCATFTAEdgesColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
      virtual HRESULT __stdcall SetCATFTAEdgesColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
      virtual HRESULT __stdcall SetCATFTAEdgesColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetCATFTAEdgesColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_CATFTAEdgesLineType(CATLONG & oValue); \
      virtual HRESULT __stdcall put_CATFTAEdgesLineType(CATLONG iValue); \
      virtual HRESULT __stdcall SetCATFTAEdgesLineTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetCATFTAEdgesLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_CATFTAEdgesThickness(CATLONG & oValue); \
      virtual HRESULT __stdcall put_CATFTAEdgesThickness(CATLONG iValue); \
      virtual HRESULT __stdcall SetCATFTAEdgesThicknessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetCATFTAEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_CATFTAUFAutoTolerancing(CATBSTR & oValue); \
      virtual HRESULT __stdcall put_CATFTAUFAutoTolerancing(const CATBSTR & iValue); \
      virtual HRESULT __stdcall SetCATFTAUFAutoTolerancingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetCATFTAUFAutoTolerancingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIAFTASettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetNonSemanticAllwaysUpgradeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetNonSemanticAllwaysUpgradeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_NonSemanticTolAllowed(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_NonSemanticTolAllowed(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetNonSemanticTolAllowedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetNonSemanticTolAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_NonSemanticDimAllowed(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_NonSemanticDimAllowed(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetNonSemanticDimAllowedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetNonSemanticDimAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_NoaCreation(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_NoaCreation(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetNoaCreationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetNoaCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_NonSemanticMarked(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_NonSemanticMarked(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetNonSemanticMarkedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetNonSemanticMarkedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_RotationSnapAngle(double & oValue); \
virtual HRESULT __stdcall put_RotationSnapAngle(double iValue); \
virtual HRESULT __stdcall SetRotationSnapAngleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetRotationSnapAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_RotationSnapAuto(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_RotationSnapAuto(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetRotationSnapAutoLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetRotationSnapAutoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ParametersInTree(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ParametersInTree(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetParametersInTreeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetParametersInTreeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ShiftedProfile(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ShiftedProfile(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetShiftedProfileLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetShiftedProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_HighlightDefAnnot(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_HighlightDefAnnot(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetHighlightDefAnnotLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetHighlightDefAnnotInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimORunCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimORunCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimORunCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimORunCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimORunMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimORunMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimORunModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimORunModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimBlankingCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimBlankingCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimBlankingCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimBlankingCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimBlankingMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimBlankingMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimBlankingModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimBlankingModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimBeforeCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimBeforeCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimBeforeCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimBeforeCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimBeforeMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimBeforeMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimBeforeModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimBeforeModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimAfterCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimAfterCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimAfterCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimAfterCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimAfterMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimAfterMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimAfterModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimAfterModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMoveValueCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMoveValueCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMoveValueCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMoveValueCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMoveValueMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMoveValueMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMoveValueModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMoveValueModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMoveDimLineCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMoveDimLineCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMoveDimLineCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMoveDimLineCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMoveDimLineMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMoveDimLineMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMoveDimLineModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMoveDimLineModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMove2dPartCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMove2dPartCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMove2dPartCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMove2dPartCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMove2dPartMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMove2dPartMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMove2dPartModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMove2dPartModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimOriDefaultSymb(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimOriDefaultSymb(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimOriDefaultSymbLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimOriDefaultSymbInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpBaseLength(double & oValue); \
virtual HRESULT __stdcall put_DimLineUpBaseLength(double iValue); \
virtual HRESULT __stdcall SetDimLineUpBaseLengthLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpBaseLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpBaseAngle(double & oValue); \
virtual HRESULT __stdcall put_DimLineUpBaseAngle(double iValue); \
virtual HRESULT __stdcall SetDimLineUpBaseAngleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpBaseAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpStack(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimLineUpStack(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimLineUpStackLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpStackInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpCumul(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimLineUpCumul(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimLineUpCumulLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpCumulInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpFunnel(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimLineUpFunnel(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimLineUpFunnelLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpFunnelInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimManualPositionning(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimManualPositionning(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimManualPositionningLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimManualPositionningInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimConstantOffset(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimConstantOffset(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimConstantOffsetLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimConstantOffsetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLinePosValue(double & oValue); \
virtual HRESULT __stdcall put_DimLinePosValue(double iValue); \
virtual HRESULT __stdcall SetDimLinePosValueLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLinePosValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimSnapping(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimSnapping(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimSnappingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMoveSubPart(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMoveSubPart(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMoveSubPartLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMoveSubPartInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimConfigureSnapping(CATFTADimConfigureSnapping & oValue); \
virtual HRESULT __stdcall put_DimConfigureSnapping(CATFTADimConfigureSnapping iValue); \
virtual HRESULT __stdcall SetDimConfigureSnappingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimConfigureSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimCreateOn(CATFTADimCreateOn & oValue); \
virtual HRESULT __stdcall put_DimCreateOn(CATFTADimCreateOn iValue); \
virtual HRESULT __stdcall SetDimCreateOnLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimCreateOnInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetNonSemanticAllwaysUpgradeGeneralTolLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetNonSemanticAllwaysUpgradeGeneralTolInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_GeneralTolClass(CATLONG & oValue); \
virtual HRESULT __stdcall put_GeneralTolClass(CATLONG iValue); \
virtual HRESULT __stdcall SetGeneralTolClassLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_AngulaireGeneralTolClass(CATLONG & oValue); \
virtual HRESULT __stdcall put_AngulaireGeneralTolClass(CATLONG iValue); \
virtual HRESULT __stdcall SetAngulaireGeneralTolClassLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAngulaireGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_BodyHideInCapture(CATLONG & oValue); \
virtual HRESULT __stdcall put_BodyHideInCapture(CATLONG iValue); \
virtual HRESULT __stdcall SetBodyHideInCaptureLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetBodyHideInCaptureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_SelectPublishedGeometry(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_SelectPublishedGeometry(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetSelectPublishedGeometryLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSelectPublishedGeometryInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_SectPattern(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_SectPattern(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetSectPatternLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_AlphabeticOrder(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_AlphabeticOrder(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetAlphabeticOrderLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAlphabeticOrderInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMoveLeaderCre(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMoveLeaderCre(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMoveLeaderCreLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMoveLeaderCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimMoveLeaderMod(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DimMoveLeaderMod(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetDimMoveLeaderModLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimMoveLeaderModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpOffsetToRefLength(double & oValue); \
virtual HRESULT __stdcall put_DimLineUpOffsetToRefLength(double iValue); \
virtual HRESULT __stdcall SetDimLineUpOffsetToRefLengthLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpOffsetToRefLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpOffsetToRefAngle(double & oValue); \
virtual HRESULT __stdcall put_DimLineUpOffsetToRefAngle(double iValue); \
virtual HRESULT __stdcall SetDimLineUpOffsetToRefAngleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpOffsetToRefAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpOffsetBetDimLength(double & oValue); \
virtual HRESULT __stdcall put_DimLineUpOffsetBetDimLength(double iValue); \
virtual HRESULT __stdcall SetDimLineUpOffsetBetDimLengthLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpOffsetBetDimLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DimLineUpOffsetBetDimAngle(double & oValue); \
virtual HRESULT __stdcall put_DimLineUpOffsetBetDimAngle(double iValue); \
virtual HRESULT __stdcall SetDimLineUpOffsetBetDimAngleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimLineUpOffsetBetDimAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_AnalysisDisplayMode(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_AnalysisDisplayMode(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetAnalysisDisplayModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAnalysisDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetAnnotDimOnDeletedGeomLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAnnotDimOnDeletedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetAnnotDimOnDeletedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetAnnotDimOnDeletedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall GetAnnotDimOnDeletedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnnotDimOnDeletedGeomColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetAnnotDimOnUnloadedGeomLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAnnotDimOnUnloadedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetAnnotDimOnUnloadedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetAnnotDimOnUnloadedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall GetAnnotDimOnUnloadedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnnotDimOnUnloadedGeomColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AnnotDimInvalid(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_AnnotDimInvalid(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetAnnotDimInvalidLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAnnotDimInvalidInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetAnnotDimInvalidColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetAnnotDimInvalidColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall GetAnnotDimInvalidColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnnotDimInvalidColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TrueDimension(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_TrueDimension(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetTrueDimensionLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetTrueDimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetTrueDimensionColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetTrueDimensionColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall GetTrueDimensionColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTrueDimensionColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AnnotOnZeroZSetting(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_AnnotOnZeroZSetting(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetAnnotOnZeroZSettingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAnnotOnZeroZSettingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_CATFTAChamferGeneralTolClass(CATLONG & oValue); \
virtual HRESULT __stdcall put_CATFTAChamferGeneralTolClass(CATLONG iValue); \
virtual HRESULT __stdcall SetCATFTAChamferGeneralTolClassLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetCATFTAChamferGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_CATFTAUseLastTolerances(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_CATFTAUseLastTolerances(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetCATFTAUseLastTolerancesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetCATFTAUseLastTolerancesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetCATFTAEdgesColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB); \
virtual HRESULT __stdcall SetCATFTAEdgesColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB); \
virtual HRESULT __stdcall SetCATFTAEdgesColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetCATFTAEdgesColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_CATFTAEdgesLineType(CATLONG & oValue); \
virtual HRESULT __stdcall put_CATFTAEdgesLineType(CATLONG iValue); \
virtual HRESULT __stdcall SetCATFTAEdgesLineTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetCATFTAEdgesLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_CATFTAEdgesThickness(CATLONG & oValue); \
virtual HRESULT __stdcall put_CATFTAEdgesThickness(CATLONG iValue); \
virtual HRESULT __stdcall SetCATFTAEdgesThicknessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetCATFTAEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_CATFTAUFAutoTolerancing(CATBSTR & oValue); \
virtual HRESULT __stdcall put_CATFTAUFAutoTolerancing(const CATBSTR & iValue); \
virtual HRESULT __stdcall SetCATFTAUFAutoTolerancingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetCATFTAUFAutoTolerancingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIAFTASettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NonSemanticAllwaysUpgrade(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NonSemanticAllwaysUpgrade(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetNonSemanticAllwaysUpgradeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNonSemanticAllwaysUpgradeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetNonSemanticAllwaysUpgradeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNonSemanticAllwaysUpgradeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_NonSemanticTolAllowed(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NonSemanticTolAllowed(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_NonSemanticTolAllowed(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NonSemanticTolAllowed(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetNonSemanticTolAllowedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNonSemanticTolAllowedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetNonSemanticTolAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNonSemanticTolAllowedInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_NonSemanticDimAllowed(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NonSemanticDimAllowed(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_NonSemanticDimAllowed(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NonSemanticDimAllowed(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetNonSemanticDimAllowedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNonSemanticDimAllowedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetNonSemanticDimAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNonSemanticDimAllowedInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_NoaCreation(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NoaCreation(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_NoaCreation(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NoaCreation(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetNoaCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNoaCreationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetNoaCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNoaCreationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_NonSemanticMarked(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NonSemanticMarked(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_NonSemanticMarked(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NonSemanticMarked(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetNonSemanticMarkedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNonSemanticMarkedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetNonSemanticMarkedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNonSemanticMarkedInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationSnapAngle(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RotationSnapAngle(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_RotationSnapAngle(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RotationSnapAngle(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetRotationSnapAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRotationSnapAngleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetRotationSnapAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRotationSnapAngleInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationSnapAuto(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RotationSnapAuto(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_RotationSnapAuto(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RotationSnapAuto(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetRotationSnapAutoLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRotationSnapAutoLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetRotationSnapAutoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRotationSnapAutoInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParametersInTree(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ParametersInTree(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParametersInTree(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ParametersInTree(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetParametersInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetParametersInTreeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetParametersInTreeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetParametersInTreeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShiftedProfile(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ShiftedProfile(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShiftedProfile(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ShiftedProfile(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetShiftedProfileLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShiftedProfileLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetShiftedProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShiftedProfileInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_HighlightDefAnnot(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_HighlightDefAnnot(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_HighlightDefAnnot(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_HighlightDefAnnot(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetHighlightDefAnnotLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHighlightDefAnnotLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetHighlightDefAnnotInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHighlightDefAnnotInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimORunCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimORunCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimORunCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimORunCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimORunCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimORunCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimORunCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimORunCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimORunMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimORunMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimORunMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimORunMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimORunModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimORunModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimORunModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimORunModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimBlankingCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimBlankingCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimBlankingCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimBlankingCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimBlankingCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimBlankingCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimBlankingCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimBlankingCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimBlankingMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimBlankingMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimBlankingMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimBlankingMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimBlankingModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimBlankingModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimBlankingModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimBlankingModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimBeforeCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimBeforeCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimBeforeCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimBeforeCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimBeforeCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimBeforeCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimBeforeCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimBeforeCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimBeforeMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimBeforeMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimBeforeMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimBeforeMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimBeforeModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimBeforeModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimBeforeModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimBeforeModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimAfterCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimAfterCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimAfterCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimAfterCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimAfterCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimAfterCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimAfterCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimAfterCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimAfterMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimAfterMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimAfterMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimAfterMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimAfterModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimAfterModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimAfterModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimAfterModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMoveValueCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMoveValueCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMoveValueCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMoveValueCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMoveValueCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMoveValueCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMoveValueCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMoveValueCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMoveValueMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMoveValueMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMoveValueMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMoveValueMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMoveValueModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMoveValueModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMoveValueModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMoveValueModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMoveDimLineCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMoveDimLineCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMoveDimLineCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMoveDimLineCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMoveDimLineCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMoveDimLineCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMoveDimLineCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMoveDimLineCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMoveDimLineMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMoveDimLineMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMoveDimLineMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMoveDimLineMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMoveDimLineModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMoveDimLineModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMoveDimLineModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMoveDimLineModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMove2dPartCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMove2dPartCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMove2dPartCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMove2dPartCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMove2dPartCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMove2dPartCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMove2dPartCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMove2dPartCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMove2dPartMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMove2dPartMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMove2dPartMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMove2dPartMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMove2dPartModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMove2dPartModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMove2dPartModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMove2dPartModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimOriDefaultSymb(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimOriDefaultSymb(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimOriDefaultSymb(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimOriDefaultSymb(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimOriDefaultSymbLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimOriDefaultSymbLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimOriDefaultSymbInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimOriDefaultSymbInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpBaseLength(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpBaseLength(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpBaseLength(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpBaseLength(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpBaseLengthLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpBaseLengthLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpBaseLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpBaseLengthInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpBaseAngle(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpBaseAngle(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpBaseAngle(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpBaseAngle(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpBaseAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpBaseAngleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpBaseAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpBaseAngleInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpStack(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpStack(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpStack(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpStack(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpStackLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpStackLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpStackInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpStackInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpCumul(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpCumul(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpCumul(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpCumul(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpCumulLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpCumulLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpCumulInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpCumulInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpFunnel(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpFunnel(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpFunnel(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpFunnel(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpFunnelLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpFunnelLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpFunnelInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpFunnelInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimManualPositionning(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimManualPositionning(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimManualPositionning(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimManualPositionning(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimManualPositionningLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimManualPositionningLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimManualPositionningInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimManualPositionningInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimConstantOffset(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimConstantOffset(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimConstantOffset(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimConstantOffset(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimConstantOffsetLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimConstantOffsetLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimConstantOffsetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimConstantOffsetInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLinePosValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLinePosValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLinePosValue(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLinePosValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLinePosValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLinePosValueLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLinePosValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLinePosValueInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimSnapping(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimSnapping(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimSnapping(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimSnapping(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimSnappingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimSnappingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimSnappingInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMoveSubPart(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMoveSubPart(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMoveSubPart(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMoveSubPart(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMoveSubPartLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMoveSubPartLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMoveSubPartInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMoveSubPartInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimConfigureSnapping(CATFTADimConfigureSnapping & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimConfigureSnapping(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimConfigureSnapping(CATFTADimConfigureSnapping iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimConfigureSnapping(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimConfigureSnappingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimConfigureSnappingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimConfigureSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimConfigureSnappingInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimCreateOn(CATFTADimCreateOn & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimCreateOn(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimCreateOn(CATFTADimCreateOn iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimCreateOn(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimCreateOnLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimCreateOnLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimCreateOnInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimCreateOnInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NonSemanticAllwaysUpgradeGeneralTol(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NonSemanticAllwaysUpgradeGeneralTol(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetNonSemanticAllwaysUpgradeGeneralTolLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNonSemanticAllwaysUpgradeGeneralTolLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetNonSemanticAllwaysUpgradeGeneralTolInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNonSemanticAllwaysUpgradeGeneralTolInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeneralTolClass(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GeneralTolClass(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_GeneralTolClass(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GeneralTolClass(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetGeneralTolClassLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGeneralTolClassLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGeneralTolClassInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngulaireGeneralTolClass(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AngulaireGeneralTolClass(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngulaireGeneralTolClass(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AngulaireGeneralTolClass(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngulaireGeneralTolClassLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAngulaireGeneralTolClassLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngulaireGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAngulaireGeneralTolClassInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_BodyHideInCapture(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BodyHideInCapture(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_BodyHideInCapture(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BodyHideInCapture(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetBodyHideInCaptureLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBodyHideInCaptureLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetBodyHideInCaptureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBodyHideInCaptureInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_SelectPublishedGeometry(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SelectPublishedGeometry(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SelectPublishedGeometry(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SelectPublishedGeometry(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetSelectPublishedGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSelectPublishedGeometryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSelectPublishedGeometryInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSelectPublishedGeometryInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectPattern(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SectPattern(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectPattern(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SectPattern(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetSectPatternLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSectPatternLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSectPatternInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_AlphabeticOrder(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AlphabeticOrder(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AlphabeticOrder(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AlphabeticOrder(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAlphabeticOrderLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAlphabeticOrderLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAlphabeticOrderInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAlphabeticOrderInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMoveLeaderCre(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMoveLeaderCre(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMoveLeaderCre(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMoveLeaderCre(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMoveLeaderCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMoveLeaderCreLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMoveLeaderCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMoveLeaderCreInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimMoveLeaderMod(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimMoveLeaderMod(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimMoveLeaderMod(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimMoveLeaderMod(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimMoveLeaderModLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimMoveLeaderModLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimMoveLeaderModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimMoveLeaderModInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpOffsetToRefLength(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpOffsetToRefLength(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpOffsetToRefLength(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpOffsetToRefLength(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpOffsetToRefLengthLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpOffsetToRefLengthLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpOffsetToRefLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpOffsetToRefLengthInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpOffsetToRefAngle(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpOffsetToRefAngle(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpOffsetToRefAngle(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpOffsetToRefAngle(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpOffsetToRefAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpOffsetToRefAngleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpOffsetToRefAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpOffsetToRefAngleInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpOffsetBetDimLength(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpOffsetBetDimLength(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpOffsetBetDimLength(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpOffsetBetDimLength(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpOffsetBetDimLengthLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpOffsetBetDimLengthLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpOffsetBetDimLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpOffsetBetDimLengthInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineUpOffsetBetDimAngle(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DimLineUpOffsetBetDimAngle(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineUpOffsetBetDimAngle(double iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DimLineUpOffsetBetDimAngle(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimLineUpOffsetBetDimAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimLineUpOffsetBetDimAngleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineUpOffsetBetDimAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimLineUpOffsetBetDimAngleInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisDisplayMode(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnalysisDisplayMode(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnalysisDisplayMode(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnalysisDisplayMode(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnalysisDisplayModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnalysisDisplayModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnalysisDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnalysisDisplayModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnnotDimOnDeletedGeom(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnnotDimOnDeletedGeom(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimOnDeletedGeomLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimOnDeletedGeomLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimOnDeletedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimOnDeletedGeomInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimOnDeletedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimOnDeletedGeomColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimOnDeletedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimOnDeletedGeomColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimOnDeletedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimOnDeletedGeomColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimOnDeletedGeomColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimOnDeletedGeomColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnnotDimOnUnloadedGeom(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnnotDimOnUnloadedGeom(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimOnUnloadedGeomLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimOnUnloadedGeomLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimOnUnloadedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimOnUnloadedGeomInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimOnUnloadedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimOnUnloadedGeomColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimOnUnloadedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimOnUnloadedGeomColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimOnUnloadedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimOnUnloadedGeomColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimOnUnloadedGeomColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimOnUnloadedGeomColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotDimInvalid(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnnotDimInvalid(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnnotDimInvalid(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnnotDimInvalid(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimInvalidLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimInvalidLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimInvalidInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimInvalidInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimInvalidColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimInvalidColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimInvalidColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimInvalidColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotDimInvalidColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotDimInvalidColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotDimInvalidColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotDimInvalidColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrueDimension(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TrueDimension(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrueDimension(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TrueDimension(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetTrueDimensionLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTrueDimensionLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrueDimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTrueDimensionInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrueDimensionColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTrueDimensionColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetTrueDimensionColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTrueDimensionColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrueDimensionColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTrueDimensionColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTrueDimensionColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTrueDimensionColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotOnZeroZSetting(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnnotOnZeroZSetting(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnnotOnZeroZSetting(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnnotOnZeroZSetting(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotOnZeroZSettingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotOnZeroZSettingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotOnZeroZSettingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotOnZeroZSettingInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_CATFTAChamferGeneralTolClass(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CATFTAChamferGeneralTolClass(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CATFTAChamferGeneralTolClass(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CATFTAChamferGeneralTolClass(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetCATFTAChamferGeneralTolClassLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCATFTAChamferGeneralTolClassLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetCATFTAChamferGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCATFTAChamferGeneralTolClassInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_CATFTAUseLastTolerances(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CATFTAUseLastTolerances(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CATFTAUseLastTolerances(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CATFTAUseLastTolerances(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetCATFTAUseLastTolerancesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCATFTAUseLastTolerancesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetCATFTAUseLastTolerancesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCATFTAUseLastTolerancesInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetCATFTAEdgesColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCATFTAEdgesColor(oValueR,oValueG,oValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetCATFTAEdgesColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCATFTAEdgesColor(iValueR,iValueG,iValueB)); \
} \
HRESULT __stdcall  ENVTIEName::SetCATFTAEdgesColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCATFTAEdgesColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetCATFTAEdgesColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCATFTAEdgesColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_CATFTAEdgesLineType(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CATFTAEdgesLineType(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CATFTAEdgesLineType(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CATFTAEdgesLineType(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetCATFTAEdgesLineTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCATFTAEdgesLineTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetCATFTAEdgesLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCATFTAEdgesLineTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_CATFTAEdgesThickness(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CATFTAEdgesThickness(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CATFTAEdgesThickness(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CATFTAEdgesThickness(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetCATFTAEdgesThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCATFTAEdgesThicknessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetCATFTAEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCATFTAEdgesThicknessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_CATFTAUFAutoTolerancing(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CATFTAUFAutoTolerancing(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CATFTAUFAutoTolerancing(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CATFTAUFAutoTolerancing(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetCATFTAUFAutoTolerancingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCATFTAUFAutoTolerancingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetCATFTAUFAutoTolerancingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCATFTAUFAutoTolerancingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFTASettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFTASettingAtt(classe)    TIECATIAFTASettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFTASettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFTASettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAFTASettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFTASettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFTASettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFTASettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NonSemanticAllwaysUpgrade(oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_NonSemanticAllwaysUpgrade(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NonSemanticAllwaysUpgrade(iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetNonSemanticAllwaysUpgradeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNonSemanticAllwaysUpgradeLock(iLocked); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetNonSemanticAllwaysUpgradeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNonSemanticAllwaysUpgradeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_NonSemanticTolAllowed(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NonSemanticTolAllowed(oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_NonSemanticTolAllowed(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NonSemanticTolAllowed(iValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetNonSemanticTolAllowedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNonSemanticTolAllowedLock(iLocked); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetNonSemanticTolAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNonSemanticTolAllowedInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_NonSemanticDimAllowed(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NonSemanticDimAllowed(oValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_NonSemanticDimAllowed(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NonSemanticDimAllowed(iValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetNonSemanticDimAllowedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNonSemanticDimAllowedLock(iLocked); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetNonSemanticDimAllowedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNonSemanticDimAllowedInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_NoaCreation(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NoaCreation(oValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_NoaCreation(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NoaCreation(iValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetNoaCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNoaCreationLock(iLocked); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetNoaCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNoaCreationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_NonSemanticMarked(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NonSemanticMarked(oValue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_NonSemanticMarked(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NonSemanticMarked(iValue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetNonSemanticMarkedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNonSemanticMarkedLock(iLocked); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetNonSemanticMarkedInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNonSemanticMarkedInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_RotationSnapAngle(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationSnapAngle(oValue); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_RotationSnapAngle(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RotationSnapAngle(iValue); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetRotationSnapAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRotationSnapAngleLock(iLocked); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetRotationSnapAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRotationSnapAngleInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_RotationSnapAuto(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationSnapAuto(oValue); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_RotationSnapAuto(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RotationSnapAuto(iValue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetRotationSnapAutoLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRotationSnapAutoLock(iLocked); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetRotationSnapAutoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRotationSnapAutoInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_ParametersInTree(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParametersInTree(oValue); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_ParametersInTree(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParametersInTree(iValue); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetParametersInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParametersInTreeLock(iLocked); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetParametersInTreeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParametersInTreeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_ShiftedProfile(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShiftedProfile(oValue); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_ShiftedProfile(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShiftedProfile(iValue); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetShiftedProfileLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShiftedProfileLock(iLocked); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetShiftedProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShiftedProfileInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_HighlightDefAnnot(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HighlightDefAnnot(oValue); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_HighlightDefAnnot(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HighlightDefAnnot(iValue); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetHighlightDefAnnotLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHighlightDefAnnotLock(iLocked); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetHighlightDefAnnotInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHighlightDefAnnotInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimORunCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimORunCre(oValue); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimORunCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimORunCre(iValue); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimORunCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimORunCreLock(iLocked); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimORunCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimORunCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimORunMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimORunMod(oValue); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimORunMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimORunMod(iValue); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimORunModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimORunModLock(iLocked); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimORunModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimORunModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimBlankingCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimBlankingCre(oValue); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimBlankingCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimBlankingCre(iValue); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimBlankingCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimBlankingCreLock(iLocked); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimBlankingCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimBlankingCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimBlankingMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimBlankingMod(oValue); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimBlankingMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimBlankingMod(iValue); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimBlankingModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimBlankingModLock(iLocked); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimBlankingModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimBlankingModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimBeforeCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimBeforeCre(oValue); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimBeforeCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimBeforeCre(iValue); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimBeforeCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimBeforeCreLock(iLocked); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimBeforeCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimBeforeCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimBeforeMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimBeforeMod(oValue); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimBeforeMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimBeforeMod(iValue); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimBeforeModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimBeforeModLock(iLocked); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimBeforeModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimBeforeModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimAfterCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimAfterCre(oValue); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimAfterCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimAfterCre(iValue); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimAfterCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimAfterCreLock(iLocked); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimAfterCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimAfterCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimAfterMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimAfterMod(oValue); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimAfterMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimAfterMod(iValue); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimAfterModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimAfterModLock(iLocked); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimAfterModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimAfterModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMoveValueCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMoveValueCre(oValue); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMoveValueCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMoveValueCre(iValue); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMoveValueCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMoveValueCreLock(iLocked); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMoveValueCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMoveValueCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMoveValueMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMoveValueMod(oValue); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMoveValueMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMoveValueMod(iValue); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMoveValueModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMoveValueModLock(iLocked); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMoveValueModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMoveValueModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMoveDimLineCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMoveDimLineCre(oValue); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMoveDimLineCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMoveDimLineCre(iValue); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMoveDimLineCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMoveDimLineCreLock(iLocked); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMoveDimLineCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMoveDimLineCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMoveDimLineMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMoveDimLineMod(oValue); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMoveDimLineMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMoveDimLineMod(iValue); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMoveDimLineModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMoveDimLineModLock(iLocked); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMoveDimLineModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMoveDimLineModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMove2dPartCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMove2dPartCre(oValue); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMove2dPartCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMove2dPartCre(iValue); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMove2dPartCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMove2dPartCreLock(iLocked); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMove2dPartCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMove2dPartCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMove2dPartMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMove2dPartMod(oValue); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMove2dPartMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMove2dPartMod(iValue); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMove2dPartModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMove2dPartModLock(iLocked); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMove2dPartModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMove2dPartModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimOriDefaultSymb(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimOriDefaultSymb(oValue); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimOriDefaultSymb(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimOriDefaultSymb(iValue); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimOriDefaultSymbLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimOriDefaultSymbLock(iLocked); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimOriDefaultSymbInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimOriDefaultSymbInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpBaseLength(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpBaseLength(oValue); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpBaseLength(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpBaseLength(iValue); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpBaseLengthLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpBaseLengthLock(iLocked); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpBaseLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpBaseLengthInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpBaseAngle(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpBaseAngle(oValue); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpBaseAngle(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpBaseAngle(iValue); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpBaseAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpBaseAngleLock(iLocked); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpBaseAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpBaseAngleInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpStack(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpStack(oValue); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpStack(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpStack(iValue); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpStackLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpStackLock(iLocked); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpStackInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpStackInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpCumul(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpCumul(oValue); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpCumul(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpCumul(iValue); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpCumulLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpCumulLock(iLocked); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpCumulInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpCumulInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpFunnel(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpFunnel(oValue); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpFunnel(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpFunnel(iValue); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpFunnelLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpFunnelLock(iLocked); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpFunnelInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpFunnelInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimManualPositionning(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimManualPositionning(oValue); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimManualPositionning(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimManualPositionning(iValue); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimManualPositionningLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimManualPositionningLock(iLocked); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimManualPositionningInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimManualPositionningInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimConstantOffset(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimConstantOffset(oValue); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimConstantOffset(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimConstantOffset(iValue); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimConstantOffsetLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimConstantOffsetLock(iLocked); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimConstantOffsetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimConstantOffsetInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLinePosValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLinePosValue(oValue); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLinePosValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLinePosValue(iValue); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLinePosValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,131,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLinePosValueLock(iLocked); \
   ExitAfterCall(this,131,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLinePosValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,132,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLinePosValueInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,132,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimSnapping(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,133,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimSnapping(oValue); \
   ExitAfterCall(this,133,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimSnapping(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,134,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimSnapping(iValue); \
   ExitAfterCall(this,134,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimSnappingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,135,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimSnappingLock(iLocked); \
   ExitAfterCall(this,135,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,136,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimSnappingInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,136,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMoveSubPart(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,137,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMoveSubPart(oValue); \
   ExitAfterCall(this,137,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMoveSubPart(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,138,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMoveSubPart(iValue); \
   ExitAfterCall(this,138,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMoveSubPartLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,139,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMoveSubPartLock(iLocked); \
   ExitAfterCall(this,139,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMoveSubPartInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,140,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMoveSubPartInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,140,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimConfigureSnapping(CATFTADimConfigureSnapping & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,141,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimConfigureSnapping(oValue); \
   ExitAfterCall(this,141,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimConfigureSnapping(CATFTADimConfigureSnapping iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,142,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimConfigureSnapping(iValue); \
   ExitAfterCall(this,142,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimConfigureSnappingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,143,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimConfigureSnappingLock(iLocked); \
   ExitAfterCall(this,143,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimConfigureSnappingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,144,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimConfigureSnappingInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,144,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimCreateOn(CATFTADimCreateOn & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,145,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimCreateOn(oValue); \
   ExitAfterCall(this,145,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimCreateOn(CATFTADimCreateOn iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,146,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimCreateOn(iValue); \
   ExitAfterCall(this,146,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimCreateOnLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,147,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimCreateOnLock(iLocked); \
   ExitAfterCall(this,147,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimCreateOnInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,148,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimCreateOnInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,148,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,149,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NonSemanticAllwaysUpgradeGeneralTol(oValue); \
   ExitAfterCall(this,149,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_NonSemanticAllwaysUpgradeGeneralTol(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,150,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NonSemanticAllwaysUpgradeGeneralTol(iValue); \
   ExitAfterCall(this,150,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetNonSemanticAllwaysUpgradeGeneralTolLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,151,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNonSemanticAllwaysUpgradeGeneralTolLock(iLocked); \
   ExitAfterCall(this,151,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetNonSemanticAllwaysUpgradeGeneralTolInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,152,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNonSemanticAllwaysUpgradeGeneralTolInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,152,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_GeneralTolClass(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,153,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeneralTolClass(oValue); \
   ExitAfterCall(this,153,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_GeneralTolClass(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,154,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GeneralTolClass(iValue); \
   ExitAfterCall(this,154,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetGeneralTolClassLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,155,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeneralTolClassLock(iLocked); \
   ExitAfterCall(this,155,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,156,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeneralTolClassInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,156,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_AngulaireGeneralTolClass(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,157,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngulaireGeneralTolClass(oValue); \
   ExitAfterCall(this,157,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_AngulaireGeneralTolClass(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,158,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngulaireGeneralTolClass(iValue); \
   ExitAfterCall(this,158,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAngulaireGeneralTolClassLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,159,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngulaireGeneralTolClassLock(iLocked); \
   ExitAfterCall(this,159,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAngulaireGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,160,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngulaireGeneralTolClassInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,160,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_BodyHideInCapture(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,161,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BodyHideInCapture(oValue); \
   ExitAfterCall(this,161,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_BodyHideInCapture(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,162,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BodyHideInCapture(iValue); \
   ExitAfterCall(this,162,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetBodyHideInCaptureLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,163,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBodyHideInCaptureLock(iLocked); \
   ExitAfterCall(this,163,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetBodyHideInCaptureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,164,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBodyHideInCaptureInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,164,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_SelectPublishedGeometry(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,165,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SelectPublishedGeometry(oValue); \
   ExitAfterCall(this,165,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_SelectPublishedGeometry(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,166,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SelectPublishedGeometry(iValue); \
   ExitAfterCall(this,166,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetSelectPublishedGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,167,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelectPublishedGeometryLock(iLocked); \
   ExitAfterCall(this,167,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetSelectPublishedGeometryInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,168,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectPublishedGeometryInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,168,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_SectPattern(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,169,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectPattern(oValue); \
   ExitAfterCall(this,169,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_SectPattern(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,170,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectPattern(iValue); \
   ExitAfterCall(this,170,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetSectPatternLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,171,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSectPatternLock(iLocked); \
   ExitAfterCall(this,171,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,172,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectPatternInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,172,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_AlphabeticOrder(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,173,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AlphabeticOrder(oValue); \
   ExitAfterCall(this,173,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_AlphabeticOrder(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,174,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AlphabeticOrder(iValue); \
   ExitAfterCall(this,174,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAlphabeticOrderLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,175,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAlphabeticOrderLock(iLocked); \
   ExitAfterCall(this,175,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAlphabeticOrderInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,176,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlphabeticOrderInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,176,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMoveLeaderCre(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,177,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMoveLeaderCre(oValue); \
   ExitAfterCall(this,177,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMoveLeaderCre(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,178,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMoveLeaderCre(iValue); \
   ExitAfterCall(this,178,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMoveLeaderCreLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,179,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMoveLeaderCreLock(iLocked); \
   ExitAfterCall(this,179,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMoveLeaderCreInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,180,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMoveLeaderCreInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,180,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimMoveLeaderMod(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,181,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimMoveLeaderMod(oValue); \
   ExitAfterCall(this,181,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimMoveLeaderMod(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,182,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimMoveLeaderMod(iValue); \
   ExitAfterCall(this,182,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimMoveLeaderModLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,183,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimMoveLeaderModLock(iLocked); \
   ExitAfterCall(this,183,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimMoveLeaderModInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,184,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimMoveLeaderModInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,184,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpOffsetToRefLength(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,185,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpOffsetToRefLength(oValue); \
   ExitAfterCall(this,185,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpOffsetToRefLength(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,186,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpOffsetToRefLength(iValue); \
   ExitAfterCall(this,186,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpOffsetToRefLengthLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,187,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpOffsetToRefLengthLock(iLocked); \
   ExitAfterCall(this,187,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpOffsetToRefLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,188,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpOffsetToRefLengthInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,188,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpOffsetToRefAngle(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,189,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpOffsetToRefAngle(oValue); \
   ExitAfterCall(this,189,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpOffsetToRefAngle(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,190,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpOffsetToRefAngle(iValue); \
   ExitAfterCall(this,190,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpOffsetToRefAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,191,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpOffsetToRefAngleLock(iLocked); \
   ExitAfterCall(this,191,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpOffsetToRefAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,192,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpOffsetToRefAngleInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,192,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpOffsetBetDimLength(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,193,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpOffsetBetDimLength(oValue); \
   ExitAfterCall(this,193,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpOffsetBetDimLength(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,194,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpOffsetBetDimLength(iValue); \
   ExitAfterCall(this,194,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpOffsetBetDimLengthLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,195,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpOffsetBetDimLengthLock(iLocked); \
   ExitAfterCall(this,195,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpOffsetBetDimLengthInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,196,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpOffsetBetDimLengthInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,196,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_DimLineUpOffsetBetDimAngle(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,197,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineUpOffsetBetDimAngle(oValue); \
   ExitAfterCall(this,197,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_DimLineUpOffsetBetDimAngle(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,198,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineUpOffsetBetDimAngle(iValue); \
   ExitAfterCall(this,198,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetDimLineUpOffsetBetDimAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,199,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimLineUpOffsetBetDimAngleLock(iLocked); \
   ExitAfterCall(this,199,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetDimLineUpOffsetBetDimAngleInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,200,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineUpOffsetBetDimAngleInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,200,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_AnalysisDisplayMode(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,201,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisDisplayMode(oValue); \
   ExitAfterCall(this,201,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_AnalysisDisplayMode(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,202,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnalysisDisplayMode(iValue); \
   ExitAfterCall(this,202,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnalysisDisplayModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,203,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnalysisDisplayModeLock(iLocked); \
   ExitAfterCall(this,203,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnalysisDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,204,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnalysisDisplayModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,204,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,205,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotDimOnDeletedGeom(oValue); \
   ExitAfterCall(this,205,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_AnnotDimOnDeletedGeom(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,206,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnnotDimOnDeletedGeom(iValue); \
   ExitAfterCall(this,206,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimOnDeletedGeomLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,207,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimOnDeletedGeomLock(iLocked); \
   ExitAfterCall(this,207,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimOnDeletedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,208,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimOnDeletedGeomInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,208,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimOnDeletedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,209,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimOnDeletedGeomColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,209,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimOnDeletedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,210,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimOnDeletedGeomColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,210,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimOnDeletedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,211,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimOnDeletedGeomColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,211,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimOnDeletedGeomColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,212,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimOnDeletedGeomColorLock(iLocked); \
   ExitAfterCall(this,212,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,213,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotDimOnUnloadedGeom(oValue); \
   ExitAfterCall(this,213,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_AnnotDimOnUnloadedGeom(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,214,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnnotDimOnUnloadedGeom(iValue); \
   ExitAfterCall(this,214,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimOnUnloadedGeomLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,215,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimOnUnloadedGeomLock(iLocked); \
   ExitAfterCall(this,215,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimOnUnloadedGeomInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,216,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimOnUnloadedGeomInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,216,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimOnUnloadedGeomColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,217,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimOnUnloadedGeomColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,217,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimOnUnloadedGeomColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,218,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimOnUnloadedGeomColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,218,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimOnUnloadedGeomColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,219,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimOnUnloadedGeomColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,219,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimOnUnloadedGeomColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,220,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimOnUnloadedGeomColorLock(iLocked); \
   ExitAfterCall(this,220,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_AnnotDimInvalid(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,221,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotDimInvalid(oValue); \
   ExitAfterCall(this,221,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_AnnotDimInvalid(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,222,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnnotDimInvalid(iValue); \
   ExitAfterCall(this,222,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimInvalidLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,223,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimInvalidLock(iLocked); \
   ExitAfterCall(this,223,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimInvalidInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,224,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimInvalidInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,224,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimInvalidColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,225,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimInvalidColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,225,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimInvalidColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,226,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimInvalidColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,226,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotDimInvalidColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,227,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotDimInvalidColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,227,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotDimInvalidColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,228,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotDimInvalidColorLock(iLocked); \
   ExitAfterCall(this,228,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_TrueDimension(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,229,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrueDimension(oValue); \
   ExitAfterCall(this,229,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_TrueDimension(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,230,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrueDimension(iValue); \
   ExitAfterCall(this,230,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetTrueDimensionLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,231,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTrueDimensionLock(iLocked); \
   ExitAfterCall(this,231,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetTrueDimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,232,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrueDimensionInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,232,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetTrueDimensionColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,233,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrueDimensionColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,233,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetTrueDimensionColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,234,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTrueDimensionColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,234,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetTrueDimensionColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,235,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrueDimensionColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,235,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetTrueDimensionColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,236,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTrueDimensionColorLock(iLocked); \
   ExitAfterCall(this,236,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_AnnotOnZeroZSetting(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,237,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotOnZeroZSetting(oValue); \
   ExitAfterCall(this,237,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_AnnotOnZeroZSetting(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,238,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnnotOnZeroZSetting(iValue); \
   ExitAfterCall(this,238,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetAnnotOnZeroZSettingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,239,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotOnZeroZSettingLock(iLocked); \
   ExitAfterCall(this,239,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetAnnotOnZeroZSettingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,240,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotOnZeroZSettingInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,240,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_CATFTAChamferGeneralTolClass(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,241,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CATFTAChamferGeneralTolClass(oValue); \
   ExitAfterCall(this,241,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_CATFTAChamferGeneralTolClass(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,242,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CATFTAChamferGeneralTolClass(iValue); \
   ExitAfterCall(this,242,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetCATFTAChamferGeneralTolClassLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,243,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCATFTAChamferGeneralTolClassLock(iLocked); \
   ExitAfterCall(this,243,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetCATFTAChamferGeneralTolClassInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,244,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCATFTAChamferGeneralTolClassInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,244,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_CATFTAUseLastTolerances(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,245,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CATFTAUseLastTolerances(oValue); \
   ExitAfterCall(this,245,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_CATFTAUseLastTolerances(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,246,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CATFTAUseLastTolerances(iValue); \
   ExitAfterCall(this,246,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetCATFTAUseLastTolerancesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,247,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCATFTAUseLastTolerancesLock(iLocked); \
   ExitAfterCall(this,247,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetCATFTAUseLastTolerancesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,248,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCATFTAUseLastTolerancesInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,248,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetCATFTAEdgesColor(CATLONG & oValueR, CATLONG & oValueG, CATLONG & oValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,249,&_Trac2,&oValueR,&oValueG,&oValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCATFTAEdgesColor(oValueR,oValueG,oValueB); \
   ExitAfterCall(this,249,_Trac2,&_ret_arg,&oValueR,&oValueG,&oValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetCATFTAEdgesColor(CATLONG iValueR, CATLONG iValueG, CATLONG iValueB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,250,&_Trac2,&iValueR,&iValueG,&iValueB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCATFTAEdgesColor(iValueR,iValueG,iValueB); \
   ExitAfterCall(this,250,_Trac2,&_ret_arg,&iValueR,&iValueG,&iValueB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetCATFTAEdgesColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,251,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCATFTAEdgesColorLock(iLocked); \
   ExitAfterCall(this,251,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetCATFTAEdgesColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,252,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCATFTAEdgesColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,252,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_CATFTAEdgesLineType(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,253,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CATFTAEdgesLineType(oValue); \
   ExitAfterCall(this,253,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_CATFTAEdgesLineType(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,254,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CATFTAEdgesLineType(iValue); \
   ExitAfterCall(this,254,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetCATFTAEdgesLineTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,255,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCATFTAEdgesLineTypeLock(iLocked); \
   ExitAfterCall(this,255,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetCATFTAEdgesLineTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,256,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCATFTAEdgesLineTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,256,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_CATFTAEdgesThickness(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,257,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CATFTAEdgesThickness(oValue); \
   ExitAfterCall(this,257,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_CATFTAEdgesThickness(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,258,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CATFTAEdgesThickness(iValue); \
   ExitAfterCall(this,258,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetCATFTAEdgesThicknessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,259,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCATFTAEdgesThicknessLock(iLocked); \
   ExitAfterCall(this,259,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetCATFTAEdgesThicknessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,260,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCATFTAEdgesThicknessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,260,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::get_CATFTAUFAutoTolerancing(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,261,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CATFTAUFAutoTolerancing(oValue); \
   ExitAfterCall(this,261,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::put_CATFTAUFAutoTolerancing(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,262,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CATFTAUFAutoTolerancing(iValue); \
   ExitAfterCall(this,262,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SetCATFTAUFAutoTolerancingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,263,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCATFTAUFAutoTolerancingLock(iLocked); \
   ExitAfterCall(this,263,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::GetCATFTAUFAutoTolerancingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,264,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCATFTAUFAutoTolerancingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,264,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,265,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,265,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,266,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,266,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,267,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,267,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,268,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,268,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTASettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,269,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,269,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTASettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,270,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,270,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTASettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,271,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,271,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTASettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,272,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,272,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTASettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,273,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,273,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTASettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,274,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,274,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFTASettingAtt(classe) \
 \
 \
declare_TIE_CATIAFTASettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFTASettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFTASettingAtt,"CATIAFTASettingAtt",CATIAFTASettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFTASettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFTASettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFTASettingAtt##classe(classe::MetaObject(),CATIAFTASettingAtt::MetaObject(),(void *)CreateTIECATIAFTASettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFTASettingAtt(classe) \
 \
 \
declare_TIE_CATIAFTASettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFTASettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFTASettingAtt,"CATIAFTASettingAtt",CATIAFTASettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFTASettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFTASettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFTASettingAtt##classe(classe::MetaObject(),CATIAFTASettingAtt::MetaObject(),(void *)CreateTIECATIAFTASettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFTASettingAtt(classe) TIE_CATIAFTASettingAtt(classe)
#else
#define BOA_CATIAFTASettingAtt(classe) CATImplementBOA(CATIAFTASettingAtt, classe)
#endif

#endif
