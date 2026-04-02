#ifndef __TIE_CATIAAnnotationFactory2
#define __TIE_CATIAAnnotationFactory2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotationFactory2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotationFactory2 */
#define declare_TIE_CATIAAnnotationFactory2(classe) \
 \
 \
class TIECATIAAnnotationFactory2##classe : public CATIAAnnotationFactory2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotationFactory2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateText(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oText); \
      virtual HRESULT __stdcall CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation2 * iAnnot, CATIAAnnotation2 *& oText); \
      virtual HRESULT __stdcall CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oText); \
      virtual HRESULT __stdcall CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oDatum); \
      virtual HRESULT __stdcall CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oDatum); \
      virtual HRESULT __stdcall CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oRoughness); \
      virtual HRESULT __stdcall CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oFlagNote); \
      virtual HRESULT __stdcall CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation2 * iDatum, CATIAAnnotation2 *& oDatum); \
      virtual HRESULT __stdcall CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension); \
      virtual HRESULT __stdcall CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension); \
      virtual HRESULT __stdcall CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oTolWoDRF); \
      virtual HRESULT __stdcall CreateDatumReferenceFrame(CATIAAnnotation2 *& opDRF); \
      virtual HRESULT __stdcall CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 * iDRF, CATIAAnnotation2 *& oTolWiDRF); \
      virtual HRESULT __stdcall InstanciateNOA(CATIAAnnotation2 * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa); \
      virtual HRESULT __stdcall CreateTextNOA(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa); \
      virtual HRESULT __stdcall CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIAAnnotation2 *& oNoa); \
      virtual HRESULT __stdcall CreateDittoNOA(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIADrawingComponent * iDitto, CAT_VARIANT_BOOL iStickToGeometryOption, CATIAAnnotation2 *& oNoa); \
      virtual HRESULT __stdcall CreateWeld(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oWeld); \
      virtual HRESULT __stdcall CreateGDT(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oGDT); \
      virtual HRESULT __stdcall CreateCoordDimension(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oCoorddimension); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotationFactory2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateText(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oText); \
