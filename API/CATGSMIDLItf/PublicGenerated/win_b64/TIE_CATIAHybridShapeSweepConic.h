#ifndef __TIE_CATIAHybridShapeSweepConic
#define __TIE_CATIAHybridShapeSweepConic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSweepConic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSweepConic */
#define declare_TIE_CATIAHybridShapeSweepConic(classe) \
 \
 \
class TIECATIAHybridShapeSweepConic##classe : public CATIAHybridShapeSweepConic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSweepConic, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall get_ThirdGuideCrv(CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall put_ThirdGuideCrv(CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall get_FourthGuideCrv(CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall put_FourthGuideCrv(CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall get_FifthGuideCrv(CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall put_FifthGuideCrv(CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall get_Parameter(double & oValue); \
      virtual HRESULT __stdcall put_Parameter(double iValue); \
      virtual HRESULT __stdcall get_ParameterLawInversion(CAT_VARIANT_BOOL & oInversion); \
      virtual HRESULT __stdcall put_ParameterLawInversion(CAT_VARIANT_BOOL iInversion); \
      virtual HRESULT __stdcall get_ParameterLaw(CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall put_ParameterLaw(CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall get_ParameterLawType(CATLONG & oLawType); \
      virtual HRESULT __stdcall put_ParameterLawType(CATLONG iLawType); \
      virtual HRESULT __stdcall get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth); \
      virtual HRESULT __stdcall put_SmoothActivity(CAT_VARIANT_BOOL iSmooth); \
      virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
      virtual HRESULT __stdcall get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
      virtual HRESULT __stdcall put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity); \
      virtual HRESULT __stdcall get_GuideDeviation(CATIALength *& opIALength); \
      virtual HRESULT __stdcall GetTangency(CATIAReference *& opIAElem, CATIAAngle *& opIAAngleStart, CATIAAngle *& opIAAngleEnd, CATLONG & oLawType, CATLONG iIndex); \
      virtual HRESULT __stdcall SetTangency(CATIAReference * ipIAElem, double iAngleStart, double iAngleEnd, CATLONG ilawType, CATLONG iIndex); \
      virtual HRESULT __stdcall GetTangencyLaw(CATIAReference *& opIAElem, CATIAReference *& opIALaw, CATLONG iIndex); \
      virtual HRESULT __stdcall SetTangencyLaw(CATIAReference * ipIAElem, CATIAReference * ipIALaw, CATLONG iIndex); \
      virtual HRESULT __stdcall GetTangencyAngleLawInversion(CATLONG iIndex, CATLONG & oInversion); \
      virtual HRESULT __stdcall SetTangencyAngleLawInversion(CATLONG iIndex, CATLONG iInversion); \
      virtual HRESULT __stdcall GetParameterLaw(double & oParamStart, double & oParamEnd, CATLONG & oLawType); \
      virtual HRESULT __stdcall SetParameterLaw(double iParamStart, double iParamEnd, CATLONG iLawType); \
      virtual HRESULT __stdcall RemoveGuide(CATLONG iIndex); \
      virtual HRESULT __stdcall GetNbGuides(CATLONG & oNum); \
      virtual HRESULT __stdcall RemoveTangency(CATLONG iIndex); \
      virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2); \
      virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2); \
      virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
      virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
      virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
      virtual HRESULT __stdcall SetGuideDeviation(double iLength); \
      virtual HRESULT __stdcall RemoveParameter(); \
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



