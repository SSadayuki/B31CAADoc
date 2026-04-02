#ifndef __TIE_SWKIASegment
#define __TIE_SWKIASegment

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIASegment.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIASegment */
#define declare_TIE_SWKIASegment(classe) \
 \
 \
class TIESWKIASegment##classe : public SWKIASegment \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIASegment, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NbDOFs(CATLONG & poNbDOFs); \
      virtual HRESULT __stdcall GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF); \
      virtual HRESULT __stdcall get_IsDOFAt0(CAT_VARIANT_BOOL & poIsDOFAt0); \
      virtual HRESULT __stdcall get_IsDOFAt1(CAT_VARIANT_BOOL & poIsDOFAt1); \
      virtual HRESULT __stdcall get_IsDOFAt2(CAT_VARIANT_BOOL & poIsDOFAt2); \
      virtual HRESULT __stdcall get_Length(double & poLength); \
      virtual HRESULT __stdcall get_EndPositionX(double & poEndPositionX); \
      virtual HRESULT __stdcall get_EndPositionY(double & poEndPositionY); \
      virtual HRESULT __stdcall get_EndPositionZ(double & poEndPositionZ); \
      virtual HRESULT __stdcall get_IsOnLeftSide(CAT_VARIANT_BOOL & poOnLeftSide); \
      virtual HRESULT __stdcall get_IsOnRightSide(CAT_VARIANT_BOOL & poOnRightSide); \
      virtual HRESULT __stdcall get_IsOnHand(CAT_VARIANT_BOOL & poOnHand); \
      virtual HRESULT __stdcall get_IsOnSpine(CAT_VARIANT_BOOL & poOnSpine); \
      virtual HRESULT __stdcall ResetPosture(); \
      virtual HRESULT __stdcall MirrorCopyPosture(); \
      virtual HRESULT __stdcall SwapPosture(); \
      virtual HRESULT __stdcall ResetPrefAngles(CATLONG piDOFId); \
      virtual HRESULT __stdcall MirrorCopyPrefAngles(CATLONG piDOFId); \
      virtual HRESULT __stdcall SwapPrefAngles(CATLONG piDOFId); \
      virtual HRESULT __stdcall RemoveLimits(CATLONG piDOFId); \
      virtual HRESULT __stdcall ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset); \
      virtual HRESULT __stdcall MirrorCopyAngularLimitations(CATLONG piDOFId); \
      virtual HRESULT __stdcall SwapAngularLimitations(CATLONG piDOFId); \
      virtual HRESULT __stdcall LockPosture(CATLONG piDOFId); \
      virtual HRESULT __stdcall Optimize(CATLONG piDOFId); \
      virtual HRESULT __stdcall SetPercentage(double piPercentage, CATLONG piDOFId); \
      virtual HRESULT __stdcall get_MirrorSegment(CATBaseDispatch *& poMirrorSegment); \
      virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & piNewPosition, const CATBSTR & piStartSegment); \
      virtual HRESULT __stdcall ApplyPosition(const CATSafeArrayVariant & piPositionIncrement, const CATBSTR & piStartSegment); \
      virtual HRESULT __stdcall IsReachable(double piX, double piY, double piZ, CAT_VARIANT_BOOL & poIsReachable); \
      virtual HRESULT __stdcall IsObjectReachable(CATIABase * piObject, CAT_VARIANT_BOOL & poIsReachable); \
      virtual HRESULT __stdcall CreateReachEnvelope(); \
      virtual HRESULT __stdcall DestroyReachEnvelope(); \
      virtual HRESULT __stdcall Attach(CATIABase * piObjectToAttach); \
      virtual HRESULT __stdcall Detach(CATIABase * piObjectToDetach); \
      virtual HRESULT __stdcall DetachAll(); \
      virtual HRESULT __stdcall IsAttached(CATIABase * piObject, CAT_VARIANT_BOOL & poIsAttached); \
      virtual HRESULT __stdcall get_AttachSize(CATLONG & poAttachSize); \
      virtual HRESULT __stdcall GetAttachedObject(CATLONG piIndex, CATIABase *& poObject); \
      virtual HRESULT __stdcall GetIKOffset(CATSafeArrayVariant & poOffset); \
      virtual HRESULT __stdcall GetIKPosition(CATSafeArrayVariant & poIKPosition); \
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



