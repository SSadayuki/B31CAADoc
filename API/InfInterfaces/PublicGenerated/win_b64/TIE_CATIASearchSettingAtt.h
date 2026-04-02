#ifndef __TIE_CATIASearchSettingAtt
#define __TIE_CATIASearchSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASearchSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASearchSettingAtt */
#define declare_TIE_CATIASearchSettingAtt(classe) \
 \
 \
class TIECATIASearchSettingAtt##classe : public CATIASearchSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASearchSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DefaultPowerInputPrefix(CATBSTR & oPrefix); \
      virtual HRESULT __stdcall put_DefaultPowerInputPrefix(const CATBSTR & iPrefix); \
      virtual HRESULT __stdcall GetDefaultPowerInputPrefixInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultPowerInputPrefixLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultPowerInputContextScope(CATSearchContextScope & oScope); \
      virtual HRESULT __stdcall put_DefaultPowerInputContextScope(CATSearchContextScope iScope); \
      virtual HRESULT __stdcall GetDefaultPowerInputContextScopeInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultPowerInputContextScopeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL & oPriority); \
      virtual HRESULT __stdcall put_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL iPriority); \
      virtual HRESULT __stdcall GetDefaultPowerInputContextPriorityInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultPowerInputContextPriorityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DeepSearchActivation(CAT_VARIANT_BOOL & oActivation); \
      virtual HRESULT __stdcall put_DeepSearchActivation(CAT_VARIANT_BOOL iActivation); \
      virtual HRESULT __stdcall GetDeepSearchActivationInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDeepSearchActivationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MaxDisplayedResults(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MaxDisplayedResults(CATLONG iValue); \
      virtual HRESULT __stdcall GetMaxDisplayedResultsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMaxDisplayedResultsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MaxPreHighlightedElements(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MaxPreHighlightedElements(CATLONG iValue); \
      virtual HRESULT __stdcall GetMaxPreHighlightedElementsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMaxPreHighlightedElementsLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIASearchSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DefaultPowerInputPrefix(CATBSTR & oPrefix); \
virtual HRESULT __stdcall put_DefaultPowerInputPrefix(const CATBSTR & iPrefix); \
virtual HRESULT __stdcall GetDefaultPowerInputPrefixInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultPowerInputPrefixLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultPowerInputContextScope(CATSearchContextScope & oScope); \
virtual HRESULT __stdcall put_DefaultPowerInputContextScope(CATSearchContextScope iScope); \
virtual HRESULT __stdcall GetDefaultPowerInputContextScopeInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultPowerInputContextScopeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL & oPriority); \
virtual HRESULT __stdcall put_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL iPriority); \
virtual HRESULT __stdcall GetDefaultPowerInputContextPriorityInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultPowerInputContextPriorityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DeepSearchActivation(CAT_VARIANT_BOOL & oActivation); \
virtual HRESULT __stdcall put_DeepSearchActivation(CAT_VARIANT_BOOL iActivation); \
virtual HRESULT __stdcall GetDeepSearchActivationInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDeepSearchActivationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MaxDisplayedResults(CATLONG & oValue); \
virtual HRESULT __stdcall put_MaxDisplayedResults(CATLONG iValue); \
virtual HRESULT __stdcall GetMaxDisplayedResultsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMaxDisplayedResultsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MaxPreHighlightedElements(CATLONG & oValue); \
virtual HRESULT __stdcall put_MaxPreHighlightedElements(CATLONG iValue); \
virtual HRESULT __stdcall GetMaxPreHighlightedElementsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMaxPreHighlightedElementsLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIASearchSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DefaultPowerInputPrefix(CATBSTR & oPrefix) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultPowerInputPrefix(oPrefix)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultPowerInputPrefix(const CATBSTR & iPrefix) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultPowerInputPrefix(iPrefix)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultPowerInputPrefixInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultPowerInputPrefixInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultPowerInputPrefixLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultPowerInputPrefixLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultPowerInputContextScope(CATSearchContextScope & oScope) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultPowerInputContextScope(oScope)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultPowerInputContextScope(CATSearchContextScope iScope) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultPowerInputContextScope(iScope)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultPowerInputContextScopeInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultPowerInputContextScopeInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultPowerInputContextScopeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultPowerInputContextScopeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL & oPriority) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultPowerInputContextPriority(oPriority)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL iPriority) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultPowerInputContextPriority(iPriority)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultPowerInputContextPriorityInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultPowerInputContextPriorityInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultPowerInputContextPriorityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultPowerInputContextPriorityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeepSearchActivation(CAT_VARIANT_BOOL & oActivation) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DeepSearchActivation(oActivation)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeepSearchActivation(CAT_VARIANT_BOOL iActivation) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DeepSearchActivation(iActivation)); \
} \
HRESULT __stdcall  ENVTIEName::GetDeepSearchActivationInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDeepSearchActivationInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDeepSearchActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDeepSearchActivationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxDisplayedResults(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MaxDisplayedResults(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxDisplayedResults(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MaxDisplayedResults(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaxDisplayedResultsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMaxDisplayedResultsInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMaxDisplayedResultsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMaxDisplayedResultsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxPreHighlightedElements(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MaxPreHighlightedElements(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxPreHighlightedElements(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MaxPreHighlightedElements(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaxPreHighlightedElementsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMaxPreHighlightedElementsInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMaxPreHighlightedElementsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMaxPreHighlightedElementsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASearchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASearchSettingAtt(classe)    TIECATIASearchSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASearchSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASearchSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIASearchSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASearchSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASearchSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASearchSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::get_DefaultPowerInputPrefix(CATBSTR & oPrefix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPrefix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultPowerInputPrefix(oPrefix); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPrefix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::put_DefaultPowerInputPrefix(const CATBSTR & iPrefix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPrefix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultPowerInputPrefix(iPrefix); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPrefix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::GetDefaultPowerInputPrefixInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultPowerInputPrefixInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::SetDefaultPowerInputPrefixLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultPowerInputPrefixLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::get_DefaultPowerInputContextScope(CATSearchContextScope & oScope) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oScope); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultPowerInputContextScope(oScope); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oScope); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::put_DefaultPowerInputContextScope(CATSearchContextScope iScope) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iScope); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultPowerInputContextScope(iScope); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iScope); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::GetDefaultPowerInputContextScopeInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultPowerInputContextScopeInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::SetDefaultPowerInputContextScopeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultPowerInputContextScopeLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::get_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL & oPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultPowerInputContextPriority(oPriority); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::put_DefaultPowerInputContextPriority(CAT_VARIANT_BOOL iPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultPowerInputContextPriority(iPriority); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::GetDefaultPowerInputContextPriorityInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultPowerInputContextPriorityInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::SetDefaultPowerInputContextPriorityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultPowerInputContextPriorityLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::get_DeepSearchActivation(CAT_VARIANT_BOOL & oActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeepSearchActivation(oActivation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::put_DeepSearchActivation(CAT_VARIANT_BOOL iActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeepSearchActivation(iActivation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::GetDeepSearchActivationInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDeepSearchActivationInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::SetDeepSearchActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDeepSearchActivationLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::get_MaxDisplayedResults(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxDisplayedResults(oValue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::put_MaxDisplayedResults(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxDisplayedResults(iValue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::GetMaxDisplayedResultsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxDisplayedResultsInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::SetMaxDisplayedResultsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxDisplayedResultsLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::get_MaxPreHighlightedElements(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxPreHighlightedElements(oValue); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::put_MaxPreHighlightedElements(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxPreHighlightedElements(iValue); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::GetMaxPreHighlightedElementsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxPreHighlightedElementsInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::SetMaxPreHighlightedElementsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxPreHighlightedElementsLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASearchSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASearchSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASearchSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASearchSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASearchSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASearchSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASearchSettingAtt(classe) \
 \
 \
declare_TIE_CATIASearchSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASearchSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASearchSettingAtt,"CATIASearchSettingAtt",CATIASearchSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASearchSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASearchSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASearchSettingAtt##classe(classe::MetaObject(),CATIASearchSettingAtt::MetaObject(),(void *)CreateTIECATIASearchSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASearchSettingAtt(classe) \
 \
 \
declare_TIE_CATIASearchSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASearchSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASearchSettingAtt,"CATIASearchSettingAtt",CATIASearchSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASearchSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASearchSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASearchSettingAtt##classe(classe::MetaObject(),CATIASearchSettingAtt::MetaObject(),(void *)CreateTIECATIASearchSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASearchSettingAtt(classe) TIE_CATIASearchSettingAtt(classe)
#else
#define BOA_CATIASearchSettingAtt(classe) CATImplementBOA(CATIASearchSettingAtt, classe)
#endif

#endif
