#ifndef __TIE_CATIARelations
#define __TIE_CATIARelations

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARelations.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARelations */
#define declare_TIE_CATIARelations(classe) \
 \
 \
class TIECATIARelations##classe : public CATIARelations \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARelations, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateFormula(const CATBSTR & iName, const CATBSTR & iComment, CATIAParameter * iOutputParameter, const CATBSTR & iFormulaBody, CATIAFormula *& oFormula); \
      virtual HRESULT __stdcall CreateProgram(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iProgramBody, CATIAProgram *& oProgram); \
      virtual HRESULT __stdcall CreateCheck(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iCheckBody, CATIACheck *& oCheck); \
      virtual HRESULT __stdcall CreateDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable); \
      virtual HRESULT __stdcall CreateHorizontalDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable); \
      virtual HRESULT __stdcall CreateLaw(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iLawBody, CATIALaw *& oLaw); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIARelation *& oRelation); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall CreateRuleBase(const CATBSTR & iName, CATIARelation *& oRuleBase); \
      virtual HRESULT __stdcall get_Optimizations(CATIAOptimizations *& oOptimizations); \
      virtual HRESULT __stdcall SubList(CATIABase * iFeature, CAT_VARIANT_BOOL iRecursively, CATIARelations *& oListRelations); \
      virtual HRESULT __stdcall CreateSetOfEquations(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oSetOfEquation); \
      virtual HRESULT __stdcall CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction); \
      virtual HRESULT __stdcall CreateSetOfRelations(CATIABase * iParent); \
      virtual HRESULT __stdcall GenerateXMLReportForChecks(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIARelations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateFormula(const CATBSTR & iName, const CATBSTR & iComment, CATIAParameter * iOutputParameter, const CATBSTR & iFormulaBody, CATIAFormula *& oFormula); \
virtual HRESULT __stdcall CreateProgram(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iProgramBody, CATIAProgram *& oProgram); \
virtual HRESULT __stdcall CreateCheck(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iCheckBody, CATIACheck *& oCheck); \
virtual HRESULT __stdcall CreateDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable); \
virtual HRESULT __stdcall CreateHorizontalDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable); \
virtual HRESULT __stdcall CreateLaw(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iLawBody, CATIALaw *& oLaw); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIARelation *& oRelation); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall CreateRuleBase(const CATBSTR & iName, CATIARelation *& oRuleBase); \
virtual HRESULT __stdcall get_Optimizations(CATIAOptimizations *& oOptimizations); \
virtual HRESULT __stdcall SubList(CATIABase * iFeature, CAT_VARIANT_BOOL iRecursively, CATIARelations *& oListRelations); \
virtual HRESULT __stdcall CreateSetOfEquations(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oSetOfEquation); \
virtual HRESULT __stdcall CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction); \
virtual HRESULT __stdcall CreateSetOfRelations(CATIABase * iParent); \
virtual HRESULT __stdcall GenerateXMLReportForChecks(const CATBSTR & iName); \
virtual HRESULT __stdcall get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIARelations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateFormula(const CATBSTR & iName, const CATBSTR & iComment, CATIAParameter * iOutputParameter, const CATBSTR & iFormulaBody, CATIAFormula *& oFormula) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateFormula(iName,iComment,iOutputParameter,iFormulaBody,oFormula)); \
} \
HRESULT __stdcall  ENVTIEName::CreateProgram(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iProgramBody, CATIAProgram *& oProgram) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateProgram(iName,iComment,iProgramBody,oProgram)); \
} \
HRESULT __stdcall  ENVTIEName::CreateCheck(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iCheckBody, CATIACheck *& oCheck) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateCheck(iName,iComment,iCheckBody,oCheck)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateDesignTable(iName,iComment,iCopyMode,iSheetPath,oDesignTable)); \
} \
HRESULT __stdcall  ENVTIEName::CreateHorizontalDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateHorizontalDesignTable(iName,iComment,iCopyMode,iSheetPath,oDesignTable)); \
} \
HRESULT __stdcall  ENVTIEName::CreateLaw(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iLawBody, CATIALaw *& oLaw) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateLaw(iName,iComment,iLawBody,oLaw)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIARelation *& oRelation) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oRelation)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::CreateRuleBase(const CATBSTR & iName, CATIARelation *& oRuleBase) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateRuleBase(iName,oRuleBase)); \
} \
HRESULT __stdcall  ENVTIEName::get_Optimizations(CATIAOptimizations *& oOptimizations) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)get_Optimizations(oOptimizations)); \
} \
HRESULT __stdcall  ENVTIEName::SubList(CATIABase * iFeature, CAT_VARIANT_BOOL iRecursively, CATIARelations *& oListRelations) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)SubList(iFeature,iRecursively,oListRelations)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSetOfEquations(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oSetOfEquation) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateSetOfEquations(iName,iComment,iFormulaBody,oSetOfEquation)); \
} \
HRESULT __stdcall  ENVTIEName::CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateConstraintsSatisfaction(iName,iComment,iFormulaBody,oConstraintsSatisfaction)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSetOfRelations(CATIABase * iParent) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)CreateSetOfRelations(iParent)); \
} \
HRESULT __stdcall  ENVTIEName::GenerateXMLReportForChecks(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)GenerateXMLReportForChecks(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)get_FeatureGenerator(oGenerator)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIARelations,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARelations(classe)    TIECATIARelations##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARelations(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARelations, classe) \
 \
 \
