#ifndef __TIE_CATIAKnowledgeSheetSettingAtt
#define __TIE_CATIAKnowledgeSheetSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAKnowledgeSheetSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAKnowledgeSheetSettingAtt */
#define declare_TIE_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
class TIECATIAKnowledgeSheetSettingAtt##classe : public CATIAKnowledgeSheetSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAKnowledgeSheetSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ParameterTreeViewWithValue(short & oParameterTreeViewWithValue); \
      virtual HRESULT __stdcall put_ParameterTreeViewWithValue(short iParameterTreeViewWithValue); \
      virtual HRESULT __stdcall GetParameterTreeViewWithValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetParameterTreeViewWithValueLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ParameterTreeViewWithFormula(short & oParameterTreeViewWithFormula); \
      virtual HRESULT __stdcall put_ParameterTreeViewWithFormula(short iParameterTreeViewWithFormula); \
      virtual HRESULT __stdcall GetParameterTreeViewWithFormulaInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetParameterTreeViewWithFormulaLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ParameterNameSurroundedByTheSymbol(short & oParameterNameSurroundedByTheSymbol); \
      virtual HRESULT __stdcall put_ParameterNameSurroundedByTheSymbol(short iParameterNameSurroundedByTheSymbol); \
      virtual HRESULT __stdcall GetParameterNameSurroundedByTheSymbolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetParameterNameSurroundedByTheSymbolLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_RelationsUpdateInPartContextSynchronousRelations(short & oRelationsUpdateInPartContextSynchronousRelations); \
      virtual HRESULT __stdcall put_RelationsUpdateInPartContextSynchronousRelations(short iRelationsUpdateInPartContextSynchronousRelations); \
      virtual HRESULT __stdcall GetRelationsUpdateInPartContextSynchronousRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetRelationsUpdateInPartContextSynchronousRelationsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_RelationsUpdateInPartContextEvaluateDuringUpdate(short & oRelationsUpdateInPartContextEvaluateDuringUpdate); \
      virtual HRESULT __stdcall put_RelationsUpdateInPartContextEvaluateDuringUpdate(short iRelationsUpdateInPartContextEvaluateDuringUpdate); \
      virtual HRESULT __stdcall GetRelationsUpdateInPartContextEvaluateDuringUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetRelationsUpdateInPartContextEvaluateDuringUpdateLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DesignTablesSynchronization(short & oDesignTablesSynchronization); \
      virtual HRESULT __stdcall put_DesignTablesSynchronization(short iDesignTablesSynchronization); \
      virtual HRESULT __stdcall GetDesignTablesSynchronizationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDesignTablesSynchronizationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DesignTablesCopyData(short & oDesignTablesCopyData); \
      virtual HRESULT __stdcall put_DesignTablesCopyData(short iDesignTablesCopyData); \
      virtual HRESULT __stdcall GetDesignTablesCopyDataInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDesignTablesCopyDataLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAKnowledgeSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ParameterTreeViewWithValue(short & oParameterTreeViewWithValue); \
