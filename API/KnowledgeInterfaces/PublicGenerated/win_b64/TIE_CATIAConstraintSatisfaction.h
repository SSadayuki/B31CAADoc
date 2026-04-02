#ifndef __TIE_CATIAConstraintSatisfaction
#define __TIE_CATIAConstraintSatisfaction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAConstraintSatisfaction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAConstraintSatisfaction */
#define declare_TIE_CATIAConstraintSatisfaction(classe) \
 \
 \
class TIECATIAConstraintSatisfaction##classe : public CATIAConstraintSatisfaction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAConstraintSatisfaction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Solve(); \
      virtual HRESULT __stdcall SetInputParameters(CATLONG iIndex); \
      virtual HRESULT __stdcall SetParameterAsInput(CATIAParameter * iParameter); \
      virtual HRESULT __stdcall SetParameterAsOutput(CATIAParameter * iParameter); \
      virtual HRESULT __stdcall SetPrecision(double iEps); \
      virtual HRESULT __stdcall GetPrecision(double & oEps); \
      virtual HRESULT __stdcall UseSymbolcTransformations(CAT_VARIANT_BOOL iGauss); \
      virtual HRESULT __stdcall GetSymbolcTransformations(CAT_VARIANT_BOOL & oGauss); \
      virtual HRESULT __stdcall UseStopDialog(CAT_VARIANT_BOOL iUsed); \
      virtual HRESULT __stdcall IsStopDialog(CAT_VARIANT_BOOL & oUsed); \
      virtual HRESULT __stdcall SetMaxCalculationTime(CATLONG iMaxTime); \
      virtual HRESULT __stdcall GetMaxCalculationTime(CATLONG & oMaxTime); \
      virtual HRESULT __stdcall get_Value(CATBSTR & oValue); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
      virtual HRESULT __stdcall Modify(const CATBSTR & iValue); \
      virtual HRESULT __stdcall get_NbInParameters(CATLONG & oNbInputs); \
      virtual HRESULT __stdcall get_NbOutParameters(CATLONG & oNbOutputs); \
      virtual HRESULT __stdcall GetInParameter(CATLONG iIndex, CATIABase *& oParameter); \
      virtual HRESULT __stdcall GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
      virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Deactivate(); \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
      virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAConstraintSatisfaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Solve(); \
virtual HRESULT __stdcall SetInputParameters(CATLONG iIndex); \
virtual HRESULT __stdcall SetParameterAsInput(CATIAParameter * iParameter); \
virtual HRESULT __stdcall SetParameterAsOutput(CATIAParameter * iParameter); \
virtual HRESULT __stdcall SetPrecision(double iEps); \
virtual HRESULT __stdcall GetPrecision(double & oEps); \
virtual HRESULT __stdcall UseSymbolcTransformations(CAT_VARIANT_BOOL iGauss); \
virtual HRESULT __stdcall GetSymbolcTransformations(CAT_VARIANT_BOOL & oGauss); \
virtual HRESULT __stdcall UseStopDialog(CAT_VARIANT_BOOL iUsed); \
virtual HRESULT __stdcall IsStopDialog(CAT_VARIANT_BOOL & oUsed); \
virtual HRESULT __stdcall SetMaxCalculationTime(CATLONG iMaxTime); \
virtual HRESULT __stdcall GetMaxCalculationTime(CATLONG & oMaxTime); \
virtual HRESULT __stdcall get_Value(CATBSTR & oValue); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
virtual HRESULT __stdcall Modify(const CATBSTR & iValue); \
virtual HRESULT __stdcall get_NbInParameters(CATLONG & oNbInputs); \
virtual HRESULT __stdcall get_NbOutParameters(CATLONG & oNbOutputs); \
virtual HRESULT __stdcall GetInParameter(CATLONG iIndex, CATIABase *& oParameter); \
virtual HRESULT __stdcall GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter); \
virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAConstraintSatisfaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Solve() \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)Solve()); \
} \
HRESULT __stdcall  ENVTIEName::SetInputParameters(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)SetInputParameters(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::SetParameterAsInput(CATIAParameter * iParameter) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)SetParameterAsInput(iParameter)); \
} \
HRESULT __stdcall  ENVTIEName::SetParameterAsOutput(CATIAParameter * iParameter) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)SetParameterAsOutput(iParameter)); \
} \
HRESULT __stdcall  ENVTIEName::SetPrecision(double iEps) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)SetPrecision(iEps)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrecision(double & oEps) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)GetPrecision(oEps)); \
} \
HRESULT __stdcall  ENVTIEName::UseSymbolcTransformations(CAT_VARIANT_BOOL iGauss) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)UseSymbolcTransformations(iGauss)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymbolcTransformations(CAT_VARIANT_BOOL & oGauss) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)GetSymbolcTransformations(oGauss)); \
} \
HRESULT __stdcall  ENVTIEName::UseStopDialog(CAT_VARIANT_BOOL iUsed) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)UseStopDialog(iUsed)); \
} \
HRESULT __stdcall  ENVTIEName::IsStopDialog(CAT_VARIANT_BOOL & oUsed) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)IsStopDialog(oUsed)); \
} \
HRESULT __stdcall  ENVTIEName::SetMaxCalculationTime(CATLONG iMaxTime) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)SetMaxCalculationTime(iMaxTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaxCalculationTime(CATLONG & oMaxTime) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)GetMaxCalculationTime(oMaxTime)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Rename(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)Rename(iName)); \
} \
HRESULT __stdcall  ENVTIEName::Modify(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)Modify(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbInParameters(CATLONG & oNbInputs) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_NbInParameters(oNbInputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_NbOutParameters(oNbOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)GetInParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)GetOutParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIABase *& oContext) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Activated(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAConstraintSatisfaction,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAConstraintSatisfaction(classe)    TIECATIAConstraintSatisfaction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAConstraintSatisfaction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAConstraintSatisfaction, classe) \
 \
 \