#define ENVTIEdeclare_SWKIASegment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NbDOFs(CATLONG & poNbDOFs); \
virtual HRESULT __stdcall GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF); \
virtual HRESULT __stdcall get_IsDOFAt0(CAT_VARIANT_BOOL & poIsDOFAt0); \
virtual HRESULT __stdcall get_IsDOFAt1(CAT_VARIANT_BOOL & poIsDOFAt1); \
virtual HRESULT __stdcall get_IsDOFAt2(CAT_VARIANT_BOOL & poIsDOFAt2); \
virtual HRESULT __stdcall get_Length(double & poLength); \
virtual HRESULT __stdcall get_EndPositionX(double & poEndPositionX); \
virtual HRESULT __stdcall get_EndPositionY(double & poEndPositionY); \
virtual HRESULT __stdcall get_EndPositionZ(double & poEndPositionZ); \
virtual HRESULT __stdcall get_IsOnLeftSide(CAT_VARIANT_BOOL & poOnLeftSide); \
virtual HRESULT __stdcall get_IsOnRightSide(CAT_VARIANT_BOOL & poOnRightSide); \
virtual HRESULT __stdcall get_IsOnHand(CAT_VARIANT_BOOL & poOnHand); \
virtual HRESULT __stdcall get_IsOnSpine(CAT_VARIANT_BOOL & poOnSpine); \
virtual HRESULT __stdcall ResetPosture(); \
virtual HRESULT __stdcall MirrorCopyPosture(); \
virtual HRESULT __stdcall SwapPosture(); \
virtual HRESULT __stdcall ResetPrefAngles(CATLONG piDOFId); \
virtual HRESULT __stdcall MirrorCopyPrefAngles(CATLONG piDOFId); \
virtual HRESULT __stdcall SwapPrefAngles(CATLONG piDOFId); \
virtual HRESULT __stdcall RemoveLimits(CATLONG piDOFId); \
virtual HRESULT __stdcall ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset); \
virtual HRESULT __stdcall MirrorCopyAngularLimitations(CATLONG piDOFId); \
virtual HRESULT __stdcall SwapAngularLimitations(CATLONG piDOFId); \
virtual HRESULT __stdcall LockPosture(CATLONG piDOFId); \
virtual HRESULT __stdcall Optimize(CATLONG piDOFId); \
virtual HRESULT __stdcall SetPercentage(double piPercentage, CATLONG piDOFId); \
virtual HRESULT __stdcall get_MirrorSegment(CATBaseDispatch *& poMirrorSegment); \
virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & piNewPosition, const CATBSTR & piStartSegment); \
virtual HRESULT __stdcall ApplyPosition(const CATSafeArrayVariant & piPositionIncrement, const CATBSTR & piStartSegment); \
virtual HRESULT __stdcall IsReachable(double piX, double piY, double piZ, CAT_VARIANT_BOOL & poIsReachable); \
virtual HRESULT __stdcall IsObjectReachable(CATIABase * piObject, CAT_VARIANT_BOOL & poIsReachable); \
virtual HRESULT __stdcall CreateReachEnvelope(); \
virtual HRESULT __stdcall DestroyReachEnvelope(); \
virtual HRESULT __stdcall Attach(CATIABase * piObjectToAttach); \
virtual HRESULT __stdcall Detach(CATIABase * piObjectToDetach); \
virtual HRESULT __stdcall DetachAll(); \
virtual HRESULT __stdcall IsAttached(CATIABase * piObject, CAT_VARIANT_BOOL & poIsAttached); \
virtual HRESULT __stdcall get_AttachSize(CATLONG & poAttachSize); \
virtual HRESULT __stdcall GetAttachedObject(CATLONG piIndex, CATIABase *& poObject); \
virtual HRESULT __stdcall GetIKOffset(CATSafeArrayVariant & poOffset); \
virtual HRESULT __stdcall GetIKPosition(CATSafeArrayVariant & poIKPosition); \
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


