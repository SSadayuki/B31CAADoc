#ifndef __TIE_SWKIABody
#define __TIE_SWKIABody

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIABody.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIABody */
#define declare_TIE_SWKIABody(classe) \
 \
 \
class TIESWKIABody##classe : public SWKIABody \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIABody, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CenterOfGravity(SWKIACenterOfGravity *& poCenterOfGravity); \
      virtual HRESULT __stdcall get_NumberOfSegments(CATLONG & poNbSegments); \
      virtual HRESULT __stdcall GetSegment(CATLONG piIndex, SWKIASegment *& poSegment); \
      virtual HRESULT __stdcall get_Memo(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT __stdcall get_SegmentsDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_SegmentsDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_EllipsesDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_EllipsesDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_SkinDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_SkinDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_CenterOfGravityDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_CenterOfGravityDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_ReferentialDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_ReferentialDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_LineOfSightDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_LineOfSightDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_PeripheralConeDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_PeripheralConeDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_CentralConeDisplayed(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall put_CentralConeDisplayed(CAT_VARIANT_BOOL piFlag); \
      virtual HRESULT __stdcall get_ConeTypeFlat(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall SetConeTypeFlat(); \
      virtual HRESULT __stdcall get_ConeTypeSpherical(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall SetConeTypeSpherical(); \
      virtual HRESULT __stdcall get_ConeTypeBoundings(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall SetConeTypeBoundings(); \
      virtual HRESULT __stdcall get_ConeTypeBoundedCone(CAT_VARIANT_BOOL & poFlag); \
      virtual HRESULT __stdcall SetConeTypeBoundedCone(); \
      virtual HRESULT __stdcall get_SkinResolution(CATLONG & poResolution); \
      virtual HRESULT __stdcall put_SkinResolution(CATLONG piResolution); \
      virtual HRESULT __stdcall get_Referential(CATBSTR & pioCurrentRef); \
      virtual HRESULT __stdcall put_Referential(const CATBSTR & piNewRef); \
      virtual HRESULT __stdcall SetPosture(SWKPostureSpec piPostureSpec, CAT_VARIANT_BOOL piKeepReferential); \
      virtual HRESULT __stdcall SetToBestPosture(); \
      virtual HRESULT __stdcall ResetPosture(); \
      virtual HRESULT __stdcall SwapPosture(); \
      virtual HRESULT __stdcall ResetPrefAngles(CATLONG piDOFId); \
      virtual HRESULT __stdcall SwapPrefAngles(CATLONG piDOFId); \
      virtual HRESULT __stdcall ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset); \
      virtual HRESULT __stdcall SwapAngularLimitations(CATLONG piDOFId); \
      virtual HRESULT __stdcall LockPosture(CATLONG piDOFId); \
      virtual HRESULT __stdcall ResetAttaches(); \
      virtual HRESULT __stdcall ResetIKOffsets(); \
      virtual HRESULT __stdcall IsBalanced(CAT_VARIANT_BOOL & poBalanced); \
      virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & piNewPosition); \
      virtual HRESULT __stdcall ApplyPosition(const CATSafeArrayVariant & piPositionIncrement); \
      virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
      virtual HRESULT __stdcall GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition); \
      virtual HRESULT __stdcall get_PositionX(double & poPositionX); \
      virtual HRESULT __stdcall get_PositionY(double & poPositionY); \
      virtual HRESULT __stdcall get_PositionZ(double & poPositionZ); \
      virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
      virtual HRESULT __stdcall get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled); \
      virtual HRESULT __stdcall put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled); \
      virtual HRESULT __stdcall Refresh3D(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIABody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CenterOfGravity(SWKIACenterOfGravity *& poCenterOfGravity); \
virtual HRESULT __stdcall get_NumberOfSegments(CATLONG & poNbSegments); \
virtual HRESULT __stdcall GetSegment(CATLONG piIndex, SWKIASegment *& poSegment); \
virtual HRESULT __stdcall get_Memo(CATBSTR & oText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT __stdcall get_SegmentsDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_SegmentsDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_EllipsesDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_EllipsesDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_SkinDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_SkinDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_CenterOfGravityDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_CenterOfGravityDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_ReferentialDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_ReferentialDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_LineOfSightDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_LineOfSightDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_PeripheralConeDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_PeripheralConeDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_CentralConeDisplayed(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall put_CentralConeDisplayed(CAT_VARIANT_BOOL piFlag); \
virtual HRESULT __stdcall get_ConeTypeFlat(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall SetConeTypeFlat(); \
virtual HRESULT __stdcall get_ConeTypeSpherical(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall SetConeTypeSpherical(); \
virtual HRESULT __stdcall get_ConeTypeBoundings(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall SetConeTypeBoundings(); \
virtual HRESULT __stdcall get_ConeTypeBoundedCone(CAT_VARIANT_BOOL & poFlag); \
virtual HRESULT __stdcall SetConeTypeBoundedCone(); \
virtual HRESULT __stdcall get_SkinResolution(CATLONG & poResolution); \
virtual HRESULT __stdcall put_SkinResolution(CATLONG piResolution); \
virtual HRESULT __stdcall get_Referential(CATBSTR & pioCurrentRef); \
virtual HRESULT __stdcall put_Referential(const CATBSTR & piNewRef); \
virtual HRESULT __stdcall SetPosture(SWKPostureSpec piPostureSpec, CAT_VARIANT_BOOL piKeepReferential); \
virtual HRESULT __stdcall SetToBestPosture(); \
virtual HRESULT __stdcall ResetPosture(); \
virtual HRESULT __stdcall SwapPosture(); \
virtual HRESULT __stdcall ResetPrefAngles(CATLONG piDOFId); \
virtual HRESULT __stdcall SwapPrefAngles(CATLONG piDOFId); \
virtual HRESULT __stdcall ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset); \
virtual HRESULT __stdcall SwapAngularLimitations(CATLONG piDOFId); \
virtual HRESULT __stdcall LockPosture(CATLONG piDOFId); \
virtual HRESULT __stdcall ResetAttaches(); \
virtual HRESULT __stdcall ResetIKOffsets(); \
virtual HRESULT __stdcall IsBalanced(CAT_VARIANT_BOOL & poBalanced); \
virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & piNewPosition); \
virtual HRESULT __stdcall ApplyPosition(const CATSafeArrayVariant & piPositionIncrement); \
virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
virtual HRESULT __stdcall GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition); \
virtual HRESULT __stdcall get_PositionX(double & poPositionX); \
virtual HRESULT __stdcall get_PositionY(double & poPositionY); \
virtual HRESULT __stdcall get_PositionZ(double & poPositionZ); \
virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
virtual HRESULT __stdcall get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled); \
virtual HRESULT __stdcall put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled); \
virtual HRESULT __stdcall Refresh3D(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIABody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CenterOfGravity(SWKIACenterOfGravity *& poCenterOfGravity) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_CenterOfGravity(poCenterOfGravity)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfSegments(CATLONG & poNbSegments) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_NumberOfSegments(poNbSegments)); \
} \
HRESULT __stdcall  ENVTIEName::GetSegment(CATLONG piIndex, SWKIASegment *& poSegment) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)GetSegment(piIndex,poSegment)); \
} \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & oText) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_Memo(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT __stdcall  ENVTIEName::get_SegmentsDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_SegmentsDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_SegmentsDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_SegmentsDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_EllipsesDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_EllipsesDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_EllipsesDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_EllipsesDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_SkinDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_SkinDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_SkinDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_SkinDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_CenterOfGravityDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_CenterOfGravityDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_CenterOfGravityDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_CenterOfGravityDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferentialDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_ReferentialDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferentialDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_ReferentialDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineOfSightDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_LineOfSightDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_LineOfSightDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_LineOfSightDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_PeripheralConeDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_PeripheralConeDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_PeripheralConeDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_PeripheralConeDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_CentralConeDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_CentralConeDisplayed(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_CentralConeDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_CentralConeDisplayed(piFlag)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConeTypeFlat(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_ConeTypeFlat(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::SetConeTypeFlat() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SetConeTypeFlat()); \
} \
HRESULT __stdcall  ENVTIEName::get_ConeTypeSpherical(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_ConeTypeSpherical(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::SetConeTypeSpherical() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SetConeTypeSpherical()); \
} \
HRESULT __stdcall  ENVTIEName::get_ConeTypeBoundings(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_ConeTypeBoundings(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::SetConeTypeBoundings() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SetConeTypeBoundings()); \
} \
HRESULT __stdcall  ENVTIEName::get_ConeTypeBoundedCone(CAT_VARIANT_BOOL & poFlag) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_ConeTypeBoundedCone(poFlag)); \
} \
HRESULT __stdcall  ENVTIEName::SetConeTypeBoundedCone() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SetConeTypeBoundedCone()); \
} \
HRESULT __stdcall  ENVTIEName::get_SkinResolution(CATLONG & poResolution) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_SkinResolution(poResolution)); \
} \
HRESULT __stdcall  ENVTIEName::put_SkinResolution(CATLONG piResolution) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_SkinResolution(piResolution)); \
} \
HRESULT __stdcall  ENVTIEName::get_Referential(CATBSTR & pioCurrentRef) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_Referential(pioCurrentRef)); \
} \
HRESULT __stdcall  ENVTIEName::put_Referential(const CATBSTR & piNewRef) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_Referential(piNewRef)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosture(SWKPostureSpec piPostureSpec, CAT_VARIANT_BOOL piKeepReferential) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SetPosture(piPostureSpec,piKeepReferential)); \
} \
HRESULT __stdcall  ENVTIEName::SetToBestPosture() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SetToBestPosture()); \
} \
HRESULT __stdcall  ENVTIEName::ResetPosture() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)ResetPosture()); \
} \
HRESULT __stdcall  ENVTIEName::SwapPosture() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SwapPosture()); \
} \
HRESULT __stdcall  ENVTIEName::ResetPrefAngles(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)ResetPrefAngles(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::SwapPrefAngles(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SwapPrefAngles(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)ResetAngularLimitations(piDOFId,piReset)); \
} \
HRESULT __stdcall  ENVTIEName::SwapAngularLimitations(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SwapAngularLimitations(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::LockPosture(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)LockPosture(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::ResetAttaches() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)ResetAttaches()); \
} \
HRESULT __stdcall  ENVTIEName::ResetIKOffsets() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)ResetIKOffsets()); \
} \
HRESULT __stdcall  ENVTIEName::IsBalanced(CAT_VARIANT_BOOL & poBalanced) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)IsBalanced(poBalanced)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(const CATSafeArrayVariant & piNewPosition) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)SetPosition(piNewPosition)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyPosition(const CATSafeArrayVariant & piPositionIncrement) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)ApplyPosition(piPositionIncrement)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullName(CATBSTR & pioFullName) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_FullName(pioFullName)); \
} \
HRESULT __stdcall  ENVTIEName::GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)GetGlobalPosition(poGlobalPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionX(double & poPositionX) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_PositionX(poPositionX)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionY(double & poPositionY) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_PositionY(poPositionY)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionZ(double & poPositionZ) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_PositionZ(poPositionZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_Manikin(SWKIAManikin *& poManikin) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_Manikin(poManikin)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_RefreshDisplay(poRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_RefreshDisplay(piRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::Refresh3D() \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)Refresh3D()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIABody,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIABody(classe)    TIESWKIABody##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIABody(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIABody, classe) \
 \
 \
CATImplementTIEMethods(SWKIABody, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIABody, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIABody, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIABody, classe) \
 \
HRESULT __stdcall  TIESWKIABody##classe::get_CenterOfGravity(SWKIACenterOfGravity *& poCenterOfGravity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poCenterOfGravity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterOfGravity(poCenterOfGravity); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poCenterOfGravity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_NumberOfSegments(CATLONG & poNbSegments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&poNbSegments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfSegments(poNbSegments); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&poNbSegments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::GetSegment(CATLONG piIndex, SWKIASegment *& poSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&piIndex,&poSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSegment(piIndex,poSegment); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&piIndex,&poSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_Memo(CATBSTR & oText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(oText); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_SegmentsDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SegmentsDisplayed(poFlag); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_SegmentsDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SegmentsDisplayed(piFlag); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_EllipsesDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EllipsesDisplayed(poFlag); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_EllipsesDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EllipsesDisplayed(piFlag); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_SkinDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SkinDisplayed(poFlag); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_SkinDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SkinDisplayed(piFlag); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_CenterOfGravityDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterOfGravityDisplayed(poFlag); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_CenterOfGravityDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CenterOfGravityDisplayed(piFlag); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_ReferentialDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferentialDisplayed(poFlag); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_ReferentialDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferentialDisplayed(piFlag); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_LineOfSightDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineOfSightDisplayed(poFlag); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_LineOfSightDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LineOfSightDisplayed(piFlag); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_PeripheralConeDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PeripheralConeDisplayed(poFlag); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_PeripheralConeDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PeripheralConeDisplayed(piFlag); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_CentralConeDisplayed(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CentralConeDisplayed(poFlag); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_CentralConeDisplayed(CAT_VARIANT_BOOL piFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&piFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CentralConeDisplayed(piFlag); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&piFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_ConeTypeFlat(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConeTypeFlat(poFlag); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SetConeTypeFlat() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConeTypeFlat(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_ConeTypeSpherical(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConeTypeSpherical(poFlag); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SetConeTypeSpherical() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConeTypeSpherical(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_ConeTypeBoundings(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConeTypeBoundings(poFlag); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SetConeTypeBoundings() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConeTypeBoundings(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_ConeTypeBoundedCone(CAT_VARIANT_BOOL & poFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&poFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConeTypeBoundedCone(poFlag); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&poFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SetConeTypeBoundedCone() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConeTypeBoundedCone(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_SkinResolution(CATLONG & poResolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&poResolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SkinResolution(poResolution); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&poResolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_SkinResolution(CATLONG piResolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&piResolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SkinResolution(piResolution); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&piResolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_Referential(CATBSTR & pioCurrentRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&pioCurrentRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Referential(pioCurrentRef); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&pioCurrentRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_Referential(const CATBSTR & piNewRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&piNewRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Referential(piNewRef); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&piNewRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SetPosture(SWKPostureSpec piPostureSpec, CAT_VARIANT_BOOL piKeepReferential) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&piPostureSpec,&piKeepReferential); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosture(piPostureSpec,piKeepReferential); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&piPostureSpec,&piKeepReferential); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SetToBestPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToBestPosture(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::ResetPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPosture(); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SwapPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwapPosture(); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::ResetPrefAngles(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPrefAngles(piDOFId); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SwapPrefAngles(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwapPrefAngles(piDOFId); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&piDOFId,&piReset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetAngularLimitations(piDOFId,piReset); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&piDOFId,&piReset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SwapAngularLimitations(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwapAngularLimitations(piDOFId); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::LockPosture(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockPosture(piDOFId); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::ResetAttaches() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetAttaches(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::ResetIKOffsets() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetIKOffsets(); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::IsBalanced(CAT_VARIANT_BOOL & poBalanced) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&poBalanced); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsBalanced(poBalanced); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&poBalanced); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::SetPosition(const CATSafeArrayVariant & piNewPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&piNewPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(piNewPosition); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&piNewPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::ApplyPosition(const CATSafeArrayVariant & piPositionIncrement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&piPositionIncrement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyPosition(piPositionIncrement); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&piPositionIncrement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_FullName(CATBSTR & pioFullName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&pioFullName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullName(pioFullName); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&pioFullName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&poGlobalPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGlobalPosition(poGlobalPosition); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&poGlobalPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_PositionX(double & poPositionX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&poPositionX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionX(poPositionX); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&poPositionX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_PositionY(double & poPositionY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&poPositionY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionY(poPositionY); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&poPositionY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_PositionZ(double & poPositionZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&poPositionZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionZ(poPositionZ); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&poPositionZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_Manikin(SWKIAManikin *& poManikin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&poManikin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Manikin(poManikin); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&poManikin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&poRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefreshDisplay(poRefreshIsEnabled); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&poRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&piRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefreshDisplay(piRefreshIsEnabled); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&piRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIABody##classe::Refresh3D() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Refresh3D(); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIABody##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIABody##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIABody##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIABody##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIABody##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIABody(classe) \
 \
 \
declare_TIE_SWKIABody(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIABody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIABody,"SWKIABody",SWKIABody::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIABody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIABody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIABody##classe(classe::MetaObject(),SWKIABody::MetaObject(),(void *)CreateTIESWKIABody##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIABody(classe) \
 \
 \
declare_TIE_SWKIABody(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIABody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIABody,"SWKIABody",SWKIABody::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIABody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIABody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIABody##classe(classe::MetaObject(),SWKIABody::MetaObject(),(void *)CreateTIESWKIABody##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIABody(classe) TIE_SWKIABody(classe)
#else
#define BOA_SWKIABody(classe) CATImplementBOA(SWKIABody, classe)
#endif

#endif
