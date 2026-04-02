#ifndef __TIE_CATIADrawingDimension
#define __TIE_CATIADrawingDimension

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingDimension.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingDimension */
#define declare_TIE_CATIADrawingDimension(classe) \
 \
 \
class TIECATIADrawingDimension##classe : public CATIADrawingDimension \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingDimension, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DimType(CatDimType & oTypeDim); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall get_NbSymb(CATLONG & oNbSymb); \
      virtual HRESULT __stdcall get_NbExtLine(CATLONG & oNbExtline); \
      virtual HRESULT __stdcall get_CumulateMode(CAT_VARIANT_BOOL & oCumulateMode); \
      virtual HRESULT __stdcall get_HalfDimMode(CAT_VARIANT_BOOL & oHalfDimMode); \
      virtual HRESULT __stdcall put_HalfDimMode(CAT_VARIANT_BOOL iHalfDimMode); \
      virtual HRESULT __stdcall get_TrueDimMode(CAT_VARIANT_BOOL & oTrueDimMode); \
      virtual HRESULT __stdcall get_DualValue(CatDimDualDisplay & oDualValue); \
      virtual HRESULT __stdcall put_DualValue(CatDimDualDisplay iDualValue); \
      virtual HRESULT __stdcall get_Forshortened(CAT_VARIANT_BOOL & oForsh); \
      virtual HRESULT __stdcall put_Forshortened(CAT_VARIANT_BOOL iForsh); \
      virtual HRESULT __stdcall get_ValueOrientation(CatDimOrientation & oValueOrient); \
      virtual HRESULT __stdcall put_ValueOrientation(CatDimOrientation iValueOrient); \
      virtual HRESULT __stdcall get_ValueReference(CatDimReference & oValueRef); \
      virtual HRESULT __stdcall put_ValueReference(CatDimReference iValueRef); \
      virtual HRESULT __stdcall get_ValueAngle(double & oValueAng); \
      virtual HRESULT __stdcall put_ValueAngle(double iValueAng); \
      virtual HRESULT __stdcall get_ValueFrame(CatDimFrame & oValueFrame); \
      virtual HRESULT __stdcall put_ValueFrame(CatDimFrame iValueFrame); \
      virtual HRESULT __stdcall get_ValueDisplay(CATLONG & oValueDisplay); \
      virtual HRESULT __stdcall put_ValueDisplay(CATLONG iValueDisplay); \
      virtual HRESULT __stdcall get_ValueAutoMode(CATLONG & oValueAutoMode); \
      virtual HRESULT __stdcall put_ValueAutoMode(CATLONG iValueAutoMode); \
      virtual HRESULT __stdcall get_ValueInOut(CATLONG & oInOut); \
      virtual HRESULT __stdcall put_ValueInOut(CATLONG iInOut); \
      virtual HRESULT __stdcall get_SymbolsSide(CATLONG & oSymbSide); \
      virtual HRESULT __stdcall put_SymbolsSide(CATLONG iSymbSide); \
      virtual HRESULT __stdcall get_DimStatus(CatDimAnalyse & oIsStatus); \
      virtual HRESULT __stdcall GetValue(CATIADrawingDimValue *& oDimValue); \
      virtual HRESULT __stdcall GetDimLine(CATIADrawingDimLine *& oDimLine); \
      virtual HRESULT __stdcall GetDimExtLine(CATIADrawingDimExtLine *& oDimExtLine); \
      virtual HRESULT __stdcall MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior); \
      virtual HRESULT __stdcall RestoreValuePosition(); \
      virtual HRESULT __stdcall GetTolerances(CATLONG & oTolType, CATBSTR & oTolName, CATBSTR & oUpTol, CATBSTR & oLowTol, double & odUpTol, double & odLowTol, CATLONG & oDisplayMode); \
      virtual HRESULT __stdcall SetTolerances(CATLONG iTolType, const CATBSTR & itolName, const CATBSTR & iUpTol, const CATBSTR & iLowTol, double idUpTol, double idLowTol, CATLONG DisplayMode); \
      virtual HRESULT __stdcall GetBoundaryBox(CATSafeArrayVariant & oValues); \
      virtual HRESULT __stdcall get_IsClipped(CAT_VARIANT_BOOL & oIsClipped); \
      virtual HRESULT __stdcall SetClip(double X, double Y, CATLONG iKeptSide); \
      virtual HRESULT __stdcall GetClip(double & X, double & Y, CATLONG & oKeptSide); \
      virtual HRESULT __stdcall Unclip(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingDimension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DimType(CatDimType & oTypeDim); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall get_NbSymb(CATLONG & oNbSymb); \
virtual HRESULT __stdcall get_NbExtLine(CATLONG & oNbExtline); \
virtual HRESULT __stdcall get_CumulateMode(CAT_VARIANT_BOOL & oCumulateMode); \
virtual HRESULT __stdcall get_HalfDimMode(CAT_VARIANT_BOOL & oHalfDimMode); \
virtual HRESULT __stdcall put_HalfDimMode(CAT_VARIANT_BOOL iHalfDimMode); \
virtual HRESULT __stdcall get_TrueDimMode(CAT_VARIANT_BOOL & oTrueDimMode); \
virtual HRESULT __stdcall get_DualValue(CatDimDualDisplay & oDualValue); \
virtual HRESULT __stdcall put_DualValue(CatDimDualDisplay iDualValue); \
virtual HRESULT __stdcall get_Forshortened(CAT_VARIANT_BOOL & oForsh); \
virtual HRESULT __stdcall put_Forshortened(CAT_VARIANT_BOOL iForsh); \
virtual HRESULT __stdcall get_ValueOrientation(CatDimOrientation & oValueOrient); \
virtual HRESULT __stdcall put_ValueOrientation(CatDimOrientation iValueOrient); \
virtual HRESULT __stdcall get_ValueReference(CatDimReference & oValueRef); \
virtual HRESULT __stdcall put_ValueReference(CatDimReference iValueRef); \
virtual HRESULT __stdcall get_ValueAngle(double & oValueAng); \
virtual HRESULT __stdcall put_ValueAngle(double iValueAng); \
virtual HRESULT __stdcall get_ValueFrame(CatDimFrame & oValueFrame); \
virtual HRESULT __stdcall put_ValueFrame(CatDimFrame iValueFrame); \
virtual HRESULT __stdcall get_ValueDisplay(CATLONG & oValueDisplay); \
virtual HRESULT __stdcall put_ValueDisplay(CATLONG iValueDisplay); \
virtual HRESULT __stdcall get_ValueAutoMode(CATLONG & oValueAutoMode); \
virtual HRESULT __stdcall put_ValueAutoMode(CATLONG iValueAutoMode); \
virtual HRESULT __stdcall get_ValueInOut(CATLONG & oInOut); \
virtual HRESULT __stdcall put_ValueInOut(CATLONG iInOut); \
virtual HRESULT __stdcall get_SymbolsSide(CATLONG & oSymbSide); \
virtual HRESULT __stdcall put_SymbolsSide(CATLONG iSymbSide); \
virtual HRESULT __stdcall get_DimStatus(CatDimAnalyse & oIsStatus); \
virtual HRESULT __stdcall GetValue(CATIADrawingDimValue *& oDimValue); \
virtual HRESULT __stdcall GetDimLine(CATIADrawingDimLine *& oDimLine); \
virtual HRESULT __stdcall GetDimExtLine(CATIADrawingDimExtLine *& oDimExtLine); \
virtual HRESULT __stdcall MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior); \
virtual HRESULT __stdcall RestoreValuePosition(); \
virtual HRESULT __stdcall GetTolerances(CATLONG & oTolType, CATBSTR & oTolName, CATBSTR & oUpTol, CATBSTR & oLowTol, double & odUpTol, double & odLowTol, CATLONG & oDisplayMode); \
virtual HRESULT __stdcall SetTolerances(CATLONG iTolType, const CATBSTR & itolName, const CATBSTR & iUpTol, const CATBSTR & iLowTol, double idUpTol, double idLowTol, CATLONG DisplayMode); \
virtual HRESULT __stdcall GetBoundaryBox(CATSafeArrayVariant & oValues); \
virtual HRESULT __stdcall get_IsClipped(CAT_VARIANT_BOOL & oIsClipped); \
virtual HRESULT __stdcall SetClip(double X, double Y, CATLONG iKeptSide); \
virtual HRESULT __stdcall GetClip(double & X, double & Y, CATLONG & oKeptSide); \
virtual HRESULT __stdcall Unclip(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingDimension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DimType(CatDimType & oTypeDim) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_DimType(oTypeDim)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbSymb(CATLONG & oNbSymb) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_NbSymb(oNbSymb)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbExtLine(CATLONG & oNbExtline) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_NbExtLine(oNbExtline)); \
} \
HRESULT __stdcall  ENVTIEName::get_CumulateMode(CAT_VARIANT_BOOL & oCumulateMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_CumulateMode(oCumulateMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_HalfDimMode(CAT_VARIANT_BOOL & oHalfDimMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_HalfDimMode(oHalfDimMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_HalfDimMode(CAT_VARIANT_BOOL iHalfDimMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_HalfDimMode(iHalfDimMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrueDimMode(CAT_VARIANT_BOOL & oTrueDimMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_TrueDimMode(oTrueDimMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_DualValue(CatDimDualDisplay & oDualValue) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_DualValue(oDualValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DualValue(CatDimDualDisplay iDualValue) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_DualValue(iDualValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Forshortened(CAT_VARIANT_BOOL & oForsh) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_Forshortened(oForsh)); \
} \
HRESULT __stdcall  ENVTIEName::put_Forshortened(CAT_VARIANT_BOOL iForsh) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_Forshortened(iForsh)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueOrientation(CatDimOrientation & oValueOrient) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_ValueOrientation(oValueOrient)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueOrientation(CatDimOrientation iValueOrient) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_ValueOrientation(iValueOrient)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueReference(CatDimReference & oValueRef) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_ValueReference(oValueRef)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueReference(CatDimReference iValueRef) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_ValueReference(iValueRef)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueAngle(double & oValueAng) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_ValueAngle(oValueAng)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueAngle(double iValueAng) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_ValueAngle(iValueAng)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueFrame(CatDimFrame & oValueFrame) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_ValueFrame(oValueFrame)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueFrame(CatDimFrame iValueFrame) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_ValueFrame(iValueFrame)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueDisplay(CATLONG & oValueDisplay) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_ValueDisplay(oValueDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueDisplay(CATLONG iValueDisplay) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_ValueDisplay(iValueDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueAutoMode(CATLONG & oValueAutoMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_ValueAutoMode(oValueAutoMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueAutoMode(CATLONG iValueAutoMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_ValueAutoMode(iValueAutoMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueInOut(CATLONG & oInOut) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_ValueInOut(oInOut)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueInOut(CATLONG iInOut) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_ValueInOut(iInOut)); \
} \
HRESULT __stdcall  ENVTIEName::get_SymbolsSide(CATLONG & oSymbSide) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_SymbolsSide(oSymbSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_SymbolsSide(CATLONG iSymbSide) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_SymbolsSide(iSymbSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimStatus(CatDimAnalyse & oIsStatus) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_DimStatus(oIsStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetValue(CATIADrawingDimValue *& oDimValue) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)GetValue(oDimValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLine(CATIADrawingDimLine *& oDimLine) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)GetDimLine(oDimLine)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimExtLine(CATIADrawingDimExtLine *& oDimExtLine) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)GetDimExtLine(oDimExtLine)); \
} \
HRESULT __stdcall  ENVTIEName::MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)MoveValue(X,Y,SubPart,DimAngleBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::RestoreValuePosition() \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)RestoreValuePosition()); \
} \
HRESULT __stdcall  ENVTIEName::GetTolerances(CATLONG & oTolType, CATBSTR & oTolName, CATBSTR & oUpTol, CATBSTR & oLowTol, double & odUpTol, double & odLowTol, CATLONG & oDisplayMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)GetTolerances(oTolType,oTolName,oUpTol,oLowTol,odUpTol,odLowTol,oDisplayMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetTolerances(CATLONG iTolType, const CATBSTR & itolName, const CATBSTR & iUpTol, const CATBSTR & iLowTol, double idUpTol, double idLowTol, CATLONG DisplayMode) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)SetTolerances(iTolType,itolName,iUpTol,iLowTol,idUpTol,idLowTol,DisplayMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundaryBox(CATSafeArrayVariant & oValues) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)GetBoundaryBox(oValues)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsClipped(CAT_VARIANT_BOOL & oIsClipped) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_IsClipped(oIsClipped)); \
} \
HRESULT __stdcall  ENVTIEName::SetClip(double X, double Y, CATLONG iKeptSide) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)SetClip(X,Y,iKeptSide)); \
} \
HRESULT __stdcall  ENVTIEName::GetClip(double & X, double & Y, CATLONG & oKeptSide) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)GetClip(X,Y,oKeptSide)); \
} \
HRESULT __stdcall  ENVTIEName::Unclip() \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)Unclip()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingDimension,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingDimension(classe)    TIECATIADrawingDimension##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingDimension(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingDimension, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingDimension, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingDimension, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingDimension, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingDimension, classe) \
 \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_DimType(CatDimType & oTypeDim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oTypeDim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimType(oTypeDim); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oTypeDim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_NbSymb(CATLONG & oNbSymb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNbSymb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbSymb(oNbSymb); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNbSymb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_NbExtLine(CATLONG & oNbExtline) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNbExtline); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbExtLine(oNbExtline); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNbExtline); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_CumulateMode(CAT_VARIANT_BOOL & oCumulateMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCumulateMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CumulateMode(oCumulateMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCumulateMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_HalfDimMode(CAT_VARIANT_BOOL & oHalfDimMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oHalfDimMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HalfDimMode(oHalfDimMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oHalfDimMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_HalfDimMode(CAT_VARIANT_BOOL iHalfDimMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iHalfDimMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HalfDimMode(iHalfDimMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iHalfDimMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_TrueDimMode(CAT_VARIANT_BOOL & oTrueDimMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oTrueDimMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrueDimMode(oTrueDimMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oTrueDimMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_DualValue(CatDimDualDisplay & oDualValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDualValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DualValue(oDualValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDualValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_DualValue(CatDimDualDisplay iDualValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDualValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DualValue(iDualValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDualValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_Forshortened(CAT_VARIANT_BOOL & oForsh) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oForsh); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Forshortened(oForsh); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oForsh); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_Forshortened(CAT_VARIANT_BOOL iForsh) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iForsh); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Forshortened(iForsh); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iForsh); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_ValueOrientation(CatDimOrientation & oValueOrient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oValueOrient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueOrientation(oValueOrient); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oValueOrient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_ValueOrientation(CatDimOrientation iValueOrient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iValueOrient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueOrientation(iValueOrient); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iValueOrient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_ValueReference(CatDimReference & oValueRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oValueRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueReference(oValueRef); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oValueRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_ValueReference(CatDimReference iValueRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iValueRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueReference(iValueRef); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iValueRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_ValueAngle(double & oValueAng) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oValueAng); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueAngle(oValueAng); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oValueAng); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_ValueAngle(double iValueAng) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iValueAng); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueAngle(iValueAng); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iValueAng); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_ValueFrame(CatDimFrame & oValueFrame) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oValueFrame); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueFrame(oValueFrame); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oValueFrame); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_ValueFrame(CatDimFrame iValueFrame) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iValueFrame); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueFrame(iValueFrame); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iValueFrame); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_ValueDisplay(CATLONG & oValueDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oValueDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueDisplay(oValueDisplay); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oValueDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_ValueDisplay(CATLONG iValueDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iValueDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueDisplay(iValueDisplay); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iValueDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_ValueAutoMode(CATLONG & oValueAutoMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oValueAutoMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueAutoMode(oValueAutoMode); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oValueAutoMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_ValueAutoMode(CATLONG iValueAutoMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iValueAutoMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueAutoMode(iValueAutoMode); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iValueAutoMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_ValueInOut(CATLONG & oInOut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oInOut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueInOut(oInOut); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oInOut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_ValueInOut(CATLONG iInOut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iInOut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueInOut(iInOut); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iInOut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_SymbolsSide(CATLONG & oSymbSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oSymbSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SymbolsSide(oSymbSide); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oSymbSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::put_SymbolsSide(CATLONG iSymbSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iSymbSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SymbolsSide(iSymbSide); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iSymbSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_DimStatus(CatDimAnalyse & oIsStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oIsStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimStatus(oIsStatus); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oIsStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::GetValue(CATIADrawingDimValue *& oDimValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oDimValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(oDimValue); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oDimValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::GetDimLine(CATIADrawingDimLine *& oDimLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oDimLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLine(oDimLine); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oDimLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::GetDimExtLine(CATIADrawingDimExtLine *& oDimExtLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oDimExtLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimExtLine(oDimExtLine); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oDimExtLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::MoveValue(double X, double Y, CATLONG SubPart, CATLONG DimAngleBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&X,&Y,&SubPart,&DimAngleBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MoveValue(X,Y,SubPart,DimAngleBehavior); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&X,&Y,&SubPart,&DimAngleBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::RestoreValuePosition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RestoreValuePosition(); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::GetTolerances(CATLONG & oTolType, CATBSTR & oTolName, CATBSTR & oUpTol, CATBSTR & oLowTol, double & odUpTol, double & odLowTol, CATLONG & oDisplayMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oTolType,&oTolName,&oUpTol,&oLowTol,&odUpTol,&odLowTol,&oDisplayMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTolerances(oTolType,oTolName,oUpTol,oLowTol,odUpTol,odLowTol,oDisplayMode); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oTolType,&oTolName,&oUpTol,&oLowTol,&odUpTol,&odLowTol,&oDisplayMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::SetTolerances(CATLONG iTolType, const CATBSTR & itolName, const CATBSTR & iUpTol, const CATBSTR & iLowTol, double idUpTol, double idLowTol, CATLONG DisplayMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iTolType,&itolName,&iUpTol,&iLowTol,&idUpTol,&idLowTol,&DisplayMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTolerances(iTolType,itolName,iUpTol,iLowTol,idUpTol,idLowTol,DisplayMode); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iTolType,&itolName,&iUpTol,&iLowTol,&idUpTol,&idLowTol,&DisplayMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::GetBoundaryBox(CATSafeArrayVariant & oValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaryBox(oValues); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::get_IsClipped(CAT_VARIANT_BOOL & oIsClipped) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oIsClipped); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsClipped(oIsClipped); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oIsClipped); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::SetClip(double X, double Y, CATLONG iKeptSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&X,&Y,&iKeptSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClip(X,Y,iKeptSide); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&X,&Y,&iKeptSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::GetClip(double & X, double & Y, CATLONG & oKeptSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&X,&Y,&oKeptSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClip(X,Y,oKeptSide); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&X,&Y,&oKeptSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimension##classe::Unclip() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Unclip(); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimension##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimension##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimension##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimension##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimension##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingDimension(classe) \
 \
 \
declare_TIE_CATIADrawingDimension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimension,"CATIADrawingDimension",CATIADrawingDimension::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingDimension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimension##classe(classe::MetaObject(),CATIADrawingDimension::MetaObject(),(void *)CreateTIECATIADrawingDimension##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingDimension(classe) \
 \
 \
declare_TIE_CATIADrawingDimension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimension,"CATIADrawingDimension",CATIADrawingDimension::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingDimension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimension##classe(classe::MetaObject(),CATIADrawingDimension::MetaObject(),(void *)CreateTIECATIADrawingDimension##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingDimension(classe) TIE_CATIADrawingDimension(classe)
#else
#define BOA_CATIADrawingDimension(classe) CATImplementBOA(CATIADrawingDimension, classe)
#endif

#endif
