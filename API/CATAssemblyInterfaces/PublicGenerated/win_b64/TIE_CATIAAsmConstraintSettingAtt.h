#ifndef __TIE_CATIAAsmConstraintSettingAtt
#define __TIE_CATIAAsmConstraintSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAsmConstraintSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAsmConstraintSettingAtt */
#define declare_TIE_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
class TIECATIAAsmConstraintSettingAtt##classe : public CATIAAsmConstraintSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAsmConstraintSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PasteComponentMode(CatAsmPasteComponentMode & oPasteComponentMode); \
      virtual HRESULT __stdcall put_PasteComponentMode(CatAsmPasteComponentMode iPasteComponentMode); \
      virtual HRESULT __stdcall GetPasteComponentModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPasteComponentModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ConstraintCreationMode(CatAsmConstraintCreationMode & oConstraintCreationMode); \
      virtual HRESULT __stdcall put_ConstraintCreationMode(CatAsmConstraintCreationMode iConstraintCreationMode); \
      virtual HRESULT __stdcall GetConstraintCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetConstraintCreationModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall put_RedundancyMode(CatAsmRedundancyMode iRedundancyMode); \
      virtual HRESULT __stdcall get_RedundancyMode(CatAsmRedundancyMode & oRedundancyMode); \
      virtual HRESULT __stdcall get_QuickConstraintMode(CatAsmQuickConstraintMode & oQuickConstraintMode); \
      virtual HRESULT __stdcall put_QuickConstraintMode(CatAsmQuickConstraintMode iQuickConstraintMode); \
      virtual HRESULT __stdcall GetQuickConstraintOrderedList(CATSafeArrayVariant *& oList); \
      virtual HRESULT __stdcall SetQuickConstraintOrderedList(const CATSafeArrayVariant & iList); \
      virtual HRESULT __stdcall GetQuickConstraintModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetQuickConstraintModeLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAAsmConstraintSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PasteComponentMode(CatAsmPasteComponentMode & oPasteComponentMode); \
