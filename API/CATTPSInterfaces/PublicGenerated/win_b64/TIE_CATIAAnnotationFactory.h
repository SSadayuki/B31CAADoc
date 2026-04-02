#ifndef __TIE_CATIAAnnotationFactory
#define __TIE_CATIAAnnotationFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotationFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotationFactory */
#define declare_TIE_CATIAAnnotationFactory(classe) \
 \
 \
class TIECATIAAnnotationFactory##classe : public CATIAAnnotationFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotationFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateText(CATIAUserSurface * iSurf, CATIAAnnotation *& oText); \
      virtual HRESULT __stdcall CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation * iAnnot, CATIAAnnotation *& oText); \
      virtual HRESULT __stdcall CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oText); \
      virtual HRESULT __stdcall CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation *& oDatum); \
      virtual HRESULT __stdcall CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oDatum); \
      virtual HRESULT __stdcall CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation *& oRoughness); \
      virtual HRESULT __stdcall CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation *& oFlagNote); \
      virtual HRESULT __stdcall CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation * iDatum, CATIAAnnotation *& oDatum); \
      virtual HRESULT __stdcall CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iDimensionType, const CATVariant & iLinearDimSubType, CATIAAnnotation *& oDimension); \
      virtual HRESULT __stdcall CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation *& oDimension); \
      virtual HRESULT __stdcall CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation *& oTolWoDRF); \
      virtual HRESULT __stdcall CreateDatumReferenceFrame(CATIAAnnotation *& opDRF); \
      virtual HRESULT __stdcall CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation * iDRF, CATIAAnnotation *& oTolWiDRF); \
      virtual HRESULT __stdcall InstanciateNOA(CATIANoa * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation *& oNoa); \
      virtual HRESULT __stdcall CreateTextNOA(CATIAUserSurface * iSurf, CATIANoa *& oNoa); \
      virtual HRESULT __stdcall CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIANoa *& oNoa); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotationFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateText(CATIAUserSurface * iSurf, CATIAAnnotation *& oText); \