#define ENVTIEdeclare_CATIAHybridShapeSweepConic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& opIAElem); \
virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * ipIAElem); \
virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& opIAElem); \
virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * ipIAElem); \
virtual HRESULT __stdcall get_ThirdGuideCrv(CATIAReference *& opIAElem); \
virtual HRESULT __stdcall put_ThirdGuideCrv(CATIAReference * ipIAElem); \
virtual HRESULT __stdcall get_FourthGuideCrv(CATIAReference *& opIAElem); \
virtual HRESULT __stdcall put_FourthGuideCrv(CATIAReference * ipIAElem); \
virtual HRESULT __stdcall get_FifthGuideCrv(CATIAReference *& opIAElem); \
virtual HRESULT __stdcall put_FifthGuideCrv(CATIAReference * ipIAElem); \
virtual HRESULT __stdcall get_Parameter(double & oValue); \
virtual HRESULT __stdcall put_Parameter(double iValue); \
virtual HRESULT __stdcall get_ParameterLawInversion(CAT_VARIANT_BOOL & oInversion); \
virtual HRESULT __stdcall put_ParameterLawInversion(CAT_VARIANT_BOOL iInversion); \
virtual HRESULT __stdcall get_ParameterLaw(CATIAReference *& opIAElem); \
virtual HRESULT __stdcall put_ParameterLaw(CATIAReference * ipIAElem); \
virtual HRESULT __stdcall get_ParameterLawType(CATLONG & oLawType); \
virtual HRESULT __stdcall put_ParameterLawType(CATLONG iLawType); \
virtual HRESULT __stdcall get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth); \
virtual HRESULT __stdcall put_SmoothActivity(CAT_VARIANT_BOOL iSmooth); \
virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
virtual HRESULT __stdcall get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
virtual HRESULT __stdcall put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity); \
virtual HRESULT __stdcall get_GuideDeviation(CATIALength *& opIALength); \
virtual HRESULT __stdcall GetTangency(CATIAReference *& opIAElem, CATIAAngle *& opIAAngleStart, CATIAAngle *& opIAAngleEnd, CATLONG & oLawType, CATLONG iIndex); \
virtual HRESULT __stdcall SetTangency(CATIAReference * ipIAElem, double iAngleStart, double iAngleEnd, CATLONG ilawType, CATLONG iIndex); \
virtual HRESULT __stdcall GetTangencyLaw(CATIAReference *& opIAElem, CATIAReference *& opIALaw, CATLONG iIndex); \
virtual HRESULT __stdcall SetTangencyLaw(CATIAReference * ipIAElem, CATIAReference * ipIALaw, CATLONG iIndex); \
virtual HRESULT __stdcall GetTangencyAngleLawInversion(CATLONG iIndex, CATLONG & oInversion); \
virtual HRESULT __stdcall SetTangencyAngleLawInversion(CATLONG iIndex, CATLONG iInversion); \
virtual HRESULT __stdcall GetParameterLaw(double & oParamStart, double & oParamEnd, CATLONG & oLawType); \
virtual HRESULT __stdcall SetParameterLaw(double iParamStart, double iParamEnd, CATLONG iLawType); \
virtual HRESULT __stdcall RemoveGuide(CATLONG iIndex); \
virtual HRESULT __stdcall GetNbGuides(CATLONG & oNum); \
virtual HRESULT __stdcall RemoveTangency(CATLONG iIndex); \
virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2); \
virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2); \
virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
virtual HRESULT __stdcall SetGuideDeviation(double iLength); \
virtual HRESULT __stdcall RemoveParameter(); \
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


