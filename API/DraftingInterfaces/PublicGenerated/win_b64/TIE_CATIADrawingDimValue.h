#ifndef __TIE_CATIADrawingDimValue
#define __TIE_CATIADrawingDimValue

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingDimValue.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingDimValue */
#define declare_TIE_CATIADrawingDimValue(classe) \
 \
 \
class TIECATIADrawingDimValue##classe : public CATIADrawingDimValue \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingDimValue, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Value(double & oValue); \
      virtual HRESULT __stdcall get_FakeDimType(CatDimFake & oFakeType); \
      virtual HRESULT __stdcall put_FakeDimType(CatDimFake iFakeType); \
      virtual HRESULT __stdcall get_ValueFramedGroup(CatDimFramedGroup & oValueFramedGroup); \
      virtual HRESULT __stdcall put_ValueFramedGroup(CatDimFramedGroup iValueFramedGroup); \
      virtual HRESULT __stdcall get_ValueFramedElement(CatDimFramedElement & oValueFramedElement); \
      virtual HRESULT __stdcall put_ValueFramedElement(CatDimFramedElement iValueFrameElement); \
      virtual HRESULT __stdcall get_ScoringMode(CatDimScore & oValueScoreType); \
      virtual HRESULT __stdcall put_ScoringMode(CatDimScore iValueScoreType); \
      virtual HRESULT __stdcall GetPSText(CATLONG iIndex, CATBSTR & oPrefix, CATBSTR & oSuffix); \
      virtual HRESULT __stdcall SetPSText(CATLONG iIndex, const CATBSTR & iPrefix, const CATBSTR & iSuffix); \
      virtual HRESULT __stdcall GetBaultText(CATLONG iIndex, CATBSTR & oBefore, CATBSTR & oAfter, CATBSTR & oUpper, CATBSTR & oLower); \
      virtual HRESULT __stdcall SetBaultText(CATLONG iIndex, const CATBSTR & iBefore, const CATBSTR & iAfter, const CATBSTR & iUpper, const CATBSTR & iLower); \
      virtual HRESULT __stdcall GetFormatName(CATLONG iIndex, CATBSTR & oFmName); \
      virtual HRESULT __stdcall SetFormatName(CATLONG iIndex, const CATBSTR & iFrmName); \
      virtual HRESULT __stdcall GetFormatUnit(CATLONG iIndex, CATLONG & oFrmUnit); \
      virtual HRESULT __stdcall SetFormatUnit(CATLONG iIndex, CATLONG iFrmUnit); \
      virtual HRESULT __stdcall GetDisplayUnit(CATLONG iIndex, CATLONG & oDisplUnit); \
      virtual HRESULT __stdcall GetFormatPrecision(CATLONG Index, double & oFrmPrecision); \
      virtual HRESULT __stdcall SetFormatPrecision(CATLONG iIndex, double iFrmPrecision); \
      virtual HRESULT __stdcall GetFormatType(CATLONG iIndex, CATLONG & oFrmType); \
      virtual HRESULT __stdcall SetFormatType(CATLONG iIndex, CATLONG iFrmType); \
      virtual HRESULT __stdcall GetFormatDisplayFactor(CATLONG iIndex, CATLONG & oFrmDspFact); \
      virtual HRESULT __stdcall SetFormatDisplayFactor(CATLONG iIndex, CATLONG iFrmDspFact); \
      virtual HRESULT __stdcall GetFakeDimValue(CATLONG iIndex, CATBSTR & oFakeDimValue); \
      virtual HRESULT __stdcall SetFakeDimValue(CATLONG iIndex, const CATBSTR & iFakeDimValue); \
      virtual HRESULT __stdcall GetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL & oScoredElement); \
      virtual HRESULT __stdcall SetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL iScoredElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingDimValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Value(double & oValue); \
