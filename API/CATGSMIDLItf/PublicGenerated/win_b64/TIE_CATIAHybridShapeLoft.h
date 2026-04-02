#ifndef __TIE_CATIAHybridShapeLoft
#define __TIE_CATIAHybridShapeLoft

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeLoft.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeLoft */
#define declare_TIE_CATIAHybridShapeLoft(classe) \
 \
 \
class TIECATIAHybridShapeLoft##classe : public CATIAHybridShapeLoft \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeLoft, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetSpine(CATIAReference * iSpine); \
      virtual HRESULT __stdcall SetStartSectionTangent(CATIAReference * iTangentSection); \
      virtual HRESULT __stdcall SetEndSectionTangent(CATIAReference * iTangentSection); \
      virtual HRESULT __stdcall SetStartFaceForClosing(CATIAReference * iFace); \
      virtual HRESULT __stdcall SetEndFaceForClosing(CATIAReference * iFace); \
      virtual HRESULT __stdcall AddGuide(CATIAReference * iGuide); \
      virtual HRESULT __stdcall AddGuideWithTangent(CATIAReference * iGuide, CATIAReference * iTangent); \
      virtual HRESULT __stdcall AddSectionToLoft(CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint); \
      virtual HRESULT __stdcall RemoveGuide(CATIAReference * iGuide); \
      virtual HRESULT __stdcall RemoveSection(CATIAReference * iSection); \
      virtual HRESULT __stdcall GetSectionFromLoft(CATLONG iRank, CATIAReference *& oCrv, CATLONG & oOri, CATIAReference *& oPoint); \
      virtual HRESULT __stdcall InsertCoupling(CATLONG iPosition); \
      virtual HRESULT __stdcall InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_SectionCoupling(CATLONG & oCoupling); \
      virtual HRESULT __stdcall put_SectionCoupling(CATLONG iCoupling); \
      virtual HRESULT __stdcall get_Relimitation(CATLONG & oRelimitation); \
      virtual HRESULT __stdcall put_Relimitation(CATLONG iRelimitation); \
      virtual HRESULT __stdcall get_CanonicalDetection(CATLONG & oDetection); \
      virtual HRESULT __stdcall put_CanonicalDetection(CATLONG iDetection); \
      virtual HRESULT __stdcall get_CompStartSectionTangent(CATLONG & oComputedTangent); \
      virtual HRESULT __stdcall put_CompStartSectionTangent(CATLONG iComputedTangent); \
      virtual HRESULT __stdcall get_CompEndSectionTangent(CATLONG & oComputedTangent); \
      virtual HRESULT __stdcall put_CompEndSectionTangent(CATLONG iComputedTangent); \
      virtual HRESULT __stdcall get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oSmoothDeviationActivity); \
      virtual HRESULT __stdcall put_SmoothDeviationActivity(CAT_VARIANT_BOOL iSmoothDeviationActivity); \
      virtual HRESULT __stdcall get_SmoothDeviation(double & oSmoothDeviation); \
      virtual HRESULT __stdcall put_SmoothDeviation(double iSmoothDeviation); \
      virtual HRESULT __stdcall get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmoothAngleThresholdActivity); \
      virtual HRESULT __stdcall put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmoothAngleThresholdActivity); \
      virtual HRESULT __stdcall get_SmoothAngleThreshold(double & oSmoothAngleThreshold); \
      virtual HRESULT __stdcall put_SmoothAngleThreshold(double iSmoothAngleThreshold); \
      virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
      virtual HRESULT __stdcall put_Context(CATLONG iContext); \
      virtual HRESULT __stdcall GetStartAndEndSectionTangent(CATIAReference *& oStartSectionTangent, CATIAReference *& oEndSectionTangent); \
      virtual HRESULT __stdcall GetFacesForClosing(CATIAReference *& oStartFace, CATIAReference *& oEndFace); \
      virtual HRESULT __stdcall GetSpine(CATLONG & oSpineType, CATIAReference *& oSpine); \
      virtual HRESULT __stdcall ModifyGuideCurve(CATIAReference * iGuide, CATIAReference * iNewGuide); \
      virtual HRESULT __stdcall ModifySectionOrient(CATIAReference * iSection, CATLONG iOrient); \
      virtual HRESULT __stdcall RemoveFaceForClosing(CATIAReference * iSection); \
      virtual HRESULT __stdcall RemoveGuideTangent(CATIAReference * iGuide); \
      virtual HRESULT __stdcall RemoveSectionPoint(CATIAReference * iSection); \
      virtual HRESULT __stdcall RemoveSectionTangent(CATIAReference * iSection); \
      virtual HRESULT __stdcall GetGuide(CATLONG iPos, CATIAReference *& oGuide, CATIAReference *& oGuideTangent); \
      virtual HRESULT __stdcall GetNbOfGuides(CATLONG & oSize); \
      virtual HRESULT __stdcall ModifySectionCurve(CATIAReference * iSection, CATIAReference * iNewSection, CATIAReference *& oCurveSection, CATIAReference *& oClosingPoint, CATLONG & oPtDiag); \
      virtual HRESULT __stdcall get_BooleanOperation(CATLONG & oBool); \
      virtual HRESULT __stdcall put_BooleanOperation(CATLONG iBool); \
      virtual HRESULT __stdcall InsertSectionToLoft(CAT_VARIANT_BOOL iType, CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint, CATIAReference * iSectionRef); \
      virtual HRESULT __stdcall get_AreaLaw(CATIAReference *& opIAElem); \
      virtual HRESULT __stdcall put_AreaLaw(CATIAReference * ipIAElem); \
      virtual HRESULT __stdcall get_AreaLawTolerance(double & opIAElem); \
      virtual HRESULT __stdcall put_AreaLawTolerance(double ipIAElem); \
      virtual HRESULT __stdcall GetAreaLawToleranceParameter(CATIALength *& opIAElem); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeLoft(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetSpine(CATIAReference * iSpine); \
virtual HRESULT __stdcall SetStartSectionTangent(CATIAReference * iTangentSection); \
virtual HRESULT __stdcall SetEndSectionTangent(CATIAReference * iTangentSection); \
virtual HRESULT __stdcall SetStartFaceForClosing(CATIAReference * iFace); \
virtual HRESULT __stdcall SetEndFaceForClosing(CATIAReference * iFace); \
virtual HRESULT __stdcall AddGuide(CATIAReference * iGuide); \
virtual HRESULT __stdcall AddGuideWithTangent(CATIAReference * iGuide, CATIAReference * iTangent); \
virtual HRESULT __stdcall AddSectionToLoft(CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint); \
virtual HRESULT __stdcall RemoveGuide(CATIAReference * iGuide); \
virtual HRESULT __stdcall RemoveSection(CATIAReference * iSection); \
virtual HRESULT __stdcall GetSectionFromLoft(CATLONG iRank, CATIAReference *& oCrv, CATLONG & oOri, CATIAReference *& oPoint); \
virtual HRESULT __stdcall InsertCoupling(CATLONG iPosition); \
virtual HRESULT __stdcall InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint); \
virtual HRESULT __stdcall get_SectionCoupling(CATLONG & oCoupling); \
virtual HRESULT __stdcall put_SectionCoupling(CATLONG iCoupling); \
virtual HRESULT __stdcall get_Relimitation(CATLONG & oRelimitation); \
virtual HRESULT __stdcall put_Relimitation(CATLONG iRelimitation); \
virtual HRESULT __stdcall get_CanonicalDetection(CATLONG & oDetection); \
virtual HRESULT __stdcall put_CanonicalDetection(CATLONG iDetection); \
virtual HRESULT __stdcall get_CompStartSectionTangent(CATLONG & oComputedTangent); \
virtual HRESULT __stdcall put_CompStartSectionTangent(CATLONG iComputedTangent); \
virtual HRESULT __stdcall get_CompEndSectionTangent(CATLONG & oComputedTangent); \
virtual HRESULT __stdcall put_CompEndSectionTangent(CATLONG iComputedTangent); \
virtual HRESULT __stdcall get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oSmoothDeviationActivity); \
virtual HRESULT __stdcall put_SmoothDeviationActivity(CAT_VARIANT_BOOL iSmoothDeviationActivity); \
virtual HRESULT __stdcall get_SmoothDeviation(double & oSmoothDeviation); \
virtual HRESULT __stdcall put_SmoothDeviation(double iSmoothDeviation); \
virtual HRESULT __stdcall get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmoothAngleThresholdActivity); \
virtual HRESULT __stdcall put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmoothAngleThresholdActivity); \
virtual HRESULT __stdcall get_SmoothAngleThreshold(double & oSmoothAngleThreshold); \
virtual HRESULT __stdcall put_SmoothAngleThreshold(double iSmoothAngleThreshold); \
virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
virtual HRESULT __stdcall put_Context(CATLONG iContext); \
virtual HRESULT __stdcall GetStartAndEndSectionTangent(CATIAReference *& oStartSectionTangent, CATIAReference *& oEndSectionTangent); \
virtual HRESULT __stdcall GetFacesForClosing(CATIAReference *& oStartFace, CATIAReference *& oEndFace); \
virtual HRESULT __stdcall GetSpine(CATLONG & oSpineType, CATIAReference *& oSpine); \
virtual HRESULT __stdcall ModifyGuideCurve(CATIAReference * iGuide, CATIAReference * iNewGuide); \
virtual HRESULT __stdcall ModifySectionOrient(CATIAReference * iSection, CATLONG iOrient); \
virtual HRESULT __stdcall RemoveFaceForClosing(CATIAReference * iSection); \
virtual HRESULT __stdcall RemoveGuideTangent(CATIAReference * iGuide); \
virtual HRESULT __stdcall RemoveSectionPoint(CATIAReference * iSection); \
virtual HRESULT __stdcall RemoveSectionTangent(CATIAReference * iSection); \
virtual HRESULT __stdcall GetGuide(CATLONG iPos, CATIAReference *& oGuide, CATIAReference *& oGuideTangent); \
virtual HRESULT __stdcall GetNbOfGuides(CATLONG & oSize); \
virtual HRESULT __stdcall ModifySectionCurve(CATIAReference * iSection, CATIAReference * iNewSection, CATIAReference *& oCurveSection, CATIAReference *& oClosingPoint, CATLONG & oPtDiag); \
virtual HRESULT __stdcall get_BooleanOperation(CATLONG & oBool); \
virtual HRESULT __stdcall put_BooleanOperation(CATLONG iBool); \
virtual HRESULT __stdcall InsertSectionToLoft(CAT_VARIANT_BOOL iType, CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint, CATIAReference * iSectionRef); \
virtual HRESULT __stdcall get_AreaLaw(CATIAReference *& opIAElem); \
virtual HRESULT __stdcall put_AreaLaw(CATIAReference * ipIAElem); \
virtual HRESULT __stdcall get_AreaLawTolerance(double & opIAElem); \
virtual HRESULT __stdcall put_AreaLawTolerance(double ipIAElem); \
virtual HRESULT __stdcall GetAreaLawToleranceParameter(CATIALength *& opIAElem); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeLoft(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetSpine(CATIAReference * iSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)SetSpine(iSpine)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartSectionTangent(CATIAReference * iTangentSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)SetStartSectionTangent(iTangentSection)); \
} \
HRESULT __stdcall  ENVTIEName::SetEndSectionTangent(CATIAReference * iTangentSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)SetEndSectionTangent(iTangentSection)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartFaceForClosing(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)SetStartFaceForClosing(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::SetEndFaceForClosing(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)SetEndFaceForClosing(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::AddGuide(CATIAReference * iGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)AddGuide(iGuide)); \
} \
HRESULT __stdcall  ENVTIEName::AddGuideWithTangent(CATIAReference * iGuide, CATIAReference * iTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)AddGuideWithTangent(iGuide,iTangent)); \
} \
HRESULT __stdcall  ENVTIEName::AddSectionToLoft(CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)AddSectionToLoft(iCrv,iOri,iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuide(CATIAReference * iGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)RemoveGuide(iGuide)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSection(CATIAReference * iSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)RemoveSection(iSection)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectionFromLoft(CATLONG iRank, CATIAReference *& oCrv, CATLONG & oOri, CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetSectionFromLoft(iRank,oCrv,oOri,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::InsertCoupling(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)InsertCoupling(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)InsertCouplingPoint(iCouplingIndex,iPosition,iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionCoupling(CATLONG & oCoupling) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_SectionCoupling(oCoupling)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionCoupling(CATLONG iCoupling) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_SectionCoupling(iCoupling)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relimitation(CATLONG & oRelimitation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_Relimitation(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Relimitation(CATLONG iRelimitation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_Relimitation(iRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_CanonicalDetection(CATLONG & oDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_CanonicalDetection(oDetection)); \
} \
HRESULT __stdcall  ENVTIEName::put_CanonicalDetection(CATLONG iDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_CanonicalDetection(iDetection)); \
} \
HRESULT __stdcall  ENVTIEName::get_CompStartSectionTangent(CATLONG & oComputedTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_CompStartSectionTangent(oComputedTangent)); \
} \
HRESULT __stdcall  ENVTIEName::put_CompStartSectionTangent(CATLONG iComputedTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_CompStartSectionTangent(iComputedTangent)); \
} \
HRESULT __stdcall  ENVTIEName::get_CompEndSectionTangent(CATLONG & oComputedTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_CompEndSectionTangent(oComputedTangent)); \
} \
HRESULT __stdcall  ENVTIEName::put_CompEndSectionTangent(CATLONG iComputedTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_CompEndSectionTangent(iComputedTangent)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oSmoothDeviationActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_SmoothDeviationActivity(oSmoothDeviationActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothDeviationActivity(CAT_VARIANT_BOOL iSmoothDeviationActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_SmoothDeviationActivity(iSmoothDeviationActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothDeviation(double & oSmoothDeviation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_SmoothDeviation(oSmoothDeviation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothDeviation(double iSmoothDeviation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_SmoothDeviation(iSmoothDeviation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmoothAngleThresholdActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThresholdActivity(oSmoothAngleThresholdActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmoothAngleThresholdActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_SmoothAngleThresholdActivity(iSmoothAngleThresholdActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothAngleThreshold(double & oSmoothAngleThreshold) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_SmoothAngleThreshold(oSmoothAngleThreshold)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothAngleThreshold(double iSmoothAngleThreshold) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_SmoothAngleThreshold(iSmoothAngleThreshold)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATLONG & oContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::put_Context(CATLONG iContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_Context(iContext)); \
} \
HRESULT __stdcall  ENVTIEName::GetStartAndEndSectionTangent(CATIAReference *& oStartSectionTangent, CATIAReference *& oEndSectionTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetStartAndEndSectionTangent(oStartSectionTangent,oEndSectionTangent)); \
} \
HRESULT __stdcall  ENVTIEName::GetFacesForClosing(CATIAReference *& oStartFace, CATIAReference *& oEndFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetFacesForClosing(oStartFace,oEndFace)); \
} \
HRESULT __stdcall  ENVTIEName::GetSpine(CATLONG & oSpineType, CATIAReference *& oSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetSpine(oSpineType,oSpine)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyGuideCurve(CATIAReference * iGuide, CATIAReference * iNewGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)ModifyGuideCurve(iGuide,iNewGuide)); \
} \
HRESULT __stdcall  ENVTIEName::ModifySectionOrient(CATIAReference * iSection, CATLONG iOrient) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)ModifySectionOrient(iSection,iOrient)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFaceForClosing(CATIAReference * iSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)RemoveFaceForClosing(iSection)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuideTangent(CATIAReference * iGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)RemoveGuideTangent(iGuide)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSectionPoint(CATIAReference * iSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)RemoveSectionPoint(iSection)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSectionTangent(CATIAReference * iSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)RemoveSectionTangent(iSection)); \
} \
HRESULT __stdcall  ENVTIEName::GetGuide(CATLONG iPos, CATIAReference *& oGuide, CATIAReference *& oGuideTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetGuide(iPos,oGuide,oGuideTangent)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbOfGuides(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetNbOfGuides(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::ModifySectionCurve(CATIAReference * iSection, CATIAReference * iNewSection, CATIAReference *& oCurveSection, CATIAReference *& oClosingPoint, CATLONG & oPtDiag) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)ModifySectionCurve(iSection,iNewSection,oCurveSection,oClosingPoint,oPtDiag)); \
} \
HRESULT __stdcall  ENVTIEName::get_BooleanOperation(CATLONG & oBool) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_BooleanOperation(oBool)); \
} \
HRESULT __stdcall  ENVTIEName::put_BooleanOperation(CATLONG iBool) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_BooleanOperation(iBool)); \
} \
HRESULT __stdcall  ENVTIEName::InsertSectionToLoft(CAT_VARIANT_BOOL iType, CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint, CATIAReference * iSectionRef) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)InsertSectionToLoft(iType,iCrv,iOri,iPoint,iSectionRef)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaLaw(CATIAReference *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_AreaLaw(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaLaw(CATIAReference * ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_AreaLaw(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaLawTolerance(double & opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_AreaLawTolerance(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaLawTolerance(double ipIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_AreaLawTolerance(ipIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetAreaLawToleranceParameter(CATIALength *& opIAElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetAreaLawToleranceParameter(opIAElem)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeLoft,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeLoft(classe)    TIECATIAHybridShapeLoft##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeLoft(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeLoft, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeLoft, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeLoft, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeLoft, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeLoft, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::SetSpine(CATIAReference * iSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSpine(iSpine); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::SetStartSectionTangent(CATIAReference * iTangentSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iTangentSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartSectionTangent(iTangentSection); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iTangentSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::SetEndSectionTangent(CATIAReference * iTangentSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iTangentSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndSectionTangent(iTangentSection); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iTangentSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::SetStartFaceForClosing(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartFaceForClosing(iFace); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::SetEndFaceForClosing(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndFaceForClosing(iFace); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::AddGuide(CATIAReference * iGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGuide(iGuide); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::AddGuideWithTangent(CATIAReference * iGuide, CATIAReference * iTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iGuide,&iTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGuideWithTangent(iGuide,iTangent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iGuide,&iTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::AddSectionToLoft(CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCrv,&iOri,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSectionToLoft(iCrv,iOri,iPoint); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCrv,&iOri,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::RemoveGuide(CATIAReference * iGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuide(iGuide); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::RemoveSection(CATIAReference * iSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSection(iSection); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::GetSectionFromLoft(CATLONG iRank, CATIAReference *& oCrv, CATLONG & oOri, CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRank,&oCrv,&oOri,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectionFromLoft(iRank,oCrv,oOri,oPoint); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRank,&oCrv,&oOri,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::InsertCoupling(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertCoupling(iPosition); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::InsertCouplingPoint(CATLONG iCouplingIndex, CATLONG iPosition, CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iCouplingIndex,&iPosition,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertCouplingPoint(iCouplingIndex,iPosition,iPoint); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iCouplingIndex,&iPosition,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_SectionCoupling(CATLONG & oCoupling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oCoupling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionCoupling(oCoupling); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oCoupling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_SectionCoupling(CATLONG iCoupling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCoupling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionCoupling(iCoupling); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCoupling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_Relimitation(CATLONG & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relimitation(oRelimitation); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_Relimitation(CATLONG iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Relimitation(iRelimitation); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_CanonicalDetection(CATLONG & oDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CanonicalDetection(oDetection); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_CanonicalDetection(CATLONG iDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CanonicalDetection(iDetection); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_CompStartSectionTangent(CATLONG & oComputedTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oComputedTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CompStartSectionTangent(oComputedTangent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oComputedTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_CompStartSectionTangent(CATLONG iComputedTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iComputedTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CompStartSectionTangent(iComputedTangent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iComputedTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_CompEndSectionTangent(CATLONG & oComputedTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oComputedTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CompEndSectionTangent(oComputedTangent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oComputedTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_CompEndSectionTangent(CATLONG iComputedTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iComputedTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CompEndSectionTangent(iComputedTangent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iComputedTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_SmoothDeviationActivity(CAT_VARIANT_BOOL & oSmoothDeviationActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oSmoothDeviationActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothDeviationActivity(oSmoothDeviationActivity); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oSmoothDeviationActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_SmoothDeviationActivity(CAT_VARIANT_BOOL iSmoothDeviationActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iSmoothDeviationActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothDeviationActivity(iSmoothDeviationActivity); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iSmoothDeviationActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_SmoothDeviation(double & oSmoothDeviation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oSmoothDeviation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothDeviation(oSmoothDeviation); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oSmoothDeviation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_SmoothDeviation(double iSmoothDeviation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iSmoothDeviation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothDeviation(iSmoothDeviation); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iSmoothDeviation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL & oSmoothAngleThresholdActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oSmoothAngleThresholdActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThresholdActivity(oSmoothAngleThresholdActivity); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oSmoothAngleThresholdActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_SmoothAngleThresholdActivity(CAT_VARIANT_BOOL iSmoothAngleThresholdActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iSmoothAngleThresholdActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothAngleThresholdActivity(iSmoothAngleThresholdActivity); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iSmoothAngleThresholdActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_SmoothAngleThreshold(double & oSmoothAngleThreshold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oSmoothAngleThreshold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothAngleThreshold(oSmoothAngleThreshold); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oSmoothAngleThreshold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_SmoothAngleThreshold(double iSmoothAngleThreshold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iSmoothAngleThreshold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothAngleThreshold(iSmoothAngleThreshold); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iSmoothAngleThreshold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_Context(CATLONG & oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_Context(CATLONG iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Context(iContext); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::GetStartAndEndSectionTangent(CATIAReference *& oStartSectionTangent, CATIAReference *& oEndSectionTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oStartSectionTangent,&oEndSectionTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartAndEndSectionTangent(oStartSectionTangent,oEndSectionTangent); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oStartSectionTangent,&oEndSectionTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::GetFacesForClosing(CATIAReference *& oStartFace, CATIAReference *& oEndFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oStartFace,&oEndFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacesForClosing(oStartFace,oEndFace); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oStartFace,&oEndFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::GetSpine(CATLONG & oSpineType, CATIAReference *& oSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oSpineType,&oSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpine(oSpineType,oSpine); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oSpineType,&oSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::ModifyGuideCurve(CATIAReference * iGuide, CATIAReference * iNewGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iGuide,&iNewGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyGuideCurve(iGuide,iNewGuide); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iGuide,&iNewGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::ModifySectionOrient(CATIAReference * iSection, CATLONG iOrient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iSection,&iOrient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifySectionOrient(iSection,iOrient); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iSection,&iOrient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::RemoveFaceForClosing(CATIAReference * iSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFaceForClosing(iSection); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::RemoveGuideTangent(CATIAReference * iGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuideTangent(iGuide); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::RemoveSectionPoint(CATIAReference * iSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSectionPoint(iSection); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::RemoveSectionTangent(CATIAReference * iSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSectionTangent(iSection); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::GetGuide(CATLONG iPos, CATIAReference *& oGuide, CATIAReference *& oGuideTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iPos,&oGuide,&oGuideTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGuide(iPos,oGuide,oGuideTangent); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iPos,&oGuide,&oGuideTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::GetNbOfGuides(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbOfGuides(oSize); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::ModifySectionCurve(CATIAReference * iSection, CATIAReference * iNewSection, CATIAReference *& oCurveSection, CATIAReference *& oClosingPoint, CATLONG & oPtDiag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iSection,&iNewSection,&oCurveSection,&oClosingPoint,&oPtDiag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifySectionCurve(iSection,iNewSection,oCurveSection,oClosingPoint,oPtDiag); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iSection,&iNewSection,&oCurveSection,&oClosingPoint,&oPtDiag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_BooleanOperation(CATLONG & oBool) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oBool); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BooleanOperation(oBool); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oBool); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_BooleanOperation(CATLONG iBool) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iBool); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BooleanOperation(iBool); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iBool); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::InsertSectionToLoft(CAT_VARIANT_BOOL iType, CATIAReference * iCrv, CATLONG iOri, CATIAReference * iPoint, CATIAReference * iSectionRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iType,&iCrv,&iOri,&iPoint,&iSectionRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertSectionToLoft(iType,iCrv,iOri,iPoint,iSectionRef); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iType,&iCrv,&iOri,&iPoint,&iSectionRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_AreaLaw(CATIAReference *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaLaw(opIAElem); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_AreaLaw(CATIAReference * ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaLaw(ipIAElem); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_AreaLawTolerance(double & opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaLawTolerance(opIAElem); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::put_AreaLawTolerance(double ipIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&ipIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaLawTolerance(ipIAElem); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&ipIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::GetAreaLawToleranceParameter(CATIALength *& opIAElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&opIAElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAreaLawToleranceParameter(opIAElem); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&opIAElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLoft##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLoft##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLoft##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLoft##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLoft##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLoft##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeLoft(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLoft(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLoft##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLoft,"CATIAHybridShapeLoft",CATIAHybridShapeLoft::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLoft(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeLoft, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLoft##classe(classe::MetaObject(),CATIAHybridShapeLoft::MetaObject(),(void *)CreateTIECATIAHybridShapeLoft##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeLoft(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLoft(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLoft##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLoft,"CATIAHybridShapeLoft",CATIAHybridShapeLoft::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLoft(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeLoft, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLoft##classe(classe::MetaObject(),CATIAHybridShapeLoft::MetaObject(),(void *)CreateTIECATIAHybridShapeLoft##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeLoft(classe) TIE_CATIAHybridShapeLoft(classe)
#else
#define BOA_CATIAHybridShapeLoft(classe) CATImplementBOA(CATIAHybridShapeLoft, classe)
#endif

#endif