virtual HRESULT __stdcall CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation2 * iAnnot, CATIAAnnotation2 *& oText); \
virtual HRESULT __stdcall CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oText); \
virtual HRESULT __stdcall CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oDatum); \
virtual HRESULT __stdcall CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oDatum); \
virtual HRESULT __stdcall CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oRoughness); \
virtual HRESULT __stdcall CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oFlagNote); \
virtual HRESULT __stdcall CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation2 * iDatum, CATIAAnnotation2 *& oDatum); \
virtual HRESULT __stdcall CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension); \
virtual HRESULT __stdcall CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension); \
virtual HRESULT __stdcall CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oTolWoDRF); \
virtual HRESULT __stdcall CreateDatumReferenceFrame(CATIAAnnotation2 *& opDRF); \
virtual HRESULT __stdcall CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 * iDRF, CATIAAnnotation2 *& oTolWiDRF); \
virtual HRESULT __stdcall InstanciateNOA(CATIAAnnotation2 * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa); \
virtual HRESULT __stdcall CreateTextNOA(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa); \
virtual HRESULT __stdcall CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIAAnnotation2 *& oNoa); \
virtual HRESULT __stdcall CreateDittoNOA(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIADrawingComponent * iDitto, CAT_VARIANT_BOOL iStickToGeometryOption, CATIAAnnotation2 *& oNoa); \
virtual HRESULT __stdcall CreateWeld(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oWeld); \
virtual HRESULT __stdcall CreateGDT(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oGDT); \
virtual HRESULT __stdcall CreateCoordDimension(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oCoorddimension); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotationFactory2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateText(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateText(iSurf,oText)); \
} \
HRESULT __stdcall  ENVTIEName::CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation2 * iAnnot, CATIAAnnotation2 *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateTextOnAnnot(iText,iAnnot,oText)); \
} \
HRESULT __stdcall  ENVTIEName::CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateEvoluateText(iSurf,iX,iY,iZ,iWithLeader,oText)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oDatum) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateDatum(iSurf,oDatum)); \
} \
HRESULT __stdcall  ENVTIEName::CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oDatum) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateEvoluateDatum(iSurf,iX,iY,iZ,iWithLeader,oDatum)); \
} \
HRESULT __stdcall  ENVTIEName::CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oRoughness) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateRoughness(iSurf,oRoughness)); \
} \
HRESULT __stdcall  ENVTIEName::CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oFlagNote) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateFlagNote(iSurf,oFlagNote)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation2 * iDatum, CATIAAnnotation2 *& oDatum) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateDatumTarget(iSurf,iDatum,oDatum)); \
} \
HRESULT __stdcall  ENVTIEName::CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateNonSemanticDimension(iSurf,iType,iSubType,oDimension)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateSemanticDimension(iSurf,iType,iSubType,oDimension)); \
} \
HRESULT __stdcall  ENVTIEName::CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oTolWoDRF) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateToleranceWithoutDRF(iIndex,iSurf,oTolWoDRF)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDatumReferenceFrame(CATIAAnnotation2 *& opDRF) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateDatumReferenceFrame(opDRF)); \
} \
HRESULT __stdcall  ENVTIEName::CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 * iDRF, CATIAAnnotation2 *& oTolWiDRF) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateToleranceWithDRF(iIndex,iSurf,iDRF,oTolWiDRF)); \
} \
HRESULT __stdcall  ENVTIEName::InstanciateNOA(CATIAAnnotation2 * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)InstanciateNOA(iNoa,iSurf,oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::CreateTextNOA(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateTextNOA(iSurf,oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIAAnnotation2 *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateTextNoteObjectAttribute(iSurf,iNOAType,oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDittoNOA(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIADrawingComponent * iDitto, CAT_VARIANT_BOOL iStickToGeometryOption, CATIAAnnotation2 *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateDittoNOA(iSurf,iNOAType,iDitto,iStickToGeometryOption,oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::CreateWeld(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oWeld) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateWeld(iSurf,oWeld)); \
} \
HRESULT __stdcall  ENVTIEName::CreateGDT(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oGDT) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateGDT(iSurf,oGDT)); \
} \
HRESULT __stdcall  ENVTIEName::CreateCoordDimension(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oCoorddimension) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)CreateCoordDimension(iSurf,oCoorddimension)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotationFactory2(classe)    TIECATIAAnnotationFactory2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotationFactory2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotationFactory2, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotationFactory2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotationFactory2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotationFactory2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotationFactory2, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateText(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateText(iSurf,oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation2 * iAnnot, CATIAAnnotation2 *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTextOnAnnot(iText,iAnnot,oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateEvoluateText(iSurf,iX,iY,iZ,iWithLeader,oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDatum(iSurf,oDatum)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation2 *& oDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateEvoluateDatum(iSurf,iX,iY,iZ,iWithLeader,oDatum)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oRoughness) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRoughness(iSurf,oRoughness)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oFlagNote) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateFlagNote(iSurf,oFlagNote)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation2 * iDatum, CATIAAnnotation2 *& oDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDatumTarget(iSurf,iDatum,oDatum)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateNonSemanticDimension(iSurf,iType,iSubType,oDimension)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation2 *& oDimension) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSemanticDimension(iSurf,iType,iSubType,oDimension)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oTolWoDRF) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToleranceWithoutDRF(iIndex,iSurf,oTolWoDRF)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateDatumReferenceFrame(CATIAAnnotation2 *& opDRF) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDatumReferenceFrame(opDRF)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation2 * iDRF, CATIAAnnotation2 *& oTolWiDRF) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToleranceWithDRF(iIndex,iSurf,iDRF,oTolWiDRF)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::InstanciateNOA(CATIAAnnotation2 * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InstanciateNOA(iNoa,iSurf,oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateTextNOA(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTextNOA(iSurf,oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIAAnnotation2 *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTextNoteObjectAttribute(iSurf,iNOAType,oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateDittoNOA(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIADrawingComponent * iDitto, CAT_VARIANT_BOOL iStickToGeometryOption, CATIAAnnotation2 *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDittoNOA(iSurf,iNOAType,iDitto,iStickToGeometryOption,oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateWeld(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oWeld) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWeld(iSurf,oWeld)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateGDT(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oGDT) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGDT(iSurf,oGDT)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory2##classe::CreateCoordDimension(CATIAUserSurface * iSurf, CATIAAnnotation2 *& oCoorddimension) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCoordDimension(iSurf,oCoorddimension)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotationFactory2(classe) \
 \
 \
declare_TIE_CATIAAnnotationFactory2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationFactory2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationFactory2,"CATIAAnnotationFactory2",CATIAAnnotationFactory2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationFactory2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotationFactory2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationFactory2##classe(classe::MetaObject(),CATIAAnnotationFactory2::MetaObject(),(void *)CreateTIECATIAAnnotationFactory2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotationFactory2(classe) \
 \
 \
declare_TIE_CATIAAnnotationFactory2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationFactory2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationFactory2,"CATIAAnnotationFactory2",CATIAAnnotationFactory2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationFactory2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotationFactory2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationFactory2##classe(classe::MetaObject(),CATIAAnnotationFactory2::MetaObject(),(void *)CreateTIECATIAAnnotationFactory2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotationFactory2(classe) TIE_CATIAAnnotationFactory2(classe)
#else
#define BOA_CATIAAnnotationFactory2(classe) CATImplementBOA(CATIAAnnotationFactory2, classe)
#endif

#endif
