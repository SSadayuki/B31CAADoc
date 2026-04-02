#ifndef __TIE_CATIADimension3D
#define __TIE_CATIADimension3D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIADimension3D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADimension3D */
#define declare_TIE_CATIADimension3D(classe) \
 \
 \
class TIECATIADimension3D##classe : public CATIADimension3D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADimension3D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Get2dAnnot(CATIADrawingDimension *& oDim); \
      virtual HRESULT __stdcall HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim); \
      virtual HRESULT __stdcall DimensionLimit(CATIADimensionLimit *& oDimLim); \
      virtual HRESULT __stdcall IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt); \
      virtual HRESULT __stdcall DimensionPattern(CATIADimensionPattern *& oDimPatt); \
      virtual HRESULT __stdcall HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond); \
      virtual HRESULT __stdcall EnvelopCondition(CATIAEnvelopCondition *& oEnvCond); \
      virtual HRESULT __stdcall HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad); \
      virtual HRESULT __stdcall ControledRadius(CATIAControledRadius *& oContRadius); \
      virtual HRESULT __stdcall IsAContinuousFeatureApplied(CAT_VARIANT_BOOL & oIsACFDim); \
      virtual HRESULT __stdcall MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADimension3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Get2dAnnot(CATIADrawingDimension *& oDim); \
virtual HRESULT __stdcall HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim); \
virtual HRESULT __stdcall DimensionLimit(CATIADimensionLimit *& oDimLim); \
virtual HRESULT __stdcall IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt); \
virtual HRESULT __stdcall DimensionPattern(CATIADimensionPattern *& oDimPatt); \
virtual HRESULT __stdcall HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond); \
virtual HRESULT __stdcall EnvelopCondition(CATIAEnvelopCondition *& oEnvCond); \
virtual HRESULT __stdcall HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad); \
virtual HRESULT __stdcall ControledRadius(CATIAControledRadius *& oContRadius); \
virtual HRESULT __stdcall IsAContinuousFeatureApplied(CAT_VARIANT_BOOL & oIsACFDim); \
virtual HRESULT __stdcall MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADimension3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Get2dAnnot(CATIADrawingDimension *& oDim) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)Get2dAnnot(oDim)); \
} \
HRESULT __stdcall  ENVTIEName::HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)HasDimensionLimit(oHasDimLim)); \
} \
HRESULT __stdcall  ENVTIEName::DimensionLimit(CATIADimensionLimit *& oDimLim) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)DimensionLimit(oDimLim)); \
} \
HRESULT __stdcall  ENVTIEName::IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)IsADimensionPattern(oIsADimPatt)); \
} \
HRESULT __stdcall  ENVTIEName::DimensionPattern(CATIADimensionPattern *& oDimPatt) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)DimensionPattern(oDimPatt)); \
} \
HRESULT __stdcall  ENVTIEName::HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)HasAnEnvelopCondition(oHasEnvCond)); \
} \
HRESULT __stdcall  ENVTIEName::EnvelopCondition(CATIAEnvelopCondition *& oEnvCond) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)EnvelopCondition(oEnvCond)); \
} \
HRESULT __stdcall  ENVTIEName::HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)HasAControledRadius(oHasConRad)); \
} \
HRESULT __stdcall  ENVTIEName::ControledRadius(CATIAControledRadius *& oContRadius) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)ControledRadius(oContRadius)); \
} \
HRESULT __stdcall  ENVTIEName::IsAContinuousFeatureApplied(CAT_VARIANT_BOOL & oIsACFDim) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)IsAContinuousFeatureApplied(oIsACFDim)); \
} \
HRESULT __stdcall  ENVTIEName::MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)MoveValue(X,Y,SubPart,DimAngleBehavior)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADimension3D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADimension3D(classe)    TIECATIADimension3D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADimension3D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADimension3D, classe) \
 \
 \
CATImplementTIEMethods(CATIADimension3D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADimension3D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADimension3D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADimension3D, classe) \
 \
HRESULT __stdcall  TIECATIADimension3D##classe::Get2dAnnot(CATIADrawingDimension *& oDim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2dAnnot(oDim)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasDimensionLimit(oHasDimLim)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::DimensionLimit(CATIADimensionLimit *& oDimLim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DimensionLimit(oDimLim)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::IsADimensionPattern(CAT_VARIANT_BOOL & oIsADimPatt) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsADimensionPattern(oIsADimPatt)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::DimensionPattern(CATIADimensionPattern *& oDimPatt) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DimensionPattern(oDimPatt)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::HasAnEnvelopCondition(CAT_VARIANT_BOOL & oHasEnvCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAnEnvelopCondition(oHasEnvCond)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::EnvelopCondition(CATIAEnvelopCondition *& oEnvCond) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnvelopCondition(oEnvCond)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::HasAControledRadius(CAT_VARIANT_BOOL & oHasConRad) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAControledRadius(oHasConRad)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::ControledRadius(CATIAControledRadius *& oContRadius) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ControledRadius(oContRadius)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::IsAContinuousFeatureApplied(CAT_VARIANT_BOOL & oIsACFDim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAContinuousFeatureApplied(oIsACFDim)); \
} \
HRESULT __stdcall  TIECATIADimension3D##classe::MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MoveValue(X,Y,SubPart,DimAngleBehavior)); \
} \
HRESULT  __stdcall  TIECATIADimension3D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIADimension3D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIADimension3D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADimension3D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADimension3D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADimension3D(classe) \
 \
 \
declare_TIE_CATIADimension3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADimension3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADimension3D,"CATIADimension3D",CATIADimension3D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADimension3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADimension3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADimension3D##classe(classe::MetaObject(),CATIADimension3D::MetaObject(),(void *)CreateTIECATIADimension3D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADimension3D(classe) \
 \
 \
declare_TIE_CATIADimension3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADimension3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADimension3D,"CATIADimension3D",CATIADimension3D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADimension3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADimension3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADimension3D##classe(classe::MetaObject(),CATIADimension3D::MetaObject(),(void *)CreateTIECATIADimension3D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADimension3D(classe) TIE_CATIADimension3D(classe)
#else
#define BOA_CATIADimension3D(classe) CATImplementBOA(CATIADimension3D, classe)
#endif

#endif
