#ifndef __TIE_CATIAHybridShapeSweepExplicit
#define __TIE_CATIAHybridShapeSweepExplicit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSweepExplicit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSweepExplicit */
#define declare_TIE_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
class TIECATIAHybridShapeSweepExplicit##classe : public CATIAHybridShapeSweepExplicit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSweepExplicit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_Profile(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Profile(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_PositionedProfile(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_PositionedProfile(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_Reference(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Reference(CATIAReference * Elem); \
      virtual HRESULT __stdcall GetAngleRef(CATLONG ii, CATIAAngle *& Elem); \
      virtual HRESULT __stdcall SetAngleRef(CATLONG ii, double Elem); \
      virtual HRESULT __stdcall get_AngleLawType(CATLONG & oElem); \
      virtual HRESULT __stdcall put_AngleLawType(CATLONG iElem); \
      virtual HRESULT __stdcall get_AngleLawInversion(CATLONG & oElem); \
      virtual HRESULT __stdcall put_AngleLawInversion(CATLONG iElem); \
      virtual HRESULT __stdcall get_AngleLaw(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_AngleLaw(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
      virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
      virtual HRESULT __stdcall GetPosCoord(CATLONG ii, CATIALength *& Elem); \
      virtual HRESULT __stdcall SetPosCoord(CATLONG ii, double Elem); \
      virtual HRESULT __stdcall GetPosAngle(CATLONG ii, CATIAAngle *& Elem); \
      virtual HRESULT __stdcall SetPosAngle(CATLONG ii, double Elem); \
      virtual HRESULT __stdcall GetPosSwapAxes(CATLONG ii, CATLONG & Elem); \
      virtual HRESULT __stdcall SetPosSwapAxes(CATLONG ii, CATLONG Elem); \
      virtual HRESULT __stdcall GetPosPoint(CATLONG ii, CATIAReference *& Elem); \
      virtual HRESULT __stdcall SetPosPoint(CATLONG ii, CATIAReference * Elem); \
      virtual HRESULT __stdcall GetPosDirection(CATLONG ii, CATIAReference *& Elem); \
      virtual HRESULT __stdcall SetPosDirection(CATLONG ii, CATIAReference * Elem); \
      virtual HRESULT __stdcall get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth); \
      virtual HRESULT __stdcall put_SmoothActivity(CAT_VARIANT_BOOL iSmooth); \
      virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
      virtual HRESULT __stdcall get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
      virtual HRESULT __stdcall put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity); \
      virtual HRESULT __stdcall get_GuideDeviation(CATIALength *& opIALength); \
      virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
      virtual HRESULT __stdcall SetGuideDeviation(double iLength); \
      virtual HRESULT __stdcall GetNbGuide(CATLONG & oNum); \
      virtual HRESULT __stdcall RemoveGuide(); \
      virtual HRESULT __stdcall UseSketchAxisAsDefault(CAT_VARIANT_BOOL iBoolean); \
      virtual HRESULT __stdcall IsSketchAxisUsedAsDefault(CAT_VARIANT_BOOL & oBoolean); \
      virtual HRESULT __stdcall GetFittingPoints(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB); \
      virtual HRESULT __stdcall SetFittingPoints(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB); \
      virtual HRESULT __stdcall RemoveFittingPoints(); \
      virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB); \
      virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB); \
      virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
      virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
      virtual HRESULT __stdcall GetNbAngle(CATLONG & oAng); \
      virtual HRESULT __stdcall RemoveAngle(); \
      virtual HRESULT __stdcall GetNbPosCoord(CATLONG & oPosCoord); \
      virtual HRESULT __stdcall GetNbPosAngle(CATLONG & oPosAng); \
      virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
      virtual HRESULT __stdcall put_Context(CATLONG iContext); \
      virtual HRESULT __stdcall get_PositionMode(CATLONG & oPosMode); \
      virtual HRESULT __stdcall put_PositionMode(CATLONG iPosMode); \
      virtual HRESULT __stdcall get_ProfileXAxisComputationMode(CATLONG & oDirCompMode); \
      virtual HRESULT __stdcall put_ProfileXAxisComputationMode(CATLONG iDirCompMode); \
      virtual HRESULT __stdcall get_PullingDirection(CATIAHybridShapeDirection *& ohDir); \
      virtual HRESULT __stdcall put_PullingDirection(CATIAHybridShapeDirection * ihDir); \
      virtual HRESULT __stdcall get_GuideProjection(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_GuideProjection(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_SolutionNo(CATLONG & Elem); \
      virtual HRESULT __stdcall put_SolutionNo(CATLONG Elem); \
      virtual HRESULT __stdcall get_SubType(CATLONG & Elem); \
      virtual HRESULT __stdcall put_SubType(CATLONG Elem); \
      virtual HRESULT __stdcall get_CanonicalDetection(CATLONG & oDetection); \
      virtual HRESULT __stdcall put_CanonicalDetection(CATLONG iDetection); \
      virtual HRESULT __stdcall GetCutPoint(CATLONG iRank, CATIAReference *& oElement); \
      virtual HRESULT __stdcall AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
      virtual HRESULT __stdcall RemoveAllCutPoints(); \
      virtual HRESULT __stdcall GetFillPoint(CATLONG iRank, CATIAReference *& oElement); \
      virtual HRESULT __stdcall AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
      virtual HRESULT __stdcall RemoveAllFillPoints(); \
      virtual HRESULT __stdcall get_SetbackValue(double & oValue); \
      virtual HRESULT __stdcall put_SetbackValue(double iValue); \
      virtual HRESULT __stdcall get_FillTwistedAreas(CATLONG & oMode); \
      virtual HRESULT __stdcall put_FillTwistedAreas(CATLONG iMode); \
      virtual HRESULT __stdcall get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode); \
      virtual HRESULT __stdcall put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeSweepExplicit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * Elem); \
virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * Elem); \
virtual HRESULT __stdcall get_Profile(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Profile(CATIAReference * Elem); \
virtual HRESULT __stdcall get_PositionedProfile(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_PositionedProfile(CATIAReference * Elem); \
virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
virtual HRESULT __stdcall get_Reference(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Reference(CATIAReference * Elem); \
virtual HRESULT __stdcall GetAngleRef(CATLONG ii, CATIAAngle *& Elem); \
virtual HRESULT __stdcall SetAngleRef(CATLONG ii, double Elem); \
virtual HRESULT __stdcall get_AngleLawType(CATLONG & oElem); \
virtual HRESULT __stdcall put_AngleLawType(CATLONG iElem); \
virtual HRESULT __stdcall get_AngleLawInversion(CATLONG & oElem); \
virtual HRESULT __stdcall put_AngleLawInversion(CATLONG iElem); \
virtual HRESULT __stdcall get_AngleLaw(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_AngleLaw(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
virtual HRESULT __stdcall GetPosCoord(CATLONG ii, CATIALength *& Elem); \
virtual HRESULT __stdcall SetPosCoord(CATLONG ii, double Elem); \
virtual HRESULT __stdcall GetPosAngle(CATLONG ii, CATIAAngle *& Elem); \
virtual HRESULT __stdcall SetPosAngle(CATLONG ii, double Elem); \
virtual HRESULT __stdcall GetPosSwapAxes(CATLONG ii, CATLONG & Elem); \
virtual HRESULT __stdcall SetPosSwapAxes(CATLONG ii, CATLONG Elem); \
virtual HRESULT __stdcall GetPosPoint(CATLONG ii, CATIAReference *& Elem); \
virtual HRESULT __stdcall SetPosPoint(CATLONG ii, CATIAReference * Elem); \
virtual HRESULT __stdcall GetPosDirection(CATLONG ii, CATIAReference *& Elem); \
virtual HRESULT __stdcall SetPosDirection(CATLONG ii, CATIAReference * Elem); \
virtual HRESULT __stdcall get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth); \
virtual HRESULT __stdcall put_SmoothActivity(CAT_VARIANT_BOOL iSmooth); \
virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
virtual HRESULT __stdcall get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
virtual HRESULT __stdcall put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity); \
virtual HRESULT __stdcall get_GuideDeviation(CATIALength *& opIALength); \
virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
virtual HRESULT __stdcall SetGuideDeviation(double iLength); \
virtual HRESULT __stdcall GetNbGuide(CATLONG & oNum); \
virtual HRESULT __stdcall RemoveGuide(); \
virtual HRESULT __stdcall UseSketchAxisAsDefault(CAT_VARIANT_BOOL iBoolean); \
virtual HRESULT __stdcall IsSketchAxisUsedAsDefault(CAT_VARIANT_BOOL & oBoolean); \
virtual HRESULT __stdcall GetFittingPoints(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB); \
virtual HRESULT __stdcall SetFittingPoints(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB); \
virtual HRESULT __stdcall RemoveFittingPoints(); \
virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB); \
virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB); \
virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
virtual HRESULT __stdcall GetNbAngle(CATLONG & oAng); \
virtual HRESULT __stdcall RemoveAngle(); \
virtual HRESULT __stdcall GetNbPosCoord(CATLONG & oPosCoord); \
virtual HRESULT __stdcall GetNbPosAngle(CATLONG & oPosAng); \
virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
virtual HRESULT __stdcall put_Context(CATLONG iContext); \
virtual HRESULT __stdcall get_PositionMode(CATLONG & oPosMode); \
virtual HRESULT __stdcall put_PositionMode(CATLONG iPosMode); \
virtual HRESULT __stdcall get_ProfileXAxisComputationMode(CATLONG & oDirCompMode); \
virtual HRESULT __stdcall put_ProfileXAxisComputationMode(CATLONG iDirCompMode); \
virtual HRESULT __stdcall get_PullingDirection(CATIAHybridShapeDirection *& ohDir); \
virtual HRESULT __stdcall put_PullingDirection(CATIAHybridShapeDirection * ihDir); \
virtual HRESULT __stdcall get_GuideProjection(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_GuideProjection(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_SolutionNo(CATLONG & Elem); \
virtual HRESULT __stdcall put_SolutionNo(CATLONG Elem); \
virtual HRESULT __stdcall get_SubType(CATLONG & Elem); \
virtual HRESULT __stdcall put_SubType(CATLONG Elem); \
virtual HRESULT __stdcall get_CanonicalDetection(CATLONG & oDetection); \
virtual HRESULT __stdcall put_CanonicalDetection(CATLONG iDetection); \
virtual HRESULT __stdcall GetCutPoint(CATLONG iRank, CATIAReference *& oElement); \
virtual HRESULT __stdcall AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
virtual HRESULT __stdcall RemoveAllCutPoints(); \
virtual HRESULT __stdcall GetFillPoint(CATLONG iRank, CATIAReference *& oElement); \
virtual HRESULT __stdcall AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
virtual HRESULT __stdcall RemoveAllFillPoints(); \
virtual HRESULT __stdcall get_SetbackValue(double & oValue); \
virtual HRESULT __stdcall put_SetbackValue(double iValue); \
virtual HRESULT __stdcall get_FillTwistedAreas(CATLONG & oMode); \
virtual HRESULT __stdcall put_FillTwistedAreas(CATLONG iMode); \
virtual HRESULT __stdcall get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode); \
virtual HRESULT __stdcall put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeSweepExplicit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstGuideCrv(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_FirstGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstGuideCrv(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_FirstGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondGuideCrv(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_SecondGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondGuideCrv(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_SecondGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Profile(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Profile(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Profile(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_Profile(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionedProfile(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_PositionedProfile(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_PositionedProfile(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_PositionedProfile(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Spine(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Spine(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Reference(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Reference(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Reference(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_Reference(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleRef(CATLONG ii, CATIAAngle *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetAngleRef(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngleRef(CATLONG ii, double Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetAngleRef(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleLawType(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_AngleLawType(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLawType(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_AngleLawType(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleLawInversion(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_AngleLawInversion(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLawInversion(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_AngleLawInversion(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleLaw(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_AngleLaw(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLaw(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_AngleLaw(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mode(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosCoord(CATLONG ii, CATIALength *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetPosCoord(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosCoord(CATLONG ii, double Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetPosCoord(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosAngle(CATLONG ii, CATIAAngle *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetPosAngle(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosAngle(CATLONG ii, double Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetPosAngle(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosSwapAxes(CATLONG ii, CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetPosSwapAxes(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosSwapAxes(CATLONG ii, CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetPosSwapAxes(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosPoint(CATLONG ii, CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetPosPoint(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosPoint(CATLONG ii, CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetPosPoint(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosDirection(CATLONG ii, CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetPosDirection(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosDirection(CATLONG ii, CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetPosDirection(ii,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_SmoothActivity(oSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_SmoothActivity(iSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThreshold(opIAAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviationActivity(oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_GuideDeviationActivity(iActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviation(CATIALength *& opIALength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviation(opIALength)); \
} \
HRESULT __stdcall  ENVTIEName::SetSmoothAngleThreshold(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetSmoothAngleThreshold(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetGuideDeviation(double iLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetGuideDeviation(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbGuide(CATLONG & oNum) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetNbGuide(oNum)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuide() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)RemoveGuide()); \
} \
HRESULT __stdcall  ENVTIEName::UseSketchAxisAsDefault(CAT_VARIANT_BOOL iBoolean) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)UseSketchAxisAsDefault(iBoolean)); \
} \
HRESULT __stdcall  ENVTIEName::IsSketchAxisUsedAsDefault(CAT_VARIANT_BOOL & oBoolean) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)IsSketchAxisUsedAsDefault(oBoolean)); \
} \
HRESULT __stdcall  ENVTIEName::GetFittingPoints(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetFittingPoints(opIAElemA,opIAElemB)); \
} \
HRESULT __stdcall  ENVTIEName::SetFittingPoints(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetFittingPoints(ipIAElemA,ipIAElemB)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFittingPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)RemoveFittingPoints()); \
} \
HRESULT __stdcall  ENVTIEName::GetLongitudinalRelimiters(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetLongitudinalRelimiters(opIAElemA,opIAElemB)); \
} \
HRESULT __stdcall  ENVTIEName::SetLongitudinalRelimiters(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetLongitudinalRelimiters(ipIAElemA,ipIAElemB)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbAngle(CATLONG & oAng) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetNbAngle(oAng)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAngle() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)RemoveAngle()); \
} \
HRESULT __stdcall  ENVTIEName::GetNbPosCoord(CATLONG & oPosCoord) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetNbPosCoord(oPosCoord)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbPosAngle(CATLONG & oPosAng) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetNbPosAngle(oPosAng)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATLONG & oContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::put_Context(CATLONG iContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_Context(iContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionMode(CATLONG & oPosMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_PositionMode(oPosMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PositionMode(CATLONG iPosMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_PositionMode(iPosMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProfileXAxisComputationMode(CATLONG & oDirCompMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_ProfileXAxisComputationMode(oDirCompMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProfileXAxisComputationMode(CATLONG iDirCompMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_ProfileXAxisComputationMode(iDirCompMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_PullingDirection(CATIAHybridShapeDirection *& ohDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_PullingDirection(ohDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_PullingDirection(CATIAHybridShapeDirection * ihDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_PullingDirection(ihDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideProjection(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_GuideProjection(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_GuideProjection(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_GuideProjection(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolutionNo(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_SolutionNo(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolutionNo(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_SolutionNo(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SubType(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_SubType(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SubType(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_SubType(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_CanonicalDetection(CATLONG & oDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_CanonicalDetection(oDetection)); \
} \
HRESULT __stdcall  ENVTIEName::put_CanonicalDetection(CATLONG iDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_CanonicalDetection(iDetection)); \
} \
HRESULT __stdcall  ENVTIEName::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetCutPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)AddCutPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllCutPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)RemoveAllCutPoints()); \
} \
HRESULT __stdcall  ENVTIEName::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetFillPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)AddFillPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFillPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)RemoveAllFillPoints()); \
} \
HRESULT __stdcall  ENVTIEName::get_SetbackValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_SetbackValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SetbackValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_SetbackValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_FillTwistedAreas(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_FillTwistedAreas(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FillTwistedAreas(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_FillTwistedAreas(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_C0VerticesMode(obC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_C0VerticesMode(ibC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepExplicit,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSweepExplicit(classe)    TIECATIAHybridShapeSweepExplicit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSweepExplicit, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSweepExplicit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepExplicit, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepExplicit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSweepExplicit, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_FirstGuideCrv(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstGuideCrv(Elem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_FirstGuideCrv(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstGuideCrv(Elem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_SecondGuideCrv(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondGuideCrv(Elem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_SecondGuideCrv(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondGuideCrv(Elem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Profile(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Profile(Elem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_Profile(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Profile(Elem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_PositionedProfile(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionedProfile(Elem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_PositionedProfile(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PositionedProfile(Elem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Spine(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spine(Elem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_Spine(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Spine(Elem); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Reference(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Reference(Elem); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_Reference(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Reference(Elem); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetAngleRef(CATLONG ii, CATIAAngle *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleRef(ii,Elem); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetAngleRef(CATLONG ii, double Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngleRef(ii,Elem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_AngleLawType(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLawType(oElem); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_AngleLawType(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLawType(iElem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_AngleLawInversion(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLawInversion(oElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_AngleLawInversion(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLawInversion(iElem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_AngleLaw(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLaw(oElem); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_AngleLaw(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLaw(iElem); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Mode(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(Elem); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_Mode(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(Elem); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetPosCoord(CATLONG ii, CATIALength *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosCoord(ii,Elem); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetPosCoord(CATLONG ii, double Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosCoord(ii,Elem); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetPosAngle(CATLONG ii, CATIAAngle *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosAngle(ii,Elem); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetPosAngle(CATLONG ii, double Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosAngle(ii,Elem); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetPosSwapAxes(CATLONG ii, CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosSwapAxes(ii,Elem); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetPosSwapAxes(CATLONG ii, CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosSwapAxes(ii,Elem); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetPosPoint(CATLONG ii, CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosPoint(ii,Elem); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetPosPoint(CATLONG ii, CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosPoint(ii,Elem); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetPosDirection(CATLONG ii, CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosDirection(ii,Elem); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetPosDirection(CATLONG ii, CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&ii,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosDirection(ii,Elem); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&ii,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothActivity(oSmooth); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothActivity(iSmooth); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&opIAAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThreshold(opIAAngle); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&opIAAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviationActivity(oActivity); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GuideDeviationActivity(iActivity); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_GuideDeviation(CATIALength *& opIALength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&opIALength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviation(opIALength); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&opIALength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetSmoothAngleThreshold(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSmoothAngleThreshold(iAngle); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetGuideDeviation(double iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGuideDeviation(iLength); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetNbGuide(CATLONG & oNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbGuide(oNum); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::RemoveGuide() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuide(); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::UseSketchAxisAsDefault(CAT_VARIANT_BOOL iBoolean) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iBoolean); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UseSketchAxisAsDefault(iBoolean); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iBoolean); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::IsSketchAxisUsedAsDefault(CAT_VARIANT_BOOL & oBoolean) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oBoolean); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSketchAxisUsedAsDefault(oBoolean); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oBoolean); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetFittingPoints(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&opIAElemA,&opIAElemB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFittingPoints(opIAElemA,opIAElemB); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&opIAElemA,&opIAElemB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetFittingPoints(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&ipIAElemA,&ipIAElemB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFittingPoints(ipIAElemA,ipIAElemB); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&ipIAElemA,&ipIAElemB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::RemoveFittingPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFittingPoints(); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetLongitudinalRelimiters(CATIAReference *& opIAElemA, CATIAReference *& opIAElemB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&opIAElemA,&opIAElemB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLongitudinalRelimiters(opIAElemA,opIAElemB); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&opIAElemA,&opIAElemB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetLongitudinalRelimiters(CATIAReference * ipIAElemA, CATIAReference * ipIAElemB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&ipIAElemA,&ipIAElemB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLongitudinalRelimiters(ipIAElemA,ipIAElemB); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&ipIAElemA,&ipIAElemB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetNbAngle(CATLONG & oAng) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&oAng); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbAngle(oAng); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&oAng); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::RemoveAngle() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAngle(); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetNbPosCoord(CATLONG & oPosCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oPosCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbPosCoord(oPosCoord); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oPosCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetNbPosAngle(CATLONG & oPosAng) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oPosAng); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbPosAngle(oPosAng); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oPosAng); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Context(CATLONG & oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_Context(CATLONG iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Context(iContext); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_PositionMode(CATLONG & oPosMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oPosMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionMode(oPosMode); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oPosMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_PositionMode(CATLONG iPosMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&iPosMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PositionMode(iPosMode); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&iPosMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_ProfileXAxisComputationMode(CATLONG & oDirCompMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&oDirCompMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProfileXAxisComputationMode(oDirCompMode); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&oDirCompMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_ProfileXAxisComputationMode(CATLONG iDirCompMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&iDirCompMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProfileXAxisComputationMode(iDirCompMode); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&iDirCompMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_PullingDirection(CATIAHybridShapeDirection *& ohDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&ohDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PullingDirection(ohDir); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&ohDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_PullingDirection(CATIAHybridShapeDirection * ihDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ihDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PullingDirection(ihDir); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ihDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_GuideProjection(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideProjection(oMode); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_GuideProjection(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GuideProjection(iMode); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_SolutionNo(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolutionNo(Elem); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_SolutionNo(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolutionNo(Elem); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_SubType(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SubType(Elem); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_SubType(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SubType(Elem); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_CanonicalDetection(CATLONG & oDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&oDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CanonicalDetection(oDetection); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&oDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_CanonicalDetection(CATLONG iDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&iDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CanonicalDetection(iDetection); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&iDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCutPoint(iRank,oElement); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCutPoints(iElement1,iElement2); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::RemoveAllCutPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllCutPoints(); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFillPoint(iRank,oElement); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFillPoints(iElement1,iElement2); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::RemoveAllFillPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFillPoints(); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_SetbackValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SetbackValue(oValue); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_SetbackValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SetbackValue(iValue); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_FillTwistedAreas(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FillTwistedAreas(oMode); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_FillTwistedAreas(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FillTwistedAreas(iMode); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&obC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_C0VerticesMode(obC0VerticesMode); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&obC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ibC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_C0VerticesMode(ibC0VerticesMode); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ibC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepExplicit##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepExplicit##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepExplicit##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepExplicit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepExplicit,"CATIAHybridShapeSweepExplicit",CATIAHybridShapeSweepExplicit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSweepExplicit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepExplicit##classe(classe::MetaObject(),CATIAHybridShapeSweepExplicit::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepExplicit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepExplicit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepExplicit,"CATIAHybridShapeSweepExplicit",CATIAHybridShapeSweepExplicit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepExplicit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSweepExplicit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepExplicit##classe(classe::MetaObject(),CATIAHybridShapeSweepExplicit::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepExplicit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSweepExplicit(classe) TIE_CATIAHybridShapeSweepExplicit(classe)
#else
#define BOA_CATIAHybridShapeSweepExplicit(classe) CATImplementBOA(CATIAHybridShapeSweepExplicit, classe)
#endif

#endif