#define ENVTIEdefine_CATIAHybridShapeSweepConic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Spine(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Spine(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstGuideCrv(CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_FirstGuideCrv(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstGuideCrv(CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_FirstGuideCrv(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondGuideCrv(CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_SecondGuideCrv(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondGuideCrv(CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_SecondGuideCrv(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThirdGuideCrv(CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_ThirdGuideCrv(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ThirdGuideCrv(CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_ThirdGuideCrv(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FourthGuideCrv(CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_FourthGuideCrv(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FourthGuideCrv(CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_FourthGuideCrv(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FifthGuideCrv(CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_FifthGuideCrv(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FifthGuideCrv(CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_FifthGuideCrv(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameter(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_Parameter(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Parameter(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_Parameter(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParameterLawInversion(CAT_VARIANT_BOOL & oInversion) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_ParameterLawInversion(oInversion)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParameterLawInversion(CAT_VARIANT_BOOL iInversion) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_ParameterLawInversion(iInversion)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParameterLaw(CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_ParameterLaw(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParameterLaw(CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_ParameterLaw(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParameterLawType(CATLONG & oLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_ParameterLawType(oLawType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParameterLawType(CATLONG iLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_ParameterLawType(iLawType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_SmoothActivity(oSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_SmoothActivity(iSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThreshold(opIAAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviationActivity(oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_GuideDeviationActivity(iActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviation(CATIALength *& opIALength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviation(opIALength)); \
} \
HRESULT __stdcall  ENVTIEName::GetTangency(CATIAReference *& opIAElem, CATIAAngle *& opIAAngleStart, CATIAAngle *& opIAAngleEnd, CATLONG & oLawType, CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetTangency(opIAElem,opIAAngleStart,opIAAngleEnd,oLawType,iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangency(CATIAReference * ipIAElem, double iAngleStart, double iAngleEnd, CATLONG ilawType, CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetTangency(ipIAElem,iAngleStart,iAngleEnd,ilawType,iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetTangencyLaw(CATIAReference *& opIAElem, CATIAReference *& opIALaw, CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetTangencyLaw(opIAElem,opIALaw,iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangencyLaw(CATIAReference * ipIAElem, CATIAReference * ipIALaw, CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetTangencyLaw(ipIAElem,ipIALaw,iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetTangencyAngleLawInversion(CATLONG iIndex, CATLONG & oInversion) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetTangencyAngleLawInversion(iIndex,oInversion)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangencyAngleLawInversion(CATLONG iIndex, CATLONG iInversion) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetTangencyAngleLawInversion(iIndex,iInversion)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterLaw(double & oParamStart, double & oParamEnd, CATLONG & oLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetParameterLaw(oParamStart,oParamEnd,oLawType)); \
} \
HRESULT __stdcall  ENVTIEName::SetParameterLaw(double iParamStart, double iParamEnd, CATLONG iLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetParameterLaw(iParamStart,iParamEnd,iLawType)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuide(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)RemoveGuide(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbGuides(CATLONG & oNum) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetNbGuides(oNum)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveTangency(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)RemoveTangency(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetLongitudinalRelimiters(opIAElem1,opIAElem2)); \
} \
HRESULT __stdcall  ENVTIEName::SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetLongitudinalRelimiters(ipIAElem1,ipIAElem2)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::SetSmoothAngleThreshold(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetSmoothAngleThreshold(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetGuideDeviation(double iLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)SetGuideDeviation(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveParameter() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)RemoveParameter()); \
} \
HRESULT __stdcall  ENVTIEName::get_CanonicalDetection(CATLONG & oDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_CanonicalDetection(oDetection)); \
} \
HRESULT __stdcall  ENVTIEName::put_CanonicalDetection(CATLONG iDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_CanonicalDetection(iDetection)); \
} \
HRESULT __stdcall  ENVTIEName::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetCutPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)AddCutPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllCutPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)RemoveAllCutPoints()); \
} \
HRESULT __stdcall  ENVTIEName::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetFillPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)AddFillPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFillPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)RemoveAllFillPoints()); \
} \
HRESULT __stdcall  ENVTIEName::get_SetbackValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_SetbackValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SetbackValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_SetbackValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_FillTwistedAreas(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_FillTwistedAreas(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FillTwistedAreas(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_FillTwistedAreas(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_C0VerticesMode(obC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_C0VerticesMode(ibC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepConic,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSweepConic(classe)    TIECATIAHybridShapeSweepConic##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSweepConic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSweepConic, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSweepConic, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepConic, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepConic, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSweepConic, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_Spine(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spine(Elem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_Spine(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Spine(Elem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_FirstGuideCrv(CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstGuideCrv(opIAElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_FirstGuideCrv(CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstGuideCrv(ipIAElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_SecondGuideCrv(CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondGuideCrv(opIAElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_SecondGuideCrv(CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondGuideCrv(ipIAElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_ThirdGuideCrv(CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThirdGuideCrv(opIAElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_ThirdGuideCrv(CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ThirdGuideCrv(ipIAElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_FourthGuideCrv(CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FourthGuideCrv(opIAElem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_FourthGuideCrv(CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FourthGuideCrv(ipIAElem); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_FifthGuideCrv(CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FifthGuideCrv(opIAElem); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_FifthGuideCrv(CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FifthGuideCrv(ipIAElem); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_Parameter(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameter(oValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_Parameter(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Parameter(iValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_ParameterLawInversion(CAT_VARIANT_BOOL & oInversion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oInversion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterLawInversion(oInversion); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oInversion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_ParameterLawInversion(CAT_VARIANT_BOOL iInversion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iInversion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParameterLawInversion(iInversion); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iInversion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_ParameterLaw(CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterLaw(opIAElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_ParameterLaw(CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParameterLaw(ipIAElem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_ParameterLawType(CATLONG & oLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterLawType(oLawType); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_ParameterLawType(CATLONG iLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParameterLawType(iLawType); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothActivity(oSmooth); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothActivity(iSmooth); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&opIAAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThreshold(opIAAngle); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&opIAAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviationActivity(oActivity); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GuideDeviationActivity(iActivity); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_GuideDeviation(CATIALength *& opIALength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&opIALength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviation(opIALength); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&opIALength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetTangency(CATIAReference *& opIAElem, CATIAAngle *& opIAAngleStart, CATIAAngle *& opIAAngleEnd, CATLONG & oLawType, CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&opIAElem,&opIAAngleStart,&opIAAngleEnd,&oLawType,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangency(opIAElem,opIAAngleStart,opIAAngleEnd,oLawType,iIndex); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&opIAElem,&opIAAngleStart,&opIAAngleEnd,&oLawType,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetTangency(CATIAReference * ipIAElem, double iAngleStart, double iAngleEnd, CATLONG ilawType, CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&ipIAElem,&iAngleStart,&iAngleEnd,&ilawType,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangency(ipIAElem,iAngleStart,iAngleEnd,ilawType,iIndex); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&ipIAElem,&iAngleStart,&iAngleEnd,&ilawType,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetTangencyLaw(CATIAReference *& opIAElem, CATIAReference *& opIALaw, CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&opIAElem,&opIALaw,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangencyLaw(opIAElem,opIALaw,iIndex); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&opIAElem,&opIALaw,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetTangencyLaw(CATIAReference * ipIAElem, CATIAReference * ipIALaw, CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&ipIAElem,&ipIALaw,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangencyLaw(ipIAElem,ipIALaw,iIndex); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&ipIAElem,&ipIALaw,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetTangencyAngleLawInversion(CATLONG iIndex, CATLONG & oInversion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iIndex,&oInversion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangencyAngleLawInversion(iIndex,oInversion); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iIndex,&oInversion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetTangencyAngleLawInversion(CATLONG iIndex, CATLONG iInversion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iIndex,&iInversion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangencyAngleLawInversion(iIndex,iInversion); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iIndex,&iInversion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetParameterLaw(double & oParamStart, double & oParamEnd, CATLONG & oLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oParamStart,&oParamEnd,&oLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterLaw(oParamStart,oParamEnd,oLawType); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oParamStart,&oParamEnd,&oLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetParameterLaw(double iParamStart, double iParamEnd, CATLONG iLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iParamStart,&iParamEnd,&iLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterLaw(iParamStart,iParamEnd,iLawType); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iParamStart,&iParamEnd,&iLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::RemoveGuide(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuide(iIndex); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetNbGuides(CATLONG & oNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbGuides(oNum); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::RemoveTangency(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveTangency(iIndex); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&opIAElem1,&opIAElem2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLongitudinalRelimiters(opIAElem1,opIAElem2); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&opIAElem1,&opIAElem2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ipIAElem1,&ipIAElem2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLongitudinalRelimiters(ipIAElem1,ipIAElem2); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ipIAElem1,&ipIAElem2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetSmoothAngleThreshold(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSmoothAngleThreshold(iAngle); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::SetGuideDeviation(double iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGuideDeviation(iLength); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::RemoveParameter() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveParameter(); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_CanonicalDetection(CATLONG & oDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CanonicalDetection(oDetection); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_CanonicalDetection(CATLONG iDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CanonicalDetection(iDetection); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCutPoint(iRank,oElement); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCutPoints(iElement1,iElement2); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::RemoveAllCutPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllCutPoints(); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFillPoint(iRank,oElement); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFillPoints(iElement1,iElement2); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::RemoveAllFillPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFillPoints(); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_SetbackValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SetbackValue(oValue); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_SetbackValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SetbackValue(iValue); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_FillTwistedAreas(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FillTwistedAreas(oMode); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_FillTwistedAreas(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FillTwistedAreas(iMode); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&obC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_C0VerticesMode(obC0VerticesMode); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&obC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&ibC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_C0VerticesMode(ibC0VerticesMode); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&ibC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepConic##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepConic##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepConic##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepConic##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepConic##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepConic##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSweepConic(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepConic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepConic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepConic,"CATIAHybridShapeSweepConic",CATIAHybridShapeSweepConic::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepConic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSweepConic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepConic##classe(classe::MetaObject(),CATIAHybridShapeSweepConic::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepConic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSweepConic(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepConic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepConic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepConic,"CATIAHybridShapeSweepConic",CATIAHybridShapeSweepConic::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepConic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSweepConic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepConic##classe(classe::MetaObject(),CATIAHybridShapeSweepConic::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepConic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSweepConic(classe) TIE_CATIAHybridShapeSweepConic(classe)
#else
#define BOA_CATIAHybridShapeSweepConic(classe) CATImplementBOA(CATIAHybridShapeSweepConic, classe)
#endif

#endif