CATImplementTIEMethods(CATIARelations, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARelations, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARelations, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARelations, classe) \
 \
HRESULT __stdcall  TIECATIARelations##classe::CreateFormula(const CATBSTR & iName, const CATBSTR & iComment, CATIAParameter * iOutputParameter, const CATBSTR & iFormulaBody, CATIAFormula *& oFormula) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&iComment,&iOutputParameter,&iFormulaBody,&oFormula); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateFormula(iName,iComment,iOutputParameter,iFormulaBody,oFormula); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&iComment,&iOutputParameter,&iFormulaBody,&oFormula); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateProgram(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iProgramBody, CATIAProgram *& oProgram) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&iComment,&iProgramBody,&oProgram); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateProgram(iName,iComment,iProgramBody,oProgram); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&iComment,&iProgramBody,&oProgram); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateCheck(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iCheckBody, CATIACheck *& oCheck) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName,&iComment,&iCheckBody,&oCheck); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCheck(iName,iComment,iCheckBody,oCheck); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName,&iComment,&iCheckBody,&oCheck); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iName,&iComment,&iCopyMode,&iSheetPath,&oDesignTable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDesignTable(iName,iComment,iCopyMode,iSheetPath,oDesignTable); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iName,&iComment,&iCopyMode,&iSheetPath,&oDesignTable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateHorizontalDesignTable(const CATBSTR & iName, const CATBSTR & iComment, CAT_VARIANT_BOOL iCopyMode, const CATBSTR & iSheetPath, CATIADesignTable *& oDesignTable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iName,&iComment,&iCopyMode,&iSheetPath,&oDesignTable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateHorizontalDesignTable(iName,iComment,iCopyMode,iSheetPath,oDesignTable); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iName,&iComment,&iCopyMode,&iSheetPath,&oDesignTable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateLaw(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iLawBody, CATIALaw *& oLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName,&iComment,&iLawBody,&oLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLaw(iName,iComment,iLawBody,oLaw); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName,&iComment,&iLawBody,&oLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::Item(const CATVariant & iIndex, CATIARelation *& oRelation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex,&oRelation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oRelation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex,&oRelation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateRuleBase(const CATBSTR & iName, CATIARelation *& oRuleBase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iName,&oRuleBase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRuleBase(iName,oRuleBase); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iName,&oRuleBase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::get_Optimizations(CATIAOptimizations *& oOptimizations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oOptimizations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Optimizations(oOptimizations); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oOptimizations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::SubList(CATIABase * iFeature, CAT_VARIANT_BOOL iRecursively, CATIARelations *& oListRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iFeature,&iRecursively,&oListRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SubList(iFeature,iRecursively,oListRelations); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iFeature,&iRecursively,&oListRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateSetOfEquations(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oSetOfEquation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iName,&iComment,&iFormulaBody,&oSetOfEquation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSetOfEquations(iName,iComment,iFormulaBody,oSetOfEquation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iName,&iComment,&iFormulaBody,&oSetOfEquation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iName,&iComment,&iFormulaBody,&oConstraintsSatisfaction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateConstraintsSatisfaction(iName,iComment,iFormulaBody,oConstraintsSatisfaction); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iName,&iComment,&iFormulaBody,&oConstraintsSatisfaction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::CreateSetOfRelations(CATIABase * iParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iParent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSetOfRelations(iParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iParent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::GenerateXMLReportForChecks(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateXMLReportForChecks(iName); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARelations##classe::get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oGenerator); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatureGenerator(oGenerator); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oGenerator); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARelations##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARelations##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARelations##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARelations##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARelations##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARelations##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARelations(classe) \
 \
 \
declare_TIE_CATIARelations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARelations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARelations,"CATIARelations",CATIARelations::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARelations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARelations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARelations##classe(classe::MetaObject(),CATIARelations::MetaObject(),(void *)CreateTIECATIARelations##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARelations(classe) \
 \
 \
declare_TIE_CATIARelations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARelations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARelations,"CATIARelations",CATIARelations::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARelations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARelations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARelations##classe(classe::MetaObject(),CATIARelations::MetaObject(),(void *)CreateTIECATIARelations##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARelations(classe) TIE_CATIARelations(classe)
#else
#define BOA_CATIARelations(classe) CATImplementBOA(CATIARelations, classe)
#endif

#endif
