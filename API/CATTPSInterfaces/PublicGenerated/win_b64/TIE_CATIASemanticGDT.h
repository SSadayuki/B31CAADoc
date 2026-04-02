#ifndef __TIE_CATIASemanticGDT
#define __TIE_CATIASemanticGDT

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIASemanticGDT.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASemanticGDT */
#define declare_TIE_CATIASemanticGDT(classe) \
 \
 \
class TIECATIASemanticGDT##classe : public CATIASemanticGDT \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASemanticGDT, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone); \
      virtual HRESULT __stdcall ToleranceZone(CATIAToleranceZone *& oTolZone); \
      virtual HRESULT __stdcall IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas); \
      virtual HRESULT __stdcall ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas); \
      virtual HRESULT __stdcall HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond); \
      virtual HRESULT __stdcall MaterialCondition(CATIAMaterialCondition *& oMatCond); \
      virtual HRESULT __stdcall HasATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane); \
      virtual HRESULT __stdcall TangentPlane(CATIATangentPlane *& oTangentPlane); \
      virtual HRESULT __stdcall HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes); \
      virtual HRESULT __stdcall TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes); \
      virtual HRESULT __stdcall IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol); \
      virtual HRESULT __stdcall ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol); \
      virtual HRESULT __stdcall HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem); \
      virtual HRESULT __stdcall ParticularTolElem(CATIAParticularTolElem *& oParTolElem); \
      virtual HRESULT __stdcall HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState); \
      virtual HRESULT __stdcall FreeState(CATIAFreeState *& oFreeState); \
      virtual HRESULT __stdcall IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol); \
      virtual HRESULT __stdcall CompositeTolerance(CATIACompositeTolerance *& oCompTol); \
      virtual HRESULT __stdcall IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone); \
      virtual HRESULT __stdcall ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone); \
      virtual HRESULT __stdcall HasACenteredElement(CAT_VARIANT_BOOL & oHasCenterElt); \
      virtual HRESULT __stdcall MedianFeature(CATIAMedianFeature *& oMedianFeat); \
      virtual HRESULT __stdcall IsAppliedOnMultipleEntities(CAT_VARIANT_BOOL & oIsAPattern); \
      virtual HRESULT __stdcall NxDisplay(CATIASemanticGDTNxDisplay *& oNxDisplay); \
      virtual HRESULT __stdcall HasAFrameExtension(CATLONG & oFrameExtentNumber); \
      virtual HRESULT __stdcall FrameExtensions(CATLONG iFrameExtentIndex, CATIASemanticGDTFrameExtension *& oAuxiliaryFeatures); \
      virtual HRESULT __stdcall IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra); \
      virtual HRESULT __stdcall AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASemanticGDT(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone); \
