#ifndef __TIE_CATIAOptimizationConstraint
#define __TIE_CATIAOptimizationConstraint

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOptimizationConstraint.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOptimizationConstraint */
#define declare_TIE_CATIAOptimizationConstraint(classe) \
 \
 \
class TIECATIAOptimizationConstraint##classe : public CATIAOptimizationConstraint \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOptimizationConstraint, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Satisfaction(CAT_VARIANT_BOOL & oSatisfaction); \
      virtual HRESULT __stdcall get_DistanceToSatisfaction(CATIARealParam *& oDistance); \
      virtual HRESULT __stdcall get_Precision(double & oPrecision); \
      virtual HRESULT __stdcall put_Precision(double iPrecision); \
      virtual HRESULT __stdcall get_Severity(CATLONG & oSeverity); \
      virtual HRESULT __stdcall put_Severity(CATLONG iSeverity); \
      virtual HRESULT __stdcall get_Diagnosis(CAT_VARIANT_BOOL & oDiagnosis); \
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



#define ENVTIEdeclare_CATIAOptimizationConstraint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Satisfaction(CAT_VARIANT_BOOL & oSatisfaction); \
virtual HRESULT __stdcall get_DistanceToSatisfaction(CATIARealParam *& oDistance); \
virtual HRESULT __stdcall get_Precision(double & oPrecision); \
virtual HRESULT __stdcall put_Precision(double iPrecision); \
virtual HRESULT __stdcall get_Severity(CATLONG & oSeverity); \
virtual HRESULT __stdcall put_Severity(CATLONG iSeverity); \
virtual HRESULT __stdcall get_Diagnosis(CAT_VARIANT_BOOL & oDiagnosis); \
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


#define ENVTIEdefine_CATIAOptimizationConstraint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Satisfaction(CAT_VARIANT_BOOL & oSatisfaction) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Satisfaction(oSatisfaction)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceToSatisfaction(CATIARealParam *& oDistance) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_DistanceToSatisfaction(oDistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_Precision(double & oPrecision) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Precision(oPrecision)); \
} \
HRESULT __stdcall  ENVTIEName::put_Precision(double iPrecision) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)put_Precision(iPrecision)); \
} \
HRESULT __stdcall  ENVTIEName::get_Severity(CATLONG & oSeverity) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Severity(oSeverity)); \
} \
HRESULT __stdcall  ENVTIEName::put_Severity(CATLONG iSeverity) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)put_Severity(iSeverity)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diagnosis(CAT_VARIANT_BOOL & oDiagnosis) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Diagnosis(oDiagnosis)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Rename(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)Rename(iName)); \
} \
HRESULT __stdcall  ENVTIEName::Modify(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)Modify(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbInParameters(CATLONG & oNbInputs) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_NbInParameters(oNbInputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_NbOutParameters(oNbOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)GetInParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)GetOutParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIABase *& oContext) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Activated(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraint,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOptimizationConstraint(classe)    TIECATIAOptimizationConstraint##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOptimizationConstraint(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOptimizationConstraint, classe) \
 \
 \
CATImplementTIEMethods(CATIAOptimizationConstraint, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOptimizationConstraint, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOptimizationConstraint, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOptimizationConstraint, classe) \
 \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Satisfaction(CAT_VARIANT_BOOL & oSatisfaction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSatisfaction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Satisfaction(oSatisfaction); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSatisfaction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_DistanceToSatisfaction(CATIARealParam *& oDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceToSatisfaction(oDistance); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Precision(double & oPrecision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPrecision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Precision(oPrecision); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPrecision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::put_Precision(double iPrecision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPrecision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Precision(iPrecision); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPrecision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Severity(CATLONG & oSeverity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSeverity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Severity(oSeverity); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSeverity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::put_Severity(CATLONG iSeverity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSeverity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Severity(iSeverity); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSeverity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Diagnosis(CAT_VARIANT_BOOL & oDiagnosis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDiagnosis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diagnosis(oDiagnosis); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDiagnosis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Value(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::Rename(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rename(iName); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::Modify(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Modify(iValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_NbInParameters(CATLONG & oNbInputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNbInputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbInParameters(oNbInputs); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNbInputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNbOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbOutParameters(oNbOutputs); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNbOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInParameter(iIndex,oParameter); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutParameter(iIndex,oParameter); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Context(CATIABase *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activated(oActivated); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraint##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraint##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraint##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraint##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraint##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraint##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOptimizationConstraint(classe) \
 \
 \
declare_TIE_CATIAOptimizationConstraint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizationConstraint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizationConstraint,"CATIAOptimizationConstraint",CATIAOptimizationConstraint::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizationConstraint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOptimizationConstraint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizationConstraint##classe(classe::MetaObject(),CATIAOptimizationConstraint::MetaObject(),(void *)CreateTIECATIAOptimizationConstraint##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOptimizationConstraint(classe) \
 \
 \
declare_TIE_CATIAOptimizationConstraint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizationConstraint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizationConstraint,"CATIAOptimizationConstraint",CATIAOptimizationConstraint::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizationConstraint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOptimizationConstraint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizationConstraint##classe(classe::MetaObject(),CATIAOptimizationConstraint::MetaObject(),(void *)CreateTIECATIAOptimizationConstraint##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOptimizationConstraint(classe) TIE_CATIAOptimizationConstraint(classe)
#else
#define BOA_CATIAOptimizationConstraint(classe) CATImplementBOA(CATIAOptimizationConstraint, classe)
#endif

#endif
