#ifndef __TIE_CATIADocumentationSettingAtt
#define __TIE_CATIADocumentationSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADocumentationSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADocumentationSettingAtt */
#define declare_TIE_CATIADocumentationSettingAtt(classe) \
 \
 \
class TIECATIADocumentationSettingAtt##classe : public CATIADocumentationSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADocumentationSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_TechnicalDocumentationPath(CATBSTR & ioDocPath); \
      virtual HRESULT __stdcall put_TechnicalDocumentationPath(const CATBSTR & iDocPath); \
      virtual HRESULT __stdcall GetTechnicalDocumentationPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTechnicalDocumentationPathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DocLanguage(CATLONG & oDocLang); \
      virtual HRESULT __stdcall put_DocLanguage(CATLONG iDocLang); \
      virtual HRESULT __stdcall GetDocLanguageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDocLanguageLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CompanionPath(CATBSTR & ioUserCompPath); \
      virtual HRESULT __stdcall put_CompanionPath(const CATBSTR & iUserCompPath); \
      virtual HRESULT __stdcall GetCompanionPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCompanionPathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Priority(CATDocContextualPriority & oPriority); \
      virtual HRESULT __stdcall put_Priority(CATDocContextualPriority iPriority); \
      virtual HRESULT __stdcall GetPriorityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPriorityLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIADocumentationSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_TechnicalDocumentationPath(CATBSTR & ioDocPath); \
virtual HRESULT __stdcall put_TechnicalDocumentationPath(const CATBSTR & iDocPath); \
virtual HRESULT __stdcall GetTechnicalDocumentationPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTechnicalDocumentationPathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DocLanguage(CATLONG & oDocLang); \
virtual HRESULT __stdcall put_DocLanguage(CATLONG iDocLang); \
virtual HRESULT __stdcall GetDocLanguageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDocLanguageLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CompanionPath(CATBSTR & ioUserCompPath); \
virtual HRESULT __stdcall put_CompanionPath(const CATBSTR & iUserCompPath); \
virtual HRESULT __stdcall GetCompanionPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCompanionPathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Priority(CATDocContextualPriority & oPriority); \
virtual HRESULT __stdcall put_Priority(CATDocContextualPriority iPriority); \
virtual HRESULT __stdcall GetPriorityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPriorityLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIADocumentationSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_TechnicalDocumentationPath(CATBSTR & ioDocPath) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TechnicalDocumentationPath(ioDocPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_TechnicalDocumentationPath(const CATBSTR & iDocPath) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TechnicalDocumentationPath(iDocPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnicalDocumentationPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTechnicalDocumentationPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTechnicalDocumentationPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTechnicalDocumentationPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DocLanguage(CATLONG & oDocLang) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DocLanguage(oDocLang)); \
} \
HRESULT __stdcall  ENVTIEName::put_DocLanguage(CATLONG iDocLang) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DocLanguage(iDocLang)); \
} \
HRESULT __stdcall  ENVTIEName::GetDocLanguageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDocLanguageInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDocLanguageLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDocLanguageLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CompanionPath(CATBSTR & ioUserCompPath) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CompanionPath(ioUserCompPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_CompanionPath(const CATBSTR & iUserCompPath) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CompanionPath(iUserCompPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetCompanionPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCompanionPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCompanionPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCompanionPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Priority(CATDocContextualPriority & oPriority) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Priority(oPriority)); \
} \
HRESULT __stdcall  ENVTIEName::put_Priority(CATDocContextualPriority iPriority) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Priority(iPriority)); \
} \
HRESULT __stdcall  ENVTIEName::GetPriorityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPriorityInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPriorityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPriorityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADocumentationSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADocumentationSettingAtt(classe)    TIECATIADocumentationSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADocumentationSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADocumentationSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIADocumentationSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADocumentationSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADocumentationSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADocumentationSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::get_TechnicalDocumentationPath(CATBSTR & ioDocPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&ioDocPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TechnicalDocumentationPath(ioDocPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&ioDocPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::put_TechnicalDocumentationPath(const CATBSTR & iDocPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDocPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TechnicalDocumentationPath(iDocPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDocPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::GetTechnicalDocumentationPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnicalDocumentationPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::SetTechnicalDocumentationPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTechnicalDocumentationPathLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::get_DocLanguage(CATLONG & oDocLang) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDocLang); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DocLanguage(oDocLang); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDocLang); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::put_DocLanguage(CATLONG iDocLang) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDocLang); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DocLanguage(iDocLang); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDocLang); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::GetDocLanguageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocLanguageInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::SetDocLanguageLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDocLanguageLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::get_CompanionPath(CATBSTR & ioUserCompPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ioUserCompPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CompanionPath(ioUserCompPath); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ioUserCompPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::put_CompanionPath(const CATBSTR & iUserCompPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iUserCompPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CompanionPath(iUserCompPath); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iUserCompPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::GetCompanionPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompanionPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::SetCompanionPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCompanionPathLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::get_Priority(CATDocContextualPriority & oPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Priority(oPriority); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::put_Priority(CATDocContextualPriority iPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Priority(iPriority); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::GetPriorityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPriorityInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::SetPriorityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPriorityLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocumentationSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocumentationSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocumentationSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocumentationSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocumentationSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocumentationSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADocumentationSettingAtt(classe) \
 \
 \
declare_TIE_CATIADocumentationSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADocumentationSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADocumentationSettingAtt,"CATIADocumentationSettingAtt",CATIADocumentationSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADocumentationSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADocumentationSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADocumentationSettingAtt##classe(classe::MetaObject(),CATIADocumentationSettingAtt::MetaObject(),(void *)CreateTIECATIADocumentationSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADocumentationSettingAtt(classe) \
 \
 \
declare_TIE_CATIADocumentationSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADocumentationSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADocumentationSettingAtt,"CATIADocumentationSettingAtt",CATIADocumentationSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADocumentationSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADocumentationSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADocumentationSettingAtt##classe(classe::MetaObject(),CATIADocumentationSettingAtt::MetaObject(),(void *)CreateTIECATIADocumentationSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADocumentationSettingAtt(classe) TIE_CATIADocumentationSettingAtt(classe)
#else
#define BOA_CATIADocumentationSettingAtt(classe) CATImplementBOA(CATIADocumentationSettingAtt, classe)
#endif

#endif