virtual HRESULT __stdcall ToleranceZone(CATIAToleranceZone *& oTolZone); \
virtual HRESULT __stdcall IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas); \
virtual HRESULT __stdcall ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas); \
virtual HRESULT __stdcall HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond); \
virtual HRESULT __stdcall MaterialCondition(CATIAMaterialCondition *& oMatCond); \
virtual HRESULT __stdcall HasATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane); \
virtual HRESULT __stdcall TangentPlane(CATIATangentPlane *& oTangentPlane); \
virtual HRESULT __stdcall HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes); \
virtual HRESULT __stdcall TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes); \
virtual HRESULT __stdcall IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol); \
virtual HRESULT __stdcall ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol); \
virtual HRESULT __stdcall HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem); \
virtual HRESULT __stdcall ParticularTolElem(CATIAParticularTolElem *& oParTolElem); \
virtual HRESULT __stdcall HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState); \
virtual HRESULT __stdcall FreeState(CATIAFreeState *& oFreeState); \
virtual HRESULT __stdcall IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol); \
virtual HRESULT __stdcall CompositeTolerance(CATIACompositeTolerance *& oCompTol); \
virtual HRESULT __stdcall IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone); \
virtual HRESULT __stdcall ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone); \
virtual HRESULT __stdcall HasACenteredElement(CAT_VARIANT_BOOL & oHasCenterElt); \
virtual HRESULT __stdcall MedianFeature(CATIAMedianFeature *& oMedianFeat); \
virtual HRESULT __stdcall IsAppliedOnMultipleEntities(CAT_VARIANT_BOOL & oIsAPattern); \
virtual HRESULT __stdcall NxDisplay(CATIASemanticGDTNxDisplay *& oNxDisplay); \
virtual HRESULT __stdcall HasAFrameExtension(CATLONG & oFrameExtentNumber); \
virtual HRESULT __stdcall FrameExtensions(CATLONG iFrameExtentIndex, CATIASemanticGDTFrameExtension *& oAuxiliaryFeatures); \
virtual HRESULT __stdcall IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra); \
virtual HRESULT __stdcall AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASemanticGDT(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)IsAToleranceZone(oIsATolZone)); \
} \
HRESULT __stdcall  ENVTIEName::ToleranceZone(CATIAToleranceZone *& oTolZone) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)ToleranceZone(oTolZone)); \
} \
HRESULT __stdcall  ENVTIEName::IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)IsAToleranceUnitBasisValue(oIsATolUnitBas)); \
} \
HRESULT __stdcall  ENVTIEName::ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)ToleranceUnitBasisValue(oTolUnitBas)); \
} \
HRESULT __stdcall  ENVTIEName::HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)HasAMaterialCondition(oHasMatCond)); \
} \
HRESULT __stdcall  ENVTIEName::MaterialCondition(CATIAMaterialCondition *& oMatCond) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)MaterialCondition(oMatCond)); \
} \
HRESULT __stdcall  ENVTIEName::HasATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)HasATangentPlane(oIsATangentPlane)); \
} \
HRESULT __stdcall  ENVTIEName::TangentPlane(CATIATangentPlane *& oTangentPlane) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)TangentPlane(oTangentPlane)); \
} \
HRESULT __stdcall  ENVTIEName::HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)HasATolerancePerUnitBasisRestrictiveValue(oHasATolRes)); \
} \
HRESULT __stdcall  ENVTIEName::TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)TolerancePerUnitBasisRestrictiveValue(oTolRes)); \
} \
HRESULT __stdcall  ENVTIEName::IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)IsAShiftedProfileTolerance(oIsAShiftProTol)); \
} \
HRESULT __stdcall  ENVTIEName::ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)ShiftedProfileTolerance(oShiftProTol)); \
} \
HRESULT __stdcall  ENVTIEName::HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)HasAParticularTolElem(oHasAParTolElem)); \
} \
HRESULT __stdcall  ENVTIEName::ParticularTolElem(CATIAParticularTolElem *& oParTolElem) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)ParticularTolElem(oParTolElem)); \
} \
HRESULT __stdcall  ENVTIEName::HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)HasAFreeState(oHasAFreeState)); \
} \
HRESULT __stdcall  ENVTIEName::FreeState(CATIAFreeState *& oFreeState) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)FreeState(oFreeState)); \
} \
HRESULT __stdcall  ENVTIEName::IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)IsACompositeTolerance(oIsACompTol)); \
} \
HRESULT __stdcall  ENVTIEName::CompositeTolerance(CATIACompositeTolerance *& oCompTol) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)CompositeTolerance(oCompTol)); \
} \
HRESULT __stdcall  ENVTIEName::IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)IsAProjectedToleranceZone(oIsAProjTolZone)); \
} \
HRESULT __stdcall  ENVTIEName::ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)ProjectedToleranceZone(oProjTolZone)); \
} \
HRESULT __stdcall  ENVTIEName::HasACenteredElement(CAT_VARIANT_BOOL & oHasCenterElt) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)HasACenteredElement(oHasCenterElt)); \
} \
HRESULT __stdcall  ENVTIEName::MedianFeature(CATIAMedianFeature *& oMedianFeat) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)MedianFeature(oMedianFeat)); \
} \
HRESULT __stdcall  ENVTIEName::IsAppliedOnMultipleEntities(CAT_VARIANT_BOOL & oIsAPattern) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)IsAppliedOnMultipleEntities(oIsAPattern)); \
} \
HRESULT __stdcall  ENVTIEName::NxDisplay(CATIASemanticGDTNxDisplay *& oNxDisplay) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)NxDisplay(oNxDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::HasAFrameExtension(CATLONG & oFrameExtentNumber) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)HasAFrameExtension(oFrameExtentNumber)); \
} \
HRESULT __stdcall  ENVTIEName::FrameExtensions(CATLONG iFrameExtentIndex, CATIASemanticGDTFrameExtension *& oAuxiliaryFeatures) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)FrameExtensions(iFrameExtentIndex,oAuxiliaryFeatures)); \
} \
HRESULT __stdcall  ENVTIEName::IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)IsAnAssociatedRefFrame(oIsAnAssRefFra)); \
} \
HRESULT __stdcall  ENVTIEName::AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)AssociatedRefFrame(oAssRefFra)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASemanticGDT,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASemanticGDT(classe)    TIECATIASemanticGDT##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASemanticGDT(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASemanticGDT, classe) \
 \
 \
CATImplementTIEMethods(CATIASemanticGDT, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASemanticGDT, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASemanticGDT, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASemanticGDT, classe) \
 \
