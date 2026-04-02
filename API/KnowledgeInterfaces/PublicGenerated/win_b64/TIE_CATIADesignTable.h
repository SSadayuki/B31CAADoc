#ifndef __TIE_CATIADesignTable
#define __TIE_CATIADesignTable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADesignTable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADesignTable */
#define declare_TIE_CATIADesignTable(classe) \
 \
 \
class TIECATIADesignTable##classe : public CATIADesignTable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADesignTable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddAssociation(CATIAParameter * iParameter, const CATBSTR & iSheetColumn); \
      virtual HRESULT __stdcall RemoveAssociation(const CATBSTR & iSheetColumn); \
      virtual HRESULT __stdcall AddNewRow(); \
      virtual HRESULT __stdcall get_CopyMode(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_CopyMode(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_Configuration(short & oLineNb); \
      virtual HRESULT __stdcall put_Configuration(short iLineNb); \
      virtual HRESULT __stdcall get_ConfigurationsNb(short & oConfigurationsNb); \
      virtual HRESULT __stdcall get_FilePath(CATBSTR & oFilePath); \
      virtual HRESULT __stdcall put_FilePath(const CATBSTR & iFilePath); \
      virtual HRESULT __stdcall get_ColumnsNb(short & oColumns); \
      virtual HRESULT __stdcall CellAsString(short iRow, short iColumn, CATBSTR & oValue); \
      virtual HRESULT __stdcall Synchronize(); \
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



#define ENVTIEdeclare_CATIADesignTable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddAssociation(CATIAParameter * iParameter, const CATBSTR & iSheetColumn); \
virtual HRESULT __stdcall RemoveAssociation(const CATBSTR & iSheetColumn); \
virtual HRESULT __stdcall AddNewRow(); \
virtual HRESULT __stdcall get_CopyMode(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_CopyMode(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_Configuration(short & oLineNb); \
virtual HRESULT __stdcall put_Configuration(short iLineNb); \
virtual HRESULT __stdcall get_ConfigurationsNb(short & oConfigurationsNb); \
virtual HRESULT __stdcall get_FilePath(CATBSTR & oFilePath); \
virtual HRESULT __stdcall put_FilePath(const CATBSTR & iFilePath); \
virtual HRESULT __stdcall get_ColumnsNb(short & oColumns); \
virtual HRESULT __stdcall CellAsString(short iRow, short iColumn, CATBSTR & oValue); \
virtual HRESULT __stdcall Synchronize(); \
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


#define ENVTIEdefine_CATIADesignTable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddAssociation(CATIAParameter * iParameter, const CATBSTR & iSheetColumn) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)AddAssociation(iParameter,iSheetColumn)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAssociation(const CATBSTR & iSheetColumn) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)RemoveAssociation(iSheetColumn)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRow() \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)AddNewRow()); \
} \
HRESULT __stdcall  ENVTIEName::get_CopyMode(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_CopyMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_CopyMode(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)put_CopyMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Configuration(short & oLineNb) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Configuration(oLineNb)); \
} \
HRESULT __stdcall  ENVTIEName::put_Configuration(short iLineNb) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)put_Configuration(iLineNb)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConfigurationsNb(short & oConfigurationsNb) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_ConfigurationsNb(oConfigurationsNb)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilePath(CATBSTR & oFilePath) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_FilePath(oFilePath)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilePath(const CATBSTR & iFilePath) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)put_FilePath(iFilePath)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColumnsNb(short & oColumns) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_ColumnsNb(oColumns)); \
} \
HRESULT __stdcall  ENVTIEName::CellAsString(short iRow, short iColumn, CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)CellAsString(iRow,iColumn,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::Synchronize() \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)Synchronize()); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Rename(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)Rename(iName)); \
} \
HRESULT __stdcall  ENVTIEName::Modify(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)Modify(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbInParameters(CATLONG & oNbInputs) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_NbInParameters(oNbInputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_NbOutParameters(oNbOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)GetInParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)GetOutParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIABase *& oContext) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Activated(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADesignTable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADesignTable(classe)    TIECATIADesignTable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADesignTable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADesignTable, classe) \
 \
 \
CATImplementTIEMethods(CATIADesignTable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADesignTable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADesignTable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADesignTable, classe) \
 \
HRESULT __stdcall  TIECATIADesignTable##classe::AddAssociation(CATIAParameter * iParameter, const CATBSTR & iSheetColumn) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iParameter,&iSheetColumn); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAssociation(iParameter,iSheetColumn); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iParameter,&iSheetColumn); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::RemoveAssociation(const CATBSTR & iSheetColumn) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSheetColumn); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAssociation(iSheetColumn); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSheetColumn); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::AddNewRow() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRow(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_CopyMode(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CopyMode(oMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::put_CopyMode(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CopyMode(iMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_Configuration(short & oLineNb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oLineNb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Configuration(oLineNb); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oLineNb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::put_Configuration(short iLineNb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLineNb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Configuration(iLineNb); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLineNb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_ConfigurationsNb(short & oConfigurationsNb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oConfigurationsNb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConfigurationsNb(oConfigurationsNb); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oConfigurationsNb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_FilePath(CATBSTR & oFilePath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oFilePath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilePath(oFilePath); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oFilePath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::put_FilePath(const CATBSTR & iFilePath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iFilePath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilePath(iFilePath); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iFilePath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_ColumnsNb(short & oColumns) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oColumns); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColumnsNb(oColumns); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oColumns); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::CellAsString(short iRow, short iColumn, CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRow,&iColumn,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CellAsString(iRow,iColumn,oValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRow,&iColumn,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::Synchronize() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Synchronize(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_Value(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::Rename(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rename(iName); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::Modify(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Modify(iValue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_NbInParameters(CATLONG & oNbInputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNbInputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbInParameters(oNbInputs); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNbInputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNbOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbOutParameters(oNbOutputs); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNbOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInParameter(iIndex,oParameter); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutParameter(iIndex,oParameter); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_Context(CATIABase *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activated(oActivated); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADesignTable##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADesignTable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADesignTable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADesignTable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADesignTable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADesignTable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADesignTable(classe) \
 \
 \
declare_TIE_CATIADesignTable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADesignTable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADesignTable,"CATIADesignTable",CATIADesignTable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADesignTable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADesignTable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADesignTable##classe(classe::MetaObject(),CATIADesignTable::MetaObject(),(void *)CreateTIECATIADesignTable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADesignTable(classe) \
 \
 \
declare_TIE_CATIADesignTable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADesignTable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADesignTable,"CATIADesignTable",CATIADesignTable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADesignTable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADesignTable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADesignTable##classe(classe::MetaObject(),CATIADesignTable::MetaObject(),(void *)CreateTIECATIADesignTable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADesignTable(classe) TIE_CATIADesignTable(classe)
#else
#define BOA_CATIADesignTable(classe) CATImplementBOA(CATIADesignTable, classe)
#endif

#endif