virtual HRESULT __stdcall put_ParameterTreeViewWithValue(short iParameterTreeViewWithValue); \
virtual HRESULT __stdcall GetParameterTreeViewWithValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetParameterTreeViewWithValueLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ParameterTreeViewWithFormula(short & oParameterTreeViewWithFormula); \
virtual HRESULT __stdcall put_ParameterTreeViewWithFormula(short iParameterTreeViewWithFormula); \
virtual HRESULT __stdcall GetParameterTreeViewWithFormulaInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetParameterTreeViewWithFormulaLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ParameterNameSurroundedByTheSymbol(short & oParameterNameSurroundedByTheSymbol); \
virtual HRESULT __stdcall put_ParameterNameSurroundedByTheSymbol(short iParameterNameSurroundedByTheSymbol); \
virtual HRESULT __stdcall GetParameterNameSurroundedByTheSymbolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetParameterNameSurroundedByTheSymbolLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_RelationsUpdateInPartContextSynchronousRelations(short & oRelationsUpdateInPartContextSynchronousRelations); \
virtual HRESULT __stdcall put_RelationsUpdateInPartContextSynchronousRelations(short iRelationsUpdateInPartContextSynchronousRelations); \
virtual HRESULT __stdcall GetRelationsUpdateInPartContextSynchronousRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetRelationsUpdateInPartContextSynchronousRelationsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_RelationsUpdateInPartContextEvaluateDuringUpdate(short & oRelationsUpdateInPartContextEvaluateDuringUpdate); \
virtual HRESULT __stdcall put_RelationsUpdateInPartContextEvaluateDuringUpdate(short iRelationsUpdateInPartContextEvaluateDuringUpdate); \
virtual HRESULT __stdcall GetRelationsUpdateInPartContextEvaluateDuringUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetRelationsUpdateInPartContextEvaluateDuringUpdateLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DesignTablesSynchronization(short & oDesignTablesSynchronization); \
virtual HRESULT __stdcall put_DesignTablesSynchronization(short iDesignTablesSynchronization); \
virtual HRESULT __stdcall GetDesignTablesSynchronizationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDesignTablesSynchronizationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DesignTablesCopyData(short & oDesignTablesCopyData); \
virtual HRESULT __stdcall put_DesignTablesCopyData(short iDesignTablesCopyData); \
virtual HRESULT __stdcall GetDesignTablesCopyDataInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDesignTablesCopyDataLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAKnowledgeSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ParameterTreeViewWithValue(short & oParameterTreeViewWithValue) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ParameterTreeViewWithValue(oParameterTreeViewWithValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParameterTreeViewWithValue(short iParameterTreeViewWithValue) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ParameterTreeViewWithValue(iParameterTreeViewWithValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterTreeViewWithValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetParameterTreeViewWithValueInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetParameterTreeViewWithValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetParameterTreeViewWithValueLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParameterTreeViewWithFormula(short & oParameterTreeViewWithFormula) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ParameterTreeViewWithFormula(oParameterTreeViewWithFormula)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParameterTreeViewWithFormula(short iParameterTreeViewWithFormula) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ParameterTreeViewWithFormula(iParameterTreeViewWithFormula)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterTreeViewWithFormulaInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetParameterTreeViewWithFormulaInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetParameterTreeViewWithFormulaLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetParameterTreeViewWithFormulaLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParameterNameSurroundedByTheSymbol(short & oParameterNameSurroundedByTheSymbol) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ParameterNameSurroundedByTheSymbol(oParameterNameSurroundedByTheSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParameterNameSurroundedByTheSymbol(short iParameterNameSurroundedByTheSymbol) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ParameterNameSurroundedByTheSymbol(iParameterNameSurroundedByTheSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterNameSurroundedByTheSymbolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetParameterNameSurroundedByTheSymbolInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetParameterNameSurroundedByTheSymbolLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetParameterNameSurroundedByTheSymbolLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_RelationsUpdateInPartContextSynchronousRelations(short & oRelationsUpdateInPartContextSynchronousRelations) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RelationsUpdateInPartContextSynchronousRelations(oRelationsUpdateInPartContextSynchronousRelations)); \
} \
HRESULT __stdcall  ENVTIEName::put_RelationsUpdateInPartContextSynchronousRelations(short iRelationsUpdateInPartContextSynchronousRelations) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RelationsUpdateInPartContextSynchronousRelations(iRelationsUpdateInPartContextSynchronousRelations)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelationsUpdateInPartContextSynchronousRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRelationsUpdateInPartContextSynchronousRelationsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelationsUpdateInPartContextSynchronousRelationsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRelationsUpdateInPartContextSynchronousRelationsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_RelationsUpdateInPartContextEvaluateDuringUpdate(short & oRelationsUpdateInPartContextEvaluateDuringUpdate) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RelationsUpdateInPartContextEvaluateDuringUpdate(oRelationsUpdateInPartContextEvaluateDuringUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::put_RelationsUpdateInPartContextEvaluateDuringUpdate(short iRelationsUpdateInPartContextEvaluateDuringUpdate) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RelationsUpdateInPartContextEvaluateDuringUpdate(iRelationsUpdateInPartContextEvaluateDuringUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelationsUpdateInPartContextEvaluateDuringUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRelationsUpdateInPartContextEvaluateDuringUpdateInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelationsUpdateInPartContextEvaluateDuringUpdateLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRelationsUpdateInPartContextEvaluateDuringUpdateLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DesignTablesSynchronization(short & oDesignTablesSynchronization) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DesignTablesSynchronization(oDesignTablesSynchronization)); \
} \
HRESULT __stdcall  ENVTIEName::put_DesignTablesSynchronization(short iDesignTablesSynchronization) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DesignTablesSynchronization(iDesignTablesSynchronization)); \
} \
HRESULT __stdcall  ENVTIEName::GetDesignTablesSynchronizationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDesignTablesSynchronizationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDesignTablesSynchronizationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDesignTablesSynchronizationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DesignTablesCopyData(short & oDesignTablesCopyData) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DesignTablesCopyData(oDesignTablesCopyData)); \
} \
HRESULT __stdcall  ENVTIEName::put_DesignTablesCopyData(short iDesignTablesCopyData) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DesignTablesCopyData(iDesignTablesCopyData)); \
} \
HRESULT __stdcall  ENVTIEName::GetDesignTablesCopyDataInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDesignTablesCopyDataInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDesignTablesCopyDataLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDesignTablesCopyDataLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAKnowledgeSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAKnowledgeSheetSettingAtt(classe)    TIECATIAKnowledgeSheetSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAKnowledgeSheetSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAKnowledgeSheetSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAKnowledgeSheetSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAKnowledgeSheetSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAKnowledgeSheetSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_ParameterTreeViewWithValue(short & oParameterTreeViewWithValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oParameterTreeViewWithValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterTreeViewWithValue(oParameterTreeViewWithValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oParameterTreeViewWithValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_ParameterTreeViewWithValue(short iParameterTreeViewWithValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iParameterTreeViewWithValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParameterTreeViewWithValue(iParameterTreeViewWithValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iParameterTreeViewWithValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetParameterTreeViewWithValueInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterTreeViewWithValueInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SetParameterTreeViewWithValueLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterTreeViewWithValueLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_ParameterTreeViewWithFormula(short & oParameterTreeViewWithFormula) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParameterTreeViewWithFormula); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterTreeViewWithFormula(oParameterTreeViewWithFormula); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParameterTreeViewWithFormula); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_ParameterTreeViewWithFormula(short iParameterTreeViewWithFormula) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iParameterTreeViewWithFormula); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParameterTreeViewWithFormula(iParameterTreeViewWithFormula); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iParameterTreeViewWithFormula); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetParameterTreeViewWithFormulaInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterTreeViewWithFormulaInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SetParameterTreeViewWithFormulaLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterTreeViewWithFormulaLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_ParameterNameSurroundedByTheSymbol(short & oParameterNameSurroundedByTheSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParameterNameSurroundedByTheSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterNameSurroundedByTheSymbol(oParameterNameSurroundedByTheSymbol); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParameterNameSurroundedByTheSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_ParameterNameSurroundedByTheSymbol(short iParameterNameSurroundedByTheSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iParameterNameSurroundedByTheSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParameterNameSurroundedByTheSymbol(iParameterNameSurroundedByTheSymbol); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iParameterNameSurroundedByTheSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetParameterNameSurroundedByTheSymbolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterNameSurroundedByTheSymbolInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SetParameterNameSurroundedByTheSymbolLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterNameSurroundedByTheSymbolLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_RelationsUpdateInPartContextSynchronousRelations(short & oRelationsUpdateInPartContextSynchronousRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oRelationsUpdateInPartContextSynchronousRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RelationsUpdateInPartContextSynchronousRelations(oRelationsUpdateInPartContextSynchronousRelations); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oRelationsUpdateInPartContextSynchronousRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_RelationsUpdateInPartContextSynchronousRelations(short iRelationsUpdateInPartContextSynchronousRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iRelationsUpdateInPartContextSynchronousRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RelationsUpdateInPartContextSynchronousRelations(iRelationsUpdateInPartContextSynchronousRelations); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iRelationsUpdateInPartContextSynchronousRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetRelationsUpdateInPartContextSynchronousRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelationsUpdateInPartContextSynchronousRelationsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SetRelationsUpdateInPartContextSynchronousRelationsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelationsUpdateInPartContextSynchronousRelationsLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_RelationsUpdateInPartContextEvaluateDuringUpdate(short & oRelationsUpdateInPartContextEvaluateDuringUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oRelationsUpdateInPartContextEvaluateDuringUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RelationsUpdateInPartContextEvaluateDuringUpdate(oRelationsUpdateInPartContextEvaluateDuringUpdate); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oRelationsUpdateInPartContextEvaluateDuringUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_RelationsUpdateInPartContextEvaluateDuringUpdate(short iRelationsUpdateInPartContextEvaluateDuringUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iRelationsUpdateInPartContextEvaluateDuringUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RelationsUpdateInPartContextEvaluateDuringUpdate(iRelationsUpdateInPartContextEvaluateDuringUpdate); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iRelationsUpdateInPartContextEvaluateDuringUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetRelationsUpdateInPartContextEvaluateDuringUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelationsUpdateInPartContextEvaluateDuringUpdateInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SetRelationsUpdateInPartContextEvaluateDuringUpdateLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelationsUpdateInPartContextEvaluateDuringUpdateLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_DesignTablesSynchronization(short & oDesignTablesSynchronization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oDesignTablesSynchronization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DesignTablesSynchronization(oDesignTablesSynchronization); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oDesignTablesSynchronization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_DesignTablesSynchronization(short iDesignTablesSynchronization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iDesignTablesSynchronization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DesignTablesSynchronization(iDesignTablesSynchronization); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iDesignTablesSynchronization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetDesignTablesSynchronizationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignTablesSynchronizationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SetDesignTablesSynchronizationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDesignTablesSynchronizationLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_DesignTablesCopyData(short & oDesignTablesCopyData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oDesignTablesCopyData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DesignTablesCopyData(oDesignTablesCopyData); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oDesignTablesCopyData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_DesignTablesCopyData(short iDesignTablesCopyData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iDesignTablesCopyData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DesignTablesCopyData(iDesignTablesCopyData); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iDesignTablesCopyData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetDesignTablesCopyDataInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignTablesCopyDataInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SetDesignTablesCopyDataLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDesignTablesCopyDataLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeSheetSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKnowledgeSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKnowledgeSheetSettingAtt,"CATIAKnowledgeSheetSettingAtt",CATIAKnowledgeSheetSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAKnowledgeSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKnowledgeSheetSettingAtt##classe(classe::MetaObject(),CATIAKnowledgeSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAKnowledgeSheetSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKnowledgeSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKnowledgeSheetSettingAtt,"CATIAKnowledgeSheetSettingAtt",CATIAKnowledgeSheetSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKnowledgeSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAKnowledgeSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKnowledgeSheetSettingAtt##classe(classe::MetaObject(),CATIAKnowledgeSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAKnowledgeSheetSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAKnowledgeSheetSettingAtt(classe) TIE_CATIAKnowledgeSheetSettingAtt(classe)
#else
#define BOA_CATIAKnowledgeSheetSettingAtt(classe) CATImplementBOA(CATIAKnowledgeSheetSettingAtt, classe)
#endif

#endif