#define ENVTIEdefine_SWKIASegment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NbDOFs(CATLONG & poNbDOFs) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_NbDOFs(poNbDOFs)); \
} \
HRESULT __stdcall  ENVTIEName::GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)GetDOF(piDOFNumber,poDOF)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsDOFAt0(CAT_VARIANT_BOOL & poIsDOFAt0) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_IsDOFAt0(poIsDOFAt0)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsDOFAt1(CAT_VARIANT_BOOL & poIsDOFAt1) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_IsDOFAt1(poIsDOFAt1)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsDOFAt2(CAT_VARIANT_BOOL & poIsDOFAt2) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_IsDOFAt2(poIsDOFAt2)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(double & poLength) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_Length(poLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPositionX(double & poEndPositionX) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_EndPositionX(poEndPositionX)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPositionY(double & poEndPositionY) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_EndPositionY(poEndPositionY)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPositionZ(double & poEndPositionZ) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_EndPositionZ(poEndPositionZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsOnLeftSide(CAT_VARIANT_BOOL & poOnLeftSide) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_IsOnLeftSide(poOnLeftSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsOnRightSide(CAT_VARIANT_BOOL & poOnRightSide) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_IsOnRightSide(poOnRightSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsOnHand(CAT_VARIANT_BOOL & poOnHand) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_IsOnHand(poOnHand)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsOnSpine(CAT_VARIANT_BOOL & poOnSpine) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_IsOnSpine(poOnSpine)); \
} \
HRESULT __stdcall  ENVTIEName::ResetPosture() \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)ResetPosture()); \
} \
HRESULT __stdcall  ENVTIEName::MirrorCopyPosture() \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)MirrorCopyPosture()); \
} \
HRESULT __stdcall  ENVTIEName::SwapPosture() \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)SwapPosture()); \
} \
HRESULT __stdcall  ENVTIEName::ResetPrefAngles(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)ResetPrefAngles(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::MirrorCopyPrefAngles(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)MirrorCopyPrefAngles(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::SwapPrefAngles(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)SwapPrefAngles(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveLimits(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)RemoveLimits(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)ResetAngularLimitations(piDOFId,piReset)); \
} \
HRESULT __stdcall  ENVTIEName::MirrorCopyAngularLimitations(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)MirrorCopyAngularLimitations(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::SwapAngularLimitations(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)SwapAngularLimitations(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::LockPosture(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)LockPosture(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::Optimize(CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)Optimize(piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::SetPercentage(double piPercentage, CATLONG piDOFId) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)SetPercentage(piPercentage,piDOFId)); \
} \
HRESULT __stdcall  ENVTIEName::get_MirrorSegment(CATBaseDispatch *& poMirrorSegment) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_MirrorSegment(poMirrorSegment)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(const CATSafeArrayVariant & piNewPosition, const CATBSTR & piStartSegment) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)SetPosition(piNewPosition,piStartSegment)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyPosition(const CATSafeArrayVariant & piPositionIncrement, const CATBSTR & piStartSegment) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)ApplyPosition(piPositionIncrement,piStartSegment)); \
} \
HRESULT __stdcall  ENVTIEName::IsReachable(double piX, double piY, double piZ, CAT_VARIANT_BOOL & poIsReachable) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)IsReachable(piX,piY,piZ,poIsReachable)); \
} \
HRESULT __stdcall  ENVTIEName::IsObjectReachable(CATIABase * piObject, CAT_VARIANT_BOOL & poIsReachable) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)IsObjectReachable(piObject,poIsReachable)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReachEnvelope() \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)CreateReachEnvelope()); \
} \
HRESULT __stdcall  ENVTIEName::DestroyReachEnvelope() \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)DestroyReachEnvelope()); \
} \
HRESULT __stdcall  ENVTIEName::Attach(CATIABase * piObjectToAttach) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)Attach(piObjectToAttach)); \
} \
HRESULT __stdcall  ENVTIEName::Detach(CATIABase * piObjectToDetach) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)Detach(piObjectToDetach)); \
} \
HRESULT __stdcall  ENVTIEName::DetachAll() \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)DetachAll()); \
} \
HRESULT __stdcall  ENVTIEName::IsAttached(CATIABase * piObject, CAT_VARIANT_BOOL & poIsAttached) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)IsAttached(piObject,poIsAttached)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttachSize(CATLONG & poAttachSize) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_AttachSize(poAttachSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttachedObject(CATLONG piIndex, CATIABase *& poObject) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)GetAttachedObject(piIndex,poObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetIKOffset(CATSafeArrayVariant & poOffset) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)GetIKOffset(poOffset)); \
} \
HRESULT __stdcall  ENVTIEName::GetIKPosition(CATSafeArrayVariant & poIKPosition) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)GetIKPosition(poIKPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullName(CATBSTR & pioFullName) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_FullName(pioFullName)); \
} \
HRESULT __stdcall  ENVTIEName::GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)GetGlobalPosition(poGlobalPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionX(double & poPositionX) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_PositionX(poPositionX)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionY(double & poPositionY) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_PositionY(poPositionY)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionZ(double & poPositionZ) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_PositionZ(poPositionZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_Manikin(SWKIAManikin *& poManikin) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_Manikin(poManikin)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_RefreshDisplay(poRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)put_RefreshDisplay(piRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::Refresh3D() \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)Refresh3D()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIASegment,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIASegment(classe)    TIESWKIASegment##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIASegment(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIASegment, classe) \
 \
 \
CATImplementTIEMethods(SWKIASegment, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIASegment, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIASegment, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIASegment, classe) \
 \
HRESULT __stdcall  TIESWKIASegment##classe::get_NbDOFs(CATLONG & poNbDOFs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poNbDOFs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbDOFs(poNbDOFs); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poNbDOFs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piDOFNumber,&poDOF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDOF(piDOFNumber,poDOF); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piDOFNumber,&poDOF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_IsDOFAt0(CAT_VARIANT_BOOL & poIsDOFAt0) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poIsDOFAt0); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsDOFAt0(poIsDOFAt0); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poIsDOFAt0); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_IsDOFAt1(CAT_VARIANT_BOOL & poIsDOFAt1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&poIsDOFAt1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsDOFAt1(poIsDOFAt1); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&poIsDOFAt1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_IsDOFAt2(CAT_VARIANT_BOOL & poIsDOFAt2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&poIsDOFAt2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsDOFAt2(poIsDOFAt2); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&poIsDOFAt2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_Length(double & poLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&poLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(poLength); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&poLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_EndPositionX(double & poEndPositionX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poEndPositionX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPositionX(poEndPositionX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poEndPositionX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_EndPositionY(double & poEndPositionY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poEndPositionY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPositionY(poEndPositionY); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poEndPositionY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_EndPositionZ(double & poEndPositionZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poEndPositionZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPositionZ(poEndPositionZ); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poEndPositionZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_IsOnLeftSide(CAT_VARIANT_BOOL & poOnLeftSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&poOnLeftSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsOnLeftSide(poOnLeftSide); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&poOnLeftSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_IsOnRightSide(CAT_VARIANT_BOOL & poOnRightSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&poOnRightSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsOnRightSide(poOnRightSide); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&poOnRightSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_IsOnHand(CAT_VARIANT_BOOL & poOnHand) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poOnHand); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsOnHand(poOnHand); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poOnHand); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_IsOnSpine(CAT_VARIANT_BOOL & poOnSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&poOnSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsOnSpine(poOnSpine); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&poOnSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::ResetPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPosture(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::MirrorCopyPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MirrorCopyPosture(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::SwapPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwapPosture(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::ResetPrefAngles(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPrefAngles(piDOFId); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::MirrorCopyPrefAngles(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MirrorCopyPrefAngles(piDOFId); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::SwapPrefAngles(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwapPrefAngles(piDOFId); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::RemoveLimits(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLimits(piDOFId); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::ResetAngularLimitations(CATLONG piDOFId, CATLONG piReset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&piDOFId,&piReset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetAngularLimitations(piDOFId,piReset); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&piDOFId,&piReset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::MirrorCopyAngularLimitations(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MirrorCopyAngularLimitations(piDOFId); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::SwapAngularLimitations(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwapAngularLimitations(piDOFId); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::LockPosture(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockPosture(piDOFId); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::Optimize(CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Optimize(piDOFId); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::SetPercentage(double piPercentage, CATLONG piDOFId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&piPercentage,&piDOFId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPercentage(piPercentage,piDOFId); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&piPercentage,&piDOFId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_MirrorSegment(CATBaseDispatch *& poMirrorSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&poMirrorSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MirrorSegment(poMirrorSegment); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&poMirrorSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::SetPosition(const CATSafeArrayVariant & piNewPosition, const CATBSTR & piStartSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&piNewPosition,&piStartSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(piNewPosition,piStartSegment); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&piNewPosition,&piStartSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::ApplyPosition(const CATSafeArrayVariant & piPositionIncrement, const CATBSTR & piStartSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&piPositionIncrement,&piStartSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyPosition(piPositionIncrement,piStartSegment); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&piPositionIncrement,&piStartSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::IsReachable(double piX, double piY, double piZ, CAT_VARIANT_BOOL & poIsReachable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&piX,&piY,&piZ,&poIsReachable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsReachable(piX,piY,piZ,poIsReachable); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&piX,&piY,&piZ,&poIsReachable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::IsObjectReachable(CATIABase * piObject, CAT_VARIANT_BOOL & poIsReachable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&piObject,&poIsReachable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsObjectReachable(piObject,poIsReachable); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&piObject,&poIsReachable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::CreateReachEnvelope() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReachEnvelope(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::DestroyReachEnvelope() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DestroyReachEnvelope(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::Attach(CATIABase * piObjectToAttach) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&piObjectToAttach); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Attach(piObjectToAttach); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&piObjectToAttach); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::Detach(CATIABase * piObjectToDetach) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&piObjectToDetach); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Detach(piObjectToDetach); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&piObjectToDetach); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::DetachAll() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DetachAll(); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::IsAttached(CATIABase * piObject, CAT_VARIANT_BOOL & poIsAttached) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&piObject,&poIsAttached); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAttached(piObject,poIsAttached); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&piObject,&poIsAttached); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_AttachSize(CATLONG & poAttachSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&poAttachSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttachSize(poAttachSize); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&poAttachSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::GetAttachedObject(CATLONG piIndex, CATIABase *& poObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&piIndex,&poObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttachedObject(piIndex,poObject); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&piIndex,&poObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::GetIKOffset(CATSafeArrayVariant & poOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&poOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIKOffset(poOffset); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&poOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::GetIKPosition(CATSafeArrayVariant & poIKPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&poIKPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIKPosition(poIKPosition); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&poIKPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_FullName(CATBSTR & pioFullName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&pioFullName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullName(pioFullName); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&pioFullName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&poGlobalPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGlobalPosition(poGlobalPosition); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&poGlobalPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_PositionX(double & poPositionX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&poPositionX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionX(poPositionX); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&poPositionX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_PositionY(double & poPositionY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&poPositionY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionY(poPositionY); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&poPositionY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_PositionZ(double & poPositionZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&poPositionZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionZ(poPositionZ); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&poPositionZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_Manikin(SWKIAManikin *& poManikin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&poManikin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Manikin(poManikin); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&poManikin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&poRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefreshDisplay(poRefreshIsEnabled); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&poRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&piRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefreshDisplay(piRefreshIsEnabled); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&piRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIASegment##classe::Refresh3D() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Refresh3D(); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegment##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegment##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegment##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegment##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIASegment##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIASegment(classe) \
 \
 \
declare_TIE_SWKIASegment(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIASegment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIASegment,"SWKIASegment",SWKIASegment::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIASegment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIASegment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIASegment##classe(classe::MetaObject(),SWKIASegment::MetaObject(),(void *)CreateTIESWKIASegment##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIASegment(classe) \
 \
 \
declare_TIE_SWKIASegment(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIASegment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIASegment,"SWKIASegment",SWKIASegment::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIASegment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIASegment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIASegment##classe(classe::MetaObject(),SWKIASegment::MetaObject(),(void *)CreateTIESWKIASegment##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIASegment(classe) TIE_SWKIASegment(classe)
#else
#define BOA_SWKIASegment(classe) CATImplementBOA(SWKIASegment, classe)
#endif

#endif
