#ifndef __TIE_CATIAAnnotation
#define __TIE_CATIAAnnotation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotation */
#define declare_TIE_CATIAAnnotation(classe) \
 \
 \
class TIECATIAAnnotation##classe : public CATIAAnnotation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_SuperType(CATBSTR & oSuperType); \
      virtual HRESULT __stdcall get_TPSStatus(CATBSTR & oStatus); \
      virtual HRESULT __stdcall put_Z(double iZ); \
      virtual HRESULT __stdcall SetXY(double iX, double iY); \
      virtual HRESULT __stdcall TransfertToView(CATIATPSView * iView); \
      virtual HRESULT __stdcall ModifyVisu(); \
      virtual HRESULT __stdcall AddLeader(); \
      virtual HRESULT __stdcall ApplyReferencedGeomColor(CATLONG iReleatedR, CATLONG iReleatedG, CATLONG iReleatedB); \
      virtual HRESULT __stdcall ApplyReferencedInitColor(); \
      virtual HRESULT __stdcall Text(CATIAText *& oText); \
      virtual HRESULT __stdcall Dimension3D(CATIADimension3D *& oDim); \
      virtual HRESULT __stdcall FlagNote(CATIAFlagNote *& oFlagNote); \
      virtual HRESULT __stdcall Roughness(CATIARoughness *& oRoughness); \
      virtual HRESULT __stdcall Noa(CATIANoa *& oNoa); \
      virtual HRESULT __stdcall ReferenceFrame(CATIAReferenceFrame *& oRefFrame); \
      virtual HRESULT __stdcall DatumSimple(CATIADatumSimple *& oDatSimple); \
      virtual HRESULT __stdcall DatumTarget(CATIADatumTarget *& oDatTarget); \
      virtual HRESULT __stdcall IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone); \
      virtual HRESULT __stdcall ToleranceZone(CATIAToleranceZone *& oTolZone); \
      virtual HRESULT __stdcall IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas); \
      virtual HRESULT __stdcall ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas); \
      virtual HRESULT __stdcall IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot); \
      virtual HRESULT __stdcall DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot); \
      virtual HRESULT __stdcall HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond); \
      virtual HRESULT __stdcall MaterialCondition(CATIAMaterialCondition *& oMatCond); \
      virtual HRESULT __stdcall HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim); \
      virtual HRESULT __stdcall DimensionLimit(CATIADimensionLimit *& oDimLim); \
      virtual HRESULT __stdcall IsATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane); \
      virtual HRESULT __stdcall TangentPlane(CATIATangentPlane *& oTangentPlane); \
      virtual HRESULT __stdcall HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes); \
      virtual HRESULT __stdcall TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes); \
      virtual HRESULT __stdcall IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol); \
      virtual HRESULT __stdcall ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol); \
      virtual HRESULT __stdcall HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem); \
      virtual HRESULT __stdcall ParticularTolElem(CATIAParticularTolElem *& oParTolElem); \
      virtual HRESULT __stdcall HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState); \
      virtual HRESULT __stdcall FreeState(CATIAFreeState *& oFreeState); \
      virtual HRESULT __stdcall IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt); \
      virtual HRESULT __stdcall DimensionPattern(CATIADimensionPattern *& oDimPatt); \
      virtual HRESULT __stdcall IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol); \
      virtual HRESULT __stdcall CompositeTolerance(CATIACompositeTolerance *& oCompTol); \
      virtual HRESULT __stdcall IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone); \
      virtual HRESULT __stdcall ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone); \
      virtual HRESULT __stdcall HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond); \
      virtual HRESULT __stdcall EnvelopCondition(CATIAEnvelopCondition *& oEnvCond); \
      virtual HRESULT __stdcall HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad); \
      virtual HRESULT __stdcall ControledRadius(CATIAControledRadius *& oEnvCond); \
      virtual HRESULT __stdcall IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra); \
      virtual HRESULT __stdcall AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra); \
      virtual HRESULT __stdcall GetSurfacesCount(double & oInstanceCount); \
      virtual HRESULT __stdcall GetSurfaces(CATSafeArrayVariant & oSafeArray); \
      virtual HRESULT __stdcall HasANumericalDisplayFormat(CAT_VARIANT_BOOL & oHasANumForm); \
      virtual HRESULT __stdcall NumericalDisplayFormat(CATIANumericalDisplayFormat *& oNumForm); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_SuperType(CATBSTR & oSuperType); \
