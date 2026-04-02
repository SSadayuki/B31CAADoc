#ifndef __TIE_CATIAIntParam
#define __TIE_CATIAIntParam

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAIntParam.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAIntParam */
#define declare_TIE_CATIAIntParam(classe) \
 \
 \
class TIECATIAIntParam##classe : public CATIAIntParam \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAIntParam, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Value(CATLONG & oValue); \
      virtual HRESULT __stdcall put_Value(CATLONG iValue); \
      virtual HRESULT __stdcall get_RangeMin(CATLONG & oRangeMin); \
      virtual HRESULT __stdcall put_RangeMin(CATLONG iRangeMin); \
      virtual HRESULT __stdcall get_RangeMax(CATLONG & oRangeMax); \
      virtual HRESULT __stdcall put_RangeMax(CATLONG iRangeMax); \
      virtual HRESULT __stdcall get_RangeMinValidity(CATLONG & oRangeMinValidity); \
      virtual HRESULT __stdcall put_RangeMinValidity(CATLONG iRangeMinValidity); \
      virtual HRESULT __stdcall get_RangeMaxValidity(CATLONG & oRangeMaxValidity); \
      virtual HRESULT __stdcall put_RangeMaxValidity(CATLONG iRangeMaxValidity); \
      virtual HRESULT __stdcall GetEnumerateValues(CATSafeArrayVariant & oSafeArray); \
      virtual HRESULT __stdcall GetEnumerateValuesSize(CATLONG & oValue); \
      virtual HRESULT __stdcall SetEnumerateValues(const CATSafeArrayVariant & iSafeArray); \
      virtual HRESULT __stdcall SuppressEnumerateValues(); \
      virtual HRESULT __stdcall ValuateFromString(const CATBSTR & iValue); \
      virtual HRESULT __stdcall ValueAsString(CATBSTR & oValue); \
      virtual HRESULT __stdcall get_OptionalRelation(CATIARelation *& oRelation); \
      virtual HRESULT __stdcall get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly); \
      virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_UserAccessMode(CATLONG & oUserAccessMode); \
      virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
      virtual HRESULT __stdcall get_Renamed(CAT_VARIANT_BOOL & oRenamed); \
      virtual HRESULT __stdcall get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAIntParam(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Value(CATLONG & oValue); \
virtual HRESULT __stdcall put_Value(CATLONG iValue); \
virtual HRESULT __stdcall get_RangeMin(CATLONG & oRangeMin); \
virtual HRESULT __stdcall put_RangeMin(CATLONG iRangeMin); \
virtual HRESULT __stdcall get_RangeMax(CATLONG & oRangeMax); \
virtual HRESULT __stdcall put_RangeMax(CATLONG iRangeMax); \
virtual HRESULT __stdcall get_RangeMinValidity(CATLONG & oRangeMinValidity); \
virtual HRESULT __stdcall put_RangeMinValidity(CATLONG iRangeMinValidity); \
virtual HRESULT __stdcall get_RangeMaxValidity(CATLONG & oRangeMaxValidity); \
virtual HRESULT __stdcall put_RangeMaxValidity(CATLONG iRangeMaxValidity); \
virtual HRESULT __stdcall GetEnumerateValues(CATSafeArrayVariant & oSafeArray); \
virtual HRESULT __stdcall GetEnumerateValuesSize(CATLONG & oValue); \
virtual HRESULT __stdcall SetEnumerateValues(const CATSafeArrayVariant & iSafeArray); \
virtual HRESULT __stdcall SuppressEnumerateValues(); \
virtual HRESULT __stdcall ValuateFromString(const CATBSTR & iValue); \
virtual HRESULT __stdcall ValueAsString(CATBSTR & oValue); \
virtual HRESULT __stdcall get_OptionalRelation(CATIARelation *& oRelation); \
virtual HRESULT __stdcall get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly); \
virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_UserAccessMode(CATLONG & oUserAccessMode); \
virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
virtual HRESULT __stdcall get_Renamed(CAT_VARIANT_BOOL & oRenamed); \
virtual HRESULT __stdcall get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAIntParam(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Value(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Value(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_Value(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_RangeMin(CATLONG & oRangeMin) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_RangeMin(oRangeMin)); \
} \
HRESULT __stdcall  ENVTIEName::put_RangeMin(CATLONG iRangeMin) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_RangeMin(iRangeMin)); \
} \
HRESULT __stdcall  ENVTIEName::get_RangeMax(CATLONG & oRangeMax) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_RangeMax(oRangeMax)); \
} \
HRESULT __stdcall  ENVTIEName::put_RangeMax(CATLONG iRangeMax) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_RangeMax(iRangeMax)); \
} \
HRESULT __stdcall  ENVTIEName::get_RangeMinValidity(CATLONG & oRangeMinValidity) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_RangeMinValidity(oRangeMinValidity)); \
} \
HRESULT __stdcall  ENVTIEName::put_RangeMinValidity(CATLONG iRangeMinValidity) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_RangeMinValidity(iRangeMinValidity)); \
} \
HRESULT __stdcall  ENVTIEName::get_RangeMaxValidity(CATLONG & oRangeMaxValidity) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_RangeMaxValidity(oRangeMaxValidity)); \
} \
HRESULT __stdcall  ENVTIEName::put_RangeMaxValidity(CATLONG iRangeMaxValidity) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_RangeMaxValidity(iRangeMaxValidity)); \
} \
HRESULT __stdcall  ENVTIEName::GetEnumerateValues(CATSafeArrayVariant & oSafeArray) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)GetEnumerateValues(oSafeArray)); \
} \
HRESULT __stdcall  ENVTIEName::GetEnumerateValuesSize(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)GetEnumerateValuesSize(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetEnumerateValues(const CATSafeArrayVariant & iSafeArray) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)SetEnumerateValues(iSafeArray)); \
} \
HRESULT __stdcall  ENVTIEName::SuppressEnumerateValues() \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)SuppressEnumerateValues()); \
} \
HRESULT __stdcall  ENVTIEName::ValuateFromString(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)ValuateFromString(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::ValueAsString(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)ValueAsString(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_OptionalRelation(CATIARelation *& oRelation) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_OptionalRelation(oRelation)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_ReadOnly(oReadOnly)); \
} \
HRESULT __stdcall  ENVTIEName::Rename(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)Rename(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_UserAccessMode(CATLONG & oUserAccessMode) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_UserAccessMode(oUserAccessMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIABase *& oContext) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_Renamed(CAT_VARIANT_BOOL & oRenamed) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Renamed(oRenamed)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_IsTrueParameter(oIsTrueParameter)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAIntParam,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAIntParam(classe)    TIECATIAIntParam##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAIntParam(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAIntParam, classe) \
 \
 \
CATImplementTIEMethods(CATIAIntParam, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAIntParam, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAIntParam, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAIntParam, classe) \
 \
HRESULT __stdcall  TIECATIAIntParam##classe::get_Value(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::put_Value(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Value(iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_RangeMin(CATLONG & oRangeMin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRangeMin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RangeMin(oRangeMin); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRangeMin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::put_RangeMin(CATLONG iRangeMin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRangeMin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RangeMin(iRangeMin); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRangeMin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_RangeMax(CATLONG & oRangeMax) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oRangeMax); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RangeMax(oRangeMax); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oRangeMax); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::put_RangeMax(CATLONG iRangeMax) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iRangeMax); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RangeMax(iRangeMax); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iRangeMax); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_RangeMinValidity(CATLONG & oRangeMinValidity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oRangeMinValidity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RangeMinValidity(oRangeMinValidity); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oRangeMinValidity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::put_RangeMinValidity(CATLONG iRangeMinValidity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iRangeMinValidity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RangeMinValidity(iRangeMinValidity); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iRangeMinValidity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_RangeMaxValidity(CATLONG & oRangeMaxValidity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oRangeMaxValidity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RangeMaxValidity(oRangeMaxValidity); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oRangeMaxValidity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::put_RangeMaxValidity(CATLONG iRangeMaxValidity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iRangeMaxValidity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RangeMaxValidity(iRangeMaxValidity); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iRangeMaxValidity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::GetEnumerateValues(CATSafeArrayVariant & oSafeArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSafeArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEnumerateValues(oSafeArray); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSafeArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::GetEnumerateValuesSize(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEnumerateValuesSize(oValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::SetEnumerateValues(const CATSafeArrayVariant & iSafeArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iSafeArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEnumerateValues(iSafeArray); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iSafeArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::SuppressEnumerateValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SuppressEnumerateValues(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::ValuateFromString(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValuateFromString(iValue); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::ValueAsString(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValueAsString(oValue); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_OptionalRelation(CATIARelation *& oRelation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oRelation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OptionalRelation(oRelation); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oRelation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oReadOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReadOnly(oReadOnly); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oReadOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::Rename(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rename(iName); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_UserAccessMode(CATLONG & oUserAccessMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oUserAccessMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UserAccessMode(oUserAccessMode); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oUserAccessMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_Context(CATIABase *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_Renamed(CAT_VARIANT_BOOL & oRenamed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oRenamed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Renamed(oRenamed); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oRenamed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntParam##classe::get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oIsTrueParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsTrueParameter(oIsTrueParameter); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oIsTrueParameter); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntParam##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntParam##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntParam##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntParam##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntParam##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAIntParam(classe) \
 \
 \
declare_TIE_CATIAIntParam(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAIntParam##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAIntParam,"CATIAIntParam",CATIAIntParam::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAIntParam(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAIntParam, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAIntParam##classe(classe::MetaObject(),CATIAIntParam::MetaObject(),(void *)CreateTIECATIAIntParam##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAIntParam(classe) \
 \
 \
declare_TIE_CATIAIntParam(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAIntParam##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAIntParam,"CATIAIntParam",CATIAIntParam::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAIntParam(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAIntParam, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAIntParam##classe(classe::MetaObject(),CATIAIntParam::MetaObject(),(void *)CreateTIECATIAIntParam##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAIntParam(classe) TIE_CATIAIntParam(classe)
#else
#define BOA_CATIAIntParam(classe) CATImplementBOA(CATIAIntParam, classe)
#endif

#endif
