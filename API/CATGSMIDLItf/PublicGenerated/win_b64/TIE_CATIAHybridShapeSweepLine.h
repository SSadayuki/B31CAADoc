#ifndef __TIE_CATIAHybridShapeSweepLine
#define __TIE_CATIAHybridShapeSweepLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSweepLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSweepLine */
#define declare_TIE_CATIAHybridShapeSweepLine(classe) \
 \
 \
class TIECATIAHybridShapeSweepLine##classe : public CATIAHybridShapeSweepLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSweepLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_FirstGuideSurf(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_FirstGuideSurf(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_SecondGuideSurf(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_SecondGuideSurf(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
      virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
      virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
      virtual HRESULT __stdcall GetAngle(CATLONG iI, CATIAAngle *& Elem); \
      virtual HRESULT __stdcall SetAngle(CATLONG iI, double iElem); \
      virtual HRESULT __stdcall get_AngleLawType(CATLONG & oElem); \
      virtual HRESULT __stdcall put_AngleLawType(CATLONG iElem); \
      virtual HRESULT __stdcall get_AngleLawInversion(CATLONG & oElem); \
      virtual HRESULT __stdcall put_AngleLawInversion(CATLONG iElem); \
      virtual HRESULT __stdcall get_AngleLaw(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_AngleLaw(CATIAReference * iElem); \
      virtual HRESULT __stdcall GetLength(CATLONG iI, CATIALength *& Elem); \
      virtual HRESULT __stdcall SetLength(CATLONG iI, double iElem); \
      virtual HRESULT __stdcall get_FirstLengthLaw(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_FirstLengthLaw(CATIAReference * iElem); \
      virtual HRESULT __stdcall GetFirstLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType); \
      virtual HRESULT __stdcall SetFirstLengthLaw(double iLength1, double iLength2, CATLONG iLawType); \
      virtual HRESULT __stdcall get_FirstLengthLawInversion(CATLONG & oElem); \
      virtual HRESULT __stdcall put_FirstLengthLawInversion(CATLONG iElem); \
      virtual HRESULT __stdcall get_SecondLengthLaw(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SecondLengthLaw(CATIAReference * iElem); \
      virtual HRESULT __stdcall GetSecondLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType); \
      virtual HRESULT __stdcall SetSecondLengthLaw(double iLength1, double iLength2, CATLONG iLawType); \
      virtual HRESULT __stdcall get_SecondLengthLawInversion(CATLONG & oElem); \
      virtual HRESULT __stdcall put_SecondLengthLawInversion(CATLONG iElem); \
      virtual HRESULT __stdcall GetChoiceNo(CATLONG & oVal1, CATLONG & oVal2, CATLONG & oVal3); \
      virtual HRESULT __stdcall SetChoiceNo(CATLONG iVal1, CATLONG iVal2, CATLONG iVal3); \
      virtual HRESULT __stdcall get_TrimOption(CATLONG & Elem); \
      virtual HRESULT __stdcall put_TrimOption(CATLONG Elem); \
      virtual HRESULT __stdcall get_SecondTrimOption(CATLONG & Elem); \
      virtual HRESULT __stdcall put_SecondTrimOption(CATLONG Elem); \
      virtual HRESULT __stdcall get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth); \
      virtual HRESULT __stdcall put_SmoothActivity(CAT_VARIANT_BOOL iSmooth); \
      virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
      virtual HRESULT __stdcall get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
      virtual HRESULT __stdcall put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity); \
      virtual HRESULT __stdcall get_GuideDeviation(CATIALength *& opIALength); \
      virtual HRESULT __stdcall get_DraftComputationMode(CATLONG & oDraftCompType); \
      virtual HRESULT __stdcall put_DraftComputationMode(CATLONG iDraftCompType); \
      virtual HRESULT __stdcall get_DraftDirection(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_DraftDirection(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall GetNbGuideCrv(CATLONG & oNum); \
      virtual HRESULT __stdcall RemoveGuideCrv(); \
      virtual HRESULT __stdcall GetNbGuideSur(CATLONG & oNum); \
      virtual HRESULT __stdcall RemoveGuideSur(); \
      virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2); \
      virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2); \
      virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
      virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
      virtual HRESULT __stdcall GetNbAngle(CATLONG & oAng); \
      virtual HRESULT __stdcall RemoveAngle(); \
      virtual HRESULT __stdcall GetAngularLaw(CATIAAngle *& opStartAng, CATIAAngle *& opEndAng, CATLONG & oLawType); \
      virtual HRESULT __stdcall SetAngularLaw(double iStartAng, double iEndAng, CATLONG iLawType); \
      virtual HRESULT __stdcall GetNbLength(CATLONG & oLen); \
      virtual HRESULT __stdcall RemoveLength(); \
      virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
      virtual HRESULT __stdcall SetGuideDeviation(double iLength); \
      virtual HRESULT __stdcall GetDraftAngleDefinitionLocation(CATLONG iLoc, CATIAReference *& opIAElement, CATIAAngle *& oAngle); \
      virtual HRESULT __stdcall GetDraftAngleDefinitionLocationsNb(CATLONG & oCount); \
      virtual HRESULT __stdcall AddDraftAngleDefinitionLocation(CATIAReference * ipIALocElem, double iAng); \
      virtual HRESULT __stdcall RemoveDraftAngleDefinitionLocationPosition(CATLONG iPos); \
      virtual HRESULT __stdcall GetFirstLengthDefinitionType(CATLONG & oFirstType, CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall SetFirstLengthDefinitionType(CATLONG iFirstType, CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall GetSecondLengthDefinitionType(CATLONG & oSecondType, CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall SetSecondLengthDefinitionType(CATLONG iSecondType, CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall InsertDraftAngleDefinitionLocation(CATIAReference * iElem, CATIAAngle * iAngle, CATLONG iPos); \
      virtual HRESULT __stdcall RemoveAllDraftAngleDefinitionLocations(); \
      virtual HRESULT __stdcall GetChoiceNbSurfaces(CATLONG & oSurfOri1, CATLONG & oSurfOri2, CATLONG & oSurfCouplOri1, CATLONG & oSurfCouplOri2, CATLONG & oNo); \
      virtual HRESULT __stdcall SetChoiceNbSurfaces(CATLONG iSurfOri1, CATLONG iSurfOri2, CATLONG iSurfCouplOri1, CATLONG iSurfCouplOri2, CATLONG iNo); \
      virtual HRESULT __stdcall GetLengthLawTypes(CATLONG & oFirstType, CATLONG & oSecondType); \
      virtual HRESULT __stdcall SetLengthLawTypes(CATLONG iFirstType, CATLONG iSecondType); \
      virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
      virtual HRESULT __stdcall put_Context(CATLONG iContext); \
      virtual HRESULT __stdcall get_SolutionNo(CATLONG & Elem); \
      virtual HRESULT __stdcall put_SolutionNo(CATLONG Elem); \
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



#define ENVTIEdeclare_CATIAHybridShapeSweepLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstGuideCrv(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_FirstGuideCrv(CATIAReference * Elem); \
virtual HRESULT __stdcall get_SecondGuideCrv(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_SecondGuideCrv(CATIAReference * Elem); \
virtual HRESULT __stdcall get_FirstGuideSurf(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_FirstGuideSurf(CATIAReference * Elem); \
virtual HRESULT __stdcall get_SecondGuideSurf(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_SecondGuideSurf(CATIAReference * Elem); \
virtual HRESULT __stdcall get_Spine(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Spine(CATIAReference * Elem); \
virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
virtual HRESULT __stdcall GetAngle(CATLONG iI, CATIAAngle *& Elem); \
virtual HRESULT __stdcall SetAngle(CATLONG iI, double iElem); \
virtual HRESULT __stdcall get_AngleLawType(CATLONG & oElem); \
virtual HRESULT __stdcall put_AngleLawType(CATLONG iElem); \
virtual HRESULT __stdcall get_AngleLawInversion(CATLONG & oElem); \
virtual HRESULT __stdcall put_AngleLawInversion(CATLONG iElem); \
virtual HRESULT __stdcall get_AngleLaw(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_AngleLaw(CATIAReference * iElem); \
virtual HRESULT __stdcall GetLength(CATLONG iI, CATIALength *& Elem); \
virtual HRESULT __stdcall SetLength(CATLONG iI, double iElem); \
virtual HRESULT __stdcall get_FirstLengthLaw(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_FirstLengthLaw(CATIAReference * iElem); \
virtual HRESULT __stdcall GetFirstLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType); \
virtual HRESULT __stdcall SetFirstLengthLaw(double iLength1, double iLength2, CATLONG iLawType); \
virtual HRESULT __stdcall get_FirstLengthLawInversion(CATLONG & oElem); \
virtual HRESULT __stdcall put_FirstLengthLawInversion(CATLONG iElem); \
virtual HRESULT __stdcall get_SecondLengthLaw(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SecondLengthLaw(CATIAReference * iElem); \
virtual HRESULT __stdcall GetSecondLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType); \
virtual HRESULT __stdcall SetSecondLengthLaw(double iLength1, double iLength2, CATLONG iLawType); \
virtual HRESULT __stdcall get_SecondLengthLawInversion(CATLONG & oElem); \
virtual HRESULT __stdcall put_SecondLengthLawInversion(CATLONG iElem); \
virtual HRESULT __stdcall GetChoiceNo(CATLONG & oVal1, CATLONG & oVal2, CATLONG & oVal3); \
virtual HRESULT __stdcall SetChoiceNo(CATLONG iVal1, CATLONG iVal2, CATLONG iVal3); \
virtual HRESULT __stdcall get_TrimOption(CATLONG & Elem); \
virtual HRESULT __stdcall put_TrimOption(CATLONG Elem); \
virtual HRESULT __stdcall get_SecondTrimOption(CATLONG & Elem); \
virtual HRESULT __stdcall put_SecondTrimOption(CATLONG Elem); \
virtual HRESULT __stdcall get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth); \
virtual HRESULT __stdcall put_SmoothActivity(CAT_VARIANT_BOOL iSmooth); \
virtual HRESULT __stdcall get_SmoothAngleThreshold(CATIAAngle *& opIAAngle); \
virtual HRESULT __stdcall get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity); \
virtual HRESULT __stdcall put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity); \
virtual HRESULT __stdcall get_GuideDeviation(CATIALength *& opIALength); \
virtual HRESULT __stdcall get_DraftComputationMode(CATLONG & oDraftCompType); \
virtual HRESULT __stdcall put_DraftComputationMode(CATLONG iDraftCompType); \
virtual HRESULT __stdcall get_DraftDirection(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_DraftDirection(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall GetNbGuideCrv(CATLONG & oNum); \
virtual HRESULT __stdcall RemoveGuideCrv(); \
virtual HRESULT __stdcall GetNbGuideSur(CATLONG & oNum); \
virtual HRESULT __stdcall RemoveGuideSur(); \
virtual HRESULT __stdcall GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2); \
virtual HRESULT __stdcall SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2); \
virtual HRESULT __stdcall GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2); \
virtual HRESULT __stdcall SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2); \
virtual HRESULT __stdcall GetNbAngle(CATLONG & oAng); \
virtual HRESULT __stdcall RemoveAngle(); \
virtual HRESULT __stdcall GetAngularLaw(CATIAAngle *& opStartAng, CATIAAngle *& opEndAng, CATLONG & oLawType); \
virtual HRESULT __stdcall SetAngularLaw(double iStartAng, double iEndAng, CATLONG iLawType); \
virtual HRESULT __stdcall GetNbLength(CATLONG & oLen); \
virtual HRESULT __stdcall RemoveLength(); \
virtual HRESULT __stdcall SetSmoothAngleThreshold(double iAngle); \
virtual HRESULT __stdcall SetGuideDeviation(double iLength); \
virtual HRESULT __stdcall GetDraftAngleDefinitionLocation(CATLONG iLoc, CATIAReference *& opIAElement, CATIAAngle *& oAngle); \
virtual HRESULT __stdcall GetDraftAngleDefinitionLocationsNb(CATLONG & oCount); \
virtual HRESULT __stdcall AddDraftAngleDefinitionLocation(CATIAReference * ipIALocElem, double iAng); \
virtual HRESULT __stdcall RemoveDraftAngleDefinitionLocationPosition(CATLONG iPos); \
virtual HRESULT __stdcall GetFirstLengthDefinitionType(CATLONG & oFirstType, CATIAReference *& opIAElem); \
virtual HRESULT __stdcall SetFirstLengthDefinitionType(CATLONG iFirstType, CATIAReference * ipIAElem); \
virtual HRESULT __stdcall GetSecondLengthDefinitionType(CATLONG & oSecondType, CATIAReference *& opIAElem); \
virtual HRESULT __stdcall SetSecondLengthDefinitionType(CATLONG iSecondType, CATIAReference * ipIAElem); \
virtual HRESULT __stdcall InsertDraftAngleDefinitionLocation(CATIAReference * iElem, CATIAAngle * iAngle, CATLONG iPos); \
virtual HRESULT __stdcall RemoveAllDraftAngleDefinitionLocations(); \
virtual HRESULT __stdcall GetChoiceNbSurfaces(CATLONG & oSurfOri1, CATLONG & oSurfOri2, CATLONG & oSurfCouplOri1, CATLONG & oSurfCouplOri2, CATLONG & oNo); \
virtual HRESULT __stdcall SetChoiceNbSurfaces(CATLONG iSurfOri1, CATLONG iSurfOri2, CATLONG iSurfCouplOri1, CATLONG iSurfCouplOri2, CATLONG iNo); \
virtual HRESULT __stdcall GetLengthLawTypes(CATLONG & oFirstType, CATLONG & oSecondType); \
virtual HRESULT __stdcall SetLengthLawTypes(CATLONG iFirstType, CATLONG iSecondType); \
virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
virtual HRESULT __stdcall put_Context(CATLONG iContext); \
virtual HRESULT __stdcall get_SolutionNo(CATLONG & Elem); \
virtual HRESULT __stdcall put_SolutionNo(CATLONG Elem); \
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


#define ENVTIEdefine_CATIAHybridShapeSweepLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstGuideCrv(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_FirstGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstGuideCrv(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_FirstGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondGuideCrv(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SecondGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondGuideCrv(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SecondGuideCrv(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstGuideSurf(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_FirstGuideSurf(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstGuideSurf(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_FirstGuideSurf(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondGuideSurf(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SecondGuideSurf(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondGuideSurf(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SecondGuideSurf(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Spine(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Spine(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_Spine(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mode(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngle(CATLONG iI, CATIAAngle *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetAngle(iI,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngle(CATLONG iI, double iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetAngle(iI,iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleLawType(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_AngleLawType(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLawType(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_AngleLawType(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleLawInversion(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_AngleLawInversion(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLawInversion(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_AngleLawInversion(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleLaw(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_AngleLaw(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLaw(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_AngleLaw(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetLength(CATLONG iI, CATIALength *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetLength(iI,Elem)); \
} \
HRESULT __stdcall  ENVTIEName::SetLength(CATLONG iI, double iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetLength(iI,iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstLengthLaw(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_FirstLengthLaw(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstLengthLaw(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_FirstLengthLaw(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetFirstLengthLaw(oLength1,oLength2,oLawType)); \
} \
HRESULT __stdcall  ENVTIEName::SetFirstLengthLaw(double iLength1, double iLength2, CATLONG iLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetFirstLengthLaw(iLength1,iLength2,iLawType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstLengthLawInversion(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_FirstLengthLawInversion(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstLengthLawInversion(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_FirstLengthLawInversion(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondLengthLaw(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SecondLengthLaw(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondLengthLaw(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SecondLengthLaw(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetSecondLengthLaw(oLength1,oLength2,oLawType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSecondLengthLaw(double iLength1, double iLength2, CATLONG iLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetSecondLengthLaw(iLength1,iLength2,iLawType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondLengthLawInversion(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SecondLengthLawInversion(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondLengthLawInversion(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SecondLengthLawInversion(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetChoiceNo(CATLONG & oVal1, CATLONG & oVal2, CATLONG & oVal3) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetChoiceNo(oVal1,oVal2,oVal3)); \
} \
HRESULT __stdcall  ENVTIEName::SetChoiceNo(CATLONG iVal1, CATLONG iVal2, CATLONG iVal3) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetChoiceNo(iVal1,iVal2,iVal3)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrimOption(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_TrimOption(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrimOption(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_TrimOption(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondTrimOption(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SecondTrimOption(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondTrimOption(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SecondTrimOption(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SmoothActivity(oSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SmoothActivity(iSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThreshold(opIAAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviationActivity(oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_GuideDeviationActivity(iActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideDeviation(CATIALength *& opIALength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_GuideDeviation(opIALength)); \
} \
HRESULT __stdcall  ENVTIEName::get_DraftComputationMode(CATLONG & oDraftCompType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_DraftComputationMode(oDraftCompType)); \
} \
HRESULT __stdcall  ENVTIEName::put_DraftComputationMode(CATLONG iDraftCompType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_DraftComputationMode(iDraftCompType)); \
} \
HRESULT __stdcall  ENVTIEName::get_DraftDirection(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_DraftDirection(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_DraftDirection(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_DraftDirection(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbGuideCrv(CATLONG & oNum) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetNbGuideCrv(oNum)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuideCrv() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveGuideCrv()); \
} \
HRESULT __stdcall  ENVTIEName::GetNbGuideSur(CATLONG & oNum) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetNbGuideSur(oNum)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuideSur() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveGuideSur()); \
} \
HRESULT __stdcall  ENVTIEName::GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetLongitudinalRelimiters(opIAElem1,opIAElem2)); \
} \
HRESULT __stdcall  ENVTIEName::SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetLongitudinalRelimiters(ipIAElem1,ipIAElem2)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbAngle(CATLONG & oAng) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetNbAngle(oAng)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAngle() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveAngle()); \
} \
HRESULT __stdcall  ENVTIEName::GetAngularLaw(CATIAAngle *& opStartAng, CATIAAngle *& opEndAng, CATLONG & oLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetAngularLaw(opStartAng,opEndAng,oLawType)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngularLaw(double iStartAng, double iEndAng, CATLONG iLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetAngularLaw(iStartAng,iEndAng,iLawType)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbLength(CATLONG & oLen) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetNbLength(oLen)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveLength() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveLength()); \
} \
HRESULT __stdcall  ENVTIEName::SetSmoothAngleThreshold(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetSmoothAngleThreshold(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetGuideDeviation(double iLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetGuideDeviation(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetDraftAngleDefinitionLocation(CATLONG iLoc, CATIAReference *& opIAElement, CATIAAngle *& oAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetDraftAngleDefinitionLocation(iLoc,opIAElement,oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetDraftAngleDefinitionLocationsNb(CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetDraftAngleDefinitionLocationsNb(oCount)); \
} \
HRESULT __stdcall  ENVTIEName::AddDraftAngleDefinitionLocation(CATIAReference * ipIALocElem, double iAng) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)AddDraftAngleDefinitionLocation(ipIALocElem,iAng)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveDraftAngleDefinitionLocationPosition(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveDraftAngleDefinitionLocationPosition(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstLengthDefinitionType(CATLONG & oFirstType, CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetFirstLengthDefinitionType(oFirstType,opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::SetFirstLengthDefinitionType(CATLONG iFirstType, CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetFirstLengthDefinitionType(iFirstType,ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondLengthDefinitionType(CATLONG & oSecondType, CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetSecondLengthDefinitionType(oSecondType,opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::SetSecondLengthDefinitionType(CATLONG iSecondType, CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetSecondLengthDefinitionType(iSecondType,ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::InsertDraftAngleDefinitionLocation(CATIAReference * iElem, CATIAAngle * iAngle, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)InsertDraftAngleDefinitionLocation(iElem,iAngle,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllDraftAngleDefinitionLocations() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveAllDraftAngleDefinitionLocations()); \
} \
HRESULT __stdcall  ENVTIEName::GetChoiceNbSurfaces(CATLONG & oSurfOri1, CATLONG & oSurfOri2, CATLONG & oSurfCouplOri1, CATLONG & oSurfCouplOri2, CATLONG & oNo) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetChoiceNbSurfaces(oSurfOri1,oSurfOri2,oSurfCouplOri1,oSurfCouplOri2,oNo)); \
} \
HRESULT __stdcall  ENVTIEName::SetChoiceNbSurfaces(CATLONG iSurfOri1, CATLONG iSurfOri2, CATLONG iSurfCouplOri1, CATLONG iSurfCouplOri2, CATLONG iNo) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetChoiceNbSurfaces(iSurfOri1,iSurfOri2,iSurfCouplOri1,iSurfCouplOri2,iNo)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthLawTypes(CATLONG & oFirstType, CATLONG & oSecondType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetLengthLawTypes(oFirstType,oSecondType)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthLawTypes(CATLONG iFirstType, CATLONG iSecondType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)SetLengthLawTypes(iFirstType,iSecondType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATLONG & oContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::put_Context(CATLONG iContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_Context(iContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolutionNo(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SolutionNo(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolutionNo(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SolutionNo(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_CanonicalDetection(CATLONG & oDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_CanonicalDetection(oDetection)); \
} \
HRESULT __stdcall  ENVTIEName::put_CanonicalDetection(CATLONG iDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_CanonicalDetection(iDetection)); \
} \
HRESULT __stdcall  ENVTIEName::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetCutPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)AddCutPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllCutPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveAllCutPoints()); \
} \
HRESULT __stdcall  ENVTIEName::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetFillPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)AddFillPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFillPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)RemoveAllFillPoints()); \
} \
HRESULT __stdcall  ENVTIEName::get_SetbackValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_SetbackValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SetbackValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_SetbackValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_FillTwistedAreas(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_FillTwistedAreas(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FillTwistedAreas(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_FillTwistedAreas(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_C0VerticesMode(obC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_C0VerticesMode(ibC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweepLine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSweepLine(classe)    TIECATIAHybridShapeSweepLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSweepLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSweepLine, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSweepLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepLine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweepLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSweepLine, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_FirstGuideCrv(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstGuideCrv(Elem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_FirstGuideCrv(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstGuideCrv(Elem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SecondGuideCrv(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondGuideCrv(Elem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SecondGuideCrv(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondGuideCrv(Elem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_FirstGuideSurf(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstGuideSurf(Elem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_FirstGuideSurf(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstGuideSurf(Elem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SecondGuideSurf(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondGuideSurf(Elem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SecondGuideSurf(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondGuideSurf(Elem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_Spine(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spine(Elem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_Spine(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Spine(Elem); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_Mode(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(Elem); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_Mode(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(Elem); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetAngle(CATLONG iI, CATIAAngle *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iI,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngle(iI,Elem); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iI,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetAngle(CATLONG iI, double iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iI,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngle(iI,iElem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iI,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_AngleLawType(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLawType(oElem); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_AngleLawType(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLawType(iElem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_AngleLawInversion(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLawInversion(oElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_AngleLawInversion(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLawInversion(iElem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_AngleLaw(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLaw(oElem); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_AngleLaw(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLaw(iElem); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetLength(CATLONG iI, CATIALength *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iI,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLength(iI,Elem); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iI,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetLength(CATLONG iI, double iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iI,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLength(iI,iElem); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iI,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_FirstLengthLaw(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstLengthLaw(oElem); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_FirstLengthLaw(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstLengthLaw(iElem); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetFirstLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oLength1,&oLength2,&oLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstLengthLaw(oLength1,oLength2,oLawType); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oLength1,&oLength2,&oLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetFirstLengthLaw(double iLength1, double iLength2, CATLONG iLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iLength1,&iLength2,&iLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFirstLengthLaw(iLength1,iLength2,iLawType); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iLength1,&iLength2,&iLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_FirstLengthLawInversion(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstLengthLawInversion(oElem); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_FirstLengthLawInversion(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstLengthLawInversion(iElem); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SecondLengthLaw(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondLengthLaw(oElem); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SecondLengthLaw(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondLengthLaw(iElem); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetSecondLengthLaw(CATIALength *& oLength1, CATIALength *& oLength2, CATLONG & oLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oLength1,&oLength2,&oLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondLengthLaw(oLength1,oLength2,oLawType); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oLength1,&oLength2,&oLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetSecondLengthLaw(double iLength1, double iLength2, CATLONG iLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLength1,&iLength2,&iLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondLengthLaw(iLength1,iLength2,iLawType); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLength1,&iLength2,&iLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SecondLengthLawInversion(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondLengthLawInversion(oElem); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SecondLengthLawInversion(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondLengthLawInversion(iElem); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetChoiceNo(CATLONG & oVal1, CATLONG & oVal2, CATLONG & oVal3) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oVal1,&oVal2,&oVal3); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChoiceNo(oVal1,oVal2,oVal3); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oVal1,&oVal2,&oVal3); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetChoiceNo(CATLONG iVal1, CATLONG iVal2, CATLONG iVal3) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iVal1,&iVal2,&iVal3); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetChoiceNo(iVal1,iVal2,iVal3); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iVal1,&iVal2,&iVal3); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_TrimOption(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrimOption(Elem); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_TrimOption(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrimOption(Elem); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SecondTrimOption(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondTrimOption(Elem); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SecondTrimOption(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondTrimOption(Elem); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SmoothActivity(CAT_VARIANT_BOOL & oSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothActivity(oSmooth); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SmoothActivity(CAT_VARIANT_BOOL iSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothActivity(iSmooth); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SmoothAngleThreshold(CATIAAngle *& opIAAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&opIAAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThreshold(opIAAngle); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&opIAAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_GuideDeviationActivity(CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviationActivity(oActivity); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_GuideDeviationActivity(CAT_VARIANT_BOOL iActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GuideDeviationActivity(iActivity); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_GuideDeviation(CATIALength *& opIALength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&opIALength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideDeviation(opIALength); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&opIALength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_DraftComputationMode(CATLONG & oDraftCompType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oDraftCompType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DraftComputationMode(oDraftCompType); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oDraftCompType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_DraftComputationMode(CATLONG iDraftCompType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iDraftCompType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DraftComputationMode(iDraftCompType); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iDraftCompType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_DraftDirection(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DraftDirection(oDir); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_DraftDirection(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DraftDirection(iDir); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetNbGuideCrv(CATLONG & oNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbGuideCrv(oNum); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveGuideCrv() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuideCrv(); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetNbGuideSur(CATLONG & oNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbGuideSur(oNum); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveGuideSur() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuideSur(); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetLongitudinalRelimiters(CATIAReference *& opIAElem1, CATIAReference *& opIAElem2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&opIAElem1,&opIAElem2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLongitudinalRelimiters(opIAElem1,opIAElem2); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&opIAElem1,&opIAElem2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetLongitudinalRelimiters(CATIAReference * ipIAElem1, CATIAReference * ipIAElem2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&ipIAElem1,&ipIAElem2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLongitudinalRelimiters(ipIAElem1,ipIAElem2); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&ipIAElem1,&ipIAElem2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetRelimiters(CATIAReference *& opIAElem1, CATLONG & opOrient1, CATIAReference *& opIAElem2, CATLONG & opOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimiters(opIAElem1,opOrient1,opIAElem2,opOrient2); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&opIAElem1,&opOrient1,&opIAElem2,&opOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetRelimiters(CATIAReference * ipIAElem1, CATLONG ipOrient1, CATIAReference * ipIAElem2, CATLONG ipOrient2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelimiters(ipIAElem1,ipOrient1,ipIAElem2,ipOrient2); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&ipIAElem1,&ipOrient1,&ipIAElem2,&ipOrient2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetNbAngle(CATLONG & oAng) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oAng); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbAngle(oAng); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oAng); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveAngle() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAngle(); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetAngularLaw(CATIAAngle *& opStartAng, CATIAAngle *& opEndAng, CATLONG & oLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&opStartAng,&opEndAng,&oLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngularLaw(opStartAng,opEndAng,oLawType); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&opStartAng,&opEndAng,&oLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetAngularLaw(double iStartAng, double iEndAng, CATLONG iLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iStartAng,&iEndAng,&iLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngularLaw(iStartAng,iEndAng,iLawType); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iStartAng,&iEndAng,&iLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetNbLength(CATLONG & oLen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oLen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbLength(oLen); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oLen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveLength() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLength(); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetSmoothAngleThreshold(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSmoothAngleThreshold(iAngle); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetGuideDeviation(double iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGuideDeviation(iLength); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetDraftAngleDefinitionLocation(CATLONG iLoc, CATIAReference *& opIAElement, CATIAAngle *& oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&iLoc,&opIAElement,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDraftAngleDefinitionLocation(iLoc,opIAElement,oAngle); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&iLoc,&opIAElement,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetDraftAngleDefinitionLocationsNb(CATLONG & oCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&oCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDraftAngleDefinitionLocationsNb(oCount); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&oCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::AddDraftAngleDefinitionLocation(CATIAReference * ipIALocElem, double iAng) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&ipIALocElem,&iAng); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDraftAngleDefinitionLocation(ipIALocElem,iAng); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&ipIALocElem,&iAng); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveDraftAngleDefinitionLocationPosition(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveDraftAngleDefinitionLocationPosition(iPos); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetFirstLengthDefinitionType(CATLONG & oFirstType, CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&oFirstType,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstLengthDefinitionType(oFirstType,opIAElem); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&oFirstType,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetFirstLengthDefinitionType(CATLONG iFirstType, CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iFirstType,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFirstLengthDefinitionType(iFirstType,ipIAElem); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iFirstType,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetSecondLengthDefinitionType(CATLONG & oSecondType, CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oSecondType,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondLengthDefinitionType(oSecondType,opIAElem); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oSecondType,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetSecondLengthDefinitionType(CATLONG iSecondType, CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iSecondType,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondLengthDefinitionType(iSecondType,ipIAElem); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iSecondType,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::InsertDraftAngleDefinitionLocation(CATIAReference * iElem, CATIAAngle * iAngle, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iElem,&iAngle,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertDraftAngleDefinitionLocation(iElem,iAngle,iPos); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iElem,&iAngle,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveAllDraftAngleDefinitionLocations() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllDraftAngleDefinitionLocations(); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetChoiceNbSurfaces(CATLONG & oSurfOri1, CATLONG & oSurfOri2, CATLONG & oSurfCouplOri1, CATLONG & oSurfCouplOri2, CATLONG & oNo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oSurfOri1,&oSurfOri2,&oSurfCouplOri1,&oSurfCouplOri2,&oNo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChoiceNbSurfaces(oSurfOri1,oSurfOri2,oSurfCouplOri1,oSurfCouplOri2,oNo); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oSurfOri1,&oSurfOri2,&oSurfCouplOri1,&oSurfCouplOri2,&oNo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetChoiceNbSurfaces(CATLONG iSurfOri1, CATLONG iSurfOri2, CATLONG iSurfCouplOri1, CATLONG iSurfCouplOri2, CATLONG iNo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iSurfOri1,&iSurfOri2,&iSurfCouplOri1,&iSurfCouplOri2,&iNo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetChoiceNbSurfaces(iSurfOri1,iSurfOri2,iSurfCouplOri1,iSurfCouplOri2,iNo); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iSurfOri1,&iSurfOri2,&iSurfCouplOri1,&iSurfCouplOri2,&iNo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetLengthLawTypes(CATLONG & oFirstType, CATLONG & oSecondType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&oFirstType,&oSecondType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthLawTypes(oFirstType,oSecondType); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&oFirstType,&oSecondType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::SetLengthLawTypes(CATLONG iFirstType, CATLONG iSecondType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iFirstType,&iSecondType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthLawTypes(iFirstType,iSecondType); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iFirstType,&iSecondType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_Context(CATLONG & oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_Context(CATLONG iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Context(iContext); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SolutionNo(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolutionNo(Elem); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SolutionNo(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolutionNo(Elem); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_CanonicalDetection(CATLONG & oDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CanonicalDetection(oDetection); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_CanonicalDetection(CATLONG iDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CanonicalDetection(iDetection); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCutPoint(iRank,oElement); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCutPoints(iElement1,iElement2); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveAllCutPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllCutPoints(); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFillPoint(iRank,oElement); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFillPoints(iElement1,iElement2); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::RemoveAllFillPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFillPoints(); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_SetbackValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SetbackValue(oValue); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_SetbackValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SetbackValue(iValue); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_FillTwistedAreas(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FillTwistedAreas(oMode); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_FillTwistedAreas(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FillTwistedAreas(iMode); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&obC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_C0VerticesMode(obC0VerticesMode); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&obC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&ibC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_C0VerticesMode(ibC0VerticesMode); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&ibC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweepLine##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepLine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepLine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepLine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepLine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweepLine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSweepLine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepLine,"CATIAHybridShapeSweepLine",CATIAHybridShapeSweepLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSweepLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepLine##classe(classe::MetaObject(),CATIAHybridShapeSweepLine::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSweepLine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweepLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweepLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweepLine,"CATIAHybridShapeSweepLine",CATIAHybridShapeSweepLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweepLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSweepLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweepLine##classe(classe::MetaObject(),CATIAHybridShapeSweepLine::MetaObject(),(void *)CreateTIECATIAHybridShapeSweepLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSweepLine(classe) TIE_CATIAHybridShapeSweepLine(classe)
#else
#define BOA_CATIAHybridShapeSweepLine(classe) CATImplementBOA(CATIAHybridShapeSweepLine, classe)
#endif

#endif