virtual HRESULT __stdcall get_TPSStatus(CATBSTR & oStatus); \
virtual HRESULT __stdcall put_Z(double iZ); \
virtual HRESULT __stdcall SetXY(double iX, double iY); \
virtual HRESULT __stdcall TransfertToView(CATIATPSView * iView); \
virtual HRESULT __stdcall ModifyVisu(); \
virtual HRESULT __stdcall AddLeader(); \
virtual HRESULT __stdcall ApplyReferencedGeomColor(CATLONG iReleatedR, CATLONG iReleatedG, CATLONG iReleatedB); \
virtual HRESULT __stdcall ApplyReferencedInitColor(); \
virtual HRESULT __stdcall Text(CATIAText *& oText); \
virtual HRESULT __stdcall Dimension3D(CATIADimension3D *& oDim); \
virtual HRESULT __stdcall FlagNote(CATIAFlagNote *& oFlagNote); \
virtual HRESULT __stdcall Roughness(CATIARoughness *& oRoughness); \
virtual HRESULT __stdcall Noa(CATIANoa *& oNoa); \
virtual HRESULT __stdcall ReferenceFrame(CATIAReferenceFrame *& oRefFrame); \
virtual HRESULT __stdcall DatumSimple(CATIADatumSimple *& oDatSimple); \
virtual HRESULT __stdcall DatumTarget(CATIADatumTarget *& oDatTarget); \
virtual HRESULT __stdcall IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone); \
virtual HRESULT __stdcall ToleranceZone(CATIAToleranceZone *& oTolZone); \
virtual HRESULT __stdcall IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas); \
virtual HRESULT __stdcall ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas); \
virtual HRESULT __stdcall IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot); \
virtual HRESULT __stdcall DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot); \
virtual HRESULT __stdcall HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond); \
virtual HRESULT __stdcall MaterialCondition(CATIAMaterialCondition *& oMatCond); \
virtual HRESULT __stdcall HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim); \
virtual HRESULT __stdcall DimensionLimit(CATIADimensionLimit *& oDimLim); \
virtual HRESULT __stdcall IsATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane); \
virtual HRESULT __stdcall TangentPlane(CATIATangentPlane *& oTangentPlane); \
virtual HRESULT __stdcall HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes); \
virtual HRESULT __stdcall TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes); \
virtual HRESULT __stdcall IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol); \
virtual HRESULT __stdcall ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol); \
virtual HRESULT __stdcall HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem); \
virtual HRESULT __stdcall ParticularTolElem(CATIAParticularTolElem *& oParTolElem); \
virtual HRESULT __stdcall HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState); \
virtual HRESULT __stdcall FreeState(CATIAFreeState *& oFreeState); \
virtual HRESULT __stdcall IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt); \
virtual HRESULT __stdcall DimensionPattern(CATIADimensionPattern *& oDimPatt); \
virtual HRESULT __stdcall IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol); \
virtual HRESULT __stdcall CompositeTolerance(CATIACompositeTolerance *& oCompTol); \
virtual HRESULT __stdcall IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone); \
virtual HRESULT __stdcall ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone); \
virtual HRESULT __stdcall HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond); \
virtual HRESULT __stdcall EnvelopCondition(CATIAEnvelopCondition *& oEnvCond); \
virtual HRESULT __stdcall HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad); \
virtual HRESULT __stdcall ControledRadius(CATIAControledRadius *& oEnvCond); \
virtual HRESULT __stdcall IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra); \
virtual HRESULT __stdcall AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra); \
virtual HRESULT __stdcall GetSurfacesCount(double & oInstanceCount); \
virtual HRESULT __stdcall GetSurfaces(CATSafeArrayVariant & oSafeArray); \
virtual HRESULT __stdcall HasANumericalDisplayFormat(CAT_VARIANT_BOOL & oHasANumForm); \
virtual HRESULT __stdcall NumericalDisplayFormat(CATIANumericalDisplayFormat *& oNumForm); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SuperType(CATBSTR & oSuperType) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)get_SuperType(oSuperType)); \
} \
HRESULT __stdcall  ENVTIEName::get_TPSStatus(CATBSTR & oStatus) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)get_TPSStatus(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_Z(double iZ) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)put_Z(iZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetXY(double iX, double iY) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)SetXY(iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::TransfertToView(CATIATPSView * iView) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)TransfertToView(iView)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyVisu() \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ModifyVisu()); \
} \
HRESULT __stdcall  ENVTIEName::AddLeader() \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)AddLeader()); \
} \
HRESULT __stdcall  ENVTIEName::ApplyReferencedGeomColor(CATLONG iReleatedR, CATLONG iReleatedG, CATLONG iReleatedB) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ApplyReferencedGeomColor(iReleatedR,iReleatedG,iReleatedB)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyReferencedInitColor() \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ApplyReferencedInitColor()); \
} \
HRESULT __stdcall  ENVTIEName::Text(CATIAText *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::Dimension3D(CATIADimension3D *& oDim) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)Dimension3D(oDim)); \
} \
HRESULT __stdcall  ENVTIEName::FlagNote(CATIAFlagNote *& oFlagNote) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)FlagNote(oFlagNote)); \
} \
HRESULT __stdcall  ENVTIEName::Roughness(CATIARoughness *& oRoughness) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)Roughness(oRoughness)); \
} \
HRESULT __stdcall  ENVTIEName::Noa(CATIANoa *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)Noa(oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::ReferenceFrame(CATIAReferenceFrame *& oRefFrame) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ReferenceFrame(oRefFrame)); \
} \
HRESULT __stdcall  ENVTIEName::DatumSimple(CATIADatumSimple *& oDatSimple) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)DatumSimple(oDatSimple)); \
} \
HRESULT __stdcall  ENVTIEName::DatumTarget(CATIADatumTarget *& oDatTarget) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)DatumTarget(oDatTarget)); \
} \
HRESULT __stdcall  ENVTIEName::IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsAToleranceZone(oIsATolZone)); \
} \
HRESULT __stdcall  ENVTIEName::ToleranceZone(CATIAToleranceZone *& oTolZone) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ToleranceZone(oTolZone)); \
} \
HRESULT __stdcall  ENVTIEName::IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsAToleranceUnitBasisValue(oIsATolUnitBas)); \
} \
HRESULT __stdcall  ENVTIEName::ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ToleranceUnitBasisValue(oTolUnitBas)); \
} \
HRESULT __stdcall  ENVTIEName::IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsADefaultAnnotation(oIsADefAnnot)); \
} \
HRESULT __stdcall  ENVTIEName::DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)DefaultAnnotation(oDefAnnot)); \
} \
HRESULT __stdcall  ENVTIEName::HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasAMaterialCondition(oHasMatCond)); \
} \
HRESULT __stdcall  ENVTIEName::MaterialCondition(CATIAMaterialCondition *& oMatCond) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)MaterialCondition(oMatCond)); \
} \
HRESULT __stdcall  ENVTIEName::HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasDimensionLimit(oHasDimLim)); \
} \
HRESULT __stdcall  ENVTIEName::DimensionLimit(CATIADimensionLimit *& oDimLim) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)DimensionLimit(oDimLim)); \
} \
HRESULT __stdcall  ENVTIEName::IsATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsATangentPlane(oIsATangentPlane)); \
} \
HRESULT __stdcall  ENVTIEName::TangentPlane(CATIATangentPlane *& oTangentPlane) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)TangentPlane(oTangentPlane)); \
} \
HRESULT __stdcall  ENVTIEName::HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasATolerancePerUnitBasisRestrictiveValue(oHasATolRes)); \
} \
HRESULT __stdcall  ENVTIEName::TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)TolerancePerUnitBasisRestrictiveValue(oTolRes)); \
} \
HRESULT __stdcall  ENVTIEName::IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsAShiftedProfileTolerance(oIsAShiftProTol)); \
} \
HRESULT __stdcall  ENVTIEName::ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ShiftedProfileTolerance(oShiftProTol)); \
} \
HRESULT __stdcall  ENVTIEName::HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasAParticularTolElem(oHasAParTolElem)); \
} \
HRESULT __stdcall  ENVTIEName::ParticularTolElem(CATIAParticularTolElem *& oParTolElem) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ParticularTolElem(oParTolElem)); \
} \
HRESULT __stdcall  ENVTIEName::HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasAFreeState(oHasAFreeState)); \
} \
HRESULT __stdcall  ENVTIEName::FreeState(CATIAFreeState *& oFreeState) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)FreeState(oFreeState)); \
} \
HRESULT __stdcall  ENVTIEName::IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsADimensionPattern(oIsADimPatt)); \
} \
HRESULT __stdcall  ENVTIEName::DimensionPattern(CATIADimensionPattern *& oDimPatt) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)DimensionPattern(oDimPatt)); \
} \
HRESULT __stdcall  ENVTIEName::IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsACompositeTolerance(oIsACompTol)); \
} \
HRESULT __stdcall  ENVTIEName::CompositeTolerance(CATIACompositeTolerance *& oCompTol) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)CompositeTolerance(oCompTol)); \
} \
HRESULT __stdcall  ENVTIEName::IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsAProjectedToleranceZone(oIsAProjTolZone)); \
} \
HRESULT __stdcall  ENVTIEName::ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ProjectedToleranceZone(oProjTolZone)); \
} \
HRESULT __stdcall  ENVTIEName::HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasAnEnvelopCondition(oHasEnvCond)); \
} \
HRESULT __stdcall  ENVTIEName::EnvelopCondition(CATIAEnvelopCondition *& oEnvCond) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)EnvelopCondition(oEnvCond)); \
} \
HRESULT __stdcall  ENVTIEName::HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasAControledRadius(oHasConRad)); \
} \
HRESULT __stdcall  ENVTIEName::ControledRadius(CATIAControledRadius *& oEnvCond) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)ControledRadius(oEnvCond)); \
} \
HRESULT __stdcall  ENVTIEName::IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)IsAnAssociatedRefFrame(oIsAnAssRefFra)); \
} \
HRESULT __stdcall  ENVTIEName::AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)AssociatedRefFrame(oAssRefFra)); \
} \
HRESULT __stdcall  ENVTIEName::GetSurfacesCount(double & oInstanceCount) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)GetSurfacesCount(oInstanceCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetSurfaces(CATSafeArrayVariant & oSafeArray) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)GetSurfaces(oSafeArray)); \
} \
HRESULT __stdcall  ENVTIEName::HasANumericalDisplayFormat(CAT_VARIANT_BOOL & oHasANumForm) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)HasANumericalDisplayFormat(oHasANumForm)); \
} \
HRESULT __stdcall  ENVTIEName::NumericalDisplayFormat(CATIANumericalDisplayFormat *& oNumForm) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)NumericalDisplayFormat(oNumForm)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotation(classe)    TIECATIAAnnotation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotation, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotation, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotation##classe::get_Type(CATBSTR & oType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::get_SuperType(CATBSTR & oSuperType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SuperType(oSuperType)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::get_TPSStatus(CATBSTR & oStatus) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TPSStatus(oStatus)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::put_Z(double iZ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Z(iZ)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::SetXY(double iX, double iY) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetXY(iX,iY)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::TransfertToView(CATIATPSView * iView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TransfertToView(iView)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ModifyVisu() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyVisu()); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::AddLeader() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddLeader()); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ApplyReferencedGeomColor(CATLONG iReleatedR, CATLONG iReleatedG, CATLONG iReleatedB) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyReferencedGeomColor(iReleatedR,iReleatedG,iReleatedB)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ApplyReferencedInitColor() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyReferencedInitColor()); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::Text(CATIAText *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Text(oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::Dimension3D(CATIADimension3D *& oDim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dimension3D(oDim)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::FlagNote(CATIAFlagNote *& oFlagNote) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlagNote(oFlagNote)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::Roughness(CATIARoughness *& oRoughness) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Roughness(oRoughness)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::Noa(CATIANoa *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Noa(oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ReferenceFrame(CATIAReferenceFrame *& oRefFrame) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReferenceFrame(oRefFrame)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::DatumSimple(CATIADatumSimple *& oDatSimple) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DatumSimple(oDatSimple)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::DatumTarget(CATIADatumTarget *& oDatTarget) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DatumTarget(oDatTarget)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAToleranceZone(oIsATolZone)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ToleranceZone(CATIAToleranceZone *& oTolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ToleranceZone(oTolZone)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAToleranceUnitBasisValue(oIsATolUnitBas)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ToleranceUnitBasisValue(oTolUnitBas)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsADefaultAnnotation(oIsADefAnnot)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefaultAnnotation(oDefAnnot)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAMaterialCondition(oHasMatCond)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::MaterialCondition(CATIAMaterialCondition *& oMatCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MaterialCondition(oMatCond)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasDimensionLimit(oHasDimLim)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::DimensionLimit(CATIADimensionLimit *& oDimLim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DimensionLimit(oDimLim)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsATangentPlane(oIsATangentPlane)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::TangentPlane(CATIATangentPlane *& oTangentPlane) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TangentPlane(oTangentPlane)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasATolerancePerUnitBasisRestrictiveValue(oHasATolRes)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TolerancePerUnitBasisRestrictiveValue(oTolRes)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAShiftedProfileTolerance(oIsAShiftProTol)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShiftedProfileTolerance(oShiftProTol)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAParticularTolElem(oHasAParTolElem)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ParticularTolElem(CATIAParticularTolElem *& oParTolElem) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ParticularTolElem(oParTolElem)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAFreeState(oHasAFreeState)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::FreeState(CATIAFreeState *& oFreeState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FreeState(oFreeState)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsADimensionPattern(oIsADimPatt)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::DimensionPattern(CATIADimensionPattern *& oDimPatt) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DimensionPattern(oDimPatt)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsACompositeTolerance(oIsACompTol)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::CompositeTolerance(CATIACompositeTolerance *& oCompTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CompositeTolerance(oCompTol)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAProjectedToleranceZone(oIsAProjTolZone)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProjectedToleranceZone(oProjTolZone)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAnEnvelopCondition(oHasEnvCond)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::EnvelopCondition(CATIAEnvelopCondition *& oEnvCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnvelopCondition(oEnvCond)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAControledRadius(oHasConRad)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::ControledRadius(CATIAControledRadius *& oEnvCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ControledRadius(oEnvCond)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAnAssociatedRefFrame(oIsAnAssRefFra)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AssociatedRefFrame(oAssRefFra)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::GetSurfacesCount(double & oInstanceCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfacesCount(oInstanceCount)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::GetSurfaces(CATSafeArrayVariant & oSafeArray) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfaces(oSafeArray)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::HasANumericalDisplayFormat(CAT_VARIANT_BOOL & oHasANumForm) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasANumericalDisplayFormat(oHasANumForm)); \
} \
HRESULT __stdcall  TIECATIAAnnotation##classe::NumericalDisplayFormat(CATIANumericalDisplayFormat *& oNumForm) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NumericalDisplayFormat(oNumForm)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotation(classe) \
 \
 \
declare_TIE_CATIAAnnotation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotation,"CATIAAnnotation",CATIAAnnotation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotation##classe(classe::MetaObject(),CATIAAnnotation::MetaObject(),(void *)CreateTIECATIAAnnotation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotation(classe) \
 \
 \
declare_TIE_CATIAAnnotation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotation,"CATIAAnnotation",CATIAAnnotation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotation##classe(classe::MetaObject(),CATIAAnnotation::MetaObject(),(void *)CreateTIECATIAAnnotation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotation(classe) TIE_CATIAAnnotation(classe)
#else
#define BOA_CATIAAnnotation(classe) CATImplementBOA(CATIAAnnotation, classe)
#endif

#endif
