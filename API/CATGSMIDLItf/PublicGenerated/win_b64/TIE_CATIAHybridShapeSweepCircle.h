#ifndef __TIE_CATIAHybridShapeSweepCircle
#define __TIE_CATIAHybridShapeSweepCircle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSweepCircle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSweepCircle */
#define declare_TIE_CATIAHybridShapeSweepCircle(classe) \
 \
 \
class TIECATIAHybridShapeSweepCircle##classe : public CATIAHybridShapeSweepCircle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSweepCircle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_ThirdGuideCrv(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_ThirdGuideCrv(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
      virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
      virtual HRESULT __stdcall get_ChoiceNo(CATLONG & Elem); \
      virtual HRESULT __stdcall put_ChoiceNo(CATLONG Elem); \
      virtual HRESULT __stdcall get_Reference(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Reference(CATIAReference * Elem); \
      virtual HRESULT __stdcall GetAngle(CATLONG iI, CATIAAngle *& oElem); \
      virtual HRESULT __stdcall SetAngle(CATLONG iI, double iElem); \
      virtual HRESULT __stdcall get_FirstAngleLaw(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_FirstAngleLaw(CATIAReference * iElem); \
      virtual HRESULT __stdcall GetFirstAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType); \
      virtual HRESULT __stdcall SetFirstAngleLaw(double iElem1, double iElem2, CATLONG ilLawType); \
      virtual HRESULT __stdcall get_FirstAngleLawInversion(CATLONG & oElem); \
      virtual HRESULT __stdcall put_FirstAngleLawInversion(CATLONG iElem); \
      virtual HRESULT __stdcall get_SecondAngleLaw(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SecondAngleLaw(CATIAReference * iElem); \
      virtual HRESULT __stdcall GetSecondAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType); \
      virtual HRESULT __stdcall SetSecondAngleLaw(double iElem1, double iElem2, CATLONG ilLawType); \
      virtual HRESULT __stdcall get_SecondAngleLawInversion(CATLONG & oElem); \
      virtual HRESULT __stdcall put_SecondAngleLawInversion(CATLONG iElem); \
      virtual HRESULT __stdcall GetRadius(CATLONG iI, CATIALength *& oRadius); \
      virtual HRESULT __stdcall SetRadius(CATLONG iI, double iRadius); \
      virtual HRESULT __stdcall get_RadiusLawType(CATLONG & oElem); \
      virtual HRESULT __stdcall put_RadiusLawType(CATLONG iElem); \
      virtual HRESULT __stdcall get_RadiusLawInversion(CATLONG & oElem); \
      virtual HRESULT __stdcall put_RadiusLawInversion(CATLONG iElem); \
      virtual HRESULT __stdcall get_RadiusLaw(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_RadiusLaw(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_TrimOption(CATLONG & Elem); \
      virtual HRESULT __stdcall put_TrimOption(CATLONG Elem); \
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
      virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2); \
      virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2); \
      virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
      virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
      virtual HRESULT __stdcall GetTangencyChoiceNo(CATLONG & oNo, CATLONG & oShellOri, CATLONG & oGuideOri); \
      virtual HRESULT __stdcall SetTangencyChoiceNo(CATLONG iShellOri, CATLONG iGuideOri, CATLONG iNo); \
      virtual HRESULT __stdcall GetNbRadius(CATLONG & oRad); \
      virtual HRESULT __stdcall RemoveRadius(); \
      virtual HRESULT __stdcall GetNbAngle(CATLONG & oAng); \
      virtual HRESULT __stdcall RemoveAngle(); \
      virtual HRESULT __stdcall GetAngleLawTypes(CATLONG & oFirstType, CATLONG & oSecondType); \
      virtual HRESULT __stdcall SetAngleLawTypes(CATLONG iFirstType, CATLONG iSecondType); \
      virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
      virtual HRESULT __stdcall put_Context(CATLONG iContext); \
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



#define ENVTIEdeclare_CATIAHybridShapeSweepCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * Elem); \
virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * Elem); \
virtual HRESULT __stdcall get_ThirdGuideCrv(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_ThirdGuideCrv(CATIAReference * Elem); \
virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
virtual HRESULT __stdcall get_ChoiceNo(CATLONG & Elem); \
virtual HRESULT __stdcall put_ChoiceNo(CATLONG Elem); \
virtual HRESULT __stdcall get_Reference(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Reference(CATIAReference * Elem); \
virtual HRESULT __stdcall GetAngle(CATLONG iI, CATIAAngle *& oElem); \
virtual HRESULT __stdcall SetAngle(CATLONG iI, double iElem); \
virtual HRESULT __stdcall get_FirstAngleLaw(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_FirstAngleLaw(CATIAReference * iElem); \
virtual HRESULT __stdcall GetFirstAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType); \
virtual HRESULT __stdcall SetFirstAngleLaw(double iElem1, double iElem2, CATLONG ilLawType); \
virtual HRESULT __stdcall get_FirstAngleLawInversion(CATLONG & oElem); \
virtual HRESULT __stdcall put_FirstAngleLawInversion(CATLONG iElem); \
virtual HRESULT __stdcall get_SecondAngleLaw(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SecondAngleLaw(CATIAReference * iElem); \
virtual HRESULT __stdcall GetSecondAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType); \
virtual HRESULT __stdcall SetSecondAngleLaw(double iElem1, double iElem2, CATLONG ilLawType); \
virtual HRESULT __stdcall get_SecondAngleLawInversion(CATLONG & oElem); \
virtual HRESULT __stdcall put_SecondAngleLawInversion(CATLONG iElem); \
virtual HRESULT __stdcall GetRadius(CATLONG iI, CATIALength *& oRadius); \
virtual HRESULT __stdcall SetRadius(CATLONG iI, double iRadius); \
virtual HRESULT __stdcall get_RadiusLawType(CATLONG & oElem); \
virtual HRESULT __stdcall put_RadiusLawType(CATLONG iElem); \
virtual HRESULT __stdcall get_RadiusLawInversion(CATLONG & oElem); \
virtual HRESULT __stdcall put_RadiusLawInversion(CATLONG iElem); \
virtual HRESULT __stdcall get_RadiusLaw(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_RadiusLaw(CATIAReference * iElem); \
virtual HRESULT __stdcall get_TrimOption(CATLONG & Elem); \
virtual HRESULT __stdcall put_TrimOption(CATLONG Elem); \
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
virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2); \
virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2); \
virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
virtual HRESULT __stdcall GetTangencyChoiceNo(CATLONG & oNo, CATLONG & oShellOri, CATLONG & oGuideOri); \
virtual HRESULT __stdcall SetTangencyChoiceNo(CATLONG iShellOri, CATLONG iGuideOri, CATLONG iNo); \
virtual HRESULT __stdcall GetNbRadius(CATLONG & oRad); \
virtual HRESULT __stdcall RemoveRadius(); \
virtual HRESULT __stdcall GetNbAngle(CATLONG & oAng); \
virtual HRESULT __stdcall RemoveAngle(); \
virtual HRESULT __stdcall GetAngleLawTypes(CATLONG & oFirstType, CATLONG & oSecondType); \
virtual HRESULT __stdcall SetAngleLawTypes(CATLONG iFirstType, CATLONG iSecondType); \
virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
virtual HRESULT __stdcall put_Context(CATLONG iContext); \
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


#define ENVTIEdefine_CATIAHybridShapeSweepCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstGuideCrv(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_FirstGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstGuideCrv(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_FirstGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondGuideCrv(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_SecondGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondGuideCrv(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_SecondGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThirdGuideCrv(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_ThirdGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ThirdGuideCrv(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_ThirdGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Spine(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Spine(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mode(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChoiceNo(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_ChoiceNo(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ChoiceNo(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_ChoiceNo(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Reference(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Reference(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Reference(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_Reference(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngle(CATLONG iI, CATIAAngle *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetAngle(iI,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngle(CATLONG iI, double iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetAngle(iI,iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstAngleLaw(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_FirstAngleLaw(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstAngleLaw(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_FirstAngleLaw(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetFirstAngleLaw(oElem1,oElem2,olLawType)); \
} \
HRESULT __stdcall  ENVTIEName::SetFirstAngleLaw(double iElem1, double iElem2, CATLONG ilLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetFirstAngleLaw(iElem1,iElem2,ilLawType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstAngleLawInversion(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_FirstAngleLawInversion(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstAngleLawInversion(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_FirstAngleLawInversion(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondAngleLaw(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_SecondAngleLaw(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondAngleLaw(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_SecondAngleLaw(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetSecondAngleLaw(oElem1,oElem2,olLawType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSecondAngleLaw(double iElem1, double iElem2, CATLONG ilLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetSecondAngleLaw(iElem1,iElem2,ilLawType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondAngleLawInversion(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_SecondAngleLawInversion(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondAngleLawInversion(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_SecondAngleLawInversion(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetRadius(CATLONG iI, CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetRadius(iI,oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::SetRadius(CATLONG iI, double iRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetRadius(iI,iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadiusLawType(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_RadiusLawType(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_RadiusLawType(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_RadiusLawType(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadiusLawInversion(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_RadiusLawInversion(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_RadiusLawInversion(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_RadiusLawInversion(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadiusLaw(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_RadiusLaw(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_RadiusLaw(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_RadiusLaw(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrimOption(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_TrimOption(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrimOption(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_TrimOption(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_SmoothActivity(oSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_SmoothActivity(iSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThreshold(opIAAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviationActivity(oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_GuideDeviationActivity(iActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviation(CATIALength *& opIALength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviation(opIALength)); \
} \
HRESULT __stdcall  ENVTIEName::SetSmoothAngleThreshold(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetSmoothAngleThreshold(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetGuideDeviation(double iLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetGuideDeviation(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbGuide(CATLONG & oNum) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetNbGuide(oNum)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuide() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)RemoveGuide()); \
} \
HRESULT __stdcall  ENVTIEName::GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetLongitudinalRelimiters(opIAElem1,opIAElem2)); \
} \
HRESULT __stdcall  ENVTIEName::SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetLongitudinalRelimiters(ipIAElem1,ipIAElem2)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::GetTangencyChoiceNo(CATLONG & oNo, CATLONG & oShellOri, CATLONG & oGuideOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetTangencyChoiceNo(oNo,oShellOri,oGuideOri)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangencyChoiceNo(CATLONG iShellOri, CATLONG iGuideOri, CATLONG iNo) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetTangencyChoiceNo(iShellOri,iGuideOri,iNo)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbRadius(CATLONG & oRad) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetNbRadius(oRad)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveRadius() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)RemoveRadius()); \
} \
HRESULT __stdcall  ENVTIEName::GetNbAngle(CATLONG & oAng) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetNbAngle(oAng)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAngle() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)RemoveAngle()); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleLawTypes(CATLONG & oFirstType, CATLONG & oSecondType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetAngleLawTypes(oFirstType,oSecondType)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngleLawTypes(CATLONG iFirstType, CATLONG iSecondType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)SetAngleLawTypes(iFirstType,iSecondType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATLONG & oContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::put_Context(CATLONG iContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_Context(iContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_CanonicalDetection(CATLONG & oDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_CanonicalDetection(oDetection)); \
} \
HRESULT __stdcall  ENVTIEName::put_CanonicalDetection(CATLONG iDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_CanonicalDetection(iDetection)); \
} \
HRESULT __stdcall  ENVTIEName::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetCutPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)AddCutPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllCutPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)RemoveAllCutPoints()); \
} \
HRESULT __stdcall  ENVTIEName::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetFillPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)AddFillPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFillPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)RemoveAllFillPoints()); \
} \
HRESULT __stdcall  ENVTIEName::get_SetbackValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_SetbackValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SetbackValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_SetbackValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_FillTwistedAreas(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_FillTwistedAreas(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FillTwistedAreas(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_FillTwistedAreas(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_C0VerticesMode(obC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_C0VerticesMode(ibC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepCircle,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSweepCircle(classe)    TIECATIAHybridShapeSweepCircle##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSweepCircle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSweepCircle, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSweepCircle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepCircle, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepCircle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSweepCircle, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_FirstGuideCrv(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstGuideCrv(Elem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_FirstGuideCrv(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstGuideCrv(Elem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_SecondGuideCrv(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondGuideCrv(Elem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_SecondGuideCrv(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondGuideCrv(Elem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_ThirdGuideCrv(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThirdGuideCrv(Elem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_ThirdGuideCrv(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ThirdGuideCrv(Elem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Spine(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spine(Elem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_Spine(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Spine(Elem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Mode(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(Elem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_Mode(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(Elem); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_ChoiceNo(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChoiceNo(Elem); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_ChoiceNo(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ChoiceNo(Elem); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Reference(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Reference(Elem); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_Reference(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Reference(Elem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetAngle(CATLONG iI, CATIAAngle *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iI,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngle(iI,oElem); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iI,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetAngle(CATLONG iI, double iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iI,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngle(iI,iElem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iI,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_FirstAngleLaw(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstAngleLaw(oElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_FirstAngleLaw(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstAngleLaw(iElem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetFirstAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oElem1,&oElem2,&olLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstAngleLaw(oElem1,oElem2,olLawType); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oElem1,&oElem2,&olLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetFirstAngleLaw(double iElem1, double iElem2, CATLONG ilLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iElem1,&iElem2,&ilLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFirstAngleLaw(iElem1,iElem2,ilLawType); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iElem1,&iElem2,&ilLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_FirstAngleLawInversion(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstAngleLawInversion(oElem); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_FirstAngleLawInversion(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstAngleLawInversion(iElem); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_SecondAngleLaw(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondAngleLaw(oElem); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_SecondAngleLaw(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondAngleLaw(iElem); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetSecondAngleLaw(CATIAAngle *& oElem1, CATIAAngle *& oElem2, CATLONG & olLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oElem1,&oElem2,&olLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondAngleLaw(oElem1,oElem2,olLawType); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oElem1,&oElem2,&olLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetSecondAngleLaw(double iElem1, double iElem2, CATLONG ilLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iElem1,&iElem2,&ilLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondAngleLaw(iElem1,iElem2,ilLawType); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iElem1,&iElem2,&ilLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_SecondAngleLawInversion(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondAngleLawInversion(oElem); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_SecondAngleLawInversion(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondAngleLawInversion(iElem); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetRadius(CATLONG iI, CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iI,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRadius(iI,oRadius); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iI,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetRadius(CATLONG iI, double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iI,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadius(iI,iRadius); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iI,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_RadiusLawType(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadiusLawType(oElem); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_RadiusLawType(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RadiusLawType(iElem); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_RadiusLawInversion(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadiusLawInversion(oElem); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_RadiusLawInversion(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RadiusLawInversion(iElem); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_RadiusLaw(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadiusLaw(oElem); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_RadiusLaw(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RadiusLaw(iElem); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_TrimOption(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrimOption(Elem); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_TrimOption(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrimOption(Elem); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothActivity(oSmooth); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothActivity(iSmooth); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&opIAAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThreshold(opIAAngle); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&opIAAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviationActivity(oActivity); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GuideDeviationActivity(iActivity); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_GuideDeviation(CATIALength *& opIALength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&opIALength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviation(opIALength); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&opIALength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetSmoothAngleThreshold(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSmoothAngleThreshold(iAngle); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetGuideDeviation(double iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGuideDeviation(iLength); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetNbGuide(CATLONG & oNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbGuide(oNum); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::RemoveGuide() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuide(); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&opIAElem1,&opIAElem2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLongitudinalRelimiters(opIAElem1,opIAElem2); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&opIAElem1,&opIAElem2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&ipIAElem1,&ipIAElem2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLongitudinalRelimiters(ipIAElem1,ipIAElem2); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&ipIAElem1,&ipIAElem2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetTangencyChoiceNo(CATLONG & oNo, CATLONG & oShellOri, CATLONG & oGuideOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oNo,&oShellOri,&oGuideOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangencyChoiceNo(oNo,oShellOri,oGuideOri); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oNo,&oShellOri,&oGuideOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetTangencyChoiceNo(CATLONG iShellOri, CATLONG iGuideOri, CATLONG iNo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iShellOri,&iGuideOri,&iNo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangencyChoiceNo(iShellOri,iGuideOri,iNo); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iShellOri,&iGuideOri,&iNo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetNbRadius(CATLONG & oRad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oRad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbRadius(oRad); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oRad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::RemoveRadius() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveRadius(); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetNbAngle(CATLONG & oAng) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oAng); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbAngle(oAng); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oAng); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::RemoveAngle() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAngle(); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetAngleLawTypes(CATLONG & oFirstType, CATLONG & oSecondType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oFirstType,&oSecondType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleLawTypes(oFirstType,oSecondType); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oFirstType,&oSecondType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::SetAngleLawTypes(CATLONG iFirstType, CATLONG iSecondType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iFirstType,&iSecondType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngleLawTypes(iFirstType,iSecondType); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iFirstType,&iSecondType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Context(CATLONG & oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_Context(CATLONG iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Context(iContext); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_CanonicalDetection(CATLONG & oDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CanonicalDetection(oDetection); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_CanonicalDetection(CATLONG iDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CanonicalDetection(iDetection); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCutPoint(iRank,oElement); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCutPoints(iElement1,iElement2); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::RemoveAllCutPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllCutPoints(); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFillPoint(iRank,oElement); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFillPoints(iElement1,iElement2); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::RemoveAllFillPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFillPoints(); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_SetbackValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SetbackValue(oValue); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_SetbackValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SetbackValue(iValue); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_FillTwistedAreas(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FillTwistedAreas(oMode); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_FillTwistedAreas(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FillTwistedAreas(iMode); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&obC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_C0VerticesMode(obC0VerticesMode); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&obC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&ibC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_C0VerticesMode(ibC0VerticesMode); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&ibC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepCircle##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepCircle##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepCircle##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSweepCircle(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepCircle,"CATIAHybridShapeSweepCircle",CATIAHybridShapeSweepCircle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSweepCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepCircle##classe(classe::MetaObject(),CATIAHybridShapeSweepCircle::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepCircle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSweepCircle(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepCircle,"CATIAHybridShapeSweepCircle",CATIAHybridShapeSweepCircle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSweepCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepCircle##classe(classe::MetaObject(),CATIAHybridShapeSweepCircle::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepCircle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSweepCircle(classe) TIE_CATIAHybridShapeSweepCircle(classe)
#else
#define BOA_CATIAHybridShapeSweepCircle(classe) CATImplementBOA(CATIAHybridShapeSweepCircle, classe)
#endif

#endif