CATImplementTIEMethods(CATIAConstraintSatisfaction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAConstraintSatisfaction, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAConstraintSatisfaction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAConstraintSatisfaction, classe) \
 \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::Solve() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Solve(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::SetInputParameters(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInputParameters(iIndex); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::SetParameterAsInput(CATIAParameter * iParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterAsInput(iParameter); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::SetParameterAsOutput(CATIAParameter * iParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterAsOutput(iParameter); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::SetPrecision(double iEps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iEps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPrecision(iEps); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iEps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::GetPrecision(double & oEps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oEps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrecision(oEps); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oEps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::UseSymbolcTransformations(CAT_VARIANT_BOOL iGauss) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iGauss); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UseSymbolcTransformations(iGauss); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iGauss); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::GetSymbolcTransformations(CAT_VARIANT_BOOL & oGauss) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oGauss); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbolcTransformations(oGauss); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oGauss); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::UseStopDialog(CAT_VARIANT_BOOL iUsed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iUsed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UseStopDialog(iUsed); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iUsed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::IsStopDialog(CAT_VARIANT_BOOL & oUsed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oUsed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsStopDialog(oUsed); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oUsed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::SetMaxCalculationTime(CATLONG iMaxTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iMaxTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxCalculationTime(iMaxTime); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iMaxTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::GetMaxCalculationTime(CATLONG & oMaxTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oMaxTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxCalculationTime(oMaxTime); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oMaxTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_Value(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::Rename(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rename(iName); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::Modify(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Modify(iValue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_NbInParameters(CATLONG & oNbInputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNbInputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbInParameters(oNbInputs); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNbInputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNbOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbOutParameters(oNbOutputs); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNbOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInParameter(iIndex,oParameter); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutParameter(iIndex,oParameter); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_Context(CATIABase *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activated(oActivated); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraintSatisfaction##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraintSatisfaction##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraintSatisfaction##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraintSatisfaction##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraintSatisfaction##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraintSatisfaction##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAConstraintSatisfaction(classe) \
 \
 \
declare_TIE_CATIAConstraintSatisfaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstraintSatisfaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstraintSatisfaction,"CATIAConstraintSatisfaction",CATIAConstraintSatisfaction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstraintSatisfaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAConstraintSatisfaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstraintSatisfaction##classe(classe::MetaObject(),CATIAConstraintSatisfaction::MetaObject(),(void *)CreateTIECATIAConstraintSatisfaction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAConstraintSatisfaction(classe) \
 \
 \
declare_TIE_CATIAConstraintSatisfaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstraintSatisfaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstraintSatisfaction,"CATIAConstraintSatisfaction",CATIAConstraintSatisfaction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstraintSatisfaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAConstraintSatisfaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstraintSatisfaction##classe(classe::MetaObject(),CATIAConstraintSatisfaction::MetaObject(),(void *)CreateTIECATIAConstraintSatisfaction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAConstraintSatisfaction(classe) TIE_CATIAConstraintSatisfaction(classe)
#else
#define BOA_CATIAConstraintSatisfaction(classe) CATImplementBOA(CATIAConstraintSatisfaction, classe)
#endif

#endif
