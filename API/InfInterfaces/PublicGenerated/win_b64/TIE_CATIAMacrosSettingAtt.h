#ifndef __TIE_CATIAMacrosSettingAtt
#define __TIE_CATIAMacrosSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMacrosSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMacrosSettingAtt */
#define declare_TIE_CATIAMacrosSettingAtt(classe) \
 \
 \
class TIECATIAMacrosSettingAtt##classe : public CATIAMacrosSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMacrosSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetLanguageEditor(CATScriptLanguage iLanguage, CATBSTR & oEditorPath); \
      virtual HRESULT __stdcall SetLanguageEditor(CATScriptLanguage iLanguage, const CATBSTR & iEditorPath); \
      virtual HRESULT __stdcall SetLanguageEditorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetLanguageEditorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetExternalReferences(CATSafeArrayVariant *& oReferences); \
      virtual HRESULT __stdcall SetExternalReferences(const CATSafeArrayVariant & iReferences); \
      virtual HRESULT __stdcall SetExternalReferencesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetExternalReferencesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetDefaultMacroLibraries(CATSafeArrayVariant *& oLibraries); \
      virtual HRESULT __stdcall SetDefaultMacroLibraries(const CATSafeArrayVariant & iLibraries); \
      virtual HRESULT __stdcall SetDefaultMacroLibrariesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDefaultMacroLibrariesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIAMacrosSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetLanguageEditor(CATScriptLanguage iLanguage, CATBSTR & oEditorPath); \
virtual HRESULT __stdcall SetLanguageEditor(CATScriptLanguage iLanguage, const CATBSTR & iEditorPath); \
virtual HRESULT __stdcall SetLanguageEditorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetLanguageEditorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetExternalReferences(CATSafeArrayVariant *& oReferences); \
virtual HRESULT __stdcall SetExternalReferences(const CATSafeArrayVariant & iReferences); \
virtual HRESULT __stdcall SetExternalReferencesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetExternalReferencesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetDefaultMacroLibraries(CATSafeArrayVariant *& oLibraries); \
virtual HRESULT __stdcall SetDefaultMacroLibraries(const CATSafeArrayVariant & iLibraries); \
virtual HRESULT __stdcall SetDefaultMacroLibrariesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDefaultMacroLibrariesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIAMacrosSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetLanguageEditor(CATScriptLanguage iLanguage, CATBSTR & oEditorPath) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLanguageEditor(iLanguage,oEditorPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetLanguageEditor(CATScriptLanguage iLanguage, const CATBSTR & iEditorPath) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLanguageEditor(iLanguage,iEditorPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetLanguageEditorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLanguageEditorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetLanguageEditorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLanguageEditorInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetExternalReferences(CATSafeArrayVariant *& oReferences) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExternalReferences(oReferences)); \
} \
HRESULT __stdcall  ENVTIEName::SetExternalReferences(const CATSafeArrayVariant & iReferences) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExternalReferences(iReferences)); \
} \
HRESULT __stdcall  ENVTIEName::SetExternalReferencesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExternalReferencesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetExternalReferencesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExternalReferencesInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultMacroLibraries(CATSafeArrayVariant *& oLibraries) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultMacroLibraries(oLibraries)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultMacroLibraries(const CATSafeArrayVariant & iLibraries) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultMacroLibraries(iLibraries)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultMacroLibrariesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultMacroLibrariesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultMacroLibrariesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultMacroLibrariesInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMacrosSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMacrosSettingAtt(classe)    TIECATIAMacrosSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMacrosSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMacrosSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAMacrosSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMacrosSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMacrosSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMacrosSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::GetLanguageEditor(CATScriptLanguage iLanguage, CATBSTR & oEditorPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLanguage,&oEditorPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLanguageEditor(iLanguage,oEditorPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLanguage,&oEditorPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::SetLanguageEditor(CATScriptLanguage iLanguage, const CATBSTR & iEditorPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLanguage,&iEditorPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLanguageEditor(iLanguage,iEditorPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLanguage,&iEditorPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::SetLanguageEditorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLanguageEditorLock(iLocked); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::GetLanguageEditorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLanguageEditorInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::GetExternalReferences(CATSafeArrayVariant *& oReferences) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oReferences); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalReferences(oReferences); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oReferences); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::SetExternalReferences(const CATSafeArrayVariant & iReferences) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iReferences); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalReferences(iReferences); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iReferences); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::SetExternalReferencesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalReferencesLock(iLocked); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::GetExternalReferencesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalReferencesInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::GetDefaultMacroLibraries(CATSafeArrayVariant *& oLibraries) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oLibraries); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultMacroLibraries(oLibraries); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oLibraries); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::SetDefaultMacroLibraries(const CATSafeArrayVariant & iLibraries) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iLibraries); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultMacroLibraries(iLibraries); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iLibraries); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::SetDefaultMacroLibrariesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultMacroLibrariesLock(iLocked); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::GetDefaultMacroLibrariesInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultMacroLibrariesInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMacrosSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMacrosSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMacrosSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMacrosSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMacrosSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMacrosSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMacrosSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMacrosSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMacrosSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMacrosSettingAtt,"CATIAMacrosSettingAtt",CATIAMacrosSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMacrosSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMacrosSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMacrosSettingAtt##classe(classe::MetaObject(),CATIAMacrosSettingAtt::MetaObject(),(void *)CreateTIECATIAMacrosSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMacrosSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMacrosSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMacrosSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMacrosSettingAtt,"CATIAMacrosSettingAtt",CATIAMacrosSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMacrosSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMacrosSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMacrosSettingAtt##classe(classe::MetaObject(),CATIAMacrosSettingAtt::MetaObject(),(void *)CreateTIECATIAMacrosSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMacrosSettingAtt(classe) TIE_CATIAMacrosSettingAtt(classe)
#else
#define BOA_CATIAMacrosSettingAtt(classe) CATImplementBOA(CATIAMacrosSettingAtt, classe)
#endif

#endif