virtual HRESULT __stdcall CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation * iAnnot, CATIAAnnotation *& oText); \
virtual HRESULT __stdcall CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oText); \
virtual HRESULT __stdcall CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation *& oDatum); \
virtual HRESULT __stdcall CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oDatum); \
virtual HRESULT __stdcall CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation *& oRoughness); \
virtual HRESULT __stdcall CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation *& oFlagNote); \
virtual HRESULT __stdcall CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation * iDatum, CATIAAnnotation *& oDatum); \
virtual HRESULT __stdcall CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iDimensionType, const CATVariant & iLinearDimSubType, CATIAAnnotation *& oDimension); \
virtual HRESULT __stdcall CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation *& oDimension); \
virtual HRESULT __stdcall CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation *& oTolWoDRF); \
virtual HRESULT __stdcall CreateDatumReferenceFrame(CATIAAnnotation *& opDRF); \
virtual HRESULT __stdcall CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation * iDRF, CATIAAnnotation *& oTolWiDRF); \
virtual HRESULT __stdcall InstanciateNOA(CATIANoa * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation *& oNoa); \
virtual HRESULT __stdcall CreateTextNOA(CATIAUserSurface * iSurf, CATIANoa *& oNoa); \
virtual HRESULT __stdcall CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIANoa *& oNoa); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotationFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateText(CATIAUserSurface * iSurf, CATIAAnnotation *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateText(iSurf,oText)); \
} \
HRESULT __stdcall  ENVTIEName::CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation * iAnnot, CATIAAnnotation *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateTextOnAnnot(iText,iAnnot,oText)); \
} \
HRESULT __stdcall  ENVTIEName::CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oText) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateEvoluateText(iSurf,iX,iY,iZ,iWithLeader,oText)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation *& oDatum) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateDatum(iSurf,oDatum)); \
} \
HRESULT __stdcall  ENVTIEName::CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oDatum) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateEvoluateDatum(iSurf,iX,iY,iZ,iWithLeader,oDatum)); \
} \
HRESULT __stdcall  ENVTIEName::CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation *& oRoughness) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateRoughness(iSurf,oRoughness)); \
} \
HRESULT __stdcall  ENVTIEName::CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation *& oFlagNote) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateFlagNote(iSurf,oFlagNote)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation * iDatum, CATIAAnnotation *& oDatum) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateDatumTarget(iSurf,iDatum,oDatum)); \
} \
HRESULT __stdcall  ENVTIEName::CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iDimensionType, const CATVariant & iLinearDimSubType, CATIAAnnotation *& oDimension) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateNonSemanticDimension(iSurf,iDimensionType,iLinearDimSubType,oDimension)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation *& oDimension) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateSemanticDimension(iSurf,iType,iSubType,oDimension)); \
} \
HRESULT __stdcall  ENVTIEName::CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation *& oTolWoDRF) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateToleranceWithoutDRF(iIndex,iSurf,oTolWoDRF)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDatumReferenceFrame(CATIAAnnotation *& opDRF) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateDatumReferenceFrame(opDRF)); \
} \
HRESULT __stdcall  ENVTIEName::CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation * iDRF, CATIAAnnotation *& oTolWiDRF) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateToleranceWithDRF(iIndex,iSurf,iDRF,oTolWiDRF)); \
} \
HRESULT __stdcall  ENVTIEName::InstanciateNOA(CATIANoa * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)InstanciateNOA(iNoa,iSurf,oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::CreateTextNOA(CATIAUserSurface * iSurf, CATIANoa *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateTextNOA(iSurf,oNoa)); \
} \
HRESULT __stdcall  ENVTIEName::CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIANoa *& oNoa) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)CreateTextNoteObjectAttribute(iSurf,iNOAType,oNoa)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotationFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotationFactory(classe)    TIECATIAAnnotationFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotationFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotationFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotationFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotationFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotationFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotationFactory, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateText(CATIAUserSurface * iSurf, CATIAAnnotation *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateText(iSurf,oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateTextOnAnnot(const CATBSTR & iText, CATIAAnnotation * iAnnot, CATIAAnnotation *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTextOnAnnot(iText,iAnnot,oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateEvoluateText(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateEvoluateText(iSurf,iX,iY,iZ,iWithLeader,oText)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateDatum(CATIAUserSurface * iSurf, CATIAAnnotation *& oDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDatum(iSurf,oDatum)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateEvoluateDatum(CATIAUserSurface * iSurf, double iX, double iY, double iZ, CAT_VARIANT_BOOL iWithLeader, CATIAAnnotation *& oDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateEvoluateDatum(iSurf,iX,iY,iZ,iWithLeader,oDatum)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateRoughness(CATIAUserSurface * iSurf, CATIAAnnotation *& oRoughness) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRoughness(iSurf,oRoughness)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateFlagNote(CATIAUserSurface * iSurf, CATIAAnnotation *& oFlagNote) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateFlagNote(iSurf,oFlagNote)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateDatumTarget(CATIAUserSurface * iSurf, CATIAAnnotation * iDatum, CATIAAnnotation *& oDatum) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDatumTarget(iSurf,iDatum,oDatum)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateNonSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iDimensionType, const CATVariant & iLinearDimSubType, CATIAAnnotation *& oDimension) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateNonSemanticDimension(iSurf,iDimensionType,iLinearDimSubType,oDimension)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateSemanticDimension(CATIAUserSurface * iSurf, const CATVariant & iType, const CATVariant & iSubType, CATIAAnnotation *& oDimension) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSemanticDimension(iSurf,iType,iSubType,oDimension)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateToleranceWithoutDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation *& oTolWoDRF) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToleranceWithoutDRF(iIndex,iSurf,oTolWoDRF)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateDatumReferenceFrame(CATIAAnnotation *& opDRF) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDatumReferenceFrame(opDRF)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateToleranceWithDRF(const CATVariant & iIndex, CATIAUserSurface * iSurf, CATIAAnnotation * iDRF, CATIAAnnotation *& oTolWiDRF) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToleranceWithDRF(iIndex,iSurf,iDRF,oTolWiDRF)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::InstanciateNOA(CATIANoa * iNoa, CATIAUserSurface * iSurf, CATIAAnnotation *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InstanciateNOA(iNoa,iSurf,oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateTextNOA(CATIAUserSurface * iSurf, CATIANoa *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTextNOA(iSurf,oNoa)); \
} \
HRESULT __stdcall  TIECATIAAnnotationFactory##classe::CreateTextNoteObjectAttribute(CATIAUserSurface * iSurf, const CATBSTR & iNOAType, CATIANoa *& oNoa) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTextNoteObjectAttribute(iSurf,iNOAType,oNoa)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotationFactory(classe) \
 \
 \
declare_TIE_CATIAAnnotationFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationFactory,"CATIAAnnotationFactory",CATIAAnnotationFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotationFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationFactory##classe(classe::MetaObject(),CATIAAnnotationFactory::MetaObject(),(void *)CreateTIECATIAAnnotationFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotationFactory(classe) \
 \
 \
declare_TIE_CATIAAnnotationFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationFactory,"CATIAAnnotationFactory",CATIAAnnotationFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotationFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationFactory##classe(classe::MetaObject(),CATIAAnnotationFactory::MetaObject(),(void *)CreateTIECATIAAnnotationFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotationFactory(classe) TIE_CATIAAnnotationFactory(classe)
#else
#define BOA_CATIAAnnotationFactory(classe) CATImplementBOA(CATIAAnnotationFactory, classe)
#endif

#endif