HRESULT __stdcall  TIECATIASemanticGDT##classe::IsAToleranceZone(CAT_VARIANT_BOOL & oIsATolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAToleranceZone(oIsATolZone)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::ToleranceZone(CATIAToleranceZone *& oTolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ToleranceZone(oTolZone)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::IsAToleranceUnitBasisValue(CAT_VARIANT_BOOL & oIsATolUnitBas) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAToleranceUnitBasisValue(oIsATolUnitBas)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::ToleranceUnitBasisValue(CATIAToleranceUnitBasisValue *& oTolUnitBas) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ToleranceUnitBasisValue(oTolUnitBas)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::HasAMaterialCondition(CAT_VARIANT_BOOL & oHasMatCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAMaterialCondition(oHasMatCond)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::MaterialCondition(CATIAMaterialCondition *& oMatCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MaterialCondition(oMatCond)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::HasATangentPlane(CAT_VARIANT_BOOL & oIsATangentPlane) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasATangentPlane(oIsATangentPlane)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::TangentPlane(CATIATangentPlane *& oTangentPlane) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TangentPlane(oTangentPlane)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::HasATolerancePerUnitBasisRestrictiveValue(CAT_VARIANT_BOOL & oHasATolRes) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasATolerancePerUnitBasisRestrictiveValue(oHasATolRes)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::TolerancePerUnitBasisRestrictiveValue(CATIATolerancePerUnitBasisRestrictiveValue *& oTolRes) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TolerancePerUnitBasisRestrictiveValue(oTolRes)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::IsAShiftedProfileTolerance(CAT_VARIANT_BOOL & oIsAShiftProTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAShiftedProfileTolerance(oIsAShiftProTol)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::ShiftedProfileTolerance(CATIAShiftedProfileTolerance *& oShiftProTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShiftedProfileTolerance(oShiftProTol)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::HasAParticularTolElem(CAT_VARIANT_BOOL & oHasAParTolElem) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAParticularTolElem(oHasAParTolElem)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::ParticularTolElem(CATIAParticularTolElem *& oParTolElem) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ParticularTolElem(oParTolElem)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::HasAFreeState(CAT_VARIANT_BOOL & oHasAFreeState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAFreeState(oHasAFreeState)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::FreeState(CATIAFreeState *& oFreeState) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FreeState(oFreeState)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::IsACompositeTolerance(CAT_VARIANT_BOOL & oIsACompTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsACompositeTolerance(oIsACompTol)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::CompositeTolerance(CATIACompositeTolerance *& oCompTol) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CompositeTolerance(oCompTol)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::IsAProjectedToleranceZone(CAT_VARIANT_BOOL & oIsAProjTolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAProjectedToleranceZone(oIsAProjTolZone)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::ProjectedToleranceZone(CATIAProjectedToleranceZone *& oProjTolZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProjectedToleranceZone(oProjTolZone)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::HasACenteredElement(CAT_VARIANT_BOOL & oHasCenterElt) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasACenteredElement(oHasCenterElt)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::MedianFeature(CATIAMedianFeature *& oMedianFeat) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MedianFeature(oMedianFeat)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::IsAppliedOnMultipleEntities(CAT_VARIANT_BOOL & oIsAPattern) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAppliedOnMultipleEntities(oIsAPattern)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::NxDisplay(CATIASemanticGDTNxDisplay *& oNxDisplay) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NxDisplay(oNxDisplay)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::HasAFrameExtension(CATLONG & oFrameExtentNumber) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAFrameExtension(oFrameExtentNumber)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::FrameExtensions(CATLONG iFrameExtentIndex, CATIASemanticGDTFrameExtension *& oAuxiliaryFeatures) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FrameExtensions(iFrameExtentIndex,oAuxiliaryFeatures)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::IsAnAssociatedRefFrame(CAT_VARIANT_BOOL & oIsAnAssRefFra) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAnAssociatedRefFrame(oIsAnAssRefFra)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::AssociatedRefFrame(CATIAAssociatedRefFrame *& oAssRefFra) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AssociatedRefFrame(oAssRefFra)); \
} \
HRESULT __stdcall  TIECATIASemanticGDT##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDT##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDT##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDT##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDT##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDT##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASemanticGDT(classe) \
 \
 \
declare_TIE_CATIASemanticGDT(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDT##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDT,"CATIASemanticGDT",CATIASemanticGDT::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDT(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASemanticGDT, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDT##classe(classe::MetaObject(),CATIASemanticGDT::MetaObject(),(void *)CreateTIECATIASemanticGDT##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASemanticGDT(classe) \
 \
 \
declare_TIE_CATIASemanticGDT(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDT##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDT,"CATIASemanticGDT",CATIASemanticGDT::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDT(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASemanticGDT, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDT##classe(classe::MetaObject(),CATIASemanticGDT::MetaObject(),(void *)CreateTIECATIASemanticGDT##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASemanticGDT(classe) TIE_CATIASemanticGDT(classe)
#else
#define BOA_CATIASemanticGDT(classe) CATImplementBOA(CATIASemanticGDT, classe)
#endif

#endif
