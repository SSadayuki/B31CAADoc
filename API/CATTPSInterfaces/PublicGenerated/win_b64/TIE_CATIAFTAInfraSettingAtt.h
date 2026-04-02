#ifndef __TIE_CATIAFTAInfraSettingAtt
#define __TIE_CATIAFTAInfraSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFTAInfraSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFTAInfraSettingAtt */
#define declare_TIE_CATIAFTAInfraSettingAtt(classe) \
 \
 \
class TIECATIAFTAInfraSettingAtt##classe : public CATIAFTAInfraSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFTAInfraSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Standard(CATBSTR & oStandard); \
      virtual HRESULT __stdcall put_Standard(const CATBSTR & iStandard); \
      virtual HRESULT __stdcall SetStandardLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetStandardInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_LeaderAssociativity(CATFTALeaderAssociativity & oLeaderAssociativity); \
      virtual HRESULT __stdcall put_LeaderAssociativity(CATFTALeaderAssociativity iLeaderAssociativity); \
      virtual HRESULT __stdcall SetLeaderAssociativityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetLeaderAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_GridDisplay(CAT_VARIANT_BOOL & oGridDisplay); \
      virtual HRESULT __stdcall put_GridDisplay(CAT_VARIANT_BOOL iGridDisplay); \
      virtual HRESULT __stdcall SetGridDisplayLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetGridDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_GridSnapPoint(CAT_VARIANT_BOOL & oGridSnapPoint); \
      virtual HRESULT __stdcall put_GridSnapPoint(CAT_VARIANT_BOOL iGridSnapPoint); \
      virtual HRESULT __stdcall SetGridSnapPointLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetGridSnapPointInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_AllowDistortions(CAT_VARIANT_BOOL & oAllowDistortions); \
      virtual HRESULT __stdcall put_AllowDistortions(CAT_VARIANT_BOOL iAllowDistortions); \
      virtual HRESULT __stdcall SetAllowDistortionsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetAllowDistortionsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_GridPrimarySpacing(double & oGridPrimarySpacing); \
      virtual HRESULT __stdcall put_GridPrimarySpacing(double iGridPrimarySpacing); \
      virtual HRESULT __stdcall SetGridPrimarySpacingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetGridPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_GridSecondaryStep(CATLONG & oGridSecondaryStep); \
      virtual HRESULT __stdcall put_GridSecondaryStep(CATLONG iGridSecondaryStep); \
      virtual HRESULT __stdcall SetGridSecondaryStepLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetGridSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_GridVPrimarySpacing(double & oGridVPrimarySpacing); \
      virtual HRESULT __stdcall put_GridVPrimarySpacing(double iGridVPrimarySpacing); \
      virtual HRESULT __stdcall SetGridVPrimarySpacingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetGridVPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_GridVSecondaryStep(CATLONG & oGridVSecondaryStep); \
      virtual HRESULT __stdcall put_GridVSecondaryStep(CATLONG iGridVSecondaryStep); \
      virtual HRESULT __stdcall SetGridVSecondaryStepLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetGridVSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_UnderSet(CAT_VARIANT_BOOL & oUnderSet); \
      virtual HRESULT __stdcall put_UnderSet(CAT_VARIANT_BOOL iUnderSet); \
      virtual HRESULT __stdcall SetUnderSetLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetUnderSetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_UnderView(CAT_VARIANT_BOOL & oUnderView); \
      virtual HRESULT __stdcall put_UnderView(CAT_VARIANT_BOOL iUnderView); \
      virtual HRESULT __stdcall SetUnderViewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetUnderViewInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_UnderFeature(CAT_VARIANT_BOOL & oUnderFeature); \
      virtual HRESULT __stdcall put_UnderFeature(CAT_VARIANT_BOOL iUnderFeature); \
      virtual HRESULT __stdcall SetUnderFeatureLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetUnderFeatureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_SaveInCGR(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_SaveInCGR(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetSaveInCGRLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSaveInCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ManRefSiz(double & oValue); \
      virtual HRESULT __stdcall put_ManRefSiz(double iValue); \
      virtual HRESULT __stdcall SetManRefSizLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetManRefSizInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ManZooCap(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ManZooCap(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetManZooCapLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetManZooCapInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_MoveAfterCreation(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_MoveAfterCreation(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetMoveAfterCreationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetMoveAfterCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ViewAssociativity(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ViewAssociativity(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetViewAssociativityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetViewAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ViewReferential(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ViewReferential(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetViewReferentialLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetViewReferentialInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ViewReferentialZoomable(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ViewReferentialZoomable(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetViewReferentialZoomableLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetViewReferentialZoomableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ViewProfile(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_ViewProfile(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetViewProfileLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetViewProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIAFTAInfraSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Standard(CATBSTR & oStandard); \
virtual HRESULT __stdcall put_Standard(const CATBSTR & iStandard); \
virtual HRESULT __stdcall SetStandardLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetStandardInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_LeaderAssociativity(CATFTALeaderAssociativity & oLeaderAssociativity); \
virtual HRESULT __stdcall put_LeaderAssociativity(CATFTALeaderAssociativity iLeaderAssociativity); \
virtual HRESULT __stdcall SetLeaderAssociativityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetLeaderAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_GridDisplay(CAT_VARIANT_BOOL & oGridDisplay); \
virtual HRESULT __stdcall put_GridDisplay(CAT_VARIANT_BOOL iGridDisplay); \
virtual HRESULT __stdcall SetGridDisplayLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetGridDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_GridSnapPoint(CAT_VARIANT_BOOL & oGridSnapPoint); \
virtual HRESULT __stdcall put_GridSnapPoint(CAT_VARIANT_BOOL iGridSnapPoint); \
virtual HRESULT __stdcall SetGridSnapPointLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetGridSnapPointInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_AllowDistortions(CAT_VARIANT_BOOL & oAllowDistortions); \
virtual HRESULT __stdcall put_AllowDistortions(CAT_VARIANT_BOOL iAllowDistortions); \
virtual HRESULT __stdcall SetAllowDistortionsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetAllowDistortionsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_GridPrimarySpacing(double & oGridPrimarySpacing); \
virtual HRESULT __stdcall put_GridPrimarySpacing(double iGridPrimarySpacing); \
virtual HRESULT __stdcall SetGridPrimarySpacingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetGridPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_GridSecondaryStep(CATLONG & oGridSecondaryStep); \
virtual HRESULT __stdcall put_GridSecondaryStep(CATLONG iGridSecondaryStep); \
virtual HRESULT __stdcall SetGridSecondaryStepLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetGridSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_GridVPrimarySpacing(double & oGridVPrimarySpacing); \
virtual HRESULT __stdcall put_GridVPrimarySpacing(double iGridVPrimarySpacing); \
virtual HRESULT __stdcall SetGridVPrimarySpacingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetGridVPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_GridVSecondaryStep(CATLONG & oGridVSecondaryStep); \
virtual HRESULT __stdcall put_GridVSecondaryStep(CATLONG iGridVSecondaryStep); \
virtual HRESULT __stdcall SetGridVSecondaryStepLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetGridVSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_UnderSet(CAT_VARIANT_BOOL & oUnderSet); \
virtual HRESULT __stdcall put_UnderSet(CAT_VARIANT_BOOL iUnderSet); \
virtual HRESULT __stdcall SetUnderSetLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetUnderSetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_UnderView(CAT_VARIANT_BOOL & oUnderView); \
virtual HRESULT __stdcall put_UnderView(CAT_VARIANT_BOOL iUnderView); \
virtual HRESULT __stdcall SetUnderViewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetUnderViewInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_UnderFeature(CAT_VARIANT_BOOL & oUnderFeature); \
virtual HRESULT __stdcall put_UnderFeature(CAT_VARIANT_BOOL iUnderFeature); \
virtual HRESULT __stdcall SetUnderFeatureLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetUnderFeatureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_SaveInCGR(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_SaveInCGR(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetSaveInCGRLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSaveInCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ManRefSiz(double & oValue); \
virtual HRESULT __stdcall put_ManRefSiz(double iValue); \
virtual HRESULT __stdcall SetManRefSizLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetManRefSizInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ManZooCap(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ManZooCap(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetManZooCapLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetManZooCapInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_MoveAfterCreation(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_MoveAfterCreation(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetMoveAfterCreationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetMoveAfterCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ViewAssociativity(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ViewAssociativity(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetViewAssociativityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetViewAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ViewReferential(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ViewReferential(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetViewReferentialLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetViewReferentialInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ViewReferentialZoomable(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ViewReferentialZoomable(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetViewReferentialZoomableLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetViewReferentialZoomableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ViewProfile(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_ViewProfile(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetViewProfileLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetViewProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIAFTAInfraSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Standard(CATBSTR & oStandard) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Standard(oStandard)); \
} \
HRESULT __stdcall  ENVTIEName::put_Standard(const CATBSTR & iStandard) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Standard(iStandard)); \
} \
HRESULT __stdcall  ENVTIEName::SetStandardLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStandardLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetStandardInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStandardInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_LeaderAssociativity(CATFTALeaderAssociativity & oLeaderAssociativity) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LeaderAssociativity(oLeaderAssociativity)); \
} \
HRESULT __stdcall  ENVTIEName::put_LeaderAssociativity(CATFTALeaderAssociativity iLeaderAssociativity) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LeaderAssociativity(iLeaderAssociativity)); \
} \
HRESULT __stdcall  ENVTIEName::SetLeaderAssociativityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLeaderAssociativityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetLeaderAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLeaderAssociativityInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridDisplay(CAT_VARIANT_BOOL & oGridDisplay) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridDisplay(oGridDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridDisplay(CAT_VARIANT_BOOL iGridDisplay) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridDisplay(iGridDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridDisplayLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridDisplayInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridSnapPoint(CAT_VARIANT_BOOL & oGridSnapPoint) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridSnapPoint(oGridSnapPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridSnapPoint(CAT_VARIANT_BOOL iGridSnapPoint) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridSnapPoint(iGridSnapPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridSnapPointLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridSnapPointLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridSnapPointInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridSnapPointInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllowDistortions(CAT_VARIANT_BOOL & oAllowDistortions) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AllowDistortions(oAllowDistortions)); \
} \
HRESULT __stdcall  ENVTIEName::put_AllowDistortions(CAT_VARIANT_BOOL iAllowDistortions) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AllowDistortions(iAllowDistortions)); \
} \
HRESULT __stdcall  ENVTIEName::SetAllowDistortionsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAllowDistortionsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllowDistortionsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAllowDistortionsInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridPrimarySpacing(double & oGridPrimarySpacing) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridPrimarySpacing(oGridPrimarySpacing)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridPrimarySpacing(double iGridPrimarySpacing) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridPrimarySpacing(iGridPrimarySpacing)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridPrimarySpacingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridPrimarySpacingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridPrimarySpacingInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridSecondaryStep(CATLONG & oGridSecondaryStep) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridSecondaryStep(oGridSecondaryStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridSecondaryStep(CATLONG iGridSecondaryStep) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridSecondaryStep(iGridSecondaryStep)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridSecondaryStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridSecondaryStepLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridSecondaryStepInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridVPrimarySpacing(double & oGridVPrimarySpacing) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridVPrimarySpacing(oGridVPrimarySpacing)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridVPrimarySpacing(double iGridVPrimarySpacing) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridVPrimarySpacing(iGridVPrimarySpacing)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridVPrimarySpacingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridVPrimarySpacingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridVPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridVPrimarySpacingInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_GridVSecondaryStep(CATLONG & oGridVSecondaryStep) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GridVSecondaryStep(oGridVSecondaryStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_GridVSecondaryStep(CATLONG iGridVSecondaryStep) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GridVSecondaryStep(iGridVSecondaryStep)); \
} \
HRESULT __stdcall  ENVTIEName::SetGridVSecondaryStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGridVSecondaryStepLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetGridVSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGridVSecondaryStepInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_UnderSet(CAT_VARIANT_BOOL & oUnderSet) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UnderSet(oUnderSet)); \
} \
HRESULT __stdcall  ENVTIEName::put_UnderSet(CAT_VARIANT_BOOL iUnderSet) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UnderSet(iUnderSet)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnderSetLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUnderSetLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetUnderSetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUnderSetInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_UnderView(CAT_VARIANT_BOOL & oUnderView) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UnderView(oUnderView)); \
} \
HRESULT __stdcall  ENVTIEName::put_UnderView(CAT_VARIANT_BOOL iUnderView) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UnderView(iUnderView)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnderViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUnderViewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetUnderViewInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUnderViewInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_UnderFeature(CAT_VARIANT_BOOL & oUnderFeature) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UnderFeature(oUnderFeature)); \
} \
HRESULT __stdcall  ENVTIEName::put_UnderFeature(CAT_VARIANT_BOOL iUnderFeature) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UnderFeature(iUnderFeature)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnderFeatureLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUnderFeatureLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetUnderFeatureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUnderFeatureInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_SaveInCGR(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SaveInCGR(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SaveInCGR(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SaveInCGR(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetSaveInCGRLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSaveInCGRLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSaveInCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSaveInCGRInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ManRefSiz(double & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ManRefSiz(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ManRefSiz(double iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ManRefSiz(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetManRefSizLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetManRefSizLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetManRefSizInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetManRefSizInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ManZooCap(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ManZooCap(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ManZooCap(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ManZooCap(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetManZooCapLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetManZooCapLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetManZooCapInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetManZooCapInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_MoveAfterCreation(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MoveAfterCreation(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MoveAfterCreation(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MoveAfterCreation(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetMoveAfterCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMoveAfterCreationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetMoveAfterCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMoveAfterCreationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewAssociativity(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewAssociativity(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewAssociativity(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewAssociativity(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewAssociativityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewAssociativityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewAssociativityInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewReferential(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewReferential(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewReferential(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewReferential(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewReferentialLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewReferentialLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewReferentialInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewReferentialInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewReferentialZoomable(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewReferentialZoomable(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewReferentialZoomable(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewReferentialZoomable(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewReferentialZoomableLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewReferentialZoomableLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewReferentialZoomableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewReferentialZoomableInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewProfile(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewProfile(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewProfile(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewProfile(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewProfileLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewProfileLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewProfileInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFTAInfraSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFTAInfraSettingAtt(classe)    TIECATIAFTAInfraSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFTAInfraSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFTAInfraSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAFTAInfraSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFTAInfraSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFTAInfraSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFTAInfraSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_Standard(CATBSTR & oStandard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oStandard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Standard(oStandard); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oStandard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_Standard(const CATBSTR & iStandard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iStandard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Standard(iStandard); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iStandard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetStandardLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStandardLock(iLocked); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetStandardInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStandardInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_LeaderAssociativity(CATFTALeaderAssociativity & oLeaderAssociativity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLeaderAssociativity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LeaderAssociativity(oLeaderAssociativity); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLeaderAssociativity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_LeaderAssociativity(CATFTALeaderAssociativity iLeaderAssociativity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLeaderAssociativity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LeaderAssociativity(iLeaderAssociativity); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLeaderAssociativity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetLeaderAssociativityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLeaderAssociativityLock(iLocked); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetLeaderAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLeaderAssociativityInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_GridDisplay(CAT_VARIANT_BOOL & oGridDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oGridDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridDisplay(oGridDisplay); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oGridDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_GridDisplay(CAT_VARIANT_BOOL iGridDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGridDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridDisplay(iGridDisplay); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGridDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetGridDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridDisplayLock(iLocked); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetGridDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridDisplayInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_GridSnapPoint(CAT_VARIANT_BOOL & oGridSnapPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oGridSnapPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridSnapPoint(oGridSnapPoint); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oGridSnapPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_GridSnapPoint(CAT_VARIANT_BOOL iGridSnapPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iGridSnapPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridSnapPoint(iGridSnapPoint); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iGridSnapPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetGridSnapPointLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridSnapPointLock(iLocked); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetGridSnapPointInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridSnapPointInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_AllowDistortions(CAT_VARIANT_BOOL & oAllowDistortions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAllowDistortions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllowDistortions(oAllowDistortions); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAllowDistortions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_AllowDistortions(CAT_VARIANT_BOOL iAllowDistortions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iAllowDistortions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AllowDistortions(iAllowDistortions); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iAllowDistortions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetAllowDistortionsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAllowDistortionsLock(iLocked); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetAllowDistortionsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllowDistortionsInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_GridPrimarySpacing(double & oGridPrimarySpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oGridPrimarySpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridPrimarySpacing(oGridPrimarySpacing); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oGridPrimarySpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_GridPrimarySpacing(double iGridPrimarySpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iGridPrimarySpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridPrimarySpacing(iGridPrimarySpacing); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iGridPrimarySpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetGridPrimarySpacingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridPrimarySpacingLock(iLocked); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetGridPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridPrimarySpacingInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_GridSecondaryStep(CATLONG & oGridSecondaryStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oGridSecondaryStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridSecondaryStep(oGridSecondaryStep); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oGridSecondaryStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_GridSecondaryStep(CATLONG iGridSecondaryStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iGridSecondaryStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridSecondaryStep(iGridSecondaryStep); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iGridSecondaryStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetGridSecondaryStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridSecondaryStepLock(iLocked); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetGridSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridSecondaryStepInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_GridVPrimarySpacing(double & oGridVPrimarySpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oGridVPrimarySpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridVPrimarySpacing(oGridVPrimarySpacing); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oGridVPrimarySpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_GridVPrimarySpacing(double iGridVPrimarySpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iGridVPrimarySpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridVPrimarySpacing(iGridVPrimarySpacing); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iGridVPrimarySpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetGridVPrimarySpacingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridVPrimarySpacingLock(iLocked); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetGridVPrimarySpacingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridVPrimarySpacingInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_GridVSecondaryStep(CATLONG & oGridVSecondaryStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oGridVSecondaryStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GridVSecondaryStep(oGridVSecondaryStep); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oGridVSecondaryStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_GridVSecondaryStep(CATLONG iGridVSecondaryStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iGridVSecondaryStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GridVSecondaryStep(iGridVSecondaryStep); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iGridVSecondaryStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetGridVSecondaryStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGridVSecondaryStepLock(iLocked); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetGridVSecondaryStepInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGridVSecondaryStepInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_UnderSet(CAT_VARIANT_BOOL & oUnderSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oUnderSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UnderSet(oUnderSet); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oUnderSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_UnderSet(CAT_VARIANT_BOOL iUnderSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iUnderSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UnderSet(iUnderSet); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iUnderSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetUnderSetLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnderSetLock(iLocked); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetUnderSetInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUnderSetInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_UnderView(CAT_VARIANT_BOOL & oUnderView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oUnderView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UnderView(oUnderView); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oUnderView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_UnderView(CAT_VARIANT_BOOL iUnderView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iUnderView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UnderView(iUnderView); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iUnderView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetUnderViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnderViewLock(iLocked); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetUnderViewInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUnderViewInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_UnderFeature(CAT_VARIANT_BOOL & oUnderFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oUnderFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UnderFeature(oUnderFeature); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oUnderFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_UnderFeature(CAT_VARIANT_BOOL iUnderFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iUnderFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UnderFeature(iUnderFeature); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iUnderFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetUnderFeatureLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnderFeatureLock(iLocked); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetUnderFeatureInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUnderFeatureInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_SaveInCGR(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SaveInCGR(oValue); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_SaveInCGR(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SaveInCGR(iValue); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetSaveInCGRLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSaveInCGRLock(iLocked); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetSaveInCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSaveInCGRInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_ManRefSiz(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ManRefSiz(oValue); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_ManRefSiz(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ManRefSiz(iValue); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetManRefSizLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetManRefSizLock(iLocked); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetManRefSizInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManRefSizInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_ManZooCap(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ManZooCap(oValue); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_ManZooCap(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ManZooCap(iValue); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetManZooCapLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetManZooCapLock(iLocked); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetManZooCapInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManZooCapInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_MoveAfterCreation(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MoveAfterCreation(oValue); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_MoveAfterCreation(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MoveAfterCreation(iValue); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetMoveAfterCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMoveAfterCreationLock(iLocked); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetMoveAfterCreationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMoveAfterCreationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_ViewAssociativity(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewAssociativity(oValue); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_ViewAssociativity(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewAssociativity(iValue); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetViewAssociativityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewAssociativityLock(iLocked); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetViewAssociativityInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewAssociativityInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_ViewReferential(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewReferential(oValue); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_ViewReferential(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewReferential(iValue); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetViewReferentialLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewReferentialLock(iLocked); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetViewReferentialInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewReferentialInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_ViewReferentialZoomable(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewReferentialZoomable(oValue); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_ViewReferentialZoomable(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewReferentialZoomable(iValue); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetViewReferentialZoomableLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewReferentialZoomableLock(iLocked); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetViewReferentialZoomableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewReferentialZoomableInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_ViewProfile(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewProfile(oValue); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_ViewProfile(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewProfile(iValue); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SetViewProfileLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewProfileLock(iLocked); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetViewProfileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewProfileInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFTAInfraSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTAInfraSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTAInfraSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFTAInfraSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFTAInfraSettingAtt(classe) \
 \
 \
declare_TIE_CATIAFTAInfraSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFTAInfraSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFTAInfraSettingAtt,"CATIAFTAInfraSettingAtt",CATIAFTAInfraSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFTAInfraSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFTAInfraSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFTAInfraSettingAtt##classe(classe::MetaObject(),CATIAFTAInfraSettingAtt::MetaObject(),(void *)CreateTIECATIAFTAInfraSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFTAInfraSettingAtt(classe) \
 \
 \
declare_TIE_CATIAFTAInfraSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFTAInfraSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFTAInfraSettingAtt,"CATIAFTAInfraSettingAtt",CATIAFTAInfraSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFTAInfraSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFTAInfraSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFTAInfraSettingAtt##classe(classe::MetaObject(),CATIAFTAInfraSettingAtt::MetaObject(),(void *)CreateTIECATIAFTAInfraSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFTAInfraSettingAtt(classe) TIE_CATIAFTAInfraSettingAtt(classe)
#else
#define BOA_CATIAFTAInfraSettingAtt(classe) CATImplementBOA(CATIAFTAInfraSettingAtt, classe)
#endif

#endif
