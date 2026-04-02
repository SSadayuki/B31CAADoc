#ifndef __TIE_CATIAHybridShapeBlend
#define __TIE_CATIAHybridShapeBlend

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeBlend.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeBlend */
#define declare_TIE_CATIAHybridShapeBlend(classe) \
 \
 \
class TIECATIAHybridShapeBlend##classe : public CATIAHybridShapeBlend \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeBlend, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetCurve(CATLONG iBlendLimit, CATIAReference * iCurve); \
      virtual HRESULT __stdcall GetCurve(CATLONG iBlendLimit, CATIAReference *& oCurve); \
      virtual HRESULT __stdcall SetClosingPoint(CATLONG iBlendLimit, CATIAReference * iClosingPoint); \
      virtual HRESULT __stdcall GetClosingPoint(CATLONG iBlendLimit, CATIAReference *& oClosingPoint); \
      virtual HRESULT __stdcall UnsetClosingPoint(CATLONG iBlendLimit); \
      virtual HRESULT __stdcall SetOrientation(CATLONG iBlendLimit, CATLONG iOrientation); \
      virtual HRESULT __stdcall GetOrientation(CATLONG iBlendLimit, CATLONG & oOrientation); \
      virtual HRESULT __stdcall SetSupport(CATLONG iBlendLimit, CATIAReference * iSupport); \
      virtual HRESULT __stdcall GetSupport(CATLONG iBlendLimit, CATIAReference *& oSupport); \
      virtual HRESULT __stdcall UnsetSupport(CATLONG iBlendLimit); \
      virtual HRESULT __stdcall SetTransition(CATLONG iBlendLimit, CATLONG iTransition); \
      virtual HRESULT __stdcall GetTransition(CATLONG iBlendLimit, CATLONG & oTransition); \
      virtual HRESULT __stdcall SetContinuity(CATLONG iBlendLimit, CATLONG iContinuity); \
      virtual HRESULT __stdcall GetContinuity(CATLONG iBlendLimit, CATLONG & oContinuity); \
      virtual HRESULT __stdcall SetTrimSupport(CATLONG iBlendLimit, CATLONG iTrimSupport); \
      virtual HRESULT __stdcall GetTrimSupport(CATLONG iBlendLimit, CATLONG & oTrimSupport); \
      virtual HRESULT __stdcall SetBorderMode(CATLONG iBlendLimit, CATLONG iBorder); \
      virtual HRESULT __stdcall GetBorderMode(CATLONG iBlendLimit, CATLONG & oBorder); \
      virtual HRESULT __stdcall SetTensionInDouble(CATLONG iBlendLimit, CATLONG iTensionType, double iFirstTension, double iSecondTension); \
      virtual HRESULT __stdcall GetTensionInDouble(CATLONG iBlendLimit, CATLONG iRank, CATIARealParam *& oTension); \
      virtual HRESULT __stdcall SetTensionType(CATLONG iBlendLimit, CATLONG iTensionType); \
      virtual HRESULT __stdcall GetTensionType(CATLONG iBlendLimit, CATLONG & oTensionType); \
      virtual HRESULT __stdcall InsertCoupling(CATLONG iPosition); \
      virtual HRESULT __stdcall InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_Coupling(CATLONG & oCoupling); \
      virtual HRESULT __stdcall put_Coupling(CATLONG iCoupling); \
      virtual HRESULT __stdcall get_Spine(CATIAReference *& oSpine); \
      virtual HRESULT __stdcall put_Spine(CATIAReference * iSpine); \
      virtual HRESULT __stdcall get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmooth); \
      virtual HRESULT __stdcall put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmooth); \
      virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
      virtual HRESULT __stdcall get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
      virtual HRESULT __stdcall put_SmoothDeviationActivity(CAT_VARIANT_BOOL iActivity); \
      virtual HRESULT __stdcall get_SmoothDeviation(CATIALength *& opIALength); \
      virtual HRESULT __stdcall get_RuledDevelopableSurface(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_RuledDevelopableSurface(CAT_VARIANT_BOOL iiMode); \
      virtual HRESULT __stdcall GetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG & oBlendConnection); \
      virtual HRESULT __stdcall SetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG iBlendConnection); \
      virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
      virtual HRESULT __stdcall SetSmoothDeviation(double iLength); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeBlend(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetCurve(CATLONG iBlendLimit, CATIAReference * iCurve); \
virtual HRESULT __stdcall GetCurve(CATLONG iBlendLimit, CATIAReference *& oCurve); \
virtual HRESULT __stdcall SetClosingPoint(CATLONG iBlendLimit, CATIAReference * iClosingPoint); \
virtual HRESULT __stdcall GetClosingPoint(CATLONG iBlendLimit, CATIAReference *& oClosingPoint); \
virtual HRESULT __stdcall UnsetClosingPoint(CATLONG iBlendLimit); \
virtual HRESULT __stdcall SetOrientation(CATLONG iBlendLimit, CATLONG iOrientation); \
virtual HRESULT __stdcall GetOrientation(CATLONG iBlendLimit, CATLONG & oOrientation); \
virtual HRESULT __stdcall SetSupport(CATLONG iBlendLimit, CATIAReference * iSupport); \
virtual HRESULT __stdcall GetSupport(CATLONG iBlendLimit, CATIAReference *& oSupport); \
virtual HRESULT __stdcall UnsetSupport(CATLONG iBlendLimit); \
virtual HRESULT __stdcall SetTransition(CATLONG iBlendLimit, CATLONG iTransition); \
virtual HRESULT __stdcall GetTransition(CATLONG iBlendLimit, CATLONG & oTransition); \
virtual HRESULT __stdcall SetContinuity(CATLONG iBlendLimit, CATLONG iContinuity); \
virtual HRESULT __stdcall GetContinuity(CATLONG iBlendLimit, CATLONG & oContinuity); \
virtual HRESULT __stdcall SetTrimSupport(CATLONG iBlendLimit, CATLONG iTrimSupport); \
virtual HRESULT __stdcall GetTrimSupport(CATLONG iBlendLimit, CATLONG & oTrimSupport); \
virtual HRESULT __stdcall SetBorderMode(CATLONG iBlendLimit, CATLONG iBorder); \
virtual HRESULT __stdcall GetBorderMode(CATLONG iBlendLimit, CATLONG & oBorder); \
virtual HRESULT __stdcall SetTensionInDouble(CATLONG iBlendLimit, CATLONG iTensionType, double iFirstTension, double iSecondTension); \
virtual HRESULT __stdcall GetTensionInDouble(CATLONG iBlendLimit, CATLONG iRank, CATIARealParam *& oTension); \
virtual HRESULT __stdcall SetTensionType(CATLONG iBlendLimit, CATLONG iTensionType); \
virtual HRESULT __stdcall GetTensionType(CATLONG iBlendLimit, CATLONG & oTensionType); \
virtual HRESULT __stdcall InsertCoupling(CATLONG iPosition); \
virtual HRESULT __stdcall InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint); \
virtual HRESULT __stdcall get_Coupling(CATLONG & oCoupling); \
virtual HRESULT __stdcall put_Coupling(CATLONG iCoupling); \
virtual HRESULT __stdcall get_Spine(CATIAReference *& oSpine); \
virtual HRESULT __stdcall put_Spine(CATIAReference * iSpine); \
virtual HRESULT __stdcall get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmooth); \
virtual HRESULT __stdcall put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmooth); \
virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
virtual HRESULT __stdcall get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
virtual HRESULT __stdcall put_SmoothDeviationActivity(CAT_VARIANT_BOOL iActivity); \
virtual HRESULT __stdcall get_SmoothDeviation(CATIALength *& opIALength); \
virtual HRESULT __stdcall get_RuledDevelopableSurface(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_RuledDevelopableSurface(CAT_VARIANT_BOOL iiMode); \
virtual HRESULT __stdcall GetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG & oBlendConnection); \
virtual HRESULT __stdcall SetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG iBlendConnection); \
virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
virtual HRESULT __stdcall SetSmoothDeviation(double iLength); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeBlend(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetCurve(CATLONG iBlendLimit, CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetCurve(iBlendLimit,iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurve(CATLONG iBlendLimit, CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetCurve(iBlendLimit,oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::SetClosingPoint(CATLONG iBlendLimit, CATIAReference * iClosingPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetClosingPoint(iBlendLimit,iClosingPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetClosingPoint(CATLONG iBlendLimit, CATIAReference *& oClosingPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetClosingPoint(iBlendLimit,oClosingPoint)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetClosingPoint(CATLONG iBlendLimit) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)UnsetClosingPoint(iBlendLimit)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrientation(CATLONG iBlendLimit, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetOrientation(iBlendLimit,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrientation(CATLONG iBlendLimit, CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetOrientation(iBlendLimit,oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::SetSupport(CATLONG iBlendLimit, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetSupport(iBlendLimit,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::GetSupport(CATLONG iBlendLimit, CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetSupport(iBlendLimit,oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetSupport(CATLONG iBlendLimit) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)UnsetSupport(iBlendLimit)); \
} \
HRESULT __stdcall  ENVTIEName::SetTransition(CATLONG iBlendLimit, CATLONG iTransition) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetTransition(iBlendLimit,iTransition)); \
} \
HRESULT __stdcall  ENVTIEName::GetTransition(CATLONG iBlendLimit, CATLONG & oTransition) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetTransition(iBlendLimit,oTransition)); \
} \
HRESULT __stdcall  ENVTIEName::SetContinuity(CATLONG iBlendLimit, CATLONG iContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetContinuity(iBlendLimit,iContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::GetContinuity(CATLONG iBlendLimit, CATLONG & oContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetContinuity(iBlendLimit,oContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::SetTrimSupport(CATLONG iBlendLimit, CATLONG iTrimSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetTrimSupport(iBlendLimit,iTrimSupport)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrimSupport(CATLONG iBlendLimit, CATLONG & oTrimSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetTrimSupport(iBlendLimit,oTrimSupport)); \
} \
HRESULT __stdcall  ENVTIEName::SetBorderMode(CATLONG iBlendLimit, CATLONG iBorder) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetBorderMode(iBlendLimit,iBorder)); \
} \
HRESULT __stdcall  ENVTIEName::GetBorderMode(CATLONG iBlendLimit, CATLONG & oBorder) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetBorderMode(iBlendLimit,oBorder)); \
} \
HRESULT __stdcall  ENVTIEName::SetTensionInDouble(CATLONG iBlendLimit, CATLONG iTensionType, double iFirstTension, double iSecondTension) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetTensionInDouble(iBlendLimit,iTensionType,iFirstTension,iSecondTension)); \
} \
HRESULT __stdcall  ENVTIEName::GetTensionInDouble(CATLONG iBlendLimit, CATLONG iRank, CATIARealParam *& oTension) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetTensionInDouble(iBlendLimit,iRank,oTension)); \
} \
HRESULT __stdcall  ENVTIEName::SetTensionType(CATLONG iBlendLimit, CATLONG iTensionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetTensionType(iBlendLimit,iTensionType)); \
} \
HRESULT __stdcall  ENVTIEName::GetTensionType(CATLONG iBlendLimit, CATLONG & oTensionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetTensionType(iBlendLimit,oTensionType)); \
} \
HRESULT __stdcall  ENVTIEName::InsertCoupling(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)InsertCoupling(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)InsertCouplingPoint(iCouplingIndex,iPosition,iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Coupling(CATLONG & oCoupling) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_Coupling(oCoupling)); \
} \
HRESULT __stdcall  ENVTIEName::put_Coupling(CATLONG iCoupling) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)put_Coupling(iCoupling)); \
} \
HRESULT __stdcall  ENVTIEName::get_Spine(CATIAReference *& oSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_Spine(oSpine)); \
} \
HRESULT __stdcall  ENVTIEName::put_Spine(CATIAReference * iSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)put_Spine(iSpine)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThresholdActivity(oSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)put_SmoothAngleThresholdActivity(iSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThreshold(opIAAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_SmoothDeviationActivity(oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)put_SmoothDeviationActivity(iActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothDeviation(CATIALength *& opIALength) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_SmoothDeviation(opIALength)); \
} \
HRESULT __stdcall  ENVTIEName::get_RuledDevelopableSurface(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_RuledDevelopableSurface(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RuledDevelopableSurface(CAT_VARIANT_BOOL iiMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)put_RuledDevelopableSurface(iiMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG & oBlendConnection) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetRuledDevelopableSurfaceConnection(iBlendLimit,oBlendConnection)); \
} \
HRESULT __stdcall  ENVTIEName::SetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG iBlendConnection) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetRuledDevelopableSurfaceConnection(iBlendLimit,iBlendConnection)); \
} \
HRESULT __stdcall  ENVTIEName::SetSmoothAngleThreshold(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetSmoothAngleThreshold(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetSmoothDeviation(double iLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)SetSmoothDeviation(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeBlend,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeBlend(classe)    TIECATIAHybridShapeBlend##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeBlend(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeBlend, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeBlend, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeBlend, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeBlend, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeBlend, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetCurve(CATLONG iBlendLimit, CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iBlendLimit,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurve(iBlendLimit,iCurve); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iBlendLimit,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetCurve(CATLONG iBlendLimit, CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iBlendLimit,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurve(iBlendLimit,oCurve); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iBlendLimit,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetClosingPoint(CATLONG iBlendLimit, CATIAReference * iClosingPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iBlendLimit,&iClosingPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClosingPoint(iBlendLimit,iClosingPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iBlendLimit,&iClosingPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetClosingPoint(CATLONG iBlendLimit, CATIAReference *& oClosingPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iBlendLimit,&oClosingPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClosingPoint(iBlendLimit,oClosingPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iBlendLimit,&oClosingPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::UnsetClosingPoint(CATLONG iBlendLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iBlendLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetClosingPoint(iBlendLimit); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iBlendLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetOrientation(CATLONG iBlendLimit, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iBlendLimit,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientation(iBlendLimit,iOrientation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iBlendLimit,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetOrientation(CATLONG iBlendLimit, CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iBlendLimit,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientation(iBlendLimit,oOrientation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iBlendLimit,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetSupport(CATLONG iBlendLimit, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iBlendLimit,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSupport(iBlendLimit,iSupport); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iBlendLimit,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetSupport(CATLONG iBlendLimit, CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iBlendLimit,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupport(iBlendLimit,oSupport); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iBlendLimit,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::UnsetSupport(CATLONG iBlendLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iBlendLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetSupport(iBlendLimit); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iBlendLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetTransition(CATLONG iBlendLimit, CATLONG iTransition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iBlendLimit,&iTransition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTransition(iBlendLimit,iTransition); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iBlendLimit,&iTransition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetTransition(CATLONG iBlendLimit, CATLONG & oTransition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iBlendLimit,&oTransition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransition(iBlendLimit,oTransition); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iBlendLimit,&oTransition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetContinuity(CATLONG iBlendLimit, CATLONG iContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iBlendLimit,&iContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContinuity(iBlendLimit,iContinuity); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iBlendLimit,&iContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetContinuity(CATLONG iBlendLimit, CATLONG & oContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iBlendLimit,&oContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContinuity(iBlendLimit,oContinuity); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iBlendLimit,&oContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetTrimSupport(CATLONG iBlendLimit, CATLONG iTrimSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iBlendLimit,&iTrimSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTrimSupport(iBlendLimit,iTrimSupport); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iBlendLimit,&iTrimSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetTrimSupport(CATLONG iBlendLimit, CATLONG & oTrimSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iBlendLimit,&oTrimSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrimSupport(iBlendLimit,oTrimSupport); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iBlendLimit,&oTrimSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetBorderMode(CATLONG iBlendLimit, CATLONG iBorder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iBlendLimit,&iBorder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBorderMode(iBlendLimit,iBorder); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iBlendLimit,&iBorder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetBorderMode(CATLONG iBlendLimit, CATLONG & oBorder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iBlendLimit,&oBorder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBorderMode(iBlendLimit,oBorder); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iBlendLimit,&oBorder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetTensionInDouble(CATLONG iBlendLimit, CATLONG iTensionType, double iFirstTension, double iSecondTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iBlendLimit,&iTensionType,&iFirstTension,&iSecondTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTensionInDouble(iBlendLimit,iTensionType,iFirstTension,iSecondTension); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iBlendLimit,&iTensionType,&iFirstTension,&iSecondTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetTensionInDouble(CATLONG iBlendLimit, CATLONG iRank, CATIARealParam *& oTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iBlendLimit,&iRank,&oTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTensionInDouble(iBlendLimit,iRank,oTension); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iBlendLimit,&iRank,&oTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetTensionType(CATLONG iBlendLimit, CATLONG iTensionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iBlendLimit,&iTensionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTensionType(iBlendLimit,iTensionType); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iBlendLimit,&iTensionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetTensionType(CATLONG iBlendLimit, CATLONG & oTensionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iBlendLimit,&oTensionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTensionType(iBlendLimit,oTensionType); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iBlendLimit,&oTensionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::InsertCoupling(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertCoupling(iPosition); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iCouplingIndex,&iPosition,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertCouplingPoint(iCouplingIndex,iPosition,iPoint); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iCouplingIndex,&iPosition,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_Coupling(CATLONG & oCoupling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oCoupling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Coupling(oCoupling); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oCoupling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::put_Coupling(CATLONG iCoupling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iCoupling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Coupling(iCoupling); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iCoupling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_Spine(CATIAReference *& oSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spine(oSpine); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::put_Spine(CATIAReference * iSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Spine(iSpine); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThresholdActivity(oSmooth); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothAngleThresholdActivity(iSmooth); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&opIAAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThreshold(opIAAngle); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&opIAAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothDeviationActivity(oActivity); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::put_SmoothDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothDeviationActivity(iActivity); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_SmoothDeviation(CATIALength *& opIALength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&opIALength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothDeviation(opIALength); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&opIALength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_RuledDevelopableSurface(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RuledDevelopableSurface(oMode); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::put_RuledDevelopableSurface(CAT_VARIANT_BOOL iiMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iiMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RuledDevelopableSurface(iiMode); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iiMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::GetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG & oBlendConnection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iBlendLimit,&oBlendConnection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRuledDevelopableSurfaceConnection(iBlendLimit,oBlendConnection); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iBlendLimit,&oBlendConnection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetRuledDevelopableSurfaceConnection(CATLONG iBlendLimit, CATLONG iBlendConnection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iBlendLimit,&iBlendConnection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRuledDevelopableSurfaceConnection(iBlendLimit,iBlendConnection); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iBlendLimit,&iBlendConnection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetSmoothAngleThreshold(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSmoothAngleThreshold(iAngle); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::SetSmoothDeviation(double iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSmoothDeviation(iLength); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBlend##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBlend##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBlend##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBlend##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBlend##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBlend##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeBlend(classe) \
 \
 \
declare_TIE_CATIAHybridShapeBlend(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeBlend##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeBlend,"CATIAHybridShapeBlend",CATIAHybridShapeBlend::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeBlend(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeBlend, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeBlend##classe(classe::MetaObject(),CATIAHybridShapeBlend::MetaObject(),(void *)CreateTIECATIAHybridShapeBlend##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeBlend(classe) \
 \
 \
declare_TIE_CATIAHybridShapeBlend(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeBlend##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeBlend,"CATIAHybridShapeBlend",CATIAHybridShapeBlend::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeBlend(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeBlend, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeBlend##classe(classe::MetaObject(),CATIAHybridShapeBlend::MetaObject(),(void *)CreateTIECATIAHybridShapeBlend##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeBlend(classe) TIE_CATIAHybridShapeBlend(classe)
#else
#define BOA_CATIAHybridShapeBlend(classe) CATImplementBOA(CATIAHybridShapeBlend, classe)
#endif

#endif
