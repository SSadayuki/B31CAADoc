#ifndef __TIE_CATIAAnnotation2
#define __TIE_CATIAAnnotation2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotation2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotation2 */
#define declare_TIE_CATIAAnnotation2(classe) \
 \
 \
class TIECATIAAnnotation2##classe : public CATIAAnnotation2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotation2, classe) \
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
      virtual HRESULT __stdcall Text(CATIAText *& oText); \
      virtual HRESULT __stdcall Dimension3D(CATIADimension3D *& oDim); \
      virtual HRESULT __stdcall FlagNote(CATIAFlagNote *& oFlagNote); \
      virtual HRESULT __stdcall Roughness(CATIARoughness *& oRoughness); \
      virtual HRESULT __stdcall Noa(CATIANoa *& oNoa); \
      virtual HRESULT __stdcall ReferenceFrame(CATIAReferenceFrame *& oRefFrame); \
      virtual HRESULT __stdcall DatumSimple(CATIADatumSimple *& oDatSimple); \
      virtual HRESULT __stdcall DatumTarget(CATIADatumTarget *& oDatTarget); \
      virtual HRESULT __stdcall IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot); \
      virtual HRESULT __stdcall DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot); \
      virtual HRESULT __stdcall NonSemanticDimension(CATIANonSemanticDimension *& oNonSemanticDim); \
      virtual HRESULT __stdcall NonSemanticDatum(CATIANonSemanticDatum *& oNonSemanticDatum); \
      virtual HRESULT __stdcall NonSemanticDatumTarget(CATIANonSemanticDatumTarget *& oNonSemanticDatumTarget); \
      virtual HRESULT __stdcall NonSemanticGDT(CATIANonSemanticGDT *& oNonSemanticGDT); \
      virtual HRESULT __stdcall SemanticGDT(CATIASemanticGDT *& oSemanticGDT); \
      virtual HRESULT __stdcall GetSurfacesCount(CATLONG & oInstanceCount); \
      virtual HRESULT __stdcall GetSurfaces(CATSafeArrayVariant & oSafeArray); \
      virtual HRESULT __stdcall Weld(CATIAWeld *& oRoughness); \
      virtual HRESULT __stdcall HasAVisualizationDimension(CAT_VARIANT_BOOL & oDimVisuExist); \
      virtual HRESULT __stdcall VisualizationDimension(CATIADimension3D *& oDim); \
      virtual HRESULT __stdcall Coordinatedimension(CATIACoordDim *& oCoorddim); \
      virtual HRESULT __stdcall IsAConsumableAnnotation(CAT_VARIANT_BOOL & oIsAConsumableAnnot); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotation2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_SuperType(CATBSTR & oSuperType); \