virtual HRESULT __stdcall put_PasteComponentMode(CatAsmPasteComponentMode iPasteComponentMode); \
virtual HRESULT __stdcall GetPasteComponentModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPasteComponentModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ConstraintCreationMode(CatAsmConstraintCreationMode & oConstraintCreationMode); \
virtual HRESULT __stdcall put_ConstraintCreationMode(CatAsmConstraintCreationMode iConstraintCreationMode); \
virtual HRESULT __stdcall GetConstraintCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetConstraintCreationModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall put_RedundancyMode(CatAsmRedundancyMode iRedundancyMode); \
virtual HRESULT __stdcall get_RedundancyMode(CatAsmRedundancyMode & oRedundancyMode); \
virtual HRESULT __stdcall get_QuickConstraintMode(CatAsmQuickConstraintMode & oQuickConstraintMode); \
virtual HRESULT __stdcall put_QuickConstraintMode(CatAsmQuickConstraintMode iQuickConstraintMode); \
virtual HRESULT __stdcall GetQuickConstraintOrderedList(CATSafeArrayVariant *& oList); \
virtual HRESULT __stdcall SetQuickConstraintOrderedList(const CATSafeArrayVariant & iList); \
virtual HRESULT __stdcall GetQuickConstraintModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetQuickConstraintModeLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAAsmConstraintSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PasteComponentMode(CatAsmPasteComponentMode & oPasteComponentMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PasteComponentMode(oPasteComponentMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PasteComponentMode(CatAsmPasteComponentMode iPasteComponentMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PasteComponentMode(iPasteComponentMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetPasteComponentModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPasteComponentModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPasteComponentModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPasteComponentModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConstraintCreationMode(CatAsmConstraintCreationMode & oConstraintCreationMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ConstraintCreationMode(oConstraintCreationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConstraintCreationMode(CatAsmConstraintCreationMode iConstraintCreationMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ConstraintCreationMode(iConstraintCreationMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetConstraintCreationModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetConstraintCreationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetConstraintCreationModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::put_RedundancyMode(CatAsmRedundancyMode iRedundancyMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RedundancyMode(iRedundancyMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_RedundancyMode(CatAsmRedundancyMode & oRedundancyMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RedundancyMode(oRedundancyMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_QuickConstraintMode(CatAsmQuickConstraintMode & oQuickConstraintMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_QuickConstraintMode(oQuickConstraintMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_QuickConstraintMode(CatAsmQuickConstraintMode iQuickConstraintMode) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_QuickConstraintMode(iQuickConstraintMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetQuickConstraintOrderedList(CATSafeArrayVariant *& oList) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetQuickConstraintOrderedList(oList)); \
} \
HRESULT __stdcall  ENVTIEName::SetQuickConstraintOrderedList(const CATSafeArrayVariant & iList) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetQuickConstraintOrderedList(iList)); \
} \
HRESULT __stdcall  ENVTIEName::GetQuickConstraintModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetQuickConstraintModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetQuickConstraintModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetQuickConstraintModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAsmConstraintSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAsmConstraintSettingAtt(classe)    TIECATIAAsmConstraintSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAsmConstraintSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAAsmConstraintSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAsmConstraintSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAsmConstraintSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAsmConstraintSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::get_PasteComponentMode(CatAsmPasteComponentMode & oPasteComponentMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPasteComponentMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PasteComponentMode(oPasteComponentMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPasteComponentMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::put_PasteComponentMode(CatAsmPasteComponentMode iPasteComponentMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPasteComponentMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PasteComponentMode(iPasteComponentMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPasteComponentMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::GetPasteComponentModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPasteComponentModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::SetPasteComponentModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPasteComponentModeLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::get_ConstraintCreationMode(CatAsmConstraintCreationMode & oConstraintCreationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oConstraintCreationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConstraintCreationMode(oConstraintCreationMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oConstraintCreationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::put_ConstraintCreationMode(CatAsmConstraintCreationMode iConstraintCreationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iConstraintCreationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConstraintCreationMode(iConstraintCreationMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iConstraintCreationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::GetConstraintCreationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintCreationModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::SetConstraintCreationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConstraintCreationModeLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::put_RedundancyMode(CatAsmRedundancyMode iRedundancyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iRedundancyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RedundancyMode(iRedundancyMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iRedundancyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::get_RedundancyMode(CatAsmRedundancyMode & oRedundancyMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oRedundancyMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RedundancyMode(oRedundancyMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oRedundancyMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::get_QuickConstraintMode(CatAsmQuickConstraintMode & oQuickConstraintMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oQuickConstraintMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_QuickConstraintMode(oQuickConstraintMode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oQuickConstraintMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::put_QuickConstraintMode(CatAsmQuickConstraintMode iQuickConstraintMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iQuickConstraintMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_QuickConstraintMode(iQuickConstraintMode); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iQuickConstraintMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::GetQuickConstraintOrderedList(CATSafeArrayVariant *& oList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetQuickConstraintOrderedList(oList); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::SetQuickConstraintOrderedList(const CATSafeArrayVariant & iList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetQuickConstraintOrderedList(iList); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::GetQuickConstraintModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetQuickConstraintModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::SetQuickConstraintModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetQuickConstraintModeLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmConstraintSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmConstraintSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmConstraintSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmConstraintSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmConstraintSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmConstraintSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAsmConstraintSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAsmConstraintSettingAtt,"CATIAAsmConstraintSettingAtt",CATIAAsmConstraintSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAsmConstraintSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAsmConstraintSettingAtt##classe(classe::MetaObject(),CATIAAsmConstraintSettingAtt::MetaObject(),(void *)CreateTIECATIAAsmConstraintSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAsmConstraintSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAsmConstraintSettingAtt,"CATIAAsmConstraintSettingAtt",CATIAAsmConstraintSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAsmConstraintSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAsmConstraintSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAsmConstraintSettingAtt##classe(classe::MetaObject(),CATIAAsmConstraintSettingAtt::MetaObject(),(void *)CreateTIECATIAAsmConstraintSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAsmConstraintSettingAtt(classe) TIE_CATIAAsmConstraintSettingAtt(classe)
#else
#define BOA_CATIAAsmConstraintSettingAtt(classe) CATImplementBOA(CATIAAsmConstraintSettingAtt, classe)
#endif

#endif