virtual HRESULT __stdcall get_FakeDimType(CatDimFake & oFakeType); \
virtual HRESULT __stdcall put_FakeDimType(CatDimFake iFakeType); \
virtual HRESULT __stdcall get_ValueFramedGroup(CatDimFramedGroup & oValueFramedGroup); \
virtual HRESULT __stdcall put_ValueFramedGroup(CatDimFramedGroup iValueFramedGroup); \
virtual HRESULT __stdcall get_ValueFramedElement(CatDimFramedElement & oValueFramedElement); \
virtual HRESULT __stdcall put_ValueFramedElement(CatDimFramedElement iValueFrameElement); \
virtual HRESULT __stdcall get_ScoringMode(CatDimScore & oValueScoreType); \
virtual HRESULT __stdcall put_ScoringMode(CatDimScore iValueScoreType); \
virtual HRESULT __stdcall GetPSText(CATLONG iIndex, CATBSTR & oPrefix, CATBSTR & oSuffix); \
virtual HRESULT __stdcall SetPSText(CATLONG iIndex, const CATBSTR & iPrefix, const CATBSTR & iSuffix); \
virtual HRESULT __stdcall GetBaultText(CATLONG iIndex, CATBSTR & oBefore, CATBSTR & oAfter, CATBSTR & oUpper, CATBSTR & oLower); \
virtual HRESULT __stdcall SetBaultText(CATLONG iIndex, const CATBSTR & iBefore, const CATBSTR & iAfter, const CATBSTR & iUpper, const CATBSTR & iLower); \
virtual HRESULT __stdcall GetFormatName(CATLONG iIndex, CATBSTR & oFmName); \
virtual HRESULT __stdcall SetFormatName(CATLONG iIndex, const CATBSTR & iFrmName); \
virtual HRESULT __stdcall GetFormatUnit(CATLONG iIndex, CATLONG & oFrmUnit); \
virtual HRESULT __stdcall SetFormatUnit(CATLONG iIndex, CATLONG iFrmUnit); \
virtual HRESULT __stdcall GetDisplayUnit(CATLONG iIndex, CATLONG & oDisplUnit); \
virtual HRESULT __stdcall GetFormatPrecision(CATLONG Index, double & oFrmPrecision); \
virtual HRESULT __stdcall SetFormatPrecision(CATLONG iIndex, double iFrmPrecision); \
virtual HRESULT __stdcall GetFormatType(CATLONG iIndex, CATLONG & oFrmType); \
virtual HRESULT __stdcall SetFormatType(CATLONG iIndex, CATLONG iFrmType); \
virtual HRESULT __stdcall GetFormatDisplayFactor(CATLONG iIndex, CATLONG & oFrmDspFact); \
virtual HRESULT __stdcall SetFormatDisplayFactor(CATLONG iIndex, CATLONG iFrmDspFact); \
virtual HRESULT __stdcall GetFakeDimValue(CATLONG iIndex, CATBSTR & oFakeDimValue); \
virtual HRESULT __stdcall SetFakeDimValue(CATLONG iIndex, const CATBSTR & iFakeDimValue); \
virtual HRESULT __stdcall GetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL & oScoredElement); \
virtual HRESULT __stdcall SetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL iScoredElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingDimValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Value(double & oValue) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_FakeDimType(CatDimFake & oFakeType) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_FakeDimType(oFakeType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FakeDimType(CatDimFake iFakeType) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)put_FakeDimType(iFakeType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueFramedGroup(CatDimFramedGroup & oValueFramedGroup) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_ValueFramedGroup(oValueFramedGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueFramedGroup(CatDimFramedGroup iValueFramedGroup) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)put_ValueFramedGroup(iValueFramedGroup)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueFramedElement(CatDimFramedElement & oValueFramedElement) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_ValueFramedElement(oValueFramedElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueFramedElement(CatDimFramedElement iValueFrameElement) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)put_ValueFramedElement(iValueFrameElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_ScoringMode(CatDimScore & oValueScoreType) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_ScoringMode(oValueScoreType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScoringMode(CatDimScore iValueScoreType) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)put_ScoringMode(iValueScoreType)); \
} \
HRESULT __stdcall  ENVTIEName::GetPSText(CATLONG iIndex, CATBSTR & oPrefix, CATBSTR & oSuffix) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetPSText(iIndex,oPrefix,oSuffix)); \
} \
HRESULT __stdcall  ENVTIEName::SetPSText(CATLONG iIndex, const CATBSTR & iPrefix, const CATBSTR & iSuffix) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetPSText(iIndex,iPrefix,iSuffix)); \
} \
HRESULT __stdcall  ENVTIEName::GetBaultText(CATLONG iIndex, CATBSTR & oBefore, CATBSTR & oAfter, CATBSTR & oUpper, CATBSTR & oLower) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetBaultText(iIndex,oBefore,oAfter,oUpper,oLower)); \
} \
HRESULT __stdcall  ENVTIEName::SetBaultText(CATLONG iIndex, const CATBSTR & iBefore, const CATBSTR & iAfter, const CATBSTR & iUpper, const CATBSTR & iLower) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetBaultText(iIndex,iBefore,iAfter,iUpper,iLower)); \
} \
HRESULT __stdcall  ENVTIEName::GetFormatName(CATLONG iIndex, CATBSTR & oFmName) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetFormatName(iIndex,oFmName)); \
} \
HRESULT __stdcall  ENVTIEName::SetFormatName(CATLONG iIndex, const CATBSTR & iFrmName) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetFormatName(iIndex,iFrmName)); \
} \
HRESULT __stdcall  ENVTIEName::GetFormatUnit(CATLONG iIndex, CATLONG & oFrmUnit) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetFormatUnit(iIndex,oFrmUnit)); \
} \
HRESULT __stdcall  ENVTIEName::SetFormatUnit(CATLONG iIndex, CATLONG iFrmUnit) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetFormatUnit(iIndex,iFrmUnit)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayUnit(CATLONG iIndex, CATLONG & oDisplUnit) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetDisplayUnit(iIndex,oDisplUnit)); \
} \
HRESULT __stdcall  ENVTIEName::GetFormatPrecision(CATLONG Index, double & oFrmPrecision) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetFormatPrecision(Index,oFrmPrecision)); \
} \
HRESULT __stdcall  ENVTIEName::SetFormatPrecision(CATLONG iIndex, double iFrmPrecision) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetFormatPrecision(iIndex,iFrmPrecision)); \
} \
HRESULT __stdcall  ENVTIEName::GetFormatType(CATLONG iIndex, CATLONG & oFrmType) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetFormatType(iIndex,oFrmType)); \
} \
HRESULT __stdcall  ENVTIEName::SetFormatType(CATLONG iIndex, CATLONG iFrmType) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetFormatType(iIndex,iFrmType)); \
} \
HRESULT __stdcall  ENVTIEName::GetFormatDisplayFactor(CATLONG iIndex, CATLONG & oFrmDspFact) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetFormatDisplayFactor(iIndex,oFrmDspFact)); \
} \
HRESULT __stdcall  ENVTIEName::SetFormatDisplayFactor(CATLONG iIndex, CATLONG iFrmDspFact) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetFormatDisplayFactor(iIndex,iFrmDspFact)); \
} \
HRESULT __stdcall  ENVTIEName::GetFakeDimValue(CATLONG iIndex, CATBSTR & oFakeDimValue) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetFakeDimValue(iIndex,oFakeDimValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetFakeDimValue(CATLONG iIndex, const CATBSTR & iFakeDimValue) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetFakeDimValue(iIndex,iFakeDimValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL & oScoredElement) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetScoredElement(iIndex,oScoredElement)); \
} \
HRESULT __stdcall  ENVTIEName::SetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL iScoredElement) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)SetScoredElement(iIndex,iScoredElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingDimValue,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingDimValue(classe)    TIECATIADrawingDimValue##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingDimValue(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingDimValue, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingDimValue, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingDimValue, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingDimValue, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingDimValue, classe) \
 \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::get_Value(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::get_FakeDimType(CatDimFake & oFakeType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oFakeType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FakeDimType(oFakeType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oFakeType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::put_FakeDimType(CatDimFake iFakeType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFakeType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FakeDimType(iFakeType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFakeType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::get_ValueFramedGroup(CatDimFramedGroup & oValueFramedGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oValueFramedGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueFramedGroup(oValueFramedGroup); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oValueFramedGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::put_ValueFramedGroup(CatDimFramedGroup iValueFramedGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iValueFramedGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueFramedGroup(iValueFramedGroup); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iValueFramedGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::get_ValueFramedElement(CatDimFramedElement & oValueFramedElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oValueFramedElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueFramedElement(oValueFramedElement); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oValueFramedElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::put_ValueFramedElement(CatDimFramedElement iValueFrameElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iValueFrameElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueFramedElement(iValueFrameElement); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iValueFrameElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::get_ScoringMode(CatDimScore & oValueScoreType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oValueScoreType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScoringMode(oValueScoreType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oValueScoreType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::put_ScoringMode(CatDimScore iValueScoreType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iValueScoreType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScoringMode(iValueScoreType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iValueScoreType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetPSText(CATLONG iIndex, CATBSTR & oPrefix, CATBSTR & oSuffix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIndex,&oPrefix,&oSuffix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPSText(iIndex,oPrefix,oSuffix); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIndex,&oPrefix,&oSuffix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetPSText(CATLONG iIndex, const CATBSTR & iPrefix, const CATBSTR & iSuffix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIndex,&iPrefix,&iSuffix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPSText(iIndex,iPrefix,iSuffix); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIndex,&iPrefix,&iSuffix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetBaultText(CATLONG iIndex, CATBSTR & oBefore, CATBSTR & oAfter, CATBSTR & oUpper, CATBSTR & oLower) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIndex,&oBefore,&oAfter,&oUpper,&oLower); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBaultText(iIndex,oBefore,oAfter,oUpper,oLower); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIndex,&oBefore,&oAfter,&oUpper,&oLower); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetBaultText(CATLONG iIndex, const CATBSTR & iBefore, const CATBSTR & iAfter, const CATBSTR & iUpper, const CATBSTR & iLower) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iIndex,&iBefore,&iAfter,&iUpper,&iLower); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBaultText(iIndex,iBefore,iAfter,iUpper,iLower); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iIndex,&iBefore,&iAfter,&iUpper,&iLower); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetFormatName(CATLONG iIndex, CATBSTR & oFmName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIndex,&oFmName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFormatName(iIndex,oFmName); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIndex,&oFmName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetFormatName(CATLONG iIndex, const CATBSTR & iFrmName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iIndex,&iFrmName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFormatName(iIndex,iFrmName); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iIndex,&iFrmName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetFormatUnit(CATLONG iIndex, CATLONG & oFrmUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iIndex,&oFrmUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFormatUnit(iIndex,oFrmUnit); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iIndex,&oFrmUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetFormatUnit(CATLONG iIndex, CATLONG iFrmUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iIndex,&iFrmUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFormatUnit(iIndex,iFrmUnit); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iIndex,&iFrmUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetDisplayUnit(CATLONG iIndex, CATLONG & oDisplUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIndex,&oDisplUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayUnit(iIndex,oDisplUnit); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIndex,&oDisplUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetFormatPrecision(CATLONG Index, double & oFrmPrecision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&Index,&oFrmPrecision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFormatPrecision(Index,oFrmPrecision); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&Index,&oFrmPrecision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetFormatPrecision(CATLONG iIndex, double iFrmPrecision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iIndex,&iFrmPrecision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFormatPrecision(iIndex,iFrmPrecision); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iIndex,&iFrmPrecision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetFormatType(CATLONG iIndex, CATLONG & oFrmType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iIndex,&oFrmType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFormatType(iIndex,oFrmType); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iIndex,&oFrmType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetFormatType(CATLONG iIndex, CATLONG iFrmType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iIndex,&iFrmType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFormatType(iIndex,iFrmType); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iIndex,&iFrmType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetFormatDisplayFactor(CATLONG iIndex, CATLONG & oFrmDspFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iIndex,&oFrmDspFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFormatDisplayFactor(iIndex,oFrmDspFact); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iIndex,&oFrmDspFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetFormatDisplayFactor(CATLONG iIndex, CATLONG iFrmDspFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iIndex,&iFrmDspFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFormatDisplayFactor(iIndex,iFrmDspFact); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iIndex,&iFrmDspFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetFakeDimValue(CATLONG iIndex, CATBSTR & oFakeDimValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iIndex,&oFakeDimValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFakeDimValue(iIndex,oFakeDimValue); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iIndex,&oFakeDimValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetFakeDimValue(CATLONG iIndex, const CATBSTR & iFakeDimValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iIndex,&iFakeDimValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFakeDimValue(iIndex,iFakeDimValue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iIndex,&iFakeDimValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::GetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL & oScoredElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iIndex,&oScoredElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetScoredElement(iIndex,oScoredElement); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iIndex,&oScoredElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimValue##classe::SetScoredElement(CATLONG iIndex, CAT_VARIANT_BOOL iScoredElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iIndex,&iScoredElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetScoredElement(iIndex,iScoredElement); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iIndex,&iScoredElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimValue##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimValue##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimValue##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimValue##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimValue##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingDimValue(classe) \
 \
 \
declare_TIE_CATIADrawingDimValue(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimValue,"CATIADrawingDimValue",CATIADrawingDimValue::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingDimValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimValue##classe(classe::MetaObject(),CATIADrawingDimValue::MetaObject(),(void *)CreateTIECATIADrawingDimValue##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingDimValue(classe) \
 \
 \
declare_TIE_CATIADrawingDimValue(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimValue,"CATIADrawingDimValue",CATIADrawingDimValue::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingDimValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimValue##classe(classe::MetaObject(),CATIADrawingDimValue::MetaObject(),(void *)CreateTIECATIADrawingDimValue##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingDimValue(classe) TIE_CATIADrawingDimValue(classe)
#else
#define BOA_CATIADrawingDimValue(classe) CATImplementBOA(CATIADrawingDimValue, classe)
#endif

#endif