virtual HRESULT __stdcall get_TPSStatus(CATBSTR & oStatus); \
virtual HRESULT __stdcall put_Z(double iZ); \
virtual HRESULT __stdcall SetXY(double iX, double iY); \
virtual HRESULT __stdcall TransfertToView(CATIATPSView * iView); \
virtual HRESULT __stdcall ModifyVisu(); \
virtual HRESULT __stdcall AddLeader(); \
virtual HRESULT __stdcall Text(CATIAText *& oText); \
virtual HRESULT __stdcall Dimension3D(CATIADimension3D *& oDim); \
virtual HRESULT __stdcall FlagNote(CATIAFlagNote *& oFlagNote); \
virtual HRESULT __stdcall Roughness(CATIARoughness *& oRoughness); \
virtual HRESULT __stdcall Noa(CATIANoa *& oNoa); \
virtual HRESULT __stdcall ReferenceFrame(CATIAReferenceFrame *& oRefFrame); \
virtual HRESULT __stdcall DatumSimple(CATIADatumSimple *& oDatSimple); \
virtual HRESULT __stdcall DatumTarget(CATIADatumTarget *& oDatTarget); \
virtual HRESULT __stdcall IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot); \
virtual HRESULT __stdcall DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot); \
virtual HRESULT __stdcall NonSemanticDimension(CATIANonSemanticDimension *& oNonSemanticDim); \
virtual HRESULT __stdcall NonSemanticDatum(CATIANonSemanticDatum *& oNonSemanticDatum); \
virtual HRESULT __stdcall NonSemanticDatumTarget(CATIANonSemanticDatumTarget *& oNonSemanticDatumTarget); \
virtual HRESULT __stdcall NonSemanticGDT(CATIANonSemanticGDT *& oNonSemanticGDT); \
virtual HRESULT __stdcall SemanticGDT(CATIASemanticGDT *& oSemanticGDT); \
virtual HRESULT __stdcall GetSurfacesCount(CATLONG & oInstanceCount); \
virtual HRESULT __stdcall GetSurfaces(CATSafeArrayVariant & oSafeArray); \
virtual HRESULT __stdcall Weld(CATIAWeld *& oRoughness); \
virtual HRESULT __stdcall HasAVisualizationDimension(CAT_VARIANT_BOOL & oDimVisuExist); \
virtual HRESULT __stdcall VisualizationDimension(CATIADimension3D *& oDim); \
virtual HRESULT __stdcall Coordinatedimension(CATIACoordDim *& oCoorddim); \
virtual HRESULT __stdcall IsAConsumableAnnotation(CAT_VARIANT_BOOL & oIsAConsumableAnnot); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotation2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SuperType(CATBSTR & oSuperType) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)get_SuperType(oSuperType)); \
} \
HRESULT __stdcall  ENVTIEName::get_TPSStatus(CATBSTR & oStatus) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)get_TPSStatus(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_Z(double iZ) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)put_Z(iZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetXY(double iX, double iY) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)SetXY(iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::TransfertToView(CATIATPSView * iView) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)TransfertToView(iView)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyVisu() \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)ModifyVisu()); \
} \
HRESULT __stdcall  ENVTIEName::AddLeader() \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)AddLeader()); \
} \
HRESULT __stdcall  ENVTIEName::Text(CATIAText *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::Dimension3D(CATIADimension3D *& oDim) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)Dimension3D(oDim)); \
} \
HRESULT __stdcall  ENVTIEName::FlagNote(CATIAFlagNote *& oFlagNote) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)FlagNote(oFlagNote)); \
} \
HRESULT __stdcall  ENVTIEName::Roughness(CATIARoughness *& oRoughness) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)Roughness(oRoughness)); \
} \
HRESULT __stdcall  ENVTIEName::Noa(CATIANoa *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)Noa(oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::ReferenceFrame(CATIAReferenceFrame *& oRefFrame) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)ReferenceFrame(oRefFrame)); \
} \
HRESULT __stdcall  ENVTIEName::DatumSimple(CATIADatumSimple *& oDatSimple) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)DatumSimple(oDatSimple)); \
} \
HRESULT __stdcall  ENVTIEName::DatumTarget(CATIADatumTarget *& oDatTarget) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)DatumTarget(oDatTarget)); \
} \
HRESULT __stdcall  ENVTIEName::IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)IsADefaultAnnotation(oIsADefAnnot)); \
} \
HRESULT __stdcall  ENVTIEName::DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)DefaultAnnotation(oDefAnnot)); \
} \
HRESULT __stdcall  ENVTIEName::NonSemanticDimension(CATIANonSemanticDimension *& oNonSemanticDim) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)NonSemanticDimension(oNonSemanticDim)); \
} \
HRESULT __stdcall  ENVTIEName::NonSemanticDatum(CATIANonSemanticDatum *& oNonSemanticDatum) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)NonSemanticDatum(oNonSemanticDatum)); \
} \
HRESULT __stdcall  ENVTIEName::NonSemanticDatumTarget(CATIANonSemanticDatumTarget *& oNonSemanticDatumTarget) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)NonSemanticDatumTarget(oNonSemanticDatumTarget)); \
} \
HRESULT __stdcall  ENVTIEName::NonSemanticGDT(CATIANonSemanticGDT *& oNonSemanticGDT) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)NonSemanticGDT(oNonSemanticGDT)); \
} \
HRESULT __stdcall  ENVTIEName::SemanticGDT(CATIASemanticGDT *& oSemanticGDT) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)SemanticGDT(oSemanticGDT)); \
} \
HRESULT __stdcall  ENVTIEName::GetSurfacesCount(CATLONG & oInstanceCount) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)GetSurfacesCount(oInstanceCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetSurfaces(CATSafeArrayVariant & oSafeArray) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)GetSurfaces(oSafeArray)); \
} \
HRESULT __stdcall  ENVTIEName::Weld(CATIAWeld *& oRoughness) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)Weld(oRoughness)); \
} \
HRESULT __stdcall  ENVTIEName::HasAVisualizationDimension(CAT_VARIANT_BOOL & oDimVisuExist) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)HasAVisualizationDimension(oDimVisuExist)); \
} \
HRESULT __stdcall  ENVTIEName::VisualizationDimension(CATIADimension3D *& oDim) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)VisualizationDimension(oDim)); \
} \
HRESULT __stdcall  ENVTIEName::Coordinatedimension(CATIACoordDim *& oCoorddim) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)Coordinatedimension(oCoorddim)); \
} \
HRESULT __stdcall  ENVTIEName::IsAConsumableAnnotation(CAT_VARIANT_BOOL & oIsAConsumableAnnot) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)IsAConsumableAnnotation(oIsAConsumableAnnot)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotation2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotation2(classe)    TIECATIAAnnotation2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotation2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotation2, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotation2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotation2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotation2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotation2, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotation2##classe::get_Type(CATBSTR & oType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::get_SuperType(CATBSTR & oSuperType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SuperType(oSuperType)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::get_TPSStatus(CATBSTR & oStatus) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TPSStatus(oStatus)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::put_Z(double iZ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Z(iZ)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::SetXY(double iX, double iY) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetXY(iX,iY)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::TransfertToView(CATIATPSView * iView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TransfertToView(iView)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::ModifyVisu() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyVisu()); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::AddLeader() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddLeader()); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::Text(CATIAText *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Text(oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::Dimension3D(CATIADimension3D *& oDim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dimension3D(oDim)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::FlagNote(CATIAFlagNote *& oFlagNote) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlagNote(oFlagNote)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::Roughness(CATIARoughness *& oRoughness) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Roughness(oRoughness)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::Noa(CATIANoa *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Noa(oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::ReferenceFrame(CATIAReferenceFrame *& oRefFrame) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReferenceFrame(oRefFrame)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::DatumSimple(CATIADatumSimple *& oDatSimple) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DatumSimple(oDatSimple)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::DatumTarget(CATIADatumTarget *& oDatTarget) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DatumTarget(oDatTarget)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::IsADefaultAnnotation(CAT_VARIANT_BOOL & oIsADefAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsADefaultAnnotation(oIsADefAnnot)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::DefaultAnnotation(CATIADefaultAnnotation *& oDefAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefaultAnnotation(oDefAnnot)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::NonSemanticDimension(CATIANonSemanticDimension *& oNonSemanticDim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NonSemanticDimension(oNonSemanticDim)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::NonSemanticDatum(CATIANonSemanticDatum *& oNonSemanticDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NonSemanticDatum(oNonSemanticDatum)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::NonSemanticDatumTarget(CATIANonSemanticDatumTarget *& oNonSemanticDatumTarget) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NonSemanticDatumTarget(oNonSemanticDatumTarget)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::NonSemanticGDT(CATIANonSemanticGDT *& oNonSemanticGDT) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NonSemanticGDT(oNonSemanticGDT)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::SemanticGDT(CATIASemanticGDT *& oSemanticGDT) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SemanticGDT(oSemanticGDT)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::GetSurfacesCount(CATLONG & oInstanceCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfacesCount(oInstanceCount)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::GetSurfaces(CATSafeArrayVariant & oSafeArray) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfaces(oSafeArray)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::Weld(CATIAWeld *& oRoughness) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Weld(oRoughness)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::HasAVisualizationDimension(CAT_VARIANT_BOOL & oDimVisuExist) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAVisualizationDimension(oDimVisuExist)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::VisualizationDimension(CATIADimension3D *& oDim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->VisualizationDimension(oDim)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::Coordinatedimension(CATIACoordDim *& oCoorddim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Coordinatedimension(oCoorddim)); \
} \
HRESULT __stdcall  TIECATIAAnnotation2##classe::IsAConsumableAnnotation(CAT_VARIANT_BOOL & oIsAConsumableAnnot) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAConsumableAnnotation(oIsAConsumableAnnot)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotation2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotation2(classe) \
 \
 \
declare_TIE_CATIAAnnotation2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotation2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotation2,"CATIAAnnotation2",CATIAAnnotation2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotation2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotation2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotation2##classe(classe::MetaObject(),CATIAAnnotation2::MetaObject(),(void *)CreateTIECATIAAnnotation2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotation2(classe) \
 \
 \
declare_TIE_CATIAAnnotation2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotation2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotation2,"CATIAAnnotation2",CATIAAnnotation2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotation2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotation2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotation2##classe(classe::MetaObject(),CATIAAnnotation2::MetaObject(),(void *)CreateTIECATIAAnnotation2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotation2(classe) TIE_CATIAAnnotation2(classe)
#else
#define BOA_CATIAAnnotation2(classe) CATImplementBOA(CATIAAnnotation2, classe)
#endif

#endif
